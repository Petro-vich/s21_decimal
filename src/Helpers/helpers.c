#include "../s21_decimal.h"

int s21_is_zero(s21_decimal value) {
  return value.bits[0] == 0 && value.bits[1] == 0 && value.bits[2] == 0;
}

int s21_get_scale(unsigned value) { return (value >> 16) & 255; }

void s21_set_scale(unsigned *bits, unsigned scale) {
  *bits = (*bits & 0xFF00FFFF) | (scale << 16);
}

s21_big_decimal s21_decimal_to_big(s21_decimal value) {
  s21_big_decimal d = {{0, 0, 0, 0, 0, 0, 0, 0}};
  for (int i = 0; i < 3; i++) d.bits[i] = value.bits[i];
  d.bits[7] = value.bits[3];
  return d;
}

int s21_is_not_null(s21_big_decimal a) {
  return (a.bits[0] == a.bits[1] && a.bits[0] == a.bits[2] &&
          a.bits[0] == a.bits[3] && a.bits[0] == a.bits[4] &&
          a.bits[0] == a.bits[5] && a.bits[0] == a.bits[6] && a.bits[0] == 0)
             ? 0
             : 1;
}

void s21_set_bit(s21_big_decimal *a, int num, int choice) {
  a->bits[num / 32] = choice ? a->bits[num / 32] | (1 << (num % 32))
                             : a->bits[num / 32] & ~(1 << (num % 32));
}

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
    s21_set_bit(&result, i, (sum + 2) % 2);
  }
  result.bits[7] = value_1.bits[7];
  return result;
}

s21_big_decimal s21_div_big_by_10(s21_big_decimal value,
                                  s21_big_decimal *result) {
  s21_big_decimal divider = {{10, 0, 0, 0, 0, 0, 0, 0}};
  return s21_div_big(value, divider, result);
}

void s21_normalize_big(s21_big_decimal *value_1, s21_big_decimal *value_2) {
  int delta = s21_get_scale(value_1->bits[7]) - s21_get_scale(value_2->bits[7]);

  while (delta > 0) {
    *value_2 = s21_mul_big_by_10(*value_2);
    s21_set_scale(&(value_2->bits[7]), s21_get_scale((value_1->bits[7])));
    delta--;
  }
  while (delta < 0) {
    *value_1 = s21_mul_big_by_10(*value_1);
    s21_set_scale(&(value_1->bits[7]), s21_get_scale((value_2->bits[7])));
    delta++;
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
int s21_big_mantissa_is_equal(s21_big_decimal value_1,
                              s21_big_decimal value_2) {
  return s21_big_mantissa_compare(value_1, value_2) == 0;
}

int s21_big_mantissa_is_greater(s21_big_decimal value_1,
                                s21_big_decimal value_2) {
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
    if (a.bits[i] != 0) return 1;
  }
  return 0;
}
int s21_could_be_converted(s21_big_decimal value) {
  int ret = AR_OK;
  int sign = s21_check_sign(value.bits[7]);
  s21_set_sign(&value.bits[7], 0);
  int scale = s21_get_scale(value.bits[7]);

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
s21_big_decimal s21_div_big(s21_big_decimal divisible, s21_big_decimal divider,
                            s21_big_decimal *result) {
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
