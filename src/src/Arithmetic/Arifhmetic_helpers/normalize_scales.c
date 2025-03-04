#include "s21_arithmetic.h"

void normalize_scales(s21_decimal *num1, s21_decimal *num2) {
    int scale1 = (num1->bits[3] >> 16) & 0xFF;
    int scale2 = (num2->bits[3] >> 16) & 0xFF;
    
    int delta_scale = scale2 - scale1;

    if (delta_scale > 0) {
        for (int i = 0; i < delta_scale; i++) {
            multiply_by_10(num1);
        }
        num1->bits[3] = (scale2 << 16) | (num1->bits[3] & 0x80000000);
    } else if (delta_scale < 0) {
        
        for (int i = 0; i < -delta_scale; i++) {
            multiply_by_10(num2);
        }
        num2->bits[3] = (scale1 << 16) | (num2->bits[3] & 0x80000000);
    }
}
