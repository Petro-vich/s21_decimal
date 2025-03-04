#include "s21_arithmetic.h"

void divide_integer(s21_decimal dividend, s21_decimal divisor, s21_decimal *quotient, s21_decimal *remainder) {
    // Инициализация результата и остатка
    init_decimal(quotient);
    init_decimal(remainder);

    // cpy делимое в остаток
    *remainder = dividend;

    while (compare(*remainder, divisor) >= 0) {
        s21_decimal temp = divisor;
        int shift = 0;

        while (compare(*remainder, shift_left(temp, 1)) >= 0) {
            temp = shift_left(temp, 1);
            shift++;
        }

        subtract(*remainder, temp, remainder);

        s21_decimal power = {0};
        power.bits[0] = 1 << shift;
        add(*quotient, power, quotient);
    }
}