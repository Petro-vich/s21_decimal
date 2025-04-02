#include "../s21_decimal.h"

int s21_is_zero(s21_decimal value) {
  return value.bits[0] == 0 && value.bits[1] == 0 && value.bits[2] == 0;
}


int s21_get_scale(unsigned value) {
  return (value >> 16) & 255;
}

void s21_set_scale(unsigned *bits, unsigned scale) {
  *bits = (*bits & 0xFF00FFFF) | (scale << 16);
}


// Checks if the mantissa of a big decimal is zero
int s21_is_zero_big(s21_big_decimal b_value) {
  int is_zero = 1;
  // Check mantissa bits (0-6 for a 7*32 = 224 bit mantissa, adjust if needed)
  // Assuming bits[0-6] hold the mantissa, bits[7] holds scale/sign
  for (int i = 0; i <= 6; ++i) {
    if (b_value.bits[i] != 0) {
      is_zero = 0;
      break;
    }
  }
  return is_zero;
}

// --- Conversion Helpers ---

// Converts s21_decimal to s21_big_decimal
s21_big_decimal s21_decimal_to_big(s21_decimal value) {
  s21_big_decimal result = {{0}}; // Initialize all to 0
  result.bits[0] = value.bits[0];
  result.bits[1] = value.bits[1];
  result.bits[2] = value.bits[2];
  // Copy scale and sign directly
  result.bits[7] = value.bits[3];
  return result;
}

// Converts s21_big_decimal to s21_decimal after normalization
// Assumes normalization (scale 0-28, rounding) has already happened.
// Checks for final mantissa overflow.
int s21_big_to_decimal(s21_big_decimal b_value, s21_decimal *result) {
  int status = HELPERS_OK;
  int scale = s21_get_scale(b_value.bits[7]);
  s21_set_sign(&b_value.bits[7], 0);
  int sign = s21_check_sign(b_value.bits[7]);
  // Check if mantissa fits in 96 bits (bits[3] to bits[6] must be 0)
  for (int i = 3; i <= 6; ++i) {
    if (b_value.bits[i] != 0) {
      status = sign ? NUM_TOO_SMALL : NUM_TOO_HIGH;
      break;
    }
  }

  // Check if scale is valid (should be after normalization)
  if (status == HELPERS_OK && (scale < 0 || scale > S21_MAX_SCALE)) {
    // This indicates an internal logic error if reached after normalize
    status = sign ? NUM_TOO_SMALL : NUM_TOO_HIGH;
  }


  if (status == HELPERS_OK) {
    memset(result, 0, sizeof(s21_decimal)); // Clear result first
    result->bits[0] = b_value.bits[0];
    result->bits[1] = b_value.bits[1];
    result->bits[2] = b_value.bits[2];
    result->bits[3] = b_value.bits[7]; // Copy scale/sign block
    // Ensure unused bits in bits[3] are zero
    result->bits[3] &= (S21_SIGN_MASK | S21_SCALE_MASK);
  } else {
    // On error, return zero decimal
    memset(result, 0, sizeof(s21_decimal));
  }

  return status;
}


// --- Bit Manipulation Helpers for Big Decimal ---

// Gets the value of a specific bit in the big decimal mantissa


// Sets a specific bit in the big decimal mantissa (to 1 or 0)
void s21_set_bit(s21_big_decimal *a, int num, int choice) {
  a->bits[num / 32] = choice ? a->bits[num / 32] | (1 << (num % 32))
  : a->bits[num / 32] & ~(1 << (num % 32));
}

// Performs left shift on the mantissa part of big decimal
// Returns HELPERS_OK or NUM_TOO_HIGH if overflow occurs
int s21_left_shift_big(s21_big_decimal *b_value, int shift) {
  if (shift <= 0) return HELPERS_OK;
  int status = HELPERS_OK;

  for (int s = 0; s < shift; ++s) {
    unsigned int carry = 0;
    // Check for potential overflow before shifting the highest element
    if ((b_value->bits[6] & S21_HIGH_BIT_UINT) != 0) {
      status = NUM_TOO_HIGH; // Overflow will occur
      // Optionally clear b_value on overflow? Depends on desired behavior.
      // memset(b_value->bits, 0, 7 * sizeof(unsigned int));
      return status;
    }
    for (int i = 0; i <= 6; ++i) {
      unsigned int next_carry = (b_value->bits[i] & S21_HIGH_BIT_UINT) ? 1 : 0;
      b_value->bits[i] <<= 1;
      b_value->bits[i] |= carry;
      carry = next_carry;
    }
    // If there's a carry out of the last element, it's an overflow (redundant check?)
    if (carry) {
      status = NUM_TOO_HIGH;
      return status;
    }
  }
  return status;
}

// Performs right shift on the mantissa part of big decimal
// Returns the last bit shifted out (useful for rounding)
// Note: This simple version doesn't return all shifted bits if shift > 1
int s21_right_shift_big(s21_big_decimal *b_value, int shift) {
  if (shift <= 0) return 0;
  int last_bit_out = 0;

  for (int s = 0; s < shift; ++s) {
    unsigned int carry = 0;
    last_bit_out = b_value->bits[0] & 1; // Bit being shifted out

    for (int i = 6; i >= 0; --i) {
      unsigned int next_carry = (b_value->bits[i] & 1) ? S21_HIGH_BIT_UINT : 0;
      b_value->bits[i] >>= 1;
      b_value->bits[i] |= carry;
      carry = next_carry;
    }
  }
  return last_bit_out; // Return only the very last bit shifted out
}

// --- Arithmetic Helpers for Big Decimal ---

s21_big_decimal s21_mul_big_by_10(s21_big_decimal value) {
  return s21_add_big(s21_shift_big(value, 3, 'L'),
                     s21_shift_big(value, 1, 'L'));
}
s21_big_decimal s21_add_big(s21_big_decimal value_1, s21_big_decimal value_2) {
  s21_big_decimal result = {{0}};
  int memory = 0, sum = 0;
  for (int i = 0; i < 32 * 7; i++) {
    sum = s21_check_bit(value_1, i) + s21_check_bit(value_2, i) + memory;
    memory = sum > 1 ? 1 : 0;
    s21_set_bit(&result, i, sum % 2);
  }
  result.bits[7] = value_1.bits[7];
  return result;
}


s21_big_decimal s21_sub_big(s21_big_decimal value_1, s21_big_decimal value_2) {
  s21_big_decimal result = {{0}};
  int debt = 0, sum = 0;
  for (int i = 0; i < 32 * 7; i++) {
    sum = s21_check_bit(value_1, i) - s21_check_bit(value_2, i) - debt;
    debt = sum < 0 ? 1 : 0;
    s21_set_bit(&result, i, (sum + 2) % 2); // Учёт отрицательных значений
  }
  result.bits[7] = value_1.bits[7];
  return result;
}


// Compares the mantissas of two big decimals
// Returns: 1 if b_val1 > b_val2, -1 if b_val1 < b_val2, 0 if equal
int s21_compare_big_mantissa(s21_big_decimal b_val1, s21_big_decimal b_val2) {
  for (int i = 6; i >= 0; --i) {
    if (b_val1.bits[i] > b_val2.bits[i]) return 1;
    if (b_val1.bits[i] < b_val2.bits[i]) return -1;
  }
  return 0;
}


s21_big_decimal s21_div_big_by_10(s21_big_decimal value,
                                   s21_big_decimal *result) {
  s21_big_decimal divider = {{10, 0, 0, 0, 0, 0, 0, 0}};
  return s21_div_big(value, divider, result);
}

// Gets the bit index of the most significant bit set in the mantissa
// Returns -1 if the number is zero.
int s21_get_highest_bit_big(s21_big_decimal b_value) {
  for (int i = 6; i >= 0; --i) {
    if (b_value.bits[i] != 0) {
      // Find the highest bit within this uint
      unsigned int val = b_value.bits[i];
      int bit_pos = 31;
      while (bit_pos >= 0) {
        if ((val >> bit_pos) & 1) {
          return i * 32 + bit_pos;
        }
        bit_pos--;
      }
    }
  }
  return -1; // Number is zero
}


// Performs integer division of big decimal mantissas: dividend / divisor
// Stores quotient in *b_quotient, returns remainder.
// Assumes divisor is not zero.
s21_big_decimal s21_div_big_by_mantissa(s21_big_decimal b_dividend,
                                        s21_big_decimal b_divisor,
                                        s21_big_decimal *b_quotient) {
  memset(b_quotient, 0, sizeof(s21_big_decimal)); // Clear quotient

  // If dividend < divisor, quotient is 0, remainder is dividend
  if (s21_compare_big_mantissa(b_dividend, b_divisor) < 0) {
    return b_dividend;
  }
  // If dividend == divisor, quotient is 1, remainder is 0
  if (s21_compare_big_mantissa(b_dividend, b_divisor) == 0) {
    b_quotient->bits[0] = 1;
    return (s21_big_decimal){{0}};
  }

  // Standard long division algorithm using bit shifts
  s21_big_decimal current_divisor = b_divisor; // Copy to modify alignment
  s21_big_decimal remainder = b_dividend;

  // Find alignment shift
  int dividend_msb = s21_get_highest_bit_big(remainder);
  int divisor_msb = s21_get_highest_bit_big(current_divisor);
  int shift = dividend_msb - divisor_msb;

  // Align divisor to the left
  if (shift > 0) {
    s21_left_shift_big(&current_divisor, shift);
  }

  // Perform division bit by bit from left to right
  while (shift >= 0) {
    // If &&current remainder >= aligned divisor
    if (s21_compare_big_mantissa(remainder, current_divisor) >= 0) {
      remainder = s21_sub_big(remainder, current_divisor); // Subtract divisor
      s21_set_bit(b_quotient, shift, 1);    // Set corresponding bit in quotient
    }
    // Shift aligned divisor one bit to the right
    s21_right_shift_big(&current_divisor, 1);
    shift--;
  }

  return remainder;
                                        }

                                        // --- Normalization Helper ---
                                        void s21_normalize_big(s21_big_decimal *value_1, s21_big_decimal *value_2) {
                                          int delta = s21_get_scale(value_1->bits[7]) - s21_get_scale(value_2->bits[7]);
                                          while (delta != 0) {
                                            if (delta > 0) {
                                              *value_2 = s21_mul_big_by_10(*value_2);
                                              delta--;
                                            } else {
                                              *value_1 = s21_mul_big_by_10(*value_1);
                                              delta++;
                                            }
                                          }
                                        }
                                        s21_big_decimal s21_shift_big(s21_big_decimal a, int value, char vector) {
                                          unsigned memory = 0, tmp = 0;
                                          while (value > 0) {
                                            if (vector == 'L') {
                                              for (int i = 0; i < 7; i++) {
                                                tmp = a.bits[i];
                                                a.bits[i] <<= (value > 31 ? 31 : value);
                                                a.bits[i] |= memory;
                                                memory = tmp >> (32 - (value > 31 ? 31 : value));
                                              }
                                            } else if (vector == 'R') {
                                              for (int i = 6; i >= 0; i--) {
                                                tmp = a.bits[i];
                                                a.bits[i] >>= (value > 31 ? 31 : value);
                                                a.bits[i] |= memory;
                                                memory = tmp << (32 - (value > 31 ? 31 : value));
                                              }
                                            }
                                            value -= 31;
                                          }
                                          return a;
                                        }

                                        int s21_align_scales(s21_big_decimal *a, s21_big_decimal *b) {
                                          int scale_a = s21_get_scale(a->bits[7]);
                                          int scale_b = s21_get_scale(b->bits[7]);
                                          int scale_diff = scale_a - scale_b;

                                          while (scale_diff != 0) {
                                            if (scale_diff > 0) {
                                              *b = s21_mul_big_by_10(*b);
                                              scale_b++;
                                            } else {
                                              *a = s21_mul_big_by_10(*a);
                                              scale_a++;
                                            }
                                            scale_diff = scale_a - scale_b;

                                            if (scale_a > S21_MAX_SCALE || scale_b > S21_MAX_SCALE)
                                              return NUM_TOO_HIGH;
                                          }
                                          return scale_a;
                                        }


                                        void s21_zero_decimal(s21_decimal *dst) {
                                          for (int i = 0; i < 4; i++) dst->bits[i] = 0;
                                        }


                                        int s21_compare_decimals(s21_decimal value_1, s21_decimal value_2) {
                                          int sign1 = s21_check_sign(value_1.bits[3]);
                                          int sign2 = s21_check_sign(value_2.bits[3]);
                                          s21_big_decimal big_value_1 = s21_decimal_to_big(value_1);
                                          s21_big_decimal big_value_2 = s21_decimal_to_big(value_2);
                                          s21_normalize_big(&big_value_1, &big_value_2);
                                          int comparison_result = 0;
                                          if (sign1 != sign2) {
                                            comparison_result = (sign1 > sign2) ? -1 : 1;
                                          } else {
                                            int mantissa_comparison =
                                            s21_big_mantissa_compare(big_value_1, big_value_2);
                                            if (sign1 == 1) {
                                              mantissa_comparison = -mantissa_comparison;
                                            }
                                            comparison_result = mantissa_comparison;
                                          }
                                          return comparison_result;
                                        }

                                        int s21_big_mantissa_compare(s21_big_decimal value_1, s21_big_decimal value_2) {
                                          for (int i = 6; i >= 0; --i) {
                                            if (value_1.bits[i] > value_2.bits[i]) return 1;
                                            if (value_1.bits[i] < value_2.bits[i]) return -1;
                                          }
                                          return 0;
                                        }
                                        int s21_big_mantissa_is_equal(s21_big_decimal value_1, s21_big_decimal value_2) {
                                          return s21_big_mantissa_compare(value_1, value_2) == 0;
                                        }

                                        int s21_big_mantissa_is_greater(s21_big_decimal value_1, s21_big_decimal value_2) {
                                          return s21_big_mantissa_compare(value_1, value_2) == 1;
                                        }
int s21_big_mantissa_is_less(s21_big_decimal value_1, s21_big_decimal value_2) {
  return s21_big_mantissa_compare(value_1, value_2) == -1;
}                                        

int s21_check_sign(unsigned value) { return (value >> 31) & 1; }

  void s21_set_sign(unsigned *value, int choice) {
  *value = choice ? *value | (choice << 31) : *value & ~(1 << 31);
}
int s21_is_overflow(s21_big_decimal a) {
  for (int i = 3; i < 7; i++) {
    if (a.bits[i] != 0)
      return 1;
  }
  return 0;
}
int s21_could_be_converted(s21_big_decimal value) {
  int ret = AR_OK;
  int sign = s21_check_sign(value.bits[7]);
  s21_set_sign(&value.bits[7], 0);
  int scale = s21_get_scale(value.bits[7]);
  // if overflow
  while (scale > 0 && s21_is_overflow(value)) {
    s21_big_decimal reminader = s21_div_big_by_10(value, &value);
    s21_big_decimal five = {{5, 0, 0, 0, 0, 0, 0, 0}};
    if (s21_big_mantissa_is_equal(reminader, five)) {
      if (value.bits[0] & 1) {
        value = s21_add_big(value, (s21_big_decimal){{1, 0, 0, 0, 0, 0, 0, 0}});
      }
    } else if (s21_big_mantissa_is_greater(reminader, five)) {
      value = s21_add_big(value, (s21_big_decimal){{1, 0, 0, 0, 0, 0, 0, 0}});
    }
    scale--;
  }
  if (s21_is_overflow(value)) {
    if (sign) {
      ret = NUM_TOO_SMALL;
    } else {
      ret = NUM_TOO_HIGH;
    }
  }
  return ret;
}

s21_decimal s21_from_big_to_decimal(s21_big_decimal a) {
  int sign = s21_check_sign(a.bits[7]);
  s21_set_sign(&a.bits[7], 0);
  s21_decimal b = {0};
  int scale = s21_get_scale(a.bits[7]);
  // if overflow
  while ((scale > 0 && s21_is_overflow(a)) || scale > 28) {
    s21_big_decimal reminader = s21_div_big_by_10(a, &a);
    s21_big_decimal five = {{5, 0, 0, 0, 0, 0, 0, 0}};
    if (s21_big_mantissa_is_equal(reminader, five)) {
      if (a.bits[0] & 1) {
        a = s21_add_big(a, (s21_big_decimal){{1, 0, 0, 0, 0, 0, 0, 0}});
      }
    } else if (s21_big_mantissa_is_greater(reminader, five)) {
      a = s21_add_big(a, (s21_big_decimal){{1, 0, 0, 0, 0, 0, 0, 0}});
    }
    scale--;
  }
  s21_set_sign(&a.bits[7], sign);
  for (int i = 0; i < 3; i++) b.bits[i] = a.bits[i];
  b.bits[3] = a.bits[7];
  s21_set_scale(&b.bits[3], scale);
  return b;
}

int s21_get_width(s21_big_decimal value) {
  int width = 0;
  for (int i = 32 * 7 - 1; i >= 0 && !width; i--) {
    if (s21_check_bit(value, i)) width = i;
  }
  return width;
}
s21_big_decimal s21_div_big(s21_big_decimal divisible, s21_big_decimal divider, s21_big_decimal *result) {
  s21_big_decimal remainder = {{0}};
  int delta = s21_get_width(divisible) + 1;
  memset(result, 0, sizeof(s21_big_decimal));
  while (delta) {
    remainder = s21_shift_big(remainder, 1, 'L');
    s21_set_bit(&remainder, 0, s21_check_bit(divisible, --delta));
    if (s21_big_mantissa_is_greater_or_equal(remainder, divider)) {
      remainder = s21_sub_big(remainder, divider);
      s21_set_bit(result, delta, 1);
    }
  }
  return remainder;
}

int s21_big_mantissa_is_greater_or_equal(s21_big_decimal value_1,
                                         s21_big_decimal value_2) {
  int compare_result = s21_big_mantissa_compare(value_1, value_2);
  return compare_result == 1 || compare_result == 0;
}
int s21_check_bit(s21_big_decimal a, int num) {
  return (a.bits[num / 32] >> (num % 32)) & 1;
}
