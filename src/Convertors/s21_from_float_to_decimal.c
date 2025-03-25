#include "s21_convertors.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (dst == NULL) return CONVERSION_ERROR;

  // Очистка dst
  for (int i = 0; i < 4; i++) {
    dst->bits[i] = 0;
  }

  // Проверка на NaN(не число) и бесконечность
  if (isnan(src) || isinf(src)) {
    return CONVERSION_ERROR;
  }

  // Проверка на слишком маленькие числа
  if (fabsf(src) < 1e-28 && src != 0.0f) {
    return CONVERSION_ERROR;
  }

  // Проверка на слишком большие числа
  if (fabsf(src) > 79228162514264337593543950335.0f) {
    return CONVERSION_ERROR;
  }

  // Обработка нуля
  if (src == 0.0f) {
    return CNV_OK;
  }

  // Определение знака
  if (src < 0) {
    dst->bits[3] |= 0x80000000;  // делаем 31-й бит = 1 с помощью маски и побит.
                                 // оператора(ИЛИ)
    src = -src;  // если оно было отрицательным, делаем его положительным для
                 // дальнейшего преобразования
  }

  // Преобразование float в целое число с учетом масштабирования
  int exp = 0;
  while (src >= 1.0f) {
    src /= 10.0f;
    exp++;
  }

  // Округление до 7 значимых цифр
  src = roundf(src * 1e7) / 1e7;

  // Преобразование в целое число
  int64_t int_part = (int64_t)(src * 1e7);

  // Запись мантиссы в dst
  dst->bits[0] = (int)(int_part & 0xFFFFFFFF);

  // Проверка, нужно ли записывать старшие 32 бита
  if (int_part > 0xFFFFFFFF) {
    dst->bits[1] = (int)((int_part >> 32) & 0xFFFFFFFF);
  } else {
    dst->bits[1] = 0;  // т.к. самое большое 7-знаковое число = 27 бит, второй
                       // байт не юзается
  }

  // Установка экспоненты
  dst->bits[3] |= (exp << 16);

  return CNV_OK;
}