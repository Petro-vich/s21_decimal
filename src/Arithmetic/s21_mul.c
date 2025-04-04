#include "s21_arithmetic.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int res = AR_OK;
  if (result) {
    int result_sign =
        s21_check_sign(value_1.bits[3]) ^ s21_check_sign(value_2.bits[3]);
    int result_exponent =
        s21_get_scale(value_1.bits[3]) + s21_get_scale(value_2.bits[3]);

    s21_big_decimal temp_result = {{0}};
    unsigned long long overflow_word = 0;
    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        unsigned long long temp =
            (unsigned long long)value_1.bits[i] * value_2.bits[j] +
            overflow_word + temp_result.bits[i + j];
        temp_result.bits[i + j] = temp & UINT_MAX;
        overflow_word = temp >> 32;
      }
      temp_result.bits[i + 3] += overflow_word;
      overflow_word = 0;
    }

    s21_set_scale(&temp_result.bits[7], result_exponent);
    s21_set_sign(&temp_result.bits[7], result_sign);
    res = s21_could_be_converted(temp_result);
    if (res == AR_OK) {
      *result = s21_from_big_to_decimal(temp_result);
    }
  } else
    res = 1;
  return res;
}
