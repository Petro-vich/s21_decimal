#include "s21_comparison.h"

// decimal_1 <=decimal_2
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
    int cmp = s21_compare(value_1, value_2);
    return cmp == -1 || cmp == 0;
}