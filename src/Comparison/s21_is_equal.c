#include "s21_comparison.h"



int s21_is_equal(s21_decimal a, s21_decimal b) {
  s21_normalize_scales(&a, &b); // Приведение к одному масштабу
  return (a.bits[0] == b.bits[0] &&
  a.bits[1] == b.bits[1] &&
  a.bits[2] == b.bits[2] &&
  s21_get_sign(a) == s21_get_sign(b));
}
