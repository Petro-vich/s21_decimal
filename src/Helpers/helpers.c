#include "../s21_decimal.h"

int s21_is_zero(s21_decimal value) {
  return value.bits[0] == 0 && value.bits[1] == 0 && value.bits[2] == 0;
}

int s21_get_sign(s21_decimal value) {
  return (value.bits[3] & S21_SIGN_MASK) != 0;
}

int s21_get_scale(unsigned value) {
  return (value >> 16) & 255;
}

void s21_set_scale(unsigned *bits, unsigned scale) {
  *bits = (*bits & 0xFF00FFFF) | (scale << 16);
}

int s21_get_sign_big(s21_big_decimal b_value) {
  return (b_value.bits[7] & S21_SIGN_MASK) != 0;
}

// Sets the sign in the big decimal's last element
void s21_set_sign_big(s21_big_decimal *b_value, int sign) {
  if (sign) {
    b_value->bits[7] |= S21_SIGN_MASK;
  } else {
    b_value->bits[7] &= ~S21_SIGN_MASK;
  }
}

// Gets the scale from the big decimal's last element
int s21_get_scale_big(s21_big_decimal b_value) {
  return (b_value.bits[7] & S21_SCALE_MASK) >> S21_SCALE_SHIFT;
}

// Sets the scale in the big decimal's last element (allows > 28 temporarily)
// No validation here, normalization function handles the range.
void s21_set_scale_big(s21_big_decimal *b_value, int scale) {
  // Clear existing scale bits
  b_value->bits[7] &= ~(S21_SCALE_MASK);
  // Set new scale bits (handle potential negative scale during intermediate calc)
  if (scale >= 0) {
    b_value->bits[7] |= ((unsigned int)scale << S21_SCALE_SHIFT);
  } else {
    // Or handle negative scale representation if needed, but usually it's adjusted
    // This implementation assumes scale is adjusted back to >= 0 before final conversion
  }
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
  int scale = s21_get_scale_big(b_value);
  int sign = s21_get_sign_big(b_value);

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
int s21_get_bit_big(s21_big_decimal b_value, int bit_index) {
  // Mantissa uses bits 0 to 223 (indices 0-6)
  if (bit_index < 0 || bit_index >= 7 * 32) {
    return 0; // Out of bounds
  }
  int element_index = bit_index / 32;
  int bit_offset = bit_index % 32;
  return (b_value.bits[element_index] >> bit_offset) & 1;
}

// Sets a specific bit in the big decimal mantissa (to 1 or 0)
void s21_set_bit_big(s21_big_decimal *b_value, int bit_index, int bit_value) {
  // Mantissa uses bits 0 to 223 (indices 0-6)
  if (bit_index < 0 || bit_index >= 7 * 32) {
    return; // Out of bounds
  }
  int element_index = bit_index / 32;
  int bit_offset = bit_index % 32;
  if (bit_value) {
    b_value->bits[element_index] |= (1U << bit_offset);
  } else {
    b_value->bits[element_index] &= ~(1U << bit_offset);
  }
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

// Adds two big decimal mantissas: result = result + addend
// Returns HELPERS_OK or NUM_TOO_HIGH on overflow.
int s21_add_big(s21_big_decimal *result, s21_big_decimal addend) {
  unsigned long long carry = 0;
  for (int i = 0; i <= 6; ++i) {
    unsigned long long sum = (unsigned long long)result->bits[i] + addend.bits[i] + carry;
    result->bits[i] = (unsigned int)(sum & S21_MAX_UINT);
    carry = sum >> 32;
  }
  // Check for final carry out of the highest element
  if (carry > 0) {
    // Overflow occurred
    // Optionally clear result?
    // memset(result->bits, 0, 7 * sizeof(unsigned int));
    return NUM_TOO_HIGH;
  }
  return HELPERS_OK;
}

// Adds 1 to the big decimal mantissa
// Returns HELPERS_OK or NUM_TOO_HIGH on overflow.
int s21_add_one_big(s21_big_decimal *result) {
  s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0, 0}};
  return s21_add_big(result, one);
}


// Subtracts two big decimal mantissas: result = result - subtrahend
// Assumes result >= subtrahend. Returns nothing (void).
// Used within division logic where this assumption holds.
void s21_sub_big(s21_big_decimal *result, s21_big_decimal subtrahend) {
  unsigned long long borrow = 0;
  for (int i = 0; i <= 6; i++) {
    unsigned long long diff = (unsigned long long)result->bits[i] - subtrahend.bits[i] - borrow;
    result->bits[i] = (unsigned int)(diff & S21_MAX_UINT);
    // Check if borrowing is needed for the next higher uint
    borrow = (diff >> 32) & 1ULL; // If diff was negative, borrow will be 1
  }
  // Final borrow should be 0 if result >= subtrahend initially
}


// Compares the mantissas of two big decimals
// Returns: 1 if b_val1 > b_val2, -1 if b_val1 < b_val2, 0 if equal
int s21_compare_big_mantissa(s21_big_decimal b_val1, s21_big_decimal b_val2) {
  for (int i = 6; i >= 0; --i) {
    if (b_val1.bits[i] > b_val2.bits[i]) {
      return 1;
    }
    if (b_val1.bits[i] < b_val2.bits[i]) {
      return -1;
    }
  }
  return 0; // Equal
}

// Multiplies a big decimal mantissa by 10
// Uses shift and add: x * 10 = (x << 3) + (x << 1)
// Returns HELPERS_OK or NUM_TOO_HIGH on overflow.
int s21_mul_big_by_10(s21_big_decimal *b_value) {
  s21_big_decimal temp_shift_1 = *b_value;
  s21_big_decimal temp_shift_3 = *b_value;
  int status;

  status = s21_left_shift_big(&temp_shift_1, 1);
  if (status != HELPERS_OK) return status; // Overflow on shift 1

  status = s21_left_shift_big(&temp_shift_3, 3);
  if (status != HELPERS_OK) return status; // Overflow on shift 3

  status = s21_add_big(&temp_shift_3, temp_shift_1); // Result in temp_shift_3
  if (status != HELPERS_OK) return status; // Overflow on addition

  *b_value = temp_shift_3; // Update original value
  return HELPERS_OK;
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
      s21_sub_big(&remainder, current_divisor); // Subtract divisor
      s21_set_bit_big(b_quotient, shift, 1);    // Set corresponding bit in quotient
    }
    // Shift aligned divisor one bit to the right
    s21_right_shift_big(&current_divisor, 1);
    shift--;
  }

  return remainder;
                                        }

                                        // --- Normalization Helper ---

                                        // Normalizes a big decimal: adjusts scale to 0-28, applies banking rounding,
                                        // checks for overflow/underflow.
                                        // Returns HELPERS_OK, NUM_TOO_HIGH, or NUM_TOO_SMALL.
                                        int s21_normalize_big_decimal(s21_big_decimal *b_value) {
                                          int scale = s21_get_scale_big(*b_value);
                                          int sign = s21_get_sign_big(*b_value);
                                          int status = HELPERS_OK;
                                          int last_remainder = 0; // Store remainder for banking round

                                          // 1. Handle Negative Scale (Multiply by 10)
                                          while (scale < 0 && status == HELPERS_OK) {
                                            status = s21_mul_big_by_10(b_value);
                                            scale++;
                                          }
                                          if (status != HELPERS_OK) {
                                            return sign ? NUM_TOO_SMALL : NUM_TOO_HIGH;
                                          }

                                          // 2. Handle Scale > S21_MAX_SCALE (Divide by 10 with rounding)
                                          while (scale > S21_MAX_SCALE && status == HELPERS_OK) {
                                            // Check for tiny values becoming zero before division
                                            if (s21_is_zero_big(*b_value)) {
                                              scale = S21_MAX_SCALE; // Or maybe 0? If mantissa is 0, scale doesn't matter much
                                              break;
                                            }
                                            last_remainder = s21_div_big_by_10(b_value);
                                            scale--;
                                          }

                                          // 3. Apply Banking Rounding if scale was reduced
                                          if (scale == S21_MAX_SCALE && last_remainder != 0) {
                                            int round_up = 0;
                                            if (last_remainder > 5) {
                                              round_up = 1;
                                            } else if (last_remainder == 5) {
                                              // Check least significant bit of the quotient (after division)
                                              if ((b_value->bits[0] & 1) != 0) {
                                                round_up = 1; // Round to even (add 1 if odd)
                                              }
                                              // Need to check if *further* digits were truncated and non-zero?
                                              // The simple approach only los at the first truncated digit (last_remainder).
                                              // A more precise banking round might need more info if scale was reduced by > 1.
                                              // For this implementation, we base it on the single 'last_remainder'.
                                            }

                                            if (round_up) {
                                              status = s21_add_one_big(b_value);
                                              if (status != HELPERS_OK) {
                                                // Overflow during rounding
                                                return sign ? NUM_TOO_SMALL : NUM_TOO_HIGH;
                                              }
                                            }
                                          }

                                          // 4. Final Mantissa Overflow Check (redundant if checked in big_to_decimal)
                                          for (int i = 3; i <= 6; ++i) {
                                            if (b_value->bits[i] != 0) {
                                              status = sign ? NUM_TOO_SMALL : NUM_TOO_HIGH;
                                              break;
                                            }
                                          }
                                          if (status != OK) {
                                            return status;
                                          }

                                          // 5. Set the final scale
                                          s21_set_scale_big(b_value, scale);

                                          return status;
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
                                          int scale_a = s21_big_get_scale(*a);
                                          int scale_b = s21_big_get_scale(*b);
                                          int scale_diff = scale_a - scale_b;

                                          while (scale_diff != 0) {
                                            if (scale_diff > 0) {
                                              s21_big_mul_by_10(b);
                                              scale_b++;
                                            } else {
                                              s21_big_mul_by_10(a);
                                              scale_a++;
                                            }
                                            scale_diff = scale_a - scale_b;

                                            if (scale_a > MAX_SCALE || scale_b > MAX_SCALE)
                                              return CALC_OVERFLOW;
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
                                          int result = 0;
                                          for (int i = 32 * 7 - 1; i >= 0 && result == 0; i--) {
                                            int bit1 = s21_check_bit(value_1, i);
                                            int bit2 = s21_check_bit(value_2, i);
                                            result = (bit1 < bit2) ? -1 : (bit1 > bit2) ? 1 : 0;
                                          }
                                          return result;
                                        }

                                        int s21_check_sign(unsigned value) { return (value >> 31) & 1; }

  void s21_set_sign(unsigned *value, int choice) {
  *value = choice ? *value | (choice << 31) : *value & ~(1 << 31);
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

s21_big_decimal s21_div_big(s21_big_decimal divisible, s21_big_decimal divider,
                            s21_big_decimal *result) {
  s21_big_decimal remainder = {{0, 0, 0, 0, 0, 0, 0, 0}};
  int delta = s21_get_width(divisible) + 1;
  for (int i = 0; i < 7; i++) {
    result->bits[i] = 0;
  }
  while (delta) {
    remainder = s21_shift_big(remainder, 1, 'L');
    s21_set_bit(&remainder, 0, s21_check_bit(divisible, --delta));

    if (s21_big_mantissa_is_greater_or_equal(remainder, divider)) {
      remainder = s21_sub_big(remainder, divider);
      *result = s21_shift_big(*result, 1, 'L');
      s21_set_bit(result, 0, 1);
    } else {
      *result = s21_shift_big(*result, 1, 'L');
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
