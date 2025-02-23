#ifndef S21_COMPARISON
#define S21_COMPARISON

#include "../s21_decimal.h"

enum ERROR_CODES { FALSE, TRUE };

  int s21_is_less(s21_decimal, s21_decimal); // Less than	<	
  int s21_is_less_or_equal(s21_decimal, s21_decimal); // Less than or equal to	<=	
  int s21_is_greater(s21_decimal, s21_decimal); // Greater than	>	
  int s21_is_greater_or_equal(s21_decimal, s21_decimal);// Greater than or equal to	>=	
  int s21_is_equal(s21_decimal, s21_decimal); // Equal to	==	
  int s21_is_not_equal(s21_decimal, s21_decimal); // Not equal to	!=	

#endif 