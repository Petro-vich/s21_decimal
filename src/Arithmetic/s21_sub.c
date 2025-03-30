#include "s21_arithmetic.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // Инверсия знака второго операнда
  s21_negate(value_2, &value_2);
  return s21_add(value_1, value_2, result);
}
