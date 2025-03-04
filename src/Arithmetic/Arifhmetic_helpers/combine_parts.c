#include "s21_arithmetic.h"

void combine_parts(s21_decimal integer_part, s21_decimal fractional_part, int scale, s21_decimal *result) {
    *result = integer_part;

    for (int i = 0; i < scale; i++) {
        multiply_by_10(result);
    }
    add(*result, fractional_part, result);

    set_scale(result, scale);
}