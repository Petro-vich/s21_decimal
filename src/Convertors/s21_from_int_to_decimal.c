#include <limits.h>

#include "../s21_decimal.h"


int s21_from_int_to_decimal(int src, s21_decimal *dst){
    if (!dst) {
        return CONV_ERR;
    }
    dst->bits[0] = dst->bits[1] = dst->bits[2] = dst->bits[3] = 0;
    if (src<0) {
        dst->bits[3] |= 0x80000000;
        if (src != INT_MIN) {
        src = -src;  
    }
  }
  dst->bits[0] = src;
  return CNV_OK;
}
