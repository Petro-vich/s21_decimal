#include "../s21_decimal.h"

#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#define CONV_ERR 1
#define TEST_ARITHMETIC_OK 0
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
  printf("Test: %s\n", "s21_from_int_to_decimal");
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
    ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(s21_from_decimal_to_int_6) {
    s21_decimal dec = { { 12345, 0, 0, 0 } };
    int code = s21_from_decimal_to_int(dec, NULL);
    ck_assert_int_eq(code, CONVERSION_ERROR);
}
END_TEST

START_TEST(test_div_fail_manual1) {
  // 792281625.14264337593543950335 / 792281625.14264337593543950335 = 1
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
  ck_assert_int_eq(result.bits[0], 1); // Результат должен быть 1
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0); // Масштаб и знак должны быть 0
}
END_TEST

START_TEST(test_div_fail_manual2) {
  // Деление на ноль
  s21_decimal decimal1 = {{10, 0, 0, 0}};
  s21_decimal decimal2 = {{0, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(code, 3); // Ожидаем ошибку деления на ноль
}
END_TEST

START_TEST(test_div_fail_manual3) {
  // Деление нуля на число
  s21_decimal decimal1 = {{0, 0, 0, 0}};
  s21_decimal decimal2 = {{5, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
  ck_assert_int_eq(result.bits[0], 0); // Результат должен быть 0
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0); // Масштаб и знак должны быть 0
}
END_TEST

START_TEST(test_div_fail_manual4) {
  // Деление отрицательного числа на положительное
  s21_decimal decimal1 = {{10, 0, 0, 0x80000000}}; // -10
  s21_decimal decimal2 = {{2, 0, 0, 0}}; // 2
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
  ck_assert_int_eq(result.bits[0], 5); // Результат должен быть -5
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0x80000000); // Знак отрицательный
}
END_TEST

START_TEST(test_div_fail_manual5) {
  // Деление с масштабированием
  s21_decimal decimal1 = {{100, 0, 0, 0x10000}}; // 1.00
  s21_decimal decimal2 = {{20, 0, 0, 0x10000}}; // 0.20
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
  ck_assert_int_eq(result.bits[0], 5); // Результат должен быть 5.00
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0x20000); // Масштаб 2
}
END_TEST

START_TEST(test_div_fail_manual6) {
  // Деление с переполнением
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}}; // Максимальное число
  s21_decimal decimal2 = {{1, 0, 0, 0x1C0000}}; // 0.0000000000000000000000000001
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(code, 1); // Ожидаем ошибку переполнения
}
END_TEST

START_TEST(test_div_fail_manual7) {
  // Деление с отрицательным масштабом (некорректный масштаб)
  s21_decimal decimal1 = {{10, 0, 0, 0x80010000}}; // -10 с масштабом 1
  s21_decimal decimal2 = {{2, 0, 0, 0x80000000}}; // -2
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual8) {
  // Деление с некорректным масштабом (масштаб > 28)
  s21_decimal decimal1 = {{10, 0, 0, 0x1D0000}}; // Масштаб 29
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual9) {
  // Деление с некорректным масштабом (масштаб < 0)
  s21_decimal decimal1 = {{10, 0, 0, 0xFFFFFFFF}}; // Некорректный масштаб
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual10) {
  // Деление с некорректными битами в масштабе
  s21_decimal decimal1 = {{10, 0, 0, 0x1C0001}}; // Некорректные биты в масштабе
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual11) {
  // Деление с некорректными битами в масштабе (старшие биты)
  s21_decimal decimal1 = {{10, 0, 0, 0x401C0000}}; // Некорректные биты в масштабе
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual12) {
  // Деление с некорректными битами в масштабе (младшие биты)
  s21_decimal decimal1 = {{10, 0, 0, 0x11C0000}}; // Некорректные биты в масштабе
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual13) {
  // Деление с некорректными битами в масштабе (все биты установлены)
  s21_decimal decimal1 = {{10, 0, 0, 0xFFFFFFFF}}; // Некорректные биты в масштабе
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual14) {
  // Деление с некорректными битами в масштабе (масштаб 28, но биты 0-15 не нули)
  s21_decimal decimal1 = {{10, 0, 0, 0x1C0001}}; // Некорректные биты в масштабе
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST

START_TEST(test_div_fail_manual15) {
  // Деление с некорректными битами в масштабе (масштаб 28, но биты 24-30 не нули)
  s21_decimal decimal1 = {{10, 0, 0, 0x401C0000}}; // Некорректные биты в масштабе
  s21_decimal decimal2 = {{2, 0, 0, 0}};
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_ne(code, TEST_ARITHMETIC_OK); // Ожидаем ошибку
}
END_TEST



Suite *decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_decimal");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_div_fail_manual1);
  tcase_add_test(tc_core, test_div_fail_manual2);
  tcase_add_test(tc_core, test_div_fail_manual3);
  tcase_add_test(tc_core, test_div_fail_manual4);
  tcase_add_test(tc_core, test_div_fail_manual5);
  tcase_add_test(tc_core, test_div_fail_manual6);
  tcase_add_test(tc_core, test_div_fail_manual7);
  tcase_add_test(tc_core, test_div_fail_manual8);
  tcase_add_test(tc_core, test_div_fail_manual9);
  tcase_add_test(tc_core, test_div_fail_manual10);
  tcase_add_test(tc_core, test_div_fail_manual11);
  tcase_add_test(tc_core, test_div_fail_manual12);
  tcase_add_test(tc_core, test_div_fail_manual13);
  tcase_add_test(tc_core, test_div_fail_manual14);
  tcase_add_test(tc_core, test_div_fail_manual15);


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

int main(void) {
  Suite *s = decimal_suite();
  SRunner *sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  int number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
