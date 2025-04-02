#include "s21_arithmetic.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (result == NULL) return CALC_ERROR; 

    s21_big_decimal dividend = s21_decimal_to_big(value_1);
    s21_big_decimal divisor = s21_decimal_to_big(value_2);
    s21_big_decimal quotient = {{0}}; 
    s21_big_decimal remainder = {{0}}; 
    int status = AR_OK;

    int sign_dividend = s21_check_sign(dividend.bits[7]);
    int sign_divisor = s21_check_sign(divisor.bits[7]);
 
    s21_set_sign(&dividend.bits[7], 0);
    s21_set_sign(&divisor.bits[7], 0);

    if (s21_is_zero_big(divisor)) {
        memset(result, 0, sizeof(s21_decimal));
        return s21_is_zero_big(dividend) ? CALC_UNDEFINED : AR_NAN;
    }

    if (s21_is_zero_big(dividend)) {
        s21_zero_decimal(result);
        return AR_OK;
    }

    s21_get_scale(divisor.bits[7]);
    int current_scale = s21_align_scales(&dividend, &divisor);

    if (current_scale < 0 || current_scale > S21_MAX_SCALE + 10) { 
        memset(result, 0, sizeof(s21_decimal));
        return (sign_dividend ^ sign_divisor) ? NUM_TOO_SMALL : NUM_TOO_HIGH;
    }

    remainder = s21_div_big_by_mantissa(dividend, divisor, &quotient);

    s21_big_decimal current_digit = {{0}};
    s21_big_decimal one = {{1}}; 

    while (!s21_is_zero_big(remainder)) {

        if (current_scale >= S21_MAX_SCALE + 1) {

            s21_big_decimal check_dividend = s21_mul_big_by_10(remainder);
            s21_big_decimal next_digit_quotient = {{0}}; 
            s21_div_big_by_mantissa(check_dividend, divisor, &next_digit_quotient); // Получаем следующую цифру (в next_digit_quotient.bits[0])

            s21_big_decimal five = {{5}};
            if (s21_compare_big_mantissa(next_digit_quotient, five) > 0) { // Если следующая цифра > 5
                 quotient = s21_add_big(quotient, one); 
            } else if (s21_compare_big_mantissa(next_digit_quotient, five) == 0) {
                if (quotient.bits[0] & 1) { 
                     quotient = s21_add_big(quotient, one);
                    
                }
            }
            break; 
        }

        dividend = s21_mul_big_by_10(remainder);
        current_scale++;

        if (current_scale > S21_MAX_SCALE + 10) {
            status = (sign_dividend ^ sign_divisor) ? NUM_TOO_SMALL : NUM_TOO_HIGH;
            break;
        }

        remainder = s21_div_big_by_mantissa(dividend, divisor, &current_digit);
        quotient = s21_mul_big_by_10(quotient);
        quotient = s21_add_big(quotient, current_digit);
    }

    s21_set_scale(&quotient.bits[7], current_scale);
    s21_set_sign(&quotient.bits[7], (sign_dividend ^ sign_divisor));

    // Конвертация и проверка переполнения
    status = s21_big_to_decimal(quotient, result);

    if (status != AR_OK) {
        memset(result, 0, sizeof(s21_decimal));
    }

    return status;
}