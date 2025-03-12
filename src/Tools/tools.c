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
  return s21_get_bit(decimal, 127);  // 0 for positive number, 1 for negative number
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

    // Проверка на максимальный масштаб
    scale = (scale > 28) ? 28 : scale;
    set_scale(result, scale);
}

void divide_integer(s21_decimal dividend, s21_decimal divisor, s21_decimal *quotient, s21_decimal *remainder) {
    zero_decimal(quotient);
    zero_decimal(remainder);
    *remainder = dividend;

    if (is_zero(divisor)) return;

    while (compare(*remainder, divisor) >= 0) {
        s21_decimal shifted_divisor = divisor;
        s21_decimal multiple = { .bits = {1, 0, 0, 0} };
        int shift = 0;

        // Бинарный поиск: находим максимальный сдвиг
        while (compare(shifted_divisor, *remainder) <= 0 && !(shifted_divisor.bits[2] & 0x80000000)) {
            shift_left(&shifted_divisor, 1);
            shift++;
        }

        // Возврат на шаг назад
        if (shift > 0) {
            shift_right(&shifted_divisor, 1);
            shift--;
        }

        subtract(*remainder, shifted_divisor, remainder);
        shift_left(&multiple, shift);
        add(*quotient, multiple, quotient);
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

  if (scale1 > 28 || scale2 > 28) {
    scale1 = scale1 > 28 ? 28 : scale1;
    scale2 = scale2 > 28 ? 28 : scale2;
  }

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

int subtract(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  zero_decimal(result);
  int borrow = 0;
  for (int i = 0; i < 3; i++) {
    long long diff = (long long)value_1.bits[i] - value_2.bits[i] - borrow;
    if (diff < 0) {
      diff += (1LL << 32);
      borrow = 1;
    } else {
      borrow = 0;
    }
    result->bits[i] = (int)(diff & 0xFFFFFFFF);
  }
  return borrow ? 1 : 0;
}

void shift_left(s21_decimal *num, int shift) {
  for (int i = 0; i < shift; i++) {
    int carry_0 = (num->bits[0] & 0x80000000) ? 1 : 0;
    int carry_1 = (num->bits[1] & 0x80000000) ? 1 : 0;

    // Используйте беззнаковые типы для корректного сдвига
    num->bits[0] = (num->bits[0] << 1) & 0xFFFFFFFF;
    num->bits[1] = (num->bits[1] << 1) & 0xFFFFFFFF;
    num->bits[2] = (num->bits[2] << 1) & 0xFFFFFFFF;

    if (carry_0) num->bits[1] |= 1;
    if (carry_1) num->bits[2] |= 1;
  }
}
void shift_right(s21_decimal *num, int shift) {
    for (int i = 0; i < shift; i++) {
        int carry_2 = num->bits[2] & 1;
        int carry_1 = num->bits[1] & 1;

        num->bits[2] >>= 1;
        num->bits[1] = (num->bits[1] >> 1) | (carry_2 << 31);
        num->bits[0] = (num->bits[0] >> 1) | (carry_1 << 31);
    }
}

int is_overflow(s21_decimal *num) {
  if (num->bits[2] > 0xFFFFFFFF || num->bits[1] > 0xFFFFFFFF || num->bits[0] > 0xFFFFFFFF) {
    return 1;
  }
  return 0;
}

int compare(s21_decimal value_1, s21_decimal value_2) {
  // Приведение чисел к одному масштабу
  normalize_scales(&value_1, &value_2);
  int res = 0;
  // Сравнение знаков
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);

  if (sign1 != sign2) {
    res = (sign1 == 1) ? -1 : 1;
  }

  // Сравнение мантисс
  for (int i = 2; i >= 0; i--) {
    if (value_1.bits[i] > value_2.bits[i]) {
      res = (sign1 == 1) ? -1 : 1;
      break;
    } else if (value_1.bits[i] < value_2.bits[i]) {
      res = (sign1 == 1) ? 1 : -1;
      break;
    }
  }

  return res;
}
