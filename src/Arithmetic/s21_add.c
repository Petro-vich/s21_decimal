#include "s21_arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);
  if (sign1 != sign2) {
    if (sign1) {
      return s21_sub(value_2, s21_absoulute_decimal(value_1), result);
    } else {
      return s21_sub(value_1, s21_absoulute_decimal(value_2), result);
    }
  }

  for (int i = 0; i < 4; i++) {
    result->bits[i] = 0;
  }

  int carry = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 32; j++) {
      int bit1 = s21_bit_check(value_1.bits[i], j) ? 1 : 0;
      int bit2 = s21_bit_check(value_2.bits[i], j) ? 1 : 0;
      int sum = bit1 + bit2 + carry;
      if (sum % 2 == 1) {
        result->bits[i] = s21_bit_add(result->bits[i], j);
      }
      carry = sum / 2;
    }
  }

  int res_code = 0;
  if (carry) {
    res_code = sign1 ? 2 : 1;
  }

  if (sign1) {
    result->bits[3] |= (1u << 31);
  } else {
    result->bits[3] &= ~(1u << 31);
  }

  return res_code;
}
