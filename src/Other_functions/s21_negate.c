#include "s21_other_functions.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  // Проверка на корректность указателя результата
  if (result == NULL) {
    return CALCULATION_ERROR;
  }

  // Копируем значение в result
  *result = value;

  // Если число равно нулю, всегда задаем положительный знак
  if (s21_is_zero(value)) {
    s21_set_sign(result, 0);
  } else {
    // Получаем текущий знак и переключаем его: 0 -> 1, 1 -> 0
    int sign = s21_get_sign(value);
    s21_set_sign(result, (sign == 0) ? 1 : 0);
  }
  return OTH_OK;
}
