
#include "test.h"

START_TEST(test_negate_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok4) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok5) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // -792281625142643375935439503.35
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok6) {
  // -792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // 792281625142643375935439503.35
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok7) {
  // 79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // -79228162514264337593543950.335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok8) {
  // -79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // 79228162514264337593543950.335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok9) {
  // 7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  // -7922816251426433759354395.0335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok10) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // 7922816251426433759354395.0335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok11) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // -792281625142643375935439.50335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok12) {
  // -792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // 792281625142643375935439.50335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok13) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // -79228162514264337593543.950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok14) {
  // -79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // 79228162514264337593543.950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok15) {
  // 7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // -7922816251426433759354.3950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok16) {
  // -7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // 7922816251426433759354.3950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok17) {
  // 792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // -792281625142643375935.43950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok18) {
  // -792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // 792281625142643375935.43950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok19) {
  // 79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // -79228162514264337593.543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok20) {
  // -79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // 79228162514264337593.543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok21) {
  // 7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // -7922816251426433759.3543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok22) {
  // -7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // 7922816251426433759.3543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok23) {
  // 792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // -792281625142643375.93543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok24) {
  // -792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // 792281625142643375.93543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok25) {
  // 79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // -79228162514264337.593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok26) {
  // -79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // 79228162514264337.593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok27) {
  // 7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // -7922816251426433.7593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok28) {
  // -7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // 7922816251426433.7593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok29) {
  // 792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // -792281625142643.37593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok30) {
  // -792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // 792281625142643.37593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok31) {
  // 79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // -79228162514264.337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok32) {
  // -79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // 79228162514264.337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok33) {
  // 7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // -7922816251426.4337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok34) {
  // -7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // 7922816251426.4337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok35) {
  // 792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // -792281625142.64337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok36) {
  // -792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // 792281625142.64337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok37) {
  // 79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // -79228162514.264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok38) {
  // -79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // 79228162514.264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok39) {
  // 7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // -7922816251.4264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok40) {
  // -7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // 7922816251.4264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok41) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // -792281625.14264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok42) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // 792281625.14264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok43) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // -79228162.514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok44) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // 79228162.514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok45) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // -7922816.2514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok46) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // 7922816.2514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok47) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // -792281.62514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok48) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // 792281.62514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok49) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // -79228.162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok50) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // 79228.162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok51) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // -7922.8162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok52) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // 7922.8162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok53) {
  // 792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // -792.28162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok54) {
  // -792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // 792.28162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok55) {
  // 79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // -79.228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok56) {
  // -79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // 79.228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok57) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok58) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok59) {
  // 79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok60) {
  // -79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok61) {
  // 7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354395033.4
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok62) {
  // -7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395033.4
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok63) {
  // 792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // -792281625142643375935439503.34
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok64) {
  // -792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // 792281625142643375935439503.34
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok65) {
  // 79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // -79228162514264337593543950.334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok66) {
  // -79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // 79228162514264337593543950.334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok67) {
  // 7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  // -7922816251426433759354395.0334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok68) {
  // -7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // 7922816251426433759354395.0334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok69) {
  // 792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // -792281625142643375935439.50334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok70) {
  // -792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // 792281625142643375935439.50334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok71) {
  // 79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // -79228162514264337593543.950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok72) {
  // -79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // 79228162514264337593543.950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok73) {
  // 7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // -7922816251426433759354.3950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok74) {
  // -7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // 7922816251426433759354.3950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok75) {
  // 792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // -792281625142643375935.43950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok76) {
  // -792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // 792281625142643375935.43950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok77) {
  // 79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // -79228162514264337593.543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok78) {
  // -79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // 79228162514264337593.543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok79) {
  // 7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // -7922816251426433759.3543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok80) {
  // -7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // 7922816251426433759.3543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok81) {
  // 792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // -792281625142643375.93543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok82) {
  // -792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // 792281625142643375.93543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok83) {
  // 79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // -79228162514264337.593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok84) {
  // -79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // 79228162514264337.593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok85) {
  // 7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // -7922816251426433.7593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok86) {
  // -7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // 7922816251426433.7593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok87) {
  // 792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // -792281625142643.37593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok88) {
  // -792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // 792281625142643.37593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok89) {
  // 79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // -79228162514264.337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok90) {
  // -79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // 79228162514264.337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok91) {
  // 7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // -7922816251426.4337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok92) {
  // -7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // 7922816251426.4337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok93) {
  // 792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // -792281625142.64337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok94) {
  // -792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // 792281625142.64337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok95) {
  // 79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // -79228162514.264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok96) {
  // -79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // 79228162514.264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok97) {
  // 7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // -7922816251.4264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok98) {
  // -7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // 7922816251.4264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok99) {
  // 792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // -792281625.14264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok100) {
  // -792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // 792281625.14264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok101) {
  // 79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // -79228162.514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok102) {
  // -79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // 79228162.514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok103) {
  // 7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // -7922816.2514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok104) {
  // -7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // 7922816.2514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok105) {
  // 792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // -792281.62514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok106) {
  // -792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // 792281.62514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok107) {
  // 79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // -79228.162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok108) {
  // -79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // 79228.162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok109) {
  // 7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // -7922.8162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok110) {
  // -7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // 7922.8162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok111) {
  // 792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // -792.28162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok112) {
  // -792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // 792.28162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok113) {
  // 79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // -79.228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok114) {
  // -79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // 79.228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok115) {
  // 7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok116) {
  // -7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok117) {
  // 52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok118) {
  // -52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok119) {
  // 5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok120) {
  // -5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok121) {
  // 5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // -5281877500950955.8395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok122) {
  // -5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // 5281877500950955.8395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok123) {
  // 5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818775009509558395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok124) {
  // -5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818775009509558395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok125) {
  // 52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok126) {
  // -52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok127) {
  // 5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -5281877500950955839283265536.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok128) {
  // -5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 5281877500950955839283265536.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok129) {
  // 5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // -5281877500950955.8392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok130) {
  // -5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // 5281877500950955.8392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok131) {
  // 5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok132) {
  // -5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok133) {
  // 52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};
  // -52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok134) {
  // -52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};
  // 52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok135) {
  // 5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};
  // -5281877499721172901608624401.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok136) {
  // -5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};
  // 5281877499721172901608624401.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok137) {
  // 5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0xD0000}};
  // -5281877499721172.9016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok138) {
  // -5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // 5281877499721172.9016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok139) {
  // 5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok140) {
  // -5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok141) {
  // 52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};
  // -52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok142) {
  // -52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};
  // 52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok143) {
  // 5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};
  // -5281877499721172901322293248.0
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok144) {
  // -5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};
  // 5281877499721172901322293248.0
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok145) {
  // 5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0xD0000}};
  // -5281877499721172.9013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok146) {
  // -5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // 5281877499721172.9013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok147) {
  // 5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok148) {
  // -5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok149) {
  // 12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};
  // -12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok150) {
  // -12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};
  // 12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok151) {
  // 1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};
  // -1229782938247303441.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok152) {
  // -1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};
  // 1229782938247303441.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok153) {
  // 122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
  // -122978293.82473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok154) {
  // -122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // 122978293.82473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok155) {
  // 1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -1.2297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok156) {
  // -1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 1.2297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok157) {
  // 12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};
  // -12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok158) {
  // -12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};
  // 12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok159) {
  // 1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};
  // -1229782937960972288.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok160) {
  // -1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};
  // 1229782937960972288.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok161) {
  // 122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};
  // -122978293.79609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok162) {
  // -122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // 122978293.79609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok163) {
  // 1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};
  // -1.2297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok164) {
  // -1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 1.2297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok165) {
  // 2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};
  // -2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok166) {
  // -2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};
  // 2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok167) {
  // 286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};
  // -286331153.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok168) {
  // -286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};
  // 286331153.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok169) {
  // 286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};
  // -286331.1530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok170) {
  // -286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};
  // 286331.1530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok171) {
  // 2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};
  // -2.863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok172) {
  // -2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};
  // 2.863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok173) {
  // 26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26409387504754779197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok174) {
  // -26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok175) {
  // 2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};
  // -2640938750475477919784798344.5
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok176) {
  // -2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80010000}};
  // 2640938750475477919784798344.5
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok177) {
  // 2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0xD0000}};
  // -2640938750475477.9197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok178) {
  // -2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x800D0000}};
  // 2640938750475477.9197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok179) {
  // 2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};
  // -2.6409387504754779197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok180) {
  // -2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};
  // 2.6409387504754779197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok181) {
  // 26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x0}};
  // -26409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok182) {
  // -26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok183) {
  // 2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x10000}};
  // -2640938750475477919641632768.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok184) {
  // -2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80010000}};
  // 2640938750475477919641632768.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok185) {
  // 2640938750475477.9196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0xD0000}};
  // -2640938750475477.9196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok186) {
  // -2640938750475477.9196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x800D0000}};
  // 2640938750475477.9196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok187) {
  // 2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};
  // -2.6409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok188) {
  // -2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};
  // 2.6409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok189) {
  // 26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok190) {
  // -26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok191) {
  // 2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x10000}};
  // -2640938749860586450804312200.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok192) {
  // -2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80010000}};
  // 2640938749860586450804312200.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok193) {
  // 2640938749860586.4508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0xD0000}};
  // -2640938749860586.4508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok194) {
  // -2640938749860586.4508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x800D0000}};
  // 2640938749860586.4508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok195) {
  // 2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};
  // -2.6409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok196) {
  // -2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};
  // 2.6409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok197) {
  // 26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x0}};
  // -26409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok198) {
  // -26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80000000}};
  // 26409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok199) {
  // 2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x10000}};
  // -2640938749860586450661146624.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok200) {
  // -2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80010000}};
  // 2640938749860586450661146624.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok201) {
  // 2640938749860586.4506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0xD0000}};
  // -2640938749860586.4506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok202) {
  // -2640938749860586.4506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x800D0000}};
  // 2640938749860586.4506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok203) {
  // 2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x1C0000}};
  // -2.6409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok204) {
  // -2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x801C0000}};
  // 2.6409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok205) {
  // 6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -6148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok206) {
  // -6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 6148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok207) {
  // 614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x10000}};
  // -614891469123651720.5
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok208) {
  // -614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80010000}};
  // 614891469123651720.5
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok209) {
  // 6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0xC0000}};
  // -6148914.691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok210) {
  // -6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};
  // 6148914.691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok211) {
  // 6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x120000}};
  // -6.148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok212) {
  // -6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80120000}};
  // 6.148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok213) {
  // 6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x0}};
  // -6148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok214) {
  // -6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 6148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok215) {
  // 614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x10000}};
  // -614891468980486144.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok216) {
  // -614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80010000}};
  // 614891468980486144.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok217) {
  // 6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0xC0000}};
  // -6148914.689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok218) {
  // -6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x800C0000}};
  // 6148914.689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok219) {
  // 6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x120000}};
  // -6.148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok220) {
  // -6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80120000}};
  // 6.148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok221) {
  // 1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x0}};
  // -1431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok222) {
  // -1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 1431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok223) {
  // 143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x10000}};
  // -143165576.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok224) {
  // -143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80010000}};
  // 143165576.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok225) {
  // 143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x40000}};
  // -143165.5765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok226) {
  // -143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80040000}};
  // 143165.5765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok227) {
  // 1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x90000}};
  // -1.431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok228) {
  // -1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // 1.431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok229) {
  // 18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x0}};
  // -18446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok230) {
  // -18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000000}};
  // 18446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok231) {
  // 1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x10000}};
  // -1844674407800451891.3
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok232) {
  // -1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80010000}};
  // 1844674407800451891.3
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok233) {
  // 184467440780.04518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000}};
  // -184467440780.04518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok234) {
  // -184467440780.04518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80080000}};
  // 184467440780.04518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok235) {
  // 1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x130000}};
  // -1.8446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok236) {
  // -1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80130000}};
  // 1.8446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok237) {
  // 18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x0}};
  // -18446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok238) {
  // -18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80000000}};
  // 18446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok239) {
  // 1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x10000}};
  // -1844674407800451891.2
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok240) {
  // -1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80010000}};
  // 1844674407800451891.2
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok241) {
  // 18446744078.004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x90000}};
  // -18446744078.004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok242) {
  // -18446744078.004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80090000}};
  // 18446744078.004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok243) {
  // 1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x130000}};
  // -1.8446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok244) {
  // -1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80130000}};
  // 1.8446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok245) {
  // 18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x0}};
  // -18446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok246) {
  // -18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80000000}};
  // 18446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok247) {
  // 1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x10000}};
  // -1844674407370955161.7
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok248) {
  // -1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80010000}};
  // 1844674407370955161.7
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok249) {
  // 1844674407.3709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0xA0000}};
  // -1844674407.3709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok250) {
  // -1844674407.3709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x800A0000}};
  // 1844674407.3709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok251) {
  // 1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x130000}};
  // -1.8446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok252) {
  // -1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80130000}};
  // 1.8446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok253) {
  // 18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x0}};
  // -18446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok254) {
  // -18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80000000}};
  // 18446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok255) {
  // 1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x10000}};
  // -1844674407370955161.6
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok256) {
  // -1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80010000}};
  // 1844674407370955161.6
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok257) {
  // 184467440.73709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0xB0000}};
  // -184467440.73709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok258) {
  // -184467440.73709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x800B0000}};
  // 184467440.73709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok259) {
  // 1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x130000}};
  // -1.8446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok260) {
  // -1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80130000}};
  // 1.8446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok261) {
  // 4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x0}};
  // -4294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok262) {
  // -4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000000}};
  // 4294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok263) {
  // 429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x10000}};
  // -429496729.7
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok264) {
  // -429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80010000}};
  // 429496729.7
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok265) {
  // 42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x20000}};
  // -42949672.97
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok266) {
  // -42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80020000}};
  // 42949672.97
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok267) {
  // 429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x40000}};
  // -429496.7297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok268) {
  // -429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80040000}};
  // 429496.7297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok269) {
  // 4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x90000}};
  // -4.294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok270) {
  // -4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80090000}};
  // 4.294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok271) {
  // 42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000}};
  // -42.94967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok272) {
  // -42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80080000}};
  // 42.94967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok273) {
  // 4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x0}};
  // -4294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok274) {
  // -4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000000}};
  // 4294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok275) {
  // 429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x10000}};
  // -429496729.6
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok276) {
  // -429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80010000}};
  // 429496729.6
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok277) {
  // 42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x20000}};
  // -42949672.96
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok278) {
  // -42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80020000}};
  // 42949672.96
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok279) {
  // 4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x30000}};
  // -4294967.296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok280) {
  // -4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80030000}};
  // 4294967.296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok281) {
  // 4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x90000}};
  // -4.294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok282) {
  // -4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80090000}};
  // 4.294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok283) {
  // 42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000}};
  // -42.94967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok284) {
  // -42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80080000}};
  // 42.94967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok285) {
  // 1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x0}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok286) {
  // -1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80000000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok287) {
  // 0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x10000}};
  // -0.1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok288) {
  // -0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80010000}};
  // 0.1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok289) {
  // 0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xD0000}};
  // -0.0000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok290) {
  // -0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800D0000}};
  // 0.0000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok291) {
  // 0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xE0000}};
  // -0.00000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok292) {
  // -0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800E0000}};
  // 0.00000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok293) {
  // 0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1B0000}};
  // -0.000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok294) {
  // -0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801B0000}};
  // 0.000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok295) {
  // 0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok296) {
  // -0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok297) {
  // 39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x0}};
  // -39614081266355540835774234624
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok298) {
  // -39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80000000}};
  // 39614081266355540835774234624
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok299) {
  // 3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};
  // -3961408126635554083577423462.4
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok300) {
  // -3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80010000}};
  // 3961408126635554083577423462.4
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok301) {
  // 39614081266355.540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // -39614081266355.540835774234624
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok302) {
  // -39614081266355.540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // 39614081266355.540835774234624
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok303) {
  // 3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x1C0000}};
  // -3.9614081266355540835774234624
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok304) {
  // -3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x801C0000}};
  // 3.9614081266355540835774234624
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok305) {
  // 39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x0}};
  // -39614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok306) {
  // -39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80000000}};
  // 39614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok307) {
  // 3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x10000}};
  // -3961408126635554083362675097.6
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok308) {
  // -3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80010000}};
  // 3961408126635554083362675097.6
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok309) {
  // 3961408126635554.0833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0xD0000}};
  // -3961408126635554.0833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok310) {
  // -3961408126635554.0833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x800D0000}};
  // 3961408126635554.0833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok311) {
  // 3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x1C0000}};
  // -3.9614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok312) {
  // -3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x801C0000}};
  // 3.9614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok313) {
  // 39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // -39614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok314) {
  // -39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok315) {
  // 3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x10000}};
  // -3961408125713216879891945881.6
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok316) {
  // -3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80010000}};
  // 3961408125713216879891945881.6
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok317) {
  // 39614081257132168.798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0xC0000}};
  // -39614081257132168.798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok318) {
  // -39614081257132168.798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x800C0000}};
  // 39614081257132168.798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok319) {
  // 3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x1C0000}};
  // -3.9614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok320) {
  // -3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x801C0000}};
  // 3.9614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok321) {
  // 39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x0}};
  // -39614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok322) {
  // -39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok323) {
  // 3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x10000}};
  // -3961408125713216879677197516.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok324) {
  // -3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80010000}};
  // 3961408125713216879677197516.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok325) {
  // 396140812571321687.96771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0xB0000}};
  // -396140812571321687.96771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok326) {
  // -396140812571321687.96771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x800B0000}};
  // 396140812571321687.96771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok327) {
  // 3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // -3.9614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok328) {
  // -3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // 3.9614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok329) {
  // 9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x0}};
  // -9223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok330) {
  // -9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80000000}};
  // 9223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok331) {
  // 922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x10000}};
  // -922337203900225945.6
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok332) {
  // -922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80010000}};
  // 922337203900225945.6
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok333) {
  // 922337203900.2259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x70000}};
  // -922337203900.2259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok334) {
  // -922337203900.2259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80070000}};
  // 922337203900.2259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok335) {
  // 9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x120000}};
  // -9.223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok336) {
  // -9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80120000}};
  // 9.223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok337) {
  // 9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x0}};
  // -9223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok338) {
  // -9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000000}};
  // 9223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok339) {
  // 922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x10000}};
  // -922337203685477580.8
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok340) {
  // -922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80010000}};
  // 922337203685477580.8
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok341) {
  // 92233720368.54775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000}};
  // -92233720368.54775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok342) {
  // -92233720368.54775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80080000}};
  // 92233720368.54775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok343) {
  // 9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x120000}};
  // -9.223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok344) {
  // -9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80120000}};
  // 9.223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok345) {
  // 2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x0}};
  // -2147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok346) {
  // -2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // 2147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok347) {
  // 214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x10000}};
  // -214748364.8
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok348) {
  // -214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80010000}};
  // 214748364.8
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok349) {
  // 21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x20000}};
  // -21474836.48
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok350) {
  // -21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
  // 21474836.48
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok351) {
  // 214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x40000}};
  // -214748.3648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok352) {
  // -214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // 214748.3648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok353) {
  // 21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000}};
  // -21.47483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok354) {
  // -21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80080000}};
  // 21.47483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok355) {
  // 2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
  // -2.147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok356) {
  // -2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
  // 2.147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok357) {
  // 156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x0}};
  // -156064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok358) {
  // -156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80000000}};
  // 156064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok359) {
  // 15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x10000}};
  // -15606476756221269530542694.4
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok360) {
  // -15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80010000}};
  // 15606476756221269530542694.4
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok361) {
  // 1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x140000}};
  // -1560647.67562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok362) {
  // -1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80140000}};
  // 1560647.67562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok363) {
  // 1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x1A0000}};
  // -1.56064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok364) {
  // -1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x801A0000}};
  // 1.56064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok365) {
  // 156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x0}};
  // -156064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok366) {
  // -156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80000000}};
  // 156064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok367) {
  // 15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x10000}};
  // -15606476756221269529696665.6
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok368) {
  // -15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80010000}};
  // 15606476756221269529696665.6
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok369) {
  // 15606476756221269529696.6656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x40000}};
  // -15606476756221269529696.6656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok370) {
  // -15606476756221269529696.6656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80040000}};
  // 15606476756221269529696.6656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok371) {
  // 1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x1A0000}};
  // -1.56064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok372) {
  // -1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x801A0000}};
  // 1.56064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok373) {
  // 156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x0}};
  // -156064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok374) {
  // -156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80000000}};
  // 156064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok375) {
  // 15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x10000}};
  // -15606476752587603503068569.6
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok376) {
  // -15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80010000}};
  // 15606476752587603503068569.6
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok377) {
  // 1560647675258760.35030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0xB0000}};
  // -1560647675258760.35030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok378) {
  // -1560647675258760.35030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x800B0000}};
  // 1560647675258760.35030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok379) {
  // 1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x1A0000}};
  // -1.56064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok380) {
  // -1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x801A0000}};
  // 1.56064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok381) {
  // 156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x0}};
  // -156064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok382) {
  // -156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80000000}};
  // 156064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok383) {
  // 15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x10000}};
  // -15606476752587603502222540.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok384) {
  // -15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80010000}};
  // 15606476752587603502222540.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok385) {
  // 15606476.7525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x130000}};
  // -15606476.7525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok386) {
  // -15606476.7525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80130000}};
  // 15606476.7525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok387) {
  // 1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x1A0000}};
  // -1.56064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok388) {
  // -1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x801A0000}};
  // 1.56064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok389) {
  // 36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x0}};
  // -36336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok390) {
  // -36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000000}};
  // 36336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok391) {
  // 3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x10000}};
  // -3633666028320153.6
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok392) {
  // -3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80010000}};
  // 3633666028320153.6
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok393) {
  // 363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000}};
  // -363366602.83201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok394) {
  // -363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80080000}};
  // 363366602.83201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok395) {
  // 3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -3.6336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok396) {
  // -3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 3.6336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok397) {
  // 36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x0}};
  // -36336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok398) {
  // -36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80000000}};
  // 36336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok399) {
  // 3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x10000}};
  // -3633666027474124.8
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok400) {
  // -3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80010000}};
  // 3633666027474124.8
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok401) {
  // 363366602747412.48
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x20000}};
  // -363366602747412.48
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok402) {
  // -363366602747412.48
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80020000}};
  // 363366602747412.48
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok403) {
  // 363366602.74741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80000}};
  // -363366602.74741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok404) {
  // -363366602.74741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80080000}};
  // 363366602.74741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok405) {
  // 36.336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0xF0000}};
  // -36.336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok406) {
  // -36.336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x800F0000}};
  // 36.336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok407) {
  // 3.6336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x100000}};
  // -3.6336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok408) {
  // -3.6336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80100000}};
  // 3.6336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok409) {
  // 8460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x0}};
  // -8460288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok410) {
  // -8460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80000000}};
  // 8460288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok411) {
  // 846028.8
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x10000}};
  // -846028.8
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok412) {
  // -846028.8
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80010000}};
  // 846028.8
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok413) {
  // 84602.88
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x20000}};
  // -84602.88
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok414) {
  // -84602.88
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80020000}};
  // 84602.88
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok415) {
  // 8460.288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x30000}};
  // -8460.288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok416) {
  // -8460.288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80030000}};
  // 8460.288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok417) {
  // 84.60288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x50000}};
  // -84.60288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok418) {
  // -84.60288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80050000}};
  // 84.60288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok419) {
  // 8.460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x60000}};
  // -8.460288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok420) {
  // -8.460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80060000}};
  // 8.460288
  s21_decimal decimal_check = {{0x811800, 0x0, 0x0, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok421) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok422) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok423) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok424) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok425) {
  // 792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // -792281625142.64337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok426) {
  // -792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // 792281625142.64337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok427) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok428) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok429) {
  // 79228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337589248983040
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok430) {
  // -79228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337589248983040
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok431) {
  // 7922816251426433758924898304.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433758924898304.0
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok432) {
  // -7922816251426433758924898304.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433758924898304.0
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok433) {
  // 79228162514264.337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // -79228162514264.337589248983040
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok434) {
  // -79228162514264.337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // 79228162514264.337589248983040
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok435) {
  // 7.9228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162514264337589248983040
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok436) {
  // -7.9228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162514264337589248983040
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok437) {
  // 79228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // -79228162495817593524129366015
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok438) {
  // -79228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // 79228162495817593524129366015
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok439) {
  // 7922816249581759352412936601.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x10000}};
  // -7922816249581759352412936601.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok440) {
  // -7922816249581759352412936601.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80010000}};
  // 7922816249581759352412936601.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok441) {
  // 792281624958.17593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x110000}};
  // -792281624958.17593524129366015
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok442) {
  // -792281624958.17593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80110000}};
  // 792281624958.17593524129366015
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok443) {
  // 7.9228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162495817593524129366015
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok444) {
  // -7.9228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162495817593524129366015
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok445) {
  // 79228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x0}};
  // -79228162495817593519834398720
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok446) {
  // -79228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x80000000}};
  // 79228162495817593519834398720
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok447) {
  // 7922816249581759351983439872.0
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x10000}};
  // -7922816249581759351983439872.0
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok448) {
  // -7922816249581759351983439872.0
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x80010000}};
  // 7922816249581759351983439872.0
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok449) {
  // 79228162495.817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x120000}};
  // -79228162495.817593519834398720
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok450) {
  // -79228162495.817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x80120000}};
  // 79228162495.817593519834398720
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok451) {
  // 7.9228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162495817593519834398720
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok452) {
  // -7.9228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162495817593519834398720
  s21_decimal decimal_check = {{0x0, 0x0, 0xFFFFFFFF, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok453) {
  // 18446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x0}};
  // -18446744073709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok454) {
  // -18446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80000000}};
  // 18446744073709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok455) {
  // 1844674407370955161.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x10000}};
  // -1844674407370955161.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok456) {
  // -1844674407370955161.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80010000}};
  // 1844674407370955161.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok457) {
  // 18446744073709551.615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x30000}};
  // -18446744073709551.615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok458) {
  // -18446744073709551.615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80030000}};
  // 18446744073709551.615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok459) {
  // 184467440.73709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0xB0000}};
  // -184467440.73709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok460) {
  // -184467440.73709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x800B0000}};
  // 184467440.73709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok461) {
  // 184.46744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x110000}};
  // -184.46744073709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok462) {
  // -184.46744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80110000}};
  // 184.46744073709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok463) {
  // 1.8446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x130000}};
  // -1.8446744073709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok464) {
  // -1.8446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80130000}};
  // 1.8446744073709551615
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok465) {
  // 18446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x0}};
  // -18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok466) {
  // -18446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80000000}};
  // 18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok467) {
  // 1844674406941458432.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x10000}};
  // -1844674406941458432.0
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok468) {
  // -1844674406941458432.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80010000}};
  // 1844674406941458432.0
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok469) {
  // 18446744069414584.320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x30000}};
  // -18446744069414584.320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok470) {
  // -18446744069414584.320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80030000}};
  // 18446744069414584.320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok471) {
  // 18446744069.414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x90000}};
  // -18446744069.414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok472) {
  // -18446744069.414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80090000}};
  // 18446744069.414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok473) {
  // 184.46744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x110000}};
  // -184.46744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok474) {
  // -184.46744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80110000}};
  // 184.46744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok475) {
  // 1.8446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x130000}};
  // -1.8446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok476) {
  // -1.8446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80130000}};
  // 1.8446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok477) {
  // 4294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};
  // -4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok478) {
  // -4294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80000000}};
  // 4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok479) {
  // 429496729.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};
  // -429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok480) {
  // -429496729.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};
  // 429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok481) {
  // 42949672.95
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x20000}};
  // -42949672.95
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok482) {
  // -42949672.95
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80020000}};
  // 42949672.95
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok483) {
  // 42949.67295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x50000}};
  // -42949.67295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok484) {
  // -42949.67295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80050000}};
  // 42949.67295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok485) {
  // 42.94967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // -42.94967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok486) {
  // -42.94967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // 42.94967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok487) {
  // 4.294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x90000}};
  // -4.294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok488) {
  // -4.294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80090000}};
  // 4.294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok489) {
  // 1.0
  s21_decimal decimal = {{0xA, 0x0, 0x0, 0x10000}};
  // -1.0
  s21_decimal decimal_check = {{0xA, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok490) {
  // -1.0
  s21_decimal decimal = {{0xA, 0x0, 0x0, 0x80010000}};
  // 1.0
  s21_decimal decimal_check = {{0xA, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok491) {
  // 1.00
  s21_decimal decimal = {{0x64, 0x0, 0x0, 0x20000}};
  // -1.00
  s21_decimal decimal_check = {{0x64, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok492) {
  // -1.00
  s21_decimal decimal = {{0x64, 0x0, 0x0, 0x80020000}};
  // 1.00
  s21_decimal decimal_check = {{0x64, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok493) {
  // 1.000
  s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x30000}};
  // -1.000
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok494) {
  // -1.000
  s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x80030000}};
  // 1.000
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok495) {
  // 1.0000000000
  s21_decimal decimal = {{0x540BE400, 0x2, 0x0, 0xA0000}};
  // -1.0000000000
  s21_decimal decimal_check = {{0x540BE400, 0x2, 0x0, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok496) {
  // -1.0000000000
  s21_decimal decimal = {{0x540BE400, 0x2, 0x0, 0x800A0000}};
  // 1.0000000000
  s21_decimal decimal_check = {{0x540BE400, 0x2, 0x0, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok497) {
  // 1.0000000000000000
  s21_decimal decimal = {{0x6FC10000, 0x2386F2, 0x0, 0x100000}};
  // -1.0000000000000000
  s21_decimal decimal_check = {{0x6FC10000, 0x2386F2, 0x0, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok498) {
  // -1.0000000000000000
  s21_decimal decimal = {{0x6FC10000, 0x2386F2, 0x0, 0x80100000}};
  // 1.0000000000000000
  s21_decimal decimal_check = {{0x6FC10000, 0x2386F2, 0x0, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok499) {
  // 1.00000000000000000000000
  s21_decimal decimal = {{0xF6800000, 0x2C7E14A, 0x152D, 0x170000}};
  // -1.00000000000000000000000
  s21_decimal decimal_check = {{0xF6800000, 0x2C7E14A, 0x152D, 0x80170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok500) {
  // -1.00000000000000000000000
  s21_decimal decimal = {{0xF6800000, 0x2C7E14A, 0x152D, 0x80170000}};
  // 1.00000000000000000000000
  s21_decimal decimal_check = {{0xF6800000, 0x2C7E14A, 0x152D, 0x170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok501) {
  // 1.000000000000000000000000000
  s21_decimal decimal = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x1B0000}};
  // -1.000000000000000000000000000
  s21_decimal decimal_check = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x801B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok502) {
  // -1.000000000000000000000000000
  s21_decimal decimal = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x801B0000}};
  // 1.000000000000000000000000000
  s21_decimal decimal_check = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x1B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok503) {
  // 1.0000000000000000000000000000
  s21_decimal decimal = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -1.0000000000000000000000000000
  s21_decimal decimal_check = {
      {0x10000000, 0x3E250261, 0x204FCE5E, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok504) {
  // -1.0000000000000000000000000000
  s21_decimal decimal = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 1.0000000000000000000000000000
  s21_decimal decimal_check = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok505) {
  // 1.1
  s21_decimal decimal = {{0xB, 0x0, 0x0, 0x10000}};
  // -1.1
  s21_decimal decimal_check = {{0xB, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok506) {
  // -1.1
  s21_decimal decimal = {{0xB, 0x0, 0x0, 0x80010000}};
  // 1.1
  s21_decimal decimal_check = {{0xB, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok507) {
  // 12.12
  s21_decimal decimal = {{0x4BC, 0x0, 0x0, 0x20000}};
  // -12.12
  s21_decimal decimal_check = {{0x4BC, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok508) {
  // -12.12
  s21_decimal decimal = {{0x4BC, 0x0, 0x0, 0x80020000}};
  // 12.12
  s21_decimal decimal_check = {{0x4BC, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok509) {
  // 123.123
  s21_decimal decimal = {{0x1E0F3, 0x0, 0x0, 0x30000}};
  // -123.123
  s21_decimal decimal_check = {{0x1E0F3, 0x0, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok510) {
  // -123.123
  s21_decimal decimal = {{0x1E0F3, 0x0, 0x0, 0x80030000}};
  // 123.123
  s21_decimal decimal_check = {{0x1E0F3, 0x0, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok511) {
  // 1234.1234
  s21_decimal decimal = {{0xBC4FF2, 0x0, 0x0, 0x40000}};
  // -1234.1234
  s21_decimal decimal_check = {{0xBC4FF2, 0x0, 0x0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok512) {
  // -1234.1234
  s21_decimal decimal = {{0xBC4FF2, 0x0, 0x0, 0x80040000}};
  // 1234.1234
  s21_decimal decimal_check = {{0xBC4FF2, 0x0, 0x0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok513) {
  // 12345.12345
  s21_decimal decimal = {{0x499529D9, 0x0, 0x0, 0x50000}};
  // -12345.12345
  s21_decimal decimal_check = {{0x499529D9, 0x0, 0x0, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok514) {
  // -12345.12345
  s21_decimal decimal = {{0x499529D9, 0x0, 0x0, 0x80050000}};
  // 12345.12345
  s21_decimal decimal_check = {{0x499529D9, 0x0, 0x0, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok515) {
  // 123456.123456
  s21_decimal decimal = {{0xBE8EF240, 0x1C, 0x0, 0x60000}};
  // -123456.123456
  s21_decimal decimal_check = {{0xBE8EF240, 0x1C, 0x0, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok516) {
  // -123456.123456
  s21_decimal decimal = {{0xBE8EF240, 0x1C, 0x0, 0x80060000}};
  // 123456.123456
  s21_decimal decimal_check = {{0xBE8EF240, 0x1C, 0x0, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok517) {
  // 1234567.1234567
  s21_decimal decimal = {{0x73593407, 0xB3A, 0x0, 0x70000}};
  // -1234567.1234567
  s21_decimal decimal_check = {{0x73593407, 0xB3A, 0x0, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok518) {
  // -1234567.1234567
  s21_decimal decimal = {{0x73593407, 0xB3A, 0x0, 0x80070000}};
  // 1234567.1234567
  s21_decimal decimal_check = {{0x73593407, 0xB3A, 0x0, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok519) {
  // 1234567890.1234567890
  s21_decimal decimal = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0xA0000}};
  // -1234567890.1234567890
  s21_decimal decimal_check = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok520) {
  // -1234567890.1234567890
  s21_decimal decimal = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0x800A0000}};
  // 1234567890.1234567890
  s21_decimal decimal_check = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok521) {
  // 12345678901234.12345678901234
  s21_decimal decimal = {{0xF91EAFF2, 0x6D795225, 0x3FD35EB, 0xE0000}};
  // -12345678901234.12345678901234
  s21_decimal decimal_check = {{0xF91EAFF2, 0x6D795225, 0x3FD35EB, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok522) {
  // -12345678901234.12345678901234
  s21_decimal decimal = {{0xF91EAFF2, 0x6D795225, 0x3FD35EB, 0x800E0000}};
  // 12345678901234.12345678901234
  s21_decimal decimal_check = {{0xF91EAFF2, 0x6D795225, 0x3FD35EB, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok523) {
  // 99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x0}};
  // -99
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok524) {
  // -99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80000000}};
  // 99
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok525) {
  // 9.9
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x10000}};
  // -9.9
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok526) {
  // -9.9
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80010000}};
  // 9.9
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok527) {
  // 99.99
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x20000}};
  // -99.99
  s21_decimal decimal_check = {{0x270F, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok528) {
  // -99.99
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x80020000}};
  // 99.99
  s21_decimal decimal_check = {{0x270F, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok529) {
  // 999.999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x30000}};
  // -999.999
  s21_decimal decimal_check = {{0xF423F, 0x0, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok530) {
  // -999.999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x80030000}};
  // 999.999
  s21_decimal decimal_check = {{0xF423F, 0x0, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok531) {
  // 9999.9999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x40000}};
  // -9999.9999
  s21_decimal decimal_check = {{0x5F5E0FF, 0x0, 0x0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok532) {
  // -9999.9999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80040000}};
  // 9999.9999
  s21_decimal decimal_check = {{0x5F5E0FF, 0x0, 0x0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok533) {
  // 99999.99999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x50000}};
  // -99999.99999
  s21_decimal decimal_check = {{0x540BE3FF, 0x2, 0x0, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok534) {
  // -99999.99999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x80050000}};
  // 99999.99999
  s21_decimal decimal_check = {{0x540BE3FF, 0x2, 0x0, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok535) {
  // 999999.999999
  s21_decimal decimal = {{0xD4A50FFF, 0xE8, 0x0, 0x60000}};
  // -999999.999999
  s21_decimal decimal_check = {{0xD4A50FFF, 0xE8, 0x0, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok536) {
  // -999999.999999
  s21_decimal decimal = {{0xD4A50FFF, 0xE8, 0x0, 0x80060000}};
  // 999999.999999
  s21_decimal decimal_check = {{0xD4A50FFF, 0xE8, 0x0, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok537) {
  // 9999999.9999999
  s21_decimal decimal = {{0x107A3FFF, 0x5AF3, 0x0, 0x70000}};
  // -9999999.9999999
  s21_decimal decimal_check = {{0x107A3FFF, 0x5AF3, 0x0, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok538) {
  // -9999999.9999999
  s21_decimal decimal = {{0x107A3FFF, 0x5AF3, 0x0, 0x80070000}};
  // 9999999.9999999
  s21_decimal decimal_check = {{0x107A3FFF, 0x5AF3, 0x0, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok539) {
  // 99999999.99999999
  s21_decimal decimal = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80000}};
  // -99999999.99999999
  s21_decimal decimal_check = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok540) {
  // -99999999.99999999
  s21_decimal decimal = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80080000}};
  // 99999999.99999999
  s21_decimal decimal_check = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok541) {
  // 999999999.999999999
  s21_decimal decimal = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x90000}};
  // -999999999.999999999
  s21_decimal decimal_check = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok542) {
  // -999999999.999999999
  s21_decimal decimal = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x80090000}};
  // 999999999.999999999
  s21_decimal decimal_check = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok543) {
  // 9999999999.9999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0xA0000}};
  // -9999999999.9999999999
  s21_decimal decimal_check = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok544) {
  // -9999999999.9999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x800A0000}};
  // 9999999999.9999999999
  s21_decimal decimal_check = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok545) {
  // 9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x0}};
  // -9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok546) {
  // -9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x80000000}};
  // 9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok547) {
  // 0.9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x10000}};
  // -0.9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok548) {
  // -0.9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x80010000}};
  // 0.9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok549) {
  // 0.99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x20000}};
  // -0.99
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok550) {
  // -0.99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80020000}};
  // 0.99
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok551) {
  // 0.999
  s21_decimal decimal = {{0x3E7, 0x0, 0x0, 0x30000}};
  // -0.999
  s21_decimal decimal_check = {{0x3E7, 0x0, 0x0, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok552) {
  // -0.999
  s21_decimal decimal = {{0x3E7, 0x0, 0x0, 0x80030000}};
  // 0.999
  s21_decimal decimal_check = {{0x3E7, 0x0, 0x0, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok553) {
  // 0.9999
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x40000}};
  // -0.9999
  s21_decimal decimal_check = {{0x270F, 0x0, 0x0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok554) {
  // -0.9999
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x80040000}};
  // 0.9999
  s21_decimal decimal_check = {{0x270F, 0x0, 0x0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok555) {
  // 0.99999
  s21_decimal decimal = {{0x1869F, 0x0, 0x0, 0x50000}};
  // -0.99999
  s21_decimal decimal_check = {{0x1869F, 0x0, 0x0, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok556) {
  // -0.99999
  s21_decimal decimal = {{0x1869F, 0x0, 0x0, 0x80050000}};
  // 0.99999
  s21_decimal decimal_check = {{0x1869F, 0x0, 0x0, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok557) {
  // 0.999999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x60000}};
  // -0.999999
  s21_decimal decimal_check = {{0xF423F, 0x0, 0x0, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok558) {
  // -0.999999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x80060000}};
  // 0.999999
  s21_decimal decimal_check = {{0xF423F, 0x0, 0x0, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok559) {
  // 0.9999999
  s21_decimal decimal = {{0x98967F, 0x0, 0x0, 0x70000}};
  // -0.9999999
  s21_decimal decimal_check = {{0x98967F, 0x0, 0x0, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok560) {
  // -0.9999999
  s21_decimal decimal = {{0x98967F, 0x0, 0x0, 0x80070000}};
  // 0.9999999
  s21_decimal decimal_check = {{0x98967F, 0x0, 0x0, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok561) {
  // 0.99999999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80000}};
  // -0.99999999
  s21_decimal decimal_check = {{0x5F5E0FF, 0x0, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok562) {
  // -0.99999999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80080000}};
  // 0.99999999
  s21_decimal decimal_check = {{0x5F5E0FF, 0x0, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok563) {
  // 0.999999999
  s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x90000}};
  // -0.999999999
  s21_decimal decimal_check = {{0x3B9AC9FF, 0x0, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok564) {
  // -0.999999999
  s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x80090000}};
  // 0.999999999
  s21_decimal decimal_check = {{0x3B9AC9FF, 0x0, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok565) {
  // 0.9999999999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0xA0000}};
  // -0.9999999999
  s21_decimal decimal_check = {{0x540BE3FF, 0x2, 0x0, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok566) {
  // -0.9999999999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x800A0000}};
  // 0.9999999999
  s21_decimal decimal_check = {{0x540BE3FF, 0x2, 0x0, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok567) {
  // 0.99999999999999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x140000}};
  // -0.99999999999999999999
  s21_decimal decimal_check = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok568) {
  // -0.99999999999999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x80140000}};
  // 0.99999999999999999999
  s21_decimal decimal_check = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok569) {
  // -0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80000000}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok570) {
  // 0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok571) {
  // -0.0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80010000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok572) {
  // 0.0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x10000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok573) {
  // -0.00
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80020000}};
  // -0.00
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok574) {
  // 0.00
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x20000}};
  // 0.00
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok575) {
  // -0.00000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -0.00000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok576) {
  // 0.00000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0xE0000}};
  // 0.00000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok577) {
  // -0.000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x801B0000}};
  // -0.000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok578) {
  // 0.000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x1B0000}};
  // 0.000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok579) {
  // -0.0000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok580) {
  // 0.0000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok581) {
  // 0.5
  s21_decimal decimal = {{0x5, 0x0, 0x0, 0x10000}};
  // -0.5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok582) {
  // -0.5
  s21_decimal decimal = {{0x5, 0x0, 0x0, 0x80010000}};
  // 0.5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok583) {
  // 0.49
  s21_decimal decimal = {{0x31, 0x0, 0x0, 0x20000}};
  // -0.49
  s21_decimal decimal_check = {{0x31, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok584) {
  // -0.49
  s21_decimal decimal = {{0x31, 0x0, 0x0, 0x80020000}};
  // 0.49
  s21_decimal decimal_check = {{0x31, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok585) {
  // 0.51
  s21_decimal decimal = {{0x33, 0x0, 0x0, 0x20000}};
  // -0.51
  s21_decimal decimal_check = {{0x33, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok586) {
  // -0.51
  s21_decimal decimal = {{0x33, 0x0, 0x0, 0x80020000}};
  // 0.51
  s21_decimal decimal_check = {{0x33, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok587) {
  // 0.49999999
  s21_decimal decimal = {{0x2FAF07F, 0x0, 0x0, 0x80000}};
  // -0.49999999
  s21_decimal decimal_check = {{0x2FAF07F, 0x0, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok588) {
  // -0.49999999
  s21_decimal decimal = {{0x2FAF07F, 0x0, 0x0, 0x80080000}};
  // 0.49999999
  s21_decimal decimal_check = {{0x2FAF07F, 0x0, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok589) {
  // 0.4999999999999999999999999999
  s21_decimal decimal = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -0.4999999999999999999999999999
  s21_decimal decimal_check = {
      {0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok590) {
  // -0.4999999999999999999999999999
  s21_decimal decimal = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 0.4999999999999999999999999999
  s21_decimal decimal_check = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok591) {
  // 0.5000000000000000000000000001
  s21_decimal decimal = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -0.5000000000000000000000000001
  s21_decimal decimal_check = {
      {0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok592) {
  // -0.5000000000000000000000000001
  s21_decimal decimal = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 0.5000000000000000000000000001
  s21_decimal decimal_check = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok593) {
  // 0.5000000000000000000000000000
  s21_decimal decimal = {{0x88000000, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -0.5000000000000000000000000000
  s21_decimal decimal_check = {
      {0x88000000, 0x1F128130, 0x1027E72F, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok594) {
  // -0.5000000000000000000000000000
  s21_decimal decimal = {{0x88000000, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 0.5000000000000000000000000000
  s21_decimal decimal_check = {{0x88000000, 0x1F128130, 0x1027E72F, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok595) {
  // 0.99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x20000}};
  // -0.99
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok596) {
  // -0.99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80020000}};
  // 0.99
  s21_decimal decimal_check = {{0x63, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok597) {
  // 0.999999999
  s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x90000}};
  // -0.999999999
  s21_decimal decimal_check = {{0x3B9AC9FF, 0x0, 0x0, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok598) {
  // -0.999999999
  s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x80090000}};
  // 0.999999999
  s21_decimal decimal_check = {{0x3B9AC9FF, 0x0, 0x0, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok599) {
  // 0.9999999999999999999999999999
  s21_decimal decimal = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal_check = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok600) {
  // -0.9999999999999999999999999999
  s21_decimal decimal = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal_check = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok601) {
  // 1.0000000000000000000000000001
  s21_decimal decimal = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -1.0000000000000000000000000001
  s21_decimal decimal_check = {
      {0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok602) {
  // -1.0000000000000000000000000001
  s21_decimal decimal = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 1.0000000000000000000000000001
  s21_decimal decimal_check = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok603) {
  // 1.5
  s21_decimal decimal = {{0xF, 0x0, 0x0, 0x10000}};
  // -1.5
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok604) {
  // -1.5
  s21_decimal decimal = {{0xF, 0x0, 0x0, 0x80010000}};
  // 1.5
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok605) {
  // 1.49
  s21_decimal decimal = {{0x95, 0x0, 0x0, 0x20000}};
  // -1.49
  s21_decimal decimal_check = {{0x95, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok606) {
  // -1.49
  s21_decimal decimal = {{0x95, 0x0, 0x0, 0x80020000}};
  // 1.49
  s21_decimal decimal_check = {{0x95, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok607) {
  // 1.51
  s21_decimal decimal = {{0x97, 0x0, 0x0, 0x20000}};
  // -1.51
  s21_decimal decimal_check = {{0x97, 0x0, 0x0, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok608) {
  // -1.51
  s21_decimal decimal = {{0x97, 0x0, 0x0, 0x80020000}};
  // 1.51
  s21_decimal decimal_check = {{0x97, 0x0, 0x0, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok609) {
  // 1.49999999
  s21_decimal decimal = {{0x8F0D17F, 0x0, 0x0, 0x80000}};
  // -1.49999999
  s21_decimal decimal_check = {{0x8F0D17F, 0x0, 0x0, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok610) {
  // -1.49999999
  s21_decimal decimal = {{0x8F0D17F, 0x0, 0x0, 0x80080000}};
  // 1.49999999
  s21_decimal decimal_check = {{0x8F0D17F, 0x0, 0x0, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok611) {
  // 1.4999999999999999999999999999
  s21_decimal decimal = {{0x97FFFFFF, 0x5D378391, 0x3077B58D, 0x1C0000}};
  // -1.4999999999999999999999999999
  s21_decimal decimal_check = {
      {0x97FFFFFF, 0x5D378391, 0x3077B58D, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok612) {
  // -1.4999999999999999999999999999
  s21_decimal decimal = {{0x97FFFFFF, 0x5D378391, 0x3077B58D, 0x801C0000}};
  // 1.4999999999999999999999999999
  s21_decimal decimal_check = {{0x97FFFFFF, 0x5D378391, 0x3077B58D, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok613) {
  // 1.5000000000000000000000000001
  s21_decimal decimal = {{0x98000001, 0x5D378391, 0x3077B58D, 0x1C0000}};
  // -1.5000000000000000000000000001
  s21_decimal decimal_check = {
      {0x98000001, 0x5D378391, 0x3077B58D, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok614) {
  // -1.5000000000000000000000000001
  s21_decimal decimal = {{0x98000001, 0x5D378391, 0x3077B58D, 0x801C0000}};
  // 1.5000000000000000000000000001
  s21_decimal decimal_check = {{0x98000001, 0x5D378391, 0x3077B58D, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok615) {
  // 1.5000000000000000000000000000
  s21_decimal decimal = {{0x98000000, 0x5D378391, 0x3077B58D, 0x1C0000}};
  // -1.5000000000000000000000000000
  s21_decimal decimal_check = {
      {0x98000000, 0x5D378391, 0x3077B58D, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok616) {
  // -1.5000000000000000000000000000
  s21_decimal decimal = {{0x98000000, 0x5D378391, 0x3077B58D, 0x801C0000}};
  // 1.5000000000000000000000000000
  s21_decimal decimal_check = {{0x98000000, 0x5D378391, 0x3077B58D, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok617) {
  // 1.999999
  s21_decimal decimal = {{0x1E847F, 0x0, 0x0, 0x60000}};
  // -1.999999
  s21_decimal decimal_check = {{0x1E847F, 0x0, 0x0, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok618) {
  // -1.999999
  s21_decimal decimal = {{0x1E847F, 0x0, 0x0, 0x80060000}};
  // 1.999999
  s21_decimal decimal_check = {{0x1E847F, 0x0, 0x0, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok619) {
  // 1.9999999999999999999999999999
  s21_decimal decimal = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -1.9999999999999999999999999999
  s21_decimal decimal_check = {
      {0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok620) {
  // -1.9999999999999999999999999999
  s21_decimal decimal = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 1.9999999999999999999999999999
  s21_decimal decimal_check = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok621) {
  // -31995312930785154696052954.189
  s21_decimal decimal = {{0x873F544D, 0x720EF6CF, 0x6761E70D, 0x80030000}};
  // 31995312930785154696052954.189
  s21_decimal decimal_check = {{0x873F544D, 0x720EF6CF, 0x6761E70D, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok622) {
  // 31995312930785154696052954.189
  s21_decimal decimal = {{0x873F544D, 0x720EF6CF, 0x6761E70D, 0x30000}};
  // -31995312930785154696052954.189
  s21_decimal decimal_check = {
      {0x873F544D, 0x720EF6CF, 0x6761E70D, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok623) {
  // 505895479.13980033234385760539
  s21_decimal decimal = {{0x2C27F11B, 0xAB7A362C, 0xA376B177, 0x140000}};
  // -505895479.13980033234385760539
  s21_decimal decimal_check = {
      {0x2C27F11B, 0xAB7A362C, 0xA376B177, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok624) {
  // -505895479.13980033234385760539
  s21_decimal decimal = {{0x2C27F11B, 0xAB7A362C, 0xA376B177, 0x80140000}};
  // 505895479.13980033234385760539
  s21_decimal decimal_check = {{0x2C27F11B, 0xAB7A362C, 0xA376B177, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok625) {
  // 2142258001479126924635870.868
  s21_decimal decimal = {{0x63E31694, 0xF61EB7CD, 0x6EC08C6, 0x30000}};
  // -2142258001479126924635870.868
  s21_decimal decimal_check = {{0x63E31694, 0xF61EB7CD, 0x6EC08C6, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok626) {
  // -2142258001479126924635870.868
  s21_decimal decimal = {{0x63E31694, 0xF61EB7CD, 0x6EC08C6, 0x80030000}};
  // 2142258001479126924635870.868
  s21_decimal decimal_check = {{0x63E31694, 0xF61EB7CD, 0x6EC08C6, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok627) {
  // 54106681724336.874301252305096
  s21_decimal decimal = {{0x9C8A00C8, 0x934CB014, 0xAED3FF85, 0xF0000}};
  // -54106681724336.874301252305096
  s21_decimal decimal_check = {
      {0x9C8A00C8, 0x934CB014, 0xAED3FF85, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok628) {
  // -54106681724336.874301252305096
  s21_decimal decimal = {{0x9C8A00C8, 0x934CB014, 0xAED3FF85, 0x800F0000}};
  // 54106681724336.874301252305096
  s21_decimal decimal_check = {{0x9C8A00C8, 0x934CB014, 0xAED3FF85, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok629) {
  // -7125.4264674374072027825163875
  s21_decimal decimal = {{0x6335CE63, 0xF0D0163D, 0xE63C2573, 0x80190000}};
  // 7125.4264674374072027825163875
  s21_decimal decimal_check = {{0x6335CE63, 0xF0D0163D, 0xE63C2573, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok630) {
  // 7125.4264674374072027825163875
  s21_decimal decimal = {{0x6335CE63, 0xF0D0163D, 0xE63C2573, 0x190000}};
  // -7125.4264674374072027825163875
  s21_decimal decimal_check = {
      {0x6335CE63, 0xF0D0163D, 0xE63C2573, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok631) {
  // -351491064926027919.22225067848
  s21_decimal decimal = {{0x8D233748, 0x29D6FE5, 0x7192A8D1, 0x800B0000}};
  // 351491064926027919.22225067848
  s21_decimal decimal_check = {{0x8D233748, 0x29D6FE5, 0x7192A8D1, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok632) {
  // 351491064926027919.22225067848
  s21_decimal decimal = {{0x8D233748, 0x29D6FE5, 0x7192A8D1, 0xB0000}};
  // -351491064926027919.22225067848
  s21_decimal decimal_check = {{0x8D233748, 0x29D6FE5, 0x7192A8D1, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok633) {
  // -4044647961809480.1797480051324
  s21_decimal decimal = {{0xE9A5F27C, 0x9103102B, 0x82B08B35, 0x800D0000}};
  // 4044647961809480.1797480051324
  s21_decimal decimal_check = {{0xE9A5F27C, 0x9103102B, 0x82B08B35, 0xD0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok634) {
  // 4044647961809480.1797480051324
  s21_decimal decimal = {{0xE9A5F27C, 0x9103102B, 0x82B08B35, 0xD0000}};
  // -4044647961809480.1797480051324
  s21_decimal decimal_check = {
      {0xE9A5F27C, 0x9103102B, 0x82B08B35, 0x800D0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok635) {
  // 787567884367013096891806886.45
  s21_decimal decimal = {{0xD3F79105, 0xD79DCCA, 0xFE7A16A8, 0x20000}};
  // -787567884367013096891806886.45
  s21_decimal decimal_check = {{0xD3F79105, 0xD79DCCA, 0xFE7A16A8, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok636) {
  // -787567884367013096891806886.45
  s21_decimal decimal = {{0xD3F79105, 0xD79DCCA, 0xFE7A16A8, 0x80020000}};
  // 787567884367013096891806886.45
  s21_decimal decimal_check = {{0xD3F79105, 0xD79DCCA, 0xFE7A16A8, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok637) {
  // -1588.6156880717336145015869256
  s21_decimal decimal = {{0x3B780F48, 0x203F2D8C, 0x3354B892, 0x80190000}};
  // 1588.6156880717336145015869256
  s21_decimal decimal_check = {{0x3B780F48, 0x203F2D8C, 0x3354B892, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok638) {
  // 1588.6156880717336145015869256
  s21_decimal decimal = {{0x3B780F48, 0x203F2D8C, 0x3354B892, 0x190000}};
  // -1588.6156880717336145015869256
  s21_decimal decimal_check = {
      {0x3B780F48, 0x203F2D8C, 0x3354B892, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok639) {
  // -1.1288079906187025161270790909
  s21_decimal decimal = {{0xE0E30AFD, 0xDFB7B835, 0x247947E5, 0x801C0000}};
  // 1.1288079906187025161270790909
  s21_decimal decimal_check = {{0xE0E30AFD, 0xDFB7B835, 0x247947E5, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok640) {
  // 1.1288079906187025161270790909
  s21_decimal decimal = {{0xE0E30AFD, 0xDFB7B835, 0x247947E5, 0x1C0000}};
  // -1.1288079906187025161270790909
  s21_decimal decimal_check = {
      {0xE0E30AFD, 0xDFB7B835, 0x247947E5, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok641) {
  // 47874765834.98019023871100102
  s21_decimal decimal = {{0x9A7544C6, 0xA0AA802F, 0xF781B99, 0x110000}};
  // -47874765834.98019023871100102
  s21_decimal decimal_check = {{0x9A7544C6, 0xA0AA802F, 0xF781B99, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok642) {
  // -47874765834.98019023871100102
  s21_decimal decimal = {{0x9A7544C6, 0xA0AA802F, 0xF781B99, 0x80110000}};
  // 47874765834.98019023871100102
  s21_decimal decimal_check = {{0x9A7544C6, 0xA0AA802F, 0xF781B99, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok643) {
  // 7325105732697471168627274464.8
  s21_decimal decimal = {{0x8AD7CC8, 0x89CEB74E, 0xECAFDABE, 0x10000}};
  // -7325105732697471168627274464.8
  s21_decimal decimal_check = {{0x8AD7CC8, 0x89CEB74E, 0xECAFDABE, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok644) {
  // -7325105732697471168627274464.8
  s21_decimal decimal = {{0x8AD7CC8, 0x89CEB74E, 0xECAFDABE, 0x80010000}};
  // 7325105732697471168627274464.8
  s21_decimal decimal_check = {{0x8AD7CC8, 0x89CEB74E, 0xECAFDABE, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok645) {
  // -72130.403841036757567571211222
  s21_decimal decimal = {{0x7D47B3D6, 0x55DF7B4B, 0xE910DF23, 0x80180000}};
  // 72130.403841036757567571211222
  s21_decimal decimal_check = {{0x7D47B3D6, 0x55DF7B4B, 0xE910DF23, 0x180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok646) {
  // 72130.403841036757567571211222
  s21_decimal decimal = {{0x7D47B3D6, 0x55DF7B4B, 0xE910DF23, 0x180000}};
  // -72130.403841036757567571211222
  s21_decimal decimal_check = {
      {0x7D47B3D6, 0x55DF7B4B, 0xE910DF23, 0x80180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok647) {
  // 234.01142182632722763593730624
  s21_decimal decimal = {{0xD426CA40, 0xA712AF2C, 0x4B9CF89B, 0x1A0000}};
  // -234.01142182632722763593730624
  s21_decimal decimal_check = {
      {0xD426CA40, 0xA712AF2C, 0x4B9CF89B, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok648) {
  // -234.01142182632722763593730624
  s21_decimal decimal = {{0xD426CA40, 0xA712AF2C, 0x4B9CF89B, 0x801A0000}};
  // 234.01142182632722763593730624
  s21_decimal decimal_check = {{0xD426CA40, 0xA712AF2C, 0x4B9CF89B, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok649) {
  // 40832336935500667248295.547327
  s21_decimal decimal = {{0xBD9011BF, 0xA81025E1, 0x83EFB7AC, 0x60000}};
  // -40832336935500667248295.547327
  s21_decimal decimal_check = {
      {0xBD9011BF, 0xA81025E1, 0x83EFB7AC, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok650) {
  // -40832336935500667248295.547327
  s21_decimal decimal = {{0xBD9011BF, 0xA81025E1, 0x83EFB7AC, 0x80060000}};
  // 40832336935500667248295.547327
  s21_decimal decimal_check = {{0xBD9011BF, 0xA81025E1, 0x83EFB7AC, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok651) {
  // -7838108432432579020287.7275832
  s21_decimal decimal = {{0xD5DD6EB8, 0x4F67C0FA, 0xFD435037, 0x80070000}};
  // 7838108432432579020287.7275832
  s21_decimal decimal_check = {{0xD5DD6EB8, 0x4F67C0FA, 0xFD435037, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok652) {
  // 7838108432432579020287.7275832
  s21_decimal decimal = {{0xD5DD6EB8, 0x4F67C0FA, 0xFD435037, 0x70000}};
  // -7838108432432579020287.7275832
  s21_decimal decimal_check = {
      {0xD5DD6EB8, 0x4F67C0FA, 0xFD435037, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok653) {
  // 69015888252402261058162782.46
  s21_decimal decimal = {{0xB4B864E6, 0xE577A195, 0x164CDC47, 0x20000}};
  // -69015888252402261058162782.46
  s21_decimal decimal_check = {
      {0xB4B864E6, 0xE577A195, 0x164CDC47, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok654) {
  // -69015888252402261058162782.46
  s21_decimal decimal = {{0xB4B864E6, 0xE577A195, 0x164CDC47, 0x80020000}};
  // 69015888252402261058162782.46
  s21_decimal decimal_check = {{0xB4B864E6, 0xE577A195, 0x164CDC47, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok655) {
  // -55850655241531059265092696.899
  s21_decimal decimal = {{0x1D0BBB43, 0x615E4A12, 0xB4769447, 0x80030000}};
  // 55850655241531059265092696.899
  s21_decimal decimal_check = {{0x1D0BBB43, 0x615E4A12, 0xB4769447, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok656) {
  // 55850655241531059265092696.899
  s21_decimal decimal = {{0x1D0BBB43, 0x615E4A12, 0xB4769447, 0x30000}};
  // -55850655241531059265092696.899
  s21_decimal decimal_check = {
      {0x1D0BBB43, 0x615E4A12, 0xB4769447, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok657) {
  // 441549233113186273534.49107993
  s21_decimal decimal = {{0x896A9219, 0xCCCBF8, 0x8EAC18B5, 0x80000}};
  // -441549233113186273534.49107993
  s21_decimal decimal_check = {{0x896A9219, 0xCCCBF8, 0x8EAC18B5, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok658) {
  // -441549233113186273534.49107993
  s21_decimal decimal = {{0x896A9219, 0xCCCBF8, 0x8EAC18B5, 0x80080000}};
  // 441549233113186273534.49107993
  s21_decimal decimal_check = {{0x896A9219, 0xCCCBF8, 0x8EAC18B5, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok659) {
  // -151016553161.11241097827129358
  s21_decimal decimal = {{0xC039180E, 0x17BEB589, 0x30CBCBE7, 0x80110000}};
  // 151016553161.11241097827129358
  s21_decimal decimal_check = {{0xC039180E, 0x17BEB589, 0x30CBCBE7, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok660) {
  // 151016553161.11241097827129358
  s21_decimal decimal = {{0xC039180E, 0x17BEB589, 0x30CBCBE7, 0x110000}};
  // -151016553161.11241097827129358
  s21_decimal decimal_check = {
      {0xC039180E, 0x17BEB589, 0x30CBCBE7, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok661) {
  // -2504745147808573373831964087.9
  s21_decimal decimal = {{0x7166F92F, 0x636702FE, 0x50EEC429, 0x80010000}};
  // 2504745147808573373831964087.9
  s21_decimal decimal_check = {{0x7166F92F, 0x636702FE, 0x50EEC429, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok662) {
  // 2504745147808573373831964087.9
  s21_decimal decimal = {{0x7166F92F, 0x636702FE, 0x50EEC429, 0x10000}};
  // -2504745147808573373831964087.9
  s21_decimal decimal_check = {
      {0x7166F92F, 0x636702FE, 0x50EEC429, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok663) {
  // -61729133434784021526374.826345
  s21_decimal decimal = {{0xD17CC169, 0xC8328AFD, 0xC7752474, 0x80060000}};
  // 61729133434784021526374.826345
  s21_decimal decimal_check = {{0xD17CC169, 0xC8328AFD, 0xC7752474, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok664) {
  // 61729133434784021526374.826345
  s21_decimal decimal = {{0xD17CC169, 0xC8328AFD, 0xC7752474, 0x60000}};
  // -61729133434784021526374.826345
  s21_decimal decimal_check = {
      {0xD17CC169, 0xC8328AFD, 0xC7752474, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok665) {
  // 311077020664558443854.4955571
  s21_decimal decimal = {{0x91B5F8B3, 0xCEB2D42A, 0xA0D2B36, 0x70000}};
  // -311077020664558443854.4955571
  s21_decimal decimal_check = {{0x91B5F8B3, 0xCEB2D42A, 0xA0D2B36, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok666) {
  // -311077020664558443854.4955571
  s21_decimal decimal = {{0x91B5F8B3, 0xCEB2D42A, 0xA0D2B36, 0x80070000}};
  // 311077020664558443854.4955571
  s21_decimal decimal_check = {{0x91B5F8B3, 0xCEB2D42A, 0xA0D2B36, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok667) {
  // 3.7671877098664416926980883530
  s21_decimal decimal = {{0x8DBC44A, 0x995466F5, 0x79B97245, 0x1C0000}};
  // -3.7671877098664416926980883530
  s21_decimal decimal_check = {{0x8DBC44A, 0x995466F5, 0x79B97245, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok668) {
  // -3.7671877098664416926980883530
  s21_decimal decimal = {{0x8DBC44A, 0x995466F5, 0x79B97245, 0x801C0000}};
  // 3.7671877098664416926980883530
  s21_decimal decimal_check = {{0x8DBC44A, 0x995466F5, 0x79B97245, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok669) {
  // -967513672211158867637770335.3
  s21_decimal decimal = {{0x607AF3B9, 0xA90EE1CF, 0x1F4315E4, 0x80010000}};
  // 967513672211158867637770335.3
  s21_decimal decimal_check = {{0x607AF3B9, 0xA90EE1CF, 0x1F4315E4, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok670) {
  // 967513672211158867637770335.3
  s21_decimal decimal = {{0x607AF3B9, 0xA90EE1CF, 0x1F4315E4, 0x10000}};
  // -967513672211158867637770335.3
  s21_decimal decimal_check = {
      {0x607AF3B9, 0xA90EE1CF, 0x1F4315E4, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok671) {
  // 38498.641608826781155397574344
  s21_decimal decimal = {{0x30959EC8, 0x80650782, 0x7C655477, 0x180000}};
  // -38498.641608826781155397574344
  s21_decimal decimal_check = {
      {0x30959EC8, 0x80650782, 0x7C655477, 0x80180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok672) {
  // -38498.641608826781155397574344
  s21_decimal decimal = {{0x30959EC8, 0x80650782, 0x7C655477, 0x80180000}};
  // 38498.641608826781155397574344
  s21_decimal decimal_check = {{0x30959EC8, 0x80650782, 0x7C655477, 0x180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok673) {
  // -71236.00489546778547498822342
  s21_decimal decimal = {{0x5E7CAAC6, 0x5592C8F4, 0x17048114, 0x80170000}};
  // 71236.00489546778547498822342
  s21_decimal decimal_check = {{0x5E7CAAC6, 0x5592C8F4, 0x17048114, 0x170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok674) {
  // 71236.00489546778547498822342
  s21_decimal decimal = {{0x5E7CAAC6, 0x5592C8F4, 0x17048114, 0x170000}};
  // -71236.00489546778547498822342
  s21_decimal decimal_check = {
      {0x5E7CAAC6, 0x5592C8F4, 0x17048114, 0x80170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok675) {
  // 193625519496582.73322276379192
  s21_decimal decimal = {{0xE57A5A38, 0x6F244181, 0x3E9053DC, 0xE0000}};
  // -193625519496582.73322276379192
  s21_decimal decimal_check = {
      {0xE57A5A38, 0x6F244181, 0x3E9053DC, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok676) {
  // -193625519496582.73322276379192
  s21_decimal decimal = {{0xE57A5A38, 0x6F244181, 0x3E9053DC, 0x800E0000}};
  // 193625519496582.73322276379192
  s21_decimal decimal_check = {{0xE57A5A38, 0x6F244181, 0x3E9053DC, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok677) {
  // 408199057216532927237.43497659
  s21_decimal decimal = {{0x24581DBB, 0x34187C7E, 0x83E56F43, 0x80000}};
  // -408199057216532927237.43497659
  s21_decimal decimal_check = {
      {0x24581DBB, 0x34187C7E, 0x83E56F43, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok678) {
  // -408199057216532927237.43497659
  s21_decimal decimal = {{0x24581DBB, 0x34187C7E, 0x83E56F43, 0x80080000}};
  // 408199057216532927237.43497659
  s21_decimal decimal_check = {{0x24581DBB, 0x34187C7E, 0x83E56F43, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok679) {
  // -789428554950431891535385.56050
  s21_decimal decimal = {{0xBB8CC092, 0x7F2B3A7E, 0xFF13FFE3, 0x80050000}};
  // 789428554950431891535385.56050
  s21_decimal decimal_check = {{0xBB8CC092, 0x7F2B3A7E, 0xFF13FFE3, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok680) {
  // 789428554950431891535385.56050
  s21_decimal decimal = {{0xBB8CC092, 0x7F2B3A7E, 0xFF13FFE3, 0x50000}};
  // -789428554950431891535385.56050
  s21_decimal decimal_check = {
      {0xBB8CC092, 0x7F2B3A7E, 0xFF13FFE3, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok681) {
  // -16320961587.434330846592909538
  s21_decimal decimal = {{0xDB1640E2, 0x81E77C2B, 0x34BC620C, 0x80120000}};
  // 16320961587.434330846592909538
  s21_decimal decimal_check = {{0xDB1640E2, 0x81E77C2B, 0x34BC620C, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok682) {
  // 16320961587.434330846592909538
  s21_decimal decimal = {{0xDB1640E2, 0x81E77C2B, 0x34BC620C, 0x120000}};
  // -16320961587.434330846592909538
  s21_decimal decimal_check = {
      {0xDB1640E2, 0x81E77C2B, 0x34BC620C, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok683) {
  // -7575836313015457255204617487.8
  s21_decimal decimal = {{0x2464E29E, 0x7BA3AF2B, 0xF4C9D966, 0x80010000}};
  // 7575836313015457255204617487.8
  s21_decimal decimal_check = {{0x2464E29E, 0x7BA3AF2B, 0xF4C9D966, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok684) {
  // 7575836313015457255204617487.8
  s21_decimal decimal = {{0x2464E29E, 0x7BA3AF2B, 0xF4C9D966, 0x10000}};
  // -7575836313015457255204617487.8
  s21_decimal decimal_check = {
      {0x2464E29E, 0x7BA3AF2B, 0xF4C9D966, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok685) {
  // -7122663615.9332396743512235380
  s21_decimal decimal = {{0x44271D74, 0x239E94EA, 0xE6254AE3, 0x80130000}};
  // 7122663615.9332396743512235380
  s21_decimal decimal_check = {{0x44271D74, 0x239E94EA, 0xE6254AE3, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok686) {
  // 7122663615.9332396743512235380
  s21_decimal decimal = {{0x44271D74, 0x239E94EA, 0xE6254AE3, 0x130000}};
  // -7122663615.9332396743512235380
  s21_decimal decimal_check = {
      {0x44271D74, 0x239E94EA, 0xE6254AE3, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok687) {
  // 47478.313259881987700553638758
  s21_decimal decimal = {{0xC58F6366, 0x1D95F0B4, 0x996923E7, 0x180000}};
  // -47478.313259881987700553638758
  s21_decimal decimal_check = {
      {0xC58F6366, 0x1D95F0B4, 0x996923E7, 0x80180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok688) {
  // -47478.313259881987700553638758
  s21_decimal decimal = {{0xC58F6366, 0x1D95F0B4, 0x996923E7, 0x80180000}};
  // 47478.313259881987700553638758
  s21_decimal decimal_check = {{0xC58F6366, 0x1D95F0B4, 0x996923E7, 0x180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok689) {
  // -4758688310.6049169487039918664
  s21_decimal decimal = {{0xA4157248, 0x45055A66, 0x99C2F276, 0x80130000}};
  // 4758688310.6049169487039918664
  s21_decimal decimal_check = {{0xA4157248, 0x45055A66, 0x99C2F276, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok690) {
  // 4758688310.6049169487039918664
  s21_decimal decimal = {{0xA4157248, 0x45055A66, 0x99C2F276, 0x130000}};
  // -4758688310.6049169487039918664
  s21_decimal decimal_check = {
      {0xA4157248, 0x45055A66, 0x99C2F276, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok691) {
  // -7759553663118364923509.460394
  s21_decimal decimal = {{0x6E41CDAA, 0xF41B262C, 0x19128D66, 0x80060000}};
  // 7759553663118364923509.460394
  s21_decimal decimal_check = {{0x6E41CDAA, 0xF41B262C, 0x19128D66, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok692) {
  // 7759553663118364923509.460394
  s21_decimal decimal = {{0x6E41CDAA, 0xF41B262C, 0x19128D66, 0x60000}};
  // -7759553663118364923509.460394
  s21_decimal decimal_check = {
      {0x6E41CDAA, 0xF41B262C, 0x19128D66, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok693) {
  // -490.94850073769253372538799119
  s21_decimal decimal = {{0x4D36440F, 0x643BCEFF, 0x9EA24EE3, 0x801A0000}};
  // 490.94850073769253372538799119
  s21_decimal decimal_check = {{0x4D36440F, 0x643BCEFF, 0x9EA24EE3, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok694) {
  // 490.94850073769253372538799119
  s21_decimal decimal = {{0x4D36440F, 0x643BCEFF, 0x9EA24EE3, 0x1A0000}};
  // -490.94850073769253372538799119
  s21_decimal decimal_check = {
      {0x4D36440F, 0x643BCEFF, 0x9EA24EE3, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok695) {
  // 7940577688413.027735940807540
  s21_decimal decimal = {{0xC282BB74, 0x743068B, 0x19A84ABB, 0xF0000}};
  // -7940577688413.027735940807540
  s21_decimal decimal_check = {{0xC282BB74, 0x743068B, 0x19A84ABB, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok696) {
  // -7940577688413.027735940807540
  s21_decimal decimal = {{0xC282BB74, 0x743068B, 0x19A84ABB, 0x800F0000}};
  // 7940577688413.027735940807540
  s21_decimal decimal_check = {{0xC282BB74, 0x743068B, 0x19A84ABB, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok697) {
  // -5517432521.5405139583164130733
  s21_decimal decimal = {{0x670EA5AD, 0x32BD3BFC, 0xB24721D3, 0x80130000}};
  // 5517432521.5405139583164130733
  s21_decimal decimal_check = {{0x670EA5AD, 0x32BD3BFC, 0xB24721D3, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok698) {
  // 5517432521.5405139583164130733
  s21_decimal decimal = {{0x670EA5AD, 0x32BD3BFC, 0xB24721D3, 0x130000}};
  // -5517432521.5405139583164130733
  s21_decimal decimal_check = {
      {0x670EA5AD, 0x32BD3BFC, 0xB24721D3, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok699) {
  // -3022805040914609972.2991986999
  s21_decimal decimal = {{0x8BC6937, 0x2E0C6D5F, 0x61AC0EA8, 0x800A0000}};
  // 3022805040914609972.2991986999
  s21_decimal decimal_check = {{0x8BC6937, 0x2E0C6D5F, 0x61AC0EA8, 0xA0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok700) {
  // 3022805040914609972.2991986999
  s21_decimal decimal = {{0x8BC6937, 0x2E0C6D5F, 0x61AC0EA8, 0xA0000}};
  // -3022805040914609972.2991986999
  s21_decimal decimal_check = {{0x8BC6937, 0x2E0C6D5F, 0x61AC0EA8, 0x800A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok701) {
  // -722193033090.31456454691566415
  s21_decimal decimal = {{0x1DDCB34F, 0x26EE55F0, 0xE95A6855, 0x80110000}};
  // 722193033090.31456454691566415
  s21_decimal decimal_check = {{0x1DDCB34F, 0x26EE55F0, 0xE95A6855, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok702) {
  // 722193033090.31456454691566415
  s21_decimal decimal = {{0x1DDCB34F, 0x26EE55F0, 0xE95A6855, 0x110000}};
  // -722193033090.31456454691566415
  s21_decimal decimal_check = {
      {0x1DDCB34F, 0x26EE55F0, 0xE95A6855, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok703) {
  // -23029433933514704.253009181280
  s21_decimal decimal = {{0x3612BA60, 0x17661D9D, 0x4A698053, 0x800C0000}};
  // 23029433933514704.253009181280
  s21_decimal decimal_check = {{0x3612BA60, 0x17661D9D, 0x4A698053, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok704) {
  // 23029433933514704.253009181280
  s21_decimal decimal = {{0x3612BA60, 0x17661D9D, 0x4A698053, 0xC0000}};
  // -23029433933514704.253009181280
  s21_decimal decimal_check = {
      {0x3612BA60, 0x17661D9D, 0x4A698053, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok705) {
  // 174961.83454409460423697046616
  s21_decimal decimal = {{0x57C31C58, 0x92E37D96, 0x388880F5, 0x170000}};
  // -174961.83454409460423697046616
  s21_decimal decimal_check = {
      {0x57C31C58, 0x92E37D96, 0x388880F5, 0x80170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok706) {
  // -174961.83454409460423697046616
  s21_decimal decimal = {{0x57C31C58, 0x92E37D96, 0x388880F5, 0x80170000}};
  // 174961.83454409460423697046616
  s21_decimal decimal_check = {{0x57C31C58, 0x92E37D96, 0x388880F5, 0x170000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok707) {
  // 7688233523633863979468351.3801
  s21_decimal decimal = {{0x927C0BC9, 0x732A076F, 0xF86B93C0, 0x40000}};
  // -7688233523633863979468351.3801
  s21_decimal decimal_check = {
      {0x927C0BC9, 0x732A076F, 0xF86B93C0, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok708) {
  // -7688233523633863979468351.3801
  s21_decimal decimal = {{0x927C0BC9, 0x732A076F, 0xF86B93C0, 0x80040000}};
  // 7688233523633863979468351.3801
  s21_decimal decimal_check = {{0x927C0BC9, 0x732A076F, 0xF86B93C0, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok709) {
  // 3815631762232.2757778379682438
  s21_decimal decimal = {{0x35E8B286, 0x22AAADB, 0x7B4A2A8B, 0x100000}};
  // -3815631762232.2757778379682438
  s21_decimal decimal_check = {{0x35E8B286, 0x22AAADB, 0x7B4A2A8B, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok710) {
  // -3815631762232.2757778379682438
  s21_decimal decimal = {{0x35E8B286, 0x22AAADB, 0x7B4A2A8B, 0x80100000}};
  // 3815631762232.2757778379682438
  s21_decimal decimal_check = {{0x35E8B286, 0x22AAADB, 0x7B4A2A8B, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok711) {
  // -46958264034637590.844321113097
  s21_decimal decimal = {{0xAA152409, 0x2006919A, 0x97BAF732, 0x800C0000}};
  // 46958264034637590.844321113097
  s21_decimal decimal_check = {{0xAA152409, 0x2006919A, 0x97BAF732, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok712) {
  // 46958264034637590.844321113097
  s21_decimal decimal = {{0xAA152409, 0x2006919A, 0x97BAF732, 0xC0000}};
  // -46958264034637590.844321113097
  s21_decimal decimal_check = {
      {0xAA152409, 0x2006919A, 0x97BAF732, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok713) {
  // -13079482184230054725878943216
  s21_decimal decimal = {{0xD70A0DF0, 0xF4D591A7, 0x2A431815, 0x80000000}};
  // 13079482184230054725878943216
  s21_decimal decimal_check = {{0xD70A0DF0, 0xF4D591A7, 0x2A431815, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok714) {
  // 13079482184230054725878943216
  s21_decimal decimal = {{0xD70A0DF0, 0xF4D591A7, 0x2A431815, 0x0}};
  // -13079482184230054725878943216
  s21_decimal decimal_check = {
      {0xD70A0DF0, 0xF4D591A7, 0x2A431815, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok715) {
  // -304613793051866203875.93720482
  s21_decimal decimal = {{0x186292A2, 0xFABB014A, 0x626D0FF8, 0x80080000}};
  // 304613793051866203875.93720482
  s21_decimal decimal_check = {{0x186292A2, 0xFABB014A, 0x626D0FF8, 0x80000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok716) {
  // 304613793051866203875.93720482
  s21_decimal decimal = {{0x186292A2, 0xFABB014A, 0x626D0FF8, 0x80000}};
  // -304613793051866203875.93720482
  s21_decimal decimal_check = {
      {0x186292A2, 0xFABB014A, 0x626D0FF8, 0x80080000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok717) {
  // 71864352877721119585710.444415
  s21_decimal decimal = {{0x906D0F7F, 0xB6E9F6DB, 0xE834CCA7, 0x60000}};
  // -71864352877721119585710.444415
  s21_decimal decimal_check = {
      {0x906D0F7F, 0xB6E9F6DB, 0xE834CCA7, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok718) {
  // -71864352877721119585710.444415
  s21_decimal decimal = {{0x906D0F7F, 0xB6E9F6DB, 0xE834CCA7, 0x80060000}};
  // 71864352877721119585710.444415
  s21_decimal decimal_check = {{0x906D0F7F, 0xB6E9F6DB, 0xE834CCA7, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok719) {
  // 3.1768777596019896776498905496
  s21_decimal decimal = {{0xC7D48198, 0x5736C818, 0x66A68454, 0x1C0000}};
  // -3.1768777596019896776498905496
  s21_decimal decimal_check = {
      {0xC7D48198, 0x5736C818, 0x66A68454, 0x801C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok720) {
  // -3.1768777596019896776498905496
  s21_decimal decimal = {{0xC7D48198, 0x5736C818, 0x66A68454, 0x801C0000}};
  // 3.1768777596019896776498905496
  s21_decimal decimal_check = {{0xC7D48198, 0x5736C818, 0x66A68454, 0x1C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok721) {
  // 715.39030503466615660582670958
  s21_decimal decimal = {{0xE6E6126E, 0x77E021DC, 0xE727B2F6, 0x1A0000}};
  // -715.39030503466615660582670958
  s21_decimal decimal_check = {
      {0xE6E6126E, 0x77E021DC, 0xE727B2F6, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok722) {
  // -715.39030503466615660582670958
  s21_decimal decimal = {{0xE6E6126E, 0x77E021DC, 0xE727B2F6, 0x801A0000}};
  // 715.39030503466615660582670958
  s21_decimal decimal_check = {{0xE6E6126E, 0x77E021DC, 0xE727B2F6, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok723) {
  // -67.152452596397860376114252119
  s21_decimal decimal = {{0x8BCE4957, 0xA320E48E, 0xD8FB34F5, 0x801B0000}};
  // 67.152452596397860376114252119
  s21_decimal decimal_check = {{0x8BCE4957, 0xA320E48E, 0xD8FB34F5, 0x1B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok724) {
  // 67.152452596397860376114252119
  s21_decimal decimal = {{0x8BCE4957, 0xA320E48E, 0xD8FB34F5, 0x1B0000}};
  // -67.152452596397860376114252119
  s21_decimal decimal_check = {
      {0x8BCE4957, 0xA320E48E, 0xD8FB34F5, 0x801B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok725) {
  // 702300879.95327828693099047933
  s21_decimal decimal = {{0xF7656BFD, 0xEB4C071D, 0xE2ECF79A, 0x140000}};
  // -702300879.95327828693099047933
  s21_decimal decimal_check = {
      {0xF7656BFD, 0xEB4C071D, 0xE2ECF79A, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok726) {
  // -702300879.95327828693099047933
  s21_decimal decimal = {{0xF7656BFD, 0xEB4C071D, 0xE2ECF79A, 0x80140000}};
  // 702300879.95327828693099047933
  s21_decimal decimal_check = {{0xF7656BFD, 0xEB4C071D, 0xE2ECF79A, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok727) {
  // 553728783.22350676089188517524
  s21_decimal decimal = {{0x6FD60694, 0xB182FB09, 0xB2EB5F14, 0x140000}};
  // -553728783.22350676089188517524
  s21_decimal decimal_check = {
      {0x6FD60694, 0xB182FB09, 0xB2EB5F14, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok728) {
  // -553728783.22350676089188517524
  s21_decimal decimal = {{0x6FD60694, 0xB182FB09, 0xB2EB5F14, 0x80140000}};
  // 553728783.22350676089188517524
  s21_decimal decimal_check = {{0x6FD60694, 0xB182FB09, 0xB2EB5F14, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok729) {
  // -2629806028.5296848613679768191
  s21_decimal decimal = {{0x4C47227F, 0xAC76516C, 0x54F93EE0, 0x80130000}};
  // 2629806028.5296848613679768191
  s21_decimal decimal_check = {{0x4C47227F, 0xAC76516C, 0x54F93EE0, 0x130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok730) {
  // 2629806028.5296848613679768191
  s21_decimal decimal = {{0x4C47227F, 0xAC76516C, 0x54F93EE0, 0x130000}};
  // -2629806028.5296848613679768191
  s21_decimal decimal_check = {
      {0x4C47227F, 0xAC76516C, 0x54F93EE0, 0x80130000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok731) {
  // -37301566276730339101787998538
  s21_decimal decimal = {{0xAA36C94A, 0xB79758E9, 0x788721E7, 0x80000000}};
  // 37301566276730339101787998538
  s21_decimal decimal_check = {{0xAA36C94A, 0xB79758E9, 0x788721E7, 0x0}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok732) {
  // 37301566276730339101787998538
  s21_decimal decimal = {{0xAA36C94A, 0xB79758E9, 0x788721E7, 0x0}};
  // -37301566276730339101787998538
  s21_decimal decimal_check = {
      {0xAA36C94A, 0xB79758E9, 0x788721E7, 0x80000000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok733) {
  // -19886670070506083349797941.599
  s21_decimal decimal = {{0xED8A315F, 0xB27F7C0C, 0x4041DE30, 0x80030000}};
  // 19886670070506083349797941.599
  s21_decimal decimal_check = {{0xED8A315F, 0xB27F7C0C, 0x4041DE30, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok734) {
  // 19886670070506083349797941.599
  s21_decimal decimal = {{0xED8A315F, 0xB27F7C0C, 0x4041DE30, 0x30000}};
  // -19886670070506083349797941.599
  s21_decimal decimal_check = {
      {0xED8A315F, 0xB27F7C0C, 0x4041DE30, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok735) {
  // -3754213648112.7256866352070280
  s21_decimal decimal = {{0x4808FE88, 0xA1181C06, 0x794E20A0, 0x80100000}};
  // 3754213648112.7256866352070280
  s21_decimal decimal_check = {{0x4808FE88, 0xA1181C06, 0x794E20A0, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok736) {
  // 3754213648112.7256866352070280
  s21_decimal decimal = {{0x4808FE88, 0xA1181C06, 0x794E20A0, 0x100000}};
  // -3754213648112.7256866352070280
  s21_decimal decimal_check = {
      {0x4808FE88, 0xA1181C06, 0x794E20A0, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok737) {
  // -20864287343724.448209815726664
  s21_decimal decimal = {{0x5897EA48, 0x457A041A, 0x436A88B3, 0x800F0000}};
  // 20864287343724.448209815726664
  s21_decimal decimal_check = {{0x5897EA48, 0x457A041A, 0x436A88B3, 0xF0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok738) {
  // 20864287343724.448209815726664
  s21_decimal decimal = {{0x5897EA48, 0x457A041A, 0x436A88B3, 0xF0000}};
  // -20864287343724.448209815726664
  s21_decimal decimal_check = {
      {0x5897EA48, 0x457A041A, 0x436A88B3, 0x800F0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok739) {
  // -18333.761850490314285328278117
  s21_decimal decimal = {{0xF5F2A265, 0x681BB955, 0x3B3D5515, 0x80180000}};
  // 18333.761850490314285328278117
  s21_decimal decimal_check = {{0xF5F2A265, 0x681BB955, 0x3B3D5515, 0x180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok740) {
  // 18333.761850490314285328278117
  s21_decimal decimal = {{0xF5F2A265, 0x681BB955, 0x3B3D5515, 0x180000}};
  // -18333.761850490314285328278117
  s21_decimal decimal_check = {
      {0xF5F2A265, 0x681BB955, 0x3B3D5515, 0x80180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok741) {
  // 17.26662158134174659568869492
  s21_decimal decimal = {{0xD8EE2074, 0x265E79D6, 0x59442EF, 0x1A0000}};
  // -17.26662158134174659568869492
  s21_decimal decimal_check = {{0xD8EE2074, 0x265E79D6, 0x59442EF, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok742) {
  // -17.26662158134174659568869492
  s21_decimal decimal = {{0xD8EE2074, 0x265E79D6, 0x59442EF, 0x801A0000}};
  // 17.26662158134174659568869492
  s21_decimal decimal_check = {{0xD8EE2074, 0x265E79D6, 0x59442EF, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok743) {
  // -4467.5276786603099348176850290
  s21_decimal decimal = {{0xC4E1CD72, 0x6BDB519C, 0x905A85D7, 0x80190000}};
  // 4467.5276786603099348176850290
  s21_decimal decimal_check = {{0xC4E1CD72, 0x6BDB519C, 0x905A85D7, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok744) {
  // 4467.5276786603099348176850290
  s21_decimal decimal = {{0xC4E1CD72, 0x6BDB519C, 0x905A85D7, 0x190000}};
  // -4467.5276786603099348176850290
  s21_decimal decimal_check = {
      {0xC4E1CD72, 0x6BDB519C, 0x905A85D7, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok745) {
  // -362724438094.46369572362017671
  s21_decimal decimal = {{0xC1125B87, 0xFA5EAAF2, 0x7533DCBE, 0x80110000}};
  // 362724438094.46369572362017671
  s21_decimal decimal_check = {{0xC1125B87, 0xFA5EAAF2, 0x7533DCBE, 0x110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok746) {
  // 362724438094.46369572362017671
  s21_decimal decimal = {{0xC1125B87, 0xFA5EAAF2, 0x7533DCBE, 0x110000}};
  // -362724438094.46369572362017671
  s21_decimal decimal_check = {
      {0xC1125B87, 0xFA5EAAF2, 0x7533DCBE, 0x80110000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok747) {
  // -7605.7021001795924025561664762
  s21_decimal decimal = {{0xCF514CFA, 0x25695B9B, 0xF5C0E4AA, 0x80190000}};
  // 7605.7021001795924025561664762
  s21_decimal decimal_check = {{0xCF514CFA, 0x25695B9B, 0xF5C0E4AA, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok748) {
  // 7605.7021001795924025561664762
  s21_decimal decimal = {{0xCF514CFA, 0x25695B9B, 0xF5C0E4AA, 0x190000}};
  // -7605.7021001795924025561664762
  s21_decimal decimal_check = {
      {0xCF514CFA, 0x25695B9B, 0xF5C0E4AA, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok749) {
  // -6320.8176491370321279168857014
  s21_decimal decimal = {{0xCC6CC3B6, 0x8A1F97E8, 0xCC3C9401, 0x80190000}};
  // 6320.8176491370321279168857014
  s21_decimal decimal_check = {{0xCC6CC3B6, 0x8A1F97E8, 0xCC3C9401, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok750) {
  // 6320.8176491370321279168857014
  s21_decimal decimal = {{0xCC6CC3B6, 0x8A1F97E8, 0xCC3C9401, 0x190000}};
  // -6320.8176491370321279168857014
  s21_decimal decimal_check = {
      {0xCC6CC3B6, 0x8A1F97E8, 0xCC3C9401, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok751) {
  // 117642423742406.17917792307743
  s21_decimal decimal = {{0x1FF2CA1F, 0xFD692006, 0x26032738, 0xE0000}};
  // -117642423742406.17917792307743
  s21_decimal decimal_check = {
      {0x1FF2CA1F, 0xFD692006, 0x26032738, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok752) {
  // -117642423742406.17917792307743
  s21_decimal decimal = {{0x1FF2CA1F, 0xFD692006, 0x26032738, 0x800E0000}};
  // 117642423742406.17917792307743
  s21_decimal decimal_check = {{0x1FF2CA1F, 0xFD692006, 0x26032738, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok753) {
  // 1241972744872041109370763116.6
  s21_decimal decimal = {{0x2F11AA3E, 0x143B0D2C, 0x28215B96, 0x10000}};
  // -1241972744872041109370763116.6
  s21_decimal decimal_check = {
      {0x2F11AA3E, 0x143B0D2C, 0x28215B96, 0x80010000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok754) {
  // -1241972744872041109370763116.6
  s21_decimal decimal = {{0x2F11AA3E, 0x143B0D2C, 0x28215B96, 0x80010000}};
  // 1241972744872041109370763116.6
  s21_decimal decimal_check = {{0x2F11AA3E, 0x143B0D2C, 0x28215B96, 0x10000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok755) {
  // 30342.861383397098561691465239
  s21_decimal decimal = {{0x2B2C3617, 0x90B65CE7, 0x620B06D3, 0x180000}};
  // -30342.861383397098561691465239
  s21_decimal decimal_check = {
      {0x2B2C3617, 0x90B65CE7, 0x620B06D3, 0x80180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok756) {
  // -30342.861383397098561691465239
  s21_decimal decimal = {{0x2B2C3617, 0x90B65CE7, 0x620B06D3, 0x80180000}};
  // 30342.861383397098561691465239
  s21_decimal decimal_check = {{0x2B2C3617, 0x90B65CE7, 0x620B06D3, 0x180000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok757) {
  // 70086944438.030060636448014360
  s21_decimal decimal = {{0x2E4CC018, 0x2110157E, 0xE2768FC7, 0x120000}};
  // -70086944438.030060636448014360
  s21_decimal decimal_check = {
      {0x2E4CC018, 0x2110157E, 0xE2768FC7, 0x80120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok758) {
  // -70086944438.030060636448014360
  s21_decimal decimal = {{0x2E4CC018, 0x2110157E, 0xE2768FC7, 0x80120000}};
  // 70086944438.030060636448014360
  s21_decimal decimal_check = {{0x2E4CC018, 0x2110157E, 0xE2768FC7, 0x120000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok759) {
  // 566482390624046530267.5970491
  s21_decimal decimal = {{0x6F16D9BB, 0x4B709662, 0x124DD51F, 0x70000}};
  // -566482390624046530267.5970491
  s21_decimal decimal_check = {
      {0x6F16D9BB, 0x4B709662, 0x124DD51F, 0x80070000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok760) {
  // -566482390624046530267.5970491
  s21_decimal decimal = {{0x6F16D9BB, 0x4B709662, 0x124DD51F, 0x80070000}};
  // 566482390624046530267.5970491
  s21_decimal decimal_check = {{0x6F16D9BB, 0x4B709662, 0x124DD51F, 0x70000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok761) {
  // -41054218444853761729128.610293
  s21_decimal decimal = {{0xEF38B9F5, 0x6157C9BB, 0x84A740E9, 0x80060000}};
  // 41054218444853761729128.610293
  s21_decimal decimal_check = {{0xEF38B9F5, 0x6157C9BB, 0x84A740E9, 0x60000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok762) {
  // 41054218444853761729128.610293
  s21_decimal decimal = {{0xEF38B9F5, 0x6157C9BB, 0x84A740E9, 0x60000}};
  // -41054218444853761729128.610293
  s21_decimal decimal_check = {
      {0xEF38B9F5, 0x6157C9BB, 0x84A740E9, 0x80060000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok763) {
  // -425640348068531825729774558.82
  s21_decimal decimal = {{0xF8F8030A, 0x5DEFF074, 0x898824F6, 0x80020000}};
  // 425640348068531825729774558.82
  s21_decimal decimal_check = {{0xF8F8030A, 0x5DEFF074, 0x898824F6, 0x20000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok764) {
  // 425640348068531825729774558.82
  s21_decimal decimal = {{0xF8F8030A, 0x5DEFF074, 0x898824F6, 0x20000}};
  // -425640348068531825729774558.82
  s21_decimal decimal_check = {
      {0xF8F8030A, 0x5DEFF074, 0x898824F6, 0x80020000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok765) {
  // 6930.5025380379969951990866737
  s21_decimal decimal = {{0xCCCE331, 0x141BCF2F, 0xDFEFC5FA, 0x190000}};
  // -6930.5025380379969951990866737
  s21_decimal decimal_check = {{0xCCCE331, 0x141BCF2F, 0xDFEFC5FA, 0x80190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok766) {
  // -6930.5025380379969951990866737
  s21_decimal decimal = {{0xCCCE331, 0x141BCF2F, 0xDFEFC5FA, 0x80190000}};
  // 6930.5025380379969951990866737
  s21_decimal decimal_check = {{0xCCCE331, 0x141BCF2F, 0xDFEFC5FA, 0x190000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok767) {
  // -4893478018705063611335618.7925
  s21_decimal decimal = {{0x58F2E915, 0x71EE87C9, 0x9E1DE6C5, 0x80040000}};
  // 4893478018705063611335618.7925
  s21_decimal decimal_check = {{0x58F2E915, 0x71EE87C9, 0x9E1DE6C5, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok768) {
  // 4893478018705063611335618.7925
  s21_decimal decimal = {{0x58F2E915, 0x71EE87C9, 0x9E1DE6C5, 0x40000}};
  // -4893478018705063611335618.7925
  s21_decimal decimal_check = {
      {0x58F2E915, 0x71EE87C9, 0x9E1DE6C5, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok769) {
  // -3719188876231.7200053704267359
  s21_decimal decimal = {{0xCD6F165F, 0xBF46F2F9, 0x782C68C9, 0x80100000}};
  // 3719188876231.7200053704267359
  s21_decimal decimal_check = {{0xCD6F165F, 0xBF46F2F9, 0x782C68C9, 0x100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok770) {
  // 3719188876231.7200053704267359
  s21_decimal decimal = {{0xCD6F165F, 0xBF46F2F9, 0x782C68C9, 0x100000}};
  // -3719188876231.7200053704267359
  s21_decimal decimal_check = {
      {0xCD6F165F, 0xBF46F2F9, 0x782C68C9, 0x80100000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok771) {
  // -19155910711381619.204342790599
  s21_decimal decimal = {{0xF0CDB9C7, 0x75FE835D, 0x3DE565E0, 0x800C0000}};
  // 19155910711381619.204342790599
  s21_decimal decimal_check = {{0xF0CDB9C7, 0x75FE835D, 0x3DE565E0, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok772) {
  // 19155910711381619.204342790599
  s21_decimal decimal = {{0xF0CDB9C7, 0x75FE835D, 0x3DE565E0, 0xC0000}};
  // -19155910711381619.204342790599
  s21_decimal decimal_check = {
      {0xF0CDB9C7, 0x75FE835D, 0x3DE565E0, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok773) {
  // -368.97585215469170781927729120
  s21_decimal decimal = {{0x356767E0, 0x81087394, 0x7738F796, 0x801A0000}};
  // 368.97585215469170781927729120
  s21_decimal decimal_check = {{0x356767E0, 0x81087394, 0x7738F796, 0x1A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok774) {
  // 368.97585215469170781927729120
  s21_decimal decimal = {{0x356767E0, 0x81087394, 0x7738F796, 0x1A0000}};
  // -368.97585215469170781927729120
  s21_decimal decimal_check = {
      {0x356767E0, 0x81087394, 0x7738F796, 0x801A0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok775) {
  // -18065466336409663317.087784854
  s21_decimal decimal = {{0xF0068F96, 0x71E89536, 0x3A5F674C, 0x80090000}};
  // 18065466336409663317.087784854
  s21_decimal decimal_check = {{0xF0068F96, 0x71E89536, 0x3A5F674C, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok776) {
  // 18065466336409663317.087784854
  s21_decimal decimal = {{0xF0068F96, 0x71E89536, 0x3A5F674C, 0x90000}};
  // -18065466336409663317.087784854
  s21_decimal decimal_check = {
      {0xF0068F96, 0x71E89536, 0x3A5F674C, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok777) {
  // -260712165342967081086876.07434
  s21_decimal decimal = {{0x24E5868A, 0x4A8DB43E, 0x543D9AD8, 0x80050000}};
  // 260712165342967081086876.07434
  s21_decimal decimal_check = {{0x24E5868A, 0x4A8DB43E, 0x543D9AD8, 0x50000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok778) {
  // 260712165342967081086876.07434
  s21_decimal decimal = {{0x24E5868A, 0x4A8DB43E, 0x543D9AD8, 0x50000}};
  // -260712165342967081086876.07434
  s21_decimal decimal_check = {
      {0x24E5868A, 0x4A8DB43E, 0x543D9AD8, 0x80050000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok779) {
  // -617384269597993645.39618009822
  s21_decimal decimal = {{0x35D5A2DE, 0xC858D3A2, 0xC77CD46F, 0x800B0000}};
  // 617384269597993645.39618009822
  s21_decimal decimal_check = {{0x35D5A2DE, 0xC858D3A2, 0xC77CD46F, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok780) {
  // 617384269597993645.39618009822
  s21_decimal decimal = {{0x35D5A2DE, 0xC858D3A2, 0xC77CD46F, 0xB0000}};
  // -617384269597993645.39618009822
  s21_decimal decimal_check = {
      {0x35D5A2DE, 0xC858D3A2, 0xC77CD46F, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok781) {
  // -420012885002270.45303708462071
  s21_decimal decimal = {{0x47C6ABF7, 0xF4F2CCE9, 0x87B6A6CB, 0x800E0000}};
  // 420012885002270.45303708462071
  s21_decimal decimal_check = {{0x47C6ABF7, 0xF4F2CCE9, 0x87B6A6CB, 0xE0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok782) {
  // 420012885002270.45303708462071
  s21_decimal decimal = {{0x47C6ABF7, 0xF4F2CCE9, 0x87B6A6CB, 0xE0000}};
  // -420012885002270.45303708462071
  s21_decimal decimal_check = {
      {0x47C6ABF7, 0xF4F2CCE9, 0x87B6A6CB, 0x800E0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok783) {
  // 1663517.787555391667512695470
  s21_decimal decimal = {{0x7DDA5AAE, 0xF637FC56, 0x5600797, 0x150000}};
  // -1663517.787555391667512695470
  s21_decimal decimal_check = {{0x7DDA5AAE, 0xF637FC56, 0x5600797, 0x80150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok784) {
  // -1663517.787555391667512695470
  s21_decimal decimal = {{0x7DDA5AAE, 0xF637FC56, 0x5600797, 0x80150000}};
  // 1663517.787555391667512695470
  s21_decimal decimal_check = {{0x7DDA5AAE, 0xF637FC56, 0x5600797, 0x150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok785) {
  // -15030275251325730.575364780666
  s21_decimal decimal = {{0x4005F27A, 0x6F18F59, 0x3090C096, 0x800C0000}};
  // 15030275251325730.575364780666
  s21_decimal decimal_check = {{0x4005F27A, 0x6F18F59, 0x3090C096, 0xC0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok786) {
  // 15030275251325730.575364780666
  s21_decimal decimal = {{0x4005F27A, 0x6F18F59, 0x3090C096, 0xC0000}};
  // -15030275251325730.575364780666
  s21_decimal decimal_check = {{0x4005F27A, 0x6F18F59, 0x3090C096, 0x800C0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok787) {
  // -776912281724424348.86526562650
  s21_decimal decimal = {{0x8057F15A, 0x61A714D9, 0xFB08AD7E, 0x800B0000}};
  // 776912281724424348.86526562650
  s21_decimal decimal_check = {{0x8057F15A, 0x61A714D9, 0xFB08AD7E, 0xB0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok788) {
  // 776912281724424348.86526562650
  s21_decimal decimal = {{0x8057F15A, 0x61A714D9, 0xFB08AD7E, 0xB0000}};
  // -776912281724424348.86526562650
  s21_decimal decimal_check = {
      {0x8057F15A, 0x61A714D9, 0xFB08AD7E, 0x800B0000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok789) {
  // 4531350170047949434475552.1436
  s21_decimal decimal = {{0xF086279C, 0x544B4249, 0x926A7339, 0x40000}};
  // -4531350170047949434475552.1436
  s21_decimal decimal_check = {
      {0xF086279C, 0x544B4249, 0x926A7339, 0x80040000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok790) {
  // -4531350170047949434475552.1436
  s21_decimal decimal = {{0xF086279C, 0x544B4249, 0x926A7339, 0x80040000}};
  // 4531350170047949434475552.1436
  s21_decimal decimal_check = {{0xF086279C, 0x544B4249, 0x926A7339, 0x40000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok791) {
  // 53637047493703043440217603.231
  s21_decimal decimal = {{0x93CABC9F, 0xEB46ED7B, 0xAD4F869A, 0x30000}};
  // -53637047493703043440217603.231
  s21_decimal decimal_check = {
      {0x93CABC9F, 0xEB46ED7B, 0xAD4F869A, 0x80030000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok792) {
  // -53637047493703043440217603.231
  s21_decimal decimal = {{0x93CABC9F, 0xEB46ED7B, 0xAD4F869A, 0x80030000}};
  // 53637047493703043440217603.231
  s21_decimal decimal_check = {{0x93CABC9F, 0xEB46ED7B, 0xAD4F869A, 0x30000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok793) {
  // 54804288291732332667.238099876
  s21_decimal decimal = {{0x96D02BA4, 0x5EF398A6, 0xB1150B75, 0x90000}};
  // -54804288291732332667.238099876
  s21_decimal decimal_check = {
      {0x96D02BA4, 0x5EF398A6, 0xB1150B75, 0x80090000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok794) {
  // -54804288291732332667.238099876
  s21_decimal decimal = {{0x96D02BA4, 0x5EF398A6, 0xB1150B75, 0x80090000}};
  // 54804288291732332667.238099876
  s21_decimal decimal_check = {{0x96D02BA4, 0x5EF398A6, 0xB1150B75, 0x90000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok795) {
  // -985382.7201083808279374901426
  s21_decimal decimal = {{0xDAC4B0B2, 0xEF82E661, 0x1FD6E512, 0x80160000}};
  // 985382.7201083808279374901426
  s21_decimal decimal_check = {{0xDAC4B0B2, 0xEF82E661, 0x1FD6E512, 0x160000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok796) {
  // 985382.7201083808279374901426
  s21_decimal decimal = {{0xDAC4B0B2, 0xEF82E661, 0x1FD6E512, 0x160000}};
  // -985382.7201083808279374901426
  s21_decimal decimal_check = {
      {0xDAC4B0B2, 0xEF82E661, 0x1FD6E512, 0x80160000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok797) {
  // 653105353.88405014972875006539
  s21_decimal decimal = {{0xA4DDE24B, 0xB70AAEFE, 0xD3079BD1, 0x140000}};
  // -653105353.88405014972875006539
  s21_decimal decimal_check = {
      {0xA4DDE24B, 0xB70AAEFE, 0xD3079BD1, 0x80140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok798) {
  // -653105353.88405014972875006539
  s21_decimal decimal = {{0xA4DDE24B, 0xB70AAEFE, 0xD3079BD1, 0x80140000}};
  // 653105353.88405014972875006539
  s21_decimal decimal_check = {{0xA4DDE24B, 0xB70AAEFE, 0xD3079BD1, 0x140000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok799) {
  // -13821854.118480016981366644819
  s21_decimal decimal = {{0xAB5BA053, 0x26D4FEF7, 0x2CA92B75, 0x80150000}};
  // 13821854.118480016981366644819
  s21_decimal decimal_check = {{0xAB5BA053, 0x26D4FEF7, 0x2CA92B75, 0x150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

START_TEST(test_negate_ok800) {
  // 13821854.118480016981366644819
  s21_decimal decimal = {{0xAB5BA053, 0x26D4FEF7, 0x2CA92B75, 0x150000}};
  // -13821854.118480016981366644819
  s21_decimal decimal_check = {
      {0xAB5BA053, 0x26D4FEF7, 0x2CA92B75, 0x80150000}};

  s21_decimal result;
  int code = s21_negate(decimal, &result);
  ck_assert_int_eq(code, 0);
  ck_assert_uint_eq(decimal_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(decimal_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(decimal_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(decimal_check.bits[3], result.bits[3]);
}

Suite *s21_negate_cases(void) {
  Suite *s = suite_create(YELLOW "s21_negate_cases" NOCOLOR);
  TCase *tc_core = tcase_create(YELLOW "s21_negate_tc" NOCOLOR);
  tcase_add_test(tc_core, test_negate_ok1);
  tcase_add_test(tc_core, test_negate_ok2);
  tcase_add_test(tc_core, test_negate_ok3);
  tcase_add_test(tc_core, test_negate_ok4);
  tcase_add_test(tc_core, test_negate_ok5);
  tcase_add_test(tc_core, test_negate_ok6);
  tcase_add_test(tc_core, test_negate_ok7);
  tcase_add_test(tc_core, test_negate_ok8);
  tcase_add_test(tc_core, test_negate_ok9);
  tcase_add_test(tc_core, test_negate_ok10);
  tcase_add_test(tc_core, test_negate_ok11);
  tcase_add_test(tc_core, test_negate_ok12);
  tcase_add_test(tc_core, test_negate_ok13);
  tcase_add_test(tc_core, test_negate_ok14);
  tcase_add_test(tc_core, test_negate_ok15);
  tcase_add_test(tc_core, test_negate_ok16);
  tcase_add_test(tc_core, test_negate_ok17);
  tcase_add_test(tc_core, test_negate_ok18);
  tcase_add_test(tc_core, test_negate_ok19);
  tcase_add_test(tc_core, test_negate_ok20);
  tcase_add_test(tc_core, test_negate_ok21);
  tcase_add_test(tc_core, test_negate_ok22);
  tcase_add_test(tc_core, test_negate_ok23);
  tcase_add_test(tc_core, test_negate_ok24);
  tcase_add_test(tc_core, test_negate_ok25);
  tcase_add_test(tc_core, test_negate_ok26);
  tcase_add_test(tc_core, test_negate_ok27);
  tcase_add_test(tc_core, test_negate_ok28);
  tcase_add_test(tc_core, test_negate_ok29);
  tcase_add_test(tc_core, test_negate_ok30);
  tcase_add_test(tc_core, test_negate_ok31);
  tcase_add_test(tc_core, test_negate_ok32);
  tcase_add_test(tc_core, test_negate_ok33);
  tcase_add_test(tc_core, test_negate_ok34);
  tcase_add_test(tc_core, test_negate_ok35);
  tcase_add_test(tc_core, test_negate_ok36);
  tcase_add_test(tc_core, test_negate_ok37);
  tcase_add_test(tc_core, test_negate_ok38);
  tcase_add_test(tc_core, test_negate_ok39);
  tcase_add_test(tc_core, test_negate_ok40);
  tcase_add_test(tc_core, test_negate_ok41);
  tcase_add_test(tc_core, test_negate_ok42);
  tcase_add_test(tc_core, test_negate_ok43);
  tcase_add_test(tc_core, test_negate_ok44);
  tcase_add_test(tc_core, test_negate_ok45);
  tcase_add_test(tc_core, test_negate_ok46);
  tcase_add_test(tc_core, test_negate_ok47);
  tcase_add_test(tc_core, test_negate_ok48);
  tcase_add_test(tc_core, test_negate_ok49);
  tcase_add_test(tc_core, test_negate_ok50);
  tcase_add_test(tc_core, test_negate_ok51);
  tcase_add_test(tc_core, test_negate_ok52);
  tcase_add_test(tc_core, test_negate_ok53);
  tcase_add_test(tc_core, test_negate_ok54);
  tcase_add_test(tc_core, test_negate_ok55);
  tcase_add_test(tc_core, test_negate_ok56);
  tcase_add_test(tc_core, test_negate_ok57);
  tcase_add_test(tc_core, test_negate_ok58);
  tcase_add_test(tc_core, test_negate_ok59);
  tcase_add_test(tc_core, test_negate_ok60);
  tcase_add_test(tc_core, test_negate_ok61);
  tcase_add_test(tc_core, test_negate_ok62);
  tcase_add_test(tc_core, test_negate_ok63);
  tcase_add_test(tc_core, test_negate_ok64);
  tcase_add_test(tc_core, test_negate_ok65);
  tcase_add_test(tc_core, test_negate_ok66);
  tcase_add_test(tc_core, test_negate_ok67);
  tcase_add_test(tc_core, test_negate_ok68);
  tcase_add_test(tc_core, test_negate_ok69);
  tcase_add_test(tc_core, test_negate_ok70);
  tcase_add_test(tc_core, test_negate_ok71);
  tcase_add_test(tc_core, test_negate_ok72);
  tcase_add_test(tc_core, test_negate_ok73);
  tcase_add_test(tc_core, test_negate_ok74);
  tcase_add_test(tc_core, test_negate_ok75);
  tcase_add_test(tc_core, test_negate_ok76);
  tcase_add_test(tc_core, test_negate_ok77);
  tcase_add_test(tc_core, test_negate_ok78);
  tcase_add_test(tc_core, test_negate_ok79);
  tcase_add_test(tc_core, test_negate_ok80);
  tcase_add_test(tc_core, test_negate_ok81);
  tcase_add_test(tc_core, test_negate_ok82);
  tcase_add_test(tc_core, test_negate_ok83);
  tcase_add_test(tc_core, test_negate_ok84);
  tcase_add_test(tc_core, test_negate_ok85);
  tcase_add_test(tc_core, test_negate_ok86);
  tcase_add_test(tc_core, test_negate_ok87);
  tcase_add_test(tc_core, test_negate_ok88);
  tcase_add_test(tc_core, test_negate_ok89);
  tcase_add_test(tc_core, test_negate_ok90);
  tcase_add_test(tc_core, test_negate_ok91);
  tcase_add_test(tc_core, test_negate_ok92);
  tcase_add_test(tc_core, test_negate_ok93);
  tcase_add_test(tc_core, test_negate_ok94);
  tcase_add_test(tc_core, test_negate_ok95);
  tcase_add_test(tc_core, test_negate_ok96);
  tcase_add_test(tc_core, test_negate_ok97);
  tcase_add_test(tc_core, test_negate_ok98);
  tcase_add_test(tc_core, test_negate_ok99);
  tcase_add_test(tc_core, test_negate_ok100);
  tcase_add_test(tc_core, test_negate_ok101);
  tcase_add_test(tc_core, test_negate_ok102);
  tcase_add_test(tc_core, test_negate_ok103);
  tcase_add_test(tc_core, test_negate_ok104);
  tcase_add_test(tc_core, test_negate_ok105);
  tcase_add_test(tc_core, test_negate_ok106);
  tcase_add_test(tc_core, test_negate_ok107);
  tcase_add_test(tc_core, test_negate_ok108);
  tcase_add_test(tc_core, test_negate_ok109);
  tcase_add_test(tc_core, test_negate_ok110);
  tcase_add_test(tc_core, test_negate_ok111);
  tcase_add_test(tc_core, test_negate_ok112);
  tcase_add_test(tc_core, test_negate_ok113);
  tcase_add_test(tc_core, test_negate_ok114);
  tcase_add_test(tc_core, test_negate_ok115);
  tcase_add_test(tc_core, test_negate_ok116);
  tcase_add_test(tc_core, test_negate_ok117);
  tcase_add_test(tc_core, test_negate_ok118);
  tcase_add_test(tc_core, test_negate_ok119);
  tcase_add_test(tc_core, test_negate_ok120);
  tcase_add_test(tc_core, test_negate_ok121);
  tcase_add_test(tc_core, test_negate_ok122);
  tcase_add_test(tc_core, test_negate_ok123);
  tcase_add_test(tc_core, test_negate_ok124);
  tcase_add_test(tc_core, test_negate_ok125);
  tcase_add_test(tc_core, test_negate_ok126);
  tcase_add_test(tc_core, test_negate_ok127);
  tcase_add_test(tc_core, test_negate_ok128);
  tcase_add_test(tc_core, test_negate_ok129);
  tcase_add_test(tc_core, test_negate_ok130);
  tcase_add_test(tc_core, test_negate_ok131);
  tcase_add_test(tc_core, test_negate_ok132);
  tcase_add_test(tc_core, test_negate_ok133);
  tcase_add_test(tc_core, test_negate_ok134);
  tcase_add_test(tc_core, test_negate_ok135);
  tcase_add_test(tc_core, test_negate_ok136);
  tcase_add_test(tc_core, test_negate_ok137);
  tcase_add_test(tc_core, test_negate_ok138);
  tcase_add_test(tc_core, test_negate_ok139);
  tcase_add_test(tc_core, test_negate_ok140);
  tcase_add_test(tc_core, test_negate_ok141);
  tcase_add_test(tc_core, test_negate_ok142);
  tcase_add_test(tc_core, test_negate_ok143);
  tcase_add_test(tc_core, test_negate_ok144);
  tcase_add_test(tc_core, test_negate_ok145);
  tcase_add_test(tc_core, test_negate_ok146);
  tcase_add_test(tc_core, test_negate_ok147);
  tcase_add_test(tc_core, test_negate_ok148);
  tcase_add_test(tc_core, test_negate_ok149);
  tcase_add_test(tc_core, test_negate_ok150);
  tcase_add_test(tc_core, test_negate_ok151);
  tcase_add_test(tc_core, test_negate_ok152);
  tcase_add_test(tc_core, test_negate_ok153);
  tcase_add_test(tc_core, test_negate_ok154);
  tcase_add_test(tc_core, test_negate_ok155);
  tcase_add_test(tc_core, test_negate_ok156);
  tcase_add_test(tc_core, test_negate_ok157);
  tcase_add_test(tc_core, test_negate_ok158);
  tcase_add_test(tc_core, test_negate_ok159);
  tcase_add_test(tc_core, test_negate_ok160);
  tcase_add_test(tc_core, test_negate_ok161);
  tcase_add_test(tc_core, test_negate_ok162);
  tcase_add_test(tc_core, test_negate_ok163);
  tcase_add_test(tc_core, test_negate_ok164);
  tcase_add_test(tc_core, test_negate_ok165);
  tcase_add_test(tc_core, test_negate_ok166);
  tcase_add_test(tc_core, test_negate_ok167);
  tcase_add_test(tc_core, test_negate_ok168);
  tcase_add_test(tc_core, test_negate_ok169);
  tcase_add_test(tc_core, test_negate_ok170);
  tcase_add_test(tc_core, test_negate_ok171);
  tcase_add_test(tc_core, test_negate_ok172);
  tcase_add_test(tc_core, test_negate_ok173);
  tcase_add_test(tc_core, test_negate_ok174);
  tcase_add_test(tc_core, test_negate_ok175);
  tcase_add_test(tc_core, test_negate_ok176);
  tcase_add_test(tc_core, test_negate_ok177);
  tcase_add_test(tc_core, test_negate_ok178);
  tcase_add_test(tc_core, test_negate_ok179);
  tcase_add_test(tc_core, test_negate_ok180);
  tcase_add_test(tc_core, test_negate_ok181);
  tcase_add_test(tc_core, test_negate_ok182);
  tcase_add_test(tc_core, test_negate_ok183);
  tcase_add_test(tc_core, test_negate_ok184);
  tcase_add_test(tc_core, test_negate_ok185);
  tcase_add_test(tc_core, test_negate_ok186);
  tcase_add_test(tc_core, test_negate_ok187);
  tcase_add_test(tc_core, test_negate_ok188);
  tcase_add_test(tc_core, test_negate_ok189);
  tcase_add_test(tc_core, test_negate_ok190);
  tcase_add_test(tc_core, test_negate_ok191);
  tcase_add_test(tc_core, test_negate_ok192);
  tcase_add_test(tc_core, test_negate_ok193);
  tcase_add_test(tc_core, test_negate_ok194);
  tcase_add_test(tc_core, test_negate_ok195);
  tcase_add_test(tc_core, test_negate_ok196);
  tcase_add_test(tc_core, test_negate_ok197);
  tcase_add_test(tc_core, test_negate_ok198);
  tcase_add_test(tc_core, test_negate_ok199);
  tcase_add_test(tc_core, test_negate_ok200);
  tcase_add_test(tc_core, test_negate_ok201);
  tcase_add_test(tc_core, test_negate_ok202);
  tcase_add_test(tc_core, test_negate_ok203);
  tcase_add_test(tc_core, test_negate_ok204);
  tcase_add_test(tc_core, test_negate_ok205);
  tcase_add_test(tc_core, test_negate_ok206);
  tcase_add_test(tc_core, test_negate_ok207);
  tcase_add_test(tc_core, test_negate_ok208);
  tcase_add_test(tc_core, test_negate_ok209);
  tcase_add_test(tc_core, test_negate_ok210);
  tcase_add_test(tc_core, test_negate_ok211);
  tcase_add_test(tc_core, test_negate_ok212);
  tcase_add_test(tc_core, test_negate_ok213);
  tcase_add_test(tc_core, test_negate_ok214);
  tcase_add_test(tc_core, test_negate_ok215);
  tcase_add_test(tc_core, test_negate_ok216);
  tcase_add_test(tc_core, test_negate_ok217);
  tcase_add_test(tc_core, test_negate_ok218);
  tcase_add_test(tc_core, test_negate_ok219);
  tcase_add_test(tc_core, test_negate_ok220);
  tcase_add_test(tc_core, test_negate_ok221);
  tcase_add_test(tc_core, test_negate_ok222);
  tcase_add_test(tc_core, test_negate_ok223);
  tcase_add_test(tc_core, test_negate_ok224);
  tcase_add_test(tc_core, test_negate_ok225);
  tcase_add_test(tc_core, test_negate_ok226);
  tcase_add_test(tc_core, test_negate_ok227);
  tcase_add_test(tc_core, test_negate_ok228);
  tcase_add_test(tc_core, test_negate_ok229);
  tcase_add_test(tc_core, test_negate_ok230);
  tcase_add_test(tc_core, test_negate_ok231);
  tcase_add_test(tc_core, test_negate_ok232);
  tcase_add_test(tc_core, test_negate_ok233);
  tcase_add_test(tc_core, test_negate_ok234);
  tcase_add_test(tc_core, test_negate_ok235);
  tcase_add_test(tc_core, test_negate_ok236);
  tcase_add_test(tc_core, test_negate_ok237);
  tcase_add_test(tc_core, test_negate_ok238);
  tcase_add_test(tc_core, test_negate_ok239);
  tcase_add_test(tc_core, test_negate_ok240);
  tcase_add_test(tc_core, test_negate_ok241);
  tcase_add_test(tc_core, test_negate_ok242);
  tcase_add_test(tc_core, test_negate_ok243);
  tcase_add_test(tc_core, test_negate_ok244);
  tcase_add_test(tc_core, test_negate_ok245);
  tcase_add_test(tc_core, test_negate_ok246);
  tcase_add_test(tc_core, test_negate_ok247);
  tcase_add_test(tc_core, test_negate_ok248);
  tcase_add_test(tc_core, test_negate_ok249);
  tcase_add_test(tc_core, test_negate_ok250);
  tcase_add_test(tc_core, test_negate_ok251);
  tcase_add_test(tc_core, test_negate_ok252);
  tcase_add_test(tc_core, test_negate_ok253);
  tcase_add_test(tc_core, test_negate_ok254);
  tcase_add_test(tc_core, test_negate_ok255);
  tcase_add_test(tc_core, test_negate_ok256);
  tcase_add_test(tc_core, test_negate_ok257);
  tcase_add_test(tc_core, test_negate_ok258);
  tcase_add_test(tc_core, test_negate_ok259);
  tcase_add_test(tc_core, test_negate_ok260);
  tcase_add_test(tc_core, test_negate_ok261);
  tcase_add_test(tc_core, test_negate_ok262);
  tcase_add_test(tc_core, test_negate_ok263);
  tcase_add_test(tc_core, test_negate_ok264);
  tcase_add_test(tc_core, test_negate_ok265);
  tcase_add_test(tc_core, test_negate_ok266);
  tcase_add_test(tc_core, test_negate_ok267);
  tcase_add_test(tc_core, test_negate_ok268);
  tcase_add_test(tc_core, test_negate_ok269);
  tcase_add_test(tc_core, test_negate_ok270);
  tcase_add_test(tc_core, test_negate_ok271);
  tcase_add_test(tc_core, test_negate_ok272);
  tcase_add_test(tc_core, test_negate_ok273);
  tcase_add_test(tc_core, test_negate_ok274);
  tcase_add_test(tc_core, test_negate_ok275);
  tcase_add_test(tc_core, test_negate_ok276);
  tcase_add_test(tc_core, test_negate_ok277);
  tcase_add_test(tc_core, test_negate_ok278);
  tcase_add_test(tc_core, test_negate_ok279);
  tcase_add_test(tc_core, test_negate_ok280);
  tcase_add_test(tc_core, test_negate_ok281);
  tcase_add_test(tc_core, test_negate_ok282);
  tcase_add_test(tc_core, test_negate_ok283);
  tcase_add_test(tc_core, test_negate_ok284);
  tcase_add_test(tc_core, test_negate_ok285);
  tcase_add_test(tc_core, test_negate_ok286);
  tcase_add_test(tc_core, test_negate_ok287);
  tcase_add_test(tc_core, test_negate_ok288);
  tcase_add_test(tc_core, test_negate_ok289);
  tcase_add_test(tc_core, test_negate_ok290);
  tcase_add_test(tc_core, test_negate_ok291);
  tcase_add_test(tc_core, test_negate_ok292);
  tcase_add_test(tc_core, test_negate_ok293);
  tcase_add_test(tc_core, test_negate_ok294);
  tcase_add_test(tc_core, test_negate_ok295);
  tcase_add_test(tc_core, test_negate_ok296);
  tcase_add_test(tc_core, test_negate_ok297);
  tcase_add_test(tc_core, test_negate_ok298);
  tcase_add_test(tc_core, test_negate_ok299);
  tcase_add_test(tc_core, test_negate_ok300);
  tcase_add_test(tc_core, test_negate_ok301);
  tcase_add_test(tc_core, test_negate_ok302);
  tcase_add_test(tc_core, test_negate_ok303);
  tcase_add_test(tc_core, test_negate_ok304);
  tcase_add_test(tc_core, test_negate_ok305);
  tcase_add_test(tc_core, test_negate_ok306);
  tcase_add_test(tc_core, test_negate_ok307);
  tcase_add_test(tc_core, test_negate_ok308);
  tcase_add_test(tc_core, test_negate_ok309);
  tcase_add_test(tc_core, test_negate_ok310);
  tcase_add_test(tc_core, test_negate_ok311);
  tcase_add_test(tc_core, test_negate_ok312);
  tcase_add_test(tc_core, test_negate_ok313);
  tcase_add_test(tc_core, test_negate_ok314);
  tcase_add_test(tc_core, test_negate_ok315);
  tcase_add_test(tc_core, test_negate_ok316);
  tcase_add_test(tc_core, test_negate_ok317);
  tcase_add_test(tc_core, test_negate_ok318);
  tcase_add_test(tc_core, test_negate_ok319);
  tcase_add_test(tc_core, test_negate_ok320);
  tcase_add_test(tc_core, test_negate_ok321);
  tcase_add_test(tc_core, test_negate_ok322);
  tcase_add_test(tc_core, test_negate_ok323);
  tcase_add_test(tc_core, test_negate_ok324);
  tcase_add_test(tc_core, test_negate_ok325);
  tcase_add_test(tc_core, test_negate_ok326);
  tcase_add_test(tc_core, test_negate_ok327);
  tcase_add_test(tc_core, test_negate_ok328);
  tcase_add_test(tc_core, test_negate_ok329);
  tcase_add_test(tc_core, test_negate_ok330);
  tcase_add_test(tc_core, test_negate_ok331);
  tcase_add_test(tc_core, test_negate_ok332);
  tcase_add_test(tc_core, test_negate_ok333);
  tcase_add_test(tc_core, test_negate_ok334);
  tcase_add_test(tc_core, test_negate_ok335);
  tcase_add_test(tc_core, test_negate_ok336);
  tcase_add_test(tc_core, test_negate_ok337);
  tcase_add_test(tc_core, test_negate_ok338);
  tcase_add_test(tc_core, test_negate_ok339);
  tcase_add_test(tc_core, test_negate_ok340);
  tcase_add_test(tc_core, test_negate_ok341);
  tcase_add_test(tc_core, test_negate_ok342);
  tcase_add_test(tc_core, test_negate_ok343);
  tcase_add_test(tc_core, test_negate_ok344);
  tcase_add_test(tc_core, test_negate_ok345);
  tcase_add_test(tc_core, test_negate_ok346);
  tcase_add_test(tc_core, test_negate_ok347);
  tcase_add_test(tc_core, test_negate_ok348);
  tcase_add_test(tc_core, test_negate_ok349);
  tcase_add_test(tc_core, test_negate_ok350);
  tcase_add_test(tc_core, test_negate_ok351);
  tcase_add_test(tc_core, test_negate_ok352);
  tcase_add_test(tc_core, test_negate_ok353);
  tcase_add_test(tc_core, test_negate_ok354);
  tcase_add_test(tc_core, test_negate_ok355);
  tcase_add_test(tc_core, test_negate_ok356);
  tcase_add_test(tc_core, test_negate_ok357);
  tcase_add_test(tc_core, test_negate_ok358);
  tcase_add_test(tc_core, test_negate_ok359);
  tcase_add_test(tc_core, test_negate_ok360);
  tcase_add_test(tc_core, test_negate_ok361);
  tcase_add_test(tc_core, test_negate_ok362);
  tcase_add_test(tc_core, test_negate_ok363);
  tcase_add_test(tc_core, test_negate_ok364);
  tcase_add_test(tc_core, test_negate_ok365);
  tcase_add_test(tc_core, test_negate_ok366);
  tcase_add_test(tc_core, test_negate_ok367);
  tcase_add_test(tc_core, test_negate_ok368);
  tcase_add_test(tc_core, test_negate_ok369);
  tcase_add_test(tc_core, test_negate_ok370);
  tcase_add_test(tc_core, test_negate_ok371);
  tcase_add_test(tc_core, test_negate_ok372);
  tcase_add_test(tc_core, test_negate_ok373);
  tcase_add_test(tc_core, test_negate_ok374);
  tcase_add_test(tc_core, test_negate_ok375);
  tcase_add_test(tc_core, test_negate_ok376);
  tcase_add_test(tc_core, test_negate_ok377);
  tcase_add_test(tc_core, test_negate_ok378);
  tcase_add_test(tc_core, test_negate_ok379);
  tcase_add_test(tc_core, test_negate_ok380);
  tcase_add_test(tc_core, test_negate_ok381);
  tcase_add_test(tc_core, test_negate_ok382);
  tcase_add_test(tc_core, test_negate_ok383);
  tcase_add_test(tc_core, test_negate_ok384);
  tcase_add_test(tc_core, test_negate_ok385);
  tcase_add_test(tc_core, test_negate_ok386);
  tcase_add_test(tc_core, test_negate_ok387);
  tcase_add_test(tc_core, test_negate_ok388);
  tcase_add_test(tc_core, test_negate_ok389);
  tcase_add_test(tc_core, test_negate_ok390);
  tcase_add_test(tc_core, test_negate_ok391);
  tcase_add_test(tc_core, test_negate_ok392);
  tcase_add_test(tc_core, test_negate_ok393);
  tcase_add_test(tc_core, test_negate_ok394);
  tcase_add_test(tc_core, test_negate_ok395);
  tcase_add_test(tc_core, test_negate_ok396);
  tcase_add_test(tc_core, test_negate_ok397);
  tcase_add_test(tc_core, test_negate_ok398);
  tcase_add_test(tc_core, test_negate_ok399);
  tcase_add_test(tc_core, test_negate_ok400);
  tcase_add_test(tc_core, test_negate_ok401);
  tcase_add_test(tc_core, test_negate_ok402);
  tcase_add_test(tc_core, test_negate_ok403);
  tcase_add_test(tc_core, test_negate_ok404);
  tcase_add_test(tc_core, test_negate_ok405);
  tcase_add_test(tc_core, test_negate_ok406);
  tcase_add_test(tc_core, test_negate_ok407);
  tcase_add_test(tc_core, test_negate_ok408);
  tcase_add_test(tc_core, test_negate_ok409);
  tcase_add_test(tc_core, test_negate_ok410);
  tcase_add_test(tc_core, test_negate_ok411);
  tcase_add_test(tc_core, test_negate_ok412);
  tcase_add_test(tc_core, test_negate_ok413);
  tcase_add_test(tc_core, test_negate_ok414);
  tcase_add_test(tc_core, test_negate_ok415);
  tcase_add_test(tc_core, test_negate_ok416);
  tcase_add_test(tc_core, test_negate_ok417);
  tcase_add_test(tc_core, test_negate_ok418);
  tcase_add_test(tc_core, test_negate_ok419);
  tcase_add_test(tc_core, test_negate_ok420);
  tcase_add_test(tc_core, test_negate_ok421);
  tcase_add_test(tc_core, test_negate_ok422);
  tcase_add_test(tc_core, test_negate_ok423);
  tcase_add_test(tc_core, test_negate_ok424);
  tcase_add_test(tc_core, test_negate_ok425);
  tcase_add_test(tc_core, test_negate_ok426);
  tcase_add_test(tc_core, test_negate_ok427);
  tcase_add_test(tc_core, test_negate_ok428);
  tcase_add_test(tc_core, test_negate_ok429);
  tcase_add_test(tc_core, test_negate_ok430);
  tcase_add_test(tc_core, test_negate_ok431);
  tcase_add_test(tc_core, test_negate_ok432);
  tcase_add_test(tc_core, test_negate_ok433);
  tcase_add_test(tc_core, test_negate_ok434);
  tcase_add_test(tc_core, test_negate_ok435);
  tcase_add_test(tc_core, test_negate_ok436);
  tcase_add_test(tc_core, test_negate_ok437);
  tcase_add_test(tc_core, test_negate_ok438);
  tcase_add_test(tc_core, test_negate_ok439);
  tcase_add_test(tc_core, test_negate_ok440);
  tcase_add_test(tc_core, test_negate_ok441);
  tcase_add_test(tc_core, test_negate_ok442);
  tcase_add_test(tc_core, test_negate_ok443);
  tcase_add_test(tc_core, test_negate_ok444);
  tcase_add_test(tc_core, test_negate_ok445);
  tcase_add_test(tc_core, test_negate_ok446);
  tcase_add_test(tc_core, test_negate_ok447);
  tcase_add_test(tc_core, test_negate_ok448);
  tcase_add_test(tc_core, test_negate_ok449);
  tcase_add_test(tc_core, test_negate_ok450);
  tcase_add_test(tc_core, test_negate_ok451);
  tcase_add_test(tc_core, test_negate_ok452);
  tcase_add_test(tc_core, test_negate_ok453);
  tcase_add_test(tc_core, test_negate_ok454);
  tcase_add_test(tc_core, test_negate_ok455);
  tcase_add_test(tc_core, test_negate_ok456);
  tcase_add_test(tc_core, test_negate_ok457);
  tcase_add_test(tc_core, test_negate_ok458);
  tcase_add_test(tc_core, test_negate_ok459);
  tcase_add_test(tc_core, test_negate_ok460);
  tcase_add_test(tc_core, test_negate_ok461);
  tcase_add_test(tc_core, test_negate_ok462);
  tcase_add_test(tc_core, test_negate_ok463);
  tcase_add_test(tc_core, test_negate_ok464);
  tcase_add_test(tc_core, test_negate_ok465);
  tcase_add_test(tc_core, test_negate_ok466);
  tcase_add_test(tc_core, test_negate_ok467);
  tcase_add_test(tc_core, test_negate_ok468);
  tcase_add_test(tc_core, test_negate_ok469);
  tcase_add_test(tc_core, test_negate_ok470);
  tcase_add_test(tc_core, test_negate_ok471);
  tcase_add_test(tc_core, test_negate_ok472);
  tcase_add_test(tc_core, test_negate_ok473);
  tcase_add_test(tc_core, test_negate_ok474);
  tcase_add_test(tc_core, test_negate_ok475);
  tcase_add_test(tc_core, test_negate_ok476);
  tcase_add_test(tc_core, test_negate_ok477);
  tcase_add_test(tc_core, test_negate_ok478);
  tcase_add_test(tc_core, test_negate_ok479);
  tcase_add_test(tc_core, test_negate_ok480);
  tcase_add_test(tc_core, test_negate_ok481);
  tcase_add_test(tc_core, test_negate_ok482);
  tcase_add_test(tc_core, test_negate_ok483);
  tcase_add_test(tc_core, test_negate_ok484);
  tcase_add_test(tc_core, test_negate_ok485);
  tcase_add_test(tc_core, test_negate_ok486);
  tcase_add_test(tc_core, test_negate_ok487);
  tcase_add_test(tc_core, test_negate_ok488);
  tcase_add_test(tc_core, test_negate_ok489);
  tcase_add_test(tc_core, test_negate_ok490);
  tcase_add_test(tc_core, test_negate_ok491);
  tcase_add_test(tc_core, test_negate_ok492);
  tcase_add_test(tc_core, test_negate_ok493);
  tcase_add_test(tc_core, test_negate_ok494);
  tcase_add_test(tc_core, test_negate_ok495);
  tcase_add_test(tc_core, test_negate_ok496);
  tcase_add_test(tc_core, test_negate_ok497);
  tcase_add_test(tc_core, test_negate_ok498);
  tcase_add_test(tc_core, test_negate_ok499);
  tcase_add_test(tc_core, test_negate_ok500);
  tcase_add_test(tc_core, test_negate_ok501);
  tcase_add_test(tc_core, test_negate_ok502);
  tcase_add_test(tc_core, test_negate_ok503);
  tcase_add_test(tc_core, test_negate_ok504);
  tcase_add_test(tc_core, test_negate_ok505);
  tcase_add_test(tc_core, test_negate_ok506);
  tcase_add_test(tc_core, test_negate_ok507);
  tcase_add_test(tc_core, test_negate_ok508);
  tcase_add_test(tc_core, test_negate_ok509);
  tcase_add_test(tc_core, test_negate_ok510);
  tcase_add_test(tc_core, test_negate_ok511);
  tcase_add_test(tc_core, test_negate_ok512);
  tcase_add_test(tc_core, test_negate_ok513);
  tcase_add_test(tc_core, test_negate_ok514);
  tcase_add_test(tc_core, test_negate_ok515);
  tcase_add_test(tc_core, test_negate_ok516);
  tcase_add_test(tc_core, test_negate_ok517);
  tcase_add_test(tc_core, test_negate_ok518);
  tcase_add_test(tc_core, test_negate_ok519);
  tcase_add_test(tc_core, test_negate_ok520);
  tcase_add_test(tc_core, test_negate_ok521);
  tcase_add_test(tc_core, test_negate_ok522);
  tcase_add_test(tc_core, test_negate_ok523);
  tcase_add_test(tc_core, test_negate_ok524);
  tcase_add_test(tc_core, test_negate_ok525);
  tcase_add_test(tc_core, test_negate_ok526);
  tcase_add_test(tc_core, test_negate_ok527);
  tcase_add_test(tc_core, test_negate_ok528);
  tcase_add_test(tc_core, test_negate_ok529);
  tcase_add_test(tc_core, test_negate_ok530);
  tcase_add_test(tc_core, test_negate_ok531);
  tcase_add_test(tc_core, test_negate_ok532);
  tcase_add_test(tc_core, test_negate_ok533);
  tcase_add_test(tc_core, test_negate_ok534);
  tcase_add_test(tc_core, test_negate_ok535);
  tcase_add_test(tc_core, test_negate_ok536);
  tcase_add_test(tc_core, test_negate_ok537);
  tcase_add_test(tc_core, test_negate_ok538);
  tcase_add_test(tc_core, test_negate_ok539);
  tcase_add_test(tc_core, test_negate_ok540);
  tcase_add_test(tc_core, test_negate_ok541);
  tcase_add_test(tc_core, test_negate_ok542);
  tcase_add_test(tc_core, test_negate_ok543);
  tcase_add_test(tc_core, test_negate_ok544);
  tcase_add_test(tc_core, test_negate_ok545);
  tcase_add_test(tc_core, test_negate_ok546);
  tcase_add_test(tc_core, test_negate_ok547);
  tcase_add_test(tc_core, test_negate_ok548);
  tcase_add_test(tc_core, test_negate_ok549);
  tcase_add_test(tc_core, test_negate_ok550);
  tcase_add_test(tc_core, test_negate_ok551);
  tcase_add_test(tc_core, test_negate_ok552);
  tcase_add_test(tc_core, test_negate_ok553);
  tcase_add_test(tc_core, test_negate_ok554);
  tcase_add_test(tc_core, test_negate_ok555);
  tcase_add_test(tc_core, test_negate_ok556);
  tcase_add_test(tc_core, test_negate_ok557);
  tcase_add_test(tc_core, test_negate_ok558);
  tcase_add_test(tc_core, test_negate_ok559);
  tcase_add_test(tc_core, test_negate_ok560);
  tcase_add_test(tc_core, test_negate_ok561);
  tcase_add_test(tc_core, test_negate_ok562);
  tcase_add_test(tc_core, test_negate_ok563);
  tcase_add_test(tc_core, test_negate_ok564);
  tcase_add_test(tc_core, test_negate_ok565);
  tcase_add_test(tc_core, test_negate_ok566);
  tcase_add_test(tc_core, test_negate_ok567);
  tcase_add_test(tc_core, test_negate_ok568);
  tcase_add_test(tc_core, test_negate_ok569);
  tcase_add_test(tc_core, test_negate_ok570);
  tcase_add_test(tc_core, test_negate_ok571);
  tcase_add_test(tc_core, test_negate_ok572);
  tcase_add_test(tc_core, test_negate_ok573);
  tcase_add_test(tc_core, test_negate_ok574);
  tcase_add_test(tc_core, test_negate_ok575);
  tcase_add_test(tc_core, test_negate_ok576);
  tcase_add_test(tc_core, test_negate_ok577);
  tcase_add_test(tc_core, test_negate_ok578);
  tcase_add_test(tc_core, test_negate_ok579);
  tcase_add_test(tc_core, test_negate_ok580);
  tcase_add_test(tc_core, test_negate_ok581);
  tcase_add_test(tc_core, test_negate_ok582);
  tcase_add_test(tc_core, test_negate_ok583);
  tcase_add_test(tc_core, test_negate_ok584);
  tcase_add_test(tc_core, test_negate_ok585);
  tcase_add_test(tc_core, test_negate_ok586);
  tcase_add_test(tc_core, test_negate_ok587);
  tcase_add_test(tc_core, test_negate_ok588);
  tcase_add_test(tc_core, test_negate_ok589);
  tcase_add_test(tc_core, test_negate_ok590);
  tcase_add_test(tc_core, test_negate_ok591);
  tcase_add_test(tc_core, test_negate_ok592);
  tcase_add_test(tc_core, test_negate_ok593);
  tcase_add_test(tc_core, test_negate_ok594);
  tcase_add_test(tc_core, test_negate_ok595);
  tcase_add_test(tc_core, test_negate_ok596);
  tcase_add_test(tc_core, test_negate_ok597);
  tcase_add_test(tc_core, test_negate_ok598);
  tcase_add_test(tc_core, test_negate_ok599);
  tcase_add_test(tc_core, test_negate_ok600);
  tcase_add_test(tc_core, test_negate_ok601);
  tcase_add_test(tc_core, test_negate_ok602);
  tcase_add_test(tc_core, test_negate_ok603);
  tcase_add_test(tc_core, test_negate_ok604);
  tcase_add_test(tc_core, test_negate_ok605);
  tcase_add_test(tc_core, test_negate_ok606);
  tcase_add_test(tc_core, test_negate_ok607);
  tcase_add_test(tc_core, test_negate_ok608);
  tcase_add_test(tc_core, test_negate_ok609);
  tcase_add_test(tc_core, test_negate_ok610);
  tcase_add_test(tc_core, test_negate_ok611);
  tcase_add_test(tc_core, test_negate_ok612);
  tcase_add_test(tc_core, test_negate_ok613);
  tcase_add_test(tc_core, test_negate_ok614);
  tcase_add_test(tc_core, test_negate_ok615);
  tcase_add_test(tc_core, test_negate_ok616);
  tcase_add_test(tc_core, test_negate_ok617);
  tcase_add_test(tc_core, test_negate_ok618);
  tcase_add_test(tc_core, test_negate_ok619);
  tcase_add_test(tc_core, test_negate_ok620);
  tcase_add_test(tc_core, test_negate_ok621);
  tcase_add_test(tc_core, test_negate_ok622);
  tcase_add_test(tc_core, test_negate_ok623);
  tcase_add_test(tc_core, test_negate_ok624);
  tcase_add_test(tc_core, test_negate_ok625);
  tcase_add_test(tc_core, test_negate_ok626);
  tcase_add_test(tc_core, test_negate_ok627);
  tcase_add_test(tc_core, test_negate_ok628);
  tcase_add_test(tc_core, test_negate_ok629);
  tcase_add_test(tc_core, test_negate_ok630);
  tcase_add_test(tc_core, test_negate_ok631);
  tcase_add_test(tc_core, test_negate_ok632);
  tcase_add_test(tc_core, test_negate_ok633);
  tcase_add_test(tc_core, test_negate_ok634);
  tcase_add_test(tc_core, test_negate_ok635);
  tcase_add_test(tc_core, test_negate_ok636);
  tcase_add_test(tc_core, test_negate_ok637);
  tcase_add_test(tc_core, test_negate_ok638);
  tcase_add_test(tc_core, test_negate_ok639);
  tcase_add_test(tc_core, test_negate_ok640);
  tcase_add_test(tc_core, test_negate_ok641);
  tcase_add_test(tc_core, test_negate_ok642);
  tcase_add_test(tc_core, test_negate_ok643);
  tcase_add_test(tc_core, test_negate_ok644);
  tcase_add_test(tc_core, test_negate_ok645);
  tcase_add_test(tc_core, test_negate_ok646);
  tcase_add_test(tc_core, test_negate_ok647);
  tcase_add_test(tc_core, test_negate_ok648);
  tcase_add_test(tc_core, test_negate_ok649);
  tcase_add_test(tc_core, test_negate_ok650);
  tcase_add_test(tc_core, test_negate_ok651);
  tcase_add_test(tc_core, test_negate_ok652);
  tcase_add_test(tc_core, test_negate_ok653);
  tcase_add_test(tc_core, test_negate_ok654);
  tcase_add_test(tc_core, test_negate_ok655);
  tcase_add_test(tc_core, test_negate_ok656);
  tcase_add_test(tc_core, test_negate_ok657);
  tcase_add_test(tc_core, test_negate_ok658);
  tcase_add_test(tc_core, test_negate_ok659);
  tcase_add_test(tc_core, test_negate_ok660);
  tcase_add_test(tc_core, test_negate_ok661);
  tcase_add_test(tc_core, test_negate_ok662);
  tcase_add_test(tc_core, test_negate_ok663);
  tcase_add_test(tc_core, test_negate_ok664);
  tcase_add_test(tc_core, test_negate_ok665);
  tcase_add_test(tc_core, test_negate_ok666);
  tcase_add_test(tc_core, test_negate_ok667);
  tcase_add_test(tc_core, test_negate_ok668);
  tcase_add_test(tc_core, test_negate_ok669);
  tcase_add_test(tc_core, test_negate_ok670);
  tcase_add_test(tc_core, test_negate_ok671);
  tcase_add_test(tc_core, test_negate_ok672);
  tcase_add_test(tc_core, test_negate_ok673);
  tcase_add_test(tc_core, test_negate_ok674);
  tcase_add_test(tc_core, test_negate_ok675);
  tcase_add_test(tc_core, test_negate_ok676);
  tcase_add_test(tc_core, test_negate_ok677);
  tcase_add_test(tc_core, test_negate_ok678);
  tcase_add_test(tc_core, test_negate_ok679);
  tcase_add_test(tc_core, test_negate_ok680);
  tcase_add_test(tc_core, test_negate_ok681);
  tcase_add_test(tc_core, test_negate_ok682);
  tcase_add_test(tc_core, test_negate_ok683);
  tcase_add_test(tc_core, test_negate_ok684);
  tcase_add_test(tc_core, test_negate_ok685);
  tcase_add_test(tc_core, test_negate_ok686);
  tcase_add_test(tc_core, test_negate_ok687);
  tcase_add_test(tc_core, test_negate_ok688);
  tcase_add_test(tc_core, test_negate_ok689);
  tcase_add_test(tc_core, test_negate_ok690);
  tcase_add_test(tc_core, test_negate_ok691);
  tcase_add_test(tc_core, test_negate_ok692);
  tcase_add_test(tc_core, test_negate_ok693);
  tcase_add_test(tc_core, test_negate_ok694);
  tcase_add_test(tc_core, test_negate_ok695);
  tcase_add_test(tc_core, test_negate_ok696);
  tcase_add_test(tc_core, test_negate_ok697);
  tcase_add_test(tc_core, test_negate_ok698);
  tcase_add_test(tc_core, test_negate_ok699);
  tcase_add_test(tc_core, test_negate_ok700);
  tcase_add_test(tc_core, test_negate_ok701);
  tcase_add_test(tc_core, test_negate_ok702);
  tcase_add_test(tc_core, test_negate_ok703);
  tcase_add_test(tc_core, test_negate_ok704);
  tcase_add_test(tc_core, test_negate_ok705);
  tcase_add_test(tc_core, test_negate_ok706);
  tcase_add_test(tc_core, test_negate_ok707);
  tcase_add_test(tc_core, test_negate_ok708);
  tcase_add_test(tc_core, test_negate_ok709);
  tcase_add_test(tc_core, test_negate_ok710);
  tcase_add_test(tc_core, test_negate_ok711);
  tcase_add_test(tc_core, test_negate_ok712);
  tcase_add_test(tc_core, test_negate_ok713);
  tcase_add_test(tc_core, test_negate_ok714);
  tcase_add_test(tc_core, test_negate_ok715);
  tcase_add_test(tc_core, test_negate_ok716);
  tcase_add_test(tc_core, test_negate_ok717);
  tcase_add_test(tc_core, test_negate_ok718);
  tcase_add_test(tc_core, test_negate_ok719);
  tcase_add_test(tc_core, test_negate_ok720);
  tcase_add_test(tc_core, test_negate_ok721);
  tcase_add_test(tc_core, test_negate_ok722);
  tcase_add_test(tc_core, test_negate_ok723);
  tcase_add_test(tc_core, test_negate_ok724);
  tcase_add_test(tc_core, test_negate_ok725);
  tcase_add_test(tc_core, test_negate_ok726);
  tcase_add_test(tc_core, test_negate_ok727);
  tcase_add_test(tc_core, test_negate_ok728);
  tcase_add_test(tc_core, test_negate_ok729);
  tcase_add_test(tc_core, test_negate_ok730);
  tcase_add_test(tc_core, test_negate_ok731);
  tcase_add_test(tc_core, test_negate_ok732);
  tcase_add_test(tc_core, test_negate_ok733);
  tcase_add_test(tc_core, test_negate_ok734);
  tcase_add_test(tc_core, test_negate_ok735);
  tcase_add_test(tc_core, test_negate_ok736);
  tcase_add_test(tc_core, test_negate_ok737);
  tcase_add_test(tc_core, test_negate_ok738);
  tcase_add_test(tc_core, test_negate_ok739);
  tcase_add_test(tc_core, test_negate_ok740);
  tcase_add_test(tc_core, test_negate_ok741);
  tcase_add_test(tc_core, test_negate_ok742);
  tcase_add_test(tc_core, test_negate_ok743);
  tcase_add_test(tc_core, test_negate_ok744);
  tcase_add_test(tc_core, test_negate_ok745);
  tcase_add_test(tc_core, test_negate_ok746);
  tcase_add_test(tc_core, test_negate_ok747);
  tcase_add_test(tc_core, test_negate_ok748);
  tcase_add_test(tc_core, test_negate_ok749);
  tcase_add_test(tc_core, test_negate_ok750);
  tcase_add_test(tc_core, test_negate_ok751);
  tcase_add_test(tc_core, test_negate_ok752);
  tcase_add_test(tc_core, test_negate_ok753);
  tcase_add_test(tc_core, test_negate_ok754);
  tcase_add_test(tc_core, test_negate_ok755);
  tcase_add_test(tc_core, test_negate_ok756);
  tcase_add_test(tc_core, test_negate_ok757);
  tcase_add_test(tc_core, test_negate_ok758);
  tcase_add_test(tc_core, test_negate_ok759);
  tcase_add_test(tc_core, test_negate_ok760);
  tcase_add_test(tc_core, test_negate_ok761);
  tcase_add_test(tc_core, test_negate_ok762);
  tcase_add_test(tc_core, test_negate_ok763);
  tcase_add_test(tc_core, test_negate_ok764);
  tcase_add_test(tc_core, test_negate_ok765);
  tcase_add_test(tc_core, test_negate_ok766);
  tcase_add_test(tc_core, test_negate_ok767);
  tcase_add_test(tc_core, test_negate_ok768);
  tcase_add_test(tc_core, test_negate_ok769);
  tcase_add_test(tc_core, test_negate_ok770);
  tcase_add_test(tc_core, test_negate_ok771);
  tcase_add_test(tc_core, test_negate_ok772);
  tcase_add_test(tc_core, test_negate_ok773);
  tcase_add_test(tc_core, test_negate_ok774);
  tcase_add_test(tc_core, test_negate_ok775);
  tcase_add_test(tc_core, test_negate_ok776);
  tcase_add_test(tc_core, test_negate_ok777);
  tcase_add_test(tc_core, test_negate_ok778);
  tcase_add_test(tc_core, test_negate_ok779);
  tcase_add_test(tc_core, test_negate_ok780);
  tcase_add_test(tc_core, test_negate_ok781);
  tcase_add_test(tc_core, test_negate_ok782);
  tcase_add_test(tc_core, test_negate_ok783);
  tcase_add_test(tc_core, test_negate_ok784);
  tcase_add_test(tc_core, test_negate_ok785);
  tcase_add_test(tc_core, test_negate_ok786);
  tcase_add_test(tc_core, test_negate_ok787);
  tcase_add_test(tc_core, test_negate_ok788);
  tcase_add_test(tc_core, test_negate_ok789);
  tcase_add_test(tc_core, test_negate_ok790);
  tcase_add_test(tc_core, test_negate_ok791);
  tcase_add_test(tc_core, test_negate_ok792);
  tcase_add_test(tc_core, test_negate_ok793);
  tcase_add_test(tc_core, test_negate_ok794);
  tcase_add_test(tc_core, test_negate_ok795);
  tcase_add_test(tc_core, test_negate_ok796);
  tcase_add_test(tc_core, test_negate_ok797);
  tcase_add_test(tc_core, test_negate_ok798);
  tcase_add_test(tc_core, test_negate_ok799);
  tcase_add_test(tc_core, test_negate_ok800);

  suite_add_tcase(s, tc_core);
  return s;
}
