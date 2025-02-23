#include <stdio.h>

#include "../s21_decimal.h"

int s21_get_exp(s21_decimal decimal) {
    // 16-23  (bits[3])
    int exp = (decimal.bits[3] >> 16) & 0xFF; // 0xFF - mask 8 bit
    return exp;
}

int s21_get_sign(s21_decimal decimal) {
    return s21_get_bit(decimal, 127); // 0 for positive number, 1 for negative number
}