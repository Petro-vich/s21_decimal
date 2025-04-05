#ifndef S21_OTHER_FUNCTIONS
#define S21_OTHER_FUNCTIONS

#include "../s21_decimal.h"

enum ERROR_CODES_OTH { OTH_OK, CALCULATION_ERROR };

int s21_floor(s21_decimal value, s21_decimal *result);

int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);

int s21_negate(s21_decimal value, s21_decimal *result);

#endif