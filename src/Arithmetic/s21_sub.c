#include "s21_arithmetic.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (!result) return AR_NAN;
  
  // Обнуление результата
  for (int i = 0; i < 4; i++) result->bits[i] = 0;

  // если первое число = 0, второе на -1 умножаем и его в result записываем
  if (s21_is_zero(value_1)) {
      s21_negate(value_2, result);
      return AR_OK;
  }
  if (s21_is_zero(value_2)) {
      *result = value_1;
      return AR_OK;
  }

  // Получение параметров
  bool sign_1 = s21_get_sign(value_1);
  bool sign_2 = s21_get_sign(value_2);
  int scale_1 = s21_get_scale(value_1);
  int scale_2 = s21_get_scale(value_2);

  // Нормализация масштабов
  s21_normalize_scales(&value_1, &value_2);
  int res_scale = (scale_1 > scale_2) ? scale_1 : scale_2;

  // Основная логика
  int error = AR_OK;
  if (sign_1 == sign_2) {
      // Вычитание абсолютных значений
      error = s21_subtract(value_1, value_2, result);
      if (s21_compare_abs(value_1, value_2) >= 0) {
          s21_set_sign(result, sign_1);
      } else {
          s21_set_sign(result, !sign_1);
      }
  } else {
      // Сложение абсолютных значений
      error = s21_add_core(value_1, value_2, result);
      s21_set_sign(result, sign_1);
  }

  s21_set_scale(result, res_scale);
  return error;
}
