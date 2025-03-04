#include "s21_arithmetic.h"

void multiply_by_10(s21_decimal *num) {
    s21_decimal temp = *num;
    s21_decimal shifted = shift_left(*num, 3); // * 8 (left to 3)
    s21_decimal doubled = shift_left(*num, 1); // * 2 (left to 1)

    add(shifted, doubled, num); // shifted (num*8) && doubled (num * 2) == num * 10
}
