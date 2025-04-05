#ifndef S21_ARIFMETIC
#define S21_ARIFMETIC

#include "../s21_decimal.h"

enum ERROR_CODES_AR { AR_OK, NUM_TOO_HIGH, NUM_TOO_SMALL, AR_NAN };
// 0 — OK;
// 1 — число слишком велико или равно бесконечности;
// 2 — число слишком мало или равно отрицательной бесконечности;
// 3 — деление на 0.
 
  int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result); // Addition	+	
  int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result); // Subtraction	-	
  int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result); // Multiplication	*	
  int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result); // Division	/	

#endif