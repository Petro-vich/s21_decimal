#include <stdio.h>

#include "s21_convertors.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {  // В float
  if (!dst) {
    return CONV_ERR;
  }

  double tmp = 0;
  int exp = s21_get_exp(src);
  int sign = s21_get_sign(src);

  for (int i = 0; i < 96; i++) {
    if ((src.bits[i / 32] & (1 << i % 32)) != 0) tmp += pow(2, i);
  }

  if (exp > 0) {
    tmp /= pow(10, exp);
  }

  *dst = (float)(sign ? -tmp : tmp);

  return CNV_OK;
}