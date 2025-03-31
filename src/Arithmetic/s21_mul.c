#include "s21_arithmetic.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (result == NULL) return AR_OK;

  int status = AR_OK;
  int sign = s21_check_sign(value_1.bits[3]) ^ s21_check_sign(value_2.bits[3]);
  int scale = s21_get_scale(value_1.bits[3]) + s21_get_scale(value_2.bits[3]);

  // Работа с расширенным форматом для промежуточных вычислений
  s21_big_decimal buf = {{0}};
  uint64_t carry = 0;

  // Умножение мантисс
  for (int i = 0; i < 96; i++) {
    if (!s21_get_bit(value_1, i)) continue;

    carry = 0;
    for (int j = 0; j < 96; j++) {
      uint64_t tmp = (s21_get_bit(value_2, j) ? 1ULL : 0ULL) * (1ULL << (i % 32)) + carry;
      if (i + j >= 192) {
        status = (sign) ? NUM_TOO_SMALL : NUM_TOO_HIGH;
        break;
      }
      s21_big_set_bit(&buf, i + j, tmp);
      carry = tmp >> 32;
    }
  }

  // Нормализация и проверка переполнения
  s21_normalize_big(&buf, scale);
  if (status != AR_OK) return status;

  // Установка знака и масштаба
  s21_set_sign(result, sign);
  s21_set_scale(result, scale);

  // Копирование результата
  memcpy(result->bits, buf.bits, sizeof(uint32_t) * 3);
  result->bits[3] = (sign << 31) | (scale << 16);

  return status;
}
