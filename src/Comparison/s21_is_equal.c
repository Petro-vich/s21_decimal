#include "s21_comparison.h"

//  decimal = decimal
int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  return s21_compare_decimals(value_1, value_2) == 0;
}
