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
  return (decimal.bits[3] >> 16) & 0xFF;  // 0xFF - mask 8 bit
}

/*
 * Функция проверяет, включен бит или нет
 */
int s21_bit_check(unsigned int num, unsigned int bit_num) {
  return (num >> bit_num) & 1;
}

/*
 * Функция, включает бит
 */
int s21_bit_add(unsigned num, unsigned int bit_num) {
  return num | (1 << bit_num);
}

int s21_get_sign(s21_decimal decimal) {
  return (decimal.bits[3] & 1u << 31) != 0;
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

  // Проверка на максимальный масштаб
  scale = (scale > 28) ? 28 : scale;
  s21_set_scale(result, scale);
}

int s21_divide_integer(s21_decimal dividend, s21_decimal divisor,
                       s21_decimal *quotient, s21_decimal *remainder) {
  // Проверка деления на 0
  if (s21_is_zero(divisor)) return 1;

  // Обнуляем масштабы, чтобы работать только с целыми числами
  s21_set_scale(&dividend, 0);
  s21_set_scale(&divisor, 0);

  // Инициализируем quotient и remainder в ноль
  s21_zero_decimal(quotient);
  s21_zero_decimal(remainder);

  // Классический алгоритм длинного деления: рассматриваем все 96 бит dividend с
  // 95-го до 0-го. В процессе накапливаем остаток (remainder) и выставляем
  // соответствующие биты в quotient.
  for (int i = 95; i >= 0; i--) {
    // Сдвигаем remainder влево на 1 бит
    s21_shift_left(remainder, 1);

    // Подставляем i-й бит dividend в младший бит remainder
    if (s21_get_bit(dividend, i)) {
      // Устанавливаем бит 0 remainder (LSB) равным 1
      remainder->bits[0] |= 1;
    }

    // Если накопленный remainder >= divisor, вычитаем divisor и устанавливаем
    // бит i в quotient
    if (s21_compare(*remainder, divisor) >= 0) {
      s21_subtract(*remainder, divisor, remainder);
      s21_set_bit(quotient, i, 1);
    }
  }

  return 0;
}

int s21_multiply_by_10(s21_decimal *num) {
  if (!num) return 1;
  uint64_t temp = 0;
  for (int i = 0; i < 3; i++) {
    temp += (uint64_t)num->bits[i] * 10;
    num->bits[i] = (uint32_t)(temp & 0xFFFFFFFF);
    temp >>= 32;
  }
  // Если temp не обнулён, произошёл перенос за пределы 96 бит – переполнение.
  if (temp > 0) return 1;
  return 0;
}

int s21_is_zero(s21_decimal num) {
  return (num.bits[0] == 0 && num.bits[1] == 0 && num.bits[2] == 0);
}

void s21_normalize_scales(s21_decimal *num1, s21_decimal *num2) {
  int scale1 = (num1->bits[3] >> 16) & 0xFF;
  int scale2 = (num2->bits[3] >> 16) & 0xFF;

  if (scale1 > 28 || scale2 > 28) {
    scale1 = scale1 > 28 ? 28 : scale1;
    scale2 = scale2 > 28 ? 28 : scale2;
  }

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
int s21_is_max_decimal(s21_decimal *num) {
  // Максимальное значение представлено, когда все 96 бит мантиссы равны 1.
  if (num->bits[0] == 0xFFFFFFFF && num->bits[1] == 0xFFFFFFFF &&
      num->bits[2] == 0xFFFFFFFF) {
    return 1;
  }
  return 0;
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
  s21_normalize_scales(&value_1, &value_2);
  int res = 0;
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);

  if (sign1 != sign2) {
    return (sign1) ? -1 : 1;
  }

  for (int i = 2; i >= 0 && res == 0; --i) {  // Исправлено условие
    if (value_1.bits[i] != value_2.bits[i]) {
      res = (value_1.bits[i] < value_2.bits[i]) ? -1 : 1;
      res *= (sign1) ? -1 : 1;
    }
  }
  return res;
}

int s21_compare_abs(s21_decimal value_1, s21_decimal value_2) {
  // Приведение чисел к одному масштабу
  s21_normalize_scales(&value_1, &value_2);

  // Сравнение мантисс (игнорируя знаки)
  for (int i = 2; i >= 0; --i) {
    if ((uint32_t)value_1.bits[i] < (uint32_t)value_2.bits[i]) {
      return -1;  // value_1 < value_2 по модулю
    } else if ((uint32_t)value_1.bits[i] > (uint32_t)value_2.bits[i]) {
      return 1;  // value_1 > value_2 по модулю
    }
  }

  return 0;  // Числа равны по модулю
}

int s21_subtract(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
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

int s21_subtract_core(s21_decimal value_1, s21_decimal value_2,
                      s21_decimal *result) {
  if (!result) return AR_NAN;

  s21_zero_decimal(result);
  if (s21_compare_abs(value_1, value_2) < 0) {
    s21_decimal temp = value_1;
    value_1 = value_2;
    value_2 = temp;
  }

  int borrow = 0;

  for (int i = 0; i < 96; i++) {
    int bit1 = s21_get_bit(value_1, i);
    int bit2 = s21_get_bit(value_2, i);
    int diff = bit1 - bit2 - borrow;

    if (diff < 0) {
      diff += 2;
      borrow = 1;
    } else {
      borrow = 0;
    }

    s21_set_bit(result, i, diff);
  }

  return AR_OK;
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

void s21_shift_right(s21_decimal *num, int shift) {
  for (int i = 0; i < shift; i++) {
    int carry_2 = num->bits[2] & 1;
    int carry_1 = num->bits[1] & 1;

    num->bits[2] >>= 1;
    num->bits[1] = (num->bits[1] >> 1) | (carry_2 << 31);
    num->bits[0] = (num->bits[0] >> 1) | (carry_1 << 31);
  }
}

int s21_div_10(s21_decimal *num) {
  if (!num) return 1;
  uint64_t temp = 0;
  for (int i = 2; i >= 0; i--) {
    temp = (temp << 32) + num->bits[i];
    num->bits[i] = temp / 10;
    temp %= 10;
  }
  return 0;
}

int s21_if2_equal(s21_decimal a, s21_decimal b) {
  return (s21_compare(a, b) == 0);
}

int s21_add_core(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  if (!result) return AR_NAN;
  s21_zero_decimal(result);
  int carry = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 32; j++) {
      int bit_1 = s21_bit_check(value_1.bits[i], j);
      int bit_2 = s21_bit_check(value_2.bits[i], j);
      int sum = bit_1 + bit_2 + carry;
      if (sum % 2 == 1) {
        result->bits[i] = s21_bit_add(result->bits[i], j);
      }
      carry = sum / 2;
    }
  }

  return carry ? 1 : AR_OK;
}

int s21_power_of_ten(int scale, s21_decimal *result) {
  if (!result) return 1;
  s21_zero_decimal(result);
  result->bits[0] = 1;  // Инициализация единицей
  for (int i = 0; i < scale; i++) {
    if (s21_multiply_by_10(result) != 0) {
      return 1;
    }
  }
  return 0;
}
