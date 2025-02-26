#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include "../s21_decimal.h"
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

START_TEST(test_decimal_ok_v2){
  int num = -2147483647;
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
  check_decimal_conversion(num, decimal_check);
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