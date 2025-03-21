#include "s21_other_functions.h"


int s21_floor(s21_decimal value, s21_decimal *result) {
    if (!result) return 1;

    // Получаем отсечённое значение (целая часть)
    s21_truncate(value, result);

    // Проверяем, есть ли дробная часть
    int original_scale = s21_get_exp(value);
    int has_fractional_part = (original_scale > 0) ||
    (!s21_is_equal(*result, value));

    // Если число отрицательное и есть дробная часть,
    // добавляем единицу к модулю результата
    if (s21_get_sign(value) && has_fractional_part) {
        s21_decimal abs_result = s21_absoulute_decimal(*result);
        s21_decimal one = {{1, 0, 0, 0}};
        int add_status = s21_add_core(abs_result, one, &abs_result);
        if (add_status != AR_OK) {
            // Обработка переполнения (например, возврат ошибки)
            return add_status; // или другое действие
        }
        s21_set_sign(&abs_result, 1);
        *result = abs_result;
    }

    return 0;
}
