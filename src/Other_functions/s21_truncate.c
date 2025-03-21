#include "s21_other_functions.h"
#define START_INFO 96  // Определение отсутствующей константы


int s21_truncate(s21_decimal value, s21_decimal *result) {
    s21_zero_decimal(result);
    long double fl_to_int = 0.0;

    // Используем s21_get_exp вместо s21_get_scale
    if (s21_get_exp(value)) {
        s21_from_decimal_to_double(value, &fl_to_int);
        fl_to_int = truncl(fl_to_int); // Усечение до целого

        // Обработка отрицательных чисел
        if (fl_to_int < 0.0) {
            s21_set_sign(result, 1);
            fl_to_int *= -1;
        }

        // Преобразование усечённого числа обратно в decimal
        for (int i = 0; fl_to_int >= 1 && i < START_INFO; i++) {
            long double remainder = fmodl(fl_to_int, 2);
            s21_set_bit(result, i, (remainder > 0.0) ? 1 : 0);
            fl_to_int = floorl(fl_to_int / 2);
        }

        s21_set_scale(result, 0); // Установка масштаба 0
    } else {
        // Если масштаб уже 0, копируем биты
        for (int i = 0; i < 4; ++i) {
            result->bits[i] = value.bits[i];
        }
    }
    return 0;
}




