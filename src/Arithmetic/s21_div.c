#include "s21_arithmetic.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (result == NULL) return CALC_ERROR; // Проверка указателя

  s21_big_decimal dividend = s21_decimal_to_big(value_1);
  s21_big_decimal divisor = s21_decimal_to_big(value_2);
  s21_big_decimal quotient = {0};
  int status = AR_OK;

  // Обработка деления на ноль
  if (s21_big_is_zero(divisor)) {
    return s21_big_is_zero(dividend) ? CALC_UNDEFINED : AR_NAN;
  }

  // Если делимое ноль — результат ноль
  if (s21_big_is_zero(dividend)) {
    s21_zero_decimal(result);
    return AR_OK;
  }

  // Выравнивание масштабов делимого и делителя
  int scale = s21_align_scales(&dividend, &divisor);
  if (scale > S21_MAX_SCALE) { // MAX_SCALE = 28
    return (s21_big_get_sign(dividend) ^ s21_big_get_sign(divisor))
    ? NUM_TOO_SMALL : NUM_TOO_HIGH;
  }

  // Основной процесс деления
  status = s21_big_div(dividend, divisor, &quotient);
  if (status != AR_OK) return status;

  // Установка итогового масштаба и знака
  s21_big_set_scale(&quotient, scale);
  s21_big_set_sign(&quotient, s21_big_get_sign(dividend) ^ s21_big_get_sign(divisor));

  // Конвертация и проверка переполнения
  status = s21_big_to_decimal(quotient, result);
  return status;
}
