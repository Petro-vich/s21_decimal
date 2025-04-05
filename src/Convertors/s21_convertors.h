#ifndef S21_CONVERTORS
#define S21_CONVERTORS

#include "../s21_decimal.h"
enum ERROR_CODES_CNV { CNV_OK, CONVERSION_ERROR };

int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);

#endif
