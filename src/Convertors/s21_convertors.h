#ifndef S21_CONVERTORS
#define S21_CONVERTORS

#include "../s21_decimal.h"

#define OK 0
#define CONVERSION_ERROR 1

  int s21_from_int_to_decimal(int src, s21_decimal *dst); // Из int	
  // int s21_from_float_to_decimal(float src, s21_decimal *dst); // Из float	
  // int s21_from_decimal_to_int(s21_decimal src, int *dst); // В int	
  // int s21_from_decimal_to_float(s21_decimal src, float *dst); // В float	


#endif 