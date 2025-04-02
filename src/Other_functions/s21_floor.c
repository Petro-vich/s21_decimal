#include "s21_other_functions.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  if (!result) return CALCULATION_ERROR;

  int sign = s21_check_sign(value.bits[3]);
  int status = s21_truncate(value, result);

  if (status == OTH_OK && sign) {
    s21_decimal one = {{1, 0, 0, 0}};
    s21_decimal truncated_copy = *result;
    s21_decimal fraction = {0};

    status = s21_sub(value, truncated_copy, &fraction);
    if (status == OTH_OK && !s21_is_zero(fraction)) {
      status = s21_sub(*result, one, result);
    }
  }
  return status;
}
