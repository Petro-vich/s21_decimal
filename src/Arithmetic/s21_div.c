#include "./../Helpers/helpers.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (result == NULL) {
    return AR_NAN;  // Error: null result pointer
  }

  if (s21_is_zero(value_2)) {
    return AR_NAN;  // Error: division by zero
  }

  int scale1 = s21_get_exp(value_1);
  int scale2 = s21_get_exp(value_2);

  if (scale1 > 28 || scale2 > 28) {
    return AR_NAN;  // Error: invalid scale
  }

  // Determine result sign
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);
  int result_sign = sign1 ^ sign2;

  // Get absolute values
  s21_decimal abs_1 = s21_absoulute_decimal(value_1);
  s21_decimal abs_2 = s21_absoulute_decimal(value_2);

  // Normalize scales (if needed)
  s21_normalize_scales(&abs_1, &abs_2);

  // Perform integer division
  s21_decimal quotient = {0};
  s21_decimal remainder = {0};
  s21_divide_integer(abs_1, abs_2, &quotient, &remainder);

  // Calculate fractional part
  s21_decimal fractional = {0};
  int scale = 0;

  while (!s21_is_zero(remainder) && scale < 28) {
    s21_multiply_by_10(&fractional);  // Fix: Shift fractional left
    s21_multiply_by_10(&remainder);
    s21_decimal temp = {0};
    s21_divide_integer(remainder, abs_2, &temp, &remainder);
    s21_add(fractional, temp, &fractional);
    scale++;
  }

  // Handle rounding if precision limit reached
  if (scale == 28 && !s21_is_zero(remainder)) {
    s21_decimal half_divisor;
    s21_decimal two = {{2, 0, 0, 0}};
    s21_divide_integer(abs_2, two, &half_divisor, &(s21_decimal){0});

    if (s21_compare(remainder, half_divisor) > 0) {
      s21_add(fractional, two, &fractional);  // Round up
    } else if (s21_compare(remainder, half_divisor) == 0) {
      if (fractional.bits[0] & 1) {
        s21_add(fractional, two, &fractional);  // Round to even
      }
    }
    // Check for overflow after rounding
    if (s21_is_overflow(&fractional)) {
      scale--;
      s21_divide_integer(fractional, two, &fractional, &remainder);
      s21_add(quotient, fractional, &quotient);
      fractional = remainder;
    }
  }

  // Combine integer and fractional parts
  s21_combine_parts(quotient, fractional, scale, result);

  // Check for overflow
  if (s21_is_overflow(result)) {
    return result_sign ? NUM_TOO_SMALL : NUM_TOO_HIGH;
  }

  // Set sign and scale
  s21_set_sign(result, result_sign);
  s21_set_scale(result, scale);

  return 0;  // Success
}
