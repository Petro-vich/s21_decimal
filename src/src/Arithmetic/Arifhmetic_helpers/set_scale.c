#include "s21_arithmetic.h"
void set_sign(s21_decimal *num, int sign) {
    if (sign) {
        num->bits[3] |= 0x80000000; // Устанавливаем бит знака (1)
    } else {
        num->bits[3] &= 0x7FFFFFFF; // Сбрасываем бит знака (0)
    }
}