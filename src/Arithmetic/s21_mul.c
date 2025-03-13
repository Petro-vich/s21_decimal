#include "s21_arithmetic.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2,
            s21_decimal *result) {  // Multiplication	*
  if(s21_is_zero(value_1) || s21_is_zero(value_2)) {
    s21_zero_decimal(result);
    return 0;
  }

  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);
  int result_sign = (sign1 == sign2) ? 0 : 1;

  s21_decimal abs_1 = s21_absoulute_decimal(value_1);
  s21_decimal abs_2 = s21_absoulute_decimal(value_2);

  s21_zero_decimal(result);

  for(int i = 0; i < 96; i++) {
    if(s21_get_bit(abs_2, i)) {
      s21_decimal temp = abs_1;
      s21_shift_left(&temp, i);
      s21_add(*result, temp, result);
    }
  }

  if(s21_is_overflow(result)){
    return(result_sign == 0) ? 1 : 2;
  }

  int exp1 = s21_get_exp(abs_1);
  int exp2 = s21_get_exp(abs_2);
  int result_exp = exp1 + exp2;

    while(result_exp>28 && !s21_is_zero(*result)){
      s21_decimal remainder = {0};
      s21_decimal ten = {{10}, 0, 0, 0};
      s21_divide_integer(*result, ten, result, &remainder);
      result_exp--;
    }

    s21_set_sign(result, result_sign);
    s21_set_scale(result, result_exp);

    return 0;
  }
  
