#ifndef S21_ARIFMETIC
#define S21_ARIFMETIC

#include "../s21_decimal.h"

enum ERROR_CODES_AR { AR_OK, NUM_TOO_HIGH, NUM_TOO_SMALL, AR_NAN };

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

#endif