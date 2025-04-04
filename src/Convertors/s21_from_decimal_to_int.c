#include "s21_convertors.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  if (!dst) return CONVERSION_ERROR;

  s21_decimal tmp = src;

  int scale = s21_get_scale(tmp.bits[3]);
  scale = (scale < 0) ? 0 : scale;

  while (scale-- > 0) {
    unsigned rem = 0;
    for (int i = 2; i >= 0; i--) {
      unsigned long temp = (unsigned long)rem * (1UL << 32) + tmp.bits[i];
      tmp.bits[i] = (unsigned)(temp / 10);
      rem = (unsigned)(temp % 10);
    }
  }

  int sign = s21_check_sign(tmp.bits[3]);
  unsigned val = tmp.bits[0];
  unsigned max_val = sign ? (unsigned)INT_MAX + 1 : (unsigned)INT_MAX;

  if (tmp.bits[1] || tmp.bits[2] || val > max_val) {
    return CONVERSION_ERROR;
  }

  *dst = sign ? -(int)val : (int)val;
  return CNV_OK;
}
