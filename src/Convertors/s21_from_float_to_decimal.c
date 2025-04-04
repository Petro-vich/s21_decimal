#include "s21_convertors.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (!dst || isnan(src) || isinf(src)) return CONVERSION_ERROR;

  memset(dst, 0, sizeof(*dst));

  int sign = src < 0;
  src = fabsf(src);

  // Определяем порядок числа
  int exponent = (int)floorf(log10f(src));
  int scale = 0;

  // Если число содержит более 7 значащих цифр, округляем его
  if (exponent >= 7) {
      float factor = powf(10.0f, exponent - 6);
      src = roundf(src / factor) * factor;
  } else {
      // Масштабируем число до целого значения с максимальным масштабом 28
      while (scale < 28 && floorf(src) != src) {
          src *= 10.0f;
          scale++;
      }
  }

  // Преобразуем в целое число с округлением
  uint64_t int_val = (uint64_t)(src + 0.5f);

  // Проверяем переполнение
  if (int_val > 0xFFFFFFFFFFFFFFFF) {
      return CONVERSION_ERROR;
  }

  // Записываем значение по 32-битным частям
  dst->bits[0] = (uint32_t)(int_val & 0xFFFFFFFF);
  dst->bits[1] = (uint32_t)((int_val >> 32) & 0xFFFFFFFF);
  dst->bits[2] = 0;

  // Устанавливаем scale и sign
  dst->bits[3] = (scale << 16);
  if (sign) dst->bits[3] |= 0x80000000;

  return CNV_OK;
}
