#include "../s21_decimal.h"

#include <check.h>
#include <stdio.h>
#include <stdlib.h>
// Вспомогательные функции для отладочного вывода

START_TEST(test_fail) {
  int num = -2147483648;
  int result = s21_from_int_to_decimal(num, NULL);

  ck_assert_int_eq(result, CONV_ERR);
}
END_TEST

START_TEST(test_int_zero) {
    int num = 0;
    s21_decimal result;
    int code = s21_from_int_to_decimal(num, &result);

    s21_decimal expected = {{0, 0, 0, 0}};
    ck_assert_int_eq(code, CNV_OK);
    ck_assert_int_eq(result.bits[0], expected.bits[0]);
    ck_assert_int_eq(result.bits[1], expected.bits[1]);
    ck_assert_int_eq(result.bits[2], expected.bits[2]);
    ck_assert_int_eq(result.bits[3], expected.bits[3]);
}
END_TEST


START_TEST(test_int_positive) {
    int num = 123456;
    s21_decimal result;
    int code = s21_from_int_to_decimal(num, &result);

    s21_decimal expected = {{123456, 0, 0, 0}};
    ck_assert_int_eq(code, CNV_OK);
    ck_assert_int_eq(result.bits[0], expected.bits[0]);
    ck_assert_int_eq(result.bits[1], expected.bits[1]);
    ck_assert_int_eq(result.bits[2], expected.bits[2]);
    ck_assert_int_eq(result.bits[3], expected.bits[3]);
}
END_TEST


START_TEST(test_int_negative) {
    int num = -123456;
    s21_decimal result;
    int code = s21_from_int_to_decimal(num, &result);

    s21_decimal expected = {{123456, 0, 0, 0x80000000}};
    ck_assert_int_eq(code, CNV_OK);
    ck_assert_int_eq(result.bits[0], expected.bits[0]);
    ck_assert_int_eq(result.bits[1], expected.bits[1]);
    ck_assert_int_eq(result.bits[2], expected.bits[2]);
    ck_assert_int_eq(result.bits[3], expected.bits[3]);
}
END_TEST


START_TEST(test_decimal_to_int_ok) {
    s21_decimal decimal = {{123456, 0, 0, 0}};
    int result;
    int code = s21_from_decimal_to_int(decimal, &result);

    ck_assert_int_eq(code, CNV_OK);
    ck_assert_int_eq(result, 123456);
}
END_TEST


START_TEST(test_float_overflow) {
    float num = 1e30f;
    s21_decimal result;
    int code = s21_from_float_to_decimal(num, &result);

    ck_assert_int_eq(code, CONV_ERR);
}
END_TEST


START_TEST(test_float_underflow) {
    float num = -1e30f;
    s21_decimal result;
    int code = s21_from_float_to_decimal(num, &result);

    ck_assert_int_eq(code, CONV_ERR);
}
END_TEST


START_TEST(test_float_nan) {
    float num = NAN;
    s21_decimal result;
    int code = s21_from_float_to_decimal(num, &result);

    ck_assert_int_eq(code, CONV_ERR);
}
END_TEST


START_TEST(test_float_infinity) {
    float num = INFINITY;
    s21_decimal result;
    int code = s21_from_float_to_decimal(num, &result);

    ck_assert_int_eq(code, CONV_ERR);
}
END_TEST




START_TEST(test_decimal_to_int_overflow) {
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
    int result;
    int code = s21_from_decimal_to_int(decimal, &result);

    ck_assert_int_eq(code, CONV_ERR);
}
END_TEST


START_TEST(test_float_positive) {
  float src = 123.456f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, 0);

  ck_assert_int_eq(result.bits[0], 1234560);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);

  ck_assert_int_eq(result.bits[3], 3 << 16);


}
END_TEST

START_TEST(test_float_negative) {
  float src = -123.456f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, 0);

  ck_assert_int_eq(result.bits[0], 1234560);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);

  ck_assert_int_eq(result.bits[3], (int)(0x80000000u | (3 << 16)));


}
END_TEST

START_TEST(test_float_zero) {
  float src = 0.0f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 0);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0);


}
END_TEST

START_TEST(test_float_too_small) {
  float src = 1e-29f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONV_ERR);


}
END_TEST

START_TEST(test_float_too_large) {
  float src = 8e28f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONV_ERR);


}
END_TEST


START_TEST(test_from_decimal_to_float) {
  s21_decimal decimal = {{0x1234560, 0, 0, 0x80000000}};
  float result;
  int code = s21_from_decimal_to_float(decimal, &result);

  ck_assert_int_eq(code, CNV_OK);


}
END_TEST

START_TEST(test_from_decimal_to_float_scale_3) {
  s21_decimal decimal;
  decimal.bits[0] = 1234560;
  decimal.bits[1] = 0;
  decimal.bits[2] = 0;
  decimal.bits[3] = (3 << 16);

  float result;
  int code = s21_from_decimal_to_float(decimal, &result);
  ck_assert_int_eq(code, CNV_OK);
  ck_assert_float_eq_tol(result, 1234.560f, 0.001f);

}
END_TEST

START_TEST(test_from_decimal_to_float_fail) {
  s21_decimal decimal = {{0x1234560, 0, 0, 0x80000000}};
  float result;
  int code = s21_from_decimal_to_float(decimal, NULL);

  ck_assert_int_eq(code, CONV_ERR);


}
END_TEST

START_TEST(s21_from_decimal_to_int_1) {
  s21_decimal dec = {{12345, 0, 0, 0}};
  int result = 0;
  int code = s21_from_decimal_to_int(dec, &result);
  ck_assert_int_eq(code, CNV_OK);
  ck_assert_int_eq(result, 12345);
}
END_TEST

START_TEST(s21_from_decimal_to_int_2) {
  s21_decimal dec = {{12345, 0, 0, 0x00020000}};  // scale = 2
  int result = 0;
  int code = s21_from_decimal_to_int(dec, &result);
  ck_assert_int_eq(code, CNV_OK);
  ck_assert_int_eq(result, 123);
}
END_TEST

START_TEST(s21_from_decimal_to_int_3) {
  s21_decimal dec = {{9876, 0, 0, 0x80000000}};
  int result = 0;
  int code = s21_from_decimal_to_int(dec, &result);
  ck_assert_int_eq(code, CNV_OK);
  ck_assert_int_eq(result, -9876);
}
END_TEST

START_TEST(s21_from_decimal_to_int_4) {
  s21_decimal dec = {{9876, 0, 0, 0x80010000}};  // scale = 1
  int result = 0;
  int code = s21_from_decimal_to_int(dec, &result);
  ck_assert_int_eq(code, CNV_OK);
  ck_assert_int_eq(result, -987);
}
END_TEST

START_TEST(s21_from_decimal_to_int_5) {
    s21_decimal dec = { { 12345, 1, 0, 0 } };
    int result = 0;
    int code = s21_from_decimal_to_int(dec, &result);
    ck_assert_int_eq(code, CONV_ERR);
}
END_TEST

START_TEST(s21_from_decimal_to_int_6) {
    s21_decimal dec = { { 12345, 0, 0, 0 } };
    int code = s21_from_decimal_to_int(dec, NULL);
    ck_assert_int_eq(code, CONV_ERR);
}
END_TEST

START_TEST(test_div_positive) {
    s21_decimal a = {{6, 0, 0, 0}};      // 6
    s21_decimal b = {{2, 0, 0, 0}};      // 2
    s21_decimal result;
    int status = s21_div(a, b, &result);
    ck_assert_int_eq(status, 0);
    ck_assert_uint_eq(result.bits[0], 3);
}
END_TEST

// Тест на деление отрицательных чисел
START_TEST(test_div_negative) {
    s21_decimal a = {{6, 0, 0, 0x80000000}}; // -6
    s21_decimal b = {{2, 0, 0, 0x80000000}}; // -2
    s21_decimal result;
    s21_div(a, b, &result);
    ck_assert_uint_eq(result.bits[0], 3);
    ck_assert(!s21_get_sign(result)); // Результат положительный
}
END_TEST

// Тест на деление чисел с разными знаками
START_TEST(test_div_mixed_signs) {
    s21_decimal a = {{10, 0, 0, 0}};       // 10
    s21_decimal b = {{5, 0, 0, 0x80000000}}; // -5
    s21_decimal result;
    s21_div(a, b, &result);
    ck_assert_uint_eq(result.bits[0], 2);
    ck_assert(s21_get_sign(result)); // Результат отрицательный
}
END_TEST

// Тест на деление на ноль
START_TEST(test_div_by_zero) {
    s21_decimal a = {{1, 0, 0, 0}};
    s21_decimal b = {{0, 0, 0, 0}};
    s21_decimal result;
    int status = s21_div(a, b, &result);
    ck_assert_int_eq(status, AR_NAN);
}
END_TEST

// Тест на деление с дробным результатом
START_TEST(test_div_fractional) {
    s21_decimal a = {{1, 0, 0, 0}};      // 1.0 (scale 0)
    s21_decimal b = {{3, 0, 0, 0}};      // 3.0 (scale 0)
    s21_decimal result;
    s21_div(a, b, &result);

    // Ожидаем 0.333... с масштабом 28
    ck_assert_int_eq(s21_get_exp(result), 28);
    // Проверяем первые биты дробной части
    ck_assert(result.bits[0] > 0);
}
END_TEST

// Тест на переполнение
START_TEST(test_div_overflow) {
    s21_decimal max_val = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
    s21_decimal one = {{1, 0, 0, 0}};
    s21_decimal result;
    int status = s21_div(max_val, one, &result);
    ck_assert_int_eq(status, 0); // Должно быть успешно

    s21_decimal tiny = {{1, 0, 0, 0x1C0000}}; // 1e-28
    status = s21_div(tiny, tiny, &result);
    ck_assert_int_eq(status, 0); // 1.0
}
END_TEST

// Тест на округление
START_TEST(test_div_rounding) {
    s21_decimal a = {{1, 0, 0, 0x10000}}; // 1.0 (scale 1)
    s21_decimal b = {{3, 0, 0, 0}};       // 3 (scale 0)
    s21_decimal result;
    s21_div(a, b, &result);

    // Ожидаем 0.333... с масштабом 28
    ck_assert_int_eq(s21_get_exp(result), 28);
}
END_TEST

START_TEST(test_s21_add_1) {
  s21_decimal a = {{1, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_add(a, b, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 2);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0);
}
END_TEST

START_TEST(test_s21_add_2) {
  s21_decimal a = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_add(a, b, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST
START_TEST(test_s21_round_1) {
  s21_decimal value = {{123456789, 0, 0, 0x00050000}}; // 1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1234); // Ожидаемый результат: 1234
  ck_assert_int_eq(result.bits[3], 0);    // Знак и масштаб должны быть 0
}
END_TEST

// Тест 2: Округление положительного числа с дробной частью больше или равной 0.5
START_TEST(test_s21_round_2) {
  s21_decimal value = {{123456789, 0, 0, 0x00050000}}; // 1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1235); // Ожидаемый результат: 1235
  ck_assert_int_eq(result.bits[3], 0);    // Знак и масштаб должны быть 0
}
END_TEST

// Тест 3: Округление отрицательного числа с дробной частью меньше 0.5
START_TEST(test_s21_round_3) {
  s21_decimal value = {{123456789, 0, 0, 0x80050000}}; // -1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1234); // Ожидаемый результат: -1234
  ck_assert_int_eq(result.bits[3], 0x80000000); // Знак должен быть отрицательным
}
END_TEST

// Тест 4: Округление отрицательного числа с дробной частью больше или равной 0.5
START_TEST(test_s21_round_4) {
  s21_decimal value = {{123456789, 0, 0, 0x80050000}}; // -1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1235); // Ожидаемый результат: -1235
  ck_assert_int_eq(result.bits[3], 0x80000000); // Знак должен быть отрицательным
}
END_TEST

// Тест 5: Округление числа с нулевой дробной частью
START_TEST(test_s21_round_5) {
  s21_decimal value = {{1234, 0, 0, 0x00020000}}; // 12.34
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 12); // Ожидаемый результат: 12
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 6: Округление числа с дробной частью, равной 0.5
START_TEST(test_s21_round_6) {
  s21_decimal value = {{5, 0, 0, 0x00010000}}; // 0.5
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1); // Ожидаемый результат: 1
  ck_assert_int_eq(result.bits[3], 0); // Знак и масштаб должны быть 0
}
END_TEST

// Тест 7: Округление числа с дробной частью, равной 0.499999
START_TEST(test_s21_round_7) {
  s21_decimal value = {{499999, 0, 0, 0x00060000}}; // 0.499999
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 0); // Ожидаемый результат: 0
  ck_assert_int_eq(result.bits[3], 0); // Знак и масштаб должны быть 0
}
END_TEST

// Тест 8: Округление числа с дробной частью, равной 0.500001
START_TEST(test_s21_round_8) {
  s21_decimal value = {{500001, 0, 0, 0x00060000}}; // 0.500001
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1); // Ожидаемый результат: 1
  ck_assert_int_eq(result.bits[3], 0); // Знак и масштаб должны быть 0
}
END_TEST

// Тест 9: Округление нуля
START_TEST(test_s21_round_9) {
  s21_decimal value = {{0, 0, 0, 0x00020000}}; // 0.00
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 0); // Ожидаемый результат: 0
  ck_assert_int_eq(result.bits[3], 0); // Знак и масштаб должны быть 0
}
END_TEST

// Тест 10: Округление числа с максимальным значением
START_TEST(test_s21_round_10) {
  s21_decimal value = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00010000}}; // Максимальное значение с масштабом 1
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 0xFFFFFFFF); // Ожидаемый результат: округление до целого
  ck_assert_int_eq(result.bits[1], 0xFFFFFFFF);
  ck_assert_int_eq(result.bits[2], 0xFFFFFFFF);
  ck_assert_int_eq(result.bits[3], 0); // Знак и масштаб должны быть 0
}
END_TEST

START_TEST(s21_round_1) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b10010011111100000001110001010010;
  dec1.bits[1] = 0b00000000000000000000000100100000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000001111100;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_2) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b00000000000000000000000010100100;  // -16.4
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000000010000;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_3) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b11111111111111111111111111111111;  //
  dec1.bits[1] = 0b00000000001111111111111111111111;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000000110000000000000000;
  s21_decimal result = {0};

  result.bits[0] = 0b01001101110100101111000110101001;  // 18014398509481
  result.bits[1] = 0b00000000000000000001000001100010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_4) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b00000000000011110111001001110100;  // -10123.40
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000001111110100;  // -1012
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_5) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b10000000000000000000001111110100;  // 112590205.4327284
  dec1.bits[1] = 0b00000000000001000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000001110000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000110101101011111110101111101;  // 112590205
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_6) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b10000000000000000000001111110100;  // 2147484660
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b10000000000000000000001111110100;  // 2147484660
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_7) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b01100011000011111111111111111111;
  dec1.bits[1] = 0b01101011110001110101111000101101;
  dec1.bits[2] = 0b00000000000000000000000000000101;
  dec1.bits[3] = 0b10000000000010100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b01010100000010111110010000000000;
  result.bits[1] = 0b00000000000000000000000000000010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_8) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b01010101001110101110101110110001;
  dec1.bits[1] = 0b00001101101101001101101001011111;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000100100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000000000001;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_9) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b10010011111100000001110001010010;
  dec1.bits[1] = 0b00000000000000000000000100100000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000001111100;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
}
END_TEST

START_TEST(s21_round_12) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b10010111011100111001111111111111;
  dec1.bits[1] = 0b00111100000010000011000110001101;
  dec1.bits[2] = 0b00000000000000000000000000000001;
  dec1.bits[3] = 0b00000000000001110000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  s21_decimal result = {0};
  result.bits[0] = 0b00110110101101101000110001000000;
  result.bits[1] = 0b00000000000000000000001000010010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_13) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b10010111011100111001111111111111;
  dec1.bits[1] = 0b00111100000010000011000110001101;
  dec1.bits[2] = 0b00000000000000000000000000000001;
  dec1.bits[3] = 0b10000000000001110000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  s21_decimal result = {0};
  result.bits[0] = 0b00110110101101101000110001000000;
  result.bits[1] = 0b00000000000000000000001000010010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;

  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_roundTest1) {
  // 8053
  s21_decimal src1, origin;
  // src1 = 2;

  src1.bits[0] = 2;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 2;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest2) {
  // 8074
  s21_decimal src1, origin;
  // src1 = 3.5;

  src1.bits[0] = 0b00000000000000000000000000100011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest3) {
  // 8095
  s21_decimal src1, origin;
  // src1 = -3.5;

  src1.bits[0] = 0b00000000000000000000000000100011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest4) {
  // 8116
  s21_decimal src1, origin;
  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest5) {
  // 8137
  s21_decimal src1, origin;
  // src1 = -9878798789;

  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b01001100110100101000000111000101;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest6) {
  // 8158
  s21_decimal src1, origin;
  // src1 = -545454512454545.35265;

  src1.bits[0] = 0b11011110101101001010101001100001;
  src1.bits[1] = 0b11110100111110000101111011101001;
  src1.bits[2] = 0b00000000000000000000000000000010;
  src1.bits[3] = 0b10000000000001010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b10000110011101001011101110010001;
  origin.bits[1] = 0b00000000000000011111000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest7) {
  // 8179
  s21_decimal src1, origin;
  // src1 = -5.492654545456454545645464;

  src1.bits[0] = 0b00000111100110110001111110011000;
  src1.bits[1] = 0b01100110010010001001000110100011;
  src1.bits[2] = 0b00000000000001001000101100011101;
  src1.bits[3] = 0b10000000000110000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest8) {
  // 8200
  s21_decimal src1, origin;
  // src1 = 7961327845421.879754123131254;

  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b10100100000111100100000000101110;
  origin.bits[1] = 0b00000000000000000000011100111101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest9) {
  // 8221
  s21_decimal src1, origin;
  // src1 = -12345677.187654345678987654346;

  src1.bits[0] = 0b01111000100010101111010011001010;
  src1.bits[1] = 0b01100010000010101110010010000111;
  src1.bits[2] = 0b00100111111001000001101011010101;
  src1.bits[3] = 0b10000000000101010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000101111000110000101001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest10) {
  // 8242
  s21_decimal src1, origin;

  src1.bits[0] = 0b10101101110010001101100101011111;
  src1.bits[1] = 0b01001000101000101011010010000001;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest11) {
  // 8263
  s21_decimal src1, origin;
  // src1 = 1;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest12) {
  // 8284
  s21_decimal src1, origin;
  // src1 = 1.1;

  src1.bits[0] = 0b00000000000000000000000000001011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest13) {
  // 8305
  s21_decimal src1, origin;
  // src1 = -1.1;

  src1.bits[0] = 0b00000000000000000000000000001011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest14) {
  // 8326
  s21_decimal src1, origin;
  // src1 = 24.56;

  src1.bits[0] = 0b00000000000000000000100110001000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000011000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest15) {
  // 8347
  s21_decimal src1, origin;
  // src1 = -2.124;

  src1.bits[0] = 0b00000000000000000000100001001100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

Suite *decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_decimal");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_div_positive);
  tcase_add_test(tc_core, test_div_negative);
  tcase_add_test(tc_core, test_div_mixed_signs);
  tcase_add_test(tc_core, test_div_by_zero);
  tcase_add_test(tc_core, test_div_fractional);
  tcase_add_test(tc_core, test_div_overflow);
  tcase_add_test(tc_core, test_div_rounding);

  tcase_add_test(tc_core, test_fail);
  tcase_add_test(tc_core, test_int_zero);
  tcase_add_test(tc_core, test_int_positive);
  tcase_add_test(tc_core, test_int_negative);
  tcase_add_test(tc_core, test_decimal_to_int_ok);


  tcase_add_test(tc_core, test_float_overflow);
  tcase_add_test(tc_core, test_float_underflow);
  tcase_add_test(tc_core, test_float_infinity);
  tcase_add_test(tc_core, test_div_by_zero);
  tcase_add_test(tc_core, test_decimal_to_int_overflow);

  tcase_add_test(tc_core, test_float_positive);
  tcase_add_test(tc_core, test_float_negative);
  tcase_add_test(tc_core, test_float_zero);
  tcase_add_test(tc_core, test_float_too_small);
  tcase_add_test(tc_core, test_float_too_large);
  tcase_add_test(tc_core, test_float_nan);

  tcase_add_test(tc_core, test_from_decimal_to_float);
  tcase_add_test(tc_core, test_from_decimal_to_float_scale_3);
  tcase_add_test(tc_core, test_from_decimal_to_float_fail);

  tcase_add_test(tc_core, s21_from_decimal_to_int_1);
  tcase_add_test(tc_core, s21_from_decimal_to_int_2);
  tcase_add_test(tc_core, s21_from_decimal_to_int_3);
  tcase_add_test(tc_core, s21_from_decimal_to_int_4);
  tcase_add_test(tc_core, s21_from_decimal_to_int_5);
  tcase_add_test(tc_core, s21_from_decimal_to_int_6);

  tcase_add_test(tc_core, test_s21_add_1);
  tcase_add_test(tc_core, test_s21_add_2);
  // tcase_add_test(tc_core, test_s21_add_3);
  // tcase_add_test(tc_core, test_s21_add_4);
  tcase_add_test(tc_core, s21_round_1);
  tcase_add_test(tc_core, s21_round_2);
  tcase_add_test(tc_core, s21_round_3);
  tcase_add_test(tc_core, s21_round_4);
  tcase_add_test(tc_core, s21_round_5);
  tcase_add_test(tc_core, s21_round_6);
  tcase_add_test(tc_core, s21_round_7);
  tcase_add_test(tc_core, s21_round_8);
  tcase_add_test(tc_core, s21_round_9);
  tcase_add_test(tc_core, s21_round_12);
  tcase_add_test(tc_core, s21_round_13);
  tcase_add_test(tc_core, s21_roundTest1);
  tcase_add_test(tc_core, s21_roundTest2);
  tcase_add_test(tc_core, s21_roundTest3);
  tcase_add_test(tc_core, s21_roundTest4);
  tcase_add_test(tc_core, s21_roundTest5);
  tcase_add_test(tc_core, s21_roundTest6);
  tcase_add_test(tc_core, s21_roundTest7);
  tcase_add_test(tc_core, s21_roundTest8);
  tcase_add_test(tc_core, s21_roundTest9);
  tcase_add_test(tc_core, s21_roundTest10);
  tcase_add_test(tc_core, s21_roundTest11);
  tcase_add_test(tc_core, s21_roundTest12);
  tcase_add_test(tc_core, s21_roundTest13);
  tcase_add_test(tc_core, s21_roundTest14);
  tcase_add_test(tc_core, s21_roundTest15);


  suite_add_tcase(s, tc_core);

  return s;
}

int main() {
    Suite *s;
    SRunner *sr;

    s = decimal_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);

    srunner_free(sr);
    return 0;
}
