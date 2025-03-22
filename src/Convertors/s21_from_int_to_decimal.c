#include <limits.h>
#include "../s21_decimal.h"


int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  if (!dst) return 1;  // Обработка ошибки, если dst == NULL

  s21_zero_decimal(dst);  // Инициализация decimal нулями

  if (src < 0) {
    // Устанавливаем знаковый бит (31-й бит) в bits[3]
    dst->bits[3] = 0x80000000;  // 2147483648 в беззнаковом формате
    if (src != INT_MIN) {
      src = -src;  // Меняем знак, кроме случая INT_MIN
    }
  }

  dst->bits[0] = src;  // Записываем значение в младший бит
  return 0;  // Успешное выполнение
}
