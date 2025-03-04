#ifndef HELPERS
#define HELPERS

#include "../s21_decimal.h"
	
int s21_get_bit(s21_decimal decimal, int bit_position);
int s21_set_bit(s21_decimal *decimal, int bit_position, int bit);
int s21_get_exp(s21_decimal decimal); 
int s21_get_sign(s21_decimal decimal);
s21_decimal absoulute_decimal(s21_decimal num);
void combine_parts(s21_decimal integer_part, s21_decimal fractional_part, int scale, s21_decimal *result);
void divide_integer(s21_decimal dividend, s21_decimal divisor, s21_decimal *quotient, s21_decimal *remainder);
void multiply_by_10(s21_decimal *num);
int is_zero(s21_decimal num);
void normalize_scales(s21_decimal *num1, s21_decimal *num2);
void set_sign(s21_decimal *num, int sign);
void set_scale(s21_decimal *num, int scale);
void zero_decimal(s21_decimal *num);
#endif
