#ifndef HELPERS
#define HELPERS

#include "../s21_decimal.h"
	
<<<<<<< HEAD
int s21_get_exp(s21_decimal decimal); 

int s21_get_sign(s21_decimal decimal);

#endif HELPERS
=======
int s21_get_bit(s21_decimal decimal, int bit_position);
int s21_set_bit(s21_decimal *decimal, int bit_position, int bit);
int s21_get_exp(s21_decimal decimal); 
int s21_get_sign(s21_decimal decimal);
int s21_bit_check(unsigned int num, unsigned int bit_num);
int s21_bit_add(unsigned num, unsigned bit_num);

#endif
>>>>>>> main
