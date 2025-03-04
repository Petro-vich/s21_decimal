#include "s21_arithmetic.h"

s21_decimal absoulute_decimal(s21_decimal num) {
    num.bits[3] &= 0x7FFFFFFF;
    return num;
}