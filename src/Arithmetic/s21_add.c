#include "s21_arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int status = AR_OK;
  if (result == NULL) {
    status = CALC_ERROR;
  } else {
    memset(result, 0, sizeof(s21_decimal));
    if (s21_is_zero(value_1)) {
      *result = value_2;
      if (s21_is_zero(*result)) result->bits[3] = 0;
      return AR_OK;
    }
    if (s21_is_zero(value_2)) {
      *result = value_1;
      if (s21_is_zero(*result)) result->bits[3] = 0;
      return AR_OK;
    }
    
    s21_big_decimal tmp_1 = s21_decimal_to_big(value_1);
    s21_big_decimal tmp_2 = s21_decimal_to_big(value_2);
    s21_big_decimal tmp_res = {{0}};

    s21_normalize_big(&tmp_1, &tmp_2);

    if (status == AR_OK) {
      // Get sign from big decimal's sign bit (bits[7])
      int sign1 = s21_check_sign(tmp_1.bits[7]);
      int sign2 = s21_check_sign(tmp_2.bits[7]);

      if (sign1 == sign2) {
        tmp_res = s21_add_big(tmp_1, tmp_2);
        // Set sign in big decimal's sign bit
        s21_set_sign(&tmp_res.bits[7], sign1);
      } else {
        if (s21_big_mantissa_is_greater_or_equal(tmp_1, tmp_2)) {
          tmp_res = s21_sub_big(tmp_1, tmp_2);
          s21_set_sign(&tmp_res.bits[7], sign1);
        } else {
          tmp_res = s21_sub_big(tmp_2, tmp_1);
          s21_set_sign(&tmp_res.bits[7], sign2);
        }
      }
      
      // Get scale from big decimal's scale field (bits[7])
      int common_scale = s21_get_scale(tmp_1.bits[7]);
      // Set scale in big decimal's scale field
      s21_set_scale(&tmp_res.bits[7], common_scale);
      
      status = s21_could_be_converted(tmp_res);

      if (status == AR_OK) {
        *result = s21_from_big_to_decimal(tmp_res);
        if (s21_is_zero(*result)) {
          result->bits[3] = 0;
        }
      }
    }
  }
  return status;
}
