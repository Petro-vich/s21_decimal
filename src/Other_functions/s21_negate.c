#include "s21_other_functions.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  *result = value;
  s21_set_sign(&result->bits[3], !s21_check_sign(result->bits[3]));
  return OTH_OK;
}
