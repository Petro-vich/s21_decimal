#include <stdio.h>

#include "s21_convertors.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  if (!dst) return CONVERSION_ERROR;

  double tmp = 0;
  for (int i = 0; i < 3; i++) tmp += src.bits[i] * pow(2.0, 32.0 * i);

  int scale = s21_get_scale(src.bits[3]);
  *dst = (float)(tmp * pow(10.0, -scale));
  if (s21_check_sign(src.bits[3])) *dst = -*dst;

  return CNV_OK;
}
