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

/*
Функция проверяет, включен бит или нет
*/
int s21_bit_check(unsigned int num, unsigned int bit_num) {
  return num & (1 << bit_num);
}

/*
Функция проверяет, включает бит
*/
int s21_bit_add(unsigned num, unsigned int bit_num) { 
  return num | (1 << bit_num); 
}
