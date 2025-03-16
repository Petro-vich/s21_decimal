#include "s21_other_functions.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
    if (!result) return 1; // Ошибка вычисления
    
    s21_decimal one = {{1, 0, 0, 0}};
    int sign = s21_get_sign(value);
    int scale = s21_get_exp(value);
    int status = 0;
    
    // Если число целое или scale = 0
    if (scale == 0) {
        *result = value;
        return 0;
    }
    
    // Усечение до целой части
    status = s21_truncate(value, result);
    if (status) return status;
    
    // Если отрицательное и есть дробная часть
    if (sign) {
        s21_decimal truncated = *result;
          s21_decimal diff = {0};
        s21_sub(value, truncated, &diff);
        
        if (!s21_is_zero(diff)) {
            status = s21_sub(*result, one, result);
        }
    }
    
    return status;
}