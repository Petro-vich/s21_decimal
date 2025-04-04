
#include "test.h"

START_TEST(test_from_int_to_decimal_1) {
  int number = -2147483648;
  // Converted the Int32 value -2147483648 to the Decimal value -2147483648.
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_2) {
  int number = -2147483647;
  // Converted the Int32 value -2147483647 to the Decimal value -2147483647.
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_3) {
  int number = -214748364;
  // Converted the Int32 value -214748364 to the Decimal value -214748364.
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_4) {
  int number = -214748;
  // Converted the Int32 value -214748 to the Decimal value -214748.
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_5) {
  int number = -1000;
  // Converted the Int32 value -1000 to the Decimal value -1000.
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_6) {
  int number = -1;
  // Converted the Int32 value -1 to the Decimal value -1.
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_7) {
  int number = 0;
  // Converted the Int32 value 0 to the Decimal value 0.
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_8) {
  int number = 1;
  // Converted the Int32 value 1 to the Decimal value 1.
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_9) {
  int number = 1000;
  // Converted the Int32 value 1000 to the Decimal value 1000.
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_10) {
  int number = 214748;
  // Converted the Int32 value 214748 to the Decimal value 214748.
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_11) {
  int number = 214748364;
  // Converted the Int32 value 214748364 to the Decimal value 214748364.
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_12) {
  int number = 2147483646;
  // Converted the Int32 value 2147483646 to the Decimal value 2147483646.
  s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_13) {
  int number = 2147483647;
  // Converted the Int32 value 2147483647 to the Decimal value 2147483647.
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

Suite *from_int_to_decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_int_to_decimal" NOCOLOR);
  tc_core = tcase_create("Core");

  // tcase_add_test(tc_core, test_from_int_to_decimal_fail1);

  tcase_add_test(tc_core, test_from_int_to_decimal_1);
  tcase_add_test(tc_core, test_from_int_to_decimal_2);
  tcase_add_test(tc_core, test_from_int_to_decimal_3);
  tcase_add_test(tc_core, test_from_int_to_decimal_4);
  tcase_add_test(tc_core, test_from_int_to_decimal_5);
  tcase_add_test(tc_core, test_from_int_to_decimal_6);
  tcase_add_test(tc_core, test_from_int_to_decimal_7);
  tcase_add_test(tc_core, test_from_int_to_decimal_8);
  tcase_add_test(tc_core, test_from_int_to_decimal_9);
  tcase_add_test(tc_core, test_from_int_to_decimal_10);
  tcase_add_test(tc_core, test_from_int_to_decimal_11);
  tcase_add_test(tc_core, test_from_int_to_decimal_12);
  tcase_add_test(tc_core, test_from_int_to_decimal_13);

  suite_add_tcase(s, tc_core);

  return s;
}
