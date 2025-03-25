#ifndef S21_COMPARISON
#define S21_COMPARISON

#include "../s21_decimal.h"

enum ERROR_CODES_COMP { FALSE, TRUE };

  int s21_is_less(s21_decimal, s21_decimal); // <	
  int s21_is_less_or_equal(s21_decimal, s21_decimal); // <=	
  int s21_is_greater(s21_decimal, s21_decimal); //	>	
  int s21_is_greater_or_equal(s21_decimal, s21_decimal);// >=	
  int s21_is_equal(s21_decimal, s21_decimal); //	==	
  int s21_is_not_equal(s21_decimal, s21_decimal); // !=	

#endif 