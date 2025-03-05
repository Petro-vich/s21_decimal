#include <stdio.h>
#include <stdint.h> 
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
    init_decimal(quotient);
    init_decimal(remainder);
    *remainder = dividend;

    while (compare(*remainder, divisor) >= 0) {
        s21_decimal temp = divisor;
        int shift = 0;

        s21_decimal temp_shifted = temp;
        while (compare(*remainder, temp_shifted) >= 0) {
            shift_left(&temp_shifted, 1); // Передаем указатель
            shift++;
        }
        shift_left(&temp, shift - 1); // Корректируем сдвиг
        
        subtract(*remainder, temp, remainder);
        
        s21_decimal power = {0};
        power.bits[0] = 1 << (shift - 1);
        add(*quotient, power, quotient);
    }
}

void multiply_by_10(s21_decimal *num) {
    s21_decimal shifted, doubled;
    
    // Создаем копии для сдвига
    shifted = *num;
    doubled = *num;
    
    // Сдвигаем копии
    shift_left(&shifted, 3); // shifted = num * 8
    shift_left(&doubled, 1); // doubled = num * 2
    
    // Складываем результаты
    add(shifted, doubled, num); // num = shifted + doubled = num * 10
}


int is_zero(s21_decimal num) {
  return (num.bits[0] == 0 && num.bits[1] == 0 && num.bits[2] == 0);
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

void add(s21_decimal a, s21_decimal b, s21_decimal *result) {
  int carry = 0;

  for (int i = 0; i < 3; i++) {
    uint64_t temp = (uint64_t)a.bits[i] + b.bits[i] + carry;
    result->bits[i] = (uint32_t)(temp & 0xFFFFFFFF);
    carry = (temp >> 32) ? 1 : 0;

  }
}

void shift_left(s21_decimal *num, int shift) {
    for (int i = 0; i < shift; i++) {
        // Перенос битов между блоками
        int carry_0 = (num->bits[0] & 0x80000000) ? 1 : 0; // Перенос из bits[0]
        int carry_1 = (num->bits[1] & 0x80000000) ? 1 : 0; // Перенос из bits[1]

        // Сдвиг каждого блока влево на 1 бит
        num->bits[0] <<= 1;
        num->bits[1] <<= 1;
        num->bits[2] <<= 1;

        // Учет переноса
        if (carry_0) num->bits[1] |= 1; // Перенос из bits[0] в bits[1]
        if (carry_1) num->bits[2] |= 1; // Перенос из bits[1] в bits[2]
    }
}

int is_overflow (s21_decimal *num){
  if (num->bits[2] > 0xFFFFFFFF || num->bits[1] > 0xFFFFFFFF || num->bits[0] > 0xFFFFFFFF) {
    return 1;
  }
  return 0;

}

int compare(s21_decimal value_1, s21_decimal value_2) {
    // Приведение чисел к одному масштабу
    s21_normalize(&value_1, &value_2);
    int res = 0;
    // Сравнение знаков
    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);

    if (sign1 != sign2) {
        res = (sign1 == 1) ? -1 : 1;
    }

    // Сравнение мантисс
    for (int i = 2; i >= 0 || res != 0; --i) {
        if (value_1.bits[i] < value_2.bits[i]) {
            res = (sign1 == 1) ? 1 : -1;
        } else if (value_1.bits[i] > value_2.bits[i]) {
            res = (sign1 == 1) ? -1 : 1;
        }
    }

    return res;
}

//int s21_get_sign(s21_decimal value) {
//    return (value.bits[3] >> 31) & 1;
//}