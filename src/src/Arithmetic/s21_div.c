#include "s21_arithmetic.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if(is_zero (value_2)){
        return AR_NAN;
    }
    zero_decimal(result);
    int sign = ((value_1.bits[3] >> 31) == (value_2.bits[3] >> 31)) ? 0 : 1;

    s21_decimal abs_1 = absoulute_decimal(value_1);
    s21_decimal abs_2 = absoulute_decimal(value_2);

    normalize_scales(&abs_1, &abs_2);

    s21_decimal quotient, remainder;
    divide_integer(abs_1, abs_2, &quotient, &remainder);

    s21_decimal fractional = {0};
    int scale = 0;
    while (!is_zero(remainder) && scale < 28) {
        multiply_by_10(&remainder);
        s21_decimal temp;
        divide_integer(remainder, abs_2, &temp, &remainder);
        
        add(fractional, temp, &fractional);
        scale++;
    }

    if (scale == 28 && !is_zero(remainder)) {
        s21_decimal half_divisor = abs_2;
        divide_integer(half_divisor, (s21_decimal){{2, 0, 0, 0}}, &half_divisor, &(s21_decimal){0});

        if (compare(remainder, half_divisor) > 0) {
            fractional.bits[0]++; // оокругляем вверх
        } else if (compare(remainder, half_divisor) == 0) {
            if (fractional.bits[0] & 1) {
                fractional.bits[0]++; // оргругляем до ближайшего четного
            }
        }
    }}

    
    combine_parts(quotient, fractional, scale, result);

    
    if (is_overflow(result)) {
        return (sign == 0) ? 1 : 2; 
    }

    
    set_sign(result, sign);
    set_scale(result, scale);

    return 0; 

}
