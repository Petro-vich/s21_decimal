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

/*
Функция проверяет, включен бит или нет
*/
int s21_bit_check(unsigned int num, unsigned int bit_num) {
  return num & (1 << bit_num);
}

/*
Функция, включает бит
*/
int s21_bit_add(unsigned num, unsigned int bit_num) {
  return num | (1 << bit_num);
}

int s21_get_sign(s21_decimal decimal) {
  return s21_get_bit(decimal,
                     127);  // 0 for positive number, 1 for negative number
}

s21_decimal s21_absoulute_decimal(s21_decimal num) {
  num.bits[3] &= 0x7FFFFFFF;
  return num;
}

void s21_combine_parts(s21_decimal integer_part, s21_decimal fractional_part,
                       int scale, s21_decimal *result) {
  *result = integer_part;

  for (int i = 0; i < scale; i++) {
    s21_multiply_by_10(result);
  }
  s21_add(*result, fractional_part, result);

  s21_set_scale(result, scale);
}

void s21_divide_integer(s21_decimal dividend, s21_decimal divisor,
                        s21_decimal *quotient, s21_decimal *remainder) {
  s21_zero_decimal(quotient);
  s21_zero_decimal(remainder);
  *remainder = dividend;

  while (s21_compare(*remainder, divisor) >= 0) {
    s21_decimal temp = divisor;
    int shift = 0;

    s21_decimal temp_shifted = temp;
    while (s21_compare(*remainder, temp_shifted) >= 0) {
      s21_shift_left(&temp_shifted, 1);  // Передаем указатель
      shift++;
    }
    s21_shift_left(&temp, shift - 1);  // Корректируем сдвиг

    s21_subtract(*remainder, temp, remainder);

    s21_decimal power = {0};
    power.bits[0] = 1 << (shift - 1);
    s21_add(*quotient, power, quotient);
  }
}

void s21_multiply_by_10(s21_decimal *num) {
  s21_decimal shifted, doubled;

  // Создаем копии для сдвига
  shifted = *num;
  doubled = *num;

  // Сдвигаем копии
  s21_shift_left(&shifted, 3);  // shifted = num * 8
  s21_shift_left(&doubled, 1);  // doubled = num * 2

  // Складываем результаты
  s21_add(shifted, doubled, num);  // num = shifted + doubled = num * 10
}

int s21_is_zero(s21_decimal num) {
  return (num.bits[0] == 0 && num.bits[1] == 0 && num.bits[2] == 0);
}

void s21_normalize_scales(s21_decimal *num1, s21_decimal *num2) {
  int scale1 = (num1->bits[3] >> 16) & 0xFF;
  int scale2 = (num2->bits[3] >> 16) & 0xFF;

  int delta_scale = scale2 - scale1;

  if (delta_scale > 0) {
    for (int i = 0; i < delta_scale; i++) {
      s21_multiply_by_10(num1);
    }
    num1->bits[3] = (scale2 << 16) | (num1->bits[3] & 0x80000000);
  } else if (delta_scale < 0) {
    for (int i = 0; i < -delta_scale; i++) {
      s21_multiply_by_10(num2);
    }
    num2->bits[3] = (scale1 << 16) | (num2->bits[3] & 0x80000000);
  }
}

void s21_set_sign(s21_decimal *num, int sign) {
  if (sign) {
    num->bits[3] |= 0x80000000;  // Устанавливаем бит знака (1)
  } else {
    num->bits[3] &= 0x7FFFFFFF;  // Сбрасываем бит знака (0)
  }
}
int s21_get_scale(s21_decimal decimal) {
  return (decimal.bits[3] >> 16) & 0xFF;
}

void s21_set_scale(s21_decimal *num, int scale) {
  num->bits[3] &= 0x80000000;     // Сохраняем бит знака
  num->bits[3] |= (scale << 16);  // Устанавливаем масштаб
}

void s21_zero_decimal(s21_decimal *num) {
  num->bits[0] = 0;
  num->bits[1] = 0;
  num->bits[2] = 0;
  num->bits[3] = 0;
}

void s21_shift_left(s21_decimal *num, int shift) {
  for (int i = 0; i < shift; i++) {
    // Перенос битов между блоками
    int carry_0 = (num->bits[0] & 0x80000000) ? 1 : 0;  // Перенос из bits[0]
    int carry_1 = (num->bits[1] & 0x80000000) ? 1 : 0;  // Перенос из bits[1]

    // Сдвиг каждого блока влево на 1 бит
    num->bits[0] <<= 1;
    num->bits[1] <<= 1;
    num->bits[2] <<= 1;

    // Учет переноса
    if (carry_0) num->bits[1] |= 1;  // Перенос из bits[0] в bits[1]
    if (carry_1) num->bits[2] |= 1;  // Перенос из bits[1] в bits[2]
  }
}

int s21_is_overflow(s21_decimal *num) {
  if (num->bits[2] > 0xFFFFFFFF || num->bits[1] > 0xFFFFFFFF ||
      num->bits[0] > 0xFFFFFFFF) {
    return 1;
  }
  return 0;
}

int s21_compare(s21_decimal value_1, s21_decimal value_2) {
  // Приведение чисел к одному масштабу
  s21_normalize_scales(&value_1, &value_2);
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
int s21_compare_abs(s21_decimal value_1, s21_decimal value_2) {
  // Приведение чисел к одному масштабу
  s21_normalize_scales(&value_1, &value_2);

  // Сравнение мантисс (игнорируя знаки)
  for (int i = 2; i >= 0; --i) {
      if (value_1.bits[i] < value_2.bits[i]) {
          return -1;  // value_1 < value_2 по модулю
      } else if (value_1.bits[i] > value_2.bits[i]) {
          return 1;   // value_1 > value_2 по модулю
      }
  }

  return 0; // Числа равны по модулю
}


int s21_subtract(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  s21_zero_decimal(result);
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


int s21_subtract_core(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (!result) return AR_NAN;
    
    // Обнуляем результат
    s21_zero_decimal(result);
    int borrow = 0;
    
    // Обрабатываем 96 значащих битов (0..95)
    for (int i = 0; i < 96; i++) {
        int bit1 = s21_get_bit(value_1, i);
        int bit2 = s21_get_bit(value_2, i);
        int diff = bit1 - bit2 - borrow;
        
        if (diff < 0) {
            diff += 2;  // Если получился отрицательный результат, прибавляем 2
            borrow = 1;
        } else {
            borrow = 0;
        }
        
        s21_set_bit(result, i, diff);
    }
    
    // Если borrow != 0, значит вычитание привело к отрицательному результату (по модулю)
    return borrow;
    //ОСТОРОЖНО, ЭТА ФУНКЦИЯ МОЖЕТ ВЕРНУТЬ 1, ЕСЛИ VAL1 < VAL2 ПО МОДУЛЮ
}


int s21_add_core(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {  // сложение модулей чисел
  if (!result) return AR_NAN;
  
  // Обнуляем все биты результата
  for (int i = 0; i < 4; i++) {
      result->bits[i] = 0;
  }

  int carry = 0; // Перенос

  // Поразрядное сложение (только для младших 96 бит, т.е. bits[0..2])
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 32; j++) {
          int bit_1 = s21_bit_check(value_1.bits[i], j);
          int bit_2 = s21_bit_check(value_2.bits[i], j);
          
          // Вычисляем сумму бита с учетом переноса
          int sum = bit_1 + bit_2 + carry;
          
          // Здесь мы вычисляем значение результирующего бита как (sum % 2)
          if (sum % 2 == 1) {
              // Функция s21_bit_add ожидает unsigned int и возвращает новое значение с установленным битом.
              result->bits[i] = s21_bit_add(result->bits[i], j);
          }
          
          // Вычисляем новый перенос как целую часть от деления суммы на 2.
          carry = sum / 2;
      }
  }

  if (carry) {
    return carry;  // то есть 1
  }

  return AR_OK;
}

int s21_is_max_decimal(s21_decimal *num) {
  // Максимальное значение представлено, когда все 96 бит мантиссы равны 1.
  if (num->bits[0] == 0xFFFFFFFF &&
      num->bits[1] == 0xFFFFFFFF &&
      num->bits[2] == 0xFFFFFFFF) {
    return 1;
  }
  return 0;
}

int s21_from_decimal_to_double(s21_decimal src, long double *dst) {
  long double temp = (double)*dst;
  for (int i = 0; i < 96; i++) {
    temp += s21_get_bit(src, i) * pow(2, i);
  }
  temp = temp * pow(10, -s21_get_exp(src));
  if (s21_get_bit(src, 127)) temp = temp * (-1);
  *dst = temp;
  return 0;
}