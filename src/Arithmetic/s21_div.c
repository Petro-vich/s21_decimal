#include "s21_arithmetic.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    s21_big_decimal divisible = s21_decimal_to_big(value_1);
    s21_big_decimal divider = s21_decimal_to_big(value_2);
    s21_big_decimal tmp_res = {{0, 0, 0, 0, 0, 0, 0, 0}};
    int res = AR_OK;

    // Check for null result pointer first
    if (result == NULL) {
        res = 1;  // Error code for null pointer (assumed from context)
    }
    // Check if divisor is zero
    else if (!s21_is_not_null(divider)) {
        res = AR_NAN;  // Division by zero error
    }
    // Check if dividend is zero and divisor is not zero
    else if (!s21_is_not_null(divisible)) {
        s21_zero_decimal(result);  // Set result to 0
        res = AR_OK;                  // Return success
    }
    // Proceed with division if none of the above conditions are met
    else {
        // Initialize widths (fixed the original bug where width_2 was uninitialized)
        int width_1 = s21_get_width(divisible);
        int width_2 = s21_get_width(divider);

        // First loop: Scale up divisible until it's >= divider or scale reaches 35
        while ((width_2 > width_1 || s21_big_mantissa_is_less(divisible, divider)) &&
            s21_get_scale(divisible.bits[7]) < 35) {
            divisible = s21_mul_big_by_10(divisible);
        s21_set_scale(&divisible.bits[7], s21_get_scale(divisible.bits[7]) + 1);
        width_1 = s21_get_width(divisible);
            }

            // Second loop: Compute quotient with increasing precision up to scale 35
            int scale = s21_get_scale(divisible.bits[7]);
            while (s21_is_not_null(s21_div_big(divisible, divider, &tmp_res)) && scale < 35) {
                divisible = s21_mul_big_by_10(divisible);
                scale++;
                s21_set_scale(&(divisible.bits[7]), scale);
            }

            // Set the scale of the result: (sa + k) - sb
            scale = s21_get_scale(divisible.bits[7]) - s21_get_scale(divider.bits[7]);
            if (scale >= 0) {
                s21_set_scale(&(tmp_res.bits[7]), scale);
            } else {
                // If scale is negative, multiply tmp_res by 10 to adjust to scale 0
                while (scale++ < 0) {
                    tmp_res = s21_mul_big_by_10(tmp_res);
                }
            }

            // Set the sign: positive if signs match, negative if they differ
            if (s21_check_sign(value_1.bits[3]) == s21_check_sign(value_2.bits[3])) {
                s21_set_sign(&(tmp_res.bits[7]), 0);  // Positive
            } else {
                s21_set_sign(&(tmp_res.bits[7]), 1);  // Negative
            }

            // Check if the result can be converted back to s21_decimal
            res = s21_could_be_converted(tmp_res);
            if (res == AR_OK) {
                *result = s21_from_big_to_decimal(tmp_res);
            }
    }

    return res;
}
