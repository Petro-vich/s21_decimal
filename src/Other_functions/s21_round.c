#include "s21_other_functions.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  int error = OTH_OK;
  int sign = s21_check_sign(value.bits[3]);
  s21_decimal truncated = {0};
  s21_decimal one = {{1, 0, 0, 0}};

  error = s21_truncate(value, &truncated);
  if (error == OTH_OK) {
    s21_decimal fraction = {0};
    error = s21_sub(value, truncated, &fraction);
    if (error == OTH_OK) {
      if (fraction.bits[0] != 0 || fraction.bits[1] != 0 ||
          fraction.bits[2] != 0) {
        s21_big_decimal big_fraction = s21_decimal_to_big(fraction);
        s21_big_decimal half = {{5, 0, 0, 0, 0, 0, 0, (1 << 16)}};
        s21_normalize_big(&big_fraction, &half);
        if (s21_big_mantissa_is_equal(big_fraction, half) ||
            s21_big_mantissa_is_greater(big_fraction, half)) {
          error = (sign == 0) ? s21_add(truncated, one, &truncated)
                              : s21_sub(truncated, one, &truncated);
        }
      }
    }
  }

  *result = truncated;
  return error;
}
