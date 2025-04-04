#include "s21_arithmetic.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  s21_set_sign(&(value_2.bits[3]), s21_check_sign(value_2.bits[3]) ? 0 : 1);
  return s21_add(value_1, value_2, result);
}
