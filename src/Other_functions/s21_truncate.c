#include "s21_other_functions.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  s21_big_decimal big_value = s21_decimal_to_big(value);
  int source_sign = s21_check_sign(value.bits[3]);
  int scale = s21_get_scale(big_value.bits[7]);
  if (scale > 0) {
    for (int i = 0; i < scale; i++) {
      s21_div_big_by_10(big_value, &big_value);
    }
  }
  s21_set_scale(&big_value.bits[7], 0);
  *result = s21_from_big_to_decimal(big_value);
  s21_set_sign(&result->bits[3], source_sign);
  return OTH_OK;
}
