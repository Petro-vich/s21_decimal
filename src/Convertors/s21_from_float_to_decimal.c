#include "s21_convertors.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (!dst || isnan(src) || isinf(src)) return CONVERSION_ERROR;

  memset(dst, 0, sizeof(*dst));
  int sign = (src < 0) ? 1 : 0;
  src = fabsf(src);

  // Прямое извлечение мантиссы и экспоненты (IEEE 754)
  uint32_t bits = *((uint32_t*)&src);
  int exp = ((bits >> 23) & 0xFF) - 127;
  uint32_t mantissa = (bits & 0x007FFFFF) | 0x00800000;

  // Нормализация до 7 значащих цифр
  s21_decimal tmp = {0};
  while (mantissa > 9999999) {
    mantissa /= 10;
    exp++;
  }

  tmp.bits[0] = mantissa;
  s21_set_scale(&tmp.bits[3], 6 - exp); // 6 цифр после точки
  s21_set_sign(&tmp.bits[3], sign);

  // Проверка допустимого масштаба
  if (6 - exp < 0 || 6 - exp > 28) {
    memset(dst, 0, sizeof(*dst));
    return CONVERSION_ERROR;
  }

  *dst = tmp;
  return CNV_OK;
}
