#include "s21_convertors.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (!dst || isnan(src) || isinf(src)) return CONVERSION_ERROR;

  memset(dst, 0, sizeof(*dst));

  int sign = src < 0;
  src = fabsf(src);

  // Ограничение входного диапазона (если число выходит за представимый диапазон, возвращаем ошибку)
  if (src < 1e-28f || src > 7.9e28f) return CONVERSION_ERROR;

  // Округление до 7 значащих цифр
  if (src != 0.0f) {
    int exponent = (int)floorf(log10f(src));
    int digitsInInteger;
    if (src < 1.0f)
      digitsInInteger = 1; // Например, 0.000123 – первая значащая цифра будет единичкой в нормализованном представлении.
      else
        digitsInInteger = exponent + 1;
    int digitsToRound = 7 - digitsInInteger;
    if (digitsToRound < 0) {
      // Если целая часть содержит больше 7 цифр – округляем, уменьшая порядок
      float factor = powf(10.0f, -digitsToRound);
      src = roundf(src / factor) * factor;
    } else {
      // Если целая часть содержит меньше 7 цифр – округляем до нужного количества дробных цифр
      float factor = powf(10.0f, digitsToRound);
      src = roundf(src * factor) / factor;
    }
  }

  // Масштабирование числа до целого значения с максимальным масштабом 28
  int scale = 0;
  while (scale < 28 && floorf(src) != src) {
    src *= 10.0f;
    scale++;
  }

  // Преобразование в целое число с округлением
  uint64_t int_val = (uint64_t)(src + 0.5f);

  // Запись результата в 32-битные части (s21_decimal использует 96 бит для мантиссы)
  dst->bits[0] = (uint32_t)(int_val & 0xFFFFFFFF);
  dst->bits[1] = (uint32_t)((int_val >> 32) & 0xFFFFFFFF);
  dst->bits[2] = 0;

  // Установка масштаба (биты 16–23) и знака (старший бит)
  dst->bits[3] = (scale << 16);
  if (sign) dst->bits[3] |= 0x80000000;

  return CNV_OK;
}
