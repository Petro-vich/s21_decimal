#include "s21_arithmetic.h"

int is_zero(s21_decimal num) {
    return (value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0);
}