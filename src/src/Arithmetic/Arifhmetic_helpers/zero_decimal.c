#include "s21_arithmetic.h"

void zero_decimal(s21_decimal *num) {
    num->bits[0] = 0;
    num->bits[1] = 0;
    num->bits[2] = 0;
    num->bits[3] = 0;

}