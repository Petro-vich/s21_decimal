#include "s21_arithmetic.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (!result) return AR_NAN;
    

    for (int i = 0; i < 4; i++) result->bits[i] = 0;
  
    // Если первое число равно 0, возвращаем -value_2
    if (s21_is_zero(value_1)) {
        s21_negate(value_2, result);
        return AR_OK;
    }
    // Если второе число равно 0, возвращаем value_1
    if (s21_is_zero(value_2)) {
        *result = value_1;
        return AR_OK;
    }
  
    // Получаем параметры (знак и масштаб) входных чисел
    bool sign_1 = s21_get_sign(value_1);
    bool sign_2 = s21_get_sign(value_2);
    int scale_1 = s21_get_scale(value_1);
    int scale_2 = s21_get_scale(value_2);
  
    // Нормализуем масштабы чисел, чтобы они имели одинаковое число цифр после запятой
    s21_normalize_scales(&value_1, &value_2);
    int res_scale = (scale_1 > scale_2) ? scale_1 : scale_2;
  
    int error = AR_OK;
    if (sign_1 == sign_2) {
        // Если знаки одинаковые, выполняем вычитание абсолютных значений.
        // При этом важно: если по модулю value_1 >= value_2, то вычисляем value_1 - value_2,
        // иначе – value_2 - value_1, чтобы результат был положительным.
        if (s21_compare_abs(value_1, value_2) >= 0) {
            error = s21_subtract_core(value_1, value_2, result);
            s21_set_sign(result, sign_1);
        } else {
            error = s21_subtract_core(value_2, value_1, result);
            s21_set_sign(result, !sign_1);
        }
        if (error != AR_NAN) {
            error = AR_OK;
        }
    } else {
        // Если знаки разные, операция сводится к сложению модулей
        error = s21_add_core(value_1, value_2, result);
        s21_set_sign(result, sign_1);
        // Если s21_add_core вернул ненулевое значение, значит произошёл перенос (overflow)
        if (error != AR_OK) {
            error = (s21_get_sign(*result) == 0) ? NUM_TOO_HIGH : NUM_TOO_SMALL;
        }
    }
  
    // Устанавливаем масштаб результата
    s21_set_scale(result, res_scale);
  
    // Проверяем результат на переполнение
    if (s21_is_max_decimal(result)) {
        // Если число положительное, это переполнение (NUM_TOO_HIGH),
        // если отрицательное – недополнение (NUM_TOO_SMALL)
        error = s21_get_sign(*result) ? NUM_TOO_SMALL : NUM_TOO_HIGH;
    }
    
    return error;
  }
