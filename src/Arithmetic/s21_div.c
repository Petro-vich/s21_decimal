#include "s21_arithmetic.h"
#include "./../Tools/tools.h"
#include <stddef.h>

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (result == NULL) {
        return AR_NAN; // Ошибка: указатель на результат равен NULL
    }

    if (is_zero(value_2)) {
        return AR_NAN; // Ошибка: деление на ноль
    }

    int scale1 = s21_get_exp(value_1);
    int scale2 = s21_get_exp(value_2);

    if (scale1 > 28 || scale2 > 28) {
        return AR_NAN; // Ошибка: некорректный масштаб
    }

    // Определяем знак результата
    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);
    int result_sign = sign1 ^ sign2;
    // Остальная логика функции
    s21_decimal abs_1 = absoulute_decimal(value_1);
    s21_decimal abs_2 = absoulute_decimal(value_2);

    normalize_scales(&abs_1, &abs_2);

    s21_decimal quotient, remainder;
    divide_integer(abs_1, abs_2, &quotient, &remainder);

    s21_decimal fractional = {0};
    int scale = 0;

    while (!is_zero(remainder) && scale < 28) {
        multiply_by_10(&remainder);
        s21_decimal temp;
        divide_integer(remainder, abs_2, &temp, &remainder);
        add(fractional, temp, &fractional);
        scale++;
    }

    if (scale == 28 && !is_zero(remainder)) {
        s21_decimal half_divisor;
        s21_decimal two = {{2, 0, 0, 0}};
        divide_integer(abs_2, two, &half_divisor, &(s21_decimal){0});

        if (compare(remainder, half_divisor) > 0) {
            s21_add(fractional, two, &fractional); // Округляем вверх
        } else if (compare(remainder, half_divisor) == 0) {
            if (fractional.bits[0] & 1) {
                s21_add(fractional, two, &fractional); // Округляем до четного
            }
        }
        // Проверка переполнения после округления
        if (is_overflow(&fractional)) {
            // Обработка переполнения дробной части
            scale--;
            divide_integer(fractional, two, &fractional, &remainder);
            s21_add(quotient, fractional, &quotient);
            fractional = remainder;
        }
    }

    combine_parts(quotient, fractional, scale, result);

    if (is_overflow(result)) {
        return (result_sign) ? NUM_TOO_SMALL : NUM_TOO_HIGH;
    }

    set_sign(result, result_sign); // Устанавливаем знак результата
    set_scale(result, scale);

    return 0; // Успех
}
