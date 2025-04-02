#include "s21_arithmetic.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (result == NULL) return CALC_ERROR;

    int status = AR_OK;
    int sign = s21_check_sign(value_1.bits[3]) ^ s21_check_sign(value_2.bits[3]);
    int scale = s21_get_scale(value_1.bits[3]) + s21_get_scale(value_2.bits[3]);

    s21_big_decimal temp_result = {{0}};
    unsigned long long overflow = 0;

    // Умножение 32-битных блоков как в примере
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            unsigned long long product = (unsigned long long)value_1.bits[i] * value_2.bits[j];
            product += overflow + temp_result.bits[i + j];
            
            temp_result.bits[i + j] = (unsigned int)(product & UINT_MAX);
            overflow = product >> 32;
        }
        // Обработка остатка переполнения
        if (overflow) {
            if (i + 3 < 7) {
                temp_result.bits[i + 3] += (unsigned int)overflow;
                overflow = 0;
            } else {
                status = (sign) ? NUM_TOO_SMALL : NUM_TOO_HIGH;
                break;
            }
        }
    }

    // Установка параметров в big decimal
    s21_set_scale(&temp_result.bits[7], scale);
    s21_set_sign(&temp_result.bits[7], sign);

    // Проверка на переполнение перед конвертацией
    if (status == AR_OK) {
        status = s21_big_to_decimal(temp_result, result);
        if (status != AR_OK) {
            s21_zero_decimal(result);
        }
    }

    return status;
}
