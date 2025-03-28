#include "s21_other_functions.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  if (!result) return CALCULATION_ERROR;

  s21_decimal half = {{5, 0, 0, 0}};
  s21_set_scale(&half.bits[3], 1); // 0.5

  s21_decimal truncated = {0};
  int status = s21_truncate(value, &truncated);
  if (status != OTH_OK) return status;

  s21_decimal fraction = {0};
  status = s21_sub(value, truncated, &fraction);
  if (status != OTH_OK) return status;

  // Сравнение дробной части с 0.5
  s21_decimal diff = {0};
  status = s21_sub(fraction, half, &diff);
  if (status != OTH_OK) return status;

  s21_decimal one = {{1, 0, 0, 0}};
  if (s21_is_greater_or_equal(fraction, half)) {
    status = s21_add(truncated, one, result);
  } else {
    *result = truncated;
  }

  // Обработка отрицательных чисел
  if (s21_get_sign(value)) {
    s21_negate(*result, result);
  }
  return status;
}
