#include "s21_arithmetic.h"


int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (!result) return AR_NAN;

    s21_zero_decimal(result);

    if (s21_is_zero(value_1)) {
        s21_negate(value_2, result);
        return AR_OK;
    }
    if (s21_is_zero(value_2)) {
        *result = value_1;
        return AR_OK;
    }

    int sign_1 = s21_get_sign(value_1);
    int sign_2 = s21_get_sign(value_2);
    int scale_1 = s21_get_exp(value_1);
    int scale_2 = s21_get_exp(value_2);

    s21_normalize_scales(&value_1, &value_2);

    int res_scale = (scale_1 > scale_2) ? scale_1 : scale_2;

    int error = AR_OK;

    if (sign_1 == sign_2) {
        s21_subtract_core(value_1, value_2, result);

        if (s21_compare_abs(value_1, value_2) < 0) {
            s21_set_sign(result, !sign_1);
        } else {
            s21_set_sign(result, sign_1);
        }
    } else {
        error = s21_add_core(value_1, value_2, result);
        s21_set_sign(result, sign_1);
        if (error != AR_OK) {
            error = (s21_get_sign(*result) == 0) ? NUM_TOO_HIGH : NUM_TOO_SMALL;
        }
    }

    s21_set_scale(result, res_scale);

    if (s21_is_max_decimal(result)) {
        error = s21_get_sign(*result) ? NUM_TOO_SMALL : NUM_TOO_HIGH;
    }

    return error;
}

