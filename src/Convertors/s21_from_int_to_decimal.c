#include "../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  if (!dst) return CONVERSION_ERROR;

  memset(dst, 0, sizeof(s21_decimal));

  if (src < 0) {
    s21_set_sign(&dst->bits[3], 1);
    dst->bits[0] =
        (src == INT_MIN) ? (unsigned)(-(src + 1)) + 1 : (unsigned)(-src);
  } else {
    dst->bits[0] = (unsigned)src;
  }

  return CNV_OK;
}
