#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>

#include "../s21_decimal.h"

#define LIGHT_GREEN "\033[32;1m"
#define DARK_RED "\033[31;1m"
#define NOCOLOR "\033[0m"
#define YELLOW "\033[33;1m"

#define BIG_MAX 20
#define SMALL_MAX 8

void test_from_decimal_to_float(s21_decimal decimal, float num);
void test_from_float_to_decimal(float f, s21_decimal decimal_check);
void test_from_decimal_to_int(s21_decimal decimal, int check);
void test_from_decimal_to_int_fail(s21_decimal decimal);
void test_from_int_to_decimal(int number, s21_decimal decimal_check);
void test_add(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check);
void test_add_fail(s21_decimal dec_1, s21_decimal dec_2, int check);
void test_sub(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check);
void test_sub_fail(s21_decimal dec_1, s21_decimal dec_2, int check);
void test_mul(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check);
void test_mul_fail1(s21_decimal dec_1, s21_decimal dec_2, int code_check);
void test_mul_fail2(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check,
                    int code_check);
void test_div(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check);
void test_div_fail1(s21_decimal dec_1, s21_decimal dec_2, int code_check);
void test_div_fail2(s21_decimal dec_1, s21_decimal dec_2,
                    s21_decimal decimal_check, int code_check);
float get_big_float(int i);
float get_small_float(int i);

Suite *s21_add_cases(void);
Suite *s21_add_cases_2(void);
Suite *s21_sub_cases(void);
Suite *s21_sub_cases_2(void);
Suite *s21_mul_cases(void);
Suite *test_s21_mul_suite_2(void);
Suite *s21_div_cases(void);
Suite *s21_div_cases_2(void);
Suite *s21_div_cases_3(void);
Suite *s21_div_cases_4(void);
Suite *from_decimal_to_float_suite_1(void);
Suite *from_decimal_to_float_suite_2(void);
Suite *from_decimal_to_float_suite_3(void);
Suite *from_decimal_to_float_suite_4(void);
Suite *from_decimal_to_float_suite_5(void);
Suite *from_decimal_to_float_suite_6(void);
Suite *test_from_float_to_decimal_suite_1(void);
Suite *test_from_float_to_decimal_suite_2(void);
Suite *test_from_float_to_decimal_suite_3(void);
Suite *test_from_float_to_decimal_suite_4(void);
Suite *test_from_float_to_decimal_suite_5(void);
Suite *test_from_float_to_decimal_suite_6(void);
Suite *from_float_to_decimal_edge_cases(void);
Suite *from_decimal_to_int_suite_1(void);
Suite *from_decimal_to_int_suite_2(void);
Suite *from_decimal_to_int_suite_3(void);
Suite *from_int_to_decimal_suite(void);
Suite *s21_floor_cases(void);
Suite *s21_truncate_cases(void);
Suite *s21_round_cases(void);
Suite *s21_negate_cases(void);
Suite *s21_is_equal_cases(void);
Suite *s21_is_not_equal_cases(void);
Suite *s21_is_less_or_equal_cases(void);
Suite *s21_is_less_cases(void);
Suite *s21_is_greater_or_equal_cases(void);
Suite *s21_is_greater_cases(void);
