#ifndef HELPERS
#define HELPERS

#include "../s21_decimal.h"
	
int s21_get_bit(s21_decimal decimal, int bit_position);
int s21_set_bit(s21_decimal *decimal, int bit_position, int bit);
int s21_get_exp(s21_decimal decimal); 
int s21_get_sign(s21_decimal decimal);



#endif
