#include <stdio.h>

#include "../s21_decimal.h"

int s21_get_bit(s21_decimal decimal, int bit_position) {
  int byte_position = bit_position / 32;
  int bit_offset = bit_position % 32;

  return (decimal.bits[byte_position] >> bit_offset) & 1;
}
int s21_set_bit(s21_decimal *decimal, int bit_position, int bit) {
  int byte_position = bit_position / 32; 
  int bit_offset = bit_position % 32;    

  if (bit == 1)
      decimal->bits[byte_position] |= (1 << bit_offset);
  else
      decimal->bits[byte_position] &= ~(1 << bit_offset);
  return 0;
}


int s21_get_exp(s21_decimal decimal) {
  // 16-23  (bits[3])
  int exp = (decimal.bits[3] >> 16) & 0xFF;  // 0xFF - mask 8 bit
  return exp;
}

int s21_get_sign(s21_decimal decimal) {
  return s21_get_bit(decimal,
                     127);  // 0 for positive number, 1 for negative number
}

s21_decimal absoulute_decimal(s21_decimal num) {
  num.bits[3] &= 0x7FFFFFFF;
  return num;
}

void combine_parts(s21_decimal integer_part, s21_decimal fractional_part, int scale, s21_decimal *result) {
  *result = integer_part;

  for (int i = 0; i < scale; i++) {
    multiply_by_10(result);
  }
  add(*result, fractional_part, result);

  set_scale(result, scale);
}

void divide_integer(s21_decimal dividend, s21_decimal divisor, s21_decimal *quotient, s21_decimal *remainder) {
  // Инициализация результата и остатка
  init_decimal(quotient);
  init_decimal(remainder);

  // cpy делимое в остаток
  *remainder = dividend;

  while (compare(*remainder, divisor) >= 0) {
    s21_decimal temp = divisor;
    int shift = 0;

    while (compare(*remainder, shift_left(temp, 1)) >= 0) {
      temp = shift_left(temp, 1);
      shift++;
    }

    subtract(*remainder, temp, remainder);

    s21_decimal power = {0};
    power.bits[0] = 1 << shift;
    add(*quotient, power, quotient);
  }
}

void multiply_by_10(s21_decimal *num) {
  s21_decimal temp = *num;
  s21_decimal shifted = shift_left(*num, 3); // * 8 (left to 3)
  s21_decimal doubled = shift_left(*num, 1); // * 2 (left to 1)

  add(shifted, doubled, num); // shifted (num*8) && doubled (num * 2) == num * 10
}

int is_zero(s21_decimal num) {
  return (value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0);
}

void normalize_scales(s21_decimal *num1, s21_decimal *num2) {
  int scale1 = (num1->bits[3] >> 16) & 0xFF;
  int scale2 = (num2->bits[3] >> 16) & 0xFF;

  int delta_scale = scale2 - scale1;

  if (delta_scale > 0) {
    for (int i = 0; i < delta_scale; i++) {
      multiply_by_10(num1);
    }
    num1->bits[3] = (scale2 << 16) | (num1->bits[3] & 0x80000000);
  } else if (delta_scale < 0) {

    for (int i = 0; i < -delta_scale; i++) {
      multiply_by_10(num2);
    }
    num2->bits[3] = (scale1 << 16) | (num2->bits[3] & 0x80000000);
  }
}

void set_sign(s21_decimal *num, int sign) {
  if (sign) {
    num->bits[3] |= 0x80000000; // Устанавливаем бит знака (1)
  } else {
    num->bits[3] &= 0x7FFFFFFF; // Сбрасываем бит знака (0)
  }
}


void set_scale(s21_decimal *num, int scale) {
  num->bits[3] &= 0x80000000; // Сохраняем бит знака
  num->bits[3] |= (scale << 16); // Устанавливаем масштаб
}


void zero_decimal(s21_decimal *num) {
  num->bits[0] = 0;
  num->bits[1] = 0;
  num->bits[2] = 0;
  num->bits[3] = 0;

}
