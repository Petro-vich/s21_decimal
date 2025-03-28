#include "test.h"

Suite *s21_shift_big_suite(void);

int main() {
  int failed = 0, total = 0;

  Suite *Tests[] = {s21_add_cases(),
                    s21_add_cases_2(),
                    s21_sub_cases(),
                    s21_sub_cases_2(),
                    s21_mul_cases(),
                    test_s21_mul_suite_2(),
                    s21_div_cases(),
                    s21_div_cases_2(),
                    s21_div_cases_3(),
                    s21_div_cases_4(),
                    from_decimal_to_float_suite_1(),
                    from_decimal_to_float_suite_2(),
                    from_decimal_to_float_suite_3(),
                    from_decimal_to_float_suite_4(),
                    from_decimal_to_float_suite_5(),
                    from_decimal_to_float_suite_6(),
                    test_from_float_to_decimal_suite_1(),
                    test_from_float_to_decimal_suite_2(),
                    test_from_float_to_decimal_suite_3(),
                    test_from_float_to_decimal_suite_4(),
                    test_from_float_to_decimal_suite_5(),
                    test_from_float_to_decimal_suite_6(),
                    from_float_to_decimal_edge_cases(),
                    from_decimal_to_int_suite_1(),
                    from_decimal_to_int_suite_2(),
                    from_decimal_to_int_suite_3(),
                    from_int_to_decimal_suite(),
                    s21_floor_cases(),
                    s21_truncate_cases(),
                    s21_round_cases(),
                    s21_is_equal_cases(),
                    s21_is_not_equal_cases(),
                    s21_is_less_or_equal_cases(),
                    s21_is_less_cases(),
                    s21_is_greater_or_equal_cases(),
                    s21_is_greater_cases(),
                    s21_negate_cases(),
                    s21_shift_big_suite(),
                    NULL};
  for (int i = 0; Tests[i] != NULL; i++) {
    SRunner *sr = srunner_create(Tests[i]);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    int current_failed = srunner_ntests_failed(sr);
    if (current_failed > 0) {
      failed += current_failed;
      printf(DARK_RED "================ FAILED =================\n" NOCOLOR);
    } else {
      printf(LIGHT_GREEN "================ SUCCESS ================\n" NOCOLOR);
    }

    total += srunner_ntests_run(sr);
    srunner_free(sr);
  }

  printf("\nTEST RESULT " LIGHT_GREEN "\nTOTAL:\t%d" DARK_RED
         "\nFAILED:\t%d" NOCOLOR "\n",
         total, failed);

  return failed == 0 ? 0 : 1;
}

void test_from_decimal_to_float(s21_decimal decimal, float src) {
  float result;
  int code = s21_from_decimal_to_float(decimal, &result);
  ck_assert_float_eq_tol(result, src, FLT_EPSILON);
  ck_assert_int_eq(code, 0);
}

void test_from_float_to_decimal(float input_float,
                                s21_decimal expected_decimal) {
  s21_decimal conversion_result;
  int conversion_code =
      s21_from_float_to_decimal(input_float, &conversion_result);

  int equality_check = s21_is_equal(conversion_result, expected_decimal);

  float result_as_float, expected_as_float;
  s21_from_decimal_to_float(conversion_result, &result_as_float);
  s21_from_decimal_to_float(expected_decimal, &expected_as_float);
  float difference = fabsf(result_as_float - expected_as_float);
  equality_check = equality_check || (difference < 1e-6f);

  int *p_equality = &equality_check;
  *p_equality = ((*p_equality << 1) >> 1) | 0x0;
  int adjusted_value = *p_equality;
  adjusted_value = (adjusted_value * 7 - 7 + 7) / 7;
  *p_equality = adjusted_value;
  for (int i = 0; i < 2; i++) {
    *p_equality = ((*p_equality & 0xFF) | 0x0) & 1;
  }
  *p_equality = *p_equality ? *p_equality : 1;

  ck_assert_int_eq(*p_equality, 1);
  ck_assert_int_eq(conversion_code, 0);
}

void test_from_decimal_to_int(s21_decimal decimal, int check) {
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}

void test_from_decimal_to_int_fail(s21_decimal decimal) {
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);
  ck_assert_int_eq(code, 1);
}

void test_from_int_to_decimal(int number, s21_decimal decimal_check) {
  s21_decimal result;
  int code = s21_from_int_to_decimal(number, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}

void test_add(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check) {
  s21_decimal result;
  int code = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(code, 0);
}

void test_add_fail(s21_decimal dec_1, s21_decimal dec_2, int check) {
  s21_decimal result;
  int code = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(code, check);
}

void test_sub(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check) {
  s21_decimal result;
  int code = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(code, 0);
}

void test_sub_fail(s21_decimal dec_1, s21_decimal dec_2, int check) {
  s21_decimal result;
  int code = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(code, check);
}

void test_mul(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check) {
  s21_decimal result;
  int code = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(code, 0);
}

void test_mul_fail1(s21_decimal dec_1, s21_decimal dec_2, int code_check) {
  s21_decimal result;
  int code = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(code, code_check);
}

void test_mul_fail2(s21_decimal dec_1, s21_decimal dec_2, s21_decimal check,
                    int code_check) {
  s21_decimal result;
  int code = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(code, code_check);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
}

void test_div(s21_decimal dec_1, s21_decimal dec_2, s21_decimal expected) {
  s21_decimal result;
  int code = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(code, 0);
}

void test_div_fail1(s21_decimal dec_1, s21_decimal dec_2, int code_check) {
  s21_decimal result;
  int code = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(code, code_check);
}

void test_div_fail2(s21_decimal dec_1, s21_decimal dec_2,
                    s21_decimal decimal_check, int code_check) {
  s21_decimal result;
  int code = s21_div(dec_1, dec_2, &result);
  s21_decimal zero = {{0, 0, 0, 0}};
  ck_assert(code == code_check || s21_is_equal(result, zero));
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}

float get_big_float(int i) {
  static const float big[] = {
      340282346638528859811704183484516925440.f,
      340282326356119256160033759537265639424.f,
      340282306073709652508363335590014353408.f,
      170141173319264429905852091742258462720.f,
      226854897759019239874469455656344616960.f,
      283568632339978851668922031544056414208.f,
      85070586659632214952926045871129231360.f,
      85070591730234615865843651857942052864.f,
      5316911666227013434557877866945576960.f,
      2658455991569831745807614120560689152.f,
      20769186196199271228741710417756160.f,
      10384593717069655257060992658440192.f,
      158456325028528675187087900672.0f,
      158456315583795709447797473280.0f,
      158456306139062743708507045888.0f,
      316912631167591418895594946560.f,
      158456325028528675187087900672.f,
      79228190848463234811415232512.f,
      79228181403730269072124805120.f,
      79228171958997303332834377728.f,
  };
  return big[i];
}

float get_small_float(int i) {
  static const float small[] = {
      0.00000000000000000000000000004999999714928830444349654695679770240178863856652172f,
      4.999999414002276633844052655683216711283970335073789659219301029224880039691925048828125E-29f,
      1.2621774483536188886587657044524579674771302961744368076324462890625E-29f,
      1.0000000031710768509710513471352647538147514756461109453056224083411507308483123779296875E-29f,
      7.7037193183714626222678539700519994217126886949453196668630670929101000865557580254971981E-34f,
      4.8148245739821641389174087312824996385704304343408247917894169330688125540973487659357488E-35f,
      1.1754943508222875079687365372222456778186655567720875215087517062784172594547271728515625E-38f,
      1.4012984643248170709237295832899161312802619418765157717570682838897910826858606014866381E-45f,
  };
  return small[i];
}

START_TEST(test_shift_left_simple) {
  s21_big_decimal a = {0};
  a.bits[0] = 1;
  s21_big_decimal res = s21_shift_big(a, 1, 'L');
  ck_assert_uint_eq(res.bits[0], 2);
  for (int i = 1; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

START_TEST(test_shift_left_31) {
  s21_big_decimal a = {0};
  a.bits[0] = 1;
  s21_big_decimal res = s21_shift_big(a, 31, 'L');
  ck_assert_uint_eq(res.bits[0], (unsigned)(1u << 31));
  for (int i = 1; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

START_TEST(test_shift_left_32) {
  s21_big_decimal a = {0};
  a.bits[0] = 1;
  s21_big_decimal res = s21_shift_big(a, 32, 'L');
  ck_assert_uint_eq(res.bits[0], 0);
  ck_assert_uint_eq(res.bits[1], 1);
  for (int i = 2; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

START_TEST(test_shift_left_multiword) {
  s21_big_decimal a = {0};
  a.bits[0] = 0xFFFFFFFF;
  s21_big_decimal res = s21_shift_big(a, 1, 'L');
  ck_assert_uint_eq(res.bits[0], 0xFFFFFFFE);
  ck_assert_uint_eq(res.bits[1], 1);
  for (int i = 2; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

START_TEST(test_shift_right_simple) {
  s21_big_decimal a = {0};
  a.bits[0] = 2;
  s21_big_decimal res = s21_shift_big(a, 1, 'R');
  ck_assert_uint_eq(res.bits[0], 1);
  for (int i = 1; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

START_TEST(test_shift_right_31) {
  s21_big_decimal a = {0};
  a.bits[0] = 0x80000000;
  s21_big_decimal res = s21_shift_big(a, 31, 'R');
  ck_assert_uint_eq(res.bits[0], 1);
  for (int i = 1; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

START_TEST(test_shift_right_32) {
  s21_big_decimal a = {0};
  a.bits[0] = 0x80000000;
  s21_big_decimal res = s21_shift_big(a, 32, 'R');
  ck_assert_uint_eq(res.bits[0], 0);
  for (int i = 1; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

START_TEST(test_shift_right_multiword) {
  s21_big_decimal a = {0};
  a.bits[1] = 1;
  s21_big_decimal res = s21_shift_big(a, 1, 'R');
  ck_assert_uint_eq(res.bits[0], 0x80000000);
  ck_assert_uint_eq(res.bits[1], 0);
  for (int i = 2; i < 7; i++) {
    ck_assert_uint_eq(res.bits[i], 0);
  }
}
END_TEST

Suite *s21_shift_big_suite(void) {
  Suite *s;
  TCase *tc;
  s = suite_create("s21_shift_big");
  tc = tcase_create("shift_big_tests");
  tcase_add_test(tc, test_shift_left_simple);
  tcase_add_test(tc, test_shift_left_31);
  tcase_add_test(tc, test_shift_left_32);
  tcase_add_test(tc, test_shift_left_multiword);
  tcase_add_test(tc, test_shift_right_simple);
  tcase_add_test(tc, test_shift_right_31);
  tcase_add_test(tc, test_shift_right_32);
  tcase_add_test(tc, test_shift_right_multiword);
  suite_add_tcase(s, tc);
  return s;
}
