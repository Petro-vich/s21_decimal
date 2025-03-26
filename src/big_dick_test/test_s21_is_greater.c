
#include "test.h"

START_TEST(test_is_greater_1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_102) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_104) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_106) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_108) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_110) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_112) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_214) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_216) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_218) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_220) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_222) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_224) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_251) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_252) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_253) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_254) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_255) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_256) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_257) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_258) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_259) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_260) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_261) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_262) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_263) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_264) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_265) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_266) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_267) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_268) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_269) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_270) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_271) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_272) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_273) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_274) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_275) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_276) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_277) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_278) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_279) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_280) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_281) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_282) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_283) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_284) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_285) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_286) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_287) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_288) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_289) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_290) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_291) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_292) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_293) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_294) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_295) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_296) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_297) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_298) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_299) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_300) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_301) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_302) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_303) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_304) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_305) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_306) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_307) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_308) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_309) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_310) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_311) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_312) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_313) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_314) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_315) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_316) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_317) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_318) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_319) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_320) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_321) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_322) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_323) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_324) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_325) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_326) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_327) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_328) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_329) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_330) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_331) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_332) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_333) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_334) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_335) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_336) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_337) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_338) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_339) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_340) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_341) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_342) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_345) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_346) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_347) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_348) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_349) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_350) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_351) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_352) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_353) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_354) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_355) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_356) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_357) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_358) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_359) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_360) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_361) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_362) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_363) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_364) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_365) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_366) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_367) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_368) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_369) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_370) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_371) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_372) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_373) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_374) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_375) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_376) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_377) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_378) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_379) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_380) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_381) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_382) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_383) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_384) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_385) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_386) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_387) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_388) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_389) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_390) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_391) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_392) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_393) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_394) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_395) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_396) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_397) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_398) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_399) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_400) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_401) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_402) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_403) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_404) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_405) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_406) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_407) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_408) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_409) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_410) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_411) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_412) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_413) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_414) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_415) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_416) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_417) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_418) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_419) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_420) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_421) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_422) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_423) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_424) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_425) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_426) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_427) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_428) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_429) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_430) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_431) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_432) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_433) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_434) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_435) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_436) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_437) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_438) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_439) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_440) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_441) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_442) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_443) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_444) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_445) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_446) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_447) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_448) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_449) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_450) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_451) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_452) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_453) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_454) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_455) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_456) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_459) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_460) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_461) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_462) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_463) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_464) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_465) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_466) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_467) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_468) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_469) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_470) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_471) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_472) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_473) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_474) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_475) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_476) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_477) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_478) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_479) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_480) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_481) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_482) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_483) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_484) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_485) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_486) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_487) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_488) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_489) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_490) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_491) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_492) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_493) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_494) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_495) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_496) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_497) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_498) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_499) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = 1;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_greater_500) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = 0;

  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

Suite *s21_is_greater_cases(void) {
  Suite *s = suite_create(YELLOW "s21_is_greater_cases" NOCOLOR);
  TCase *tc_core = tcase_create(YELLOW "s21_is_greater_tc" NOCOLOR);
  tcase_add_test(tc_core, test_is_greater_1);
  tcase_add_test(tc_core, test_is_greater_2);
  tcase_add_test(tc_core, test_is_greater_3);
  tcase_add_test(tc_core, test_is_greater_4);
  tcase_add_test(tc_core, test_is_greater_5);
  tcase_add_test(tc_core, test_is_greater_6);
  tcase_add_test(tc_core, test_is_greater_7);
  tcase_add_test(tc_core, test_is_greater_8);
  tcase_add_test(tc_core, test_is_greater_9);
  tcase_add_test(tc_core, test_is_greater_10);
  tcase_add_test(tc_core, test_is_greater_11);
  tcase_add_test(tc_core, test_is_greater_12);
  tcase_add_test(tc_core, test_is_greater_13);
  tcase_add_test(tc_core, test_is_greater_14);
  tcase_add_test(tc_core, test_is_greater_15);
  tcase_add_test(tc_core, test_is_greater_16);
  tcase_add_test(tc_core, test_is_greater_17);
  tcase_add_test(tc_core, test_is_greater_18);
  tcase_add_test(tc_core, test_is_greater_19);
  tcase_add_test(tc_core, test_is_greater_20);
  tcase_add_test(tc_core, test_is_greater_21);
  tcase_add_test(tc_core, test_is_greater_22);
  tcase_add_test(tc_core, test_is_greater_23);
  tcase_add_test(tc_core, test_is_greater_24);
  tcase_add_test(tc_core, test_is_greater_25);
  tcase_add_test(tc_core, test_is_greater_26);
  tcase_add_test(tc_core, test_is_greater_27);
  tcase_add_test(tc_core, test_is_greater_28);
  tcase_add_test(tc_core, test_is_greater_29);
  tcase_add_test(tc_core, test_is_greater_30);
  tcase_add_test(tc_core, test_is_greater_31);
  tcase_add_test(tc_core, test_is_greater_32);
  tcase_add_test(tc_core, test_is_greater_33);
  tcase_add_test(tc_core, test_is_greater_34);
  tcase_add_test(tc_core, test_is_greater_35);
  tcase_add_test(tc_core, test_is_greater_36);
  tcase_add_test(tc_core, test_is_greater_37);
  tcase_add_test(tc_core, test_is_greater_38);
  tcase_add_test(tc_core, test_is_greater_39);
  tcase_add_test(tc_core, test_is_greater_40);
  tcase_add_test(tc_core, test_is_greater_41);
  tcase_add_test(tc_core, test_is_greater_42);
  tcase_add_test(tc_core, test_is_greater_43);
  tcase_add_test(tc_core, test_is_greater_44);
  tcase_add_test(tc_core, test_is_greater_45);
  tcase_add_test(tc_core, test_is_greater_46);
  tcase_add_test(tc_core, test_is_greater_47);
  tcase_add_test(tc_core, test_is_greater_48);
  tcase_add_test(tc_core, test_is_greater_49);
  tcase_add_test(tc_core, test_is_greater_50);
  tcase_add_test(tc_core, test_is_greater_51);
  tcase_add_test(tc_core, test_is_greater_52);
  tcase_add_test(tc_core, test_is_greater_53);
  tcase_add_test(tc_core, test_is_greater_54);
  tcase_add_test(tc_core, test_is_greater_55);
  tcase_add_test(tc_core, test_is_greater_56);
  tcase_add_test(tc_core, test_is_greater_57);
  tcase_add_test(tc_core, test_is_greater_58);
  tcase_add_test(tc_core, test_is_greater_59);
  tcase_add_test(tc_core, test_is_greater_60);
  tcase_add_test(tc_core, test_is_greater_61);
  tcase_add_test(tc_core, test_is_greater_62);
  tcase_add_test(tc_core, test_is_greater_63);
  tcase_add_test(tc_core, test_is_greater_64);
  tcase_add_test(tc_core, test_is_greater_65);
  tcase_add_test(tc_core, test_is_greater_66);
  tcase_add_test(tc_core, test_is_greater_67);
  tcase_add_test(tc_core, test_is_greater_68);
  tcase_add_test(tc_core, test_is_greater_69);
  tcase_add_test(tc_core, test_is_greater_70);
  tcase_add_test(tc_core, test_is_greater_71);
  tcase_add_test(tc_core, test_is_greater_72);
  tcase_add_test(tc_core, test_is_greater_73);
  tcase_add_test(tc_core, test_is_greater_74);
  tcase_add_test(tc_core, test_is_greater_75);
  tcase_add_test(tc_core, test_is_greater_76);
  tcase_add_test(tc_core, test_is_greater_77);
  tcase_add_test(tc_core, test_is_greater_78);
  tcase_add_test(tc_core, test_is_greater_79);
  tcase_add_test(tc_core, test_is_greater_80);
  tcase_add_test(tc_core, test_is_greater_81);
  tcase_add_test(tc_core, test_is_greater_82);
  tcase_add_test(tc_core, test_is_greater_83);
  tcase_add_test(tc_core, test_is_greater_84);
  tcase_add_test(tc_core, test_is_greater_85);
  tcase_add_test(tc_core, test_is_greater_86);
  tcase_add_test(tc_core, test_is_greater_87);
  tcase_add_test(tc_core, test_is_greater_88);
  tcase_add_test(tc_core, test_is_greater_89);
  tcase_add_test(tc_core, test_is_greater_90);
  tcase_add_test(tc_core, test_is_greater_91);
  tcase_add_test(tc_core, test_is_greater_92);
  tcase_add_test(tc_core, test_is_greater_93);
  tcase_add_test(tc_core, test_is_greater_94);
  tcase_add_test(tc_core, test_is_greater_95);
  tcase_add_test(tc_core, test_is_greater_96);
  tcase_add_test(tc_core, test_is_greater_97);
  tcase_add_test(tc_core, test_is_greater_98);
  tcase_add_test(tc_core, test_is_greater_99);
  tcase_add_test(tc_core, test_is_greater_100);
  tcase_add_test(tc_core, test_is_greater_101);
  tcase_add_test(tc_core, test_is_greater_102);
  tcase_add_test(tc_core, test_is_greater_103);
  tcase_add_test(tc_core, test_is_greater_104);
  tcase_add_test(tc_core, test_is_greater_105);
  tcase_add_test(tc_core, test_is_greater_106);
  tcase_add_test(tc_core, test_is_greater_107);
  tcase_add_test(tc_core, test_is_greater_108);
  tcase_add_test(tc_core, test_is_greater_109);
  tcase_add_test(tc_core, test_is_greater_110);
  tcase_add_test(tc_core, test_is_greater_111);
  tcase_add_test(tc_core, test_is_greater_112);
  tcase_add_test(tc_core, test_is_greater_113);
  tcase_add_test(tc_core, test_is_greater_114);
  tcase_add_test(tc_core, test_is_greater_117);
  tcase_add_test(tc_core, test_is_greater_118);
  tcase_add_test(tc_core, test_is_greater_119);
  tcase_add_test(tc_core, test_is_greater_120);
  tcase_add_test(tc_core, test_is_greater_121);
  tcase_add_test(tc_core, test_is_greater_122);
  tcase_add_test(tc_core, test_is_greater_123);
  tcase_add_test(tc_core, test_is_greater_124);
  tcase_add_test(tc_core, test_is_greater_125);
  tcase_add_test(tc_core, test_is_greater_126);
  tcase_add_test(tc_core, test_is_greater_127);
  tcase_add_test(tc_core, test_is_greater_128);
  tcase_add_test(tc_core, test_is_greater_129);
  tcase_add_test(tc_core, test_is_greater_130);
  tcase_add_test(tc_core, test_is_greater_131);
  tcase_add_test(tc_core, test_is_greater_132);
  tcase_add_test(tc_core, test_is_greater_133);
  tcase_add_test(tc_core, test_is_greater_134);
  tcase_add_test(tc_core, test_is_greater_135);
  tcase_add_test(tc_core, test_is_greater_136);
  tcase_add_test(tc_core, test_is_greater_137);
  tcase_add_test(tc_core, test_is_greater_138);
  tcase_add_test(tc_core, test_is_greater_139);
  tcase_add_test(tc_core, test_is_greater_140);
  tcase_add_test(tc_core, test_is_greater_141);
  tcase_add_test(tc_core, test_is_greater_142);
  tcase_add_test(tc_core, test_is_greater_143);
  tcase_add_test(tc_core, test_is_greater_144);
  tcase_add_test(tc_core, test_is_greater_145);
  tcase_add_test(tc_core, test_is_greater_146);
  tcase_add_test(tc_core, test_is_greater_147);
  tcase_add_test(tc_core, test_is_greater_148);
  tcase_add_test(tc_core, test_is_greater_149);
  tcase_add_test(tc_core, test_is_greater_150);
  tcase_add_test(tc_core, test_is_greater_151);
  tcase_add_test(tc_core, test_is_greater_152);
  tcase_add_test(tc_core, test_is_greater_153);
  tcase_add_test(tc_core, test_is_greater_154);
  tcase_add_test(tc_core, test_is_greater_155);
  tcase_add_test(tc_core, test_is_greater_156);
  tcase_add_test(tc_core, test_is_greater_157);
  tcase_add_test(tc_core, test_is_greater_158);
  tcase_add_test(tc_core, test_is_greater_159);
  tcase_add_test(tc_core, test_is_greater_160);
  tcase_add_test(tc_core, test_is_greater_161);
  tcase_add_test(tc_core, test_is_greater_162);
  tcase_add_test(tc_core, test_is_greater_163);
  tcase_add_test(tc_core, test_is_greater_164);
  tcase_add_test(tc_core, test_is_greater_165);
  tcase_add_test(tc_core, test_is_greater_166);
  tcase_add_test(tc_core, test_is_greater_167);
  tcase_add_test(tc_core, test_is_greater_168);
  tcase_add_test(tc_core, test_is_greater_169);
  tcase_add_test(tc_core, test_is_greater_170);
  tcase_add_test(tc_core, test_is_greater_171);
  tcase_add_test(tc_core, test_is_greater_172);
  tcase_add_test(tc_core, test_is_greater_173);
  tcase_add_test(tc_core, test_is_greater_174);
  tcase_add_test(tc_core, test_is_greater_175);
  tcase_add_test(tc_core, test_is_greater_176);
  tcase_add_test(tc_core, test_is_greater_177);
  tcase_add_test(tc_core, test_is_greater_178);
  tcase_add_test(tc_core, test_is_greater_179);
  tcase_add_test(tc_core, test_is_greater_180);
  tcase_add_test(tc_core, test_is_greater_181);
  tcase_add_test(tc_core, test_is_greater_182);
  tcase_add_test(tc_core, test_is_greater_183);
  tcase_add_test(tc_core, test_is_greater_184);
  tcase_add_test(tc_core, test_is_greater_185);
  tcase_add_test(tc_core, test_is_greater_186);
  tcase_add_test(tc_core, test_is_greater_187);
  tcase_add_test(tc_core, test_is_greater_188);
  tcase_add_test(tc_core, test_is_greater_189);
  tcase_add_test(tc_core, test_is_greater_190);
  tcase_add_test(tc_core, test_is_greater_191);
  tcase_add_test(tc_core, test_is_greater_192);
  tcase_add_test(tc_core, test_is_greater_193);
  tcase_add_test(tc_core, test_is_greater_194);
  tcase_add_test(tc_core, test_is_greater_195);
  tcase_add_test(tc_core, test_is_greater_196);
  tcase_add_test(tc_core, test_is_greater_197);
  tcase_add_test(tc_core, test_is_greater_198);
  tcase_add_test(tc_core, test_is_greater_199);
  tcase_add_test(tc_core, test_is_greater_200);
  tcase_add_test(tc_core, test_is_greater_201);
  tcase_add_test(tc_core, test_is_greater_202);
  tcase_add_test(tc_core, test_is_greater_203);
  tcase_add_test(tc_core, test_is_greater_204);
  tcase_add_test(tc_core, test_is_greater_205);
  tcase_add_test(tc_core, test_is_greater_206);
  tcase_add_test(tc_core, test_is_greater_207);
  tcase_add_test(tc_core, test_is_greater_208);
  tcase_add_test(tc_core, test_is_greater_209);
  tcase_add_test(tc_core, test_is_greater_210);
  tcase_add_test(tc_core, test_is_greater_211);
  tcase_add_test(tc_core, test_is_greater_212);
  tcase_add_test(tc_core, test_is_greater_213);
  tcase_add_test(tc_core, test_is_greater_214);
  tcase_add_test(tc_core, test_is_greater_215);
  tcase_add_test(tc_core, test_is_greater_216);
  tcase_add_test(tc_core, test_is_greater_217);
  tcase_add_test(tc_core, test_is_greater_218);
  tcase_add_test(tc_core, test_is_greater_219);
  tcase_add_test(tc_core, test_is_greater_220);
  tcase_add_test(tc_core, test_is_greater_221);
  tcase_add_test(tc_core, test_is_greater_222);
  tcase_add_test(tc_core, test_is_greater_223);
  tcase_add_test(tc_core, test_is_greater_224);
  tcase_add_test(tc_core, test_is_greater_225);
  tcase_add_test(tc_core, test_is_greater_226);
  tcase_add_test(tc_core, test_is_greater_227);
  tcase_add_test(tc_core, test_is_greater_228);
  tcase_add_test(tc_core, test_is_greater_231);
  tcase_add_test(tc_core, test_is_greater_232);
  tcase_add_test(tc_core, test_is_greater_233);
  tcase_add_test(tc_core, test_is_greater_234);
  tcase_add_test(tc_core, test_is_greater_235);
  tcase_add_test(tc_core, test_is_greater_236);
  tcase_add_test(tc_core, test_is_greater_237);
  tcase_add_test(tc_core, test_is_greater_238);
  tcase_add_test(tc_core, test_is_greater_239);
  tcase_add_test(tc_core, test_is_greater_240);
  tcase_add_test(tc_core, test_is_greater_241);
  tcase_add_test(tc_core, test_is_greater_242);
  tcase_add_test(tc_core, test_is_greater_243);
  tcase_add_test(tc_core, test_is_greater_244);
  tcase_add_test(tc_core, test_is_greater_245);
  tcase_add_test(tc_core, test_is_greater_246);
  tcase_add_test(tc_core, test_is_greater_247);
  tcase_add_test(tc_core, test_is_greater_248);
  tcase_add_test(tc_core, test_is_greater_249);
  tcase_add_test(tc_core, test_is_greater_250);
  tcase_add_test(tc_core, test_is_greater_251);
  tcase_add_test(tc_core, test_is_greater_252);
  tcase_add_test(tc_core, test_is_greater_253);
  tcase_add_test(tc_core, test_is_greater_254);
  tcase_add_test(tc_core, test_is_greater_255);
  tcase_add_test(tc_core, test_is_greater_256);
  tcase_add_test(tc_core, test_is_greater_257);
  tcase_add_test(tc_core, test_is_greater_258);
  tcase_add_test(tc_core, test_is_greater_259);
  tcase_add_test(tc_core, test_is_greater_260);
  tcase_add_test(tc_core, test_is_greater_261);
  tcase_add_test(tc_core, test_is_greater_262);
  tcase_add_test(tc_core, test_is_greater_263);
  tcase_add_test(tc_core, test_is_greater_264);
  tcase_add_test(tc_core, test_is_greater_265);
  tcase_add_test(tc_core, test_is_greater_266);
  tcase_add_test(tc_core, test_is_greater_267);
  tcase_add_test(tc_core, test_is_greater_268);
  tcase_add_test(tc_core, test_is_greater_269);
  tcase_add_test(tc_core, test_is_greater_270);
  tcase_add_test(tc_core, test_is_greater_271);
  tcase_add_test(tc_core, test_is_greater_272);
  tcase_add_test(tc_core, test_is_greater_273);
  tcase_add_test(tc_core, test_is_greater_274);
  tcase_add_test(tc_core, test_is_greater_275);
  tcase_add_test(tc_core, test_is_greater_276);
  tcase_add_test(tc_core, test_is_greater_277);
  tcase_add_test(tc_core, test_is_greater_278);
  tcase_add_test(tc_core, test_is_greater_279);
  tcase_add_test(tc_core, test_is_greater_280);
  tcase_add_test(tc_core, test_is_greater_281);
  tcase_add_test(tc_core, test_is_greater_282);
  tcase_add_test(tc_core, test_is_greater_283);
  tcase_add_test(tc_core, test_is_greater_284);
  tcase_add_test(tc_core, test_is_greater_285);
  tcase_add_test(tc_core, test_is_greater_286);
  tcase_add_test(tc_core, test_is_greater_287);
  tcase_add_test(tc_core, test_is_greater_288);
  tcase_add_test(tc_core, test_is_greater_289);
  tcase_add_test(tc_core, test_is_greater_290);
  tcase_add_test(tc_core, test_is_greater_291);
  tcase_add_test(tc_core, test_is_greater_292);
  tcase_add_test(tc_core, test_is_greater_293);
  tcase_add_test(tc_core, test_is_greater_294);
  tcase_add_test(tc_core, test_is_greater_295);
  tcase_add_test(tc_core, test_is_greater_296);
  tcase_add_test(tc_core, test_is_greater_297);
  tcase_add_test(tc_core, test_is_greater_298);
  tcase_add_test(tc_core, test_is_greater_299);
  tcase_add_test(tc_core, test_is_greater_300);
  tcase_add_test(tc_core, test_is_greater_301);
  tcase_add_test(tc_core, test_is_greater_302);
  tcase_add_test(tc_core, test_is_greater_303);
  tcase_add_test(tc_core, test_is_greater_304);
  tcase_add_test(tc_core, test_is_greater_305);
  tcase_add_test(tc_core, test_is_greater_306);
  tcase_add_test(tc_core, test_is_greater_307);
  tcase_add_test(tc_core, test_is_greater_308);
  tcase_add_test(tc_core, test_is_greater_309);
  tcase_add_test(tc_core, test_is_greater_310);
  tcase_add_test(tc_core, test_is_greater_311);
  tcase_add_test(tc_core, test_is_greater_312);
  tcase_add_test(tc_core, test_is_greater_313);
  tcase_add_test(tc_core, test_is_greater_314);
  tcase_add_test(tc_core, test_is_greater_315);
  tcase_add_test(tc_core, test_is_greater_316);
  tcase_add_test(tc_core, test_is_greater_317);
  tcase_add_test(tc_core, test_is_greater_318);
  tcase_add_test(tc_core, test_is_greater_319);
  tcase_add_test(tc_core, test_is_greater_320);
  tcase_add_test(tc_core, test_is_greater_321);
  tcase_add_test(tc_core, test_is_greater_322);
  tcase_add_test(tc_core, test_is_greater_323);
  tcase_add_test(tc_core, test_is_greater_324);
  tcase_add_test(tc_core, test_is_greater_325);
  tcase_add_test(tc_core, test_is_greater_326);
  tcase_add_test(tc_core, test_is_greater_327);
  tcase_add_test(tc_core, test_is_greater_328);
  tcase_add_test(tc_core, test_is_greater_329);
  tcase_add_test(tc_core, test_is_greater_330);
  tcase_add_test(tc_core, test_is_greater_331);
  tcase_add_test(tc_core, test_is_greater_332);
  tcase_add_test(tc_core, test_is_greater_333);
  tcase_add_test(tc_core, test_is_greater_334);
  tcase_add_test(tc_core, test_is_greater_335);
  tcase_add_test(tc_core, test_is_greater_336);
  tcase_add_test(tc_core, test_is_greater_337);
  tcase_add_test(tc_core, test_is_greater_338);
  tcase_add_test(tc_core, test_is_greater_339);
  tcase_add_test(tc_core, test_is_greater_340);
  tcase_add_test(tc_core, test_is_greater_341);
  tcase_add_test(tc_core, test_is_greater_342);
  tcase_add_test(tc_core, test_is_greater_345);
  tcase_add_test(tc_core, test_is_greater_346);
  tcase_add_test(tc_core, test_is_greater_347);
  tcase_add_test(tc_core, test_is_greater_348);
  tcase_add_test(tc_core, test_is_greater_349);
  tcase_add_test(tc_core, test_is_greater_350);
  tcase_add_test(tc_core, test_is_greater_351);
  tcase_add_test(tc_core, test_is_greater_352);
  tcase_add_test(tc_core, test_is_greater_353);
  tcase_add_test(tc_core, test_is_greater_354);
  tcase_add_test(tc_core, test_is_greater_355);
  tcase_add_test(tc_core, test_is_greater_356);
  tcase_add_test(tc_core, test_is_greater_357);
  tcase_add_test(tc_core, test_is_greater_358);
  tcase_add_test(tc_core, test_is_greater_359);
  tcase_add_test(tc_core, test_is_greater_360);
  tcase_add_test(tc_core, test_is_greater_361);
  tcase_add_test(tc_core, test_is_greater_362);
  tcase_add_test(tc_core, test_is_greater_363);
  tcase_add_test(tc_core, test_is_greater_364);
  tcase_add_test(tc_core, test_is_greater_365);
  tcase_add_test(tc_core, test_is_greater_366);
  tcase_add_test(tc_core, test_is_greater_367);
  tcase_add_test(tc_core, test_is_greater_368);
  tcase_add_test(tc_core, test_is_greater_369);
  tcase_add_test(tc_core, test_is_greater_370);
  tcase_add_test(tc_core, test_is_greater_371);
  tcase_add_test(tc_core, test_is_greater_372);
  tcase_add_test(tc_core, test_is_greater_373);
  tcase_add_test(tc_core, test_is_greater_374);
  tcase_add_test(tc_core, test_is_greater_375);
  tcase_add_test(tc_core, test_is_greater_376);
  tcase_add_test(tc_core, test_is_greater_377);
  tcase_add_test(tc_core, test_is_greater_378);
  tcase_add_test(tc_core, test_is_greater_379);
  tcase_add_test(tc_core, test_is_greater_380);
  tcase_add_test(tc_core, test_is_greater_381);
  tcase_add_test(tc_core, test_is_greater_382);
  tcase_add_test(tc_core, test_is_greater_383);
  tcase_add_test(tc_core, test_is_greater_384);
  tcase_add_test(tc_core, test_is_greater_385);
  tcase_add_test(tc_core, test_is_greater_386);
  tcase_add_test(tc_core, test_is_greater_387);
  tcase_add_test(tc_core, test_is_greater_388);
  tcase_add_test(tc_core, test_is_greater_389);
  tcase_add_test(tc_core, test_is_greater_390);
  tcase_add_test(tc_core, test_is_greater_391);
  tcase_add_test(tc_core, test_is_greater_392);
  tcase_add_test(tc_core, test_is_greater_393);
  tcase_add_test(tc_core, test_is_greater_394);
  tcase_add_test(tc_core, test_is_greater_395);
  tcase_add_test(tc_core, test_is_greater_396);
  tcase_add_test(tc_core, test_is_greater_397);
  tcase_add_test(tc_core, test_is_greater_398);
  tcase_add_test(tc_core, test_is_greater_399);
  tcase_add_test(tc_core, test_is_greater_400);
  tcase_add_test(tc_core, test_is_greater_401);
  tcase_add_test(tc_core, test_is_greater_402);
  tcase_add_test(tc_core, test_is_greater_403);
  tcase_add_test(tc_core, test_is_greater_404);
  tcase_add_test(tc_core, test_is_greater_405);
  tcase_add_test(tc_core, test_is_greater_406);
  tcase_add_test(tc_core, test_is_greater_407);
  tcase_add_test(tc_core, test_is_greater_408);
  tcase_add_test(tc_core, test_is_greater_409);
  tcase_add_test(tc_core, test_is_greater_410);
  tcase_add_test(tc_core, test_is_greater_411);
  tcase_add_test(tc_core, test_is_greater_412);
  tcase_add_test(tc_core, test_is_greater_413);
  tcase_add_test(tc_core, test_is_greater_414);
  tcase_add_test(tc_core, test_is_greater_415);
  tcase_add_test(tc_core, test_is_greater_416);
  tcase_add_test(tc_core, test_is_greater_417);
  tcase_add_test(tc_core, test_is_greater_418);
  tcase_add_test(tc_core, test_is_greater_419);
  tcase_add_test(tc_core, test_is_greater_420);
  tcase_add_test(tc_core, test_is_greater_421);
  tcase_add_test(tc_core, test_is_greater_422);
  tcase_add_test(tc_core, test_is_greater_423);
  tcase_add_test(tc_core, test_is_greater_424);
  tcase_add_test(tc_core, test_is_greater_425);
  tcase_add_test(tc_core, test_is_greater_426);
  tcase_add_test(tc_core, test_is_greater_427);
  tcase_add_test(tc_core, test_is_greater_428);
  tcase_add_test(tc_core, test_is_greater_429);
  tcase_add_test(tc_core, test_is_greater_430);
  tcase_add_test(tc_core, test_is_greater_431);
  tcase_add_test(tc_core, test_is_greater_432);
  tcase_add_test(tc_core, test_is_greater_433);
  tcase_add_test(tc_core, test_is_greater_434);
  tcase_add_test(tc_core, test_is_greater_435);
  tcase_add_test(tc_core, test_is_greater_436);
  tcase_add_test(tc_core, test_is_greater_437);
  tcase_add_test(tc_core, test_is_greater_438);
  tcase_add_test(tc_core, test_is_greater_439);
  tcase_add_test(tc_core, test_is_greater_440);
  tcase_add_test(tc_core, test_is_greater_441);
  tcase_add_test(tc_core, test_is_greater_442);
  tcase_add_test(tc_core, test_is_greater_443);
  tcase_add_test(tc_core, test_is_greater_444);
  tcase_add_test(tc_core, test_is_greater_445);
  tcase_add_test(tc_core, test_is_greater_446);
  tcase_add_test(tc_core, test_is_greater_447);
  tcase_add_test(tc_core, test_is_greater_448);
  tcase_add_test(tc_core, test_is_greater_449);
  tcase_add_test(tc_core, test_is_greater_450);
  tcase_add_test(tc_core, test_is_greater_451);
  tcase_add_test(tc_core, test_is_greater_452);
  tcase_add_test(tc_core, test_is_greater_453);
  tcase_add_test(tc_core, test_is_greater_454);
  tcase_add_test(tc_core, test_is_greater_455);
  tcase_add_test(tc_core, test_is_greater_456);
  tcase_add_test(tc_core, test_is_greater_459);
  tcase_add_test(tc_core, test_is_greater_460);
  tcase_add_test(tc_core, test_is_greater_461);
  tcase_add_test(tc_core, test_is_greater_462);
  tcase_add_test(tc_core, test_is_greater_463);
  tcase_add_test(tc_core, test_is_greater_464);
  tcase_add_test(tc_core, test_is_greater_465);
  tcase_add_test(tc_core, test_is_greater_466);
  tcase_add_test(tc_core, test_is_greater_467);
  tcase_add_test(tc_core, test_is_greater_468);
  tcase_add_test(tc_core, test_is_greater_469);
  tcase_add_test(tc_core, test_is_greater_470);
  tcase_add_test(tc_core, test_is_greater_471);
  tcase_add_test(tc_core, test_is_greater_472);
  tcase_add_test(tc_core, test_is_greater_473);
  tcase_add_test(tc_core, test_is_greater_474);
  tcase_add_test(tc_core, test_is_greater_475);
  tcase_add_test(tc_core, test_is_greater_476);
  tcase_add_test(tc_core, test_is_greater_477);
  tcase_add_test(tc_core, test_is_greater_478);
  tcase_add_test(tc_core, test_is_greater_479);
  tcase_add_test(tc_core, test_is_greater_480);
  tcase_add_test(tc_core, test_is_greater_481);
  tcase_add_test(tc_core, test_is_greater_482);
  tcase_add_test(tc_core, test_is_greater_483);
  tcase_add_test(tc_core, test_is_greater_484);
  tcase_add_test(tc_core, test_is_greater_485);
  tcase_add_test(tc_core, test_is_greater_486);
  tcase_add_test(tc_core, test_is_greater_487);
  tcase_add_test(tc_core, test_is_greater_488);
  tcase_add_test(tc_core, test_is_greater_489);
  tcase_add_test(tc_core, test_is_greater_490);
  tcase_add_test(tc_core, test_is_greater_491);
  tcase_add_test(tc_core, test_is_greater_492);
  tcase_add_test(tc_core, test_is_greater_493);
  tcase_add_test(tc_core, test_is_greater_494);
  tcase_add_test(tc_core, test_is_greater_495);
  tcase_add_test(tc_core, test_is_greater_496);
  tcase_add_test(tc_core, test_is_greater_497);
  tcase_add_test(tc_core, test_is_greater_498);
  tcase_add_test(tc_core, test_is_greater_499);
  tcase_add_test(tc_core, test_is_greater_500);

  suite_add_tcase(s, tc_core);
  return s;
}
