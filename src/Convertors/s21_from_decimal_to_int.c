#include "s21_convertors.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  if (!dst) return CONVERSION_ERROR;

  
  if (src.bits[2] != 0 || src.bits[1] > 0x7FFFFFFF) return CONVERSION_ERROR;

  int scale = (src.bits[3] >> 16) & 0xFF;

  uint64_t value = ((uint64_t)src.bits[1] << 32) | src.bits[0];

  
  for (int i = 0; i < scale; i++) {
    value /= 10;
  }
  
  if (value > 2147483648) return CONVERSION_ERROR;
  
  if (src.bits[3] & 0x80000000) {
    if (value == 2147483648) {  
      *dst = -2147483648;
    } else {
      *dst = -(int)value;
    }
  } else {
    *dst = (int)value;
  }

  return CNV_OK;
}
