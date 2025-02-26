#include <limits.h>

#include "../s21_decimal.h"


int s21_from_int_to_decimal(int src, s21_decimal *dst){
    if (!dst) {
        return CONVERSION_ERROR;
    }
    dst = {0}
    if (src<0) {
        dst->bits[3] |= 0x80000000;
        if (src != INT_MIN) {
        src = -src;  
    }
    } 
    dst->bits[0] = src;
    return OK;
}
