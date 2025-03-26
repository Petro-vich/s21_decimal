
#include "test.h"

START_TEST(test_is_not_equal_1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;
  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_102) {
  // -305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_104) {
  // 305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_106) {
  // 5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_108) {
  // -5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_110) {
  // 20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_112) {
  // -20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_214) {
  // -305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_216) {
  // 305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_218) {
  // 5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_220) {
  // -5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_222) {
  // 20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_224) {
  // -20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_251) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_252) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_253) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_254) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_255) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_256) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_257) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_258) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_259) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_260) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_261) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_262) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_263) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_264) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_265) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_266) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_267) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_268) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_269) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_270) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_271) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_272) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_273) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_274) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_275) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_276) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_277) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_278) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_279) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_280) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_281) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_282) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_283) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_284) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_285) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_286) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_287) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_288) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_289) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_290) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_291) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_292) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_293) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_294) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_295) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_296) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_297) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_298) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_299) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_300) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_301) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_302) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_303) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_304) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_305) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_306) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_307) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_308) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_309) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_310) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_311) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_312) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_313) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_314) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_315) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_316) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_317) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_318) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_319) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_320) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_321) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_322) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_323) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_324) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_325) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_326) {
  // -305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_327) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_328) {
  // 305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_329) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_330) {
  // 5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_331) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_332) {
  // -5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_333) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_334) {
  // 20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_335) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_336) {
  // -20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_337) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_338) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_339) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_340) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_341) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_342) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_343) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_344) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_345) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_346) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_347) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_348) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_349) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_350) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_351) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_352) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_353) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_354) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_355) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_356) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_357) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_358) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_359) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_360) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_361) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_362) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_363) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_364) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_365) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_366) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_367) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_368) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_369) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_370) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_371) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_372) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_373) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_374) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_375) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_376) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_377) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_378) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_379) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_380) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_381) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_382) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_383) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_384) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_385) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_386) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_387) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_388) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_389) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_390) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_391) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_392) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_393) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_394) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_395) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_396) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_397) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_398) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_399) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_400) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_401) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_402) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_403) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_404) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_405) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_406) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_407) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_408) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_409) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_410) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_411) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_412) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_413) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_414) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_415) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_416) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_417) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_418) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_419) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_420) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_421) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_422) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_423) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_424) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_425) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_426) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_427) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_428) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_429) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_430) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_431) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_432) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_433) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_434) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_435) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_436) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_437) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_438) {
  // -305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_439) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_440) {
  // 305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_441) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_442) {
  // 5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_443) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_444) {
  // -5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_445) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_446) {
  // 20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_447) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_448) {
  // -20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_449) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_450) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_451) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_452) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_453) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_454) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_455) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_456) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_457) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_458) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_459) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_460) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_461) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_462) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_463) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_464) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_465) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_466) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_467) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_468) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_469) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_470) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_471) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_472) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_473) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_474) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_475) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_476) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_477) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_478) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_479) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_480) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_481) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_482) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_483) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_484) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_485) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_486) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_487) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_488) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_489) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_490) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_491) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_492) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_493) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_494) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_495) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_496) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_497) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_498) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_499) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_not_equal_500) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

Suite *s21_is_not_equal_cases(void) {
  Suite *s = suite_create(YELLOW "s21_is_not_equal_cases" NOCOLOR);
  TCase *tc_core = tcase_create(YELLOW "s21_is_not_equal_tc" NOCOLOR);
  tcase_add_test(tc_core, test_is_not_equal_1);
  tcase_add_test(tc_core, test_is_not_equal_2);
  tcase_add_test(tc_core, test_is_not_equal_3);
  tcase_add_test(tc_core, test_is_not_equal_4);
  tcase_add_test(tc_core, test_is_not_equal_5);
  tcase_add_test(tc_core, test_is_not_equal_6);
  tcase_add_test(tc_core, test_is_not_equal_7);
  tcase_add_test(tc_core, test_is_not_equal_8);
  tcase_add_test(tc_core, test_is_not_equal_9);
  tcase_add_test(tc_core, test_is_not_equal_10);
  tcase_add_test(tc_core, test_is_not_equal_11);
  tcase_add_test(tc_core, test_is_not_equal_12);
  tcase_add_test(tc_core, test_is_not_equal_13);
  tcase_add_test(tc_core, test_is_not_equal_14);
  tcase_add_test(tc_core, test_is_not_equal_15);
  tcase_add_test(tc_core, test_is_not_equal_16);
  tcase_add_test(tc_core, test_is_not_equal_17);
  tcase_add_test(tc_core, test_is_not_equal_18);
  tcase_add_test(tc_core, test_is_not_equal_19);
  tcase_add_test(tc_core, test_is_not_equal_20);
  tcase_add_test(tc_core, test_is_not_equal_21);
  tcase_add_test(tc_core, test_is_not_equal_22);
  tcase_add_test(tc_core, test_is_not_equal_23);
  tcase_add_test(tc_core, test_is_not_equal_24);
  tcase_add_test(tc_core, test_is_not_equal_25);
  tcase_add_test(tc_core, test_is_not_equal_26);
  tcase_add_test(tc_core, test_is_not_equal_27);
  tcase_add_test(tc_core, test_is_not_equal_28);
  tcase_add_test(tc_core, test_is_not_equal_29);
  tcase_add_test(tc_core, test_is_not_equal_30);
  tcase_add_test(tc_core, test_is_not_equal_31);
  tcase_add_test(tc_core, test_is_not_equal_32);
  tcase_add_test(tc_core, test_is_not_equal_33);
  tcase_add_test(tc_core, test_is_not_equal_34);
  tcase_add_test(tc_core, test_is_not_equal_35);
  tcase_add_test(tc_core, test_is_not_equal_36);
  tcase_add_test(tc_core, test_is_not_equal_37);
  tcase_add_test(tc_core, test_is_not_equal_38);
  tcase_add_test(tc_core, test_is_not_equal_39);
  tcase_add_test(tc_core, test_is_not_equal_40);
  tcase_add_test(tc_core, test_is_not_equal_41);
  tcase_add_test(tc_core, test_is_not_equal_42);
  tcase_add_test(tc_core, test_is_not_equal_43);
  tcase_add_test(tc_core, test_is_not_equal_44);
  tcase_add_test(tc_core, test_is_not_equal_45);
  tcase_add_test(tc_core, test_is_not_equal_46);
  tcase_add_test(tc_core, test_is_not_equal_47);
  tcase_add_test(tc_core, test_is_not_equal_48);
  tcase_add_test(tc_core, test_is_not_equal_49);
  tcase_add_test(tc_core, test_is_not_equal_50);
  tcase_add_test(tc_core, test_is_not_equal_51);
  tcase_add_test(tc_core, test_is_not_equal_52);
  tcase_add_test(tc_core, test_is_not_equal_53);
  tcase_add_test(tc_core, test_is_not_equal_54);
  tcase_add_test(tc_core, test_is_not_equal_55);
  tcase_add_test(tc_core, test_is_not_equal_56);
  tcase_add_test(tc_core, test_is_not_equal_57);
  tcase_add_test(tc_core, test_is_not_equal_58);
  tcase_add_test(tc_core, test_is_not_equal_59);
  tcase_add_test(tc_core, test_is_not_equal_60);
  tcase_add_test(tc_core, test_is_not_equal_61);
  tcase_add_test(tc_core, test_is_not_equal_62);
  tcase_add_test(tc_core, test_is_not_equal_63);
  tcase_add_test(tc_core, test_is_not_equal_64);
  tcase_add_test(tc_core, test_is_not_equal_65);
  tcase_add_test(tc_core, test_is_not_equal_66);
  tcase_add_test(tc_core, test_is_not_equal_67);
  tcase_add_test(tc_core, test_is_not_equal_68);
  tcase_add_test(tc_core, test_is_not_equal_69);
  tcase_add_test(tc_core, test_is_not_equal_70);
  tcase_add_test(tc_core, test_is_not_equal_71);
  tcase_add_test(tc_core, test_is_not_equal_72);
  tcase_add_test(tc_core, test_is_not_equal_73);
  tcase_add_test(tc_core, test_is_not_equal_74);
  tcase_add_test(tc_core, test_is_not_equal_75);
  tcase_add_test(tc_core, test_is_not_equal_76);
  tcase_add_test(tc_core, test_is_not_equal_77);
  tcase_add_test(tc_core, test_is_not_equal_78);
  tcase_add_test(tc_core, test_is_not_equal_79);
  tcase_add_test(tc_core, test_is_not_equal_80);
  tcase_add_test(tc_core, test_is_not_equal_81);
  tcase_add_test(tc_core, test_is_not_equal_82);
  tcase_add_test(tc_core, test_is_not_equal_83);
  tcase_add_test(tc_core, test_is_not_equal_84);
  tcase_add_test(tc_core, test_is_not_equal_85);
  tcase_add_test(tc_core, test_is_not_equal_86);
  tcase_add_test(tc_core, test_is_not_equal_87);
  tcase_add_test(tc_core, test_is_not_equal_88);
  tcase_add_test(tc_core, test_is_not_equal_89);
  tcase_add_test(tc_core, test_is_not_equal_90);
  tcase_add_test(tc_core, test_is_not_equal_91);
  tcase_add_test(tc_core, test_is_not_equal_92);
  tcase_add_test(tc_core, test_is_not_equal_93);
  tcase_add_test(tc_core, test_is_not_equal_94);
  tcase_add_test(tc_core, test_is_not_equal_95);
  tcase_add_test(tc_core, test_is_not_equal_96);
  tcase_add_test(tc_core, test_is_not_equal_97);
  tcase_add_test(tc_core, test_is_not_equal_98);
  tcase_add_test(tc_core, test_is_not_equal_99);
  tcase_add_test(tc_core, test_is_not_equal_100);
  tcase_add_test(tc_core, test_is_not_equal_101);
  tcase_add_test(tc_core, test_is_not_equal_102);
  tcase_add_test(tc_core, test_is_not_equal_103);
  tcase_add_test(tc_core, test_is_not_equal_104);
  tcase_add_test(tc_core, test_is_not_equal_105);
  tcase_add_test(tc_core, test_is_not_equal_106);
  tcase_add_test(tc_core, test_is_not_equal_107);
  tcase_add_test(tc_core, test_is_not_equal_108);
  tcase_add_test(tc_core, test_is_not_equal_109);
  tcase_add_test(tc_core, test_is_not_equal_110);
  tcase_add_test(tc_core, test_is_not_equal_111);
  tcase_add_test(tc_core, test_is_not_equal_112);
  tcase_add_test(tc_core, test_is_not_equal_113);
  tcase_add_test(tc_core, test_is_not_equal_114);
  tcase_add_test(tc_core, test_is_not_equal_115);
  tcase_add_test(tc_core, test_is_not_equal_116);
  tcase_add_test(tc_core, test_is_not_equal_117);
  tcase_add_test(tc_core, test_is_not_equal_118);
  tcase_add_test(tc_core, test_is_not_equal_119);
  tcase_add_test(tc_core, test_is_not_equal_120);
  tcase_add_test(tc_core, test_is_not_equal_121);
  tcase_add_test(tc_core, test_is_not_equal_122);
  tcase_add_test(tc_core, test_is_not_equal_123);
  tcase_add_test(tc_core, test_is_not_equal_124);
  tcase_add_test(tc_core, test_is_not_equal_125);
  tcase_add_test(tc_core, test_is_not_equal_126);
  tcase_add_test(tc_core, test_is_not_equal_127);
  tcase_add_test(tc_core, test_is_not_equal_128);
  tcase_add_test(tc_core, test_is_not_equal_129);
  tcase_add_test(tc_core, test_is_not_equal_130);
  tcase_add_test(tc_core, test_is_not_equal_131);
  tcase_add_test(tc_core, test_is_not_equal_132);
  tcase_add_test(tc_core, test_is_not_equal_133);
  tcase_add_test(tc_core, test_is_not_equal_134);
  tcase_add_test(tc_core, test_is_not_equal_135);
  tcase_add_test(tc_core, test_is_not_equal_136);
  tcase_add_test(tc_core, test_is_not_equal_137);
  tcase_add_test(tc_core, test_is_not_equal_138);
  tcase_add_test(tc_core, test_is_not_equal_139);
  tcase_add_test(tc_core, test_is_not_equal_140);
  tcase_add_test(tc_core, test_is_not_equal_141);
  tcase_add_test(tc_core, test_is_not_equal_142);
  tcase_add_test(tc_core, test_is_not_equal_143);
  tcase_add_test(tc_core, test_is_not_equal_144);
  tcase_add_test(tc_core, test_is_not_equal_145);
  tcase_add_test(tc_core, test_is_not_equal_146);
  tcase_add_test(tc_core, test_is_not_equal_147);
  tcase_add_test(tc_core, test_is_not_equal_148);
  tcase_add_test(tc_core, test_is_not_equal_149);
  tcase_add_test(tc_core, test_is_not_equal_150);
  tcase_add_test(tc_core, test_is_not_equal_151);
  tcase_add_test(tc_core, test_is_not_equal_152);
  tcase_add_test(tc_core, test_is_not_equal_153);
  tcase_add_test(tc_core, test_is_not_equal_154);
  tcase_add_test(tc_core, test_is_not_equal_155);
  tcase_add_test(tc_core, test_is_not_equal_156);
  tcase_add_test(tc_core, test_is_not_equal_157);
  tcase_add_test(tc_core, test_is_not_equal_158);
  tcase_add_test(tc_core, test_is_not_equal_159);
  tcase_add_test(tc_core, test_is_not_equal_160);
  tcase_add_test(tc_core, test_is_not_equal_161);
  tcase_add_test(tc_core, test_is_not_equal_162);
  tcase_add_test(tc_core, test_is_not_equal_163);
  tcase_add_test(tc_core, test_is_not_equal_164);
  tcase_add_test(tc_core, test_is_not_equal_165);
  tcase_add_test(tc_core, test_is_not_equal_166);
  tcase_add_test(tc_core, test_is_not_equal_167);
  tcase_add_test(tc_core, test_is_not_equal_168);
  tcase_add_test(tc_core, test_is_not_equal_169);
  tcase_add_test(tc_core, test_is_not_equal_170);
  tcase_add_test(tc_core, test_is_not_equal_171);
  tcase_add_test(tc_core, test_is_not_equal_172);
  tcase_add_test(tc_core, test_is_not_equal_173);
  tcase_add_test(tc_core, test_is_not_equal_174);
  tcase_add_test(tc_core, test_is_not_equal_175);
  tcase_add_test(tc_core, test_is_not_equal_176);
  tcase_add_test(tc_core, test_is_not_equal_177);
  tcase_add_test(tc_core, test_is_not_equal_178);
  tcase_add_test(tc_core, test_is_not_equal_179);
  tcase_add_test(tc_core, test_is_not_equal_180);
  tcase_add_test(tc_core, test_is_not_equal_181);
  tcase_add_test(tc_core, test_is_not_equal_182);
  tcase_add_test(tc_core, test_is_not_equal_183);
  tcase_add_test(tc_core, test_is_not_equal_184);
  tcase_add_test(tc_core, test_is_not_equal_185);
  tcase_add_test(tc_core, test_is_not_equal_186);
  tcase_add_test(tc_core, test_is_not_equal_187);
  tcase_add_test(tc_core, test_is_not_equal_188);
  tcase_add_test(tc_core, test_is_not_equal_189);
  tcase_add_test(tc_core, test_is_not_equal_190);
  tcase_add_test(tc_core, test_is_not_equal_191);
  tcase_add_test(tc_core, test_is_not_equal_192);
  tcase_add_test(tc_core, test_is_not_equal_193);
  tcase_add_test(tc_core, test_is_not_equal_194);
  tcase_add_test(tc_core, test_is_not_equal_195);
  tcase_add_test(tc_core, test_is_not_equal_196);
  tcase_add_test(tc_core, test_is_not_equal_197);
  tcase_add_test(tc_core, test_is_not_equal_198);
  tcase_add_test(tc_core, test_is_not_equal_199);
  tcase_add_test(tc_core, test_is_not_equal_200);
  tcase_add_test(tc_core, test_is_not_equal_201);
  tcase_add_test(tc_core, test_is_not_equal_202);
  tcase_add_test(tc_core, test_is_not_equal_203);
  tcase_add_test(tc_core, test_is_not_equal_204);
  tcase_add_test(tc_core, test_is_not_equal_205);
  tcase_add_test(tc_core, test_is_not_equal_206);
  tcase_add_test(tc_core, test_is_not_equal_207);
  tcase_add_test(tc_core, test_is_not_equal_208);
  tcase_add_test(tc_core, test_is_not_equal_209);
  tcase_add_test(tc_core, test_is_not_equal_210);
  tcase_add_test(tc_core, test_is_not_equal_211);
  tcase_add_test(tc_core, test_is_not_equal_212);
  tcase_add_test(tc_core, test_is_not_equal_213);
  tcase_add_test(tc_core, test_is_not_equal_214);
  tcase_add_test(tc_core, test_is_not_equal_215);
  tcase_add_test(tc_core, test_is_not_equal_216);
  tcase_add_test(tc_core, test_is_not_equal_217);
  tcase_add_test(tc_core, test_is_not_equal_218);
  tcase_add_test(tc_core, test_is_not_equal_219);
  tcase_add_test(tc_core, test_is_not_equal_220);
  tcase_add_test(tc_core, test_is_not_equal_221);
  tcase_add_test(tc_core, test_is_not_equal_222);
  tcase_add_test(tc_core, test_is_not_equal_223);
  tcase_add_test(tc_core, test_is_not_equal_224);
  tcase_add_test(tc_core, test_is_not_equal_225);
  tcase_add_test(tc_core, test_is_not_equal_226);
  tcase_add_test(tc_core, test_is_not_equal_227);
  tcase_add_test(tc_core, test_is_not_equal_228);
  tcase_add_test(tc_core, test_is_not_equal_229);
  tcase_add_test(tc_core, test_is_not_equal_230);
  tcase_add_test(tc_core, test_is_not_equal_231);
  tcase_add_test(tc_core, test_is_not_equal_232);
  tcase_add_test(tc_core, test_is_not_equal_233);
  tcase_add_test(tc_core, test_is_not_equal_234);
  tcase_add_test(tc_core, test_is_not_equal_235);
  tcase_add_test(tc_core, test_is_not_equal_236);
  tcase_add_test(tc_core, test_is_not_equal_237);
  tcase_add_test(tc_core, test_is_not_equal_238);
  tcase_add_test(tc_core, test_is_not_equal_239);
  tcase_add_test(tc_core, test_is_not_equal_240);
  tcase_add_test(tc_core, test_is_not_equal_241);
  tcase_add_test(tc_core, test_is_not_equal_242);
  tcase_add_test(tc_core, test_is_not_equal_243);
  tcase_add_test(tc_core, test_is_not_equal_244);
  tcase_add_test(tc_core, test_is_not_equal_245);
  tcase_add_test(tc_core, test_is_not_equal_246);
  tcase_add_test(tc_core, test_is_not_equal_247);
  tcase_add_test(tc_core, test_is_not_equal_248);
  tcase_add_test(tc_core, test_is_not_equal_249);
  tcase_add_test(tc_core, test_is_not_equal_250);
  tcase_add_test(tc_core, test_is_not_equal_251);
  tcase_add_test(tc_core, test_is_not_equal_252);
  tcase_add_test(tc_core, test_is_not_equal_253);
  tcase_add_test(tc_core, test_is_not_equal_254);
  tcase_add_test(tc_core, test_is_not_equal_255);
  tcase_add_test(tc_core, test_is_not_equal_256);
  tcase_add_test(tc_core, test_is_not_equal_257);
  tcase_add_test(tc_core, test_is_not_equal_258);
  tcase_add_test(tc_core, test_is_not_equal_259);
  tcase_add_test(tc_core, test_is_not_equal_260);
  tcase_add_test(tc_core, test_is_not_equal_261);
  tcase_add_test(tc_core, test_is_not_equal_262);
  tcase_add_test(tc_core, test_is_not_equal_263);
  tcase_add_test(tc_core, test_is_not_equal_264);
  tcase_add_test(tc_core, test_is_not_equal_265);
  tcase_add_test(tc_core, test_is_not_equal_266);
  tcase_add_test(tc_core, test_is_not_equal_267);
  tcase_add_test(tc_core, test_is_not_equal_268);
  tcase_add_test(tc_core, test_is_not_equal_269);
  tcase_add_test(tc_core, test_is_not_equal_270);
  tcase_add_test(tc_core, test_is_not_equal_271);
  tcase_add_test(tc_core, test_is_not_equal_272);
  tcase_add_test(tc_core, test_is_not_equal_273);
  tcase_add_test(tc_core, test_is_not_equal_274);
  tcase_add_test(tc_core, test_is_not_equal_275);
  tcase_add_test(tc_core, test_is_not_equal_276);
  tcase_add_test(tc_core, test_is_not_equal_277);
  tcase_add_test(tc_core, test_is_not_equal_278);
  tcase_add_test(tc_core, test_is_not_equal_279);
  tcase_add_test(tc_core, test_is_not_equal_280);
  tcase_add_test(tc_core, test_is_not_equal_281);
  tcase_add_test(tc_core, test_is_not_equal_282);
  tcase_add_test(tc_core, test_is_not_equal_283);
  tcase_add_test(tc_core, test_is_not_equal_284);
  tcase_add_test(tc_core, test_is_not_equal_285);
  tcase_add_test(tc_core, test_is_not_equal_286);
  tcase_add_test(tc_core, test_is_not_equal_287);
  tcase_add_test(tc_core, test_is_not_equal_288);
  tcase_add_test(tc_core, test_is_not_equal_289);
  tcase_add_test(tc_core, test_is_not_equal_290);
  tcase_add_test(tc_core, test_is_not_equal_291);
  tcase_add_test(tc_core, test_is_not_equal_292);
  tcase_add_test(tc_core, test_is_not_equal_293);
  tcase_add_test(tc_core, test_is_not_equal_294);
  tcase_add_test(tc_core, test_is_not_equal_295);
  tcase_add_test(tc_core, test_is_not_equal_296);
  tcase_add_test(tc_core, test_is_not_equal_297);
  tcase_add_test(tc_core, test_is_not_equal_298);
  tcase_add_test(tc_core, test_is_not_equal_299);
  tcase_add_test(tc_core, test_is_not_equal_300);
  tcase_add_test(tc_core, test_is_not_equal_301);
  tcase_add_test(tc_core, test_is_not_equal_302);
  tcase_add_test(tc_core, test_is_not_equal_303);
  tcase_add_test(tc_core, test_is_not_equal_304);
  tcase_add_test(tc_core, test_is_not_equal_305);
  tcase_add_test(tc_core, test_is_not_equal_306);
  tcase_add_test(tc_core, test_is_not_equal_307);
  tcase_add_test(tc_core, test_is_not_equal_308);
  tcase_add_test(tc_core, test_is_not_equal_309);
  tcase_add_test(tc_core, test_is_not_equal_310);
  tcase_add_test(tc_core, test_is_not_equal_311);
  tcase_add_test(tc_core, test_is_not_equal_312);
  tcase_add_test(tc_core, test_is_not_equal_313);
  tcase_add_test(tc_core, test_is_not_equal_314);
  tcase_add_test(tc_core, test_is_not_equal_315);
  tcase_add_test(tc_core, test_is_not_equal_316);
  tcase_add_test(tc_core, test_is_not_equal_317);
  tcase_add_test(tc_core, test_is_not_equal_318);
  tcase_add_test(tc_core, test_is_not_equal_319);
  tcase_add_test(tc_core, test_is_not_equal_320);
  tcase_add_test(tc_core, test_is_not_equal_321);
  tcase_add_test(tc_core, test_is_not_equal_322);
  tcase_add_test(tc_core, test_is_not_equal_323);
  tcase_add_test(tc_core, test_is_not_equal_324);
  tcase_add_test(tc_core, test_is_not_equal_325);
  tcase_add_test(tc_core, test_is_not_equal_326);
  tcase_add_test(tc_core, test_is_not_equal_327);
  tcase_add_test(tc_core, test_is_not_equal_328);
  tcase_add_test(tc_core, test_is_not_equal_329);
  tcase_add_test(tc_core, test_is_not_equal_330);
  tcase_add_test(tc_core, test_is_not_equal_331);
  tcase_add_test(tc_core, test_is_not_equal_332);
  tcase_add_test(tc_core, test_is_not_equal_333);
  tcase_add_test(tc_core, test_is_not_equal_334);
  tcase_add_test(tc_core, test_is_not_equal_335);
  tcase_add_test(tc_core, test_is_not_equal_336);
  tcase_add_test(tc_core, test_is_not_equal_337);
  tcase_add_test(tc_core, test_is_not_equal_338);
  tcase_add_test(tc_core, test_is_not_equal_339);
  tcase_add_test(tc_core, test_is_not_equal_340);
  tcase_add_test(tc_core, test_is_not_equal_341);
  tcase_add_test(tc_core, test_is_not_equal_342);
  tcase_add_test(tc_core, test_is_not_equal_343);
  tcase_add_test(tc_core, test_is_not_equal_344);
  tcase_add_test(tc_core, test_is_not_equal_345);
  tcase_add_test(tc_core, test_is_not_equal_346);
  tcase_add_test(tc_core, test_is_not_equal_347);
  tcase_add_test(tc_core, test_is_not_equal_348);
  tcase_add_test(tc_core, test_is_not_equal_349);
  tcase_add_test(tc_core, test_is_not_equal_350);
  tcase_add_test(tc_core, test_is_not_equal_351);
  tcase_add_test(tc_core, test_is_not_equal_352);
  tcase_add_test(tc_core, test_is_not_equal_353);
  tcase_add_test(tc_core, test_is_not_equal_354);
  tcase_add_test(tc_core, test_is_not_equal_355);
  tcase_add_test(tc_core, test_is_not_equal_356);
  tcase_add_test(tc_core, test_is_not_equal_357);
  tcase_add_test(tc_core, test_is_not_equal_358);
  tcase_add_test(tc_core, test_is_not_equal_359);
  tcase_add_test(tc_core, test_is_not_equal_360);
  tcase_add_test(tc_core, test_is_not_equal_361);
  tcase_add_test(tc_core, test_is_not_equal_362);
  tcase_add_test(tc_core, test_is_not_equal_363);
  tcase_add_test(tc_core, test_is_not_equal_364);
  tcase_add_test(tc_core, test_is_not_equal_365);
  tcase_add_test(tc_core, test_is_not_equal_366);
  tcase_add_test(tc_core, test_is_not_equal_367);
  tcase_add_test(tc_core, test_is_not_equal_368);
  tcase_add_test(tc_core, test_is_not_equal_369);
  tcase_add_test(tc_core, test_is_not_equal_370);
  tcase_add_test(tc_core, test_is_not_equal_371);
  tcase_add_test(tc_core, test_is_not_equal_372);
  tcase_add_test(tc_core, test_is_not_equal_373);
  tcase_add_test(tc_core, test_is_not_equal_374);
  tcase_add_test(tc_core, test_is_not_equal_375);
  tcase_add_test(tc_core, test_is_not_equal_376);
  tcase_add_test(tc_core, test_is_not_equal_377);
  tcase_add_test(tc_core, test_is_not_equal_378);
  tcase_add_test(tc_core, test_is_not_equal_379);
  tcase_add_test(tc_core, test_is_not_equal_380);
  tcase_add_test(tc_core, test_is_not_equal_381);
  tcase_add_test(tc_core, test_is_not_equal_382);
  tcase_add_test(tc_core, test_is_not_equal_383);
  tcase_add_test(tc_core, test_is_not_equal_384);
  tcase_add_test(tc_core, test_is_not_equal_385);
  tcase_add_test(tc_core, test_is_not_equal_386);
  tcase_add_test(tc_core, test_is_not_equal_387);
  tcase_add_test(tc_core, test_is_not_equal_388);
  tcase_add_test(tc_core, test_is_not_equal_389);
  tcase_add_test(tc_core, test_is_not_equal_390);
  tcase_add_test(tc_core, test_is_not_equal_391);
  tcase_add_test(tc_core, test_is_not_equal_392);
  tcase_add_test(tc_core, test_is_not_equal_393);
  tcase_add_test(tc_core, test_is_not_equal_394);
  tcase_add_test(tc_core, test_is_not_equal_395);
  tcase_add_test(tc_core, test_is_not_equal_396);
  tcase_add_test(tc_core, test_is_not_equal_397);
  tcase_add_test(tc_core, test_is_not_equal_398);
  tcase_add_test(tc_core, test_is_not_equal_399);
  tcase_add_test(tc_core, test_is_not_equal_400);
  tcase_add_test(tc_core, test_is_not_equal_401);
  tcase_add_test(tc_core, test_is_not_equal_402);
  tcase_add_test(tc_core, test_is_not_equal_403);
  tcase_add_test(tc_core, test_is_not_equal_404);
  tcase_add_test(tc_core, test_is_not_equal_405);
  tcase_add_test(tc_core, test_is_not_equal_406);
  tcase_add_test(tc_core, test_is_not_equal_407);
  tcase_add_test(tc_core, test_is_not_equal_408);
  tcase_add_test(tc_core, test_is_not_equal_409);
  tcase_add_test(tc_core, test_is_not_equal_410);
  tcase_add_test(tc_core, test_is_not_equal_411);
  tcase_add_test(tc_core, test_is_not_equal_412);
  tcase_add_test(tc_core, test_is_not_equal_413);
  tcase_add_test(tc_core, test_is_not_equal_414);
  tcase_add_test(tc_core, test_is_not_equal_415);
  tcase_add_test(tc_core, test_is_not_equal_416);
  tcase_add_test(tc_core, test_is_not_equal_417);
  tcase_add_test(tc_core, test_is_not_equal_418);
  tcase_add_test(tc_core, test_is_not_equal_419);
  tcase_add_test(tc_core, test_is_not_equal_420);
  tcase_add_test(tc_core, test_is_not_equal_421);
  tcase_add_test(tc_core, test_is_not_equal_422);
  tcase_add_test(tc_core, test_is_not_equal_423);
  tcase_add_test(tc_core, test_is_not_equal_424);
  tcase_add_test(tc_core, test_is_not_equal_425);
  tcase_add_test(tc_core, test_is_not_equal_426);
  tcase_add_test(tc_core, test_is_not_equal_427);
  tcase_add_test(tc_core, test_is_not_equal_428);
  tcase_add_test(tc_core, test_is_not_equal_429);
  tcase_add_test(tc_core, test_is_not_equal_430);
  tcase_add_test(tc_core, test_is_not_equal_431);
  tcase_add_test(tc_core, test_is_not_equal_432);
  tcase_add_test(tc_core, test_is_not_equal_433);
  tcase_add_test(tc_core, test_is_not_equal_434);
  tcase_add_test(tc_core, test_is_not_equal_435);
  tcase_add_test(tc_core, test_is_not_equal_436);
  tcase_add_test(tc_core, test_is_not_equal_437);
  tcase_add_test(tc_core, test_is_not_equal_438);
  tcase_add_test(tc_core, test_is_not_equal_439);
  tcase_add_test(tc_core, test_is_not_equal_440);
  tcase_add_test(tc_core, test_is_not_equal_441);
  tcase_add_test(tc_core, test_is_not_equal_442);
  tcase_add_test(tc_core, test_is_not_equal_443);
  tcase_add_test(tc_core, test_is_not_equal_444);
  tcase_add_test(tc_core, test_is_not_equal_445);
  tcase_add_test(tc_core, test_is_not_equal_446);
  tcase_add_test(tc_core, test_is_not_equal_447);
  tcase_add_test(tc_core, test_is_not_equal_448);
  tcase_add_test(tc_core, test_is_not_equal_449);
  tcase_add_test(tc_core, test_is_not_equal_450);
  tcase_add_test(tc_core, test_is_not_equal_451);
  tcase_add_test(tc_core, test_is_not_equal_452);
  tcase_add_test(tc_core, test_is_not_equal_453);
  tcase_add_test(tc_core, test_is_not_equal_454);
  tcase_add_test(tc_core, test_is_not_equal_455);
  tcase_add_test(tc_core, test_is_not_equal_456);
  tcase_add_test(tc_core, test_is_not_equal_457);
  tcase_add_test(tc_core, test_is_not_equal_458);
  tcase_add_test(tc_core, test_is_not_equal_459);
  tcase_add_test(tc_core, test_is_not_equal_460);
  tcase_add_test(tc_core, test_is_not_equal_461);
  tcase_add_test(tc_core, test_is_not_equal_462);
  tcase_add_test(tc_core, test_is_not_equal_463);
  tcase_add_test(tc_core, test_is_not_equal_464);
  tcase_add_test(tc_core, test_is_not_equal_465);
  tcase_add_test(tc_core, test_is_not_equal_466);
  tcase_add_test(tc_core, test_is_not_equal_467);
  tcase_add_test(tc_core, test_is_not_equal_468);
  tcase_add_test(tc_core, test_is_not_equal_469);
  tcase_add_test(tc_core, test_is_not_equal_470);
  tcase_add_test(tc_core, test_is_not_equal_471);
  tcase_add_test(tc_core, test_is_not_equal_472);
  tcase_add_test(tc_core, test_is_not_equal_473);
  tcase_add_test(tc_core, test_is_not_equal_474);
  tcase_add_test(tc_core, test_is_not_equal_475);
  tcase_add_test(tc_core, test_is_not_equal_476);
  tcase_add_test(tc_core, test_is_not_equal_477);
  tcase_add_test(tc_core, test_is_not_equal_478);
  tcase_add_test(tc_core, test_is_not_equal_479);
  tcase_add_test(tc_core, test_is_not_equal_480);
  tcase_add_test(tc_core, test_is_not_equal_481);
  tcase_add_test(tc_core, test_is_not_equal_482);
  tcase_add_test(tc_core, test_is_not_equal_483);
  tcase_add_test(tc_core, test_is_not_equal_484);
  tcase_add_test(tc_core, test_is_not_equal_485);
  tcase_add_test(tc_core, test_is_not_equal_486);
  tcase_add_test(tc_core, test_is_not_equal_487);
  tcase_add_test(tc_core, test_is_not_equal_488);
  tcase_add_test(tc_core, test_is_not_equal_489);
  tcase_add_test(tc_core, test_is_not_equal_490);
  tcase_add_test(tc_core, test_is_not_equal_491);
  tcase_add_test(tc_core, test_is_not_equal_492);
  tcase_add_test(tc_core, test_is_not_equal_493);
  tcase_add_test(tc_core, test_is_not_equal_494);
  tcase_add_test(tc_core, test_is_not_equal_495);
  tcase_add_test(tc_core, test_is_not_equal_496);
  tcase_add_test(tc_core, test_is_not_equal_497);
  tcase_add_test(tc_core, test_is_not_equal_498);
  tcase_add_test(tc_core, test_is_not_equal_499);
  tcase_add_test(tc_core, test_is_not_equal_500);

  suite_add_tcase(s, tc_core);
  return s;
}
