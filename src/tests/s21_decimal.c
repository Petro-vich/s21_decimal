#include "../s21_decimal.h"

#include <check.h>

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

  ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(test_float_underflow) {
  float num = -1e30f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(num, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(test_float_nan) {
  float num = NAN;
  s21_decimal result;
  int code = s21_from_float_to_decimal(num, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(test_float_infinity) {
  float num = INFINITY;
  s21_decimal result;
  int code = s21_from_float_to_decimal(num, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(test_decimal_to_int_overflow) {
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);
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

  ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(test_float_too_large) {
  float src = 8e28f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);
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

  ck_assert_int_eq(code, CONVERSION_ERROR);
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
  s21_decimal dec = {{12345, 1, 0, 0}};
  int result = 0;
  int code = s21_from_decimal_to_int(dec, &result);
  ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(s21_from_decimal_to_int_6) {
  s21_decimal dec = {{12345, 0, 0, 0}};
  int code = s21_from_decimal_to_int(dec, NULL);
  ck_assert_int_eq(code, CONVERSION_ERROR);
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

START_TEST(test_s21_add_3) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(2, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_4) {
  s21_decimal val1 = {{8, 0, 0, 0}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res;
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_5) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_6) {
  s21_decimal val1 = {{8, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_7) {
  s21_decimal val1 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_8) {
  s21_decimal val1 = {{0}};
  s21_decimal val2 = {{0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_9) {
  s21_decimal val1 = {{4, 0, 0, 0}};
  s21_decimal val2 = {{8, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_10) {
  s21_decimal val1 = {{8, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_11) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{4, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_12) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(2, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_13) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_decimal val2 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_14) {
  s21_decimal val1 = {{4, 0, 0, 0}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_15) {
  s21_decimal val1 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_16) {
  s21_decimal val1 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(2, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_17) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_set_scale(&val1, 5);
  s21_set_scale(&val2, 3);
  s21_decimal res = {{0}};
  ck_assert_int_eq(1, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_add_18) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_set_scale(&val1, 5);
  s21_set_scale(&val2, 3);
  s21_decimal res = {{0}};
  ck_assert_int_eq(2, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_s21_round_1) {
  s21_decimal value = {{123456789, 0, 0, 0x00050000}};  // 1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1234);  // Ожидаемый результат: 1234
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 2: Округление положительного числа с дробной частью больше или равной
// 0.5
START_TEST(test_s21_round_2) {
  s21_decimal value = {{123456789, 0, 0, 0x00050000}};  // 1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1235);  // Ожидаемый результат: 1235
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 3: Округление отрицательного числа с дробной частью меньше 0.5
START_TEST(test_s21_round_3) {
  s21_decimal value = {{123456789, 0, 0, 0x80050000}};  // -1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1234);  // Ожидаемый результат: -1234
  ck_assert_int_eq(result.bits[3],
                   0x80000000);  // Знак должен быть отрицательным
}
END_TEST

// Тест 4: Округление отрицательного числа с дробной частью больше или равной
// 0.5
START_TEST(test_s21_round_4) {
  s21_decimal value = {{123456789, 0, 0, 0x80050000}};  // -1234.56789
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1235);  // Ожидаемый результат: -1235
  ck_assert_int_eq(result.bits[3],
                   0x80000000);  // Знак должен быть отрицательным
}
END_TEST

// Тест 5: Округление числа с нулевой дробной частью
START_TEST(test_s21_round_5) {
  s21_decimal value = {{1234, 0, 0, 0x00020000}};  // 12.34
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 12);  // Ожидаемый результат: 12
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 6: Округление числа с дробной частью, равной 0.5
START_TEST(test_s21_round_6) {
  s21_decimal value = {{5, 0, 0, 0x00010000}};  // 0.5
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1);  // Ожидаемый результат: 1
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 7: Округление числа с дробной частью, равной 0.499999
START_TEST(test_s21_round_7) {
  s21_decimal value = {{499999, 0, 0, 0x00060000}};  // 0.499999
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 0);  // Ожидаемый результат: 0
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 8: Округление числа с дробной частью, равной 0.500001
START_TEST(test_s21_round_8) {
  s21_decimal value = {{500001, 0, 0, 0x00060000}};  // 0.500001
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 1);  // Ожидаемый результат: 1
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 9: Округление нуля
START_TEST(test_s21_round_9) {
  s21_decimal value = {{0, 0, 0, 0x00020000}};  // 0.00
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0], 0);  // Ожидаемый результат: 0
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

// Тест 10: Округление числа с максимальным значением
START_TEST(test_s21_round_10) {
  s21_decimal value = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
                        0x00010000}};  // Максимальное значение с масштабом 1
  s21_decimal result;
  int code = s21_round(value, &result);

  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(result.bits[0],
                   0xFFFFFFFF);  // Ожидаемый результат: округление до целого
  ck_assert_int_eq(result.bits[1], 0xFFFFFFFF);
  ck_assert_int_eq(result.bits[2], 0xFFFFFFFF);
  ck_assert_int_eq(result.bits[3], 0);  // Знак и масштаб должны быть 0
}
END_TEST

void floor_test_function(float n, float accuracy) {
  s21_decimal var1 = {0}, var2 = {0};
  float value1 = 0, value2 = 0;
  s21_from_float_to_decimal(n, &var1);
  s21_floor(var1, &var2);
  s21_from_decimal_to_float(var2, &value2);
  value1 = floorf(n);
  ck_assert_float_eq_tol(value1, value2, accuracy);
}

// Тест: s21_floor для целого положительного числа без дробной части
START_TEST(floor_0) {
  s21_decimal val = {{2, 0, 0, 0}};
  s21_decimal res;
  ck_assert_int_eq(0, s21_floor(val, &res));
}
END_TEST

// Тест: s21_floor для отрицательного целого числа (бит знака установлен)
START_TEST(floor_1) {
  // Здесь значение представлено с отрицательным знаком: бит знака установлен в
  // 3-м элементе
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  s21_floor(val, &res);
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  ck_assert_float_eq(-2, fres);
}
END_TEST

// Тест: s21_floor для отрицательного числа с дробной частью
START_TEST(floor_2) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  s21_set_scale(&val, 5);
  s21_floor(val, &res);

  float fres = 0;
  s21_from_decimal_to_float(res, &fres);

  ck_assert_float_eq(-1, fres);
}
END_TEST

// Тест: s21_floor для положительного числа с дробной частью (округление вниз
// дает целую часть)
START_TEST(floor_3) {
  s21_decimal val = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  s21_set_scale(&val, 5);
  s21_floor(val, &res);
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  ck_assert_float_eq(0, fres);
}
END_TEST

// Тест: s21_floor для числа с масштабом, где результат сравнивается с ожидаемым
// значением
START_TEST(floor_5) {
  s21_decimal value_1 = {{7444923, 0, 0, 0}};
  s21_set_scale(&value_1, 5);
  s21_decimal check = {{74, 0, 0, 0}};
  s21_decimal result = {0};
  int return_value = s21_floor(value_1, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

// Тест: s21_floor для отрицательного числа с масштабом
START_TEST(floor_6) {
  s21_decimal value_1 = {{7444923, 0, 0, 0}};
  s21_set_scale(&value_1, 5);
  s21_set_sign(&value_1, 1);  // Устанавливаем знак минуса

  s21_decimal check = {{75, 0, 0, 0}};
  s21_set_sign(&check, 1);  // Ожидаемое отрицательное число

  s21_decimal result = {0};
  int return_value = s21_floor(value_1, &result);

  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST
START_TEST(truncate_0) {
  s21_decimal val = {{7, 7, 7, 0}};
  s21_decimal res;
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = 129127208515966861312.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_1) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = -2.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_2) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = -2.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_3) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  s21_set_scale(&val, 5);
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = -0.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_4) {
  s21_decimal val = {{128, 0, 0, 0}};
  s21_decimal res = {{0}};
  s21_set_scale(&val, 1);
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = 12;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_5) {
  s21_decimal value_1 = {{35, 0, 0, 0}};
  s21_decimal check = {{3, 0, 0, 0}};
  s21_set_scale(&value_1, 1);
  s21_truncate(value_1, &value_1);
  ck_assert_int_eq(s21_is_equal(value_1, check), 1);
}
END_TEST

START_TEST(truncate_6) {
  s21_decimal value_1 = {{123456, 0, 0, 0}};
  s21_set_scale(&value_1, 3);
  s21_set_sign(&value_1, 1);
  s21_decimal check = {{123, 0, 0, 0}};
  s21_set_sign(&check, 1);
  s21_truncate(value_1, &value_1);
  ck_assert_int_eq(s21_is_equal(value_1, check), 1);
}
END_TEST

START_TEST(truncate_7) {
  s21_decimal src1 = {0};
  src1.bits[3] = 0x000A0000;
  src1.bits[2] = 0x0;
  src1.bits[1] = 0xFFFFFFFF;
  src1.bits[0] = 0xFFFFFFFF;
  s21_set_sign(&src1, 1);  // Устанавливаем отрицательный знак
  s21_decimal result = {0};
  result.bits[3] = 0x0;
  result.bits[2] = 0x0;
  result.bits[1] = 0x0;
  result.bits[0] = 0x6DF37F67;
  s21_set_sign(&result, 1);  // Устанавливаем отрицательный знак
  s21_decimal res_od = {0};
  s21_truncate(src1, &res_od);
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(truncate_8) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b00000000000000000000000001101101;
  src1.bits[1] = 0b00000000000011000110010101011011;
  src1.bits[2] = 0b00000000000000000011000000111001;
  src1.bits[3] = 0b00000000000011100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b10000111101111000001011000011110;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res_od = {0};
  s21_truncate(src1, &res_od);
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(truncate_9) {
  s21_decimal val = {{123456789, 0, 0, 0}};
  s21_set_scale(&val, 2);
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = 1234567;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_10) {
  s21_decimal val = {{123456789, 0, 0, ~(UINT_MAX / 2)}};
  s21_set_scale(&val, 3);
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = -123456;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(div_0) {
  s21_decimal val1 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_1) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res;
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_2) {
  s21_decimal val1 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_3) {
  s21_decimal val1 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{0, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(3, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_4) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{0, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(3, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_5) {
  s21_decimal value_1 = {{35, 0, 0, 0}};
  s21_decimal value_2 = {{5, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal check = {{70, 0, 0, 0}};
  s21_set_scale(&value_1, 1);
  s21_set_scale(&value_2, 2);
  int return_value = s21_div(value_1, value_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(div_6) {
  s21_decimal value_1 = {{0x88888888, 0x88888888, 0x88888888, 0}};
  s21_decimal value_2 = {{0x2, 0, 0, 0}};
  s21_get_sign(value_2);
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal check = {{0x44444444, 0x44444444, 0x44444444, 0}};
  s21_get_sign(check);
  int return_value = s21_div(value_1, value_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(div_7) {
  s21_decimal value_1 = {{10, 0, 0, 0}};
  s21_get_sign(value_1);
  s21_decimal value_2 = {{8, 0, 0, 0}};
  s21_get_sign(value_2);
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal check = {{125, 0, 0, 0}};
  s21_set_scale(&check, 2);

  int return_value = s21_div(value_1, value_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(div_8) {
  s21_decimal value_1 = {{15, 0, 0, 0}};
  s21_get_sign(value_1);
  s21_decimal value_2 = {{0, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal check = {{0, 0, 0, 0}};
  int return_value = s21_div(value_1, value_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 3);
}
END_TEST

START_TEST(div_9) {
  s21_decimal value_1 = {{10, 0, 0, 0}};
  s21_decimal value_2 = {{1, 0, 0, 0}};
  s21_set_scale(&value_2, 2);
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal check = {{1000u, 0, 0, 0}};
  int return_value = s21_div(value_1, value_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(div_10) {
  s21_decimal value_1 = {{10, 0, 0, 0}};
  s21_decimal value_2 = {{1, 0, 0, 0}};
  s21_set_scale(&value_2, 2);
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal check = {{1000u, 0, 0, 0}};
  int return_value = s21_div(value_1, value_2, NULL);
  ck_assert_int_eq(return_value, 3);
}

START_TEST(div_11) {
  s21_decimal value_1 = {{10, 0, 0, 0}};
  s21_decimal value_2 = {{1, 0, 0, 0}};
  s21_set_scale(&value_2, 29);
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal check = {{1000u, 0, 0, 0}};
  int return_value = s21_div(value_1, value_2, &result);
  ck_assert_int_eq(return_value, 3);
}
END_TEST

START_TEST(test_from_int_to_decimal_0) {
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  int int_value = -2147483648;  // INT_MIN
  int result_value = 0;

  // Конвертируем int в decimal
  s21_from_int_to_decimal(int_value, &decimal_value);
  // Конвертируем decimal обратно в int
  s21_from_decimal_to_int(decimal_value, &result_value);

  // Проверяем, что результат совпадает с исходным значением
  ck_assert_int_eq(result_value, int_value);
}
END_TEST

START_TEST(test_from_int_to_decimal_1) {
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  int int_value = -123456789;
  int result_value = 0;

  s21_from_int_to_decimal(int_value, &decimal_value);
  s21_from_decimal_to_int(decimal_value, &result_value);

  ck_assert_int_eq(result_value, int_value);
}
END_TEST

START_TEST(test_from_int_to_decimal_2) {
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  int int_value = 2147483647;  // INT_MAX
  int result_value = 0;

  s21_from_int_to_decimal(int_value, &decimal_value);
  s21_from_decimal_to_int(decimal_value, &result_value);

  ck_assert_int_eq(result_value, int_value);
}
END_TEST

START_TEST(test_from_int_to_decimal_4) {
  int int_value = 100;
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  s21_decimal *decimal_ptr = &decimal_value;

  // Конвертируем int в decimal
  int conversion_result = s21_from_int_to_decimal(int_value, decimal_ptr);
  s21_decimal expected_value = {{100, 0, 0, 0}};

  // Проверяем результат конвертации
  ck_assert_int_eq(conversion_result, 0);  // Успешная конвертация
  ck_assert_int_eq(s21_is_equal(decimal_value, expected_value),
                   1);  // Значения совпадают
}
END_TEST

START_TEST(test_from_int_to_decimal_5) {
  int int_value = INT_MAX;
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  s21_decimal *decimal_ptr = &decimal_value;

  int conversion_result = s21_from_int_to_decimal(int_value, decimal_ptr);
  s21_decimal expected_value = {{INT_MAX, 0, 0, 0}};

  ck_assert_int_eq(conversion_result, 0);
  ck_assert_int_eq(s21_is_equal(decimal_value, expected_value), 1);
}
END_TEST

START_TEST(test_from_int_to_decimal_6) {
  int int_value = -INT_MAX;
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  s21_decimal *decimal_ptr = &decimal_value;

  int conversion_result = s21_from_int_to_decimal(int_value, decimal_ptr);
  s21_decimal expected_value = {
      {INT_MAX, 0, 0, 0x80000000}};  // Отрицательное число

  ck_assert_int_eq(conversion_result, 0);
  ck_assert_int_eq(s21_is_equal(decimal_value, expected_value), 1);
}
END_TEST

START_TEST(test_from_int_to_decimal_7) {
  int int_value = 0;
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  s21_decimal *decimal_ptr = &decimal_value;

  int conversion_result = s21_from_int_to_decimal(int_value, decimal_ptr);
  s21_decimal expected_value = {{0, 0, 0, 0}};

  ck_assert_int_eq(conversion_result, 0);
  ck_assert_int_eq(s21_is_equal(decimal_value, expected_value), 1);
}
END_TEST

START_TEST(test_from_int_to_decimal_8) {
  int int_value = -987879878;
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  s21_decimal *decimal_ptr = &decimal_value;

  int conversion_result = s21_from_int_to_decimal(int_value, decimal_ptr);
  s21_decimal expected_value = {
      {987879878, 0, 0, 0x80000000}};  // Отрицательное число

  ck_assert_int_eq(conversion_result, 0);
  ck_assert_int_eq(s21_is_equal(decimal_value, expected_value), 1);
}
END_TEST

START_TEST(test_from_int_to_decimal_9) {
  int int_value = 796132784;
  s21_decimal decimal_value = {{0, 0, 0, 0}};
  s21_decimal *decimal_ptr = &decimal_value;

  int conversion_result = s21_from_int_to_decimal(int_value, decimal_ptr);
  s21_decimal expected_value = {{796132784, 0, 0, 0}};

  ck_assert_int_eq(conversion_result, 0);
  ck_assert_int_eq(s21_is_equal(decimal_value, expected_value), 1);
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

START_TEST(test_s21_sub_1) {
  s21_decimal a = {{5, 0, 0, 0}};
  s21_decimal b = {{3, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_sub(a, b, &result);
  ck_assert_int_eq(code, AR_OK);
  ck_assert_int_eq(result.bits[0], 2);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);

  ck_assert_int_eq(result.bits[3] & 0x80000000, 0);
}
END_TEST

// Тест 2: Обычное вычитание, результат отрицательный (3 - 5 = -2)
START_TEST(test_s21_sub_2) {
  s21_decimal a = {{3, 0, 0, 0}};
  s21_decimal b = {{5, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_sub(a, b, &result);
  ck_assert_int_eq(code, AR_OK);
  // Результат по модулю 2
  ck_assert_int_eq(result.bits[0], 2);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3] & 0x80000000, 0x80000000);
}
END_TEST

// Тест 3: Если второе число равно 0, результат должен быть равен первому числу.
START_TEST(test_s21_sub_3) {
  s21_decimal a = {{7, 0, 0, 0}};
  s21_decimal b = {{0, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_sub(a, b, &result);
  ck_assert_int_eq(code, AR_OK);
  ck_assert_int_eq(result.bits[0], 7);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0);
}
END_TEST

// Тест 4: Если первое число равно 0, результат должен быть равен -b.
START_TEST(test_s21_sub_4) {
  s21_decimal a = {{0, 0, 0, 0}};
  s21_decimal b = {{9, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_sub(a, b, &result);
  ck_assert_int_eq(code, AR_OK);
  // Ожидаем результат 9 с отрицательным знаком
  ck_assert_int_eq(result.bits[0], 9);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3] & 0x80000000, 0x80000000);
}
END_TEST

// Тест 5: Вычитание чисел с разными масштабами
// a = 10.50, b = 3.25, ожидаемый результат: 7.25.
// Представляем a как 1050 и b как 325 с масштабом 2 (scale = 2 -> bits[3] = 2
// << 16)
START_TEST(test_s21_sub_5) {
  s21_decimal a = {{1050, 0, 0, (2 << 16)}};
  s21_decimal b = {{325, 0, 0, (2 << 16)}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_sub(a, b, &result);
  ck_assert_int_eq(code, AR_OK);
  ck_assert_int_eq(result.bits[0], 725);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3] & 0x00FF0000, (2 << 16));
  ck_assert_int_eq(result.bits[3] & 0x80000000, 0);
}
END_TEST

START_TEST(test_s21_sub_6) {
  s21_decimal a = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_sub(a, b, &result);
  ck_assert_int_eq(code, NUM_TOO_HIGH);
}
END_TEST

START_TEST(test_s21_sub_7) {
  s21_decimal a = {
      {1, 1, 0, 0}};  // bits[0] = 1, bits[1] = 1, bits[2] = 0, bits[3] = 0
  s21_decimal b = {{2, 0, 0, 0}};  // bits[0] = 2, остальные биты = 0
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_sub(a, b, &result);

  ck_assert_int_eq(code, AR_OK);
  ck_assert_int_eq((uint32_t)result.bits[0],
                   (uint32_t)0xFFFFFFFF);  // Ожидаемое значение: 4294967295
  ck_assert_uint_eq(result.bits[1], 0);  // Старшие биты должны быть нулевыми
  ck_assert_uint_eq(result.bits[2], 0);  // Старшие биты должны быть нулевыми
  ck_assert_uint_eq(result.bits[3] & 0x80000000,
                    0);  // Положительное число (знаковый бит не установлен)
}
END_TEST

START_TEST(test_s21_sub_8) {
  s21_decimal max_decimal = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};  // Максимально возможное число
  s21_decimal two = {{2, 0, 0, 0}};  // Число 2
  s21_decimal result = {{0, 0, 0, 0}};

  int code = s21_sub(max_decimal, two, &result);

  // Ожидаемый результат: max_decimal - 2 = 0xFFFFFFFD_FFFFFFFF_FFFFFFFF
  ck_assert_int_eq(code, AR_OK);
  ck_assert_int_eq((uint32_t)result.bits[0], (uint32_t)0xFFFFFFFD);
  ck_assert_uint_eq((uint32_t)result.bits[1], (uint32_t)0xFFFFFFFF);
  ck_assert_uint_eq((uint32_t)result.bits[2], (uint32_t)0xFFFFFFFF);
  ck_assert_uint_eq((uint32_t)result.bits[3] & 0x80000000,
                    (uint32_t)0);  // Проверяем, что число положительное
}
END_TEST

START_TEST(test_s21_negate_null_result) {
  s21_decimal value = {{1, 0, 0, 0}};
  int code = s21_negate(value, NULL);

  ck_assert_int_eq(code, CALCULATION_ERROR);
}
END_TEST

START_TEST(test_s21_negate_zero) {
  s21_decimal value = {{0, 0, 0, 0}};  // Число 0
  s21_decimal result = {
      {1, 1, 1,
       1}};  // Заполняем случайными значениями, чтобы проверить изменение
  int code = s21_negate(value, &result);

  ck_assert_int_eq(code, OTH_OK);
  ck_assert_uint_eq(result.bits[0], 0);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_uint_eq(result.bits[3], 0);  // Знаковый бит тоже должен быть 0
}
END_TEST

// mitsuese

START_TEST(test_s21_is_equal_1) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_equal(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_equal_2) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{54321, 0, 0, 0}};
    ck_assert_int_eq(s21_is_equal(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_equal_3) {
    s21_decimal a = {{12345, 0, 0, 0x80000000}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_equal(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_greater_1) {
    s21_decimal a = {{54321, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_greater(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_greater_2) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{54321, 0, 0, 0}};
    ck_assert_int_eq(s21_is_greater(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_greater_3) {
    s21_decimal a = {{12345, 0, 0, 0x80000000}};  
    s21_decimal b = {{12345, 0, 0, 0}};           
    ck_assert_int_eq(s21_is_greater(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_greater_or_equal_1) {
    s21_decimal a = {{54321, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_greater_or_equal(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_greater_or_equal_2) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{54321, 0, 0, 0}};
    ck_assert_int_eq(s21_is_greater_or_equal(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_greater_or_equal_3) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_greater_or_equal(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_less_1) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{54321, 0, 0, 0}};
    ck_assert_int_eq(s21_is_less(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_less_2) {
    s21_decimal a = {{54321, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_less(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_less_3) {
    s21_decimal a = {{12345, 0, 0, 0x80000000}};  
    s21_decimal b = {{12345, 0, 0, 0}};           
    ck_assert_int_eq(s21_is_less(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_less_or_equal_1) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{54321, 0, 0, 0}};
    ck_assert_int_eq(s21_is_less_or_equal(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_less_or_equal_2) {
    s21_decimal a = {{54321, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_less_or_equal(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_less_or_equal_3) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_less_or_equal(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_not_equal_1) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{54321, 0, 0, 0}};
    ck_assert_int_eq(s21_is_not_equal(a, b), TRUE);
}
END_TEST

START_TEST(test_s21_is_not_equal_2) {
    s21_decimal a = {{12345, 0, 0, 0}};
    s21_decimal b = {{12345, 0, 0, 0}};
    ck_assert_int_eq(s21_is_not_equal(a, b), FALSE);
}
END_TEST

START_TEST(test_s21_is_not_equal_3) {
    s21_decimal a = {{12345, 0, 0, 0x80000000}};  
    s21_decimal b = {{12345, 0, 0, 0}};           
    ck_assert_int_eq(s21_is_not_equal(a, b), TRUE);
}
END_TEST

Suite *decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_decimal");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, div_0);
  tcase_add_test(tc_core, div_1);
  tcase_add_test(tc_core, div_2);
  tcase_add_test(tc_core, div_3);
  tcase_add_test(tc_core, div_4);
  tcase_add_test(tc_core, div_5);
  tcase_add_test(tc_core, div_6);
  tcase_add_test(tc_core, div_7);
  tcase_add_test(tc_core, div_8);
  tcase_add_test(tc_core, div_9);
  tcase_add_test(tc_core, div_10);
  tcase_add_test(tc_core, div_11);

  tcase_add_test(tc_core, test_from_int_to_decimal_0);
  tcase_add_test(tc_core, test_from_int_to_decimal_1);
  tcase_add_test(tc_core, test_from_int_to_decimal_2);

  tcase_add_test(tc_core, test_from_int_to_decimal_4);
  tcase_add_test(tc_core, test_from_int_to_decimal_5);
  tcase_add_test(tc_core, test_from_int_to_decimal_6);
  tcase_add_test(tc_core, test_from_int_to_decimal_7);
  tcase_add_test(tc_core, test_from_int_to_decimal_8);
  tcase_add_test(tc_core, test_from_int_to_decimal_9);

  tcase_add_test(tc_core, test_decimal_to_int_ok);

  tcase_add_test(tc_core, floor_0);
  tcase_add_test(tc_core, floor_1);
  tcase_add_test(tc_core, floor_2);
  tcase_add_test(tc_core, floor_3);
  tcase_add_test(tc_core, floor_5);
  tcase_add_test(tc_core, floor_6);

  tcase_add_test(tc_core, truncate_0);
  tcase_add_test(tc_core, truncate_1);
  tcase_add_test(tc_core, truncate_2);
  tcase_add_test(tc_core, truncate_3);
  tcase_add_test(tc_core, truncate_4);
  tcase_add_test(tc_core, truncate_5);
  tcase_add_test(tc_core, truncate_6);
  tcase_add_test(tc_core, truncate_7);
  tcase_add_test(tc_core, truncate_8);
  tcase_add_test(tc_core, truncate_9);
  tcase_add_test(tc_core, truncate_10);

  tcase_add_test(tc_core, test_float_infinity);
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
  tcase_add_test(tc_core, test_s21_add_3);
  tcase_add_test(tc_core, test_s21_add_4);
  tcase_add_test(tc_core, test_s21_add_5);
  tcase_add_test(tc_core, test_s21_add_6);
  tcase_add_test(tc_core, test_s21_add_7);
  tcase_add_test(tc_core, test_s21_add_8);
  tcase_add_test(tc_core, test_s21_add_9);
  tcase_add_test(tc_core, test_s21_add_10);
  tcase_add_test(tc_core, test_s21_add_11);
  tcase_add_test(tc_core, test_s21_add_12);
  tcase_add_test(tc_core, test_s21_add_13);
  tcase_add_test(tc_core, test_s21_add_14);
  tcase_add_test(tc_core, test_s21_add_15);
  tcase_add_test(tc_core, test_s21_add_16);
  tcase_add_test(tc_core, test_s21_add_17);
  tcase_add_test(tc_core, test_s21_add_18);

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

  tcase_add_test(tc_core, test_s21_sub_1);
  tcase_add_test(tc_core, test_s21_sub_2);
  tcase_add_test(tc_core, test_s21_sub_3);
  tcase_add_test(tc_core, test_s21_sub_4);
  tcase_add_test(tc_core, test_s21_sub_5);
  tcase_add_test(tc_core, test_s21_sub_6);
  tcase_add_test(tc_core, test_s21_sub_7);
  tcase_add_test(tc_core, test_s21_sub_8);
  tcase_add_test(tc_core, test_s21_negate_null_result);
  tcase_add_test(tc_core, test_s21_negate_zero);

  // mitsuese
    tcase_add_test(tc_core, test_s21_is_equal_1);
    tcase_add_test(tc_core, test_s21_is_equal_2);
    tcase_add_test(tc_core, test_s21_is_equal_3);

    tcase_add_test(tc_core, test_s21_is_greater_1);
    tcase_add_test(tc_core, test_s21_is_greater_2);
    tcase_add_test(tc_core, test_s21_is_greater_3);

    tcase_add_test(tc_core, test_s21_is_greater_or_equal_1);
    tcase_add_test(tc_core, test_s21_is_greater_or_equal_2);
    tcase_add_test(tc_core, test_s21_is_greater_or_equal_3);

    tcase_add_test(tc_core, test_s21_is_less_1);
    tcase_add_test(tc_core, test_s21_is_less_2);
    tcase_add_test(tc_core, test_s21_is_less_3);

    tcase_add_test(tc_core, test_s21_is_less_or_equal_1);
    tcase_add_test(tc_core, test_s21_is_less_or_equal_2);
    tcase_add_test(tc_core, test_s21_is_less_or_equal_3);

    tcase_add_test(tc_core, test_s21_is_not_equal_1);
    tcase_add_test(tc_core, test_s21_is_not_equal_2);
    tcase_add_test(tc_core, test_s21_is_not_equal_3);

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