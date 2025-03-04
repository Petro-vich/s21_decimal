#include "s21_arithmetic.h"
void set_scale(s21_decimal *num, int scale) {
    num->bits[3] &= 0x80000000; // Сохраняем бит знака
    num->bits[3] |= (scale << 16); // Устанавливаем масштаб
}