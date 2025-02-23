#include <check.h>
#include "../s21_decimal.h"


START_TEST (test_1) {

     ck_assert_int_eq(1, 1);

}
END_TEST

  Suite *decimal_suite(void){
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_decimal");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_1);
  
  suite_add_tcase(s, tc_core);

  return s;
}

int main(void){
  Suite *s = decimal_suite();
  SRunner *sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    srunner_free(sr);
    return 0;
}