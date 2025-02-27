#include "../s21_decimal.h"

#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#define CONV_ERR 1

// Вспомогательные функции для отладочного вывода
void s21_print_decimal_bits(s21_decimal decimal) {
  printf("bits[0]: 0x%08x\n", decimal.bits[0]);
  printf("bits[1]: 0x%08x\n", decimal.bits[1]);
  printf("bits[2]: 0x%08x\n", decimal.bits[2]);
  printf("bits[3]: 0x%08x\n", decimal.bits[3]);
}

void s21_print_decimal_string(s21_decimal decimal) {
  int sign = (decimal.bits[3] & 0x80000000) ? -1 : 1;
  int value = decimal.bits[0];
  printf("Decimal value: %d\n", sign * value);
}

// Функция для проверки корректности преобразования
void check_decimal_conversion(int num, s21_decimal decimal_check) {
  s21_decimal result;
  int code = s21_from_int_to_decimal(num, &result);

  // Проверка кода возврата
  ck_assert_int_eq(code, 0);

  // Проверка, что результат совпадает с ожидаемым значением
  ck_assert_int_eq(result.bits[0], decimal_check.bits[0]);
  ck_assert_int_eq(result.bits[1], decimal_check.bits[1]);
  ck_assert_int_eq(result.bits[2], decimal_check.bits[2]);
  ck_assert_int_eq(result.bits[3], decimal_check.bits[3]);

// Отладочный вывод
#if defined(__DEBUG)
  printf("---------------------------------\n");
  printf("Test:\n");
  printf("number: %d\n", num);
  printf("Check:\n");
  s21_print_decimal_bits(decimal_check);
  s21_print_decimal_string(decimal_check);
  printf("sign = %d\n", (decimal_check.bits[3] & 0x80000000) ? 1 : 0);
  printf("Result:\n");
  s21_print_decimal_bits(result);
  s21_print_decimal_string(result);
  printf("sign = %d\n", (result.bits[3] & 0x80000000) ? 1 : 0);
  printf("---------------------------------\n");
#endif
}

void print_float_test_result(const char *test_name, float src,
                             s21_decimal result, int code) {
#if defined(__DEBUG)
  printf("---------------------------------\n");
  printf("Test: %s\n", test_name);
  printf("Input float: %f\n", src);
  if (code == 0) {
    printf("Result:\n");
    s21_print_decimal_bits(result);
    s21_print_decimal_string(result);
    printf("sign = %d\n", (result.bits[3] & 0x80000000) ? 1 : 0);
  } else {
    printf("Result: CONVERSION_ERROR\n");
  }
  printf("---------------------------------\n");
#endif
}

void print_decimal_to_float_result(const char *test_name, s21_decimal src,
                                   float dst, int code) {
#if defined(__DEBUG)
  printf("---------------------------------\n");
  printf("Test: %s\n", test_name);
  printf("Input decimal:\n");
  s21_print_decimal_bits(src);
  s21_print_decimal_string(src);
  printf("sign = %d\n", (src.bits[3] & 0x80000000) ? 1 : 0);

  if (code == 0) {
    printf("Result:\n");
    printf("Float value: %f\n", dst);
    printf("sign = %d\n", (dst < 0) ? 1 : 0);
  } else {
    printf("Result: CONVERSION_ERROR\n");
  }
  printf("---------------------------------\n");
#endif
}

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

  ck_assert_int_eq(code, CONVERSION_ERROR);

  print_float_test_result("test_float_too_small", src, result, code);
}
END_TEST

START_TEST(test_float_too_large) {
  float src = 8e28f;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);

  print_float_test_result("test_float_too_large", src, result, code);
}
END_TEST

START_TEST(test_float_nan) {
  float src = NAN;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);

  print_float_test_result("test_float_nan", src, result, code);
}
END_TEST

START_TEST(test_float_infinity) {
  float src = INFINITY;
  s21_decimal result;
  int code = s21_from_float_to_decimal(src, &result);

  ck_assert_int_eq(code, CONVERSION_ERROR);

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

  ck_assert_int_eq(code, CONVERSION_ERROR);

  print_decimal_to_float_result("test_from_decimal_to_float_fail", decimal,
                                0.0f, code);
}
END_TEST

Suite *decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_decimal");
  tc_core = tcase_create("Core");

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

  suite_add_tcase(s, tc_core);

  return s;
}

int main(void) {
  Suite *s = decimal_suite();
  SRunner *sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  int number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}