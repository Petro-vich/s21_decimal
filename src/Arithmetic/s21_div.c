#include "s21_arithmetic.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (result == NULL) return CALC_ERROR;

    s21_big_decimal dividend = s21_decimal_to_big(value_1);
    s21_big_decimal divisor = s21_decimal_to_big(value_2);
    s21_big_decimal quotient = {0};
    int status = AR_OK;

    // Проверка деления на ноль
    if (s21_is_zero_big(divisor)) {
        return s21_is_zero_big(dividend) ? CALC_UNDEFINED : AR_NAN;
    }

    // Если делимое ноль - вернуть ноль
    if (s21_is_zero_big(dividend)) {
        s21_zero_decimal(result);
        return AR_OK;
    }

    // Выравнивание масштабов
    int scale = s21_align_scales(&dividend, &divisor);
    if (scale > S21_MAX_SCALE) {
        return (s21_check_sign(dividend.bits[7]) ^ s21_check_sign(divisor.bits[7])) 
               ? NUM_TOO_SMALL : NUM_TOO_HIGH;
    }

    // Основная логика деления из примера
    int width_1 = s21_get_width(dividend);
    int width_2 = s21_get_width(divisor);
    
    // Умножаем делимое до достижения достаточной точности
    while ((width_2 > width_1 || s21_big_mantissa_is_less(dividend, divisor)) 
           && s21_get_scale(dividend.bits[7]) < 35) {
        dividend = s21_mul_big_by_10(dividend);
        s21_set_scale(&dividend.bits[7], s21_get_scale(dividend.bits[7]) + 1);
        width_1 = s21_get_width(dividend);
    }

    // Выполняем деление
    s21_big_decimal remainder = s21_div_big(dividend, divisor, &quotient);
    scale = s21_get_scale(dividend.bits[7]);

    // Обработка остатка и масштаба
    while (!s21_is_zero_big(remainder)) {
        dividend = s21_mul_big_by_10(remainder);
        scale++;
        s21_set_scale(&dividend.bits[7], scale);
        remainder = s21_div_big(dividend, divisor, &quotient);
    }

    // Корректировка итогового масштаба
    scale -= s21_get_scale(divisor.bits[7]);
    if (scale >= 0) {
        s21_set_scale(&quotient.bits[7], scale);
    } else {
        while (scale++ < 0) quotient = s21_mul_big_by_10(quotient);
    }

    // Установка знака
    s21_set_sign(&quotient.bits[7], 
               s21_check_sign(value_1.bits[3]) ^ s21_check_sign(value_2.bits[3]));

    // Проверка возможности конвертации
    if ((status = s21_could_be_converted(quotient)) == AR_OK) {
        *result = s21_from_big_to_decimal(quotient);
    }

    return status;
}