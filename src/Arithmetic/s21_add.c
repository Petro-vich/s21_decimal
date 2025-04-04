#include "s21_arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int status = AR_OK;  // Assuming AR_OK is 0 for success

  if (result == NULL) {
    return CALC_ERROR;  // Invalid pointer
  }

  // Initialize result to zero
  *result = (s21_decimal){{0, 0, 0, 0}};

  // Handle zero cases
  if (s21_is_zero(value_1) && s21_is_zero(value_2)) {
    return AR_OK;
  } else if (s21_is_zero(value_1)) {
    *result = value_2;
    return AR_OK;
  } else if (s21_is_zero(value_2)) {
    *result = value_1;
    return AR_OK;
  }

  // Convert to big decimals for intermediate calculations
  s21_big_decimal tmp_1 = s21_decimal_to_big(value_1);
  s21_big_decimal tmp_2 = s21_decimal_to_big(value_2);
  s21_big_decimal tmp_res = {{0}};

  // Normalize scales of both inputs
  s21_normalize_big(&tmp_1, &tmp_2);

  // Extract signs
  int sign1 = s21_check_sign(tmp_1.bits[7]);
  int sign2 = s21_check_sign(tmp_2.bits[7]);

  // Perform addition or subtraction based on signs
  if (sign1 == sign2) {
    tmp_res = s21_add_big(tmp_1, tmp_2);
    s21_set_sign(&tmp_res.bits[7], sign1);
  } else {
    if (s21_big_mantissa_is_greater(tmp_1, tmp_2)) {
      tmp_res = s21_sub_big(tmp_1, tmp_2);
      s21_set_sign(&tmp_res.bits[7], sign1);
    } else if (s21_big_mantissa_is_less(tmp_1, tmp_2)) {
      tmp_res = s21_sub_big(tmp_2, tmp_1);
      s21_set_sign(&tmp_res.bits[7], sign2);
    } else {
      // Mantissas equal, result is zero
      tmp_res = (s21_big_decimal){{0}};
      s21_set_sign(&tmp_res.bits[7], 0);  // Positive zero
    }
  }

  // Set the result’s scale
  int common_scale = s21_get_scale(tmp_1.bits[7]);
  s21_set_scale(&tmp_res.bits[7], common_scale);

  // Check if the result can be converted back to s21_decimal
  status = s21_could_be_converted(tmp_res);

  if (status == AR_OK) {
    *result = s21_from_big_to_decimal(tmp_res);
    if (s21_is_zero(*result)) {
      result->bits[3] = 0;  // Ensure zero has scale 0 and positive sign
    }
  } else {
    // Handle overflow/underflow
    if (s21_check_sign(tmp_res.bits[7]) == 0) {
      status = NUM_TOO_HIGH;  // Positive overflow
    } else {
      status = NUM_TOO_SMALL;  // Negative overflow
    }
  }

  return status;
}
