#include "s21_other_functions.h"


int s21_truncate(s21_decimal value, s21_decimal *result) {
    if (!result) return 1; // Ошибка: некорректный указатель
    
    *result = value;
    int scale = s21_get_exp(value);
    
    if (scale == 0) return 0; // Число уже целое
    
    // Убираем дробную часть делением на 10^scale
    for (int i = 0; i < scale; i++) {
        s21_div_10(result); // Делим мантиссу на 10
    }
    
    // Устанавливаем новый масштаб = 0
    s21_set_scale(result, 0);
    return 0;
}
