#include "s21_other_functions.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  s21_zero_decimal(result);
  long double fl_to_round = 0.0;
  long double difference = 0;
  s21_from_decimal_to_double(value, &fl_to_round);
  fl_to_round = round(fl_to_round);
  if (fl_to_round < 0.0) {
    s21_set_bit(result, 127, 1);

    fl_to_round *= -1;
  }
  for (int i = 0; fl_to_round >= 1 && i < 96; i++) {
    fl_to_round = floor(fl_to_round) / 2;
    difference = fl_to_round - floor(fl_to_round);
    if (difference > 0.0) {
      s21_set_bit(result, i, 1);
    } else {
      s21_set_bit(result, i, 0);
    }
  }
  s21_set_scale(result, 0);
  return 0;
}