#include "s21_comparison.h"

// deciaml_1 < decimal_2
int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
    return s21_compare(value_1, value_2) == -1;
}