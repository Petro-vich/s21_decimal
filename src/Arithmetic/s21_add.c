#include "s21_arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2,
            s21_decimal *result) {  // Addition	+
  int res = 0, mem = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 32; j++) {
      switch ((s21_bit_check(value_1.bits[i], j) != 0) +
              (s21_bit_check(value_2.bits[i], j) != 0) + (mem > 0)) {
        case 1:
          result->bits[i] = s21_bit_add(result->bits[i], j);
          mem = 0;
          break;
        case 2:
          mem = 1 << (j + 1);
          if (mem < 0) mem = 1;
          break;
        case 3:
          result->bits[i] = s21_bit_add(result->bits[i], j);
          mem = 1 << (j + 1);
          if (mem < 0) mem = 1;
          break;
        default:
          break;
      }
    }
  }
  if (mem) res = 1;
  
  return res;
} 
      