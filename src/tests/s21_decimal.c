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

START_TEST(test_decimal_ok) {
  int num = -2147483648;
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};
  check_decimal_conversion(num, decimal_check);
}
END_TEST

START_TEST(test_decimal_ok_v2) {
  int num = -2147483647;
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
  check_decimal_conversion(num, decimal_check);
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

  print_float_test_result("test_float_positive", src, result, code);
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

  print_float_test_result("test_float_negative", src, result, code);
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

  print_float_test_result("test_float_zero", src, result, code);
}
END_TEST

START_TEST(test_float_too_small) {
  float src = 1e-29f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONV_ERR);

  print_float_test_result("test_float_too_small", src, result, code);
}
END_TEST

START_TEST(test_float_too_large) {
  float src = 8e28f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONV_ERR);

  print_float_test_result("test_float_too_large", src, result, code);
}
END_TEST

START_TEST(test_float_nan) {
  float src = NAN;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONV_ERR);

  print_float_test_result("test_float_nan", src, result, code);
}
END_TEST

START_TEST(test_float_infinity) {
  float src = INFINITY;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONV_ERR);

  print_float_test_result("test_float_infinity", src, result, code);
}
END_TEST

START_TEST(test_from_decimal_to_float) {
  s21_decimal decimal = {{0x1234560, 0, 0, 0x80000000}};
  float result;
  int code = s21_from_decimal_to_float(decimal, &result);

  ck_assert_int_eq(code, CNV_OK);

  print_decimal_to_float_result("test_from_decimal_to_float", decimal, result,
                                code);
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
  print_decimal_to_float_result("test_from_decimal_to_float_scale_3", decimal,
                                result, code);
}
END_TEST

START_TEST(test_from_decimal_to_float_fail) {
  s21_decimal decimal = {{0x1234560, 0, 0, 0x80000000}};
  float result;
  int code = s21_from_decimal_to_float(decimal, NULL);

  ck_assert_int_eq(code, CONV_ERR);

  print_decimal_to_float_result("test_from_decimal_to_float_fail", decimal,
                                0.0f, code);
}
END_TEST

START_TEST(s21_from_decimal_to_int_1) {
    s21_decimal dec = { { 12345, 0, 0, 0 } };
    int result = 0;
    int code = s21_from_decimal_to_int(dec, &result);
    ck_assert_int_eq(code, CNV_OK);
    ck_assert_int_eq(result, 12345);
}
END_TEST

START_TEST(s21_from_decimal_to_int_2) {
    s21_decimal dec = { { 12345, 0, 0, 0x00020000 } };  // scale = 2
    int result = 0;
    int code = s21_from_decimal_to_int(dec, &result);
    ck_assert_int_eq(code, CNV_OK);
    ck_assert_int_eq(result, 123);
}
END_TEST

START_TEST(s21_from_decimal_to_int_3) {
    s21_decimal dec = { { 9876, 0, 0, 0x80000000 } };
    int result = 0;
    int code = s21_from_decimal_to_int(dec, &result);
    ck_assert_int_eq(code, CNV_OK);
    ck_assert_int_eq(result, -9876);
}
END_TEST

START_TEST(s21_from_decimal_to_int_4) {
    s21_decimal dec = { { 9876, 0, 0, 0x80010000 } };  // scale = 1
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
  tcase_add_test(tc_core, test_decimal_ok);
  tcase_add_test(tc_core, test_decimal_ok_v2);

  tcase_add_test(tc_core, test_float_positive);
  tcase_add_test(tc_core, test_float_negative);
  tcase_add_test(tc_core, test_float_zero);
  tcase_add_test(tc_core, test_float_too_small);
  tcase_add_test(tc_core, test_float_too_large);
  tcase_add_test(tc_core, test_float_nan);
  tcase_add_test(tc_core, test_float_infinity);

  tcase_add_test(tc_core, test_from_decimal_to_float);
  tcase_add_test(tc_core, test_from_decimal_to_float_scale_3);
  tcase_add_test(tc_core, test_from_decimal_to_float_fail);

  tcase_add_test(tc_core, s21_from_decimal_to_int_1);
  tcase_add_test(tc_core, s21_from_decimal_to_int_2);
  tcase_add_test(tc_core, s21_from_decimal_to_int_3);
  tcase_add_test(tc_core, s21_from_decimal_to_int_4);
  tcase_add_test(tc_core, s21_from_decimal_to_int_5);
  tcase_add_test(tc_core, s21_from_decimal_to_int_6);

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
