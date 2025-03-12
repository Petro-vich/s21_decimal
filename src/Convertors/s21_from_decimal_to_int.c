#include "s21_convertors.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {  // В int
  if (!dst) {
      return CONV_ERR;
  }

  if (src.bits[1] != 0 || src.bits[2] != 0) {
      return CONV_ERR;
  }

  int scale = (src.bits[3] >> 16) & 0xFF;

  int value = src.bits[0];

  for (int i = 0; i < scale; i++) {
    value /= 10;
  }

  if (src.bits[3] & 0x80000000) {
    value = -value;
  }

  *dst = value;
  return CNV_OK;
}