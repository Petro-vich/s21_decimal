#include "s21_convertors.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (!dst || isnan(src) || isinf(src)) return CONVERSION_ERROR;

  memset(dst, 0, sizeof(*dst));

  int sign = src < 0;
  src = fabsf(src);

  if (src < 1e-28f || src > 7.9e28f) return CONVERSION_ERROR;

  if (src != 0.0f) {
    int exponent = (int)floorf(log10f(src));
    int digitsInInteger;
    if (src < 1.0f)
      digitsInInteger = 1;

    else
      digitsInInteger = exponent + 1;
    int digitsToRound = 7 - digitsInInteger;
    if (digitsToRound < 0) {
      float factor = powf(10.0f, -digitsToRound);
      src = roundf(src / factor) * factor;
    } else {
      float factor = powf(10.0f, digitsToRound);
      src = roundf(src * factor) / factor;
    }
  }

  int scale = 0;
  while (scale < 28 && floorf(src) != src) {
    src *= 10.0f;
    scale++;
  }

  uint64_t int_val = (uint64_t)(src + 0.5f);

  dst->bits[0] = (uint32_t)(int_val & 0xFFFFFFFF);
  dst->bits[1] = (uint32_t)((int_val >> 32) & 0xFFFFFFFF);
  dst->bits[2] = 0;

  dst->bits[3] = (scale << 16);
  if (sign) dst->bits[3] |= 0x80000000;

  return CNV_OK;
}
