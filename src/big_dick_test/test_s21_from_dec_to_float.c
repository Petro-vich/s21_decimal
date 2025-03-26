#include "test.h"

START_TEST(test_from_decimal_to_float_1) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_3) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x10000}};
  float check = 7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_4) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80010000}};
  float check = -7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_5) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0}};
  float check = 2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_6) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80000000}};
  float check = -2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_7) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x20000}};
  float check = 7.92281607e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_8) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80020000}};
  float check = -7.92281607e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_9) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x10000}};
  float check = 2.09954628e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_10) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80010000}};
  float check = -2.09954628e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_11) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x30000}};
  float check = 7.92281663e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_12) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80030000}};
  float check = -7.92281663e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_13) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x20000}};
  float check = 2.09954624e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_14) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80020000}};
  float check = -2.09954624e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_15) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x40000}};
  float check = 7.92281605e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_16) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80040000}};
  float check = -7.92281605e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_17) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x30000}};
  float check = 2.09954638e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_18) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80030000}};
  float check = -2.09954638e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_19) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x50000}};
  float check = 7.92281605e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_20) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80050000}};
  float check = -7.92281605e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_21) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x40000}};
  float check = 2.09954630e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_22) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80040000}};
  float check = -2.09954630e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_23) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x60000}};
  float check = 7.92281623e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_24) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80060000}};
  float check = -7.92281623e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_25) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x50000}};
  float check = 2.09954626e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_26) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80050000}};
  float check = -2.09954626e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_27) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x70000}};
  float check = 7.92281634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_28) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80070000}};
  float check = -7.92281634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_29) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x60000}};
  float check = 2.09954640e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_30) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80060000}};
  float check = -2.09954640e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_31) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80000}};
  float check = 7.92281620e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_32) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80080000}};
  float check = -7.92281620e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_33) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x70000}};
  float check = 2.09954634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_34) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80070000}};
  float check = -2.09954634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_35) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x90000}};
  float check = 7.92281603e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_36) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80090000}};
  float check = -7.92281603e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_37) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80000}};
  float check = 2.09954630e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_38) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80080000}};
  float check = -2.09954630e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_39) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0xa0000}};
  float check = 7.92281636e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_40) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x800a0000}};
  float check = -7.92281636e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_41) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x90000}};
  float check = 2.09954626e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_42) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80090000}};
  float check = -2.09954626e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_43) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0xb0000}};
  float check = 7.92281622e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_44) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x800b0000}};
  float check = -7.92281622e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_45) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xa0000}};
  float check = 2.09954632e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_46) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800a0000}};
  float check = -2.09954632e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_47) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0xc0000}};
  float check = 7.92281622e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_48) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x800c0000}};
  float check = -7.92281622e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_49) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xb0000}};
  float check = 2.09954632e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_50) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800b0000}};
  float check = -2.09954632e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_51) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0xd0000}};
  float check = 7.92281611e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_52) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x800d0000}};
  float check = -7.92281611e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_53) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xc0000}};
  float check = 2.09954623e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_54) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800c0000}};
  float check = -2.09954623e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_55) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0xe0000}};
  float check = 7.92281611e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_56) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x800e0000}};
  float check = -7.92281611e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_57) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xd0000}};
  float check = 2.09954631e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_58) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800d0000}};
  float check = -2.09954631e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_59) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0xf0000}};
  float check = 7.92281628e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_60) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x800f0000}};
  float check = -7.92281628e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_61) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xe0000}};
  float check = 2.09954628e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_62) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800e0000}};
  float check = -2.09954628e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_63) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x100000}};
  float check = 7.92281639e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_64) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80100000}};
  float check = -7.92281639e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_65) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xf0000}};
  float check = 2.09954632e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_66) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800f0000}};
  float check = -2.09954632e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_67) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x110000}};
  float check = 7.92281612e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_68) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80110000}};
  float check = -7.92281612e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_69) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x100000}};
  float check = 2.09954629e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_70) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80100000}};
  float check = -2.09954629e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_71) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x120000}};
  float check = 7.92281661e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_72) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80120000}};
  float check = -7.92281661e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_73) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x110000}};
  float check = 2.09954636e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_74) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80110000}};
  float check = -2.09954636e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_75) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x130000}};
  float check = 7.92281600e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_76) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80130000}};
  float check = -7.92281600e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_77) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x120000}};
  float check = 2.09954632e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_78) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80120000}};
  float check = -2.09954632e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_79) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x140000}};
  float check = 7.92281600e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_80) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80140000}};
  float check = -7.92281600e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_81) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x130000}};
  float check = 2.09954637e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_82) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80130000}};
  float check = -2.09954637e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_83) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x150000}};
  float check = 7.92281600e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_84) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80150000}};
  float check = -7.92281600e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_85) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x140000}};
  float check = 2.09954624e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_86) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80140000}};
  float check = -2.09954624e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_87) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x160000}};
  float check = 7.92281650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_88) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80160000}};
  float check = -7.92281650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_89) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x150000}};
  float check = 2.09954640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_90) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80150000}};
  float check = -2.09954640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_91) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x170000}};
  float check = 7.92281625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_92) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80170000}};
  float check = -7.92281625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_93) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x160000}};
  float check = 2.09954625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_94) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80160000}};
  float check = -2.09954625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_95) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x180000}};
  float check = 7.92281641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_96) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80180000}};
  float check = -7.92281641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_97) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x170000}};
  float check = 2.09954625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_98) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80170000}};
  float check = -2.09954625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_99) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x190000}};
  float check = 7.92281641e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_100) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80190000}};
  float check = -7.92281641e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_101) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x180000}};
  float check = 2.09954629e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_102) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80180000}};
  float check = -2.09954629e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_103) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x1a0000}};
  float check = 7.92281616e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_104) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x801a0000}};
  float check = -7.92281616e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_105) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x190000}};
  float check = 2.09954639e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_106) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80190000}};
  float check = -2.09954639e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_107) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x1b0000}};
  float check = 7.92281647e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_108) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x801b0000}};
  float check = -7.92281647e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_109) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x1a0000}};
  float check = 2.09954636e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_110) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x801a0000}};
  float check = -2.09954636e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_111) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x1c0000}};
  float check = 7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_112) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x801c0000}};
  float check = -7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_113) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x1b0000}};
  float check = 2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_114) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x801b0000}};
  float check = -2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_115) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_116) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_117) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x10000}};
  float check = 7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_118) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80010000}};
  float check = -7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_119) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0}};
  float check = 2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_120) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80000000}};
  float check = -2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_121) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x20000}};
  float check = 7.92281607e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_122) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80020000}};
  float check = -7.92281607e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_123) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x10000}};
  float check = 2.09954628e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_124) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80010000}};
  float check = -2.09954628e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_125) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x30000}};
  float check = 7.92281663e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_126) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80030000}};
  float check = -7.92281663e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_127) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x20000}};
  float check = 2.09954624e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_128) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80020000}};
  float check = -2.09954624e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_129) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x40000}};
  float check = 7.92281605e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_130) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80040000}};
  float check = -7.92281605e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_131) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x30000}};
  float check = 2.09954638e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_132) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80030000}};
  float check = -2.09954638e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_133) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x50000}};
  float check = 7.92281605e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_134) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80050000}};
  float check = -7.92281605e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_135) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x40000}};
  float check = 2.09954630e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_136) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80040000}};
  float check = -2.09954630e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_137) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x60000}};
  float check = 7.92281623e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_138) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80060000}};
  float check = -7.92281623e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_139) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x50000}};
  float check = 2.09954626e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_140) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80050000}};
  float check = -2.09954626e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_141) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x70000}};
  float check = 7.92281634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_142) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80070000}};
  float check = -7.92281634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_143) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x60000}};
  float check = 2.09954640e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_144) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80060000}};
  float check = -2.09954640e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_145) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80000}};
  float check = 7.92281620e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_146) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80080000}};
  float check = -7.92281620e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_147) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x70000}};
  float check = 2.09954634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_148) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80070000}};
  float check = -2.09954634e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_149) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x90000}};
  float check = 7.92281603e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_150) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80090000}};
  float check = -7.92281603e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_151) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80000}};
  float check = 2.09954630e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_152) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80080000}};
  float check = -2.09954630e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_153) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0xa0000}};
  float check = 7.92281636e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_154) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x800a0000}};
  float check = -7.92281636e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_155) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x90000}};
  float check = 2.09954626e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_156) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80090000}};
  float check = -2.09954626e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_157) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0xb0000}};
  float check = 7.92281622e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_158) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x800b0000}};
  float check = -7.92281622e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_159) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xa0000}};
  float check = 2.09954632e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_160) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800a0000}};
  float check = -2.09954632e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_161) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0xc0000}};
  float check = 7.92281622e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_162) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x800c0000}};
  float check = -7.92281622e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_163) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xb0000}};
  float check = 2.09954632e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_164) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800b0000}};
  float check = -2.09954632e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_165) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0xd0000}};
  float check = 7.92281611e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_166) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x800d0000}};
  float check = -7.92281611e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_167) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xc0000}};
  float check = 2.09954623e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_168) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800c0000}};
  float check = -2.09954623e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_169) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0xe0000}};
  float check = 7.92281611e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_170) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x800e0000}};
  float check = -7.92281611e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_171) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xd0000}};
  float check = 2.09954631e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_172) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800d0000}};
  float check = -2.09954631e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_173) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0xf0000}};
  float check = 7.92281628e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_174) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x800f0000}};
  float check = -7.92281628e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_175) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xe0000}};
  float check = 2.09954628e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_176) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800e0000}};
  float check = -2.09954628e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_177) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x100000}};
  float check = 7.92281639e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_178) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80100000}};
  float check = -7.92281639e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_179) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0xf0000}};
  float check = 2.09954632e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_180) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x800f0000}};
  float check = -2.09954632e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_181) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x110000}};
  float check = 7.92281612e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_182) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80110000}};
  float check = -7.92281612e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_183) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x100000}};
  float check = 2.09954629e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_184) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80100000}};
  float check = -2.09954629e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_185) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x120000}};
  float check = 7.92281661e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_186) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80120000}};
  float check = -7.92281661e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_187) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x110000}};
  float check = 2.09954636e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_188) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80110000}};
  float check = -2.09954636e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_189) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x130000}};
  float check = 7.92281600e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_190) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80130000}};
  float check = -7.92281600e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_191) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x120000}};
  float check = 2.09954632e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_192) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80120000}};
  float check = -2.09954632e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_193) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x140000}};
  float check = 7.92281600e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_194) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80140000}};
  float check = -7.92281600e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_195) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x130000}};
  float check = 2.09954637e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_196) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80130000}};
  float check = -2.09954637e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_197) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x150000}};
  float check = 7.92281600e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_198) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80150000}};
  float check = -7.92281600e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_199) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x140000}};
  float check = 2.09954624e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_200) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80140000}};
  float check = -2.09954624e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_201) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x160000}};
  float check = 7.92281650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_202) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80160000}};
  float check = -7.92281650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_203) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x150000}};
  float check = 2.09954640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_204) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80150000}};
  float check = -2.09954640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_205) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x170000}};
  float check = 7.92281625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_206) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80170000}};
  float check = -7.92281625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_207) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x160000}};
  float check = 2.09954625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_208) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80160000}};
  float check = -2.09954625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_209) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x180000}};
  float check = 7.92281641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_210) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80180000}};
  float check = -7.92281641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_211) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x170000}};
  float check = 2.09954625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_212) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80170000}};
  float check = -2.09954625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_213) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x190000}};
  float check = 7.92281641e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_214) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x80190000}};
  float check = -7.92281641e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_215) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x180000}};
  float check = 2.09954629e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_216) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80180000}};
  float check = -2.09954629e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_217) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x1a0000}};
  float check = 7.92281616e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_218) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x801a0000}};
  float check = -7.92281616e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_219) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x190000}};
  float check = 2.09954639e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_220) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80190000}};
  float check = -2.09954639e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_221) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x1b0000}};
  float check = 7.92281647e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_222) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x801b0000}};
  float check = -7.92281647e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_223) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x1a0000}};
  float check = 2.09954636e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_224) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x801a0000}};
  float check = -2.09954636e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_225) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x1c0000}};
  float check = 7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_226) {
  s21_decimal decimal = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x801c0000}};
  float check = -7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_227) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x1b0000}};
  float check = 2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_228) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x801b0000}};
  float check = -2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_229) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0}};
  float check = 5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_230) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0x80000000}};
  float check = -5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_231) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0x10000}};
  float check = 5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_232) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0x80010000}};
  float check = -5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_233) {
  s21_decimal decimal = {{0xd3a06d3a, 0xa06d3a06, 0x2d3a06d3, 0}};
  float check = 1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_234) {
  s21_decimal decimal = {{0xd3a06d3a, 0xa06d3a06, 0x2d3a06d3, 0x80000000}};
  float check = -1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_235) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0x140000}};
  float check = 5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_236) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0x80140000}};
  float check = -5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_237) {
  s21_decimal decimal = {{0xd3a06d3a, 0xa06d3a06, 0x2d3a06d3, 0x130000}};
  float check = 1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_238) {
  s21_decimal decimal = {{0xd3a06d3a, 0xa06d3a06, 0x2d3a06d3, 0x80130000}};
  float check = -1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_239) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0x1c0000}};
  float check = 5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_240) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0x801c0000}};
  float check = -5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_241) {
  s21_decimal decimal = {{0xd3a06d3a, 0xa06d3a06, 0x2d3a06d3, 0x1b0000}};
  float check = 1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_242) {
  s21_decimal decimal = {{0xd3a06d3a, 0xa06d3a06, 0x2d3a06d3, 0x801b0000}};
  float check = -1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_243) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0}};
  float check = 5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_244) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0x80000000}};
  float check = -5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_245) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0x10000}};
  float check = 5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_246) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0x80010000}};
  float check = -5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_247) {
  s21_decimal decimal = {{0xa6666666, 0xa06d3a06, 0x2d3a06d3, 0}};
  float check = 1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_248) {
  s21_decimal decimal = {{0xa6666666, 0xa06d3a06, 0x2d3a06d3, 0x80000000}};
  float check = -1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_249) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0x140000}};
  float check = 5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_250) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0x80140000}};
  float check = -5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_251) {
  s21_decimal decimal = {{0xa6666666, 0xa06d3a06, 0x2d3a06d3, 0x130000}};
  float check = 1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_252) {
  s21_decimal decimal = {{0xa6666666, 0xa06d3a06, 0x2d3a06d3, 0x80130000}};
  float check = -1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_253) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0x1c0000}};
  float check = 5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_254) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0xaaaaaaaa, 0x801c0000}};
  float check = -5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_255) {
  s21_decimal decimal = {{0xa6666666, 0xa06d3a06, 0x2d3a06d3, 0x1b0000}};
  float check = 1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_256) {
  s21_decimal decimal = {{0xa6666666, 0xa06d3a06, 0x2d3a06d3, 0x801b0000}};
  float check = -1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_257) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0}};
  float check = 5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_258) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0x80000000}};
  float check = -5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_259) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0x10000}};
  float check = 5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_260) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0x80010000}};
  float check = -5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_261) {
  s21_decimal decimal = {{0x606d3a07, 0x73333333, 0x2d3a06d3, 0}};
  float check = 1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_262) {
  s21_decimal decimal = {{0x606d3a07, 0x73333333, 0x2d3a06d3, 0x80000000}};
  float check = -1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_263) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0x140000}};
  float check = 5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_264) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0x80140000}};
  float check = -5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_265) {
  s21_decimal decimal = {{0x606d3a07, 0x73333333, 0x2d3a06d3, 0x130000}};
  float check = 1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_266) {
  s21_decimal decimal = {{0x606d3a07, 0x73333333, 0x2d3a06d3, 0x80130000}};
  float check = -1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_267) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0x1c0000}};
  float check = 5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_268) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0xaaaaaaaa, 0x801c0000}};
  float check = -5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_269) {
  s21_decimal decimal = {{0x606d3a07, 0x73333333, 0x2d3a06d3, 0x1b0000}};
  float check = 1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_270) {
  s21_decimal decimal = {{0x606d3a07, 0x73333333, 0x2d3a06d3, 0x801b0000}};
  float check = -1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_271) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0}};
  float check = 5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_272) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0x80000000}};
  float check = -5.28187766e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_273) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0x10000}};
  float check = 5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_274) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0x80010000}};
  float check = -5.28187778e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_275) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2d3a06d3, 0}};
  float check = 1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_276) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2d3a06d3, 0x80000000}};
  float check = -1.39969750e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_277) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0x140000}};
  float check = 5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_278) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0x80140000}};
  float check = -5.28187744e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_279) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2d3a06d3, 0x130000}};
  float check = 1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_280) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2d3a06d3, 0x80130000}};
  float check = -1.39969754e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_281) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0x1c0000}};
  float check = 5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_282) {
  s21_decimal decimal = {{0, 0, 0xaaaaaaaa, 0x801c0000}};
  float check = -5.28187752e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_283) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2d3a06d3, 0x1b0000}};
  float check = 1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_284) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2d3a06d3, 0x801b0000}};
  float check = -1.39969749e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_285) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0}};
  float check = 1.22978297e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_286) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0x80000000}};
  float check = -1.22978297e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_287) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0x20000}};
  float check = 3.25892476e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_288) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0x80020000}};
  float check = -3.25892476e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_289) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0x10000}};
  float check = 1.22978300e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_290) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0x80010000}};
  float check = -1.22978300e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_291) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0x30000}};
  float check = 3.25892470e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_292) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0x80030000}};
  float check = -3.25892470e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_293) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0xb0000}};
  float check = 1.22978296e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_294) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0x800b0000}};
  float check = -1.22978296e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_295) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0xd0000}};
  float check = 3.25892480e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_296) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0x800d0000}};
  float check = -3.25892480e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_297) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0x130000}};
  float check = 1.22978294e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_298) {
  s21_decimal decimal = {{0xaaaaaaaa, 0xaaaaaaaa, 0, 0x80130000}};
  float check = -1.22978294e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_299) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0x150000}};
  float check = 3.25892472e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_300) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xaaaaaaaa, 0xb0, 0x80150000}};
  float check = -3.25892472e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_301) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0}};
  float check = 1.22978297e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_302) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0x80000000}};
  float check = -1.22978297e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_303) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0x20000}};
  float check = 3.25892476e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_304) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0x80020000}};
  float check = -3.25892476e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_305) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0x10000}};
  float check = 1.22978300e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_306) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0x80010000}};
  float check = -1.22978300e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_307) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0x30000}};
  float check = 3.25892470e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_308) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0x80030000}};
  float check = -3.25892470e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_309) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0xb0000}};
  float check = 1.22978296e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_310) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0x800b0000}};
  float check = -1.22978296e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_311) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0xd0000}};
  float check = 3.25892480e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_312) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0x800d0000}};
  float check = -3.25892480e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_313) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0x130000}};
  float check = 1.22978294e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_314) {
  s21_decimal decimal = {{0, 0xaaaaaaaa, 0, 0x80130000}};
  float check = -1.22978294e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_315) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0x150000}};
  float check = 3.25892472e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_316) {
  s21_decimal decimal = {{0, 0xaaaaa9fa, 0xb0, 0x80150000}};
  float check = -3.25892472e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_317) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0}};
  float check = 2.86331162e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_318) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0x80000000}};
  float check = -2.86331162e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_319) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0x20000}};
  float check = 7.58777549e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_320) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0x80020000}};
  float check = -7.58777549e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_321) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0x10000}};
  float check = 2.86331168e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_322) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0x80010000}};
  float check = -2.86331168e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_323) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0x30000}};
  float check = 7.58777536e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_324) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0x80030000}};
  float check = -7.58777536e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_325) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0x40000}};
  float check = 2.86331156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_326) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0x80040000}};
  float check = -2.86331156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_327) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0x60000}};
  float check = 7.58777562e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_328) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0x80060000}};
  float check = -7.58777562e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_329) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0x90000}};
  float check = 2.86331153e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_330) {
  s21_decimal decimal = {{0xaaaaaaaa, 0, 0, 0x80090000}};
  float check = -2.86331153e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_331) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0xb0000}};
  float check = 7.58777571e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_332) {
  s21_decimal decimal = {{0xaaaaa9fa, 0xb0, 0, 0x800b0000}};
  float check = -7.58777571e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_333) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0}};
  float check = 2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_334) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  float check = -2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_335) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};
  float check = 2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_336) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80010000}};
  float check = -2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_337) {
  s21_decimal decimal = {{0x22222221, 0x22222222, 0xe2222222, 0x10000}};
  float check = 6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_338) {
  s21_decimal decimal = {{0x22222221, 0x22222222, 0xe2222222, 0x80010000}};
  float check = -6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_339) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x140000}};
  float check = 2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_340) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80140000}};
  float check = -2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_341) {
  s21_decimal decimal = {{0x22222221, 0x22222222, 0xe2222222, 0x140000}};
  float check = 6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_342) {
  s21_decimal decimal = {{0x22222221, 0x22222222, 0xe2222222, 0x80140000}};
  float check = -6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_343) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1c0000}};
  float check = 2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_344) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801c0000}};
  float check = -2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_345) {
  s21_decimal decimal = {{0x22222221, 0x22222222, 0xe2222222, 0x1c0000}};
  float check = 6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_346) {
  s21_decimal decimal = {{0x22222221, 0x22222222, 0xe2222222, 0x801c0000}};
  float check = -6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_347) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0}};
  float check = 2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_348) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0x80000000}};
  float check = -2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_349) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0}};
  float check = 6.99848763e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_350) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0x80000000}};
  float check = -6.99848763e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_351) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0x10000}};
  float check = 2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_352) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0x80010000}};
  float check = -2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_353) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0x10000}};
  float check = 6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_354) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0x80010000}};
  float check = -6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_355) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0x140000}};
  float check = 2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_356) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0x80140000}};
  float check = -2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_357) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0x140000}};
  float check = 6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_358) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0x80140000}};
  float check = -6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_359) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0x1c0000}};
  float check = 2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_360) {
  s21_decimal decimal = {{0, 0x55555555, 0x55555555, 0x801c0000}};
  float check = -2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_361) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0x1c0000}};
  float check = 6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_362) {
  s21_decimal decimal = {{0x40000000, 0x22222221, 0xe2222222, 0x801c0000}};
  float check = -6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_363) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0}};
  float check = 2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_364) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0x80000000}};
  float check = -2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_365) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0}};
  float check = 6.99848763e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_366) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0x80000000}};
  float check = -6.99848763e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_367) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0x10000}};
  float check = 2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_368) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0x80010000}};
  float check = -2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_369) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0x10000}};
  float check = 6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_370) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0x80010000}};
  float check = -6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_371) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0x140000}};
  float check = 2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_372) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0x80140000}};
  float check = -2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_373) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0x140000}};
  float check = 6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_374) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0x80140000}};
  float check = -6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_375) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0x1c0000}};
  float check = 2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_376) {
  s21_decimal decimal = {{0x55555555, 0, 0x55555555, 0x801c0000}};
  float check = -2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_377) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0x1c0000}};
  float check = 6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_378) {
  s21_decimal decimal = {{0xe2222221, 0x40000000, 0xe2222221, 0x801c0000}};
  float check = -6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_379) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0}};
  float check = 2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_380) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0x80000000}};
  float check = -2.64093883e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_381) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0}};
  float check = 6.99848763e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_382) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0x80000000}};
  float check = -6.99848763e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_383) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0x10000}};
  float check = 2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_384) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0x80010000}};
  float check = -2.64093889e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_385) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0x10000}};
  float check = 6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_386) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0x80010000}};
  float check = -6.99848751e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_387) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0x140000}};
  float check = 2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_388) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0x80140000}};
  float check = -2.64093872e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_389) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0x140000}};
  float check = 6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_390) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0x80140000}};
  float check = -6.99848768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_391) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0x1c0000}};
  float check = 2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_392) {
  s21_decimal decimal = {{0, 0, 0x55555555, 0x801c0000}};
  float check = -2.64093876e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_393) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0x1c0000}};
  float check = 6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_394) {
  s21_decimal decimal = {{0, 0x40000000, 0xe2222221, 0x801c0000}};
  float check = -6.99848747e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_395) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0}};
  float check = 6.14891487e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_396) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0x80000000}};
  float check = -6.14891487e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_397) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0x20000}};
  float check = 1.62946238e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_398) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0x80020000}};
  float check = -1.62946238e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_399) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0x10000}};
  float check = 6.14891501e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_400) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0x80010000}};
  float check = -6.14891501e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_401) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0x30000}};
  float check = 1.62946235e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_402) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0x80030000}};
  float check = -1.62946235e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_403) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0xc0000}};
  float check = 6.14891450e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_404) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0x800c0000}};
  float check = -6.14891450e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_405) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0xe0000}};
  float check = 1.62946240e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_406) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0x800e0000}};
  float check = -1.62946240e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_407) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0x120000}};
  float check = 6.14891481e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_408) {
  s21_decimal decimal = {{0x55555555, 0x55555555, 0, 0x80120000}};
  float check = -6.14891481e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_409) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0x140000}};
  float check = 1.62946243e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_410) {
  s21_decimal decimal = {{0x555554fd, 0x55555555, 0x58, 0x80140000}};
  float check = -1.62946243e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_411) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0}};
  float check = 6.14891487e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_412) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0x80000000}};
  float check = -6.14891487e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_413) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0x20000}};
  float check = 1.62946238e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_414) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0x80020000}};
  float check = -1.62946238e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_415) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0x10000}};
  float check = 6.14891501e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_416) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0x80010000}};
  float check = -6.14891501e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_417) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0x30000}};
  float check = 1.62946235e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_418) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0x80030000}};
  float check = -1.62946235e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_419) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0xc0000}};
  float check = 6.14891450e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_420) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0x800c0000}};
  float check = -6.14891450e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_421) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0xe0000}};
  float check = 1.62946240e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_422) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0x800e0000}};
  float check = -1.62946240e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_423) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0x120000}};
  float check = 6.14891481e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_424) {
  s21_decimal decimal = {{0, 0x55555555, 0, 0x80120000}};
  float check = -6.14891481e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_425) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0x140000}};
  float check = 1.62946243e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_426) {
  s21_decimal decimal = {{0, 0x555554fd, 0x58, 0x80140000}};
  float check = -1.62946243e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_427) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0}};
  float check = 1.43165581e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_428) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0x80000000}};
  float check = -1.43165581e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_429) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0x20000}};
  float check = 3.79388774e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_430) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0x80020000}};
  float check = -3.79388774e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_431) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0x10000}};
  float check = 1.43165584e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_432) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0x80010000}};
  float check = -1.43165584e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_433) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0x30000}};
  float check = 3.79388768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_434) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0x80030000}};
  float check = -3.79388768e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_435) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0x40000}};
  float check = 1.43165578e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_436) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0x80040000}};
  float check = -1.43165578e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_437) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0x60000}};
  float check = 3.79388781e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_438) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0x80060000}};
  float check = -3.79388781e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_439) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0x90000}};
  float check = 1.43165576e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_440) {
  s21_decimal decimal = {{0x55555555, 0, 0, 0x80090000}};
  float check = -1.43165576e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_441) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0xb0000}};
  float check = 3.79388785e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_442) {
  s21_decimal decimal = {{0x555554fd, 0x58, 0, 0x800b0000}};
  float check = -3.79388785e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_443) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0}};
  float check = 1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_444) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000000}};
  float check = -1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_445) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0x20000}};
  float check = 4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_446) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0x80020000}};
  float check = -4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_447) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x10000}};
  float check = 1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_448) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80010000}};
  float check = -1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_449) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0x30000}};
  float check = 4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_450) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0x80030000}};
  float check = -4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_451) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0xb0000}};
  float check = 1.84467440e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_452) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x800b0000}};
  float check = -1.84467440e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_453) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0xd0000}};
  float check = 4.88838720e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_454) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0x800d0000}};
  float check = -4.88838720e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_455) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x130000}};
  float check = 1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_456) {
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80130000}};
  float check = -1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_457) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0x150000}};
  float check = 4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_458) {
  s21_decimal decimal = {{0x109, 0x109, 0x109, 0x80150000}};
  float check = -4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_459) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0}};
  float check = 1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_460) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0x80000000}};
  float check = -1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_461) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0x20000}};
  float check = 4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_462) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0x80020000}};
  float check = -4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_463) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0x10000}};
  float check = 1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_464) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0x80010000}};
  float check = -1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_465) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0x30000}};
  float check = 4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_466) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0x80030000}};
  float check = -4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_467) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0xc0000}};
  float check = 1.84467440e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_468) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0x800c0000}};
  float check = -1.84467440e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_469) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0xe0000}};
  float check = 4.88838720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_470) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0x800e0000}};
  float check = -4.88838720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_471) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0x130000}};
  float check = 1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_472) {
  s21_decimal decimal = {{0, 0x1, 0x1, 0x80130000}};
  float check = -1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_473) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0x150000}};
  float check = 4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_474) {
  s21_decimal decimal = {{0, 0x109, 0x109, 0x80150000}};
  float check = -4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_475) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0}};
  float check = 1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_476) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0x80000000}};
  float check = -1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_477) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0x20000}};
  float check = 4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_478) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0x80020000}};
  float check = -4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_479) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0x10000}};
  float check = 1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_480) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0x80010000}};
  float check = -1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_481) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0x30000}};
  float check = 4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_482) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0x80030000}};
  float check = -4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_483) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0xd0000}};
  float check = 1.84467438e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_484) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0x800d0000}};
  float check = -1.84467438e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_485) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0xf0000}};
  float check = 4.88838700e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_486) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0x800f0000}};
  float check = -4.88838700e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_487) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0x130000}};
  float check = 1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_488) {
  s21_decimal decimal = {{0x1, 0, 0x1, 0x80130000}};
  float check = -1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_489) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0x150000}};
  float check = 4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_490) {
  s21_decimal decimal = {{0x109, 0, 0x109, 0x80150000}};
  float check = -4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_491) {
  s21_decimal decimal = {{0, 0, 0x1, 0}};
  float check = 1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_492) {
  s21_decimal decimal = {{0, 0, 0x1, 0x80000000}};
  float check = -1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_493) {
  s21_decimal decimal = {{0, 0, 0x109, 0x20000}};
  float check = 4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_494) {
  s21_decimal decimal = {{0, 0, 0x109, 0x80020000}};
  float check = -4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_495) {
  s21_decimal decimal = {{0, 0, 0x1, 0x10000}};
  float check = 1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_496) {
  s21_decimal decimal = {{0, 0, 0x1, 0x80010000}};
  float check = -1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_497) {
  s21_decimal decimal = {{0, 0, 0x109, 0x30000}};
  float check = 4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_498) {
  s21_decimal decimal = {{0, 0, 0x109, 0x80030000}};
  float check = -4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_499) {
  s21_decimal decimal = {{0, 0, 0x1, 0xe0000}};
  float check = 1.84467438e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_500) {
  s21_decimal decimal = {{0, 0, 0x1, 0x800e0000}};
  float check = -1.84467438e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_501) {
  s21_decimal decimal = {{0, 0, 0x109, 0x100000}};
  float check = 4.88838719e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_502) {
  s21_decimal decimal = {{0, 0, 0x109, 0x80100000}};
  float check = -4.88838719e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_503) {
  s21_decimal decimal = {{0, 0, 0x1, 0x130000}};
  float check = 1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_504) {
  s21_decimal decimal = {{0, 0, 0x1, 0x80130000}};
  float check = -1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_505) {
  s21_decimal decimal = {{0, 0, 0x109, 0x150000}};
  float check = 4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_506) {
  s21_decimal decimal = {{0, 0, 0x109, 0x80150000}};
  float check = -4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_507) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0}};
  float check = 4.29496730e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_508) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x80000000}};
  float check = -4.29496730e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_509) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x20000}};
  float check = 1.13816637e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_510) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x80020000}};
  float check = -1.13816637e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_511) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x10000}};
  float check = 4.29496736e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_512) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x80010000}};
  float check = -4.29496736e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_513) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x30000}};
  float check = 1.13816627e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_514) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x80030000}};
  float check = -1.13816627e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_515) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x20000}};
  float check = 4.29496720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_516) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x80020000}};
  float check = -4.29496720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_517) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x40000}};
  float check = 1.13816632e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_518) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x80040000}};
  float check = -1.13816632e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_519) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x40000}};
  float check = 4.29496719e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_520) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x80040000}};
  float check = -4.29496719e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_521) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x60000}};
  float check = 1.13816638e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_522) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x80060000}};
  float check = -1.13816638e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_523) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x90000}};
  float check = 4.29496717e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_524) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x80090000}};
  float check = -4.29496717e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_525) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0xb0000}};
  float check = 1.13816633e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_526) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x800b0000}};
  float check = -1.13816633e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_527) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x80000}};
  float check = 4.29496727e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_528) {
  s21_decimal decimal = {{0x1, 0x1, 0, 0x80080000}};
  float check = -4.29496727e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_529) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0xa0000}};
  float check = 1.13816635e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_530) {
  s21_decimal decimal = {{0x109, 0x109, 0, 0x800a0000}};
  float check = -1.13816635e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_531) {
  s21_decimal decimal = {{0, 0x1, 0, 0}};
  float check = 4.29496730e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_532) {
  s21_decimal decimal = {{0, 0x1, 0, 0x80000000}};
  float check = -4.29496730e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_533) {
  s21_decimal decimal = {{0, 0x109, 0, 0x20000}};
  float check = 1.13816637e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_534) {
  s21_decimal decimal = {{0, 0x109, 0, 0x80020000}};
  float check = -1.13816637e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_535) {
  s21_decimal decimal = {{0, 0x1, 0, 0x10000}};
  float check = 4.29496736e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_536) {
  s21_decimal decimal = {{0, 0x1, 0, 0x80010000}};
  float check = -4.29496736e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_537) {
  s21_decimal decimal = {{0, 0x109, 0, 0x30000}};
  float check = 1.13816627e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_538) {
  s21_decimal decimal = {{0, 0x109, 0, 0x80030000}};
  float check = -1.13816627e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_539) {
  s21_decimal decimal = {{0, 0x1, 0, 0x20000}};
  float check = 4.29496720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_540) {
  s21_decimal decimal = {{0, 0x1, 0, 0x80020000}};
  float check = -4.29496720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_541) {
  s21_decimal decimal = {{0, 0x109, 0, 0x40000}};
  float check = 1.13816632e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_542) {
  s21_decimal decimal = {{0, 0x109, 0, 0x80040000}};
  float check = -1.13816632e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_543) {
  s21_decimal decimal = {{0, 0x1, 0, 0x30000}};
  float check = 4.29496750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_544) {
  s21_decimal decimal = {{0, 0x1, 0, 0x80030000}};
  float check = -4.29496750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_545) {
  s21_decimal decimal = {{0, 0x109, 0, 0x50000}};
  float check = 1.13816630e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_546) {
  s21_decimal decimal = {{0, 0x109, 0, 0x80050000}};
  float check = -1.13816630e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_547) {
  s21_decimal decimal = {{0, 0x1, 0, 0x90000}};
  float check = 4.29496717e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_548) {
  s21_decimal decimal = {{0, 0x1, 0, 0x80090000}};
  float check = -4.29496717e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_549) {
  s21_decimal decimal = {{0, 0x109, 0, 0xb0000}};
  float check = 1.13816633e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_550) {
  s21_decimal decimal = {{0, 0x109, 0, 0x800b0000}};
  float check = -1.13816633e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_551) {
  s21_decimal decimal = {{0, 0x1, 0, 0x80000}};
  float check = 4.29496727e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_552) {
  s21_decimal decimal = {{0, 0x1, 0, 0x80080000}};
  float check = -4.29496727e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_553) {
  s21_decimal decimal = {{0, 0x109, 0, 0xa0000}};
  float check = 1.13816635e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_554) {
  s21_decimal decimal = {{0, 0x109, 0, 0x800a0000}};
  float check = -1.13816635e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_555) {
  s21_decimal decimal = {{0x1, 0, 0, 0x10000}};
  float check = 1.00000001e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_556) {
  s21_decimal decimal = {{0x1, 0, 0, 0x80010000}};
  float check = -1.00000001e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_557) {
  s21_decimal decimal = {{0x109, 0, 0, 0x30000}};
  float check = 2.64999986e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_558) {
  s21_decimal decimal = {{0x109, 0, 0, 0x80030000}};
  float check = -2.64999986e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_559) {
  s21_decimal decimal = {{0x1, 0, 0, 0xd0000}};
  float check = 9.99999982e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_560) {
  s21_decimal decimal = {{0x1, 0, 0, 0x800d0000}};
  float check = -9.99999982e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_561) {
  s21_decimal decimal = {{0x109, 0, 0, 0xf0000}};
  float check = 2.64999990e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_562) {
  s21_decimal decimal = {{0x109, 0, 0, 0x800f0000}};
  float check = -2.64999990e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_563) {
  s21_decimal decimal = {{0x1, 0, 0, 0xe0000}};
  float check = 9.99999982e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_564) {
  s21_decimal decimal = {{0x1, 0, 0, 0x800e0000}};
  float check = -9.99999982e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_565) {
  s21_decimal decimal = {{0x109, 0, 0, 0x100000}};
  float check = 2.65000000e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_566) {
  s21_decimal decimal = {{0x109, 0, 0, 0x80100000}};
  float check = -2.65000000e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_567) {
  s21_decimal decimal = {{0x1, 0, 0, 0x1b0000}};
  float check = 1.00000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_568) {
  s21_decimal decimal = {{0x1, 0, 0, 0x801b0000}};
  float check = -1.00000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_569) {
  s21_decimal decimal = {{0x1a, 0, 0, 0x1c0000}};
  float check = 2.60000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_570) {
  s21_decimal decimal = {{0x1a, 0, 0, 0x801c0000}};
  float check = -2.60000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_571) {
  s21_decimal decimal = {{0x1, 0, 0, 0x1c0000}};
  float check = 1.00000000e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_572) {
  s21_decimal decimal = {{0x1, 0, 0, 0x801c0000}};
  float check = -1.00000000e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_573) {
  s21_decimal decimal = {{0x3, 0, 0, 0x1c0000}};
  float check = 2.99999989e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_574) {
  s21_decimal decimal = {{0x3, 0, 0, 0x801c0000}};
  float check = -2.99999989e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_575) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0}};
  float check = 3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_576) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80000000}};
  float check = -3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_577) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};
  float check = 3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_578) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80010000}};
  float check = -3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_579) {
  s21_decimal decimal = {{0xf8f5c28f, 0xda3d70a3, 0x21eb851e, 0}};
  float check = 1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_580) {
  s21_decimal decimal = {{0xf8f5c28f, 0xda3d70a3, 0x21eb851e, 0x80000000}};
  float check = -1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_581) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x140000}};
  float check = 3.96140800e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_582) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80140000}};
  float check = -3.96140800e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_583) {
  s21_decimal decimal = {{0xf8f5c28f, 0xda3d70a3, 0x21eb851e, 0x130000}};
  float check = 1.04977318e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_584) {
  s21_decimal decimal = {{0xf8f5c28f, 0xda3d70a3, 0x21eb851e, 0x80130000}};
  float check = -1.04977318e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_585) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x1c0000}};
  float check = 3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_586) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x801c0000}};
  float check = -3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_587) {
  s21_decimal decimal = {{0xf8f5c28f, 0xda3d70a3, 0x21eb851e, 0x1b0000}};
  float check = 1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_588) {
  s21_decimal decimal = {{0xf8f5c28f, 0xda3d70a3, 0x21eb851e, 0x801b0000}};
  float check = -1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_589) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0}};
  float check = 3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_590) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0x80000000}};
  float check = -3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_591) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0x10000}};
  float check = 3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_592) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0x80010000}};
  float check = -3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_593) {
  s21_decimal decimal = {{0xd70a3d71, 0xda3d70a3, 0x21eb851e, 0}};
  float check = 1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_594) {
  s21_decimal decimal = {{0xd70a3d71, 0xda3d70a3, 0x21eb851e, 0x80000000}};
  float check = -1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_595) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0x150000}};
  float check = 3.96140800e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_596) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0x80150000}};
  float check = -3.96140800e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_597) {
  s21_decimal decimal = {{0xd70a3d71, 0xda3d70a3, 0x21eb851e, 0x140000}};
  float check = 1.04977312e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_598) {
  s21_decimal decimal = {{0xd70a3d71, 0xda3d70a3, 0x21eb851e, 0x80140000}};
  float check = -1.04977312e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_599) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0x1c0000}};
  float check = 3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_600) {
  s21_decimal decimal = {{0, 0x80000000, 0x80000000, 0x801c0000}};
  float check = -3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_601) {
  s21_decimal decimal = {{0xd70a3d71, 0xda3d70a3, 0x21eb851e, 0x1b0000}};
  float check = 1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_602) {
  s21_decimal decimal = {{0xd70a3d71, 0xda3d70a3, 0x21eb851e, 0x801b0000}};
  float check = -1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_603) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0}};
  float check = 3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_604) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0x80000000}};
  float check = -3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_605) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0x10000}};
  float check = 3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_606) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0x80010000}};
  float check = -3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_607) {
  s21_decimal decimal = {{0x40a3d70a, 0xb851eb85, 0x21eb851e, 0}};
  float check = 1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_608) {
  s21_decimal decimal = {{0x40a3d70a, 0xb851eb85, 0x21eb851e, 0x80000000}};
  float check = -1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_609) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0x160000}};
  float check = 3.96140825e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_610) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0x80160000}};
  float check = -3.96140825e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_611) {
  s21_decimal decimal = {{0x40a3d70a, 0xb851eb85, 0x21eb851e, 0x150000}};
  float check = 1.04977320e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_612) {
  s21_decimal decimal = {{0x40a3d70a, 0xb851eb85, 0x21eb851e, 0x80150000}};
  float check = -1.04977320e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_613) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0x1c0000}};
  float check = 3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_614) {
  s21_decimal decimal = {{0x80000000, 0, 0x80000000, 0x801c0000}};
  float check = -3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_615) {
  s21_decimal decimal = {{0x40a3d70a, 0xb851eb85, 0x21eb851e, 0x1b0000}};
  float check = 1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_616) {
  s21_decimal decimal = {{0x40a3d70a, 0xb851eb85, 0x21eb851e, 0x801b0000}};
  float check = -1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_617) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0}};
  float check = 3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_618) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x80000000}};
  float check = -3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_619) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x10000}};
  float check = 3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_620) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x80010000}};
  float check = -3.96140818e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_621) {
  s21_decimal decimal = {{0x1eb851ec, 0xb851eb85, 0x21eb851e, 0}};
  float check = 1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_622) {
  s21_decimal decimal = {{0x1eb851ec, 0xb851eb85, 0x21eb851e, 0x80000000}};
  float check = -1.04977310e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_623) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x170000}};
  float check = 3.96140812e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_624) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x80170000}};
  float check = -3.96140812e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_625) {
  s21_decimal decimal = {{0x1eb851ec, 0xb851eb85, 0x21eb851e, 0x160000}};
  float check = 1.04977312e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_626) {
  s21_decimal decimal = {{0x1eb851ec, 0xb851eb85, 0x21eb851e, 0x80160000}};
  float check = -1.04977312e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_627) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x1c0000}};
  float check = 3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_628) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x801c0000}};
  float check = -3.96140814e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_629) {
  s21_decimal decimal = {{0x1eb851ec, 0xb851eb85, 0x21eb851e, 0x1b0000}};
  float check = 1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_630) {
  s21_decimal decimal = {{0x1eb851ec, 0xb851eb85, 0x21eb851e, 0x801b0000}};
  float check = -1.04977312e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_631) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0}};
  float check = 9.22337204e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_632) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0x80000000}};
  float check = -9.22337204e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_633) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x20000}};
  float check = 2.44419368e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_634) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x80020000}};
  float check = -2.44419368e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_635) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0x10000}};
  float check = 9.22337217e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_636) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0x80010000}};
  float check = -9.22337217e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_637) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x30000}};
  float check = 2.44419346e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_638) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x80030000}};
  float check = -2.44419346e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_639) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0xa0000}};
  float check = 9.22337216e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_640) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0x800a0000}};
  float check = -9.22337216e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_641) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0xc0000}};
  float check = 2.44419354e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_642) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x800c0000}};
  float check = -2.44419354e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_643) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0x120000}};
  float check = 9.22337246e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_644) {
  s21_decimal decimal = {{0x80000000, 0x80000000, 0, 0x80120000}};
  float check = -9.22337246e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_645) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x140000}};
  float check = 2.44419365e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_646) {
  s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x80140000}};
  float check = -2.44419365e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_647) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0}};
  float check = 9.22337204e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_648) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0x80000000}};
  float check = -9.22337204e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_649) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0x20000}};
  float check = 2.44419368e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_650) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0x80020000}};
  float check = -2.44419368e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_651) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0x10000}};
  float check = 9.22337217e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_652) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0x80010000}};
  float check = -9.22337217e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_653) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0x30000}};
  float check = 2.44419346e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_654) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0x80030000}};
  float check = -2.44419346e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_655) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0xb0000}};
  float check = 9.22337200e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_656) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0x800b0000}};
  float check = -9.22337200e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_657) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0xd0000}};
  float check = 2.44419360e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_658) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0x800d0000}};
  float check = -2.44419360e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_659) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0x120000}};
  float check = 9.22337246e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_660) {
  s21_decimal decimal = {{0, 0x80000000, 0, 0x80120000}};
  float check = -9.22337246e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_661) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0x140000}};
  float check = 2.44419365e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_662) {
  s21_decimal decimal = {{0, 0x80000000, 0x84, 0x80140000}};
  float check = -2.44419365e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_663) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_664) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80000000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_665) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x20000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_666) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x80020000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_667) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x10000}};
  float check = 2.14748368e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_668) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80010000}};
  float check = -2.14748368e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_669) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x30000}};
  float check = 5.69083136e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_670) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x80030000}};
  float check = -5.69083136e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_671) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x20000}};
  float check = 2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_672) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80020000}};
  float check = -2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_673) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x40000}};
  float check = 5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_674) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x80040000}};
  float check = -5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_675) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x40000}};
  float check = 2.14748359e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_676) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80040000}};
  float check = -2.14748359e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_677) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x60000}};
  float check = 5.69083188e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_678) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x80060000}};
  float check = -5.69083188e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_679) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80000}};
  float check = 2.14748363e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_680) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80080000}};
  float check = -2.14748363e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_681) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0xa0000}};
  float check = 5.69083176e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_682) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x800a0000}};
  float check = -5.69083176e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_683) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x90000}};
  float check = 2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_684) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80090000}};
  float check = -2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_685) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0xb0000}};
  float check = 5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_686) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x800b0000}};
  float check = -5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_687) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0}};
  float check = 1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_688) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80000000}};
  float check = -1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_689) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x20000}};
  float check = 4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_690) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x80020000}};
  float check = -4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_691) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x10000}};
  float check = 1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_692) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80010000}};
  float check = -1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_693) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x30000}};
  float check = 4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_694) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x80030000}};
  float check = -4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_695) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x140000}};
  float check = 1.56064762e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_696) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80140000}};
  float check = -1.56064762e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_697) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x160000}};
  float check = 4.13571625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_698) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x80160000}};
  float check = -4.13571625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_699) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x1a0000}};
  float check = 1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_700) {
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x801a0000}};
  float check = -1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_701) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x1c0000}};
  float check = 4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_702) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0x85a1d800, 0x801c0000}};
  float check = -4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_703) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0}};
  float check = 1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_704) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0x80000000}};
  float check = -1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_705) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x20000}};
  float check = 4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_706) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x80020000}};
  float check = -4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_707) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0x10000}};
  float check = 1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_708) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0x80010000}};
  float check = -1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_709) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x30000}};
  float check = 4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_710) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x80030000}};
  float check = -4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_711) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0x130000}};
  float check = 1.56064770e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_712) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0x80130000}};
  float check = -1.56064770e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_713) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x150000}};
  float check = 4.13571640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_714) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x80150000}};
  float check = -4.13571640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_715) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0x1a0000}};
  float check = 1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_716) {
  s21_decimal decimal = {{0, 0x811800, 0x811800, 0x801a0000}};
  float check = -1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_717) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x1c0000}};
  float check = 4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_718) {
  s21_decimal decimal = {{0, 0x85a1d800, 0x85a1d800, 0x801c0000}};
  float check = -4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_719) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0}};
  float check = 1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_720) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0x80000000}};
  float check = -1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_721) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x20000}};
  float check = 4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_722) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x80020000}};
  float check = -4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_723) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0x10000}};
  float check = 1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_724) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0x80010000}};
  float check = -1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_725) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x30000}};
  float check = 4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_726) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x80030000}};
  float check = -4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_727) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0x150000}};
  float check = 1.56064766e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_728) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0x80150000}};
  float check = -1.56064766e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_729) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x170000}};
  float check = 4.13571625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_730) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x80170000}};
  float check = -4.13571625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_731) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0x1a0000}};
  float check = 1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_732) {
  s21_decimal decimal = {{0x811800, 0, 0x811800, 0x801a0000}};
  float check = -1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_733) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x1c0000}};
  float check = 4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_734) {
  s21_decimal decimal = {{0x85a1d800, 0, 0x85a1d800, 0x801c0000}};
  float check = -4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_735) {
  s21_decimal decimal = {{0, 0, 0x811800, 0}};
  float check = 1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_736) {
  s21_decimal decimal = {{0, 0, 0x811800, 0x80000000}};
  float check = -1.56064768e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_737) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x20000}};
  float check = 4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_738) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x80020000}};
  float check = -4.13571649e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_739) {
  s21_decimal decimal = {{0, 0, 0x811800, 0x10000}};
  float check = 1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_740) {
  s21_decimal decimal = {{0, 0, 0x811800, 0x80010000}};
  float check = -1.56064770e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_741) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x30000}};
  float check = 4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_742) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x80030000}};
  float check = -4.13571621e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_743) {
  s21_decimal decimal = {{0, 0, 0x811800, 0x160000}};
  float check = 1.56064766e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_744) {
  s21_decimal decimal = {{0, 0, 0x811800, 0x80160000}};
  float check = -1.56064766e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_745) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x180000}};
  float check = 4.13571641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_746) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x80180000}};
  float check = -4.13571641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_747) {
  s21_decimal decimal = {{0, 0, 0x811800, 0x1a0000}};
  float check = 1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_748) {
  s21_decimal decimal = {{0, 0, 0x811800, 0x801a0000}};
  float check = -1.56064773e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_749) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x1c0000}};
  float check = 4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_750) {
  s21_decimal decimal = {{0, 0, 0x85a1d800, 0x801c0000}};
  float check = -4.13571644e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_751) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0}};
  float check = 3.63366603e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_752) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0x80000000}};
  float check = -3.63366603e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_753) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0x20000}};
  float check = 9.62921532e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_754) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0x80020000}};
  float check = -9.62921532e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_755) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0x10000}};
  float check = 3.63366608e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_756) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0x80010000}};
  float check = -3.63366608e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_757) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0x30000}};
  float check = 9.62921467e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_758) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0x80030000}};
  float check = -9.62921467e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_759) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0x80000}};
  float check = 3.63366592e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_760) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0x80080000}};
  float check = -3.63366592e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_761) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0xa0000}};
  float check = 9.62921472e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_762) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0x800a0000}};
  float check = -9.62921472e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_763) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0x100000}};
  float check = 3.63366604e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_764) {
  s21_decimal decimal = {{0x811800, 0x811800, 0, 0x80100000}};
  float check = -3.63366604e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_765) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0x120000}};
  float check = 9.62921524e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_766) {
  s21_decimal decimal = {{0x85a1d800, 0x85a1d800, 0, 0x80120000}};
  float check = -9.62921524e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_767) {
  s21_decimal decimal = {{0, 0x811800, 0, 0}};
  float check = 3.63366603e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_768) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x80000000}};
  float check = -3.63366603e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_769) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x20000}};
  float check = 9.62921532e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_770) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x80020000}};
  float check = -9.62921532e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_771) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x10000}};
  float check = 3.63366608e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_772) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x80010000}};
  float check = -3.63366608e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_773) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x30000}};
  float check = 9.62921467e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_774) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x80030000}};
  float check = -9.62921467e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_775) {
  s21_decimal decimal = {{0, 0x811800, 0, 0xa0000}};
  float check = 3.63366600e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_776) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x800a0000}};
  float check = -3.63366600e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_777) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0xc0000}};
  float check = 9.62921500e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_778) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x800c0000}};
  float check = -9.62921500e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_779) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x80000}};
  float check = 3.63366592e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_780) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x80080000}};
  float check = -3.63366592e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_781) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0xa0000}};
  float check = 9.62921472e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_782) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x800a0000}};
  float check = -9.62921472e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_783) {
  s21_decimal decimal = {{0, 0x811800, 0, 0xf0000}};
  float check = 3.63366585e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_784) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x800f0000}};
  float check = -3.63366585e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_785) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x110000}};
  float check = 9.62921524e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_786) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x80110000}};
  float check = -9.62921524e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_787) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x100000}};
  float check = 3.63366604e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_788) {
  s21_decimal decimal = {{0, 0x811800, 0, 0x80100000}};
  float check = -3.63366604e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_789) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x120000}};
  float check = 9.62921524e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_790) {
  s21_decimal decimal = {{0, 0x85a1d800, 0, 0x80120000}};
  float check = -9.62921524e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_791) {
  s21_decimal decimal = {{0x811800, 0, 0, 0}};
  float check = 8.46028800e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_792) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x80000000}};
  float check = -8.46028800e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_793) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x20000}};
  float check = 2.24197640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_794) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x80020000}};
  float check = -2.24197640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_795) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x10000}};
  float check = 8.46028812e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_796) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x80010000}};
  float check = -8.46028812e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_797) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x30000}};
  float check = 2.24197625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_798) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x80030000}};
  float check = -2.24197625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_799) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x20000}};
  float check = 8.46028828e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_800) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x80020000}};
  float check = -8.46028828e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_801) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x40000}};
  float check = 2.24197625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_802) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x80040000}};
  float check = -2.24197625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_803) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x30000}};
  float check = 8.46028809e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_804) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x80030000}};
  float check = -8.46028809e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_805) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x50000}};
  float check = 2.24197637e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_806) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x80050000}};
  float check = -2.24197637e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_807) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x50000}};
  float check = 8.46028824e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_808) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x80050000}};
  float check = -8.46028824e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_809) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x70000}};
  float check = 2.24197632e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_810) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x80070000}};
  float check = -2.24197632e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_811) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x60000}};
  float check = 8.46028805e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_812) {
  s21_decimal decimal = {{0x811800, 0, 0, 0x80060000}};
  float check = -8.46028805e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_813) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x80000}};
  float check = 2.24197636e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_814) {
  s21_decimal decimal = {{0x85a1d800, 0, 0, 0x80080000}};
  float check = -2.24197636e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_815) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_816) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_817) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x10000}};
  float check = 7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_818) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80010000}};
  float check = -7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_819) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0}};
  float check = 2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_820) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80000000}};
  float check = -2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_821) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x140000}};
  float check = 7.92281600e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_822) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80140000}};
  float check = -7.92281600e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_823) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x130000}};
  float check = 2.09954637e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_824) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x80130000}};
  float check = -2.09954637e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_825) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x1c0000}};
  float check = 7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_826) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffffff, 0x801c0000}};
  float check = -7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_827) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x1b0000}};
  float check = 2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_828) {
  s21_decimal decimal = {{0x3d70a3d7, 0x70a3d70a, 0x43d70a3d, 0x801b0000}};
  float check = -2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_829) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_830) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_831) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0x10000}};
  float check = 7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_832) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0x80010000}};
  float check = -7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_833) {
  s21_decimal decimal = {{0xf999999a, 0x70a3d709, 0x43d70a3d, 0}};
  float check = 2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_834) {
  s21_decimal decimal = {{0xf999999a, 0x70a3d709, 0x43d70a3d, 0x80000000}};
  float check = -2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_835) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0x150000}};
  float check = 7.92281600e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_836) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0x80150000}};
  float check = -7.92281600e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_837) {
  s21_decimal decimal = {{0xf999999a, 0x70a3d709, 0x43d70a3d, 0x140000}};
  float check = 2.09954624e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_838) {
  s21_decimal decimal = {{0xf999999a, 0x70a3d709, 0x43d70a3d, 0x80140000}};
  float check = -2.09954624e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_839) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0x1c0000}};
  float check = 7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_840) {
  s21_decimal decimal = {{0, 0xffffffff, 0xffffffff, 0x801c0000}};
  float check = -7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_841) {
  s21_decimal decimal = {{0xf999999a, 0x70a3d709, 0x43d70a3d, 0x1b0000}};
  float check = 2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_842) {
  s21_decimal decimal = {{0xf999999a, 0x70a3d709, 0x43d70a3d, 0x801b0000}};
  float check = -2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_843) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_844) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_845) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0x10000}};
  float check = 7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_846) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0x80010000}};
  float check = -7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_847) {
  s21_decimal decimal = {{0x10a3d70a, 0x2ccccccd, 0x43d70a3d, 0}};
  float check = 2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_848) {
  s21_decimal decimal = {{0x10a3d70a, 0x2ccccccd, 0x43d70a3d, 0x80000000}};
  float check = -2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_849) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0x160000}};
  float check = 7.92281600e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_850) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0x80160000}};
  float check = -7.92281600e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_851) {
  s21_decimal decimal = {{0x10a3d70a, 0x2ccccccd, 0x43d70a3d, 0x150000}};
  float check = 2.09954640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_852) {
  s21_decimal decimal = {{0x10a3d70a, 0x2ccccccd, 0x43d70a3d, 0x80150000}};
  float check = -2.09954640e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_853) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0x1c0000}};
  float check = 7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_854) {
  s21_decimal decimal = {{0xffffffff, 0, 0xffffffff, 0x801c0000}};
  float check = -7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_855) {
  s21_decimal decimal = {{0x10a3d70a, 0x2ccccccd, 0x43d70a3d, 0x1b0000}};
  float check = 2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_856) {
  s21_decimal decimal = {{0x10a3d70a, 0x2ccccccd, 0x43d70a3d, 0x801b0000}};
  float check = -2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_857) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_858) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_859) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0x10000}};
  float check = 7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_860) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0x80010000}};
  float check = -7.92281637e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_861) {
  s21_decimal decimal = {{0xcccccccd, 0x2ccccccc, 0x43d70a3d, 0}};
  float check = 2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_862) {
  s21_decimal decimal = {{0xcccccccd, 0x2ccccccc, 0x43d70a3d, 0x80000000}};
  float check = -2.09954619e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_863) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0x170000}};
  float check = 7.92281625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_864) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0x80170000}};
  float check = -7.92281625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_865) {
  s21_decimal decimal = {{0xcccccccd, 0x2ccccccc, 0x43d70a3d, 0x160000}};
  float check = 2.09954625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_866) {
  s21_decimal decimal = {{0xcccccccd, 0x2ccccccc, 0x43d70a3d, 0x80160000}};
  float check = -2.09954625e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_867) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0x1c0000}};
  float check = 7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_868) {
  s21_decimal decimal = {{0, 0, 0xffffffff, 0x801c0000}};
  float check = -7.92281628e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_869) {
  s21_decimal decimal = {{0xcccccccd, 0x2ccccccc, 0x43d70a3d, 0x1b0000}};
  float check = 2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_870) {
  s21_decimal decimal = {{0xcccccccd, 0x2ccccccc, 0x43d70a3d, 0x801b0000}};
  float check = -2.09954624e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_871) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0}};
  float check = 1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_872) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x80000000}};
  float check = -1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_873) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x20000}};
  float check = 4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_874) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x80020000}};
  float check = -4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_875) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x10000}};
  float check = 1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_876) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x80010000}};
  float check = -1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_877) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x30000}};
  float check = 4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_878) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x80030000}};
  float check = -4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_879) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x30000}};
  float check = 1.84467449e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_880) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x80030000}};
  float check = -1.84467449e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_881) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x50000}};
  float check = 4.88838704e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_882) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x80050000}};
  float check = -4.88838704e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_883) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0xb0000}};
  float check = 1.84467440e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_884) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x800b0000}};
  float check = -1.84467440e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_885) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0xd0000}};
  float check = 4.88838720e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_886) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x800d0000}};
  float check = -4.88838720e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_887) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x110000}};
  float check = 1.84467438e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_888) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x80110000}};
  float check = -1.84467438e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_889) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x130000}};
  float check = 4.88838715e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_890) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x80130000}};
  float check = -4.88838715e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_891) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x130000}};
  float check = 1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_892) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0, 0x80130000}};
  float check = -1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_893) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x150000}};
  float check = 4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_894) {
  s21_decimal decimal = {{0xfffffef7, 0xffffffff, 0x108, 0x80150000}};
  float check = -4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_895) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0}};
  float check = 1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_896) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x80000000}};
  float check = -1.84467441e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_897) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x20000}};
  float check = 4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_898) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x80020000}};
  float check = -4.88838736e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_899) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x10000}};
  float check = 1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_900) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x80010000}};
  float check = -1.84467443e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_901) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x30000}};
  float check = 4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_902) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x80030000}};
  float check = -4.88838692e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_903) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x30000}};
  float check = 1.84467449e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_904) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x80030000}};
  float check = -1.84467449e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_905) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x50000}};
  float check = 4.88838704e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_906) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x80050000}};
  float check = -4.88838704e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_907) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0xc0000}};
  float check = 1.84467440e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_908) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x800c0000}};
  float check = -1.84467440e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_909) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0xe0000}};
  float check = 4.88838720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_910) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x800e0000}};
  float check = -4.88838720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_911) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x110000}};
  float check = 1.84467438e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_912) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x80110000}};
  float check = -1.84467438e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_913) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x130000}};
  float check = 4.88838715e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_914) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x80130000}};
  float check = -4.88838715e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_915) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x130000}};
  float check = 1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_916) {
  s21_decimal decimal = {{0, 0xffffffff, 0, 0x80130000}};
  float check = -1.84467435e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_917) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x150000}};
  float check = 4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_918) {
  s21_decimal decimal = {{0, 0xfffffef7, 0x108, 0x80150000}};
  float check = -4.88838720e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_919) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0}};
  float check = 4.29496730e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_920) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x80000000}};
  float check = -4.29496730e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_921) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x20000}};
  float check = 1.13816637e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_922) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x80020000}};
  float check = -1.13816637e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_923) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x10000}};
  float check = 4.29496736e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_924) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x80010000}};
  float check = -4.29496736e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_925) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x30000}};
  float check = 1.13816627e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_926) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x80030000}};
  float check = -1.13816627e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_927) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x20000}};
  float check = 4.29496720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_928) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x80020000}};
  float check = -4.29496720e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_929) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x40000}};
  float check = 1.13816632e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_930) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x80040000}};
  float check = -1.13816632e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_931) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x50000}};
  float check = 4.29496719e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_932) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x80050000}};
  float check = -4.29496719e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_933) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x70000}};
  float check = 1.13816633e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_934) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x80070000}};
  float check = -1.13816633e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_935) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x80000}};
  float check = 4.29496727e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_936) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x80080000}};
  float check = -4.29496727e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_937) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0xa0000}};
  float check = 1.13816635e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_938) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x800a0000}};
  float check = -1.13816635e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_939) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x90000}};
  float check = 4.29496717e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_940) {
  s21_decimal decimal = {{0xffffffff, 0, 0, 0x80090000}};
  float check = -4.29496717e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_941) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0xb0000}};
  float check = 1.13816633e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_942) {
  s21_decimal decimal = {{0xfffffef7, 0x108, 0, 0x800b0000}};
  float check = -1.13816633e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_943) {
  s21_decimal decimal = {{0x1, 0, 0, 0}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_944) {
  s21_decimal decimal = {{0x1, 0, 0, 0x80000000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_945) {
  s21_decimal decimal = {{0x109, 0, 0, 0x20000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_946) {
  s21_decimal decimal = {{0x109, 0, 0, 0x80020000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_947) {
  s21_decimal decimal = {{0xa, 0, 0, 0x10000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_948) {
  s21_decimal decimal = {{0xa, 0, 0, 0x80010000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_949) {
  s21_decimal decimal = {{0xa5a, 0, 0, 0x30000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_950) {
  s21_decimal decimal = {{0xa5a, 0, 0, 0x80030000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_951) {
  s21_decimal decimal = {{0x64, 0, 0, 0x20000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_952) {
  s21_decimal decimal = {{0x64, 0, 0, 0x80020000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_953) {
  s21_decimal decimal = {{0x6784, 0, 0, 0x40000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_954) {
  s21_decimal decimal = {{0x6784, 0, 0, 0x80040000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_955) {
  s21_decimal decimal = {{0x3e8, 0, 0, 0x30000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_956) {
  s21_decimal decimal = {{0x3e8, 0, 0, 0x80030000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_957) {
  s21_decimal decimal = {{0x40b28, 0, 0, 0x50000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_958) {
  s21_decimal decimal = {{0x40b28, 0, 0, 0x80050000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_959) {
  s21_decimal decimal = {{0x540be400, 0x2, 0, 0xa0000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_960) {
  s21_decimal decimal = {{0x540be400, 0x2, 0, 0x800a0000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_961) {
  s21_decimal decimal = {{0x4f0400, 0x269, 0, 0xc0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_962) {
  s21_decimal decimal = {{0x4f0400, 0x269, 0, 0x800c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_963) {
  s21_decimal decimal = {{0x6fc10000, 0x2386f2, 0, 0x100000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_964) {
  s21_decimal decimal = {{0x6fc10000, 0x2386f2, 0, 0x80100000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_965) {
  s21_decimal decimal = {{0xaec90000, 0x24c6b0f5, 0, 0x120000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_966) {
  s21_decimal decimal = {{0xaec90000, 0x24c6b0f5, 0, 0x80120000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_967) {
  s21_decimal decimal = {{0xf6800000, 0x2c7e14a, 0x152d, 0x170000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_968) {
  s21_decimal decimal = {{0xf6800000, 0x2c7e14a, 0x152d, 0x80170000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_969) {
  s21_decimal decimal = {{0x2a800000, 0xe0e83699, 0x15eb97, 0x190000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_970) {
  s21_decimal decimal = {{0x2a800000, 0xe0e83699, 0x15eb97, 0x80190000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_971) {
  s21_decimal decimal = {{0xe8000000, 0x9fd0803c, 0x33b2e3c, 0x1b0000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_972) {
  s21_decimal decimal = {{0xe8000000, 0x9fd0803c, 0x33b2e3c, 0x801b0000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_973) {
  s21_decimal decimal = {{0x4000000, 0x8b15464e, 0x55a04946, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_974) {
  s21_decimal decimal = {{0x4000000, 0x8b15464e, 0x55a04946, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_975) {
  s21_decimal decimal = {{0x10000000, 0x3e250261, 0x204fce5e, 0x1c0000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_976) {
  s21_decimal decimal = {{0x10000000, 0x3e250261, 0x204fce5e, 0x801c0000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_977) {
  s21_decimal decimal = {{0x4000000, 0x8b15464e, 0x55a04946, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_978) {
  s21_decimal decimal = {{0x4000000, 0x8b15464e, 0x55a04946, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_979) {
  s21_decimal decimal = {{0xb, 0, 0, 0x10000}};
  float check = 1.10000002e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_980) {
  s21_decimal decimal = {{0xb, 0, 0, 0x80010000}};
  float check = -1.10000002e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_981) {
  s21_decimal decimal = {{0xb63, 0, 0, 0x30000}};
  float check = 2.91499996e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_982) {
  s21_decimal decimal = {{0xb63, 0, 0, 0x80030000}};
  float check = -2.91499996e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_983) {
  s21_decimal decimal = {{0x4bc, 0, 0, 0x20000}};
  float check = 1.21199999e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_984) {
  s21_decimal decimal = {{0x4bc, 0, 0, 0x80020000}};
  float check = -1.21199999e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_985) {
  s21_decimal decimal = {{0x4e69c, 0, 0, 0x40000}};
  float check = 3.21180000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_986) {
  s21_decimal decimal = {{0x4e69c, 0, 0, 0x80040000}};
  float check = -3.21180000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_987) {
  s21_decimal decimal = {{0x1e0f3, 0, 0, 0x30000}};
  float check = 1.23123001e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_988) {
  s21_decimal decimal = {{0x1e0f3, 0, 0, 0x80030000}};
  float check = -1.23123001e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_989) {
  s21_decimal decimal = {{0x1f1db8b, 0, 0, 0x50000}};
  float check = 3.26275940e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_990) {
  s21_decimal decimal = {{0x1f1db8b, 0, 0, 0x80050000}};
  float check = -3.26275940e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_991) {
  s21_decimal decimal = {{0xbc4ff2, 0, 0, 0x40000}};
  float check = 1.23412341e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_992) {
  s21_decimal decimal = {{0xbc4ff2, 0, 0, 0x80040000}};
  float check = -1.23412341e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_993) {
  s21_decimal decimal = {{0xc2eec182, 0, 0, 0x60000}};
  float check = 3.27042700e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_994) {
  s21_decimal decimal = {{0xc2eec182, 0, 0, 0x80060000}};
  float check = -3.27042700e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_995) {
  s21_decimal decimal = {{0x499529d9, 0, 0, 0x50000}};
  float check = 1.23451230e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_996) {
  s21_decimal decimal = {{0x499529d9, 0, 0, 0x80050000}};
  float check = -1.23451230e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_997) {
  s21_decimal decimal = {{0x2b6851a1, 0x4c, 0, 0x70000}};
  float check = 3.27145762e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_998) {
  s21_decimal decimal = {{0x2b6851a1, 0x4c, 0, 0x80070000}};
  float check = -3.27145762e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_999) {
  s21_decimal decimal = {{0xbe8ef240, 0x1c, 0, 0x60000}};
  float check = 1.23456125e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1000) {
  s21_decimal decimal = {{0xbe8ef240, 0x1c, 0, 0x80060000}};
  float check = -1.23456125e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1001) {
  s21_decimal decimal = {{0x41f8c440, 0x1dc1, 0, 0x80000}};
  float check = 3.27158719e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1002) {
  s21_decimal decimal = {{0x41f8c440, 0x1dc1, 0, 0x80080000}};
  float check = -3.27158719e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1003) {
  s21_decimal decimal = {{0x73593407, 0xb3a, 0, 0x70000}};
  float check = 1.23456712e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1004) {
  s21_decimal decimal = {{0x73593407, 0xb3a, 0, 0x80070000}};
  float check = -1.23456712e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1005) {
  s21_decimal decimal = {{0x6756db3f, 0xb9f81, 0, 0x90000}};
  float check = 3.27160300e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1006) {
  s21_decimal decimal = {{0x6756db3f, 0xb9f81, 0, 0x80090000}};
  float check = -3.27160300e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1007) {
  s21_decimal decimal = {{0xeb1f0ad2, 0xab54a98c, 0, 0xa0000}};
  float check = 1.23456794e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1008) {
  s21_decimal decimal = {{0xeb1f0ad2, 0xab54a98c, 0, 0x800a0000}};
  float check = -1.23456794e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1009) {
  s21_decimal decimal = {{0x63223362, 0x5aa382df, 0xb1, 0xc0000}};
  float check = 3.27160499e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1010) {
  s21_decimal decimal = {{0x63223362, 0x5aa382df, 0xb1, 0x800c0000}};
  float check = -3.27160499e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1011) {
  s21_decimal decimal = {{0xf91eaff2, 0x6d795225, 0x3fd35eb, 0xe0000}};
  float check = 1.23456790e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1012) {
  s21_decimal decimal = {{0xf91eaff2, 0x6d795225, 0x3fd35eb, 0x800e0000}};
  float check = -1.23456790e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1013) {
  s21_decimal decimal = {{0x49ad368d, 0xd50f00ee, 0x69b614de, 0xf0000}};
  float check = 3.27160494e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1014) {
  s21_decimal decimal = {{0x49ad368d, 0xd50f00ee, 0x69b614de, 0x800f0000}};
  float check = -3.27160494e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1015) {
  s21_decimal decimal = {{0x63, 0, 0, 0}};
  float check = 9.90000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1016) {
  s21_decimal decimal = {{0x63, 0, 0, 0x80000000}};
  float check = -9.90000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1017) {
  s21_decimal decimal = {{0x667b, 0, 0, 0x20000}};
  float check = 2.62350006e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1018) {
  s21_decimal decimal = {{0x667b, 0, 0, 0x80020000}};
  float check = -2.62350006e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1019) {
  s21_decimal decimal = {{0x63, 0, 0, 0x10000}};
  float check = 9.89999962e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1020) {
  s21_decimal decimal = {{0x63, 0, 0, 0x80010000}};
  float check = -9.89999962e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1021) {
  s21_decimal decimal = {{0x667b, 0, 0, 0x30000}};
  float check = 2.62350006e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1022) {
  s21_decimal decimal = {{0x667b, 0, 0, 0x80030000}};
  float check = -2.62350006e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1023) {
  s21_decimal decimal = {{0x270f, 0, 0, 0x20000}};
  float check = 9.99899979e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1024) {
  s21_decimal decimal = {{0x270f, 0, 0, 0x80020000}};
  float check = -9.99899979e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1025) {
  s21_decimal decimal = {{0x286e87, 0, 0, 0x40000}};
  float check = 2.64973511e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1026) {
  s21_decimal decimal = {{0x286e87, 0, 0, 0x80040000}};
  float check = -2.64973511e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1027) {
  s21_decimal decimal = {{0xf423f, 0, 0, 0x30000}};
  float check = 9.99999023e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1028) {
  s21_decimal decimal = {{0xf423f, 0, 0, 0x80030000}};
  float check = -9.99999023e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1029) {
  s21_decimal decimal = {{0xfcb9337, 0, 0, 0x50000}};
  float check = 2.64999731e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1030) {
  s21_decimal decimal = {{0xfcb9337, 0, 0, 0x80050000}};
  float check = -2.64999731e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1031) {
  s21_decimal decimal = {{0x5f5e0ff, 0, 0, 0x40000}};
  float check = 1.00000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1032) {
  s21_decimal decimal = {{0x5f5e0ff, 0, 0, 0x80040000}};
  float check = -1.00000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1033) {
  s21_decimal decimal = {{0x2b85e7f7, 0x6, 0, 0x60000}};
  float check = 2.65000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1034) {
  s21_decimal decimal = {{0x2b85e7f7, 0x6, 0, 0x80060000}};
  float check = -2.65000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1035) {
  s21_decimal decimal = {{0x540be3ff, 0x2, 0, 0x50000}};
  float check = 1.00000000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1036) {
  s21_decimal decimal = {{0x540be3ff, 0x2, 0, 0x80050000}};
  float check = -1.00000000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1037) {
  s21_decimal decimal = {{0x4f02f7, 0x269, 0, 0x70000}};
  float check = 2.65000000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1038) {
  s21_decimal decimal = {{0x4f02f7, 0x269, 0, 0x80070000}};
  float check = -2.65000000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1039) {
  s21_decimal decimal = {{0xd4a50fff, 0xe8, 0, 0x60000}};
  float check = 1.00000000e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1040) {
  s21_decimal decimal = {{0xd4a50fff, 0xe8, 0, 0x80060000}};
  float check = -1.00000000e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1041) {
  s21_decimal decimal = {{0x1edd8ef7, 0xf104, 0, 0x80000}};
  float check = 2.65000000e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1042) {
  s21_decimal decimal = {{0x1edd8ef7, 0xf104, 0, 0x80080000}};
  float check = -2.65000000e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1043) {
  s21_decimal decimal = {{0x107a3fff, 0x5af3, 0, 0x70000}};
  float check = 1.00000000e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1044) {
  s21_decimal decimal = {{0x107a3fff, 0x5af3, 0, 0x80070000}};
  float check = -1.00000000e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1045) {
  s21_decimal decimal = {{0xe8c3ef7, 0x5e259c, 0, 0x90000}};
  float check = 2.65000000e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1046) {
  s21_decimal decimal = {{0xe8c3ef7, 0x5e259c, 0, 0x80090000}};
  float check = -2.65000000e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1047) {
  s21_decimal decimal = {{0x6fc0ffff, 0x2386f2, 0, 0x80000}};
  float check = 1.00000000e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1048) {
  s21_decimal decimal = {{0x6fc0ffff, 0x2386f2, 0, 0x80080000}};
  float check = -1.00000000e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1049) {
  s21_decimal decimal = {{0xaec8fef7, 0x24c6b0f5, 0, 0xa0000}};
  float check = 2.65000000e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1050) {
  s21_decimal decimal = {{0xaec8fef7, 0x24c6b0f5, 0, 0x800a0000}};
  float check = -2.65000000e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1051) {
  s21_decimal decimal = {{0xa763ffff, 0xde0b6b3, 0, 0x90000}};
  float check = 1.00000000e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1052) {
  s21_decimal decimal = {{0xa763ffff, 0xde0b6b3, 0, 0x80090000}};
  float check = -1.00000000e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1053) {
  s21_decimal decimal = {{0x4683fef7, 0x5d9d1ff8, 0xe, 0xb0000}};
  float check = 2.64999987e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1054) {
  s21_decimal decimal = {{0x4683fef7, 0x5d9d1ff8, 0xe, 0x800b0000}};
  float check = -2.64999987e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1055) {
  s21_decimal decimal = {{0x630fffff, 0x6bc75e2d, 0x5, 0xa0000}};
  float check = 1.00000000e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1056) {
  s21_decimal decimal = {{0x630fffff, 0x6bc75e2d, 0x5, 0x800a0000}};
  float check = -1.00000000e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1057) {
  s21_decimal decimal = {{0x8b8ffef7, 0x91607cfb, 0x59c, 0xc0000}};
  float check = 2.64999997e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1058) {
  s21_decimal decimal = {{0x8b8ffef7, 0x91607cfb, 0x59c, 0x800c0000}};
  float check = -2.64999997e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1059) {
  s21_decimal decimal = {{0x9, 0, 0, 0}};
  float check = 9.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1060) {
  s21_decimal decimal = {{0x9, 0, 0, 0x80000000}};
  float check = -9.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1061) {
  s21_decimal decimal = {{0x951, 0, 0, 0x20000}};
  float check = 2.38500004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1062) {
  s21_decimal decimal = {{0x951, 0, 0, 0x80020000}};
  float check = -2.38500004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1063) {
  s21_decimal decimal = {{0x9, 0, 0, 0x10000}};
  float check = 8.99999976e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1064) {
  s21_decimal decimal = {{0x9, 0, 0, 0x80010000}};
  float check = -8.99999976e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1065) {
  s21_decimal decimal = {{0x951, 0, 0, 0x30000}};
  float check = 2.38499999e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1066) {
  s21_decimal decimal = {{0x951, 0, 0, 0x80030000}};
  float check = -2.38499999e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1067) {
  s21_decimal decimal = {{0x63, 0, 0, 0x20000}};
  float check = 9.90000010e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1068) {
  s21_decimal decimal = {{0x63, 0, 0, 0x80020000}};
  float check = -9.90000010e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1069) {
  s21_decimal decimal = {{0x667b, 0, 0, 0x40000}};
  float check = 2.62350011e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1070) {
  s21_decimal decimal = {{0x667b, 0, 0, 0x80040000}};
  float check = -2.62350011e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1071) {
  s21_decimal decimal = {{0x3e7, 0, 0, 0x30000}};
  float check = 9.99000013e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1072) {
  s21_decimal decimal = {{0x3e7, 0, 0, 0x80030000}};
  float check = -9.99000013e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1073) {
  s21_decimal decimal = {{0x40a1f, 0, 0, 0x50000}};
  float check = 2.64735007e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1074) {
  s21_decimal decimal = {{0x40a1f, 0, 0, 0x80050000}};
  float check = -2.64735007e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1075) {
  s21_decimal decimal = {{0x270f, 0, 0, 0x40000}};
  float check = 9.99899983e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1076) {
  s21_decimal decimal = {{0x270f, 0, 0, 0x80040000}};
  float check = -9.99899983e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1077) {
  s21_decimal decimal = {{0x286e87, 0, 0, 0x60000}};
  float check = 2.64973497e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1078) {
  s21_decimal decimal = {{0x286e87, 0, 0, 0x80060000}};
  float check = -2.64973497e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1079) {
  s21_decimal decimal = {{0x1869f, 0, 0, 0x50000}};
  float check = 9.99989986e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1080) {
  s21_decimal decimal = {{0x1869f, 0, 0, 0x80050000}};
  float check = -9.99989986e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1081) {
  s21_decimal decimal = {{0x1945a97, 0, 0, 0x70000}};
  float check = 2.64997339e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1082) {
  s21_decimal decimal = {{0x1945a97, 0, 0, 0x80070000}};
  float check = -2.64997339e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1083) {
  s21_decimal decimal = {{0xf423f, 0, 0, 0x60000}};
  float check = 9.99998987e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1084) {
  s21_decimal decimal = {{0xf423f, 0, 0, 0x80060000}};
  float check = -9.99998987e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1085) {
  s21_decimal decimal = {{0xfcb9337, 0, 0, 0x80000}};
  float check = 2.64999723e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1086) {
  s21_decimal decimal = {{0xfcb9337, 0, 0, 0x80080000}};
  float check = -2.64999723e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1087) {
  s21_decimal decimal = {{0x98967f, 0, 0, 0x70000}};
  float check = 9.99999881e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1088) {
  s21_decimal decimal = {{0x98967f, 0, 0, 0x80070000}};
  float check = -9.99999881e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1089) {
  s21_decimal decimal = {{0x9df3c977, 0, 0, 0x90000}};
  float check = 2.64999962e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1090) {
  s21_decimal decimal = {{0x9df3c977, 0, 0, 0x80090000}};
  float check = -2.64999962e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1091) {
  s21_decimal decimal = {{0x5f5e0ff, 0, 0, 0x80000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1092) {
  s21_decimal decimal = {{0x5f5e0ff, 0, 0, 0x80080000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1093) {
  s21_decimal decimal = {{0x2b85e7f7, 0x6, 0, 0xa0000}};
  float check = 2.64999986e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1094) {
  s21_decimal decimal = {{0x2b85e7f7, 0x6, 0, 0x800a0000}};
  float check = -2.64999986e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1095) {
  s21_decimal decimal = {{0x3b9ac9ff, 0, 0, 0x90000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1096) {
  s21_decimal decimal = {{0x3b9ac9ff, 0, 0, 0x80090000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1097) {
  s21_decimal decimal = {{0xb33b18f7, 0x3d, 0, 0xb0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1098) {
  s21_decimal decimal = {{0xb33b18f7, 0x3d, 0, 0x800b0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1099) {
  s21_decimal decimal = {{0x540be3ff, 0x2, 0, 0xa0000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1100) {
  s21_decimal decimal = {{0x540be3ff, 0x2, 0, 0x800a0000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1101) {
  s21_decimal decimal = {{0x4f02f7, 0x269, 0, 0xc0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1102) {
  s21_decimal decimal = {{0x4f02f7, 0x269, 0, 0x800c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1103) {
  s21_decimal decimal = {{0x630fffff, 0x6bc75e2d, 0x5, 0x140000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1104) {
  s21_decimal decimal = {{0x630fffff, 0x6bc75e2d, 0x5, 0x80140000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1105) {
  s21_decimal decimal = {{0x8b8ffef7, 0x91607cfb, 0x59c, 0x160000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1106) {
  s21_decimal decimal = {{0x8b8ffef7, 0x91607cfb, 0x59c, 0x80160000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1107) {
  s21_decimal decimal = {{0, 0, 0, 0x80000000}};
  float check = -0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1108) {
  s21_decimal decimal = {{0, 0, 0, 0}};
  float check = 0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1109) {
  s21_decimal decimal = {{0, 0, 0, 0x80010000}};
  float check = -0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1110) {
  s21_decimal decimal = {{0, 0, 0, 0x10000}};
  float check = 0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1111) {
  s21_decimal decimal = {{0, 0, 0, 0x80020000}};
  float check = -0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1112) {
  s21_decimal decimal = {{0, 0, 0, 0x20000}};
  float check = 0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1113) {
  s21_decimal decimal = {{0, 0, 0, 0x800e0000}};
  float check = -0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1114) {
  s21_decimal decimal = {{0, 0, 0, 0xe0000}};
  float check = 0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1115) {
  s21_decimal decimal = {{0, 0, 0, 0x801b0000}};
  float check = -0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1116) {
  s21_decimal decimal = {{0, 0, 0, 0x1b0000}};
  float check = 0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1117) {
  s21_decimal decimal = {{0, 0, 0, 0x801c0000}};
  float check = -0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1118) {
  s21_decimal decimal = {{0, 0, 0, 0x1c0000}};
  float check = 0.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1119) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1120) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x80000000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1121) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x20000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1122) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x80020000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1123) {
  s21_decimal decimal = {{0xffffff38, 0x31, 0, 0x20000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1124) {
  s21_decimal decimal = {{0xffffff38, 0x31, 0, 0x80020000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1125) {
  s21_decimal decimal = {{0xffff30f8, 0x33c1, 0, 0x40000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1126) {
  s21_decimal decimal = {{0xffff30f8, 0x33c1, 0, 0x80040000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1127) {
  s21_decimal decimal = {{0xffffff9b, 0x31, 0, 0x20000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1128) {
  s21_decimal decimal = {{0xffffff9b, 0x31, 0, 0x80020000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1129) {
  s21_decimal decimal = {{0xffff9773, 0x33c1, 0, 0x40000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1130) {
  s21_decimal decimal = {{0xffff9773, 0x33c1, 0, 0x80040000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1131) {
  s21_decimal decimal = {{0x589bffff, 0xc5d1494c, 0x6f05b59, 0x120000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1132) {
  s21_decimal decimal = {{0x589bffff, 0xc5d1494c, 0x6f05b59, 0x80120000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1133) {
  s21_decimal decimal = {{0x2c25ffe6, 0xfa2a1667, 0xb7e174ca, 0x130000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1134) {
  s21_decimal decimal = {{0x2c25ffe6, 0xfa2a1667, 0xb7e174ca, 0x80130000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1135) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x20000}};
  float check = 2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1136) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x80020000}};
  float check = -2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1137) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x40000}};
  float check = 5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1138) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x80040000}};
  float check = -5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1139) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x70000}};
  float check = 2.14748367e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1140) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x80070000}};
  float check = -2.14748367e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1141) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x90000}};
  float check = 5.69083191e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1142) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x80090000}};
  float check = -5.69083191e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1143) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x90000}};
  float check = 2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1144) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x80090000}};
  float check = -2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1145) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0xb0000}};
  float check = 5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1146) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x800b0000}};
  float check = -5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1147) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0xa0000}};
  float check = 2.14748368e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1148) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x800a0000}};
  float check = -2.14748368e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1149) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0xc0000}};
  float check = 5.69083154e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1150) {
  s21_decimal decimal = {{0x7ffffdee, 0x84, 0, 0x800c0000}};
  float check = -5.69083154e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1151) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x1c0000}};
  float check = 2.14748365e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1152) {
  s21_decimal decimal = {{0x7ffffffe, 0, 0, 0x801c0000}};
  float check = -2.14748365e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1153) {
  s21_decimal decimal = {{0x5333332e, 0x1, 0, 0x1c0000}};
  float check = 5.69083149e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1154) {
  s21_decimal decimal = {{0x5333332e, 0x1, 0, 0x801c0000}};
  float check = -5.69083149e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1155) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1156) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x80000000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1157) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x20000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1158) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x80020000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1159) {
  s21_decimal decimal = {{0xffffff9c, 0x31, 0, 0x20000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1160) {
  s21_decimal decimal = {{0xffffff9c, 0x31, 0, 0x80020000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1161) {
  s21_decimal decimal = {{0xffff987c, 0x33c1, 0, 0x40000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1162) {
  s21_decimal decimal = {{0xffff987c, 0x33c1, 0, 0x80040000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1163) {
  s21_decimal decimal = {{0xffffffff, 0x31, 0, 0x20000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1164) {
  s21_decimal decimal = {{0xffffffff, 0x31, 0, 0x80020000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1165) {
  s21_decimal decimal = {{0xfffffef7, 0x33c1, 0, 0x40000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1166) {
  s21_decimal decimal = {{0xfffffef7, 0x33c1, 0, 0x80040000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1167) {
  s21_decimal decimal = {{0xffffffff, 0xd3b1ffff, 0x6f05b59, 0x120000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1168) {
  s21_decimal decimal = {{0xffffffff, 0xd3b1ffff, 0x6f05b59, 0x80120000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1169) {
  s21_decimal decimal = {{0xffffffe6, 0x69ecffff, 0xb7e174cc, 0x130000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1170) {
  s21_decimal decimal = {{0xffffffe6, 0x69ecffff, 0xb7e174cc, 0x80130000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1171) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x20000}};
  float check = 2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1172) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x80020000}};
  float check = -2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1173) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x40000}};
  float check = 5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1174) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x80040000}};
  float check = -5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1175) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x70000}};
  float check = 2.14748367e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1176) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x80070000}};
  float check = -2.14748367e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1177) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x90000}};
  float check = 5.69083191e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1178) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x80090000}};
  float check = -5.69083191e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1179) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x90000}};
  float check = 2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1180) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x80090000}};
  float check = -2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1181) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0xb0000}};
  float check = 5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1182) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x800b0000}};
  float check = -5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1183) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0xa0000}};
  float check = 2.14748368e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1184) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x800a0000}};
  float check = -2.14748368e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1185) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0xc0000}};
  float check = 5.69083154e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1186) {
  s21_decimal decimal = {{0x7ffffef7, 0x84, 0, 0x800c0000}};
  float check = -5.69083154e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1187) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x1c0000}};
  float check = 2.14748365e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1188) {
  s21_decimal decimal = {{0x7fffffff, 0, 0, 0x801c0000}};
  float check = -2.14748365e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1189) {
  s21_decimal decimal = {{0x53333331, 0x1, 0, 0x1c0000}};
  float check = 5.69083149e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1190) {
  s21_decimal decimal = {{0x53333331, 0x1, 0, 0x801c0000}};
  float check = -5.69083149e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1191) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1192) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80000000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1193) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x20000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1194) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x80020000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1195) {
  s21_decimal decimal = {{0, 0x32, 0, 0x20000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1196) {
  s21_decimal decimal = {{0, 0x32, 0, 0x80020000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1197) {
  s21_decimal decimal = {{0, 0x33c2, 0, 0x40000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1198) {
  s21_decimal decimal = {{0, 0x33c2, 0, 0x80040000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1199) {
  s21_decimal decimal = {{0x63, 0x32, 0, 0x20000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1200) {
  s21_decimal decimal = {{0x63, 0x32, 0, 0x80020000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1201) {
  s21_decimal decimal = {{0x667b, 0x33c2, 0, 0x40000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1202) {
  s21_decimal decimal = {{0x667b, 0x33c2, 0, 0x80040000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1203) {
  s21_decimal decimal = {{0xa763ffff, 0xe192b6b3, 0x6f05b59, 0x120000}};
  float check = 2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1204) {
  s21_decimal decimal = {{0xa763ffff, 0xe192b6b3, 0x6f05b59, 0x80120000}};
  float check = -2.14748365e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1205) {
  s21_decimal decimal = {{0xd3d9ffe6, 0xd9afe998, 0xb7e174cd, 0x130000}};
  float check = 5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1206) {
  s21_decimal decimal = {{0xd3d9ffe6, 0xd9afe998, 0xb7e174cd, 0x80130000}};
  float check = -5.69083187e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1207) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x20000}};
  float check = 2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1208) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80020000}};
  float check = -2.14748360e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1209) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x40000}};
  float check = 5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1210) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x80040000}};
  float check = -5.69083160e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1211) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x70000}};
  float check = 2.14748367e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1212) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80070000}};
  float check = -2.14748367e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1213) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x90000}};
  float check = 5.69083191e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1214) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x80090000}};
  float check = -5.69083191e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1215) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x90000}};
  float check = 2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1216) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x80090000}};
  float check = -2.14748359e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1217) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0xb0000}};
  float check = 5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1218) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x800b0000}};
  float check = -5.69083166e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1219) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0xa0000}};
  float check = 2.14748368e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1220) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x800a0000}};
  float check = -2.14748368e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1221) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0xc0000}};
  float check = 5.69083154e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1222) {
  s21_decimal decimal = {{0x80000000, 0x84, 0, 0x800c0000}};
  float check = -5.69083154e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1223) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x1c0000}};
  float check = 2.14748365e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1224) {
  s21_decimal decimal = {{0x80000000, 0, 0, 0x801c0000}};
  float check = -2.14748365e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1225) {
  s21_decimal decimal = {{0x53333333, 0x1, 0, 0x1c0000}};
  float check = 5.69083149e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1226) {
  s21_decimal decimal = {{0x53333333, 0x1, 0, 0x801c0000}};
  float check = -5.69083149e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1227) {
  s21_decimal decimal = {{0x66a422eb, 0x8df3404f, 0x204fce7e, 0x1c0000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1228) {
  s21_decimal decimal = {{0x66a422eb, 0x8df3404f, 0x204fce7e, 0x801c0000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1229) {
  s21_decimal decimal = {{0xcfffc2ef, 0x2b5e3738, 0x55a0499c, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1230) {
  s21_decimal decimal = {{0xcfffc2ef, 0x2b5e3738, 0x55a0499c, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1231) {
  s21_decimal decimal = {{0xb0a8e50b, 0x2d8ffccb, 0x204fcebf, 0x1c0000}};
  float check = 1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1232) {
  s21_decimal decimal = {{0xb0a8e50b, 0x2d8ffccb, 0x204fcebf, 0x801c0000}};
  float check = -1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1233) {
  s21_decimal decimal = {{0xfa8c5ef7, 0x6bf0c44e, 0x55a04a47, 0x1c0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1234) {
  s21_decimal decimal = {{0xfa8c5ef7, 0x6bf0c44e, 0x55a04a47, 0x801c0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1235) {
  s21_decimal decimal = {{0x12397676, 0x8df35077, 0x204fce7e, 0x1c0000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1236) {
  s21_decimal decimal = {{0x12397676, 0x8df35077, 0x204fce7e, 0x801c0000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1237) {
  s21_decimal decimal = {{0x56b1e052, 0x2b5e6208, 0x55a0499c, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1238) {
  s21_decimal decimal = {{0x56b1e052, 0x2b5e6208, 0x55a0499c, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1239) {
  s21_decimal decimal = {{0x5c3e3896, 0x2d900cf3, 0x204fcebf, 0x1c0000}};
  float check = 1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1240) {
  s21_decimal decimal = {{0x5c3e3896, 0x2d900cf3, 0x204fcebf, 0x801c0000}};
  float check = -1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1241) {
  s21_decimal decimal = {{0x813e7c5a, 0x6bf0ef1e, 0x55a04a47, 0x1c0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1242) {
  s21_decimal decimal = {{0x813e7c5a, 0x6bf0ef1e, 0x55a04a47, 0x801c0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1243) {
  s21_decimal decimal = {{0x59475b56, 0x8df35077, 0x204fce7e, 0x1c0000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1244) {
  s21_decimal decimal = {{0x59475b56, 0x8df35077, 0x204fce7e, 0x801c0000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1245) {
  s21_decimal decimal = {{0x12fd1871, 0x2b5e6209, 0x55a0499c, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1246) {
  s21_decimal decimal = {{0x12fd1871, 0x2b5e6209, 0x55a0499c, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1247) {
  s21_decimal decimal = {{0xa34c1d76, 0x2d900cf3, 0x204fcebf, 0x1c0000}};
  float check = 1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1248) {
  s21_decimal decimal = {{0xa34c1d76, 0x2d900cf3, 0x204fcebf, 0x801c0000}};
  float check = -1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1249) {
  s21_decimal decimal = {{0x3d89b479, 0x6bf0ef1f, 0x55a04a47, 0x1c0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1250) {
  s21_decimal decimal = {{0x3d89b479, 0x6bf0ef1f, 0x55a04a47, 0x801c0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1251) {
  s21_decimal decimal = {{0x6fcceda1, 0x1ca28f09, 0xd3c2, 0x180000}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1252) {
  s21_decimal decimal = {{0x6fcceda1, 0x1ca28f09, 0xd3c2, 0x80180000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1253) {
  s21_decimal decimal = {{0xbb21fba9, 0xa44610c4, 0xdb33ef, 0x1a0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1254) {
  s21_decimal decimal = {{0xbb21fba9, 0xa44610c4, 0xdb33ef, 0x801a0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1255) {
  s21_decimal decimal = {{0xd66c8e3, 0x1e4a1341, 0xd3c2, 0x180000}};
  float check = 1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1256) {
  s21_decimal decimal = {{0xd66c8e3, 0x1e4a1341, 0xd3c2, 0x80180000}};
  float check = -1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1257) {
  s21_decimal decimal = {{0xdf65f2fb, 0x5aadee56, 0xdb33f1, 0x1a0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1258) {
  s21_decimal decimal = {{0xdf65f2fb, 0x5aadee56, 0xdb33f1, 0x801a0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1259) {
  s21_decimal decimal = {{0xec786c84, 0x8df380ee, 0x204fce7e, 0x1c0000}};
  float check = 1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1260) {
  s21_decimal decimal = {{0xec786c84, 0x8df380ee, 0x204fce7e, 0x801c0000}};
  float check = -1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1261) {
  s21_decimal decimal = {{0x25d8b92b, 0x2b5ee279, 0x55a0499c, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1262) {
  s21_decimal decimal = {{0x25d8b92b, 0x2b5ee279, 0x55a0499c, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1263) {
  s21_decimal decimal = {{0x367d2ea4, 0x2d903d6b, 0x204fcebf, 0x1c0000}};
  float check = 1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1264) {
  s21_decimal decimal = {{0x367d2ea4, 0x2d903d6b, 0x204fcebf, 0x801c0000}};
  float check = -1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1265) {
  s21_decimal decimal = {{0x50655533, 0x6bf16f8f, 0x55a04a47, 0x1c0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1266) {
  s21_decimal decimal = {{0x50655533, 0x6bf16f8f, 0x55a04a47, 0x801c0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1267) {
  s21_decimal decimal = {{0x14f97c89, 0xdafec353, 0x33b2e3f, 0x1b0000}};
  float check = 1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1268) {
  s21_decimal decimal = {{0x14f97c89, 0xdafec353, 0x33b2e3f, 0x801b0000}};
  float check = -1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1269) {
  s21_decimal decimal = {{0xabd3642e, 0x2b5f3819, 0x55a0499c, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1270) {
  s21_decimal decimal = {{0xabd3642e, 0x2b5f3819, 0x55a0499c, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1271) {
  s21_decimal decimal = {{0xb5f9f659, 0x515b3c92, 0x33b2e46, 0x1b0000}};
  float check = 1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1272) {
  s21_decimal decimal = {{0xb5f9f659, 0x515b3c92, 0x33b2e46, 0x801b0000}};
  float check = -1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1273) {
  s21_decimal decimal = {{0xd6600036, 0x6bf1c52f, 0x55a04a47, 0x1c0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1274) {
  s21_decimal decimal = {{0xd6600036, 0x6bf1c52f, 0x55a04a47, 0x801c0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1275) {
  s21_decimal decimal = {{0x33865164, 0x8df380ef, 0x204fce7e, 0x1c0000}};
  float check = 1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1276) {
  s21_decimal decimal = {{0x33865164, 0x8df380ef, 0x204fce7e, 0x801c0000}};
  float check = -1.00000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1277) {
  s21_decimal decimal = {{0xe223f149, 0x2b5ee279, 0x55a0499c, 0x1c0000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1278) {
  s21_decimal decimal = {{0xe223f149, 0x2b5ee279, 0x55a0499c, 0x801c0000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1279) {
  s21_decimal decimal = {{0x7d8b1384, 0x2d903d6b, 0x204fcebf, 0x1c0000}};
  float check = 1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1280) {
  s21_decimal decimal = {{0x7d8b1384, 0x2d903d6b, 0x204fcebf, 0x801c0000}};
  float check = -1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1281) {
  s21_decimal decimal = {{0xcb08d51, 0x6bf16f90, 0x55a04a47, 0x1c0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1282) {
  s21_decimal decimal = {{0xcb08d51, 0x6bf16f90, 0x55a04a47, 0x801c0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1283) {
  s21_decimal decimal = {{0x8603d8de, 0x2ee4c08a, 0x84595, 0x190000}};
  float check = 1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1284) {
  s21_decimal decimal = {{0x8603d8de, 0x2ee4c08a, 0x84595, 0x80190000}};
  float check = -1.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1285) {
  s21_decimal decimal = {{0xb9fb7dce, 0x8acb4f64, 0x890076d, 0x1b0000}};
  float check = 2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1286) {
  s21_decimal decimal = {{0xb9fb7dce, 0x8acb4f64, 0x890076d, 0x801b0000}};
  float check = -2.65000057e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1287) {
  s21_decimal decimal = {{0, 0x80000200, 0x1, 0}};
  float check = 2.76701183e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1288) {
  s21_decimal decimal = {{0, 0x80000200, 0x1, 0x80000000}};
  float check = -2.76701183e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1289) {
  s21_decimal decimal = {{0, 0x80021200, 0x18d, 0x20000}};
  float check = 7.33258147e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1290) {
  s21_decimal decimal = {{0, 0x80021200, 0x18d, 0x80020000}};
  float check = -7.33258147e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1291) {
  s21_decimal decimal = {{0x801, 0x80000100, 0x1, 0}};
  float check = 2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1292) {
  s21_decimal decimal = {{0x801, 0x80000100, 0x1, 0x80000000}};
  float check = -2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1293) {
  s21_decimal decimal = {{0x84909, 0x80010900, 0x18d, 0x20000}};
  float check = 7.33258103e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1294) {
  s21_decimal decimal = {{0x84909, 0x80010900, 0x18d, 0x80020000}};
  float check = -7.33258103e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1295) {
  s21_decimal decimal = {{0x800, 0x80000100, 0x1, 0}};
  float check = 2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1296) {
  s21_decimal decimal = {{0x800, 0x80000100, 0x1, 0x80000000}};
  float check = -2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1297) {
  s21_decimal decimal = {{0x84800, 0x80010900, 0x18d, 0x20000}};
  float check = 7.33258103e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1298) {
  s21_decimal decimal = {{0x84800, 0x80010900, 0x18d, 0x80020000}};
  float check = -7.33258103e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1299) {
  s21_decimal decimal = {{0, 0x80000000, 0x1, 0}};
  float check = 2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1300) {
  s21_decimal decimal = {{0, 0x80000000, 0x1, 0x80000000}};
  float check = -2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1301) {
  s21_decimal decimal = {{0, 0x80000000, 0x18d, 0x20000}};
  float check = 7.33258059e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1302) {
  s21_decimal decimal = {{0, 0x80000000, 0x18d, 0x80020000}};
  float check = -7.33258059e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1303) {
  s21_decimal decimal = {{0x7355bb0f, 0xcb, 0, 0x70000}};
  float check = 8.73813359e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1304) {
  s21_decimal decimal = {{0x7355bb0f, 0xcb, 0, 0x80070000}};
  float check = -8.73813359e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1305) {
  s21_decimal decimal = {{0x63bea287, 0xd29a, 0, 0x90000}};
  float check = 2.31560547e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1306) {
  s21_decimal decimal = {{0x63bea287, 0xd29a, 0, 0x80090000}};
  float check = -2.31560547e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1307) {
  s21_decimal decimal = {{0x815358b6, 0x7f2, 0, 0x80000}};
  float check = 8.73813359e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1308) {
  s21_decimal decimal = {{0x815358b6, 0x7f2, 0, 0x80080000}};
  float check = -8.73813359e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1309) {
  s21_decimal decimal = {{0xdf46d466, 0x83a07, 0, 0xa0000}};
  float check = 2.31560531e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1310) {
  s21_decimal decimal = {{0xdf46d466, 0x83a07, 0, 0x800a0000}};
  float check = -2.31560531e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1311) {
  s21_decimal decimal = {{0x815358b5, 0x7f2, 0, 0x80000}};
  float check = 8.73813281e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1312) {
  s21_decimal decimal = {{0x815358b5, 0x7f2, 0, 0x80080000}};
  float check = -8.73813281e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1313) {
  s21_decimal decimal = {{0xdf46d35d, 0x83a07, 0, 0xa0000}};
  float check = 2.31560531e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1314) {
  s21_decimal decimal = {{0xdf46d35d, 0x83a07, 0, 0x800a0000}};
  float check = -2.31560531e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1315) {
  s21_decimal decimal = {{0x585540fd, 0x14, 0, 0x60000}};
  float check = 8.73813281e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1316) {
  s21_decimal decimal = {{0x585540fd, 0x14, 0, 0x80060000}};
  float check = -8.73813281e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1317) {
  s21_decimal decimal = {{0x704045e5, 0x150f, 0, 0x80000}};
  float check = 2.31560516e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1318) {
  s21_decimal decimal = {{0x704045e5, 0x150f, 0, 0x80080000}};
  float check = -2.31560516e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1319) {
  s21_decimal decimal = {{0x1a2ce9d9, 0xbc16d9ed, 0x1, 0x120000}};
  float check = 3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1320) {
  s21_decimal decimal = {{0x1a2ce9d9, 0xbc16d9ed, 0x1, 0x80120000}};
  float check = -3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1321) {
  s21_decimal decimal = {{0x187e11a1, 0xb3a79670, 0x1cb, 0x140000}};
  float check = 8.48000107e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1322) {
  s21_decimal decimal = {{0x187e11a1, 0xb3a79670, 0x1cb, 0x80140000}};
  float check = -8.48000107e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1323) {
  s21_decimal decimal = {{0x817cca82, 0x4a, 0, 0xa0000}};
  float check = 3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1324) {
  s21_decimal decimal = {{0x817cca82, 0x4a, 0, 0x800a0000}};
  float check = -3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1325) {
  s21_decimal decimal = {{0xa2da092, 0x4d20, 0, 0xc0000}};
  float check = 8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1326) {
  s21_decimal decimal = {{0xa2da092, 0x4d20, 0, 0x800c0000}};
  float check = -8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1327) {
  s21_decimal decimal = {{0x3e443cd1, 0x5fd79ed2, 0x6765c7fb, 0x1b0000}};
  float check = 3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1328) {
  s21_decimal decimal = {{0x3e443cd1, 0x5fd79ed2, 0x6765c7fb, 0x801b0000}};
  float check = -3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1329) {
  s21_decimal decimal = {{0x982e3e32, 0x88c21972, 0x1b667df4, 0x1a0000}};
  float check = 8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1330) {
  s21_decimal decimal = {{0x982e3e32, 0x88c21972, 0x1b667df4, 0x801a0000}};
  float check = -8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1331) {
  s21_decimal decimal = {{0x3e443cd0, 0x5fd79ed2, 0x6765c7fb, 0x1b0000}};
  float check = 3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1332) {
  s21_decimal decimal = {{0x3e443cd0, 0x5fd79ed2, 0x6765c7fb, 0x801b0000}};
  float check = -3.20000038e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1333) {
  s21_decimal decimal = {{0x982e3e32, 0x88c21972, 0x1b667df4, 0x1a0000}};
  float check = 8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1334) {
  s21_decimal decimal = {{0x982e3e32, 0x88c21972, 0x1b667df4, 0x801a0000}};
  float check = -8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1335) {
  s21_decimal decimal = {{0x817cca81, 0x4a, 0, 0xa0000}};
  float check = 3.20000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1336) {
  s21_decimal decimal = {{0x817cca81, 0x4a, 0, 0x800a0000}};
  float check = -3.20000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1337) {
  s21_decimal decimal = {{0xa2d9f89, 0x4d20, 0, 0xc0000}};
  float check = 8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1338) {
  s21_decimal decimal = {{0xa2d9f89, 0x4d20, 0, 0x800c0000}};
  float check = -8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1339) {
  s21_decimal decimal = {{0x817c8000, 0x4a, 0, 0xa0000}};
  float check = 3.20000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1340) {
  s21_decimal decimal = {{0x817c8000, 0x4a, 0, 0x800a0000}};
  float check = -3.20000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1341) {
  s21_decimal decimal = {{0x9e08000, 0x4d20, 0, 0xc0000}};
  float check = 8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1342) {
  s21_decimal decimal = {{0x9e08000, 0x4d20, 0, 0x800c0000}};
  float check = -8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1343) {
  s21_decimal decimal = {{0x1, 0, 0xffffff80, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1344) {
  s21_decimal decimal = {{0x1, 0, 0xffffff80, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1345) {
  s21_decimal decimal = {{0, 0, 0xffffff80, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1346) {
  s21_decimal decimal = {{0, 0, 0xffffff80, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1347) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffff7f, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1348) {
  s21_decimal decimal = {{0xffffffff, 0xffffffff, 0xffffff7f, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1349) {
  s21_decimal decimal = {{0, 0xfffffc00, 0xffffff7f, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1350) {
  s21_decimal decimal = {{0, 0xfffffc00, 0xffffff7f, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1351) {
  s21_decimal decimal = {{0xffffffff, 0xfffffbff, 0xffffff7f, 0}};
  float check = 7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1352) {
  s21_decimal decimal = {{0xffffffff, 0xfffffbff, 0xffffff7f, 0x80000000}};
  float check = -7.92281625e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1353) {
  s21_decimal decimal = {{0x3b, 0, 0xffffff00, 0}};
  float check = 7.92281578e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1354) {
  s21_decimal decimal = {{0x3b, 0, 0xffffff00, 0x80000000}};
  float check = -7.92281578e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1355) {
  s21_decimal decimal = {{0x1, 0, 0xffffff00, 0}};
  float check = 7.92281578e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1356) {
  s21_decimal decimal = {{0x1, 0, 0xffffff00, 0x80000000}};
  float check = -7.92281578e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1357) {
  s21_decimal decimal = {{0, 0, 0xffffff00, 0}};
  float check = 7.92281578e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1358) {
  s21_decimal decimal = {{0, 0, 0xffffff00, 0x80000000}};
  float check = -7.92281578e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1359) {
  s21_decimal decimal = {{0, 0, 0xfffffe00, 0}};
  float check = 7.92281531e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1360) {
  s21_decimal decimal = {{0, 0, 0xfffffe00, 0x80000000}};
  float check = -7.92281531e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1361) {
  s21_decimal decimal = {{0, 0, 0xfffffd00, 0}};
  float check = 7.92281483e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1362) {
  s21_decimal decimal = {{0, 0, 0xfffffd00, 0x80000000}};
  float check = -7.92281483e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1363) {
  s21_decimal decimal = {{0, 0, 0xfffffc00, 0}};
  float check = 7.92281436e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1364) {
  s21_decimal decimal = {{0, 0, 0xfffffc00, 0x80000000}};
  float check = -7.92281436e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1365) {
  s21_decimal decimal = {{0, 0, 0xfffffb00, 0}};
  float check = 7.92281389e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1366) {
  s21_decimal decimal = {{0, 0, 0xfffffb00, 0x80000000}};
  float check = -7.92281389e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1367) {
  s21_decimal decimal = {{0, 0, 0xfffffa00, 0}};
  float check = 7.92281342e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1368) {
  s21_decimal decimal = {{0, 0, 0xfffffa00, 0x80000000}};
  float check = -7.92281342e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1369) {
  s21_decimal decimal = {{0, 0, 0xfffff900, 0}};
  float check = 7.92281295e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1370) {
  s21_decimal decimal = {{0, 0, 0xfffff900, 0x80000000}};
  float check = -7.92281295e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1371) {
  s21_decimal decimal = {{0, 0, 0xfffff800, 0}};
  float check = 7.92281247e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1372) {
  s21_decimal decimal = {{0, 0, 0xfffff800, 0x80000000}};
  float check = -7.92281247e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1373) {
  s21_decimal decimal = {{0, 0, 0xfffff000, 0}};
  float check = 7.92280870e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1374) {
  s21_decimal decimal = {{0, 0, 0xfffff000, 0x80000000}};
  float check = -7.92280870e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1375) {
  s21_decimal decimal = {{0, 0, 0xffffe000, 0}};
  float check = 7.92280114e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1376) {
  s21_decimal decimal = {{0, 0, 0xffffe000, 0x80000000}};
  float check = -7.92280114e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1377) {
  s21_decimal decimal = {{0, 0, 0xffffc000, 0}};
  float check = 7.92278603e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1378) {
  s21_decimal decimal = {{0, 0, 0xffffc000, 0x80000000}};
  float check = -7.92278603e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1379) {
  s21_decimal decimal = {{0, 0, 0xd5555500, 0}};
  float check = 6.60234672e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1380) {
  s21_decimal decimal = {{0, 0, 0xd5555500, 0x80000000}};
  float check = -6.60234672e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1381) {
  s21_decimal decimal = {{0, 0, 0xc0000000, 0}};
  float check = 5.94211219e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1382) {
  s21_decimal decimal = {{0, 0, 0xc0000000, 0x80000000}};
  float check = -5.94211219e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1383) {
  s21_decimal decimal = {{0, 0, 0xaaaaaa00, 0}};
  float check = 5.28187719e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1384) {
  s21_decimal decimal = {{0, 0, 0xaaaaaa00, 0x80000000}};
  float check = -5.28187719e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1385) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0}};
  float check = 3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1386) {
  s21_decimal decimal = {{0, 0, 0x80000000, 0x80000000}};
  float check = -3.96140813e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1387) {
  s21_decimal decimal = {{0, 0, 0x35555540, 0}};
  float check = 1.65058668e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1388) {
  s21_decimal decimal = {{0, 0, 0x35555540, 0x80000000}};
  float check = -1.65058668e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1389) {
  s21_decimal decimal = {{0xcccccccd, 0xcccccccc, 0x8d55551c, 0}};
  float check = 4.37405465e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1390) {
  s21_decimal decimal = {{0xcccccccd, 0xcccccccc, 0x8d55551c, 0x80000000}};
  float check = -4.37405465e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1391) {
  s21_decimal decimal = {{0, 0, 0x2aaaaa80, 0}};
  float check = 1.32046930e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1392) {
  s21_decimal decimal = {{0, 0, 0x2aaaaa80, 0x80000000}};
  float check = -1.32046930e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1393) {
  s21_decimal decimal = {{0, 0, 0x711110a0, 0}};
  float check = 3.49924358e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1394) {
  s21_decimal decimal = {{0, 0, 0x711110a0, 0x80000000}};
  float check = -3.49924358e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1395) {
  s21_decimal decimal = {{0, 0, 0x21555548, 0x10000}};
  float check = 1.03161667e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1396) {
  s21_decimal decimal = {{0, 0, 0x21555548, 0x80010000}};
  float check = -1.03161667e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1397) {
  s21_decimal decimal = {{0, 0, 0x58555532, 0x10000}};
  float check = 2.73378416e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1398) {
  s21_decimal decimal = {{0, 0, 0x58555532, 0x80010000}};
  float check = -2.73378416e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1399) {
  s21_decimal decimal = {{0, 0, 0x3555554, 0}};
  float check = 1.03161667e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1400) {
  s21_decimal decimal = {{0, 0, 0x3555554, 0x80000000}};
  float check = -1.03161667e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1401) {
  s21_decimal decimal = {{0, 0, 0x58555532, 0x10000}};
  float check = 2.73378416e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1402) {
  s21_decimal decimal = {{0, 0, 0x58555532, 0x80010000}};
  float check = -2.73378416e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1403) {
  s21_decimal decimal = {{0, 0, 0x1aaaaa90, 0x10000}};
  float check = 8.25293310e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1404) {
  s21_decimal decimal = {{0, 0, 0x1aaaaa90, 0x80010000}};
  float check = -8.25293310e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1405) {
  s21_decimal decimal = {{0, 0, 0x46aaaa64, 0x10000}};
  float check = 2.18702724e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1406) {
  s21_decimal decimal = {{0, 0, 0x46aaaa64, 0x80010000}};
  float check = -2.18702724e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1407) {
  s21_decimal decimal = {{0, 0, 0x2aaaaa8, 0}};
  float check = 8.25293310e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1408) {
  s21_decimal decimal = {{0, 0, 0x2aaaaa8, 0x80000000}};
  float check = -8.25293310e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1409) {
  s21_decimal decimal = {{0, 0, 0x46aaaa64, 0x10000}};
  float check = 2.18702724e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1410) {
  s21_decimal decimal = {{0, 0, 0x46aaaa64, 0x80010000}};
  float check = -2.18702724e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1411) {
  s21_decimal decimal = {{0, 0x40000000, 0x82355521, 0x40000}};
  float check = 4.02975264e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1412) {
  s21_decimal decimal = {{0, 0x40000000, 0x82355521, 0x80040000}};
  float check = -4.02975264e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1413) {
  s21_decimal decimal = {{0, 0x88000000, 0x22815547, 0x30000}};
  float check = 1.06788444e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1414) {
  s21_decimal decimal = {{0, 0x88000000, 0x22815547, 0x80030000}};
  float check = -1.06788444e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1415) {
  s21_decimal decimal = {{0, 0x54000000, 0x35555, 0}};
  float check = 4.02975264e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1416) {
  s21_decimal decimal = {{0, 0x54000000, 0x35555, 0x80000000}};
  float check = -4.02975264e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1417) {
  s21_decimal decimal = {{0, 0xf4000000, 0x3735553, 0x20000}};
  float check = 1.06788444e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1418) {
  s21_decimal decimal = {{0, 0xf4000000, 0x3735553, 0x80020000}};
  float check = -1.06788444e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1419) {
  s21_decimal decimal = {{0, 0, 0x20000, 0}};
  float check = 2.41785164e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1420) {
  s21_decimal decimal = {{0, 0, 0x20000, 0x80000000}};
  float check = -2.41785164e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1421) {
  s21_decimal decimal = {{0, 0, 0x2120000, 0x20000}};
  float check = 6.40730707e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1422) {
  s21_decimal decimal = {{0, 0, 0x2120000, 0x80020000}};
  float check = -6.40730707e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1423) {
  s21_decimal decimal = {{0, 0xe0000000, 0x4e1fffb1, 0x40000}};
  float check = 2.41785150e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1424) {
  s21_decimal decimal = {{0, 0xe0000000, 0x4e1fffb1, 0x80040000}};
  float check = -2.41785150e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1425) {
  s21_decimal decimal = {{0, 0xf8000000, 0xcf07ff30, 0x40000}};
  float check = 6.40730650e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1426) {
  s21_decimal decimal = {{0, 0xf8000000, 0xcf07ff30, 0x80040000}};
  float check = -6.40730650e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1427) {
  s21_decimal decimal = {{0, 0xfe000000, 0x1ffff, 0}};
  float check = 2.41785150e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1428) {
  s21_decimal decimal = {{0, 0xfe000000, 0x1ffff, 0x80000000}};
  float check = -2.41785150e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1429) {
  s21_decimal decimal = {{0, 0xee000000, 0x211fffd, 0x20000}};
  float check = 6.40730650e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1430) {
  s21_decimal decimal = {{0, 0xee000000, 0x211fffd, 0x80020000}};
  float check = -6.40730650e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1431) {
  s21_decimal decimal = {{0, 0xc0000000, 0x4e1fff63, 0x40000}};
  float check = 2.41785135e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1432) {
  s21_decimal decimal = {{0, 0xc0000000, 0x4e1fff63, 0x80040000}};
  float check = -2.41785135e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1433) {
  s21_decimal decimal = {{0, 0xf0000000, 0xcf07fe61, 0x40000}};
  float check = 6.40730592e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1434) {
  s21_decimal decimal = {{0, 0xf0000000, 0xcf07fe61, 0x80040000}};
  float check = -6.40730592e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1435) {
  s21_decimal decimal = {{0, 0xfc000000, 0x1ffff, 0}};
  float check = 2.41785135e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1436) {
  s21_decimal decimal = {{0, 0xfc000000, 0x1ffff, 0x80000000}};
  float check = -2.41785135e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1437) {
  s21_decimal decimal = {{0, 0xdc000000, 0x211fffb, 0x20000}};
  float check = 6.40730592e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1438) {
  s21_decimal decimal = {{0, 0xdc000000, 0x211fffb, 0x80020000}};
  float check = -6.40730592e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1439) {
  s21_decimal decimal = {{0, 0x80000000, 0x682aaa42, 0x40000}};
  float check = 3.22380199e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1440) {
  s21_decimal decimal = {{0, 0x80000000, 0x682aaa42, 0x80040000}};
  float check = -3.22380199e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1441) {
  s21_decimal decimal = {{0, 0x10000000, 0x1b9aaa8f, 0x30000}};
  float check = 8.54307514e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1442) {
  s21_decimal decimal = {{0, 0x10000000, 0x1b9aaa8f, 0x80030000}};
  float check = -8.54307514e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1443) {
  s21_decimal decimal = {{0, 0xa8000000, 0x2aaaa, 0}};
  float check = 3.22380199e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1444) {
  s21_decimal decimal = {{0, 0xa8000000, 0x2aaaa, 0x80000000}};
  float check = -3.22380199e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1445) {
  s21_decimal decimal = {{0, 0xe8000000, 0x2c2aaa7, 0x20000}};
  float check = 8.54307514e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1446) {
  s21_decimal decimal = {{0, 0xe8000000, 0x2c2aaa7, 0x80020000}};
  float check = -8.54307514e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1447) {
  s21_decimal decimal = {{0, 0xa0000000, 0x411aaa90, 0x40000}};
  float check = 2.01487632e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1448) {
  s21_decimal decimal = {{0, 0xa0000000, 0x411aaa90, 0x80040000}};
  float check = -2.01487632e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1449) {
  s21_decimal decimal = {{0, 0xa8000000, 0xac86aa65, 0x40000}};
  float check = 5.33942218e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1450) {
  s21_decimal decimal = {{0, 0xa8000000, 0xac86aa65, 0x80040000}};
  float check = -5.33942218e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1451) {
  s21_decimal decimal = {{0, 0xaa000000, 0x1aaaa, 0}};
  float check = 2.01487632e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1452) {
  s21_decimal decimal = {{0, 0xaa000000, 0x1aaaa, 0x80000000}};
  float check = -2.01487632e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1453) {
  s21_decimal decimal = {{0, 0xfa000000, 0x1b9aaa9, 0x20000}};
  float check = 5.33942218e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1454) {
  s21_decimal decimal = {{0, 0xfa000000, 0x1b9aaa9, 0x80020000}};
  float check = -5.33942218e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1455) {
  s21_decimal decimal = {{0, 0x40000000, 0x34155521, 0x40000}};
  float check = 1.61190100e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1456) {
  s21_decimal decimal = {{0, 0x40000000, 0x34155521, 0x80040000}};
  float check = -1.61190100e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1457) {
  s21_decimal decimal = {{0, 0x50000000, 0x8a0554cb, 0x40000}};
  float check = 4.27153757e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1458) {
  s21_decimal decimal = {{0, 0x50000000, 0x8a0554cb, 0x80040000}};
  float check = -4.27153757e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1459) {
  s21_decimal decimal = {{0, 0x54000000, 0x15555, 0}};
  float check = 1.61190100e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1460) {
  s21_decimal decimal = {{0, 0x54000000, 0x15555, 0x80000000}};
  float check = -1.61190100e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1461) {
  s21_decimal decimal = {{0, 0xf4000000, 0x1615553, 0x20000}};
  float check = 4.27153757e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1462) {
  s21_decimal decimal = {{0, 0xf4000000, 0x1615553, 0x80020000}};
  float check = -4.27153757e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1463) {
  s21_decimal decimal = {{0, 0, 0x200, 0}};
  float check = 9.44473297e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1464) {
  s21_decimal decimal = {{0, 0, 0x200, 0x80000000}};
  float check = -9.44473297e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1465) {
  s21_decimal decimal = {{0, 0, 0x21200, 0x20000}};
  float check = 2.50285433e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1466) {
  s21_decimal decimal = {{0, 0, 0x21200, 0x80020000}};
  float check = -2.50285433e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1467) {
  s21_decimal decimal = {{0, 0x7b800000, 0x1e847fe1, 0x60000}};
  float check = 9.44473240e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1468) {
  s21_decimal decimal = {{0, 0x7b800000, 0x1e847fe1, 0x80060000}};
  float check = -9.44473240e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1469) {
  s21_decimal decimal = {{0, 0x20e00000, 0x50df1faf, 0x60000}};
  float check = 2.50285410e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1470) {
  s21_decimal decimal = {{0, 0x20e00000, 0x50df1faf, 0x80060000}};
  float check = -2.50285410e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1471) {
  s21_decimal decimal = {{0, 0xfffe0000, 0x1ff, 0}};
  float check = 9.44473240e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1472) {
  s21_decimal decimal = {{0, 0xfffe0000, 0x1ff, 0x80000000}};
  float check = -9.44473240e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1473) {
  s21_decimal decimal = {{0, 0xfdee0000, 0x211ff, 0x20000}};
  float check = 2.50285410e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1474) {
  s21_decimal decimal = {{0, 0xfdee0000, 0x211ff, 0x80020000}};
  float check = -2.50285410e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1475) {
  s21_decimal decimal = {{0, 0xf7000000, 0x1e847fc2, 0x60000}};
  float check = 9.44473184e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1476) {
  s21_decimal decimal = {{0, 0xf7000000, 0x1e847fc2, 0x80060000}};
  float check = -9.44473184e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1477) {
  s21_decimal decimal = {{0, 0x41c00000, 0x50df1f5e, 0x60000}};
  float check = 2.50285388e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1478) {
  s21_decimal decimal = {{0, 0x41c00000, 0x50df1f5e, 0x80060000}};
  float check = -2.50285388e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1479) {
  s21_decimal decimal = {{0, 0xfffc0000, 0x1ff, 0}};
  float check = 9.44473184e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1480) {
  s21_decimal decimal = {{0, 0xfffc0000, 0x1ff, 0x80000000}};
  float check = -9.44473184e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1481) {
  s21_decimal decimal = {{0, 0xfbdc0000, 0x211ff, 0x20000}};
  float check = 2.50285388e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1482) {
  s21_decimal decimal = {{0, 0xfbdc0000, 0x211ff, 0x80020000}};
  float check = -2.50285388e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1483) {
  s21_decimal decimal = {{0, 0xf1000000, 0xfe502a44, 0x70000}};
  float check = 7.87061062e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1484) {
  s21_decimal decimal = {{0, 0xf1000000, 0xfe502a44, 0x80070000}};
  float check = -7.87061062e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1485) {
  s21_decimal decimal = {{0, 0xb5a00000, 0x43649a8f, 0x60000}};
  float check = 2.08571179e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1486) {
  s21_decimal decimal = {{0, 0xb5a00000, 0x43649a8f, 0x80060000}};
  float check = -2.08571179e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1487) {
  s21_decimal decimal = {{0, 0xaaaa0000, 0x1aa, 0}};
  float check = 7.87061062e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1488) {
  s21_decimal decimal = {{0, 0xaaaa0000, 0x1aa, 0x80000000}};
  float check = -7.87061062e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1489) {
  s21_decimal decimal = {{0, 0xa9fa0000, 0x1b9aa, 0x20000}};
  float check = 2.08571179e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1490) {
  s21_decimal decimal = {{0, 0xa9fa0000, 0x1b9aa, 0x80020000}};
  float check = -2.08571179e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1491) {
  s21_decimal decimal = {{0, 0xe2000000, 0xcb735489, 0x70000}};
  float check = 6.29648827e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1492) {
  s21_decimal decimal = {{0, 0xe2000000, 0xcb735489, 0x80070000}};
  float check = -6.29648827e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1493) {
  s21_decimal decimal = {{0, 0x6b400000, 0x35ea151f, 0x60000}};
  float check = 1.66856936e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1494) {
  s21_decimal decimal = {{0, 0x6b400000, 0x35ea151f, 0x80060000}};
  float check = -1.66856936e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1495) {
  s21_decimal decimal = {{0, 0x55540000, 0x155, 0}};
  float check = 6.29648827e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1496) {
  s21_decimal decimal = {{0, 0x55540000, 0x155, 0x80000000}};
  float check = -6.29648827e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1497) {
  s21_decimal decimal = {{0, 0x53f40000, 0x16155, 0x20000}};
  float check = 1.66856936e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1498) {
  s21_decimal decimal = {{0, 0x53f40000, 0x16155, 0x80020000}};
  float check = -1.66856936e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1499) {
  s21_decimal decimal = {{0, 0, 0x20, 0}};
  float check = 5.90295810e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1500) {
  s21_decimal decimal = {{0, 0, 0x20, 0x80000000}};
  float check = -5.90295810e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1501) {
  s21_decimal decimal = {{0, 0, 0x2120, 0x20000}};
  float check = 1.56428395e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1502) {
  s21_decimal decimal = {{0, 0, 0x2120, 0x80020000}};
  float check = -1.56428395e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1503) {
  s21_decimal decimal = {{0, 0x43e00000, 0xbebc1f41, 0x80000}};
  float check = 5.90295775e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1504) {
  s21_decimal decimal = {{0, 0x43e00000, 0xbebc1f41, 0x80080000}};
  float check = -5.90295775e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1505) {
  s21_decimal decimal = {{0, 0x748c0000, 0x328b73cd, 0x70000}};
  float check = 1.56428381e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1506) {
  s21_decimal decimal = {{0, 0x748c0000, 0x328b73cd, 0x80070000}};
  float check = -1.56428381e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1507) {
  s21_decimal decimal = {{0, 0xffffe000, 0x1f, 0}};
  float check = 5.90295775e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1508) {
  s21_decimal decimal = {{0, 0xffffe000, 0x1f, 0x80000000}};
  float check = -5.90295775e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1509) {
  s21_decimal decimal = {{0, 0xffdee000, 0x211f, 0x20000}};
  float check = 1.56428381e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1510) {
  s21_decimal decimal = {{0, 0xffdee000, 0x211f, 0x80020000}};
  float check = -1.56428381e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1511) {
  s21_decimal decimal = {{0, 0x87c00000, 0xbebc1e82, 0x80000}};
  float check = 5.90295740e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1512) {
  s21_decimal decimal = {{0, 0x87c00000, 0xbebc1e82, 0x80080000}};
  float check = -5.90295740e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1513) {
  s21_decimal decimal = {{0, 0xe9180000, 0x328b739a, 0x70000}};
  float check = 1.56428367e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1514) {
  s21_decimal decimal = {{0, 0xe9180000, 0x328b739a, 0x80070000}};
  float check = -1.56428367e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1515) {
  s21_decimal decimal = {{0, 0xffffc000, 0x1f, 0}};
  float check = 5.90295740e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1516) {
  s21_decimal decimal = {{0, 0xffffc000, 0x1f, 0x80000000}};
  float check = -5.90295740e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1517) {
  s21_decimal decimal = {{0, 0xffbdc000, 0x211f, 0x20000}};
  float check = 1.56428367e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1518) {
  s21_decimal decimal = {{0, 0xffbdc000, 0x211f, 0x80020000}};
  float check = -1.56428367e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1519) {
  s21_decimal decimal = {{0, 0x16a00000, 0x9ef21a6b, 0x80000}};
  float check = 4.91913164e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1520) {
  s21_decimal decimal = {{0, 0x16a00000, 0x9ef21a6b, 0x80080000}};
  float check = -4.91913164e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1521) {
  s21_decimal decimal = {{0, 0xd1840000, 0x2a1ee099, 0x70000}};
  float check = 1.30356987e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1522) {
  s21_decimal decimal = {{0, 0xd1840000, 0x2a1ee099, 0x80070000}};
  float check = -1.30356987e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1523) {
  s21_decimal decimal = {{0, 0xaaaaa000, 0x1a, 0}};
  float check = 4.91913164e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1524) {
  s21_decimal decimal = {{0, 0xaaaaa000, 0x1a, 0x80000000}};
  float check = -4.91913164e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1525) {
  s21_decimal decimal = {{0, 0xaa9fa000, 0x1b9a, 0x20000}};
  float check = 1.30356987e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1526) {
  s21_decimal decimal = {{0, 0xaa9fa000, 0x1b9a, 0x80020000}};
  float check = -1.30356987e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1527) {
  s21_decimal decimal = {{0, 0x2d400000, 0x7f2814d6, 0x80000}};
  float check = 3.93530517e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1528) {
  s21_decimal decimal = {{0, 0x2d400000, 0x7f2814d6, 0x80080000}};
  float check = -3.93530517e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1529) {
  s21_decimal decimal = {{0, 0xa3080000, 0x21b24d33, 0x70000}};
  float check = 1.04285585e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1530) {
  s21_decimal decimal = {{0, 0xa3080000, 0x21b24d33, 0x80070000}};
  float check = -1.04285585e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1531) {
  s21_decimal decimal = {{0, 0x55554000, 0x15, 0}};
  float check = 3.93530517e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1532) {
  s21_decimal decimal = {{0, 0x55554000, 0x15, 0x80000000}};
  float check = -3.93530517e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1533) {
  s21_decimal decimal = {{0, 0x553f4000, 0x1615, 0x20000}};
  float check = 1.04285585e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1534) {
  s21_decimal decimal = {{0, 0x553f4000, 0x1615, 0x80020000}};
  float check = -1.04285585e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1535) {
  s21_decimal decimal = {{0, 0, 0x8, 0}};
  float check = 1.47573953e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1536) {
  s21_decimal decimal = {{0, 0, 0x8, 0x80000000}};
  float check = -1.47573953e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1537) {
  s21_decimal decimal = {{0, 0, 0x848, 0x20000}};
  float check = 3.91070988e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1538) {
  s21_decimal decimal = {{0, 0, 0x848, 0x80020000}};
  float check = -3.91070988e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1539) {
  s21_decimal decimal = {{0, 0x50f80000, 0x2faf07d0, 0x80000}};
  float check = 1.47573944e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1540) {
  s21_decimal decimal = {{0, 0x50f80000, 0x2faf07d0, 0x80080000}};
  float check = -1.47573944e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1541) {
  s21_decimal decimal = {{0, 0xa35e0000, 0x7e5ca181, 0x80000}};
  float check = 3.91070953e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1542) {
  s21_decimal decimal = {{0, 0xa35e0000, 0x7e5ca181, 0x80080000}};
  float check = -3.91070953e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1543) {
  s21_decimal decimal = {{0, 0xfffff800, 0x7, 0}};
  float check = 1.47573944e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1544) {
  s21_decimal decimal = {{0, 0xfffff800, 0x7, 0x80000000}};
  float check = -1.47573944e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1545) {
  s21_decimal decimal = {{0, 0xfff7b800, 0x847, 0x20000}};
  float check = 3.91070953e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1546) {
  s21_decimal decimal = {{0, 0xfff7b800, 0x847, 0x80020000}};
  float check = -3.91070953e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1547) {
  s21_decimal decimal = {{0, 0xa1f00000, 0x2faf07a0, 0x80000}};
  float check = 1.47573935e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1548) {
  s21_decimal decimal = {{0, 0xa1f00000, 0x2faf07a0, 0x80080000}};
  float check = -1.47573935e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1549) {
  s21_decimal decimal = {{0, 0x46bc0000, 0x7e5ca103, 0x80000}};
  float check = 3.91070918e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1550) {
  s21_decimal decimal = {{0, 0x46bc0000, 0x7e5ca103, 0x80080000}};
  float check = -3.91070918e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1551) {
  s21_decimal decimal = {{0, 0xfffff000, 0x7, 0}};
  float check = 1.47573935e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1552) {
  s21_decimal decimal = {{0, 0xfffff000, 0x7, 0x80000000}};
  float check = -1.47573935e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1553) {
  s21_decimal decimal = {{0, 0xffef7000, 0x847, 0x20000}};
  float check = 3.91070918e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1554) {
  s21_decimal decimal = {{0, 0xffef7000, 0x847, 0x80020000}};
  float check = -3.91070918e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1555) {
  s21_decimal decimal = {{0, 0xc5a80000, 0x27bc869a, 0x80000}};
  float check = 1.22978291e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1556) {
  s21_decimal decimal = {{0, 0xc5a80000, 0x27bc869a, 0x80080000}};
  float check = -1.22978291e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1557) {
  s21_decimal decimal = {{0, 0x8bca0000, 0x694d3180, 0x80000}};
  float check = 3.25892467e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1558) {
  s21_decimal decimal = {{0, 0x8bca0000, 0x694d3180, 0x80080000}};
  float check = -3.25892467e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1559) {
  s21_decimal decimal = {{0, 0xaaaaa800, 0x6, 0}};
  float check = 1.22978291e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1560) {
  s21_decimal decimal = {{0, 0xaaaaa800, 0x6, 0x80000000}};
  float check = -1.22978291e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1561) {
  s21_decimal decimal = {{0, 0xaaa7e800, 0x6e6, 0x20000}};
  float check = 3.25892467e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1562) {
  s21_decimal decimal = {{0, 0xaaa7e800, 0x6e6, 0x80020000}};
  float check = -3.25892467e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1563) {
  s21_decimal decimal = {{0, 0x8b500000, 0x1fca0535, 0x80000}};
  float check = 9.83826292e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1564) {
  s21_decimal decimal = {{0, 0x8b500000, 0x1fca0535, 0x80080000}};
  float check = -9.83826292e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1565) {
  s21_decimal decimal = {{0, 0x17940000, 0x543dc101, 0x80000}};
  float check = 2.60713963e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1566) {
  s21_decimal decimal = {{0, 0x17940000, 0x543dc101, 0x80080000}};
  float check = -2.60713963e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1567) {
  s21_decimal decimal = {{0, 0x55555000, 0x5, 0}};
  float check = 9.83826292e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1568) {
  s21_decimal decimal = {{0, 0x55555000, 0x5, 0x80000000}};
  float check = -9.83826292e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1569) {
  s21_decimal decimal = {{0, 0x554fd000, 0x585, 0x20000}};
  float check = 2.60713963e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1570) {
  s21_decimal decimal = {{0, 0x554fd000, 0x585, 0x80020000}};
  float check = -2.60713963e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1571) {
  s21_decimal decimal = {{0, 0xdc480000, 0xc6aea105, 0x90000}};
  float check = 6.14891454e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1572) {
  s21_decimal decimal = {{0, 0xdc480000, 0xc6aea105, 0x80090000}};
  float check = -6.14891454e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1573) {
  s21_decimal decimal = {{0, 0x45e50000, 0x34a698c0, 0x80000}};
  float check = 1.62946233e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1574) {
  s21_decimal decimal = {{0, 0x45e50000, 0x34a698c0, 0x80080000}};
  float check = -1.62946233e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1575) {
  s21_decimal decimal = {{0, 0x55555400, 0x3, 0}};
  float check = 6.14891454e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1576) {
  s21_decimal decimal = {{0, 0x55555400, 0x3, 0x80000000}};
  float check = -6.14891454e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1577) {
  s21_decimal decimal = {{0, 0x5553f400, 0x373, 0x20000}};
  float check = 1.62946233e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1578) {
  s21_decimal decimal = {{0, 0x5553f400, 0x373, 0x80020000}};
  float check = -1.62946233e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1579) {
  s21_decimal decimal = {{0, 0, 0x2, 0}};
  float check = 3.68934881e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1580) {
  s21_decimal decimal = {{0, 0, 0x2, 0x80000000}};
  float check = -3.68934881e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1581) {
  s21_decimal decimal = {{0, 0, 0x212, 0x20000}};
  float check = 9.77677471e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1582) {
  s21_decimal decimal = {{0, 0, 0x212, 0x80020000}};
  float check = -9.77677471e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1583) {
  s21_decimal decimal = {{0, 0xca6c0000, 0x77359388, 0x90000}};
  float check = 3.68934859e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1584) {
  s21_decimal decimal = {{0, 0xca6c0000, 0x77359388, 0x80090000}};
  float check = -3.68934859e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1585) {
  s21_decimal decimal = {{0, 0x68d78000, 0x1f972860, 0x80000}};
  float check = 9.77677383e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1586) {
  s21_decimal decimal = {{0, 0x68d78000, 0x1f972860, 0x80080000}};
  float check = -9.77677383e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1587) {
  s21_decimal decimal = {{0, 0xfffffe00, 0x1, 0}};
  float check = 3.68934859e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1588) {
  s21_decimal decimal = {{0, 0xfffffe00, 0x1, 0x80000000}};
  float check = -3.68934859e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1589) {
  s21_decimal decimal = {{0, 0xfffdee00, 0x211, 0x20000}};
  float check = 9.77677383e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1590) {
  s21_decimal decimal = {{0, 0xfffdee00, 0x211, 0x80020000}};
  float check = -9.77677383e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1591) {
  s21_decimal decimal = {{0, 0x94d80000, 0x77359311, 0x90000}};
  float check = 3.68934837e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1592) {
  s21_decimal decimal = {{0, 0x94d80000, 0x77359311, 0x80090000}};
  float check = -3.68934837e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1593) {
  s21_decimal decimal = {{0, 0xd1af0000, 0x1f972840, 0x80000}};
  float check = 9.77677295e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1594) {
  s21_decimal decimal = {{0, 0xd1af0000, 0x1f972840, 0x80080000}};
  float check = -9.77677295e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1595) {
  s21_decimal decimal = {{0, 0xfffffc00, 0x1, 0}};
  float check = 3.68934837e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1596) {
  s21_decimal decimal = {{0, 0xfffffc00, 0x1, 0x80000000}};
  float check = -3.68934837e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1597) {
  s21_decimal decimal = {{0, 0xfffbdc00, 0x211, 0x20000}};
  float check = 9.77677295e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1598) {
  s21_decimal decimal = {{0, 0xfffbdc00, 0x211, 0x80020000}};
  float check = -9.77677295e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1599) {
  s21_decimal decimal = {{0, 0xee240000, 0x63575082, 0x90000}};
  float check = 3.07445727e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1600) {
  s21_decimal decimal = {{0, 0xee240000, 0x63575082, 0x80090000}};
  float check = -3.07445727e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1601) {
  s21_decimal decimal = {{0, 0x22f28000, 0x1a534c60, 0x80000}};
  float check = 8.14731167e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1602) {
  s21_decimal decimal = {{0, 0x22f28000, 0x1a534c60, 0x80080000}};
  float check = -8.14731167e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1603) {
  s21_decimal decimal = {{0, 0xaaaaaa00, 0x1, 0}};
  float check = 3.07445727e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1604) {
  s21_decimal decimal = {{0, 0xaaaaaa00, 0x1, 0x80000000}};
  float check = -3.07445727e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1605) {
  s21_decimal decimal = {{0, 0xaaa9fa00, 0x1b9, 0x20000}};
  float check = 8.14731167e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1606) {
  s21_decimal decimal = {{0, 0xaaa9fa00, 0x1b9, 0x80020000}};
  float check = -8.14731167e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1607) {
  s21_decimal decimal = {{0, 0, 0xf, 0x10000}};
  float check = 2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1608) {
  s21_decimal decimal = {{0, 0, 0xf, 0x80010000}};
  float check = -2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1609) {
  s21_decimal decimal = {{0, 0, 0xf87, 0x30000}};
  float check = 7.33258059e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1610) {
  s21_decimal decimal = {{0, 0, 0xf87, 0x80030000}};
  float check = -7.33258059e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1611) {
  s21_decimal decimal = {{0, 0x80000000, 0x1, 0}};
  float check = 2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1612) {
  s21_decimal decimal = {{0, 0x80000000, 0x1, 0x80000000}};
  float check = -2.76701161e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1613) {
  s21_decimal decimal = {{0, 0x80000000, 0x18d, 0x20000}};
  float check = 7.33258059e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1614) {
  s21_decimal decimal = {{0, 0x80000000, 0x18d, 0x80020000}};
  float check = -7.33258059e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1615) {
  s21_decimal decimal = {{0, 0xdc480000, 0x4f790d05, 0x90000}};
  float check = 2.45956573e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1616) {
  s21_decimal decimal = {{0, 0xdc480000, 0x4f790d05, 0x80090000}};
  float check = -2.45956573e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1617) {
  s21_decimal decimal = {{0, 0xbaf20000, 0xd29a6282, 0x90000}};
  float check = 6.51784907e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1618) {
  s21_decimal decimal = {{0, 0xbaf20000, 0xd29a6282, 0x80090000}};
  float check = -6.51784907e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1619) {
  s21_decimal decimal = {{0, 0x55555400, 0x1, 0}};
  float check = 2.45956573e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1620) {
  s21_decimal decimal = {{0, 0x55555400, 0x1, 0x80000000}};
  float check = -2.45956573e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1621) {
  s21_decimal decimal = {{0, 0x5553f400, 0x161, 0x20000}};
  float check = 6.51784907e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1622) {
  s21_decimal decimal = {{0, 0x5553f400, 0x161, 0x80020000}};
  float check = -6.51784907e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1623) {
  s21_decimal decimal = {{0, 0x2, 0, 0}};
  float check = 8.58993459e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1624) {
  s21_decimal decimal = {{0, 0x2, 0, 0x80000000}};
  float check = -8.58993459e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1625) {
  s21_decimal decimal = {{0, 0x212, 0, 0x20000}};
  float check = 2.27633275e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1626) {
  s21_decimal decimal = {{0, 0x212, 0, 0x80020000}};
  float check = -2.27633275e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1627) {
  s21_decimal decimal = {{0x38000000, 0x8d5a98b1, 0x1bc16d4b, 0x120000}};
  float check = 8.58993408e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1628) {
  s21_decimal decimal = {{0x38000000, 0x8d5a98b1, 0x1bc16d4b, 0x80120000}};
  float check = -8.58993408e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1629) {
  s21_decimal decimal = {{0x6e000000, 0xd03014a2, 0x498d61a1, 0x120000}};
  float check = 2.27633254e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1630) {
  s21_decimal decimal = {{0x6e000000, 0xd03014a2, 0x498d61a1, 0x80120000}};
  float check = -2.27633254e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1631) {
  s21_decimal decimal = {{0xfffffe00, 0x1, 0, 0}};
  float check = 8.58993408e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1632) {
  s21_decimal decimal = {{0xfffffe00, 0x1, 0, 0x80000000}};
  float check = -8.58993408e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1633) {
  s21_decimal decimal = {{0xfffdee00, 0x211, 0, 0x20000}};
  float check = 2.27633254e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1634) {
  s21_decimal decimal = {{0xfffdee00, 0x211, 0, 0x80020000}};
  float check = -2.27633254e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1635) {
  s21_decimal decimal = {{0x70000000, 0xcbed3162, 0x1bc16d2f, 0x120000}};
  float check = 8.58993357e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1636) {
  s21_decimal decimal = {{0x70000000, 0xcbed3162, 0x1bc16d2f, 0x80120000}};
  float check = -8.58993357e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1637) {
  s21_decimal decimal = {{0xdc000000, 0x42ce2944, 0x498d6158, 0x120000}};
  float check = 2.27633234e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1638) {
  s21_decimal decimal = {{0xdc000000, 0x42ce2944, 0x498d6158, 0x80120000}};
  float check = -2.27633234e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1639) {
  s21_decimal decimal = {{0xfffffc00, 0x1, 0, 0}};
  float check = 8.58993357e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1640) {
  s21_decimal decimal = {{0xfffffc00, 0x1, 0, 0x80000000}};
  float check = -8.58993357e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1641) {
  s21_decimal decimal = {{0xfffbdc00, 0x211, 0, 0x20000}};
  float check = 2.27633234e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1642) {
  s21_decimal decimal = {{0xfffbdc00, 0x211, 0, 0x80020000}};
  float check = -2.27633234e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1643) {
  s21_decimal decimal = {{0x10000000, 0xbc0a7a4, 0xe74be4ab, 0x130000}};
  float check = 7.15827866e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1644) {
  s21_decimal decimal = {{0x10000000, 0xbc0a7a4, 0xe74be4ab, 0x80130000}};
  float check = -7.15827866e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1645) {
  s21_decimal decimal = {{0x7a000000, 0x4983b18b, 0x3d4b26d6, 0x120000}};
  float check = 1.89694382e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1646) {
  s21_decimal decimal = {{0x7a000000, 0x4983b18b, 0x3d4b26d6, 0x80120000}};
  float check = -1.89694382e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1647) {
  s21_decimal decimal = {{0xaaaaaa00, 0x1, 0, 0}};
  float check = 7.15827866e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1648) {
  s21_decimal decimal = {{0xaaaaaa00, 0x1, 0, 0x80000000}};
  float check = -7.15827866e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1649) {
  s21_decimal decimal = {{0xaaa9fa00, 0x1b9, 0, 0x20000}};
  float check = 1.89694382e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1650) {
  s21_decimal decimal = {{0xaaa9fa00, 0x1b9, 0, 0x80020000}};
  float check = -1.89694382e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1651) {
  s21_decimal decimal = {{0, 0xf, 0, 0x10000}};
  float check = 6.44245094e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1652) {
  s21_decimal decimal = {{0, 0xf, 0, 0x80010000}};
  float check = -6.44245094e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1653) {
  s21_decimal decimal = {{0, 0xf87, 0, 0x30000}};
  float check = 1.70724946e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1654) {
  s21_decimal decimal = {{0, 0xf87, 0, 0x80030000}};
  float check = -1.70724946e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1655) {
  s21_decimal decimal = {{0x80000000, 0x1, 0, 0}};
  float check = 6.44245094e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1656) {
  s21_decimal decimal = {{0x80000000, 0x1, 0, 0x80000000}};
  float check = -6.44245094e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1657) {
  s21_decimal decimal = {{0x80000000, 0x18d, 0, 0x20000}};
  float check = 1.70724946e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1658) {
  s21_decimal decimal = {{0x80000000, 0x18d, 0, 0x80020000}};
  float check = -1.70724946e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1659) {
  s21_decimal decimal = {{0x20000000, 0x3b14f48, 0xb909834d, 0x130000}};
  float check = 5.72662272e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1660) {
  s21_decimal decimal = {{0x20000000, 0x3b14f48, 0xb909834d, 0x80130000}};
  float check = -5.72662272e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1661) {
  s21_decimal decimal = {{0xf4000000, 0x35756316, 0x3108ebc1, 0x120000}};
  float check = 1.51755500e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1662) {
  s21_decimal decimal = {{0xf4000000, 0x35756316, 0x3108ebc1, 0x80120000}};
  float check = -1.51755500e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1663) {
  s21_decimal decimal = {{0x55555400, 0x1, 0, 0}};
  float check = 5.72662272e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1664) {
  s21_decimal decimal = {{0x55555400, 0x1, 0, 0x80000000}};
  float check = -5.72662272e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1665) {
  s21_decimal decimal = {{0x5553f400, 0x161, 0, 0x20000}};
  float check = 1.51755500e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1666) {
  s21_decimal decimal = {{0x5553f400, 0x161, 0, 0x80020000}};
  float check = -1.51755500e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1667) {
  s21_decimal decimal = {{0x2de00000, 0x55bae49d, 0xa5cb3211, 0x160000}};
  float check = 5.13106750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1668) {
  s21_decimal decimal = {{0x2de00000, 0x55bae49d, 0xa5cb3211, 0x80160000}};
  float check = -5.13106750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1669) {
  s21_decimal decimal = {{0x9ccc0000, 0x505186d2, 0x2bef7263, 0x150000}};
  float check = 1.35973290e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1670) {
  s21_decimal decimal = {{0x9ccc0000, 0x505186d2, 0x2bef7263, 0x80150000}};
  float check = -1.35973290e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1671) {
  s21_decimal decimal = {{0x30ef053, 0, 0, 0x10000}};
  float check = 5.13106750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1672) {
  s21_decimal decimal = {{0x30ef053, 0, 0, 0x80010000}};
  float check = -5.13106750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1673) {
  s21_decimal decimal = {{0x2a76c5eb, 0x3, 0, 0x30000}};
  float check = 1.35973290e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1674) {
  s21_decimal decimal = {{0x2a76c5eb, 0x3, 0, 0x80030000}};
  float check = -1.35973290e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1675) {
  s21_decimal decimal = {{0xd4c00000, 0x48ca7fbf, 0xa5cb3102, 0x160000}};
  float check = 5.13106700e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1676) {
  s21_decimal decimal = {{0xd4c00000, 0x48ca7fbf, 0xa5cb3102, 0x80160000}};
  float check = -5.13106700e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1677) {
  s21_decimal decimal = {{0x3c380000, 0x7c3fe6f9, 0x2bef721b, 0x150000}};
  float check = 1.35973280e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1678) {
  s21_decimal decimal = {{0x3c380000, 0x7c3fe6f9, 0x2bef721b, 0x80150000}};
  float check = -1.35973280e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1679) {
  s21_decimal decimal = {{0x4e4b3b, 0, 0, 0}};
  float check = 5.13106700e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1680) {
  s21_decimal decimal = {{0x4e4b3b, 0, 0, 0x80000000}};
  float check = -5.13106700e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1681) {
  s21_decimal decimal = {{0x510be013, 0, 0, 0x20000}};
  float check = 1.35973280e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1682) {
  s21_decimal decimal = {{0x510be013, 0, 0, 0x80020000}};
  float check = -1.35973280e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1683) {
  s21_decimal decimal = {{0x7ba00000, 0x3bda1ae2, 0xa5cb2ff3, 0x160000}};
  float check = 5.13106650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1684) {
  s21_decimal decimal = {{0x7ba00000, 0x3bda1ae2, 0xa5cb2ff3, 0x80160000}};
  float check = -5.13106650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1685) {
  s21_decimal decimal = {{0xdba40000, 0xa82e471f, 0x2bef71d3, 0x150000}};
  float check = 1.35973260e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1686) {
  s21_decimal decimal = {{0xdba40000, 0xa82e471f, 0x2bef71d3, 0x80150000}};
  float check = -1.35973260e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1687) {
  s21_decimal decimal = {{0x30ef049, 0, 0, 0x10000}};
  float check = 5.13106650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1688) {
  s21_decimal decimal = {{0x30ef049, 0, 0, 0x80010000}};
  float check = -5.13106650e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1689) {
  s21_decimal decimal = {{0x2a76bb91, 0x3, 0, 0x30000}};
  float check = 1.35973260e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1690) {
  s21_decimal decimal = {{0x2a76bb91, 0x3, 0, 0x80030000}};
  float check = -1.35973260e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1691) {
  s21_decimal decimal = {{0xb4080000, 0x7af5b65d, 0x248c0045, 0x160000}};
  float check = 1.13107112e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1692) {
  s21_decimal decimal = {{0xb4080000, 0x7af5b65d, 0x248c0045, 0x80160000}};
  float check = -1.13107112e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1693) {
  s21_decimal decimal = {{0xe9e20000, 0x85d7f011, 0x60d9671e, 0x160000}};
  float check = 2.99733850e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1694) {
  s21_decimal decimal = {{0xe9e20000, 0x85d7f011, 0x60d9671e, 0x80160000}};
  float check = -2.99733850e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1695) {
  s21_decimal decimal = {{0x436ac695, 0, 0, 0x30000}};
  float check = 1.13107112e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1696) {
  s21_decimal decimal = {{0x436ac695, 0, 0, 0x80030000}};
  float check = -1.13107112e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1697) {
  s21_decimal decimal = {{0xc987903d, 0x45, 0, 0x50000}};
  float check = 2.99733850e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1698) {
  s21_decimal decimal = {{0xc987903d, 0x45, 0, 0x80050000}};
  float check = -2.99733850e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1699) {
  s21_decimal decimal = {{0x80f00000, 0x2d5b74c5, 0x5d8f5c, 0x140000}};
  float check = 1.13107100e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1700) {
  s21_decimal decimal = {{0x80f00000, 0x2d5b74c5, 0x5d8f5c, 0x80140000}};
  float check = -1.13107100e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1701) {
  s21_decimal decimal = {{0x78700000, 0xf3abe072, 0x60d9666a, 0x160000}};
  float check = 2.99733825e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1702) {
  s21_decimal decimal = {{0x78700000, 0xf3abe072, 0x60d9666a, 0x80160000}};
  float check = -2.99733825e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1703) {
  s21_decimal decimal = {{0x11423f, 0, 0, 0}};
  float check = 1.13107100e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1704) {
  s21_decimal decimal = {{0x11423f, 0, 0, 0x80000000}};
  float check = -1.13107100e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1705) {
  s21_decimal decimal = {{0x11dd9337, 0, 0, 0x20000}};
  float check = 2.99733825e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1706) {
  s21_decimal decimal = {{0x11dd9337, 0, 0, 0x80020000}};
  float check = -2.99733825e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1707) {
  s21_decimal decimal = {{0x7780000, 0xf47d83ef, 0x248bffbd, 0x160000}};
  float check = 1.13107088e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1708) {
  s21_decimal decimal = {{0x7780000, 0xf47d83ef, 0x248bffbd, 0x80160000}};
  float check = -1.13107088e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1709) {
  s21_decimal decimal = {{0x6fe0000, 0x617fd0d3, 0x60d965b7, 0x160000}};
  float check = 2.99733775e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1710) {
  s21_decimal decimal = {{0x6fe0000, 0x617fd0d3, 0x60d965b7, 0x80160000}};
  float check = -2.99733775e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1711) {
  s21_decimal decimal = {{0x436ac59b, 0, 0, 0x30000}};
  float check = 1.13107088e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1712) {
  s21_decimal decimal = {{0x436ac59b, 0, 0, 0x80030000}};
  float check = -1.13107088e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1713) {
  s21_decimal decimal = {{0xc9868d73, 0x45, 0, 0x50000}};
  float check = 2.99733775e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1714) {
  s21_decimal decimal = {{0xc9868d73, 0x45, 0, 0x80050000}};
  float check = -2.99733775e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1715) {
  s21_decimal decimal = {{0x6a130000, 0x68905d3d, 0x2a5a0565, 0x170000}};
  float check = 1.31071992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1716) {
  s21_decimal decimal = {{0x6a130000, 0x68905d3d, 0x2a5a0565, 0x80170000}};
  float check = -1.31071992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1717) {
  s21_decimal decimal = {{0x5918c000, 0x884b5d7c, 0x703b5b19, 0x170000}};
  float check = 3.47340781e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1718) {
  s21_decimal decimal = {{0x5918c000, 0x884b5d7c, 0x703b5b19, 0x80170000}};
  float check = -3.47340781e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1719) {
  s21_decimal decimal = {{0x2cfeced3, 0x131, 0, 0x70000}};
  float check = 1.31071992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1720) {
  s21_decimal decimal = {{0x2cfeced3, 0x131, 0, 0x80070000}};
  float check = -1.31071992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1721) {
  s21_decimal decimal = {{0x93c4186b, 0x13be7, 0, 0x90000}};
  float check = 3.47340781e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1722) {
  s21_decimal decimal = {{0x93c4186b, 0x13be7, 0, 0x80090000}};
  float check = -3.47340781e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1723) {
  s21_decimal decimal = {{0x9f6d0000, 0x19d39b77, 0x2a59f08d, 0x170000}};
  float check = 1.31071008e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1724) {
  s21_decimal decimal = {{0x9f6d0000, 0x19d39b77, 0x2a59f08d, 0x80170000}};
  float check = -1.31071008e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1725) {
  s21_decimal decimal = {{0x33474000, 0x513d8f30, 0x703b23dc, 0x170000}};
  float check = 3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1726) {
  s21_decimal decimal = {{0x33474000, 0x513d8f30, 0x703b23dc, 0x80170000}};
  float check = -3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1727) {
  s21_decimal decimal = {{0x2c689aad, 0x131, 0, 0x70000}};
  float check = 1.31071008e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1728) {
  s21_decimal decimal = {{0x2c689aad, 0x131, 0, 0x80070000}};
  float check = -1.31071008e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1729) {
  s21_decimal decimal = {{0xf8481d15, 0x13be6, 0, 0x90000}};
  float check = 3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1730) {
  s21_decimal decimal = {{0xf8481d15, 0x13be6, 0, 0x80090000}};
  float check = -3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1731) {
  s21_decimal decimal = {{0x903f0000, 0xdc1588f, 0x47, 0x100000}};
  float check = 1.31071000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1732) {
  s21_decimal decimal = {{0x903f0000, 0xdc1588f, 0x47, 0x80100000}};
  float check = -1.31071000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1733) {
  s21_decimal decimal = {{0x51370000, 0x3d24ac9c, 0x498d, 0x120000}};
  float check = 3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1734) {
  s21_decimal decimal = {{0x51370000, 0x3d24ac9c, 0x498d, 0x80120000}};
  float check = -3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1735) {
  s21_decimal decimal = {{0x1ffff, 0, 0, 0}};
  float check = 1.31071000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1736) {
  s21_decimal decimal = {{0x1ffff, 0, 0, 0x80000000}};
  float check = -1.31071000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1737) {
  s21_decimal decimal = {{0x211fef7, 0, 0, 0x20000}};
  float check = 3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1738) {
  s21_decimal decimal = {{0x211fef7, 0, 0, 0x80020000}};
  float check = -3.47338156e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1739) {
  s21_decimal decimal = {{0x73930000, 0x65c87bf2, 0x2a59f038, 0x170000}};
  float check = 1.31070992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1740) {
  s21_decimal decimal = {{0x73930000, 0x65c87bf2, 0x2a59f038, 0x80170000}};
  float check = -1.31070992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1741) {
  s21_decimal decimal = {{0xe578c000, 0xda867ba8, 0x703b22fb, 0x170000}};
  float check = 3.47338125e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1742) {
  s21_decimal decimal = {{0xe578c000, 0xda867ba8, 0x703b22fb, 0x80170000}};
  float check = -3.47338125e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1743) {
  s21_decimal decimal = {{0x2c663853, 0x131, 0, 0x70000}};
  float check = 1.31070992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1744) {
  s21_decimal decimal = {{0x2c663853, 0x131, 0, 0x80070000}};
  float check = -1.31070992e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1745) {
  s21_decimal decimal = {{0xf5d04deb, 0x13be6, 0, 0x90000}};
  float check = 3.47338125e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1746) {
  s21_decimal decimal = {{0xf5d04deb, 0x13be6, 0, 0x80090000}};
  float check = -3.47338125e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1747) {
  s21_decimal decimal = {{0x78b10000, 0x597b1594, 0x234b0494, 0x170000}};
  float check = 1.09226664e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1748) {
  s21_decimal decimal = {{0x78b10000, 0x597b1594, 0x234b0494, 0x80170000}};
  float check = -1.09226664e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1749) {
  s21_decimal decimal = {{0x73084000, 0xb9ec92c9, 0x5d86cc22, 0x170000}};
  float check = 2.89450656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1750) {
  s21_decimal decimal = {{0x73084000, 0xb9ec92c9, 0x5d86cc22, 0x80170000}};
  float check = -2.89450656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1751) {
  s21_decimal decimal = {{0x502a44f1, 0xfe, 0, 0x70000}};
  float check = 1.09226664e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1752) {
  s21_decimal decimal = {{0x502a44f1, 0xfe, 0, 0x80070000}};
  float check = -1.09226664e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1753) {
  s21_decimal decimal = {{0xfbc15d79, 0x10740, 0, 0x90000}};
  float check = 2.89450656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1754) {
  s21_decimal decimal = {{0xfbc15d79, 0x10740, 0, 0x80090000}};
  float check = -2.89450656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1755) {
  s21_decimal decimal = {{0x95ed0000, 0x2bf60182, 0x1fc38456, 0x170000}};
  float check = 9.83040078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1756) {
  s21_decimal decimal = {{0x95ed0000, 0x2bf60182, 0x1fc38456, 0x80170000}};
  float check = -9.83040078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1757) {
  s21_decimal decimal = {{0xa6e74000, 0x8e18b733, 0x542c8517, 0x170000}};
  float check = 2.60505625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1758) {
  s21_decimal decimal = {{0xa6e74000, 0x8e18b733, 0x542c8517, 0x80170000}};
  float check = -2.60505625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1759) {
  s21_decimal decimal = {{0xe1c1312d, 0xe4, 0, 0x70000}};
  float check = 9.83040078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1760) {
  s21_decimal decimal = {{0xe1c1312d, 0xe4, 0, 0x80070000}};
  float check = -9.83040078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1761) {
  s21_decimal decimal = {{0xb0fbe795, 0xeced, 0, 0x90000}};
  float check = 2.60505625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1762) {
  s21_decimal decimal = {{0xb0fbe795, 0xeced, 0, 0x80090000}};
  float check = -2.60505625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1763) {
  s21_decimal decimal = {{0xf0000, 0, 0, 0x10000}};
  float check = 9.83040000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1764) {
  s21_decimal decimal = {{0xf0000, 0, 0, 0x80010000}};
  float check = -9.83040000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1765) {
  s21_decimal decimal = {{0xf870000, 0, 0, 0x30000}};
  float check = 2.60505594e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1766) {
  s21_decimal decimal = {{0xf870000, 0, 0, 0x80030000}};
  float check = -2.60505594e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1767) {
  s21_decimal decimal = {{0x18000, 0, 0, 0}};
  float check = 9.83040000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1768) {
  s21_decimal decimal = {{0x18000, 0, 0, 0x80000000}};
  float check = -9.83040000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1769) {
  s21_decimal decimal = {{0x18d8000, 0, 0, 0x20000}};
  float check = 2.60505594e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1770) {
  s21_decimal decimal = {{0x18d8000, 0, 0, 0x80020000}};
  float check = -2.60505594e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1771) {
  s21_decimal decimal = {{0x6a130000, 0x77eae1fd, 0x1fc38401, 0x170000}};
  float check = 9.83039922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1772) {
  s21_decimal decimal = {{0x6a130000, 0x77eae1fd, 0x1fc38401, 0x80170000}};
  float check = -9.83039922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1773) {
  s21_decimal decimal = {{0x5918c000, 0x1761a3ac, 0x542c8437, 0x170000}};
  float check = 2.60505578e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1774) {
  s21_decimal decimal = {{0x5918c000, 0x1761a3ac, 0x542c8437, 0x80170000}};
  float check = -2.60505578e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1775) {
  s21_decimal decimal = {{0xe1beced3, 0xe4, 0, 0x70000}};
  float check = 9.83039922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1776) {
  s21_decimal decimal = {{0xe1beced3, 0xe4, 0, 0x80070000}};
  float check = -9.83039922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1777) {
  s21_decimal decimal = {{0xae84186b, 0xeced, 0, 0x90000}};
  float check = 2.60505578e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1778) {
  s21_decimal decimal = {{0xae84186b, 0xeced, 0, 0x80090000}};
  float check = -2.60505578e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1779) {
  s21_decimal decimal = {{0xb1bd0000, 0xe4d66c9d, 0x2d2cd28, 0x160000}};
  float check = 8.73813281e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1780) {
  s21_decimal decimal = {{0xb1bd0000, 0xe4d66c9d, 0x2d2cd28, 0x80160000}};
  float check = -8.73813281e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1781) {
  s21_decimal decimal = {{0xe6108000, 0xb0323e52, 0x4ad23cbb, 0x170000}};
  float check = 2.31560516e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1782) {
  s21_decimal decimal = {{0xe6108000, 0xb0323e52, 0x4ad23cbb, 0x80170000}};
  float check = -2.31560516e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1783) {
  s21_decimal decimal = {{0xee6d0000, 0x857c37fe, 0x1c3bfcd0, 0x170000}};
  float check = 8.73810078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1784) {
  s21_decimal decimal = {{0xee6d0000, 0x857c37fe, 0x1c3bfcd0, 0x80170000}};
  float check = -8.73810078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1785) {
  s21_decimal decimal = {{0x2b074000, 0x2e892dfd, 0x4ad22ac2, 0x170000}};
  float check = 2.31559672e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1786) {
  s21_decimal decimal = {{0x2b074000, 0x2e892dfd, 0x4ad22ac2, 0x80170000}};
  float check = -2.31559672e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1787) {
  s21_decimal decimal = {{0x7323a9ad, 0xcb, 0, 0x70000}};
  float check = 8.73810078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1788) {
  s21_decimal decimal = {{0x7323a9ad, 0xcb, 0, 0x80070000}};
  float check = -8.73810078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1789) {
  s21_decimal decimal = {{0x2feaa415, 0xd29a, 0, 0x90000}};
  float check = 2.31559672e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1790) {
  s21_decimal decimal = {{0x2feaa415, 0xd29a, 0, 0x80090000}};
  float check = -2.31559672e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1791) {
  s21_decimal decimal = {{0x30150000, 0x5e8cbd5b, 0x2f, 0x100000}};
  float check = 8.73810000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1792) {
  s21_decimal decimal = {{0x30150000, 0x5e8cbd5b, 0x2f, 0x80100000}};
  float check = -8.73810000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1793) {
  s21_decimal decimal = {{0xc5bd0000, 0xdfb00364, 0x3108, 0x120000}};
  float check = 2.31559656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1794) {
  s21_decimal decimal = {{0xc5bd0000, 0xdfb00364, 0x3108, 0x80120000}};
  float check = -2.31559656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1795) {
  s21_decimal decimal = {{0x15555, 0, 0, 0}};
  float check = 8.73810000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1796) {
  s21_decimal decimal = {{0x15555, 0, 0, 0x80000000}};
  float check = -8.73810000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1797) {
  s21_decimal decimal = {{0x16154fd, 0, 0, 0x20000}};
  float check = 2.31559656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1798) {
  s21_decimal decimal = {{0x16154fd, 0, 0, 0x80020000}};
  float check = -2.31559656e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1799) {
  s21_decimal decimal = {{0xc2930000, 0xd1711879, 0x1c3bfc7b, 0x170000}};
  float check = 8.73809922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1800) {
  s21_decimal decimal = {{0xc2930000, 0xd1711879, 0x1c3bfc7b, 0x80170000}};
  float check = -8.73809922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1801) {
  s21_decimal decimal = {{0xdd38c000, 0xb7d21a75, 0x4ad229e1, 0x170000}};
  float check = 2.31559625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1802) {
  s21_decimal decimal = {{0xdd38c000, 0xb7d21a75, 0x4ad229e1, 0x80170000}};
  float check = -2.31559625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1803) {
  s21_decimal decimal = {{0x73214753, 0xcb, 0, 0x70000}};
  float check = 8.73809922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1804) {
  s21_decimal decimal = {{0x73214753, 0xcb, 0, 0x80070000}};
  float check = -8.73809922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1805) {
  s21_decimal decimal = {{0x2d72d4eb, 0xd29a, 0, 0x90000}};
  float check = 2.31559625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1806) {
  s21_decimal decimal = {{0x2d72d4eb, 0xd29a, 0, 0x80090000}};
  float check = -2.31559625e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1807) {
  s21_decimal decimal = {{0xd2f68000, 0x4c154911, 0x1027e744, 0x170000}};
  float check = 5.00000039e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1808) {
  s21_decimal decimal = {{0xd2f68000, 0x4c154911, 0x1027e744, 0x80170000}};
  float check = -5.00000039e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1809) {
  s21_decimal decimal = {{0xd573a000, 0x63386808, 0x2ad024db, 0x170000}};
  float check = 1.32500016e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1810) {
  s21_decimal decimal = {{0xd573a000, 0x63386808, 0x2ad024db, 0x80170000}};
  float check = -1.32500016e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1811) {
  s21_decimal decimal = {{0x273f45e1, 0x48c, 0, 0x80000}};
  float check = 5.00000039e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1812) {
  s21_decimal decimal = {{0x273f45e1, 0x48c, 0, 0x80080000}};
  float check = -5.00000039e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1813) {
  s21_decimal decimal = {{0xa07f55e9, 0x4b514, 0, 0xa0000}};
  float check = 1.32500016e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1814) {
  s21_decimal decimal = {{0xa07f55e9, 0x4b514, 0, 0x800a0000}};
  float check = -1.32500016e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1815) {
  s21_decimal decimal = {{0x37e08000, 0x11c379, 0, 0xb0000}};
  float check = 5.00000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1816) {
  s21_decimal decimal = {{0x37e08000, 0x11c379, 0, 0x800b0000}};
  float check = -5.00000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1817) {
  s21_decimal decimal = {{0xd7648000, 0x1263587a, 0, 0xd0000}};
  float check = 1.32500000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1818) {
  s21_decimal decimal = {{0xd7648000, 0x1263587a, 0, 0x800d0000}};
  float check = -1.32500000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1819) {
  s21_decimal decimal = {{0xc350, 0, 0, 0}};
  float check = 5.00000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1820) {
  s21_decimal decimal = {{0xc350, 0, 0, 0x80000000}};
  float check = -5.00000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1821) {
  s21_decimal decimal = {{0xca2dd0, 0, 0, 0x20000}};
  float check = 1.32500000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1822) {
  s21_decimal decimal = {{0xca2dd0, 0, 0, 0x80020000}};
  float check = -1.32500000e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1823) {
  s21_decimal decimal = {{0x3d098000, 0xf20fb94f, 0x1027e719, 0x170000}};
  float check = 4.99999961e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1824) {
  s21_decimal decimal = {{0x3d098000, 0xf20fb94f, 0x1027e719, 0x80170000}};
  float check = -4.99999961e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1825) {
  s21_decimal decimal = {{0x2e8c6000, 0x27dcde45, 0x2ad0246b, 0x170000}};
  float check = 1.32499984e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1826) {
  s21_decimal decimal = {{0x2e8c6000, 0x27dcde45, 0x2ad0246b, 0x80170000}};
  float check = -1.32499984e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1827) {
  s21_decimal decimal = {{0x27335a1f, 0x48c, 0, 0x80000}};
  float check = 4.99999961e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1828) {
  s21_decimal decimal = {{0x27335a1f, 0x48c, 0, 0x80080000}};
  float check = -4.99999961e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1829) {
  s21_decimal decimal = {{0x94284a17, 0x4b514, 0, 0xa0000}};
  float check = 1.32499984e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1830) {
  s21_decimal decimal = {{0x94284a17, 0x4b514, 0, 0x800a0000}};
  float check = -1.32499984e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1831) {
  s21_decimal decimal = {{0x257b4000, 0x2f82fe4d, 0xa56fa66, 0x170000}};
  float check = 3.20000020e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1832) {
  s21_decimal decimal = {{0x257b4000, 0x2f82fe4d, 0xa56fa66, 0x80170000}};
  float check = -3.20000020e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1833) {
  s21_decimal decimal = {{0x9b9d000, 0x311b21e6, 0x1b667df5, 0x170000}};
  float check = 8.48000078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1834) {
  s21_decimal decimal = {{0x9b9d000, 0x311b21e6, 0x1b667df5, 0x80170000}};
  float check = -8.48000078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1835) {
  s21_decimal decimal = {{0x94bfcd65, 0x1d1a, 0, 0x90000}};
  float check = 3.20000020e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1836) {
  s21_decimal decimal = {{0x94bfcd65, 0x1d1a, 0, 0x80090000}};
  float check = -3.20000020e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1837) {
  s21_decimal decimal = {{0xfa8b9d8d, 0x1e2083, 0, 0xb0000}};
  float check = 8.48000078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1838) {
  s21_decimal decimal = {{0xfa8b9d8d, 0x1e2083, 0, 0x800b0000}};
  float check = -8.48000078e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1839) {
  s21_decimal decimal = {{0x73594000, 0x7, 0, 0x60000}};
  float check = 3.20000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1840) {
  s21_decimal decimal = {{0x73594000, 0x7, 0, 0x80060000}};
  float check = -3.20000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1841) {
  s21_decimal decimal = {{0x67634000, 0x7b6, 0, 0x80000}};
  float check = 8.48000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1842) {
  s21_decimal decimal = {{0x67634000, 0x7b6, 0, 0x80080000}};
  float check = -8.48000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1843) {
  s21_decimal decimal = {{0x7d00, 0, 0, 0}};
  float check = 3.20000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1844) {
  s21_decimal decimal = {{0x7d00, 0, 0, 0x80000000}};
  float check = -3.20000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1845) {
  s21_decimal decimal = {{0x816500, 0, 0, 0x20000}};
  float check = 8.48000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1846) {
  s21_decimal decimal = {{0x816500, 0, 0, 0x80020000}};
  float check = -8.48000000e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1847) {
  s21_decimal decimal = {{0xda84c000, 0x280366b, 0xa56fa51, 0x170000}};
  float check = 3.19999980e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1848) {
  s21_decimal decimal = {{0xda84c000, 0x280366b, 0xa56fa51, 0x80170000}};
  float check = -3.19999980e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1849) {
  s21_decimal decimal = {{0x36463000, 0x136d5d04, 0x1b667dbd, 0x170000}};
  float check = 8.47999922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1850) {
  s21_decimal decimal = {{0x36463000, 0x136d5d04, 0x1b667dbd, 0x80170000}};
  float check = -8.47999922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1851) {
  s21_decimal decimal = {{0x9484329b, 0x1d1a, 0, 0x90000}};
  float check = 3.19999980e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1852) {
  s21_decimal decimal = {{0x9484329b, 0x1d1a, 0, 0x80090000}};
  float check = -3.19999980e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1853) {
  s21_decimal decimal = {{0xbcd86273, 0x1e2083, 0, 0xb0000}};
  float check = 8.47999922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1854) {
  s21_decimal decimal = {{0xbcd86273, 0x1e2083, 0, 0x800b0000}};
  float check = -8.47999922e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1855) {
  s21_decimal decimal = {{0xa57b400, 0xc8ed4219, 0x54b40b, 0x170000}};
  float check = 1.02400012e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1856) {
  s21_decimal decimal = {{0xa57b400, 0xc8ed4219, 0x54b40b, 0x80170000}};
  float check = -1.02400012e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1857) {
  s21_decimal decimal = {{0xb4c95400, 0xfd996beb, 0x57ae6032, 0x190000}};
  float check = 2.71360034e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1858) {
  s21_decimal decimal = {{0xb4c95400, 0xfd996beb, 0x57ae6032, 0x80190000}};
  float check = -2.71360034e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1859) {
  s21_decimal decimal = {{0x13427395, 0x24613a, 0, 0xd0000}};
  float check = 1.02400012e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1860) {
  s21_decimal decimal = {{0x13427395, 0x24613a, 0, 0x800d0000}};
  float check = -1.02400012e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1861) {
  s21_decimal decimal = {{0xefc9a53d, 0x25a8a51d, 0, 0xf0000}};
  float check = 2.71360034e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1862) {
  s21_decimal decimal = {{0xefc9a53d, 0x25a8a51d, 0, 0x800f0000}};
  float check = -2.71360034e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1863) {
  s21_decimal decimal = {{0x400, 0, 0, 0}};
  float check = 1.02400000e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1864) {
  s21_decimal decimal = {{0x400, 0, 0, 0x80000000}};
  float check = -1.02400000e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1865) {
  s21_decimal decimal = {{0x42400, 0, 0, 0x20000}};
  float check = 2.71360010e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1866) {
  s21_decimal decimal = {{0x42400, 0, 0, 0x80020000}};
  float check = -2.71360010e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1867) {
  s21_decimal decimal = {{0x7ad42600, 0xcad120ba, 0x54b40a, 0x170000}};
  float check = 1.02399994e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1868) {
  s21_decimal decimal = {{0x7ad42600, 0xcad120ba, 0x54b40a, 0x80170000}};
  float check = -1.02399994e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1869) {
  s21_decimal decimal = {{0x259b5600, 0xf27ae109, 0x57ae5f2b, 0x190000}};
  float check = 2.71359985e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1870) {
  s21_decimal decimal = {{0x259b5600, 0xf27ae109, 0x57ae5f2b, 0x80190000}};
  float check = -2.71359985e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1871) {
  s21_decimal decimal = {{0x7d33be17, 0x16bcc40, 0, 0xe0000}};
  float check = 1.02399994e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1872) {
  s21_decimal decimal = {{0x7d33be17, 0x16bcc40, 0, 0x800e0000}};
  float check = -1.02399994e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1873) {
  s21_decimal decimal = {{0x9a8fc5cf, 0x78966ec1, 0x1, 0x100000}};
  float check = 2.71359985e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1874) {
  s21_decimal decimal = {{0x9a8fc5cf, 0x78966ec1, 0x1, 0x80100000}};
  float check = -2.71359985e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1875) {
  s21_decimal decimal = {{0x852bda00, 0xe476a10c, 0x2a5a05, 0x170000}};
  float check = 5.12000061e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1876) {
  s21_decimal decimal = {{0x852bda00, 0xe476a10c, 0x2a5a05, 0x80170000}};
  float check = -5.12000061e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1877) {
  s21_decimal decimal = {{0xda64aa00, 0x7eccb5f5, 0x2bd73019, 0x190000}};
  float check = 1.35680017e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1878) {
  s21_decimal decimal = {{0xda64aa00, 0x7eccb5f5, 0x2bd73019, 0x80190000}};
  float check = -1.35680017e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1879) {
  s21_decimal decimal = {{0x604c41e9, 0xb5e622, 0, 0xe0000}};
  float check = 5.12000061e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1880) {
  s21_decimal decimal = {{0x604c41e9, 0xb5e622, 0, 0x800e0000}};
  float check = -5.12000061e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1881) {
  s21_decimal decimal = {{0xaef03a31, 0xbc4b3995, 0, 0x100000}};
  float check = 1.35680017e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1882) {
  s21_decimal decimal = {{0xaef03a31, 0xbc4b3995, 0, 0x80100000}};
  float check = -1.35680017e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1883) {
  s21_decimal decimal = {{0x200, 0, 0, 0}};
  float check = 5.12000000e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1884) {
  s21_decimal decimal = {{0x200, 0, 0, 0x80000000}};
  float check = -5.12000000e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1885) {
  s21_decimal decimal = {{0x21200, 0, 0, 0x20000}};
  float check = 1.35680005e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1886) {
  s21_decimal decimal = {{0x21200, 0, 0, 0x80020000}};
  float check = -1.35680005e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1887) {
  s21_decimal decimal = {{0x3d6a1300, 0x6568905d, 0x2a5a05, 0x170000}};
  float check = 5.11999969e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1888) {
  s21_decimal decimal = {{0x3d6a1300, 0x6568905d, 0x2a5a05, 0x80170000}};
  float check = -5.11999969e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1889) {
  s21_decimal decimal = {{0x92cdab00, 0xf93d7084, 0x2bd72f95, 0x190000}};
  float check = 1.35679993e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1890) {
  s21_decimal decimal = {{0x92cdab00, 0xf93d7084, 0x2bd72f95, 0x80190000}};
  float check = -1.35679993e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1891) {
  s21_decimal decimal = {{0x7202b673, 0x71afd42, 0, 0xf0000}};
  float check = 5.11999969e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1892) {
  s21_decimal decimal = {{0x7202b673, 0x71afd42, 0, 0x800f0000}};
  float check = -5.11999969e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1893) {
  s21_decimal decimal = {{0x4cedd0b, 0x5af029c8, 0x7, 0x110000}};
  float check = 1.35679993e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1894) {
  s21_decimal decimal = {{0x4cedd0b, 0x5af029c8, 0x7, 0x80110000}};
  float check = -1.35679993e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1895) {
  s21_decimal decimal = {{0x59153700, 0xb91b0de1, 0x43c33, 0x160000}};
  float check = 5.11999939e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1896) {
  s21_decimal decimal = {{0x59153700, 0xb91b0de1, 0x43c33, 0x80160000}};
  float check = -5.11999939e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1897) {
  s21_decimal decimal = {{0x36f5ef00, 0x9d015e45, 0x462518a, 0x180000}};
  float check = 1.35679980e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1898) {
  s21_decimal decimal = {{0x36f5ef00, 0x9d015e45, 0x462518a, 0x80180000}};
  float check = -1.35679980e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1899) {
  s21_decimal decimal = {{0x88b3be17, 0xb5e61f, 0, 0xe0000}};
  float check = 5.11999939e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1900) {
  s21_decimal decimal = {{0x88b3be17, 0xb5e61f, 0, 0x800e0000}};
  float check = -5.11999939e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1901) {
  s21_decimal decimal = {{0x820fc5cf, 0xbc4b36a4, 0, 0x100000}};
  float check = 1.35679980e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1902) {
  s21_decimal decimal = {{0x820fc5cf, 0xbc4b36a4, 0, 0x80100000}};
  float check = -1.35679980e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1903) {
  s21_decimal decimal = {{0x9478b100, 0x94597b15, 0x234b04, 0x170000}};
  float check = 4.26666656e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1904) {
  s21_decimal decimal = {{0x9478b100, 0x94597b15, 0x234b04, 0x80170000}};
  float check = -4.26666656e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1905) {
  s21_decimal decimal = {{0xb0ef3900, 0x90a06956, 0x2488a7bd, 0x190000}};
  float check = 1.13066663e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1906) {
  s21_decimal decimal = {{0xb0ef3900, 0x90a06956, 0x2488a7bd, 0x80190000}};
  float check = -1.13066663e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1907) {
  s21_decimal decimal = {{0x41d63cd1, 0x5ebd310, 0, 0xf0000}};
  float check = 4.26666656e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1908) {
  s21_decimal decimal = {{0x41d63cd1, 0x5ebd310, 0, 0x800f0000}};
  float check = -4.26666656e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1909) {
  s21_decimal decimal = {{0x26c4f459, 0x211d7bd4, 0x6, 0x110000}};
  float check = 1.13066663e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1910) {
  s21_decimal decimal = {{0x26c4f459, 0x211d7bd4, 0x6, 0x80110000}};
  float check = -1.13066663e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1911) {
  s21_decimal decimal = {{0xf00, 0, 0, 0x10000}};
  float check = 3.84000000e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1912) {
  s21_decimal decimal = {{0xf00, 0, 0, 0x80010000}};
  float check = -3.84000000e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1913) {
  s21_decimal decimal = {{0xf8700, 0, 0, 0x30000}};
  float check = 1.01759998e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1914) {
  s21_decimal decimal = {{0xf8700, 0, 0, 0x80030000}};
  float check = -1.01759998e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1915) {
  s21_decimal decimal = {{0x180, 0, 0, 0}};
  float check = 3.84000000e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1916) {
  s21_decimal decimal = {{0x180, 0, 0, 0x80000000}};
  float check = -3.84000000e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1917) {
  s21_decimal decimal = {{0x18d80, 0, 0, 0x20000}};
  float check = 1.01759998e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1918) {
  s21_decimal decimal = {{0x18d80, 0, 0, 0x80020000}};
  float check = -1.01759998e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1919) {
  s21_decimal decimal = {{0x9db1bd00, 0x28e4d66c, 0x2d2cd, 0x160000}};
  float check = 3.41333313e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1920) {
  s21_decimal decimal = {{0x9db1bd00, 0x28e4d66c, 0x2d2cd, 0x80160000}};
  float check = -3.41333313e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1921) {
  s21_decimal decimal = {{0x3cfca500, 0x54e1f66f, 0x2ec365f, 0x180000}};
  float check = 9.04533264e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1922) {
  s21_decimal decimal = {{0x3cfca500, 0x54e1f66f, 0x2ec365f, 0x80180000}};
  float check = -9.04533264e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1923) {
  s21_decimal decimal = {{0x7f113f5d, 0x794415, 0, 0xe0000}};
  float check = 3.41333313e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1924) {
  s21_decimal decimal = {{0x7f113f5d, 0x794415, 0, 0x800e0000}};
  float check = -3.41333313e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1925) {
  s21_decimal decimal = {{0x88da9745, 0x7d877a40, 0, 0x100000}};
  float check = 9.04533264e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1926) {
  s21_decimal decimal = {{0x88da9745, 0x7d877a40, 0, 0x80100000}};
  float check = -9.04533264e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1927) {
  s21_decimal decimal = {{0x90a57b40, 0xbc8ed421, 0x54b40, 0x170000}};
  float check = 6.40000076e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1928) {
  s21_decimal decimal = {{0x90a57b40, 0xbc8ed421, 0x54b40, 0x80170000}};
  float check = -6.40000076e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1929) {
  s21_decimal decimal = {{0xbb4c9540, 0x2fd996be, 0x57ae603, 0x190000}};
  float check = 1.69600021e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1930) {
  s21_decimal decimal = {{0xbb4c9540, 0x2fd996be, 0x57ae603, 0x80190000}};
  float check = -1.69600021e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1931) {
  s21_decimal decimal = {{0x53c2ec5, 0x58d15ec9, 0, 0x110000}};
  float check = 6.40000076e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1932) {
  s21_decimal decimal = {{0x53c2ec5, 0x58d15ec9, 0, 0x80110000}};
  float check = -6.40000076e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1933) {
  s21_decimal decimal = {{0x6b4c69ed, 0xf0bb1e16, 0x5b, 0x130000}};
  float check = 1.69600021e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1934) {
  s21_decimal decimal = {{0x6b4c69ed, 0xf0bb1e16, 0x5b, 0x80130000}};
  float check = -1.69600021e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1935) {
  s21_decimal decimal = {{0x40, 0, 0, 0}};
  float check = 6.40000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1936) {
  s21_decimal decimal = {{0x40, 0, 0, 0x80000000}};
  float check = -6.40000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1937) {
  s21_decimal decimal = {{0x4240, 0, 0, 0x20000}};
  float check = 1.69600006e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1938) {
  s21_decimal decimal = {{0x4240, 0, 0, 0x80020000}};
  float check = -1.69600006e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1939) {
  s21_decimal decimal = {{0xa7ad4260, 0xacad120b, 0x54b40, 0x170000}};
  float check = 6.39999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1940) {
  s21_decimal decimal = {{0xa7ad4260, 0xacad120b, 0x54b40, 0x80170000}};
  float check = -6.39999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1941) {
  s21_decimal decimal = {{0x9259b560, 0xbf27ae10, 0x57ae5f2, 0x190000}};
  float check = 1.69599991e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1942) {
  s21_decimal decimal = {{0x9259b560, 0xbf27ae10, 0x57ae5f2, 0x80190000}};
  float check = -1.69599991e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1943) {
  s21_decimal decimal = {{0xab531627, 0x782da971, 0x3, 0x120000}};
  float check = 6.39999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1944) {
  s21_decimal decimal = {{0xab531627, 0x782da971, 0x3, 0x80120000}};
  float check = -6.39999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1945) {
  s21_decimal decimal = {{0x5901ee5f, 0x674466aa, 0x397, 0x140000}};
  float check = 1.69599991e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1946) {
  s21_decimal decimal = {{0x5901ee5f, 0x674466aa, 0x397, 0x80140000}};
  float check = -1.69599991e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1947) {
  s21_decimal decimal = {{0x20, 0, 0, 0}};
  float check = 3.20000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1948) {
  s21_decimal decimal = {{0x20, 0, 0, 0x80000000}};
  float check = -3.20000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1949) {
  s21_decimal decimal = {{0x2120, 0, 0, 0x20000}};
  float check = 8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1950) {
  s21_decimal decimal = {{0x2120, 0, 0, 0x80020000}};
  float check = -8.48000031e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1951) {
  s21_decimal decimal = {{0xd3d6a130, 0x56568905, 0x2a5a0, 0x170000}};
  float check = 3.19999981e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1952) {
  s21_decimal decimal = {{0xd3d6a130, 0x56568905, 0x2a5a0, 0x80170000}};
  float check = -3.19999981e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1953) {
  s21_decimal decimal = {{0x492cdab0, 0x5f93d708, 0x2bd72f9, 0x190000}};
  float check = 8.47999954e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1954) {
  s21_decimal decimal = {{0x492cdab0, 0x5f93d708, 0x2bd72f9, 0x80190000}};
  float check = -8.47999954e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1955) {
  s21_decimal decimal = {{0x589f6ec3, 0x58e44f38, 0x11, 0x130000}};
  float check = 3.19999981e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1956) {
  s21_decimal decimal = {{0x589f6ec3, 0x58e44f38, 0x11, 0x80130000}};
  float check = -3.19999981e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1957) {
  s21_decimal decimal = {{0xbd09a7db, 0x4560153, 0x11f5, 0x150000}};
  float check = 8.47999954e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1958) {
  s21_decimal decimal = {{0xbd09a7db, 0x4560153, 0x11f5, 0x80150000}};
  float check = -8.47999954e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1959) {
  s21_decimal decimal = {{0x15915370, 0x3b91b0de, 0x43c3, 0x160000}};
  float check = 3.19999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1960) {
  s21_decimal decimal = {{0x15915370, 0x3b91b0de, 0x43c3, 0x80160000}};
  float check = -3.19999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1961) {
  s21_decimal decimal = {{0x536f5ef0, 0xa9d015e4, 0x462518, 0x180000}};
  float check = 8.47999878e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1962) {
  s21_decimal decimal = {{0x536f5ef0, 0xa9d015e4, 0x462518, 0x80180000}};
  float check = -8.47999878e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1963) {
  s21_decimal decimal = {{0xbed31627, 0xbc16d2fc, 0x1, 0x120000}};
  float check = 3.19999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1964) {
  s21_decimal decimal = {{0xbed31627, 0xbc16d2fc, 0x1, 0x80120000}};
  float check = -3.19999962e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1965) {
  s21_decimal decimal = {{0x8881ee5f, 0xb3a067a1, 0x1cb, 0x140000}};
  float check = 8.47999878e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1966) {
  s21_decimal decimal = {{0x8881ee5f, 0xb3a067a1, 0x1cb, 0x80140000}};
  float check = -8.47999878e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1967) {
  s21_decimal decimal = {{0x59478b10, 0x494597b1, 0x234b0, 0x170000}};
  float check = 2.66666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1968) {
  s21_decimal decimal = {{0x59478b10, 0x494597b1, 0x234b0, 0x80170000}};
  float check = -2.66666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1969) {
  s21_decimal decimal = {{0x6b0ef390, 0xd90a0695, 0x2488a7b, 0x190000}};
  float check = 7.06666641e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1970) {
  s21_decimal decimal = {{0x6b0ef390, 0xd90a0695, 0x2488a7b, 0x80190000}};
  float check = -7.06666641e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1971) {
  s21_decimal decimal = {{0xbc0a7a41, 0x74be4ab0, 0xe, 0x130000}};
  float check = 2.66666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1972) {
  s21_decimal decimal = {{0xbc0a7a41, 0x74be4ab0, 0xe, 0x80130000}};
  float check = -2.66666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1973) {
  s21_decimal decimal = {{0xa6d88d49, 0xd8fb50f2, 0xef6, 0x150000}};
  float check = 7.06666641e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1974) {
  s21_decimal decimal = {{0xa6d88d49, 0xd8fb50f2, 0xef6, 0x80150000}};
  float check = -7.06666641e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1975) {
  s21_decimal decimal = {{0xf0, 0, 0, 0x10000}};
  float check = 2.40000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1976) {
  s21_decimal decimal = {{0xf0, 0, 0, 0x80010000}};
  float check = -2.40000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1977) {
  s21_decimal decimal = {{0xf870, 0, 0, 0x30000}};
  float check = 6.35999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1978) {
  s21_decimal decimal = {{0xf870, 0, 0, 0x80030000}};
  float check = -6.35999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1979) {
  s21_decimal decimal = {{0x18, 0, 0, 0}};
  float check = 2.40000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1980) {
  s21_decimal decimal = {{0x18, 0, 0, 0x80000000}};
  float check = -2.40000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1981) {
  s21_decimal decimal = {{0x18d8, 0, 0, 0x20000}};
  float check = 6.35999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1982) {
  s21_decimal decimal = {{0x18d8, 0, 0, 0x80020000}};
  float check = -6.35999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1983) {
  s21_decimal decimal = {{0xc9db1bd0, 0xd28e4d66, 0x2d2c, 0x160000}};
  float check = 2.13333321e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1984) {
  s21_decimal decimal = {{0xc9db1bd0, 0xd28e4d66, 0x2d2c, 0x80160000}};
  float check = -2.13333321e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1985) {
  s21_decimal decimal = {{0xf3cfca50, 0xf54e1f66, 0x2ec365, 0x180000}};
  float check = 5.65333290e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1986) {
  s21_decimal decimal = {{0xf3cfca50, 0xf54e1f66, 0x2ec365, 0x80180000}};
  float check = -5.65333290e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1987) {
  s21_decimal decimal = {{0x391bb20d, 0x280f387b, 0x1, 0x120000}};
  float check = 2.13333321e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1988) {
  s21_decimal decimal = {{0x391bb20d, 0x280f387b, 0x1, 0x80120000}};
  float check = -2.13333321e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1989) {
  s21_decimal decimal = {{0x1dab4f75, 0x77c1778e, 0x132, 0x140000}};
  float check = 5.65333290e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1990) {
  s21_decimal decimal = {{0x1dab4f75, 0x77c1778e, 0x132, 0x80140000}};
  float check = -5.65333290e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1991) {
  s21_decimal decimal = {{0x64295ed0, 0x2f23b508, 0x152d0, 0x170000}};
  float check = 1.60000019e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1992) {
  s21_decimal decimal = {{0x64295ed0, 0x2f23b508, 0x152d0, 0x80170000}};
  float check = -1.60000019e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1993) {
  s21_decimal decimal = {{0xaed32550, 0xcbf665af, 0x15eb980, 0x190000}};
  float check = 4.24000053e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1994) {
  s21_decimal decimal = {{0xaed32550, 0xcbf665af, 0x15eb980, 0x80190000}};
  float check = -4.24000053e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1995) {
  s21_decimal decimal = {{0x82e0913d, 0xac7241a1, 0x8, 0x130000}};
  float check = 1.60000019e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1996) {
  s21_decimal decimal = {{0x82e0913d, 0xac7241a1, 0x8, 0x80130000}};
  float check = -1.60000019e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1997) {
  s21_decimal decimal = {{0x7a765825, 0x8245f030, 0x8fa, 0x150000}};
  float check = 4.24000053e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1998) {
  s21_decimal decimal = {{0x7a765825, 0x8245f030, 0x8fa, 0x80150000}};
  float check = -4.24000053e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_1999) {
  s21_decimal decimal = {{0x10, 0, 0, 0}};
  float check = 1.60000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2000) {
  s21_decimal decimal = {{0x10, 0, 0, 0x80000000}};
  float check = -1.60000000e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2001) {
  s21_decimal decimal = {{0x1090, 0, 0, 0x20000}};
  float check = 4.24000015e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2002) {
  s21_decimal decimal = {{0x1090, 0, 0, 0x80020000}};
  float check = -4.24000015e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2003) {
  s21_decimal decimal = {{0xe9eb5098, 0x2b2b4482, 0x152d0, 0x170000}};
  float check = 1.59999990e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2004) {
  s21_decimal decimal = {{0xe9eb5098, 0x2b2b4482, 0x152d0, 0x80170000}};
  float check = -1.59999990e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2005) {
  s21_decimal decimal = {{0x24966d58, 0xafc9eb84, 0x15eb97c, 0x190000}};
  float check = 4.23999977e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2006) {
  s21_decimal decimal = {{0x24966d58, 0xafc9eb84, 0x15eb97c, 0x80190000}};
  float check = -4.23999977e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2007) {
  s21_decimal decimal = {{0xbb1d29cf, 0xbc758c19, 0x56, 0x140000}};
  float check = 1.59999990e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2008) {
  s21_decimal decimal = {{0xbb1d29cf, 0xbc758c19, 0x56, 0x80140000}};
  float check = -1.59999990e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2009) {
  s21_decimal decimal = {{0xb1304747, 0x15ae06a2, 0x59c9, 0x160000}};
  float check = 4.23999977e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2010) {
  s21_decimal decimal = {{0xb1304747, 0x15ae06a2, 0x59c9, 0x80160000}};
  float check = -4.23999977e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2011) {
  s21_decimal decimal = {{0x8511f6a8, 0xa00a0223, 0xe884, 0x170000}};
  float check = 1.09803553e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2012) {
  s21_decimal decimal = {{0x8511f6a8, 0xa00a0223, 0xe884, 0x80170000}};
  float check = -1.09803553e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2013) {
  s21_decimal decimal = {{0xbf9853e8, 0xaa5c36c4, 0xf0b149, 0x190000}};
  float check = 2.90979424e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2014) {
  s21_decimal decimal = {{0xbf9853e8, 0xaa5c36c4, 0xf0b149, 0x80190000}};
  float check = -2.90979424e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2015) {
  s21_decimal decimal = {{0x924f1f39, 0x864dd581, 0x3b, 0x140000}};
  float check = 1.09803553e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2016) {
  s21_decimal decimal = {{0x924f1f39, 0x864dd581, 0x3b, 0x80140000}};
  float check = -1.09803553e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2017) {
  s21_decimal decimal = {{0x73e75201, 0x6920320, 0x3d9e, 0x160000}};
  float check = 2.90979424e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2018) {
  s21_decimal decimal = {{0x73e75201, 0x6920320, 0x3d9e, 0x80160000}};
  float check = -2.90979424e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2019) {
  s21_decimal decimal = {{0x2894af68, 0x1a59bbcf, 0xbe95, 0x170000}};
  float check = 9.00000095e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2020) {
  s21_decimal decimal = {{0x2894af68, 0x1a59bbcf, 0xbe95, 0x80170000}};
  float check = -9.00000095e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2021) {
  s21_decimal decimal = {{0x1e992a8, 0x46e36971, 0xc54858, 0x190000}};
  float check = 2.38500023e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2022) {
  s21_decimal decimal = {{0x1e992a8, 0x46e36971, 0xc54858, 0x80190000}};
  float check = -2.38500023e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2023) {
  s21_decimal decimal = {{0xf172d631, 0xca02a654, 0x30, 0x140000}};
  float check = 9.00000095e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2024) {
  s21_decimal decimal = {{0xf172d631, 0xca02a654, 0x30, 0x80140000}};
  float check = -9.00000095e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2025) {
  s21_decimal decimal = {{0xefdfb8b9, 0x1cbe2ded, 0x3281, 0x160000}};
  float check = 2.38500023e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2026) {
  s21_decimal decimal = {{0xefdfb8b9, 0x1cbe2ded, 0x3281, 0x80160000}};
  float check = -2.38500023e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2027) {
  s21_decimal decimal = {{0x2328, 0, 0, 0x30000}};
  float check = 9.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2028) {
  s21_decimal decimal = {{0x2328, 0, 0, 0x80030000}};
  float check = -9.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2029) {
  s21_decimal decimal = {{0x246468, 0, 0, 0x50000}};
  float check = 2.38500004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2030) {
  s21_decimal decimal = {{0x246468, 0, 0, 0x80050000}};
  float check = -2.38500004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2031) {
  s21_decimal decimal = {{0x9, 0, 0, 0}};
  float check = 9.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2032) {
  s21_decimal decimal = {{0x9, 0, 0, 0x80000000}};
  float check = -9.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2033) {
  s21_decimal decimal = {{0x951, 0, 0, 0x20000}};
  float check = 2.38500004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2034) {
  s21_decimal decimal = {{0x951, 0, 0, 0x80020000}};
  float check = -2.38500004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2035) {
  s21_decimal decimal = {{0x2c6b5098, 0x17b41b76, 0xbe95, 0x170000}};
  float check = 8.99999905e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2036) {
  s21_decimal decimal = {{0x2c6b5098, 0x17b41b76, 0xbe95, 0x80170000}};
  float check = -8.99999905e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2037) {
  s21_decimal decimal = {{0xfb166d58, 0x89706d53, 0xc54855, 0x190000}};
  float check = 2.38499966e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2038) {
  s21_decimal decimal = {{0xfb166d58, 0x89706d53, 0xc54855, 0x80190000}};
  float check = -2.38499966e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2039) {
  s21_decimal decimal = {{0x5ad29cf, 0xca01f8dc, 0x30, 0x140000}};
  float check = 8.99999905e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2040) {
  s21_decimal decimal = {{0x5ad29cf, 0xca01f8dc, 0x30, 0x80140000}};
  float check = -8.99999905e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2041) {
  s21_decimal decimal = {{0xe0404747, 0x1c0a9bc1, 0x3281, 0x160000}};
  float check = 2.38499966e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2042) {
  s21_decimal decimal = {{0xe0404747, 0x1c0a9bc1, 0x3281, 0x80160000}};
  float check = -2.38499966e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2043) {
  s21_decimal decimal = {{0x8, 0, 0, 0}};
  float check = 8.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2044) {
  s21_decimal decimal = {{0x8, 0, 0, 0x80000000}};
  float check = -8.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2045) {
  s21_decimal decimal = {{0x848, 0, 0, 0x20000}};
  float check = 2.12000008e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2046) {
  s21_decimal decimal = {{0x848, 0, 0, 0x80020000}};
  float check = -2.12000008e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2047) {
  s21_decimal decimal = {{0x74f5a84c, 0x1595a241, 0xa968, 0x170000}};
  float check = 7.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2048) {
  s21_decimal decimal = {{0x74f5a84c, 0x1595a241, 0xa968, 0x80170000}};
  float check = -7.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2049) {
  s21_decimal decimal = {{0x124b36ac, 0x57e4f5c2, 0xaf5cbe, 0x190000}};
  float check = 2.11999989e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2050) {
  s21_decimal decimal = {{0x124b36ac, 0x57e4f5c2, 0xaf5cbe, 0x80190000}};
  float check = -2.11999989e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2051) {
  s21_decimal decimal = {{0xa791d10b, 0xae4bbc80, 0x1b1, 0x150000}};
  float check = 7.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2052) {
  s21_decimal decimal = {{0xa791d10b, 0xae4bbc80, 0x1b1, 0x80150000}};
  float check = -7.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2053) {
  s21_decimal decimal = {{0x75f16463, 0x6c66212d, 0x1c0ed, 0x170000}};
  float check = 2.11999989e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2054) {
  s21_decimal decimal = {{0x75f16463, 0x6c66212d, 0x1c0ed, 0x80170000}};
  float check = -2.11999989e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2055) {
  s21_decimal decimal = {{0x5651e2c4, 0x125165ec, 0x8d2c, 0x170000}};
  float check = 6.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2056) {
  s21_decimal decimal = {{0x5651e2c4, 0x125165ec, 0x8d2c, 0x80170000}};
  float check = -6.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2057) {
  s21_decimal decimal = {{0x5ac3bce4, 0xf64281a5, 0x92229e, 0x190000}};
  float check = 1.76666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2058) {
  s21_decimal decimal = {{0x5ac3bce4, 0xf64281a5, 0x92229e, 0x80190000}};
  float check = -1.76666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2059) {
  s21_decimal decimal = {{0x5d05f059, 0x66954b42, 0x169, 0x150000}};
  float check = 6.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2060) {
  s21_decimal decimal = {{0x5d05f059, 0x66954b42, 0x169, 0x80150000}};
  float check = -6.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2061) {
  s21_decimal decimal = {{0x4b25cc21, 0x308ae7b2, 0x1761b, 0x170000}};
  float check = 1.76666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2062) {
  s21_decimal decimal = {{0x4b25cc21, 0x308ae7b2, 0x1761b, 0x80170000}};
  float check = -1.76666660e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2063) {
  s21_decimal decimal = {{0x3c, 0, 0, 0x10000}};
  float check = 6.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2064) {
  s21_decimal decimal = {{0x3c, 0, 0, 0x80010000}};
  float check = -6.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2065) {
  s21_decimal decimal = {{0x3e1c, 0, 0, 0x30000}};
  float check = 1.58999996e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2066) {
  s21_decimal decimal = {{0x3e1c, 0, 0, 0x80030000}};
  float check = -1.58999996e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2067) {
  s21_decimal decimal = {{0x6, 0, 0, 0}};
  float check = 6.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2068) {
  s21_decimal decimal = {{0x6, 0, 0, 0x80000000}};
  float check = -6.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2069) {
  s21_decimal decimal = {{0x636, 0, 0, 0x20000}};
  float check = 1.58999996e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2070) {
  s21_decimal decimal = {{0x636, 0, 0, 0x80020000}};
  float check = -1.58999996e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2071) {
  s21_decimal decimal = {{0xb276c6f4, 0x34a39359, 0xb4b, 0x160000}};
  float check = 5.33333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2072) {
  s21_decimal decimal = {{0xb276c6f4, 0x34a39359, 0xb4b, 0x80160000}};
  float check = -5.33333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2073) {
  s21_decimal decimal = {{0xbcf3f294, 0x7d5387d9, 0xbb0d9, 0x180000}};
  float check = 1.41333323e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2074) {
  s21_decimal decimal = {{0xbcf3f294, 0x7d5387d9, 0xbb0d9, 0x80180000}};
  float check = -1.41333323e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2075) {
  s21_decimal decimal = {{0x93b46345, 0xe97c8408, 0x1c, 0x140000}};
  float check = 5.33333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2076) {
  s21_decimal decimal = {{0x93b46345, 0xe97c8408, 0x1c, 0x80140000}};
  float check = -5.33333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2077) {
  s21_decimal decimal = {{0xe5bac26d, 0xb1e4ace0, 0x1ded, 0x160000}};
  float check = 1.41333323e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2078) {
  s21_decimal decimal = {{0xe5bac26d, 0xb1e4ace0, 0x1ded, 0x80160000}};
  float check = -1.41333323e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2079) {
  s21_decimal decimal = {{0x4, 0, 0, 0}};
  float check = 4.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2080) {
  s21_decimal decimal = {{0x4, 0, 0, 0x80000000}};
  float check = -4.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2081) {
  s21_decimal decimal = {{0x424, 0, 0, 0x20000}};
  float check = 1.06000004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2082) {
  s21_decimal decimal = {{0x424, 0, 0, 0x80020000}};
  float check = -1.06000004e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2083) {
  s21_decimal decimal = {{0xba7ad426, 0xacad120, 0x54b4, 0x170000}};
  float check = 3.99999976e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2084) {
  s21_decimal decimal = {{0xba7ad426, 0xacad120, 0x54b4, 0x80170000}};
  float check = -3.99999976e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2085) {
  s21_decimal decimal = {{0x9259b56, 0x2bf27ae1, 0x57ae5f, 0x190000}};
  float check = 1.05999994e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2086) {
  s21_decimal decimal = {{0x9259b56, 0x2bf27ae1, 0x57ae5f, 0x80190000}};
  float check = -1.05999994e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2087) {
  s21_decimal decimal = {{0x45d91537, 0x677aae83, 0x878, 0x160000}};
  float check = 3.99999976e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2088) {
  s21_decimal decimal = {{0x45d91537, 0x677aae83, 0x878, 0x80160000}};
  float check = -3.99999976e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2089) {
  s21_decimal decimal = {{0x4db6f5ef, 0x1dfea5e3, 0x8c4a3, 0x180000}};
  float check = 1.05999994e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2090) {
  s21_decimal decimal = {{0x4db6f5ef, 0x1dfea5e3, 0x8c4a3, 0x80180000}};
  float check = -1.05999994e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2091) {
  s21_decimal decimal = {{0xc2b22a6e, 0x6772361b, 0x878, 0x160000}};
  float check = 3.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2092) {
  s21_decimal decimal = {{0xc2b22a6e, 0x6772361b, 0x878, 0x80160000}};
  float check = -3.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2093) {
  s21_decimal decimal = {{0x8a6debde, 0x153a02bc, 0x8c4a3, 0x180000}};
  float check = 1.05999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2094) {
  s21_decimal decimal = {{0x8a6debde, 0x153a02bc, 0x8c4a3, 0x80180000}};
  float check = -1.05999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2095) {
  s21_decimal decimal = {{0x2d11d10b, 0xd7250569, 0xd8, 0x150000}};
  float check = 3.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2096) {
  s21_decimal decimal = {{0x2d11d10b, 0xd7250569, 0xd8, 0x80150000}};
  float check = -3.99999952e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2097) {
  s21_decimal decimal = {{0xa7716463, 0xb55299df, 0xe076, 0x170000}};
  float check = 1.05999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2098) {
  s21_decimal decimal = {{0xa7716463, 0xb55299df, 0xe076, 0x80170000}};
  float check = -1.05999985e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2099) {
  s21_decimal decimal = {{0x2b28f162, 0x928b2f6, 0x4696, 0x170000}};
  float check = 3.33333325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2100) {
  s21_decimal decimal = {{0x2b28f162, 0x928b2f6, 0x4696, 0x80170000}};
  float check = -3.33333325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2101) {
  s21_decimal decimal = {{0xad61de72, 0x7b2140d2, 0x49114f, 0x190000}};
  float check = 8.83333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2102) {
  s21_decimal decimal = {{0xad61de72, 0x7b2140d2, 0x49114f, 0x80190000}};
  float check = -8.83333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2103) {
  s21_decimal decimal = {{0xd11db1bd, 0xea784b, 0x70f, 0x160000}};
  float check = 3.33333325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2104) {
  s21_decimal decimal = {{0xd11db1bd, 0xea784b, 0x70f, 0x80160000}};
  float check = -3.33333325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2105) {
  s21_decimal decimal = {{0x77bcfca5, 0xf2b6867b, 0x74e87, 0x180000}};
  float check = 8.83333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2106) {
  s21_decimal decimal = {{0x77bcfca5, 0xf2b6867b, 0x74e87, 0x80180000}};
  float check = -8.83333302e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2107) {
  s21_decimal decimal = {{0x1e, 0, 0, 0x10000}};
  float check = 3.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2108) {
  s21_decimal decimal = {{0x1e, 0, 0, 0x80010000}};
  float check = -3.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2109) {
  s21_decimal decimal = {{0x1f0e, 0, 0, 0x30000}};
  float check = 7.94999981e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2110) {
  s21_decimal decimal = {{0x1f0e, 0, 0, 0x80030000}};
  float check = -7.94999981e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2111) {
  s21_decimal decimal = {{0x3, 0, 0, 0}};
  float check = 3.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2112) {
  s21_decimal decimal = {{0x3, 0, 0, 0x80000000}};
  float check = -3.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2113) {
  s21_decimal decimal = {{0x31b, 0, 0, 0x20000}};
  float check = 7.94999981e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2114) {
  s21_decimal decimal = {{0x31b, 0, 0, 0x80020000}};
  float check = -7.94999981e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2115) {
  s21_decimal decimal = {{0xd93b637a, 0x9a51c9ac, 0x5a5, 0x160000}};
  float check = 2.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2116) {
  s21_decimal decimal = {{0xd93b637a, 0x9a51c9ac, 0x5a5, 0x80160000}};
  float check = -2.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2117) {
  s21_decimal decimal = {{0xde79f94a, 0xbea9c3ec, 0x5d86c, 0x180000}};
  float check = 7.06666613e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2118) {
  s21_decimal decimal = {{0xde79f94a, 0xbea9c3ec, 0x5d86c, 0x80180000}};
  float check = -7.06666613e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2119) {
  s21_decimal decimal = {{0xe285f059, 0x8f6e942a, 0x90, 0x150000}};
  float check = 2.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2120) {
  s21_decimal decimal = {{0xe285f059, 0x8f6e942a, 0x90, 0x80150000}};
  float check = -2.66666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2121) {
  s21_decimal decimal = {{0x7ca5cc21, 0x79776064, 0x95a4, 0x170000}};
  float check = 7.06666613e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2122) {
  s21_decimal decimal = {{0x7ca5cc21, 0x79776064, 0x95a4, 0x80170000}};
  float check = -7.06666613e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2123) {
  s21_decimal decimal = {{0xc852bda, 0x5e476a1, 0x2a5a, 0x170000}};
  float check = 2.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2124) {
  s21_decimal decimal = {{0xc852bda, 0x5e476a1, 0x2a5a, 0x80170000}};
  float check = -2.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2125) {
  s21_decimal decimal = {{0xf5da64aa, 0x197eccb5, 0x2bd730, 0x190000}};
  float check = 5.30000067e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2126) {
  s21_decimal decimal = {{0xf5da64aa, 0x197eccb5, 0x2bd730, 0x80190000}};
  float check = -5.30000067e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2127) {
  s21_decimal decimal = {{0xe7a6eac9, 0x33ca0bdc, 0x43c, 0x160000}};
  float check = 2.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2128) {
  s21_decimal decimal = {{0xe7a6eac9, 0x33ca0bdc, 0x43c, 0x80160000}};
  float check = -2.00000024e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2129) {
  s21_decimal decimal = {{0xcbc90a11, 0x9c2647ab, 0x46251, 0x180000}};
  float check = 5.30000067e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2130) {
  s21_decimal decimal = {{0xcbc90a11, 0x9c2647ab, 0x46251, 0x80180000}};
  float check = -5.30000067e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2131) {
  s21_decimal decimal = {{0x2, 0, 0, 0}};
  float check = 2.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2132) {
  s21_decimal decimal = {{0x2, 0, 0, 0x80000000}};
  float check = -2.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2133) {
  s21_decimal decimal = {{0x212, 0, 0, 0x20000}};
  float check = 5.30000019e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2134) {
  s21_decimal decimal = {{0x212, 0, 0, 0x80020000}};
  float check = -5.30000019e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2135) {
  s21_decimal decimal = {{0x5d3d6a13, 0x5656890, 0x2a5a, 0x170000}};
  float check = 1.99999988e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2136) {
  s21_decimal decimal = {{0x5d3d6a13, 0x5656890, 0x2a5a, 0x80170000}};
  float check = -1.99999988e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2137) {
  s21_decimal decimal = {{0x8492cdab, 0x95f93d70, 0x2bd72f, 0x190000}};
  float check = 5.29999971e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2138) {
  s21_decimal decimal = {{0x8492cdab, 0x95f93d70, 0x2bd72f, 0x80190000}};
  float check = -5.29999971e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2139) {
  s21_decimal decimal = {{0x18295ed, 0x84562bf6, 0x1fc3, 0x170000}};
  float check = 1.50000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2140) {
  s21_decimal decimal = {{0x18295ed, 0x84562bf6, 0x1fc3, 0x80170000}};
  float check = -1.50000012e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2141) {
  s21_decimal decimal = {{0x902d3255, 0xfd3381a7, 0x20e163, 0x190000}};
  float check = 3.97500038e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2142) {
  s21_decimal decimal = {{0x902d3255, 0xfd3381a7, 0x20e163, 0x80190000}};
  float check = -3.97500038e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2143) {
  s21_decimal decimal = {{0xf, 0, 0, 0x10000}};
  float check = 1.50000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2144) {
  s21_decimal decimal = {{0xf, 0, 0, 0x80010000}};
  float check = -1.50000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2145) {
  s21_decimal decimal = {{0xf87, 0, 0, 0x30000}};
  float check = 3.97499990e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2146) {
  s21_decimal decimal = {{0xf87, 0, 0, 0x80030000}};
  float check = -3.97499990e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2147) {
  s21_decimal decimal = {{0xe1fd6a13, 0x840177ea, 0x1fc3, 0x170000}};
  float check = 1.49999988e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2148) {
  s21_decimal decimal = {{0xe1fd6a13, 0x840177ea, 0x1fc3, 0x80170000}};
  float check = -1.49999988e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2149) {
  s21_decimal decimal = {{0xef52cdab, 0xa5852223, 0x20e163, 0x190000}};
  float check = 3.97499967e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2150) {
  s21_decimal decimal = {{0xef52cdab, 0xa5852223, 0x20e163, 0x80190000}};
  float check = -3.97499967e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2151) {
  s21_decimal decimal = {{0x1, 0, 0, 0}};
  float check = 1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2152) {
  s21_decimal decimal = {{0x1, 0, 0, 0x80000000}};
  float check = -1.00000000e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2153) {
  s21_decimal decimal = {{0x109, 0, 0, 0x20000}};
  float check = 2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2154) {
  s21_decimal decimal = {{0x109, 0, 0, 0x80020000}};
  float check = -2.65000010e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2155) {
  s21_decimal decimal = {{0x3d09, 0, 0, 0x50000}};
  float check = 1.56250000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2156) {
  s21_decimal decimal = {{0x3d09, 0, 0, 0x80050000}};
  float check = -1.56250000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2157) {
  s21_decimal decimal = {{0x3f2e51, 0, 0, 0x70000}};
  float check = 4.14062500e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2158) {
  s21_decimal decimal = {{0x3f2e51, 0, 0, 0x80070000}};
  float check = -4.14062500e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2159) {
  s21_decimal decimal = {{0xd233125f, 0x1afb0ad1, 0xd3c2, 0x180000}};
  float check = 9.99999940e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2160) {
  s21_decimal decimal = {{0xd233125f, 0x1afb0ad1, 0xd3c2, 0x80180000}};
  float check = -9.99999940e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2161) {
  s21_decimal decimal = {{0x96de0457, 0xedde3332, 0xdb33ed, 0x1a0000}};
  float check = 2.64999986e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2162) {
  s21_decimal decimal = {{0x96de0457, 0xedde3332, 0xdb33ed, 0x801a0000}};
  float check = -2.64999986e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2163) {
  s21_decimal decimal = {{0x86fccb47, 0xa2840e7d, 0x14adf4, 0x1a0000}};
  float check = 2.49999985e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2164) {
  s21_decimal decimal = {{0x86fccb47, 0xa2840e7d, 0x14adf4, 0x801a0000}};
  float check = -2.49999985e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2165) {
  s21_decimal decimal = {{0xbbae6c7f, 0x3ab2fff0, 0x1568123c, 0x1c0000}};
  float check = 6.62499964e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2166) {
  s21_decimal decimal = {{0xbbae6c7f, 0x3ab2fff0, 0x1568123c, 0x801c0000}};
  float check = -6.62499964e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2167) {
  s21_decimal decimal = {{0x8babf67c, 0xf7b95a90, 0x813f38, 0x1c0000}};
  float check = 1.56249991e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2168) {
  s21_decimal decimal = {{0x8babf67c, 0xf7b95a90, 0x813f38, 0x801c0000}};
  float check = -1.56249991e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2169) {
  s21_decimal decimal = {{0xbbae6c9, 0xc3ab2fff, 0x1568123, 0x1c0000}};
  float check = 4.14062478e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2170) {
  s21_decimal decimal = {{0xbbae6c9, 0xc3ab2fff, 0x1568123, 0x801c0000}};
  float check = -4.14062478e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2171) {
  s21_decimal decimal = {{0x908babf6, 0x38f7b95a, 0x813f, 0x1c0000}};
  float check = 6.10351526e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2172) {
  s21_decimal decimal = {{0x908babf6, 0x38f7b95a, 0x813f, 0x801c0000}};
  float check = -6.10351526e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2173) {
  s21_decimal decimal = {{0xff0bbae6, 0x23c3ab2f, 0x15681, 0x1c0000}};
  float check = 1.61743155e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2174) {
  s21_decimal decimal = {{0xff0bbae6, 0x23c3ab2f, 0x15681, 0x801c0000}};
  float check = -1.61743155e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2175) {
  s21_decimal decimal = {{0xe745dff, 0xb8e59289, 0xcec, 0x1b0000}};
  float check = 6.10351526e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2176) {
  s21_decimal decimal = {{0xe745dff, 0xb8e59289, 0xcec, 0x801b0000}};
  float check = -6.10351526e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2177) {
  s21_decimal decimal = {{0xff0bbae6, 0x23c3ab2f, 0x15681, 0x1c0000}};
  float check = 1.61743155e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2178) {
  s21_decimal decimal = {{0xff0bbae6, 0x23c3ab2f, 0x15681, 0x801c0000}};
  float check = -1.61743155e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2179) {
  s21_decimal decimal = {{0xb95a908c, 0x813f38f7, 0, 0x1c0000}};
  float check = 9.31322519e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2180) {
  s21_decimal decimal = {{0xb95a908c, 0x813f38f7, 0, 0x801c0000}};
  float check = -9.31322519e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2181) {
  s21_decimal decimal = {{0xab2fff0d, 0x568123c3, 0x1, 0x1c0000}};
  float check = 2.46800469e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2182) {
  s21_decimal decimal = {{0xab2fff0d, 0x568123c3, 0x1, 0x801c0000}};
  float check = -2.46800469e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2183) {
  s21_decimal decimal = {{0x813f38f8, 0, 0, 0x1c0000}};
  float check = 2.16840422e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2184) {
  s21_decimal decimal = {{0x813f38f8, 0, 0, 0x801c0000}};
  float check = -2.16840422e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2185) {
  s21_decimal decimal = {{0x568123c4, 0x1, 0, 0x1c0000}};
  float check = 5.74627120e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2186) {
  s21_decimal decimal = {{0x568123c4, 0x1, 0, 0x801c0000}};
  float check = -5.74627120e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2187) {
  s21_decimal decimal = {{0x409f9c7c, 0, 0, 0x1c0000}};
  float check = 1.08420211e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2188) {
  s21_decimal decimal = {{0x409f9c7c, 0, 0, 0x801c0000}};
  float check = -1.08420211e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2189) {
  s21_decimal decimal = {{0xab4091e2, 0, 0, 0x1c0000}};
  float check = 2.87313560e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2190) {
  s21_decimal decimal = {{0xab4091e2, 0, 0, 0x801c0000}};
  float check = -2.87313560e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2191) {
  s21_decimal decimal = {{0x204fce3e, 0, 0, 0x1c0000}};
  float check = 5.42101054e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2192) {
  s21_decimal decimal = {{0x204fce3e, 0, 0, 0x801c0000}};
  float check = -5.42101054e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2193) {
  s21_decimal decimal = {{0x55a048f1, 0, 0, 0x1c0000}};
  float check = 1.43656780e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2194) {
  s21_decimal decimal = {{0x55a048f1, 0, 0, 0x801c0000}};
  float check = -1.43656780e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2195) {
  s21_decimal decimal = {{0x813f38f, 0, 0, 0x1c0000}};
  float check = 1.35525263e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2196) {
  s21_decimal decimal = {{0x813f38f, 0, 0, 0x801c0000}};
  float check = -1.35525263e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2197) {
  s21_decimal decimal = {{0x1568123b, 0, 0, 0x1c0000}};
  float check = 3.59141950e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2198) {
  s21_decimal decimal = {{0x1568123b, 0, 0, 0x801c0000}};
  float check = -3.59141950e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2199) {
  s21_decimal decimal = {{0x813f39, 0, 0, 0x1c0000}};
  float check = 8.47032897e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2200) {
  s21_decimal decimal = {{0x813f39, 0, 0, 0x801c0000}};
  float check = -8.47032897e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2201) {
  s21_decimal decimal = {{0x1568124, 0, 0, 0x1c0000}};
  float check = 2.24463719e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2202) {
  s21_decimal decimal = {{0x1568124, 0, 0, 0x801c0000}};
  float check = -2.24463719e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2203) {
  s21_decimal decimal = {{0x813f, 0, 0, 0x1c0000}};
  float check = 3.30869997e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2204) {
  s21_decimal decimal = {{0x813f, 0, 0, 0x801c0000}};
  float check = -3.30869997e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2205) {
  s21_decimal decimal = {{0x15681, 0, 0, 0x1c0000}};
  float check = 8.76809982e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2206) {
  s21_decimal decimal = {{0x15681, 0, 0, 0x801c0000}};
  float check = -8.76809982e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2207) {
  s21_decimal decimal = {{0x1, 0, 0, 0x1c0000}};
  float check = 1.00000000e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2208) {
  s21_decimal decimal = {{0x1, 0, 0, 0x801c0000}};
  float check = -1.00000000e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2209) {
  s21_decimal decimal = {{0x3, 0, 0, 0x1c0000}};
  float check = 2.99999989e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2210) {
  s21_decimal decimal = {{0x3, 0, 0, 0x801c0000}};
  float check = -2.99999989e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2211) {
  s21_decimal decimal = {{0x4, 0, 0, 0x1c0000}};
  float check = 4.00000001e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2212) {
  s21_decimal decimal = {{0x4, 0, 0, 0x801c0000}};
  float check = -4.00000001e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2213) {
  s21_decimal decimal = {{0xb, 0, 0, 0x1c0000}};
  float check = 1.09999999e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2214) {
  s21_decimal decimal = {{0xb, 0, 0, 0x801c0000}};
  float check = -1.09999999e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2215) {
  s21_decimal decimal = {{0x41, 0, 0, 0x1c0000}};
  float check = 6.49999970e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2216) {
  s21_decimal decimal = {{0x41, 0, 0, 0x801c0000}};
  float check = -6.49999970e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2217) {
  s21_decimal decimal = {{0xac, 0, 0, 0x1c0000}};
  float check = 1.71999996e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2218) {
  s21_decimal decimal = {{0xac, 0, 0, 0x801c0000}};
  float check = -1.71999996e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2219) {
  s21_decimal decimal = {{0x40a0, 0, 0, 0x1c0000}};
  float check = 1.65440008e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2220) {
  s21_decimal decimal = {{0x40a0, 0, 0, 0x801c0000}};
  float check = -1.65440008e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2221) {
  s21_decimal decimal = {{0xab42, 0, 0, 0x1c0000}};
  float check = 4.38420019e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2222) {
  s21_decimal decimal = {{0xab42, 0, 0, 0x801c0000}};
  float check = -4.38420019e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2223) {
  s21_decimal decimal = {{0x6c9db1bd, 0xcd28e4d6, 0x2d2, 0x160000}};
  float check = 1.33333325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2224) {
  s21_decimal decimal = {{0x6c9db1bd, 0xcd28e4d6, 0x2d2, 0x80160000}};
  float check = -1.33333325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2225) {
  s21_decimal decimal = {{0x6f3cfca5, 0x5f54e1f6, 0x2ec36, 0x180000}};
  float check = 3.53333306e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2226) {
  s21_decimal decimal = {{0x6f3cfca5, 0x5f54e1f6, 0x2ec36, 0x80180000}};
  float check = -3.53333306e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2227) {
  s21_decimal decimal = {{0x1f1478b1, 0x1cc7830, 0xe1e, 0x170000}};
  float check = 6.66666627e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2228) {
  s21_decimal decimal = {{0x1f1478b1, 0x1cc7830, 0xe1e, 0x80170000}};
  float check = -6.66666627e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2229) {
  s21_decimal decimal = {{0x2c30ef39, 0xdca869d0, 0xe9d0f, 0x190000}};
  float check = 1.76666653e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2230) {
  s21_decimal decimal = {{0x2c30ef39, 0xdca869d0, 0xe9d0f, 0x80190000}};
  float check = -1.76666653e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2231) {
  s21_decimal decimal = {{0x8ffc949, 0x2cf7bcb3, 0x160ee, 0x190000}};
  float check = 1.66666657e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2232) {
  s21_decimal decimal = {{0x8ffc949, 0x2cf7bcb3, 0x160ee, 0x80190000}};
  float check = -1.66666657e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2233) {
  s21_decimal decimal = {{0x50c75c91, 0x8c725554, 0x16d568c, 0x1b0000}};
  float check = 4.41666633e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2234) {
  s21_decimal decimal = {{0x50c75c91, 0x8c725554, 0x16d568c, 0x801b0000}};
  float check = -4.41666633e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2235) {
  s21_decimal decimal = {{0xb272a452, 0xfa7b91b5, 0x562a25, 0x1c0000}};
  float check = 1.04166660e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2236) {
  s21_decimal decimal = {{0xb272a452, 0xfa7b91b5, 0x562a25, 0x801c0000}};
  float check = -1.04166660e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2237) {
  s21_decimal decimal = {{0xb27c99d9, 0xd7c77554, 0xe45617, 0x1c0000}};
  float check = 2.76041646e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2238) {
  s21_decimal decimal = {{0xb27c99d9, 0xd7c77554, 0xe45617, 0x801c0000}};
  float check = -2.76041646e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2239) {
  s21_decimal decimal = {{0xb5b272a4, 0x25fa7b91, 0x562a, 0x1c0000}};
  float check = 4.06901017e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2240) {
  s21_decimal decimal = {{0xb5b272a4, 0x25fa7b91, 0x562a, 0x801c0000}};
  float check = -4.06901017e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2241) {
  s21_decimal decimal = {{0x54b27c99, 0x17d7c775, 0xe456, 0x1c0000}};
  float check = 1.07828768e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2242) {
  s21_decimal decimal = {{0x54b27c99, 0x17d7c775, 0xe456, 0x801c0000}};
  float check = -1.07828768e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2243) {
  s21_decimal decimal = {{0x5ef83eaa, 0xd0990c5b, 0x89d, 0x1b0000}};
  float check = 4.06901017e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2244) {
  s21_decimal decimal = {{0x5ef83eaa, 0xd0990c5b, 0x89d, 0x801b0000}};
  float check = -4.06901017e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2245) {
  s21_decimal decimal = {{0x54b27c99, 0x17d7c775, 0xe456, 0x1c0000}};
  float check = 1.07828768e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2246) {
  s21_decimal decimal = {{0x54b27c99, 0x17d7c775, 0xe456, 0x801c0000}};
  float check = -1.07828768e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2247) {
  s21_decimal decimal = {{0x7b91b5b2, 0x562a25fa, 0, 0x1c0000}};
  float check = 6.20881679e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2248) {
  s21_decimal decimal = {{0x7b91b5b2, 0x562a25fa, 0, 0x801c0000}};
  float check = -6.20881679e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2249) {
  s21_decimal decimal = {{0xc77554b1, 0xe45617d7, 0, 0x1c0000}};
  float check = 1.64533642e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2250) {
  s21_decimal decimal = {{0xc77554b1, 0xe45617d7, 0, 0x801c0000}};
  float check = -1.64533642e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2251) {
  s21_decimal decimal = {{0x9ee46d6d, 0x158a897e, 0, 0x1c0000}};
  float check = 1.55220420e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2252) {
  s21_decimal decimal = {{0x9ee46d6d, 0x158a897e, 0, 0x801c0000}};
  float check = -1.55220420e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2253) {
  s21_decimal decimal = {{0xf1dd552e, 0x391585f5, 0, 0x1c0000}};
  float check = 4.11334106e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2254) {
  s21_decimal decimal = {{0xf1dd552e, 0x391585f5, 0, 0x801c0000}};
  float check = -4.11334106e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2255) {
  s21_decimal decimal = {{0xa7b91b5b, 0x562a25f, 0, 0x1c0000}};
  float check = 3.88051050e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2256) {
  s21_decimal decimal = {{0xa7b91b5b, 0x562a25f, 0, 0x801c0000}};
  float check = -3.88051050e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2257) {
  s21_decimal decimal = {{0x7c77554b, 0xe45617d, 0, 0x1c0000}};
  float check = 1.02833526e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2258) {
  s21_decimal decimal = {{0x7c77554b, 0xe45617d, 0, 0x801c0000}};
  float check = -1.02833526e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2259) {
  s21_decimal decimal = {{0xfa7b91b6, 0x562a25, 0, 0x1c0000}};
  float check = 2.42531906e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2260) {
  s21_decimal decimal = {{0xfa7b91b6, 0x562a25, 0, 0x801c0000}};
  float check = -2.42531906e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2261) {
  s21_decimal decimal = {{0xd7c77556, 0xe45617, 0, 0x1c0000}};
  float check = 6.42709540e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2262) {
  s21_decimal decimal = {{0xd7c77556, 0xe45617, 0, 0x801c0000}};
  float check = -6.42709540e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2263) {
  s21_decimal decimal = {{0x990c5b5f, 0x89dd0, 0, 0x1b0000}};
  float check = 2.42531906e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2264) {
  s21_decimal decimal = {{0x990c5b5f, 0x89dd0, 0, 0x801b0000}};
  float check = -2.42531906e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2265) {
  s21_decimal decimal = {{0xd7c77556, 0xe45617, 0, 0x1c0000}};
  float check = 6.42709540e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2266) {
  s21_decimal decimal = {{0xd7c77556, 0xe45617, 0, 0x801c0000}};
  float check = -6.42709540e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2267) {
  s21_decimal decimal = {{0x25fa7b92, 0x562a, 0, 0x1c0000}};
  float check = 9.47390258e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2268) {
  s21_decimal decimal = {{0x25fa7b92, 0x562a, 0, 0x801c0000}};
  float check = -9.47390258e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2269) {
  s21_decimal decimal = {{0x17d7c776, 0xe456, 0, 0x1c0000}};
  float check = 2.51058414e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2270) {
  s21_decimal decimal = {{0x17d7c776, 0xe456, 0, 0x801c0000}};
  float check = -2.51058414e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2271) {
  s21_decimal decimal = {{0x12fd3dc9, 0x2b15, 0, 0x1c0000}};
  float check = 4.73695129e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2272) {
  s21_decimal decimal = {{0x12fd3dc9, 0x2b15, 0, 0x801c0000}};
  float check = -4.73695129e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2273) {
  s21_decimal decimal = {{0xbebe3bb, 0x722b, 0, 0x1c0000}};
  float check = 1.25529207e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2274) {
  s21_decimal decimal = {{0xbebe3bb, 0x722b, 0, 0x801c0000}};
  float check = -1.25529207e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2275) {
  s21_decimal decimal = {{0x1512fd3e, 0x2b, 0, 0x1c0000}};
  float check = 1.85037160e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2276) {
  s21_decimal decimal = {{0x1512fd3e, 0x2b, 0, 0x801c0000}};
  float check = -1.85037160e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2277) {
  s21_decimal decimal = {{0x2b0bebe4, 0x72, 0, 0x1c0000}};
  float check = 4.90348465e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2278) {
  s21_decimal decimal = {{0x2b0bebe4, 0x72, 0, 0x801c0000}};
  float check = -4.90348465e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2279) {
  s21_decimal decimal = {{0xb1512fd4, 0x2, 0, 0x1c0000}};
  float check = 1.15648225e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2280) {
  s21_decimal decimal = {{0xb1512fd4, 0x2, 0, 0x801c0000}};
  float check = -1.15648225e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2281) {
  s21_decimal decimal = {{0x22b0bebf, 0x7, 0, 0x1c0000}};
  float check = 3.06467791e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2282) {
  s21_decimal decimal = {{0x22b0bebf, 0x7, 0, 0x801c0000}};
  float check = -3.06467791e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2283) {
  s21_decimal decimal = {{0x562a25fa, 0, 0, 0x1c0000}};
  float check = 1.44560281e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2284) {
  s21_decimal decimal = {{0x562a25fa, 0, 0, 0x801c0000}};
  float check = -1.44560281e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2285) {
  s21_decimal decimal = {{0xe45617d6, 0, 0, 0x1c0000}};
  float check = 3.83084738e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2286) {
  s21_decimal decimal = {{0xe45617d6, 0, 0, 0x801c0000}};
  float check = -3.83084738e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2287) {
  s21_decimal decimal = {{0x89dd099, 0, 0, 0x1b0000}};
  float check = 1.44560281e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2288) {
  s21_decimal decimal = {{0x89dd099, 0, 0, 0x801b0000}};
  float check = -1.44560281e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2289) {
  s21_decimal decimal = {{0xe45617d6, 0, 0, 0x1c0000}};
  float check = 3.83084738e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2290) {
  s21_decimal decimal = {{0xe45617d6, 0, 0, 0x801c0000}};
  float check = -3.83084738e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2291) {
  s21_decimal decimal = {{0x2b1512fd, 0, 0, 0x1c0000}};
  float check = 7.22801405e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2292) {
  s21_decimal decimal = {{0x2b1512fd, 0, 0, 0x801c0000}};
  float check = -7.22801405e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2293) {
  s21_decimal decimal = {{0x722b0beb, 0, 0, 0x1c0000}};
  float check = 1.91542369e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2294) {
  s21_decimal decimal = {{0x722b0beb, 0, 0, 0x801c0000}};
  float check = -1.91542369e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2295) {
  s21_decimal decimal = {{0x158a897f, 0, 0, 0x1c0000}};
  float check = 3.61400703e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2296) {
  s21_decimal decimal = {{0x158a897f, 0, 0, 0x801c0000}};
  float check = -3.61400703e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2297) {
  s21_decimal decimal = {{0x391585f7, 0, 0, 0x1c0000}};
  float check = 9.57711846e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2298) {
  s21_decimal decimal = {{0x391585f7, 0, 0, 0x801c0000}};
  float check = -9.57711846e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2299) {
  s21_decimal decimal = {{0x562a260, 0, 0, 0x1c0000}};
  float check = 9.03501757e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2300) {
  s21_decimal decimal = {{0x562a260, 0, 0, 0x801c0000}};
  float check = -9.03501757e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2301) {
  s21_decimal decimal = {{0xe45617e, 0, 0, 0x1c0000}};
  float check = 2.39427961e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2302) {
  s21_decimal decimal = {{0xe45617e, 0, 0, 0x801c0000}};
  float check = -2.39427961e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2303) {
  s21_decimal decimal = {{0x562a26, 0, 0, 0x1c0000}};
  float check = 5.64688598e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2304) {
  s21_decimal decimal = {{0x562a26, 0, 0, 0x801c0000}};
  float check = -5.64688598e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2305) {
  s21_decimal decimal = {{0xe45618, 0, 0, 0x1c0000}};
  float check = 1.49642476e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2306) {
  s21_decimal decimal = {{0xe45618, 0, 0, 0x801c0000}};
  float check = -1.49642476e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2307) {
  s21_decimal decimal = {{0x562a, 0, 0, 0x1c0000}};
  float check = 2.20580004e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2308) {
  s21_decimal decimal = {{0x562a, 0, 0, 0x801c0000}};
  float check = -2.20580004e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2309) {
  s21_decimal decimal = {{0xe456, 0, 0, 0x1c0000}};
  float check = 5.84540014e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2310) {
  s21_decimal decimal = {{0xe456, 0, 0, 0x801c0000}};
  float check = -5.84540014e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2311) {
  s21_decimal decimal = {{0x158b, 0, 0, 0x1c0000}};
  float check = 5.51500005e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2312) {
  s21_decimal decimal = {{0x158b, 0, 0, 0x801c0000}};
  float check = -5.51500005e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2313) {
  s21_decimal decimal = {{0x3917, 0, 0, 0x1c0000}};
  float check = 1.46150002e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2314) {
  s21_decimal decimal = {{0x3917, 0, 0, 0x801c0000}};
  float check = -1.46150002e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2315) {
  s21_decimal decimal = {{0xac, 0, 0, 0x1c0000}};
  float check = 1.71999996e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2316) {
  s21_decimal decimal = {{0xac, 0, 0, 0x801c0000}};
  float check = -1.71999996e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2317) {
  s21_decimal decimal = {{0x1c8, 0, 0, 0x1c0000}};
  float check = 4.55999999e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2318) {
  s21_decimal decimal = {{0x1c8, 0, 0, 0x801c0000}};
  float check = -4.55999999e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2319) {
  s21_decimal decimal = {{0x2b, 0, 0, 0x1c0000}};
  float check = 4.29999991e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2320) {
  s21_decimal decimal = {{0x2b, 0, 0, 0x801c0000}};
  float check = -4.29999991e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2321) {
  s21_decimal decimal = {{0x72, 0, 0, 0x1c0000}};
  float check = 1.14000000e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2322) {
  s21_decimal decimal = {{0x72, 0, 0, 0x801c0000}};
  float check = -1.14000000e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2323) {
  s21_decimal decimal = {{0x3, 0, 0, 0x1c0000}};
  float check = 2.99999989e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2324) {
  s21_decimal decimal = {{0x3, 0, 0, 0x801c0000}};
  float check = -2.99999989e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2325) {
  s21_decimal decimal = {{0x8, 0, 0, 0x1c0000}};
  float check = 8.00000003e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2326) {
  s21_decimal decimal = {{0x8, 0, 0, 0x801c0000}};
  float check = -8.00000003e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2327) {
  s21_decimal decimal = {{0x159478b1, 0x494597b, 0x234b, 0x170000}};
  float check = 1.66666663e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2328) {
  s21_decimal decimal = {{0x159478b1, 0x494597b, 0x234b, 0x80170000}};
  float check = -1.66666663e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2329) {
  s21_decimal decimal = {{0x56b0ef39, 0xbd90a069, 0x2488a7, 0x190000}};
  float check = 4.41666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2330) {
  s21_decimal decimal = {{0x56b0ef39, 0xbd90a069, 0x2488a7, 0x80190000}};
  float check = -4.41666651e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2331) {
  s21_decimal decimal = {{0x6be65b75, 0x16e5bf67, 0xb077, 0x180000}};
  float check = 8.33333313e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2332) {
  s21_decimal decimal = {{0x6be65b75, 0x16e5bf67, 0xb077, 0x80180000}};
  float check = -8.33333313e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2333) {
  s21_decimal decimal = {{0xb174ac1d, 0xb3d3220e, 0xb6ab46, 0x1a0000}};
  float check = 2.20833325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2334) {
  s21_decimal decimal = {{0xb174ac1d, 0xb3d3220e, 0xb6ab46, 0x801a0000}};
  float check = -2.20833325e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2335) {
  s21_decimal decimal = {{0x897eee6d, 0x3c6fb119, 0x113ba1, 0x1a0000}};
  float check = 2.08333328e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2336) {
  s21_decimal decimal = {{0x897eee6d, 0x3c6fb119, 0x113ba1, 0x801a0000}};
  float check = -2.08333328e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2337) {
  s21_decimal decimal = {{0x5464ced5, 0x8f9e536f, 0x11d6b9e7, 0x1c0000}};
  float check = 5.52083313e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2338) {
  s21_decimal decimal = {{0x5464ced5, 0x8f9e536f, 0x11d6b9e7, 0x801c0000}};
  float check = -5.52083313e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2339) {
  s21_decimal decimal = {{0x9b595229, 0xb9ba12df, 0x6bb4af, 0x1c0000}};
  float check = 1.30208330e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2340) {
  s21_decimal decimal = {{0x9b595229, 0xb9ba12df, 0x6bb4af, 0x801c0000}};
  float check = -1.30208330e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2341) {
  s21_decimal decimal = {{0xf5464ced, 0x78f9e536, 0x11d6b9e, 0x1c0000}};
  float check = 3.45052071e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2342) {
  s21_decimal decimal = {{0xf5464ced, 0x78f9e536, 0x11d6b9e, 0x801c0000}};
  float check = -3.45052071e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2343) {
  s21_decimal decimal = {{0xdf9b5952, 0xafb9ba12, 0x6bb4, 0x1c0000}};
  float check = 5.08626290e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2344) {
  s21_decimal decimal = {{0xdf9b5952, 0xafb9ba12, 0x6bb4, 0x801c0000}};
  float check = -5.08626290e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2345) {
  s21_decimal decimal = {{0x36f5464c, 0x9e78f9e5, 0x11d6b, 0x1c0000}};
  float check = 1.34785965e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2346) {
  s21_decimal decimal = {{0x36f5464c, 0x9e78f9e5, 0x11d6b, 0x801c0000}};
  float check = -1.34785965e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2347) {
  s21_decimal decimal = {{0xaff5ef55, 0x44c5c5ce, 0xac5, 0x1b0000}};
  float check = 5.08626290e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2348) {
  s21_decimal decimal = {{0xaff5ef55, 0x44c5c5ce, 0xac5, 0x801b0000}};
  float check = -5.08626290e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2349) {
  s21_decimal decimal = {{0x36f5464c, 0x9e78f9e5, 0x11d6b, 0x1c0000}};
  float check = 1.34785965e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2350) {
  s21_decimal decimal = {{0x36f5464c, 0x9e78f9e5, 0x11d6b, 0x801c0000}};
  float check = -1.34785965e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2351) {
  s21_decimal decimal = {{0xba12df9b, 0x6bb4afb9, 0, 0x1c0000}};
  float check = 7.76102127e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2352) {
  s21_decimal decimal = {{0xba12df9b, 0x6bb4afb9, 0, 0x801c0000}};
  float check = -7.76102127e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2353) {
  s21_decimal decimal = {{0xf9e536f4, 0x1d6b9e78, 0x1, 0x1c0000}};
  float check = 2.05667061e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2354) {
  s21_decimal decimal = {{0xf9e536f4, 0x1d6b9e78, 0x1, 0x801c0000}};
  float check = -2.05667061e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2355) {
  s21_decimal decimal = {{0x6e84b7e7, 0x1aed2bee, 0, 0x1c0000}};
  float check = 1.94025532e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2356) {
  s21_decimal decimal = {{0x6e84b7e7, 0x1aed2bee, 0, 0x801c0000}};
  float check = -1.94025532e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2357) {
  s21_decimal decimal = {{0x3e794dbe, 0x475ae79e, 0, 0x1c0000}};
  float check = 5.14167653e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2358) {
  s21_decimal decimal = {{0x3e794dbe, 0x475ae79e, 0, 0x801c0000}};
  float check = -5.14167653e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2359) {
  s21_decimal decimal = {{0x9ba12dfa, 0x6bb4afb, 0, 0x1c0000}};
  float check = 4.85063829e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2360) {
  s21_decimal decimal = {{0x9ba12dfa, 0x6bb4afb, 0, 0x801c0000}};
  float check = -4.85063829e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2361) {
  s21_decimal decimal = {{0x8f9e5370, 0x11d6b9e7, 0, 0x1c0000}};
  float check = 1.28541913e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2362) {
  s21_decimal decimal = {{0x8f9e5370, 0x11d6b9e7, 0, 0x801c0000}};
  float check = -1.28541913e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2363) {
  s21_decimal decimal = {{0xb9ba12e0, 0x6bb4af, 0, 0x1c0000}};
  float check = 3.03164893e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2364) {
  s21_decimal decimal = {{0xb9ba12e0, 0x6bb4af, 0, 0x801c0000}};
  float check = -3.03164893e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2365) {
  s21_decimal decimal = {{0x78f9e538, 0x11d6b9e, 0, 0x1c0000}};
  float check = 8.03386958e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2366) {
  s21_decimal decimal = {{0x78f9e538, 0x11d6b9e, 0, 0x801c0000}};
  float check = -8.03386958e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2367) {
  s21_decimal decimal = {{0xc5c5ceb0, 0xac544, 0, 0x1b0000}};
  float check = 3.03164893e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2368) {
  s21_decimal decimal = {{0xc5c5ceb0, 0xac544, 0, 0x801b0000}};
  float check = -3.03164893e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2369) {
  s21_decimal decimal = {{0x78f9e538, 0x11d6b9e, 0, 0x1c0000}};
  float check = 8.03386958e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2370) {
  s21_decimal decimal = {{0x78f9e538, 0x11d6b9e, 0, 0x801c0000}};
  float check = -8.03386958e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2371) {
  s21_decimal decimal = {{0xafb9ba13, 0x6bb4, 0, 0x1c0000}};
  float check = 1.18423786e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2372) {
  s21_decimal decimal = {{0xafb9ba13, 0x6bb4, 0, 0x801c0000}};
  float check = -1.18423786e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2373) {
  s21_decimal decimal = {{0x9e78f9e6, 0x11d6b, 0, 0x1c0000}};
  float check = 3.13823030e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2374) {
  s21_decimal decimal = {{0x9e78f9e6, 0x11d6b, 0, 0x801c0000}};
  float check = -3.13823030e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2375) {
  s21_decimal decimal = {{0x57dcdd09, 0x35da, 0, 0x1c0000}};
  float check = 5.92118932e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2376) {
  s21_decimal decimal = {{0x57dcdd09, 0x35da, 0, 0x801c0000}};
  float check = -5.92118932e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2377) {
  s21_decimal decimal = {{0xcf3c7cf1, 0x8eb5, 0, 0x1c0000}};
  float check = 1.56911515e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2378) {
  s21_decimal decimal = {{0xcf3c7cf1, 0x8eb5, 0, 0x801c0000}};
  float check = -1.56911515e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2379) {
  s21_decimal decimal = {{0x4afb9ba1, 0x6bb, 0, 0x1c0000}};
  float check = 7.40148665e-16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2380) {
  s21_decimal decimal = {{0x4afb9ba1, 0x6bb, 0, 0x801c0000}};
  float check = -7.40148665e-16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2381) {
  s21_decimal decimal = {{0xb9e78f9e, 0x11d6, 0, 0x1c0000}};
  float check = 1.96139394e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2382) {
  s21_decimal decimal = {{0xb9e78f9e, 0x11d6, 0, 0x801c0000}};
  float check = -1.96139394e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2383) {
  s21_decimal decimal = {{0xda57dcdd, 0x35, 0, 0x1c0000}};
  float check = 2.31296458e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2384) {
  s21_decimal decimal = {{0xda57dcdd, 0x35, 0, 0x801c0000}};
  float check = -2.31296458e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2385) {
  s21_decimal decimal = {{0xb5cf3c7d, 0x8e, 0, 0x1c0000}};
  float check = 6.12935606e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2386) {
  s21_decimal decimal = {{0xb5cf3c7d, 0x8e, 0, 0x801c0000}};
  float check = -6.12935606e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2387) {
  s21_decimal decimal = {{0x5da57dce, 0x3, 0, 0x1c0000}};
  float check = 1.44560286e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2388) {
  s21_decimal decimal = {{0x5da57dce, 0x3, 0, 0x801c0000}};
  float check = -1.44560286e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2389) {
  s21_decimal decimal = {{0xeb5cf3c8, 0x8, 0, 0x1c0000}};
  float check = 3.83084754e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2390) {
  s21_decimal decimal = {{0xeb5cf3c8, 0x8, 0, 0x801c0000}};
  float check = -3.83084754e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2391) {
  s21_decimal decimal = {{0xd7695f73, 0, 0, 0x1c0000}};
  float check = 3.61400716e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2392) {
  s21_decimal decimal = {{0xd7695f73, 0, 0, 0x801c0000}};
  float check = -3.61400716e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2393) {
  s21_decimal decimal = {{0x3ad73cf1, 0x2, 0, 0x1c0000}};
  float check = 9.57711885e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2394) {
  s21_decimal decimal = {{0x3ad73cf1, 0x2, 0, 0x801c0000}};
  float check = -9.57711885e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2395) {
  s21_decimal decimal = {{0x6bb4afba, 0, 0, 0x1c0000}};
  float check = 1.80700358e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2396) {
  s21_decimal decimal = {{0x6bb4afba, 0, 0, 0x801c0000}};
  float check = -1.80700358e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2397) {
  s21_decimal decimal = {{0x1d6b9e7a, 0x1, 0, 0x1c0000}};
  float check = 4.78855942e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2398) {
  s21_decimal decimal = {{0x1d6b9e7a, 0x1, 0, 0x801c0000}};
  float check = -4.78855942e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2399) {
  s21_decimal decimal = {{0x35da57dd, 0, 0, 0x1c0000}};
  float check = 9.03501789e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2400) {
  s21_decimal decimal = {{0x35da57dd, 0, 0, 0x801c0000}};
  float check = -9.03501789e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2401) {
  s21_decimal decimal = {{0x8eb5cf3d, 0, 0, 0x1c0000}};
  float check = 2.39427971e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2402) {
  s21_decimal decimal = {{0x8eb5cf3d, 0, 0, 0x801c0000}};
  float check = -2.39427971e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2403) {
  s21_decimal decimal = {{0x1aed2bee, 0, 0, 0x1c0000}};
  float check = 4.51750894e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2404) {
  s21_decimal decimal = {{0x1aed2bee, 0, 0, 0x801c0000}};
  float check = -4.51750894e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2405) {
  s21_decimal decimal = {{0x475ae79d, 0, 0, 0x1c0000}};
  float check = 1.19713986e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2406) {
  s21_decimal decimal = {{0x475ae79d, 0, 0, 0x801c0000}};
  float check = -1.19713986e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2407) {
  s21_decimal decimal = {{0x6bb4afc, 0, 0, 0x1c0000}};
  float check = 1.12937724e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2408) {
  s21_decimal decimal = {{0x6bb4afc, 0, 0, 0x801c0000}};
  float check = -1.12937724e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2409) {
  s21_decimal decimal = {{0x11d6b9e9, 0, 0, 0x1c0000}};
  float check = 2.99284964e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2410) {
  s21_decimal decimal = {{0x11d6b9e9, 0, 0, 0x801c0000}};
  float check = -2.99284964e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2411) {
  s21_decimal decimal = {{0x6bb4b0, 0, 0, 0x1c0000}};
  float check = 7.05860823e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2412) {
  s21_decimal decimal = {{0x6bb4b0, 0, 0, 0x801c0000}};
  float check = -7.05860823e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2413) {
  s21_decimal decimal = {{0x11d6b9f, 0, 0, 0x1c0000}};
  float check = 1.87053102e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2414) {
  s21_decimal decimal = {{0x11d6b9f, 0, 0, 0x801c0000}};
  float check = -1.87053102e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2415) {
  s21_decimal decimal = {{0x6bb5, 0, 0, 0x1c0000}};
  float check = 2.75730000e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2416) {
  s21_decimal decimal = {{0x6bb5, 0, 0, 0x801c0000}};
  float check = -2.75730000e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2417) {
  s21_decimal decimal = {{0x11d6c, 0, 0, 0x1c0000}};
  float check = 7.30679968e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2418) {
  s21_decimal decimal = {{0x11d6c, 0, 0, 0x801c0000}};
  float check = -7.30679968e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2419) {
  s21_decimal decimal = {{0x35da, 0, 0, 0x1c0000}};
  float check = 1.37860001e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2420) {
  s21_decimal decimal = {{0x35da, 0, 0, 0x801c0000}};
  float check = -1.37860001e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2421) {
  s21_decimal decimal = {{0x8eb5, 0, 0, 0x1c0000}};
  float check = 3.65330005e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2422) {
  s21_decimal decimal = {{0x8eb5, 0, 0, 0x801c0000}};
  float check = -3.65330005e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2423) {
  s21_decimal decimal = {{0x1aed, 0, 0, 0x1c0000}};
  float check = 6.89300003e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2424) {
  s21_decimal decimal = {{0x1aed, 0, 0, 0x801c0000}};
  float check = -6.89300003e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2425) {
  s21_decimal decimal = {{0x475a, 0, 0, 0x1c0000}};
  float check = 1.82659993e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2426) {
  s21_decimal decimal = {{0x475a, 0, 0, 0x801c0000}};
  float check = -1.82659993e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2427) {
  s21_decimal decimal = {{0x6bb, 0, 0, 0x1c0000}};
  float check = 1.72300004e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2428) {
  s21_decimal decimal = {{0x6bb, 0, 0, 0x801c0000}};
  float check = -1.72300004e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2429) {
  s21_decimal decimal = {{0x11d6, 0, 0, 0x1c0000}};
  float check = 4.56599989e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2430) {
  s21_decimal decimal = {{0x11d6, 0, 0, 0x801c0000}};
  float check = -4.56599989e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2431) {
  s21_decimal decimal = {{0x36, 0, 0, 0x1c0000}};
  float check = 5.40000019e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2432) {
  s21_decimal decimal = {{0x36, 0, 0, 0x801c0000}};
  float check = -5.40000019e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2433) {
  s21_decimal decimal = {{0x8f, 0, 0, 0x1c0000}};
  float check = 1.43000006e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2434) {
  s21_decimal decimal = {{0x8f, 0, 0, 0x801c0000}};
  float check = -1.43000006e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2435) {
  s21_decimal decimal = {{0x4b, 0, 0, 0x20000}};
  float check = 7.50000000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2436) {
  s21_decimal decimal = {{0x4b, 0, 0, 0x80020000}};
  float check = -7.50000000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2437) {
  s21_decimal decimal = {{0x4da3, 0, 0, 0x40000}};
  float check = 1.98749995e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2438) {
  s21_decimal decimal = {{0x4da3, 0, 0, 0x80040000}};
  float check = -1.98749995e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2439) {
  s21_decimal decimal = {{0x5, 0, 0, 0x10000}};
  float check = 5.00000000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2440) {
  s21_decimal decimal = {{0x5, 0, 0, 0x80010000}};
  float check = -5.00000000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2441) {
  s21_decimal decimal = {{0x52d, 0, 0, 0x30000}};
  float check = 1.32500005e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2442) {
  s21_decimal decimal = {{0x52d, 0, 0, 0x80030000}};
  float check = -1.32500005e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2443) {
  s21_decimal decimal = {{0x753, 0, 0, 0x40000}};
  float check = 1.87500000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2444) {
  s21_decimal decimal = {{0x753, 0, 0, 0x80040000}};
  float check = -1.87500000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2445) {
  s21_decimal decimal = {{0x794eb, 0, 0, 0x60000}};
  float check = 4.96874988e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2446) {
  s21_decimal decimal = {{0x794eb, 0, 0, 0x80060000}};
  float check = -4.96874988e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2447) {
  s21_decimal decimal = {{0x7d, 0, 0, 0x30000}};
  float check = 1.25000000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2448) {
  s21_decimal decimal = {{0x7d, 0, 0, 0x80030000}};
  float check = -1.25000000e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2449) {
  s21_decimal decimal = {{0x8165, 0, 0, 0x50000}};
  float check = 3.31250012e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2450) {
  s21_decimal decimal = {{0x8165, 0, 0, 0x80050000}};
  float check = -3.31250012e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2451) {
  s21_decimal decimal = {{0x271, 0, 0, 0x40000}};
  float check = 6.25000000e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2452) {
  s21_decimal decimal = {{0x271, 0, 0, 0x80040000}};
  float check = -6.25000000e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2453) {
  s21_decimal decimal = {{0x286f9, 0, 0, 0x60000}};
  float check = 1.65625006e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2454) {
  s21_decimal decimal = {{0x286f9, 0, 0, 0x80060000}};
  float check = -1.65625006e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2455) {
  s21_decimal decimal = {{0x3d09, 0, 0, 0x60000}};
  float check = 1.56250000e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2456) {
  s21_decimal decimal = {{0x3d09, 0, 0, 0x80060000}};
  float check = -1.56250000e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2457) {
  s21_decimal decimal = {{0x3f2e51, 0, 0, 0x80000}};
  float check = 4.14062515e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2458) {
  s21_decimal decimal = {{0x3f2e51, 0, 0, 0x80080000}};
  float check = -4.14062515e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2459) {
  s21_decimal decimal = {{0x11e1a3, 0, 0, 0x80000}};
  float check = 1.17187500e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2460) {
  s21_decimal decimal = {{0x11e1a3, 0, 0, 0x80080000}};
  float check = -1.17187500e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2461) {
  s21_decimal decimal = {{0x128291bb, 0, 0, 0xa0000}};
  float check = 3.10546868e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2462) {
  s21_decimal decimal = {{0x128291bb, 0, 0, 0x800a0000}};
  float check = -3.10546868e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2463) {
  s21_decimal decimal = {{0x1312d, 0, 0, 0x70000}};
  float check = 7.81250000e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2464) {
  s21_decimal decimal = {{0x1312d, 0, 0, 0x80070000}};
  float check = -7.81250000e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2465) {
  s21_decimal decimal = {{0x13be795, 0, 0, 0x90000}};
  float check = 2.07031257e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2466) {
  s21_decimal decimal = {{0x13be795, 0, 0, 0x80090000}};
  float check = -2.07031257e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2467) {
  s21_decimal decimal = {{0x5f5e1, 0, 0, 0x80000}};
  float check = 3.90625000e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2468) {
  s21_decimal decimal = {{0x5f5e1, 0, 0, 0x80080000}};
  float check = -3.90625000e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2469) {
  s21_decimal decimal = {{0x62b85e9, 0, 0, 0xa0000}};
  float check = 1.03515629e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2470) {
  s21_decimal decimal = {{0x62b85e9, 0, 0, 0x800a0000}};
  float check = -1.03515629e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2471) {
  s21_decimal decimal = {{0xe8d4a51, 0, 0, 0xc0000}};
  float check = 2.44140625e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2472) {
  s21_decimal decimal = {{0xe8d4a51, 0, 0, 0x800c0000}};
  float check = -2.44140625e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2473) {
  s21_decimal decimal = {{0x1041edd9, 0xf, 0, 0xe0000}};
  float check = 6.46972680e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2474) {
  s21_decimal decimal = {{0x1041edd9, 0xf, 0, 0x800e0000}};
  float check = -6.46972680e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2475) {
  s21_decimal decimal = {{0x94d74f43, 0x6a, 0, 0x100000}};
  float check = 4.57763672e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2476) {
  s21_decimal decimal = {{0x94d74f43, 0x6a, 0, 0x80100000}};
  float check = -4.57763672e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2477) {
  s21_decimal decimal = {{0x12e10c5b, 0x6e54, 0, 0x120000}};
  float check = 1.21307370e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2478) {
  s21_decimal decimal = {{0x12e10c5b, 0x6e54, 0, 0x80120000}};
  float check = -1.21307370e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2479) {
  s21_decimal decimal = {{0x1afd498d, 0x7, 0, 0xf0000}};
  float check = 3.05175781e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2480) {
  s21_decimal decimal = {{0x1afd498d, 0x7, 0, 0x800f0000}};
  float check = -3.05175781e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2481) {
  s21_decimal decimal = {{0xf03122f5, 0x75a, 0, 0x110000}};
  float check = 8.08715849e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2482) {
  s21_decimal decimal = {{0xf03122f5, 0x75a, 0, 0x80110000}};
  float check = -8.08715849e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2483) {
  s21_decimal decimal = {{0x86f26fc1, 0x23, 0, 0x100000}};
  float check = 1.52587891e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2484) {
  s21_decimal decimal = {{0x86f26fc1, 0x23, 0, 0x80100000}};
  float check = -1.52587891e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2485) {
  s21_decimal decimal = {{0xb0f5aec9, 0x24c6, 0, 0x120000}};
  float check = 4.04357925e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2486) {
  s21_decimal decimal = {{0xb0f5aec9, 0x24c6, 0, 0x80120000}};
  float check = -4.04357925e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2487) {
  s21_decimal decimal = {{0x7c4a04c2, 0x409f9cbc, 0, 0x1c0000}};
  float check = 4.65661287e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2488) {
  s21_decimal decimal = {{0x7c4a04c2, 0x409f9cbc, 0, 0x801c0000}};
  float check = -4.65661287e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2489) {
  s21_decimal decimal = {{0x162a8c9c, 0xab40928d, 0, 0x1c0000}};
  float check = 1.23400246e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2490) {
  s21_decimal decimal = {{0x162a8c9c, 0xab40928d, 0, 0x801c0000}};
  float check = -1.23400246e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2491) {
  s21_decimal decimal = {{0xba6f0723, 0x60ef6b1a, 0, 0x1c0000}};
  float check = 6.98491931e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2492) {
  s21_decimal decimal = {{0xba6f0723, 0x60ef6b1a, 0, 0x801c0000}};
  float check = -6.98491931e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2493) {
  s21_decimal decimal = {{0xa13fd2ea, 0xe0dbd3, 0x1, 0x1c0000}};
  float check = 1.85100357e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2494) {
  s21_decimal decimal = {{0xa13fd2ea, 0xe0dbd3, 0x1, 0x801c0000}};
  float check = -1.85100357e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2495) {
  s21_decimal decimal = {{0x409f9cbc, 0, 0, 0x1c0000}};
  float check = 1.08420217e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2496) {
  s21_decimal decimal = {{0x409f9cbc, 0, 0, 0x801c0000}};
  float check = -1.08420217e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2497) {
  s21_decimal decimal = {{0xab40928c, 0, 0, 0x1c0000}};
  float check = 2.87313586e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2498) {
  s21_decimal decimal = {{0xab40928c, 0, 0, 0x801c0000}};
  float check = -2.87313586e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2499) {
  s21_decimal decimal = {{0x160334b9, 0xf176018a, 0x52b7d2, 0x1b0000}};
  float check = 1.00000001e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2500) {
  s21_decimal decimal = {{0x160334b9, 0xf176018a, 0x52b7d2, 0x801b0000}};
  float check = -1.00000001e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2501) {
  s21_decimal decimal = {{0x4754f526, 0xfeb728cb, 0x8900755, 0x1c0000}};
  float check = 2.65000015e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2502) {
  s21_decimal decimal = {{0x4754f526, 0xfeb728cb, 0x8900755, 0x801c0000}};
  float check = -2.65000015e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2503) {
  s21_decimal decimal = {{0xecfef3d7, 0xe632dc89, 0xd38b, 0x180000}};
  float check = 9.99000013e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2504) {
  s21_decimal decimal = {{0xecfef3d7, 0xe632dc89, 0xd38b, 0x80180000}};
  float check = -9.99000013e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2505) {
  s21_decimal decimal = {{0x53ea698f, 0x4aa64ac6, 0xdafbd1, 0x1a0000}};
  float check = 2.64735007e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2506) {
  s21_decimal decimal = {{0x53ea698f, 0x4aa64ac6, 0xdafbd1, 0x801a0000}};
  float check = -2.64735007e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2507) {
  s21_decimal decimal = {{0xc1191537, 0xe8de9f28, 0x130e, 0x170000}};
  float check = 8.99999976e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2508) {
  s21_decimal decimal = {{0xc1191537, 0xe8de9f28, 0x130e, 0x80170000}};
  float check = -8.99999976e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2509) {
  s21_decimal decimal = {{0xe2f6f5ef, 0xe72c12f, 0x13ba6f, 0x190000}};
  float check = 2.38499999e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2510) {
  s21_decimal decimal = {{0xe2f6f5ef, 0xe72c12f, 0x13ba6f, 0x80190000}};
  float check = -2.38499999e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2511) {
  s21_decimal decimal = {{0x61940b43, 0xd7303129, 0x52a2a5, 0x1b0000}};
  float check = 9.98999998e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2512) {
  s21_decimal decimal = {{0x61940b43, 0xd7303129, 0x52a2a5, 0x801b0000}};
  float check = -9.98999998e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2513) {
  s21_decimal decimal = {{0x99d32a70, 0xc67d16c8, 0x88dd62a, 0x1c0000}};
  float check = 2.64735013e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2514) {
  s21_decimal decimal = {{0x99d32a70, 0xc67d16c8, 0x88dd62a, 0x801c0000}};
  float check = -2.64735013e-01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2515) {
  s21_decimal decimal = {{0x60180d2a, 0xf109a30e, 0x52a2a5, 0x1c0000}};
  float check = 9.99000017e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2516) {
  s21_decimal decimal = {{0x60180d2a, 0xf109a30e, 0x52a2a5, 0x801c0000}};
  float check = -9.99000017e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2517) {
  s21_decimal decimal = {{0xe50c8949, 0x585989b2, 0xdafbd1, 0x1c0000}};
  float check = 2.64734998e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2518) {
  s21_decimal decimal = {{0xe50c8949, 0x585989b2, 0xdafbd1, 0x801c0000}};
  float check = -2.64734998e-02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2519) {
  s21_decimal decimal = {{0x43061b28, 0x1bc24f1, 0x84377, 0x1c0000}};
  float check = 9.99000040e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2520) {
  s21_decimal decimal = {{0x43061b28, 0x1bc24f1, 0x84377, 0x801c0000}};
  float check = -9.99000040e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2521) {
  s21_decimal decimal = {{0xf19cfb2a, 0x5e329518, 0x15e5fb, 0x1c0000}};
  float check = 2.64735008e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2522) {
  s21_decimal decimal = {{0xf19cfb2a, 0x5e329518, 0x15e5fb, 0x801c0000}};
  float check = -2.64735008e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2523) {
  s21_decimal decimal = {{0x86b3cf84, 0xe692d07e, 0xd38b, 0x1b0000}};
  float check = 9.99000040e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2524) {
  s21_decimal decimal = {{0x86b3cf84, 0xe692d07e, 0xd38b, 0x801b0000}};
  float check = -9.99000040e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2525) {
  s21_decimal decimal = {{0xf19cfb2a, 0x5e329518, 0x15e5fb, 0x1c0000}};
  float check = 2.64735008e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2526) {
  s21_decimal decimal = {{0xf19cfb2a, 0x5e329518, 0x15e5fb, 0x801c0000}};
  float check = -2.64735008e-03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2527) {
  s21_decimal decimal = {{0x94c2a771, 0xe590520b, 0xd38b, 0x1c0000}};
  float check = 9.98999967e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2528) {
  s21_decimal decimal = {{0x94c2a771, 0xe590520b, 0xd38b, 0x801c0000}};
  float check = -9.98999967e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2529) {
  s21_decimal decimal = {{0xb09d6eeb, 0x20580c9e, 0x23099, 0x1c0000}};
  float check = 2.64734990e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2530) {
  s21_decimal decimal = {{0xb09d6eeb, 0x20580c9e, 0x23099, 0x801c0000}};
  float check = -2.64734990e-04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2531) {
  s21_decimal decimal = {{0xa1b97e8c, 0x96fb4b5d, 0x1527, 0x1c0000}};
  float check = 9.98999985e-06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2532) {
  s21_decimal decimal = {{0xa1b97e8c, 0x96fb4b5d, 0x1527, 0x801c0000}};
  float check = -9.98999985e-06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2533) {
  s21_decimal decimal = {{0x862b8f59, 0x5019ee1e, 0x380f, 0x1c0000}};
  float check = 2.64734990e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2534) {
  s21_decimal decimal = {{0x862b8f59, 0x5019ee1e, 0x380f, 0x801c0000}};
  float check = -2.64734990e-05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2535) {
  s21_decimal decimal = {{0x85ba80c8, 0x8f19efee, 0x21d, 0x1c0000}};
  float check = 9.99000008e-07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2536) {
  s21_decimal decimal = {{0x85ba80c8, 0x8f19efee, 0x21d, 0x801c0000}};
  float check = -9.99000008e-07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2537) {
  s21_decimal decimal = {{0x48c7d545, 0x219e556b, 0x59b, 0x1c0000}};
  float check = 2.64735013e-06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2538) {
  s21_decimal decimal = {{0x48c7d545, 0x219e556b, 0x59b, 0x801c0000}};
  float check = -2.64735013e-06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2539) {
  s21_decimal decimal = {{0xee068d9f, 0x27e8f177, 0x36, 0x1c0000}};
  float check = 9.98999994e-08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2540) {
  s21_decimal decimal = {{0xee068d9f, 0x27e8f177, 0x36, 0x801c0000}};
  float check = -9.98999994e-08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2541) {
  s21_decimal decimal = {{0x36c490e5, 0x835c7fe4, 0x8f, 0x1c0000}};
  float check = 2.64735007e-07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2542) {
  s21_decimal decimal = {{0x36c490e5, 0x835c7fe4, 0x8f, 0x801c0000}};
  float check = -2.64735007e-07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2543) {
  s21_decimal decimal = {{0x97cd7490, 0x6a641825, 0x5, 0x1c0000}};
  float check = 9.98999994e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2544) {
  s21_decimal decimal = {{0x97cd7490, 0x6a641825, 0x5, 0x801c0000}};
  float check = -9.98999994e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2545) {
  s21_decimal decimal = {{0x9f13a817, 0x59efa663, 0xe, 0x1c0000}};
  float check = 2.64735007e-08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2546) {
  s21_decimal decimal = {{0x9f13a817, 0x59efa663, 0xe, 0x801c0000}};
  float check = -2.64735007e-08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2547) {
  s21_decimal decimal = {{0xc2615875, 0x8aa39c03, 0, 0x1c0000}};
  float check = 9.98999994e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2548) {
  s21_decimal decimal = {{0xc2615875, 0x8aa39c03, 0, 0x801c0000}};
  float check = -9.98999994e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2549) {
  s21_decimal decimal = {{0xc31b90d0, 0x6f64c3d6, 0x1, 0x1c0000}};
  float check = 2.64734989e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2550) {
  s21_decimal decimal = {{0xc31b90d0, 0x6f64c3d6, 0x1, 0x801c0000}};
  float check = -2.64734989e-09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2551) {
  s21_decimal decimal = {{0x5841e5d2, 0xddd2930, 0, 0x1c0000}};
  float check = 9.98999980e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2552) {
  s21_decimal decimal = {{0x5841e5d2, 0xddd2930, 0, 0x801c0000}};
  float check = -9.98999980e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2553) {
  s21_decimal decimal = {{0x1d15076c, 0x24bd46c0, 0, 0x1c0000}};
  float check = 2.64734984e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2554) {
  s21_decimal decimal = {{0x1d15076c, 0x24bd46c0, 0, 0x801c0000}};
  float check = -2.64734984e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2555) {
  s21_decimal decimal = {{0xd5a03095, 0x162ea84, 0, 0x1b0000}};
  float check = 9.98999980e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2556) {
  s21_decimal decimal = {{0xd5a03095, 0x162ea84, 0, 0x801b0000}};
  float check = -9.98999980e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2557) {
  s21_decimal decimal = {{0x1d15076c, 0x24bd46c0, 0, 0x1c0000}};
  float check = 2.64734984e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2558) {
  s21_decimal decimal = {{0x1d15076c, 0x24bd46c0, 0, 0x801c0000}};
  float check = -2.64734984e-10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2559) {
  s21_decimal decimal = {{0xa46bbfbd, 0x162ea85, 0, 0x1c0000}};
  float check = 9.99000015e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2560) {
  s21_decimal decimal = {{0xa46bbfbd, 0x162ea85, 0, 0x801c0000}};
  float check = -9.99000015e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2561) {
  s21_decimal decimal = {{0x5a1d88e8, 0x3ac8715, 0, 0x1c0000}};
  float check = 2.64735005e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2562) {
  s21_decimal decimal = {{0x5a1d88e8, 0x3ac8715, 0, 0x801c0000}};
  float check = -2.64735005e-11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2563) {
  s21_decimal decimal = {{0x36f77f52, 0x237dda, 0, 0x1c0000}};
  float check = 9.99000036e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2564) {
  s21_decimal decimal = {{0x36f77f52, 0x237dda, 0, 0x801c0000}};
  float check = -9.99000036e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2565) {
  s21_decimal decimal = {{0x44dcab00, 0x5e0d82, 0, 0x1c0000}};
  float check = 2.64735000e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2566) {
  s21_decimal decimal = {{0x44dcab00, 0x5e0d82, 0, 0x801c0000}};
  float check = -2.64735000e-12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2567) {
  s21_decimal decimal = {{0xd0ae5c04, 0x38c95, 0, 0x1c0000}};
  float check = 9.99000009e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2568) {
  s21_decimal decimal = {{0xd0ae5c04, 0x38c95, 0, 0x801c0000}};
  float check = -9.99000009e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2569) {
  s21_decimal decimal = {{0x35ce0d71, 0x967c0, 0, 0x1c0000}};
  float check = 2.64735011e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2570) {
  s21_decimal decimal = {{0x35ce0d71, 0x967c0, 0, 0x801c0000}};
  float check = -2.64735011e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2571) {
  s21_decimal decimal = {{0xc8116f9a, 0x5adb, 0, 0x1b0000}};
  float check = 9.99000009e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2572) {
  s21_decimal decimal = {{0xc8116f9a, 0x5adb, 0, 0x801b0000}};
  float check = -9.99000009e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2573) {
  s21_decimal decimal = {{0x35ce0d71, 0x967c0, 0, 0x1c0000}};
  float check = 2.64735011e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2574) {
  s21_decimal decimal = {{0x35ce0d71, 0x967c0, 0, 0x801c0000}};
  float check = -2.64735011e-13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2575) {
  s21_decimal decimal = {{0x8290a94, 0x5340, 0, 0x1c0000}};
  float check = 9.15344799e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2576) {
  s21_decimal decimal = {{0x8290a94, 0x5340, 0, 0x801c0000}};
  float check = -9.15344799e-15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2577) {
  s21_decimal decimal = {{0xe26cc26f, 0xdc9c, 0, 0x1c0000}};
  float check = 2.42566367e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2578) {
  s21_decimal decimal = {{0xe26cc26f, 0xdc9c, 0, 0x801c0000}};
  float check = -2.42566367e-14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2579) {
  s21_decimal decimal = {{0x8ee06978, 0x10c, 0, 0x1c0000}};
  float check = 1.15344831e-16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2580) {
  s21_decimal decimal = {{0x8ee06978, 0x10c, 0, 0x801c0000}};
  float check = -1.15344831e-16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2581) {
  s21_decimal decimal = {{0xadd2b118, 0x2c7, 0, 0x1c0000}};
  float check = 3.05663803e-16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2582) {
  s21_decimal decimal = {{0xadd2b118, 0x2c7, 0, 0x801c0000}};
  float check = -3.05663803e-16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2583) {
  s21_decimal decimal = {{0xdb166406, 0x1a, 0, 0x1c0000}};
  float check = 1.15344827e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2584) {
  s21_decimal decimal = {{0xdb166406, 0x1a, 0, 0x801c0000}};
  float check = -1.15344827e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2585) {
  s21_decimal decimal = {{0x2afb55dd, 0x47, 0, 0x1c0000}};
  float check = 3.05663784e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2586) {
  s21_decimal decimal = {{0x2afb55dd, 0x47, 0, 0x801c0000}};
  float check = -3.05663784e-17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2587) {
  s21_decimal decimal = {{0xaf823c65, 0x2, 0, 0x1c0000}};
  float check = 1.15344825e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2588) {
  s21_decimal decimal = {{0xaf823c65, 0x2, 0, 0x801c0000}};
  float check = -1.15344825e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2589) {
  s21_decimal decimal = {{0x1de5ecd8, 0x7, 0, 0x1c0000}};
  float check = 3.05663792e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2590) {
  s21_decimal decimal = {{0x1de5ecd8, 0x7, 0, 0x801c0000}};
  float check = -3.05663792e-18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2591) {
  s21_decimal decimal = {{0x60ef6b1b, 0, 0, 0x1c0000}};
  float check = 1.62630326e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2592) {
  s21_decimal decimal = {{0x60ef6b1b, 0, 0, 0x801c0000}};
  float check = -1.62630326e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2593) {
  s21_decimal decimal = {{0xe0dbd4, 0x1, 0, 0x1c0000}};
  float check = 4.30970353e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2594) {
  s21_decimal decimal = {{0xe0dbd4, 0x1, 0, 0x801c0000}};
  float check = -4.30970353e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2595) {
  s21_decimal decimal = {{0x44c03971, 0, 0, 0x1c0000}};
  float check = 1.15344830e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2596) {
  s21_decimal decimal = {{0x44c03971, 0, 0, 0x801c0000}};
  float check = -1.15344830e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2597) {
  s21_decimal decimal = {{0xb6309838, 0, 0, 0x1c0000}};
  float check = 3.05663812e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2598) {
  s21_decimal decimal = {{0xb6309838, 0, 0, 0x801c0000}};
  float check = -3.05663812e-19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2599) {
  s21_decimal decimal = {{0x6e005bb, 0, 0, 0x1c0000}};
  float check = 1.15344827e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2600) {
  s21_decimal decimal = {{0x6e005bb, 0, 0, 0x801c0000}};
  float check = -1.15344827e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2601) {
  s21_decimal decimal = {{0x12380f30, 0, 0, 0x1c0000}};
  float check = 3.05663787e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2602) {
  s21_decimal decimal = {{0x12380f30, 0, 0, 0x801c0000}};
  float check = -3.05663787e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2603) {
  s21_decimal decimal = {{0x4438792, 0, 0, 0x1c0000}};
  float check = 7.15344824e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2604) {
  s21_decimal decimal = {{0x4438792, 0, 0, 0x801c0000}};
  float check = -7.15344824e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2605) {
  s21_decimal decimal = {{0xb4c8da9, 0, 0, 0x1c0000}};
  float check = 1.89566370e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2606) {
  s21_decimal decimal = {{0xb4c8da9, 0, 0, 0x801c0000}};
  float check = -1.89566370e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2607) {
  s21_decimal decimal = {{0x443878a, 0, 0, 0x1c0000}};
  float check = 7.15344744e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2608) {
  s21_decimal decimal = {{0x443878a, 0, 0, 0x801c0000}};
  float check = -7.15344744e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2609) {
  s21_decimal decimal = {{0xb4c8d94, 0, 0, 0x1c0000}};
  float check = 1.89566354e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2610) {
  s21_decimal decimal = {{0xb4c8d94, 0, 0, 0x801c0000}};
  float check = -1.89566354e-20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2611) {
  s21_decimal decimal = {{0x72f78b, 0, 0, 0x1c0000}};
  float check = 7.53447488e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2612) {
  s21_decimal decimal = {{0x72f78b, 0, 0, 0x801c0000}};
  float check = -7.53447488e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2613) {
  s21_decimal decimal = {{0x130a997, 0, 0, 0x1c0000}};
  float check = 1.99663588e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2614) {
  s21_decimal decimal = {{0x130a997, 0, 0, 0x801c0000}};
  float check = -1.99663588e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2615) {
  s21_decimal decimal = {{0x72f78a, 0, 0, 0x1c0000}};
  float check = 7.53447387e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2616) {
  s21_decimal decimal = {{0x72f78a, 0, 0, 0x801c0000}};
  float check = -7.53447387e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2617) {
  s21_decimal decimal = {{0x130a994, 0, 0, 0x1c0000}};
  float check = 1.99663568e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2618) {
  s21_decimal decimal = {{0x130a994, 0, 0, 0x801c0000}};
  float check = -1.99663568e-21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2619) {
  s21_decimal decimal = {{0xb832b, 0, 0, 0x1c0000}};
  float check = 7.54475026e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2620) {
  s21_decimal decimal = {{0xb832b, 0, 0, 0x801c0000}};
  float check = -7.54475026e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2621) {
  s21_decimal decimal = {{0x1e81ff, 0, 0, 0x1c0000}};
  float check = 1.99935900e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2622) {
  s21_decimal decimal = {{0x1e81ff, 0, 0, 0x801c0000}};
  float check = -1.99935900e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2623) {
  s21_decimal decimal = {{0xb832a, 0, 0, 0x1c0000}};
  float check = 7.54474017e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2624) {
  s21_decimal decimal = {{0xb832a, 0, 0, 0x801c0000}};
  float check = -7.54474017e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2625) {
  s21_decimal decimal = {{0x1e81fc, 0, 0, 0x1c0000}};
  float check = 1.99935597e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2626) {
  s21_decimal decimal = {{0x1e81fc, 0, 0, 0x801c0000}};
  float check = -1.99935597e-22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2627) {
  s21_decimal decimal = {{0x174d8, 0, 0, 0x1c0000}};
  float check = 9.54479965e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2628) {
  s21_decimal decimal = {{0x174d8, 0, 0, 0x801c0000}};
  float check = -9.54479965e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2629) {
  s21_decimal decimal = {{0x3dc09, 0, 0, 0x1c0000}};
  float check = 2.52937000e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2630) {
  s21_decimal decimal = {{0x3dc09, 0, 0, 0x801c0000}};
  float check = -2.52937000e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2631) {
  s21_decimal decimal = {{0x174d7, 0, 0, 0x1c0000}};
  float check = 9.54470025e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2632) {
  s21_decimal decimal = {{0x174d7, 0, 0, 0x801c0000}};
  float check = -9.54470025e-24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2633) {
  s21_decimal decimal = {{0x3dc07, 0, 0, 0x1c0000}};
  float check = 2.52934996e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2634) {
  s21_decimal decimal = {{0x3dc07, 0, 0, 0x801c0000}};
  float check = -2.52934996e-23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2635) {
  s21_decimal decimal = {{0x221, 0, 0, 0x1c0000}};
  float check = 5.45000025e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2636) {
  s21_decimal decimal = {{0x221, 0, 0, 0x801c0000}};
  float check = -5.45000025e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2637) {
  s21_decimal decimal = {{0x5a4, 0, 0, 0x1c0000}};
  float check = 1.44400003e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2638) {
  s21_decimal decimal = {{0x5a4, 0, 0, 0x801c0000}};
  float check = -1.44400003e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2639) {
  s21_decimal decimal = {{0x220, 0, 0, 0x1c0000}};
  float check = 5.44000021e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2640) {
  s21_decimal decimal = {{0x220, 0, 0, 0x801c0000}};
  float check = -5.44000021e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2641) {
  s21_decimal decimal = {{0x5a2, 0, 0, 0x1c0000}};
  float check = 1.44200002e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2642) {
  s21_decimal decimal = {{0x5a2, 0, 0, 0x801c0000}};
  float check = -1.44200002e-25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2643) {
  s21_decimal decimal = {{0x91, 0, 0, 0x1c0000}};
  float check = 1.44999999e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2644) {
  s21_decimal decimal = {{0x91, 0, 0, 0x801c0000}};
  float check = -1.44999999e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2645) {
  s21_decimal decimal = {{0x180, 0, 0, 0x1c0000}};
  float check = 3.83999986e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2646) {
  s21_decimal decimal = {{0x180, 0, 0, 0x801c0000}};
  float check = -3.83999986e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2647) {
  s21_decimal decimal = {{0x90, 0, 0, 0x1c0000}};
  float check = 1.43999995e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2648) {
  s21_decimal decimal = {{0x90, 0, 0, 0x801c0000}};
  float check = -1.43999995e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2649) {
  s21_decimal decimal = {{0x17e, 0, 0, 0x1c0000}};
  float check = 3.82000008e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2650) {
  s21_decimal decimal = {{0x17e, 0, 0, 0x801c0000}};
  float check = -3.82000008e-26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2651) {
  s21_decimal decimal = {{0xf, 0, 0, 0x1c0000}};
  float check = 1.50000004e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2652) {
  s21_decimal decimal = {{0xf, 0, 0, 0x801c0000}};
  float check = -1.50000004e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2653) {
  s21_decimal decimal = {{0x28, 0, 0, 0x1c0000}};
  float check = 4.00000011e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2654) {
  s21_decimal decimal = {{0x28, 0, 0, 0x801c0000}};
  float check = -4.00000011e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2655) {
  s21_decimal decimal = {{0xe, 0, 0, 0x1c0000}};
  float check = 1.39999998e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2656) {
  s21_decimal decimal = {{0xe, 0, 0, 0x801c0000}};
  float check = -1.39999998e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2657) {
  s21_decimal decimal = {{0x25, 0, 0, 0x1c0000}};
  float check = 3.69999993e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2658) {
  s21_decimal decimal = {{0x25, 0, 0, 0x801c0000}};
  float check = -3.69999993e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2659) {
  s21_decimal decimal = {{0xc, 0, 0, 0x1c0000}};
  float check = 1.19999996e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2660) {
  s21_decimal decimal = {{0xc, 0, 0, 0x801c0000}};
  float check = -1.19999996e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2661) {
  s21_decimal decimal = {{0x20, 0, 0, 0x1c0000}};
  float check = 3.20000001e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2662) {
  s21_decimal decimal = {{0x20, 0, 0, 0x801c0000}};
  float check = -3.20000001e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2663) {
  s21_decimal decimal = {{0xb, 0, 0, 0x1c0000}};
  float check = 1.09999999e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2664) {
  s21_decimal decimal = {{0xb, 0, 0, 0x801c0000}};
  float check = -1.09999999e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2665) {
  s21_decimal decimal = {{0x1d, 0, 0, 0x1c0000}};
  float check = 2.90000002e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2666) {
  s21_decimal decimal = {{0x1d, 0, 0, 0x801c0000}};
  float check = -2.90000002e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2667) {
  s21_decimal decimal = {{0xa, 0, 0, 0x1c0000}};
  float check = 1.00000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2668) {
  s21_decimal decimal = {{0xa, 0, 0, 0x801c0000}};
  float check = -1.00000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2669) {
  s21_decimal decimal = {{0x1a, 0, 0, 0x1c0000}};
  float check = 2.60000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2670) {
  s21_decimal decimal = {{0x1a, 0, 0, 0x801c0000}};
  float check = -2.60000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2671) {
  s21_decimal decimal = {{0x1, 0, 0, 0x1b0000}};
  float check = 1.00000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2672) {
  s21_decimal decimal = {{0x1, 0, 0, 0x801b0000}};
  float check = -1.00000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2673) {
  s21_decimal decimal = {{0x1a, 0, 0, 0x1c0000}};
  float check = 2.60000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2674) {
  s21_decimal decimal = {{0x1a, 0, 0, 0x801c0000}};
  float check = -2.60000003e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2675) {
  s21_decimal decimal = {{0x9, 0, 0, 0x1c0000}};
  float check = 8.99999967e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2676) {
  s21_decimal decimal = {{0x9, 0, 0, 0x801c0000}};
  float check = -8.99999967e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2677) {
  s21_decimal decimal = {{0x18, 0, 0, 0x1c0000}};
  float check = 2.39999991e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2678) {
  s21_decimal decimal = {{0x18, 0, 0, 0x801c0000}};
  float check = -2.39999991e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2679) {
  s21_decimal decimal = {{0x8, 0, 0, 0x1c0000}};
  float check = 8.00000003e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2680) {
  s21_decimal decimal = {{0x8, 0, 0, 0x801c0000}};
  float check = -8.00000003e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2681) {
  s21_decimal decimal = {{0x15, 0, 0, 0x1c0000}};
  float check = 2.09999992e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2682) {
  s21_decimal decimal = {{0x15, 0, 0, 0x801c0000}};
  float check = -2.09999992e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2683) {
  s21_decimal decimal = {{0x7, 0, 0, 0x1c0000}};
  float check = 6.99999990e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2684) {
  s21_decimal decimal = {{0x7, 0, 0, 0x801c0000}};
  float check = -6.99999990e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2685) {
  s21_decimal decimal = {{0x13, 0, 0, 0x1c0000}};
  float check = 1.89999999e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2686) {
  s21_decimal decimal = {{0x13, 0, 0, 0x801c0000}};
  float check = -1.89999999e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2687) {
  s21_decimal decimal = {{0x6, 0, 0, 0x1c0000}};
  float check = 5.99999978e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2688) {
  s21_decimal decimal = {{0x6, 0, 0, 0x801c0000}};
  float check = -5.99999978e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2689) {
  s21_decimal decimal = {{0x10, 0, 0, 0x1c0000}};
  float check = 1.60000001e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2690) {
  s21_decimal decimal = {{0x10, 0, 0, 0x801c0000}};
  float check = -1.60000001e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2691) {
  s21_decimal decimal = {{0x5, 0, 0, 0x1c0000}};
  float check = 5.00000014e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2692) {
  s21_decimal decimal = {{0x5, 0, 0, 0x801c0000}};
  float check = -5.00000014e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2693) {
  s21_decimal decimal = {{0xd, 0, 0, 0x1c0000}};
  float check = 1.30000002e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2694) {
  s21_decimal decimal = {{0xd, 0, 0, 0x801c0000}};
  float check = -1.30000002e-27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2695) {
  s21_decimal decimal = {{0x2, 0, 0, 0x1c0000}};
  float check = 2.00000001e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2696) {
  s21_decimal decimal = {{0x2, 0, 0, 0x801c0000}};
  float check = -2.00000001e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2697) {
  s21_decimal decimal = {{0x5, 0, 0, 0x1c0000}};
  float check = 5.00000014e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2698) {
  s21_decimal decimal = {{0x5, 0, 0, 0x801c0000}};
  float check = -5.00000014e-28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2699) {
  s21_decimal decimal = {{0xbfd65d8d, 0xf0185f95, 0xf0a88694, 0x801b0000}};
  float check = -7.44801407e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2700) {
  s21_decimal decimal = {{0xbfd65d8d, 0xf0185f95, 0xf0a88694, 0x1b0000}};
  float check = 7.44801407e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2701) {
  s21_decimal decimal = {{0x73c9c637, 0xe59a0333, 0xe48390d2, 0x800e0000}};
  float check = -7.07216361e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2702) {
  s21_decimal decimal = {{0x73c9c637, 0xe59a0333, 0xe48390d2, 0xe0000}};
  float check = 7.07216361e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2703) {
  s21_decimal decimal = {{0x4c16ccaf, 0xfb5ff1ef, 0x614d4d92, 0x80060000}};
  float check = -3.01134991e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2704) {
  s21_decimal decimal = {{0x4c16ccaf, 0xfb5ff1ef, 0x614d4d92, 0x60000}};
  float check = 3.01134991e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2705) {
  s21_decimal decimal = {{0xf4792cf7, 0x1d8b9ffa, 0x79bea393, 0xd0000}};
  float check = 3.76781536e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2706) {
  s21_decimal decimal = {{0xf4792cf7, 0x1d8b9ffa, 0x79bea393, 0x800d0000}};
  float check = -3.76781536e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2707) {
  s21_decimal decimal = {{0x5e7caa3, 0x8bab668e, 0x204328c9, 0xc0000}};
  float check = 9.98471126e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2708) {
  s21_decimal decimal = {{0x5e7caa3, 0x8bab668e, 0x204328c9, 0x800c0000}};
  float check = -9.98471126e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2709) {
  s21_decimal decimal = {{0xafb4fcf8, 0x204104c9, 0x3356afff, 0x80010000}};
  float check = -1.58885348e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2710) {
  s21_decimal decimal = {{0xafb4fcf8, 0x204104c9, 0x3356afff, 0x10000}};
  float check = 1.58885348e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2711) {
  s21_decimal decimal = {{0x486290c, 0x1a2b40c5, 0xf51c7281, 0x1b0000}};
  float check = 7.58582153e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2712) {
  s21_decimal decimal = {{0x486290c, 0x1a2b40c5, 0xf51c7281, 0x801b0000}};
  float check = -7.58582153e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2713) {
  s21_decimal decimal = {{0xf83d270a, 0xe45ff129, 0x40f456a9, 0x1a0000}};
  float check = 2.01024277e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2714) {
  s21_decimal decimal = {{0xf83d270a, 0xe45ff129, 0x40f456a9, 0x801a0000}};
  float check = -2.01024277e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2715) {
  s21_decimal decimal = {{0xdab89985, 0x4f98bcd7, 0xd383fd08, 0x80040000}};
  float check = -6.54609000e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2716) {
  s21_decimal decimal = {{0xdab89985, 0x4f98bcd7, 0xd383fd08, 0x40000}};
  float check = 6.54609000e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2717) {
  s21_decimal decimal = {{0x6881bd66, 0xb95b57a4, 0xc7b4fd5e, 0x170000}};
  float check = 6.18063188e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2718) {
  s21_decimal decimal = {{0x6881bd66, 0xb95b57a4, 0xc7b4fd5e, 0x80170000}};
  float check = -6.18063188e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2719) {
  s21_decimal decimal = {{0x20d07608, 0x94f5a54e, 0x34ec1f4d, 0x160000}};
  float check = 1.63786750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2720) {
  s21_decimal decimal = {{0x20d07608, 0x94f5a54e, 0x34ec1f4d, 0x80160000}};
  float check = -1.63786750e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2721) {
  s21_decimal decimal = {{0x1fe660d, 0x40d54c05, 0x3a6f450d, 0x80170000}};
  float check = -1.80846469e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2722) {
  s21_decimal decimal = {{0x1fe660d, 0x40d54c05, 0x3a6f450d, 0x170000}};
  float check = 1.80846469e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2723) {
  s21_decimal decimal = {{0x1fd64bbc, 0xd43c17d7, 0x2e9955ad, 0x80030000}};
  float check = -1.44216807e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2724) {
  s21_decimal decimal = {{0x1fd64bbc, 0xd43c17d7, 0x2e9955ad, 0x30000}};
  float check = 1.44216807e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2725) {
  s21_decimal decimal = {{0x26304983, 0x3bfba90c, 0x1435004f, 0x180000}};
  float check = 6.25377490e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2726) {
  s21_decimal decimal = {{0x26304983, 0x3bfba90c, 0x1435004f, 0x80180000}};
  float check = -6.25377490e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2727) {
  s21_decimal decimal = {{0x98665c68, 0x2bc14cc6, 0x358c7405, 0x180000}};
  float check = 1.65725039e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2728) {
  s21_decimal decimal = {{0x98665c68, 0x2bc14cc6, 0x358c7405, 0x80180000}};
  float check = -1.65725039e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2729) {
  s21_decimal decimal = {{0x41db8276, 0x360093a4, 0xe4d68dc0, 0x80070000}};
  float check = -7.08219639e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2730) {
  s21_decimal decimal = {{0x41db8276, 0x360093a4, 0xe4d68dc0, 0x70000}};
  float check = 7.08219639e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2731) {
  s21_decimal decimal = {{0x4d71a74e, 0x831d079d, 0x9dd88fb8, 0x80170000}};
  float check = -4.88509531e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2732) {
  s21_decimal decimal = {{0x4d71a74e, 0x831d079d, 0x9dd88fb8, 0x170000}};
  float check = 4.88509531e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2733) {
  s21_decimal decimal = {{0x4c7e51aa, 0x324f2e0c, 0x37e25edd, 0x50000}};
  float check = 1.72953412e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2734) {
  s21_decimal decimal = {{0x4c7e51aa, 0x324f2e0c, 0x37e25edd, 0x80050000}};
  float check = -1.72953412e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2735) {
  s21_decimal decimal = {{0xfde85869, 0x2bb83a06, 0x9417e1ca, 0x50000}};
  float check = 4.58326542e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2736) {
  s21_decimal decimal = {{0xfde85869, 0x2bb83a06, 0x9417e1ca, 0x80050000}};
  float check = -4.58326542e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2737) {
  s21_decimal decimal = {{0xc80fb0d4, 0xdb6fb902, 0x7a5e29d4, 0x40000}};
  float check = 3.78710071e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2738) {
  s21_decimal decimal = {{0xc80fb0d4, 0xdb6fb902, 0x7a5e29d4, 0x80040000}};
  float check = -3.78710071e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2739) {
  s21_decimal decimal = {{0x7f419919, 0xe31c5396, 0x206d6eec, 0x30000}};
  float check = 1.00358174e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2740) {
  s21_decimal decimal = {{0x7f419919, 0xe31c5396, 0x206d6eec, 0x80030000}};
  float check = -1.00358174e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2741) {
  s21_decimal decimal = {{0xcf29c9ec, 0x34617b34, 0x483b69c4, 0x80020000}};
  float check = -2.23547477e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2742) {
  s21_decimal decimal = {{0xcf29c9ec, 0x34617b34, 0x483b69c4, 0x20000}};
  float check = 2.23547477e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2743) {
  s21_decimal decimal = {{0xf0beb852, 0x61a175c0, 0xd289c734, 0x1c0000}};
  float check = 6.51584148e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2744) {
  s21_decimal decimal = {{0xf0beb852, 0x61a175c0, 0xd289c734, 0x801c0000}};
  float check = -6.51584148e+00;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2745) {
  s21_decimal decimal = {{0xd965bda5, 0xebcac971, 0x37cae944, 0x1b0000}};
  float check = 1.72669792e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2746) {
  s21_decimal decimal = {{0xd965bda5, 0xebcac971, 0x37cae944, 0x801b0000}};
  float check = -1.72669792e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2747) {
  s21_decimal decimal = {{0x90301eae, 0x34a6bf50, 0x8dfdef4b, 0x10000}};
  float check = 4.39443739e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2748) {
  s21_decimal decimal = {{0x90301eae, 0x34a6bf50, 0x8dfdef4b, 0x80010000}};
  float check = -4.39443739e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2749) {
  s21_decimal decimal = {{0x77d644a, 0xa645c9bd, 0x25a0bb92, 0}};
  float check = 1.16452589e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2750) {
  s21_decimal decimal = {{0x77d644a, 0xa645c9bd, 0x25a0bb92, 0x80000000}};
  float check = -1.16452589e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2751) {
  s21_decimal decimal = {{0xcebb72dd, 0xd31309bc, 0xc601ead4, 0xf0000}};
  float check = 6.12803501e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2752) {
  s21_decimal decimal = {{0xcebb72dd, 0xd31309bc, 0xc601ead4, 0x800f0000}};
  float check = -6.12803501e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2753) {
  s21_decimal decimal = {{0xcb43980a, 0x84bc15c7, 0x3478d3fd, 0xe0000}};
  float check = 1.62392932e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2754) {
  s21_decimal decimal = {{0xcb43980a, 0x84bc15c7, 0x3478d3fd, 0x800e0000}};
  float check = -1.62392932e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2755) {
  s21_decimal decimal = {{0xa30a0437, 0xe341cce, 0x4d84d29e, 0x800a0000}};
  float check = -2.39909177e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2756) {
  s21_decimal decimal = {{0xa30a0437, 0xe341cce, 0x4d84d29e, 0xa0000}};
  float check = 2.39909177e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2757) {
  s21_decimal decimal = {{0x17d5f2d8, 0xa3a6e831, 0xdcd7f5d3, 0x30000}};
  float check = 6.83477832e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2758) {
  s21_decimal decimal = {{0x17d5f2d8, 0xa3a6e831, 0xdcd7f5d3, 0x80030000}};
  float check = -6.83477832e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2759) {
  s21_decimal decimal = {{0xb08e74d5, 0x48ceca54, 0x3a86078b, 0x20000}};
  float check = 1.81121626e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2760) {
  s21_decimal decimal = {{0xb08e74d5, 0x48ceca54, 0x3a86078b, 0x80020000}};
  float check = -1.81121626e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2761) {
  s21_decimal decimal = {{0xc8968bad, 0x61e8d6f0, 0x2d550daa, 0x80040000}};
  float check = -1.40296481e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2762) {
  s21_decimal decimal = {{0xc8968bad, 0x61e8d6f0, 0x2d550daa, 0x40000}};
  float check = 1.40296481e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2763) {
  s21_decimal decimal = {{0xd606b0e9, 0x84c42845, 0xe72fbaf1, 0x80170000}};
  float check = -7.15487375e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2764) {
  s21_decimal decimal = {{0xd606b0e9, 0x84c42845, 0xe72fbaf1, 0x170000}};
  float check = 7.15487375e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2765) {
  s21_decimal decimal = {{0x26f1b1c5, 0xea684c4e, 0xb4163da, 0x80020000}};
  float check = -3.48338677e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2766) {
  s21_decimal decimal = {{0x26f1b1c5, 0xea684c4e, 0xb4163da, 0x20000}};
  float check = 3.48338677e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2767) {
  s21_decimal decimal = {{0xa0d40309, 0x81798b44, 0x605124e3, 0x801a0000}};
  float check = -2.98086578e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2768) {
  s21_decimal decimal = {{0xa0d40309, 0x81798b44, 0x605124e3, 0x1a0000}};
  float check = 2.98086578e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2769) {
  s21_decimal decimal = {{0x108a9031, 0x3132acce, 0x9d47dab, 0x80180000}};
  float check = -3.04225073e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2770) {
  s21_decimal decimal = {{0x108a9031, 0x3132acce, 0x9d47dab, 0x180000}};
  float check = 3.04225073e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2771) {
  s21_decimal decimal = {{0xc232dc12, 0xd25faa98, 0x1383b13, 0x800a0000}};
  float check = -3.77463845e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2772) {
  s21_decimal decimal = {{0xc232dc12, 0xd25faa98, 0x1383b13, 0xa0000}};
  float check = 3.77463845e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2773) {
  s21_decimal decimal = {{0x296106f9, 0x5f57dedd, 0x7cc8a012, 0xb0000}};
  float check = 3.86186829e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2774) {
  s21_decimal decimal = {{0x296106f9, 0x5f57dedd, 0x7cc8a012, 0x800b0000}};
  float check = -3.86186829e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2775) {
  s21_decimal decimal = {{0xa5d86ea6, 0x75890d1, 0x21115361, 0xa0000}};
  float check = 1.02339505e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2776) {
  s21_decimal decimal = {{0xa5d86ea6, 0x75890d1, 0x21115361, 0x800a0000}};
  float check = -1.02339505e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2777) {
  s21_decimal decimal = {{0x4afeaa25, 0xc5a623f3, 0x96829e0a, 0xc0000}};
  float check = 4.65806598e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2778) {
  s21_decimal decimal = {{0x4afeaa25, 0xc5a623f3, 0x96829e0a, 0x800c0000}};
  float check = -4.65806598e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2779) {
  s21_decimal decimal = {{0x833bce5e, 0xc64c06f7, 0x27e29d14, 0xb0000}};
  float check = 1.23438743e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2780) {
  s21_decimal decimal = {{0x833bce5e, 0xc64c06f7, 0x27e29d14, 0x800b0000}};
  float check = -1.23438743e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2781) {
  s21_decimal decimal = {{0x249d4923, 0x62d6b3fb, 0x344c70e0, 0x800f0000}};
  float check = -1.61856314e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2782) {
  s21_decimal decimal = {{0x249d4923, 0x62d6b3fb, 0x344c70e0, 0xf0000}};
  float check = 1.61856314e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2783) {
  s21_decimal decimal = {{0xf1602bd7, 0x2da8f33, 0x57c4b78b, 0x150000}};
  float check = 2.71630120e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2784) {
  s21_decimal decimal = {{0xf1602bd7, 0x2da8f33, 0x57c4b78b, 0x80150000}};
  float check = -2.71630120e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2785) {
  s21_decimal decimal = {{0xd93eda93, 0xc78ffb7c, 0xe8961996, 0x150000}};
  float check = 7.19819840e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2786) {
  s21_decimal decimal = {{0xd93eda93, 0xc78ffb7c, 0xe8961996, 0x80150000}};
  float check = -7.19819840e+07;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2787) {
  s21_decimal decimal = {{0x1a8ac820, 0x49975c91, 0x1eaebade, 0x800f0000}};
  float check = -9.49578577e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2788) {
  s21_decimal decimal = {{0x1a8ac820, 0x49975c91, 0x1eaebade, 0xf0000}};
  float check = 9.49578577e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2789) {
  s21_decimal decimal = {{0x94e569a3, 0xe4331c86, 0xa1de0479, 0x80020000}};
  float check = -5.00954908e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2790) {
  s21_decimal decimal = {{0x94e569a3, 0xe4331c86, 0xa1de0479, 0x20000}};
  float check = 5.00954908e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2791) {
  s21_decimal decimal = {{0x6af6bbac, 0x6d4ac5e9, 0xe54fd32, 0x801a0000}};
  float check = -4.43553543e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2792) {
  s21_decimal decimal = {{0x6af6bbac, 0x6d4ac5e9, 0xe54fd32, 0x1a0000}};
  float check = 4.43553543e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2793) {
  s21_decimal decimal = {{0x56e62e47, 0xc40d0dd5, 0x8d59613a, 0x80060000}};
  float check = -4.37454403e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2794) {
  s21_decimal decimal = {{0x56e62e47, 0xc40d0dd5, 0x8d59613a, 0x60000}};
  float check = 4.37454403e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2795) {
  s21_decimal decimal = {{0x1dc45f9e, 0xb3e9c5bb, 0x2075b88b, 0x80050000}};
  float check = -1.00458365e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2796) {
  s21_decimal decimal = {{0x1dc45f9e, 0xb3e9c5bb, 0x2075b88b, 0x50000}};
  float check = 1.00458365e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2797) {
  s21_decimal decimal = {{0xc50f4bf4, 0x2d5426eb, 0x638f7017, 0x60000}};
  float check = 3.08124217e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2798) {
  s21_decimal decimal = {{0xc50f4bf4, 0x2d5426eb, 0x638f7017, 0x80060000}};
  float check = -3.08124217e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2799) {
  s21_decimal decimal = {{0x70617e5e, 0xb3b12e27, 0x1a622bc8, 0x50000}};
  float check = 8.16529184e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2800) {
  s21_decimal decimal = {{0x70617e5e, 0xb3b12e27, 0x1a622bc8, 0x80050000}};
  float check = -8.16529184e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2801) {
  s21_decimal decimal = {{0xf97205, 0xdfbe821f, 0x27590cae, 0x1a0000}};
  float check = 1.21775696e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2802) {
  s21_decimal decimal = {{0xf97205, 0xdfbe821f, 0x27590cae, 0x801a0000}};
  float check = -1.21775696e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2803) {
  s21_decimal decimal = {{0xf5c83af4, 0x6a85a59e, 0x684594cf, 0x1a0000}};
  float check = 3.22705597e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2804) {
  s21_decimal decimal = {{0xf5c83af4, 0x6a85a59e, 0x684594cf, 0x801a0000}};
  float check = -3.22705597e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2805) {
  s21_decimal decimal = {{0x1a40de26, 0xd17b4381, 0x59016861, 0x80140000}};
  float check = -2.75458688e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2806) {
  s21_decimal decimal = {{0x1a40de26, 0xd17b4381, 0x59016861, 0x140000}};
  float check = 2.75458688e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2807) {
  s21_decimal decimal = {{0x9681b903, 0xfe688742, 0x7867a760, 0x80130000}};
  float check = -3.72635110e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2808) {
  s21_decimal decimal = {{0x9681b903, 0xfe688742, 0x7867a760, 0x130000}};
  float check = 3.72635110e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2809) {
  s21_decimal decimal = {{0x70c4b37b, 0x2ce51484, 0x5ead65ce, 0xa0000}};
  float check = 2.93012152e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2810) {
  s21_decimal decimal = {{0x70c4b37b, 0x2ce51484, 0x5ead65ce, 0x800a0000}};
  float check = -2.93012152e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2811) {
  s21_decimal decimal = {{0xc46fa86c, 0x9092432b, 0xfae51a95, 0xa0000}};
  float check = 7.76482203e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2812) {
  s21_decimal decimal = {{0xc46fa86c, 0x9092432b, 0xfae51a95, 0x800a0000}};
  float check = -7.76482203e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2813) {
  s21_decimal decimal = {{0x6a8d9e25, 0x5b38271f, 0xc90c5fdc, 0x80040000}};
  float check = -6.22214442e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2814) {
  s21_decimal decimal = {{0x6a8d9e25, 0x5b38271f, 0xc90c5fdc, 0x40000}};
  float check = 6.22214442e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2815) {
  s21_decimal decimal = {{0x8464ea81, 0xbfdf5800, 0x4ec43af6, 0x80130000}};
  float check = -2.43770598e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2816) {
  s21_decimal decimal = {{0x8464ea81, 0xbfdf5800, 0x4ec43af6, 0x130000}};
  float check = 2.43770598e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2817) {
  s21_decimal decimal = {{0x92911682, 0x3e158fca, 0xeb390946, 0x180000}};
  float check = 7.27979297e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2818) {
  s21_decimal decimal = {{0x92911682, 0x3e158fca, 0xeb390946, 0x80180000}};
  float check = -7.27979297e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2819) {
  s21_decimal decimal = {{0x5c99a5f7, 0xdab13bdd, 0x3e5583bc, 0x170000}};
  float check = 1.92914516e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2820) {
  s21_decimal decimal = {{0x5c99a5f7, 0xdab13bdd, 0x3e5583bc, 0x80170000}};
  float check = -1.92914516e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2821) {
  s21_decimal decimal = {{0x9f789a69, 0xe115e57f, 0xc08431f7, 0x130000}};
  float check = 5.95809382e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2822) {
  s21_decimal decimal = {{0x9f789a69, 0xe115e57f, 0xc08431f7, 0x80130000}};
  float check = -5.95809382e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2823) {
  s21_decimal decimal = {{0x9ebd665c, 0x353f670e, 0x33044fcd, 0x120000}};
  float check = 1.57889485e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2824) {
  s21_decimal decimal = {{0x9ebd665c, 0x353f670e, 0x33044fcd, 0x80120000}};
  float check = -1.57889485e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2825) {
  s21_decimal decimal = {{0x931bb03b, 0xcd632d0c, 0x4d813c0d, 0x80120000}};
  float check = -2.39865815e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2826) {
  s21_decimal decimal = {{0x931bb03b, 0xcd632d0c, 0x4d813c0d, 0x120000}};
  float check = 2.39865815e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2827) {
  s21_decimal decimal = {{0x79edd398, 0x73e0b56a, 0x81772250, 0x40000}};
  float check = 4.00675906e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2828) {
  s21_decimal decimal = {{0x79edd398, 0x73e0b56a, 0x81772250, 0x80040000}};
  float check = -4.00675906e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2829) {
  s21_decimal decimal = {{0xe56e6250, 0x99966d83, 0x224eee36, 0x30000}};
  float check = 1.06179113e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2830) {
  s21_decimal decimal = {{0xe56e6250, 0x99966d83, 0x224eee36, 0x80030000}};
  float check = -1.06179113e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2831) {
  s21_decimal decimal = {{0xb15d2149, 0xf0a4fc34, 0xba491489, 0xb0000}};
  float check = 5.76525623e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2832) {
  s21_decimal decimal = {{0xb15d2149, 0xf0a4fc34, 0xba491489, 0x800b0000}};
  float check = -5.76525623e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2833) {
  s21_decimal decimal = {{0xa4c2eb61, 0xea02c2d5, 0x315d9b33, 0xa0000}};
  float check = 1.52779285e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2834) {
  s21_decimal decimal = {{0xa4c2eb61, 0xea02c2d5, 0x315d9b33, 0x800a0000}};
  float check = -1.52779285e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2835) {
  s21_decimal decimal = {{0x8b92a36, 0x14bde1b9, 0xff99b51d, 0xa0000}};
  float check = 7.91044960e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2836) {
  s21_decimal decimal = {{0x8b92a36, 0x14bde1b9, 0xff99b51d, 0x800a0000}};
  float check = -7.91044960e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2837) {
  s21_decimal decimal = {{0xb6caab30, 0x11043d18, 0x43bbeeb7, 0x90000}};
  float check = 2.09626928e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2838) {
  s21_decimal decimal = {{0xb6caab30, 0x11043d18, 0x43bbeeb7, 0x80090000}};
  float check = -2.09626928e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2839) {
  s21_decimal decimal = {{0x125023af, 0xeb47ce17, 0x7648bb6a, 0x80190000}};
  float check = -3.66071582e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2840) {
  s21_decimal decimal = {{0x125023af, 0xeb47ce17, 0x7648bb6a, 0x190000}};
  float check = 3.66071582e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2841) {
  s21_decimal decimal = {{0x215b8ad0, 0x85db8bdb, 0x470e2ad3, 0xc0000}};
  float check = 2.19905633e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2842) {
  s21_decimal decimal = {{0x215b8ad0, 0x85db8bdb, 0x470e2ad3, 0x800c0000}};
  float check = -2.19905633e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2843) {
  s21_decimal decimal = {{0x4b98fca7, 0x55ec329e, 0xbc4bf17d, 0xc0000}};
  float check = 5.82749924e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2844) {
  s21_decimal decimal = {{0x4b98fca7, 0x55ec329e, 0xbc4bf17d, 0x800c0000}};
  float check = -5.82749924e+16;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2845) {
  s21_decimal decimal = {{0x5e0e0ae9, 0xc6c8d161, 0x593c00f, 0x190000}};
  float check = 1.72604416e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2846) {
  s21_decimal decimal = {{0x5e0e0ae9, 0xc6c8d161, 0x593c00f, 0x80190000}};
  float check = -1.72604416e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2847) {
  s21_decimal decimal = {{0x3c74211e, 0x13c9ac94, 0x93cb61a2, 0x1a0000}};
  float check = 4.57401703e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2848) {
  s21_decimal decimal = {{0x3c74211e, 0x13c9ac94, 0x93cb61a2, 0x801a0000}};
  float check = -4.57401703e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2849) {
  s21_decimal decimal = {{0xa355fdfc, 0x1b8b0244, 0xe85eee17, 0x80100000}};
  float check = -7.19152847e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2850) {
  s21_decimal decimal = {{0xa355fdfc, 0x1b8b0244, 0xe85eee17, 0x100000}};
  float check = 7.19152847e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2851) {
  s21_decimal decimal = {{0xeaf8190c, 0x8b31062b, 0x5fa756c8, 0x40000}};
  float check = 2.96033752e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2852) {
  s21_decimal decimal = {{0xeaf8190c, 0x8b31062b, 0x5fa756c8, 0x80040000}};
  float check = -2.96033752e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2853) {
  s21_decimal decimal = {{0x2eab0f2d, 0xa40eb6c1, 0xfd7b72c6, 0x40000}};
  float check = 7.84489470e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2854) {
  s21_decimal decimal = {{0x2eab0f2d, 0xa40eb6c1, 0xfd7b72c6, 0x80040000}};
  float check = -7.84489470e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2855) {
  s21_decimal decimal = {{0xac779c38, 0x99867e4a, 0x35679e5d, 0}};
  float check = 1.65279722e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2856) {
  s21_decimal decimal = {{0xac779c38, 0x99867e4a, 0x35679e5d, 0x80000000}};
  float check = -1.65279722e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2857) {
  s21_decimal decimal = {{0xe2a35dfb, 0xa3a46845, 0x8d85ca11, 0}};
  float check = 4.37991274e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2858) {
  s21_decimal decimal = {{0xe2a35dfb, 0xa3a46845, 0x8d85ca11, 0x80000000}};
  float check = -4.37991274e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2859) {
  s21_decimal decimal = {{0x96d4c891, 0x3f90e7b0, 0x967e4a75, 0x80060000}};
  float check = -4.65754257e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2860) {
  s21_decimal decimal = {{0x96d4c891, 0x3f90e7b0, 0x967e4a75, 0x60000}};
  float check = 4.65754257e+22;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2861) {
  s21_decimal decimal = {{0xb2aa0737, 0xe64693f2, 0xd1fe989a, 0x10000}};
  float check = 6.49901520e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2862) {
  s21_decimal decimal = {{0xb2aa0737, 0xe64693f2, 0xd1fe989a, 0x80010000}};
  float check = -6.49901520e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2863) {
  s21_decimal decimal = {{0x8e10e5c0, 0xc62102a, 0x37a60729, 0}};
  float check = 1.72223915e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2864) {
  s21_decimal decimal = {{0x8e10e5c0, 0xc62102a, 0x37a60729, 0x80000000}};
  float check = -1.72223915e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2865) {
  s21_decimal decimal = {{0xb8f9e6e, 0xfa59be2b, 0xa54dc9f0, 0x130000}};
  float check = 5.11590656e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2866) {
  s21_decimal decimal = {{0xb8f9e6e, 0xfa59be2b, 0xa54dc9f0, 0x80130000}};
  float check = -5.11590656e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2867) {
  s21_decimal decimal = {{0x16437fbe, 0x61101a13, 0x2bce36cb, 0x120000}};
  float check = 1.35571528e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2868) {
  s21_decimal decimal = {{0x16437fbe, 0x61101a13, 0x2bce36cb, 0x80120000}};
  float check = -1.35571528e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2869) {
  s21_decimal decimal = {{0x27e0edd6, 0x56ad0d23, 0x36029de7, 0x20000}};
  float check = 1.67153548e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2870) {
  s21_decimal decimal = {{0x27e0edd6, 0x56ad0d23, 0x36029de7, 0x80020000}};
  float check = -1.67153548e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2871) {
  s21_decimal decimal = {{0x90140fde, 0x3f4a9603, 0x8f2088d8, 0x20000}};
  float check = 4.42956869e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2872) {
  s21_decimal decimal = {{0x90140fde, 0x3f4a9603, 0x8f2088d8, 0x80020000}};
  float check = -4.42956869e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2873) {
  s21_decimal decimal = {{0x3368c5fa, 0xfc672208, 0xd140641d, 0x80120000}};
  float check = -6.47602094e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2874) {
  s21_decimal decimal = {{0x3368c5fa, 0xfc672208, 0xd140641d, 0x120000}};
  float check = 6.47602094e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2875) {
  s21_decimal decimal = {{0x1b60b91c, 0xa54bd3f4, 0x504d01b2, 0}};
  float check = 2.48518952e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2876) {
  s21_decimal decimal = {{0x1b60b91c, 0xa54bd3f4, 0x504d01b2, 0x80000000}};
  float check = -2.48518952e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2877) {
  s21_decimal decimal = {{0xaef38424, 0x9c6f5813, 0xd4cc114c, 0}};
  float check = 6.58575232e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2878) {
  s21_decimal decimal = {{0xaef38424, 0x9c6f5813, 0xd4cc114c, 0x80000000}};
  float check = -6.58575232e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2879) {
  s21_decimal decimal = {{0xd559d1de, 0xf4dd4105, 0xd7ad157a, 0x50000}};
  float check = 6.67485202e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2880) {
  s21_decimal decimal = {{0xd559d1de, 0xf4dd4105, 0xd7ad157a, 0x80050000}};
  float check = -6.67485202e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2881) {
  s21_decimal decimal = {{0x95fa5cbc, 0xbe543b78, 0x3927779c, 0x40000}};
  float check = 1.76883581e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2882) {
  s21_decimal decimal = {{0x95fa5cbc, 0xbe543b78, 0x3927779c, 0x80040000}};
  float check = -1.76883581e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2883) {
  s21_decimal decimal = {{0x722a4eb2, 0x3c382ead, 0xce8f3665, 0x130000}};
  float check = 6.39270451e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2884) {
  s21_decimal decimal = {{0x722a4eb2, 0x3c382ead, 0xce8f3665, 0x80130000}};
  float check = -6.39270451e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2885) {
  s21_decimal decimal = {{0x9a69ee74, 0x58eb0c5e, 0x36bcfdc6, 0x120000}};
  float check = 1.69406669e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2886) {
  s21_decimal decimal = {{0x9a69ee74, 0x58eb0c5e, 0x36bcfdc6, 0x80120000}};
  float check = -1.69406669e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2887) {
  s21_decimal decimal = {{0x72f3f37c, 0x7f9bd2b0, 0x5d29e3c5, 0xa0000}};
  float check = 2.88327463e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2888) {
  s21_decimal decimal = {{0x72f3f37c, 0x7f9bd2b0, 0x5d29e3c5, 0x800a0000}};
  float check = -2.88327463e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2889) {
  s21_decimal decimal = {{0x9706786f, 0xc55cee53, 0xf6e23531, 0xa0000}};
  float check = 7.64067783e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2890) {
  s21_decimal decimal = {{0x9706786f, 0xc55cee53, 0xf6e23531, 0x800a0000}};
  float check = -7.64067783e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2891) {
  s21_decimal decimal = {{0xbc710527, 0xb34e3c86, 0x8979a50, 0x801a0000}};
  float check = -2.65915661e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2892) {
  s21_decimal decimal = {{0xbc710527, 0xb34e3c86, 0x8979a50, 0x1a0000}};
  float check = 2.65915661e+01;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2893) {
  s21_decimal decimal = {{0xa1ddfc88, 0x87c08b46, 0x3ac33770, 0x80000}};
  float check = 1.81861334e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2894) {
  s21_decimal decimal = {{0xa1ddfc88, 0x87c08b46, 0x3ac33770, 0x80080000}};
  float check = -1.81861334e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2895) {
  s21_decimal decimal = {{0x93591068, 0x67be3de1, 0x9bb8861d, 0x80000}};
  float check = 4.81932518e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2896) {
  s21_decimal decimal = {{0x93591068, 0x67be3de1, 0x9bb8861d, 0x80080000}};
  float check = -4.81932518e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2897) {
  s21_decimal decimal = {{0x3350fc16, 0x342e21c6, 0x7b26d31, 0xa0000}};
  float check = 2.38209950e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2898) {
  s21_decimal decimal = {{0x3350fc16, 0x342e21c6, 0x7b26d31, 0x800a0000}};
  float check = -2.38209950e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2899) {
  s21_decimal decimal = {{0x4fe21847, 0xe6c67f04, 0xcbf84d97, 0xb0000}};
  float check = 6.31256357e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2900) {
  s21_decimal decimal = {{0x4fe21847, 0xe6c67f04, 0xcbf84d97, 0x800b0000}};
  float check = -6.31256357e+17;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2901) {
  s21_decimal decimal = {{0x2422c06, 0x52673268, 0xfa2047f8, 0x20000}};
  float check = 7.74102784e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2902) {
  s21_decimal decimal = {{0x2422c06, 0x52673268, 0xfa2047f8, 0x80020000}};
  float check = -7.74102784e+26;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2903) {
  s21_decimal decimal = {{0xcd6603fc, 0xb9ad4465, 0x42488df3, 0x10000}};
  float check = 2.05137239e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2904) {
  s21_decimal decimal = {{0xcd6603fc, 0xb9ad4465, 0x42488df3, 0x80010000}};
  float check = -2.05137239e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2905) {
  s21_decimal decimal = {{0x7559ddee, 0x82429c25, 0x4573b720, 0x170000}};
  float check = 2.14943562e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2906) {
  s21_decimal decimal = {{0x7559ddee, 0x82429c25, 0x4573b720, 0x80170000}};
  float check = -2.14943562e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2907) {
  s21_decimal decimal = {{0xaa2e25b7, 0xf2ca1dc9, 0xb80c3ee2, 0x170000}};
  float check = 5.69600438e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2908) {
  s21_decimal decimal = {{0xaa2e25b7, 0xf2ca1dc9, 0xb80c3ee2, 0x80170000}};
  float check = -5.69600438e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2909) {
  s21_decimal decimal = {{0x9c57a9bf, 0xe0ac2b71, 0x288da3f1, 0x801a0000}};
  float check = -1.25506332e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2910) {
  s21_decimal decimal = {{0x9c57a9bf, 0xe0ac2b71, 0x288da3f1, 0x1a0000}};
  float check = 1.25506332e+02;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2911) {
  s21_decimal decimal = {{0xcbad4239, 0x54767490, 0x85d06d99, 0x130000}};
  float check = 4.14134810e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2912) {
  s21_decimal decimal = {{0xcbad4239, 0x54767490, 0x85d06d99, 0x80130000}};
  float check = -4.14134810e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2913) {
  s21_decimal decimal = {{0xcf930897, 0x6eb3dee3, 0x2375f415, 0x120000}};
  float check = 1.09745725e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2914) {
  s21_decimal decimal = {{0xcf930897, 0x6eb3dee3, 0x2375f415, 0x80120000}};
  float check = -1.09745725e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2915) {
  s21_decimal decimal = {{0xe8de4b87, 0x1c84248b, 0xab646058, 0x80160000}};
  float check = -5.30432850e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2916) {
  s21_decimal decimal = {{0xe8de4b87, 0x1c84248b, 0xab646058, 0x160000}};
  float check = 5.30432850e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2917) {
  s21_decimal decimal = {{0xb696ed1f, 0x5437fac7, 0xcaf6a6bb, 0x90000}};
  float check = 6.28141537e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2918) {
  s21_decimal decimal = {{0xb696ed1f, 0x5437fac7, 0xcaf6a6bb, 0x80090000}};
  float check = -6.28141537e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2919) {
  s21_decimal decimal = {{0x86256f7a, 0x66f53c0e, 0x35c90ae7, 0x80000}};
  float check = 1.66457511e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2920) {
  s21_decimal decimal = {{0x86256f7a, 0x66f53c0e, 0x35c90ae7, 0x80080000}};
  float check = -1.66457511e+20;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2921) {
  s21_decimal decimal = {{0x90e34b79, 0x7978ed25, 0x7b6e8d32, 0x170000}};
  float check = 3.82003062e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2922) {
  s21_decimal decimal = {{0x90e34b79, 0x7978ed25, 0x7b6e8d32, 0x80170000}};
  float check = -3.82003062e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2923) {
  s21_decimal decimal = {{0x6f5af400, 0xbc59a53e, 0x20b59dbc, 0x160000}};
  float check = 1.01230806e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2924) {
  s21_decimal decimal = {{0x6f5af400, 0xbc59a53e, 0x20b59dbc, 0x80160000}};
  float check = -1.01230806e+06;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2925) {
  s21_decimal decimal = {{0x279c6045, 0x9750c1e1, 0xeca8aa71, 0x10000}};
  float check = 7.32423694e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2926) {
  s21_decimal decimal = {{0x279c6045, 0x9750c1e1, 0xeca8aa71, 0x80010000}};
  float check = -7.32423694e+27;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2927) {
  s21_decimal decimal = {{0x4e563d5a, 0x42fa854c, 0x3eb6efba, 0}};
  float check = 1.94092273e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2928) {
  s21_decimal decimal = {{0x4e563d5a, 0x42fa854c, 0x3eb6efba, 0x80000000}};
  float check = -1.94092273e+28;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2929) {
  s21_decimal decimal = {{0xba3e9795, 0x43620991, 0xe56d7f87, 0x190000}};
  float check = 7.10044434e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2930) {
  s21_decimal decimal = {{0xba3e9795, 0x43620991, 0xe56d7f87, 0x80190000}};
  float check = -7.10044434e+03;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2931) {
  s21_decimal decimal = {{0x93ea2fd9, 0xd841a8ef, 0x3ccc6083, 0x180000}};
  float check = 1.88161777e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2932) {
  s21_decimal decimal = {{0x93ea2fd9, 0xd841a8ef, 0x3ccc6083, 0x80180000}};
  float check = -1.88161777e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2933) {
  s21_decimal decimal = {{0xff2baa77, 0x1e7ebc34, 0x7d974ef9, 0x80170000}};
  float check = -3.88685469e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2934) {
  s21_decimal decimal = {{0xff2baa77, 0x1e7ebc34, 0x7d974ef9, 0x170000}};
  float check = 3.88685469e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2935) {
  s21_decimal decimal = {{0xe73bdf51, 0x6ba0ef28, 0xbf9a80e3, 0x80180000}};
  float check = -5.92984219e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2936) {
  s21_decimal decimal = {{0xe73bdf51, 0x6ba0ef28, 0xbf9a80e3, 0x180000}};
  float check = 5.92984219e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2937) {
  s21_decimal decimal = {{0x57d45c56, 0x4acad41d, 0x641bc41, 0x100000}};
  float check = 1.93637925e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2938) {
  s21_decimal decimal = {{0x57d45c56, 0x4acad41d, 0x641bc41, 0x80100000}};
  float check = -1.93637925e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2939) {
  s21_decimal decimal = {{0x977b8ee7, 0x3dfef509, 0xa5cdfcc2, 0x110000}};
  float check = 5.13140490e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2940) {
  s21_decimal decimal = {{0x977b8ee7, 0x3dfef509, 0xa5cdfcc2, 0x80110000}};
  float check = -5.13140490e+11;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2941) {
  s21_decimal decimal = {{0xbf03e16d, 0x6b6bc7af, 0x4a457bcc, 0x120000}};
  float check = 2.29858918e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2942) {
  s21_decimal decimal = {{0xbf03e16d, 0x6b6bc7af, 0x4a457bcc, 0x80120000}};
  float check = -2.29858918e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2943) {
  s21_decimal decimal = {{0xed63e22e, 0x1caa6ac4, 0xc4d1bb44, 0x120000}};
  float check = 6.09126113e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2944) {
  s21_decimal decimal = {{0xed63e22e, 0x1caa6ac4, 0xc4d1bb44, 0x80120000}};
  float check = -6.09126113e+10;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2945) {
  s21_decimal decimal = {{0x45dd852f, 0x6f6d520b, 0x47dba64d, 0x80070000}};
  float check = -2.22389762e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2946) {
  s21_decimal decimal = {{0x45dd852f, 0x6f6d520b, 0x47dba64d, 0x70000}};
  float check = 2.22389762e+21;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2947) {
  s21_decimal decimal = {{0x44844f6e, 0x7a05be84, 0x8954b63a, 0x140000}};
  float check = 4.25018560e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2948) {
  s21_decimal decimal = {{0x44844f6e, 0x7a05be84, 0x8954b63a, 0x80140000}};
  float check = -4.25018560e+08;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2949) {
  s21_decimal decimal = {{0x2bc1c840, 0x9dc6a468, 0x24648754, 0x130000}};
  float check = 1.12629926e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2950) {
  s21_decimal decimal = {{0x2bc1c840, 0x9dc6a468, 0x24648754, 0x80130000}};
  float check = -1.12629926e+09;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2951) {
  s21_decimal decimal = {{0xc3e7d2b4, 0xb1d38949, 0x24141bda, 0x80100000}};
  float check = -1.11657707e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2952) {
  s21_decimal decimal = {{0xc3e7d2b4, 0xb1d38949, 0x24141bda, 0x100000}};
  float check = 1.11657707e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2953) {
  s21_decimal decimal = {{0xc11744c1, 0x8761f3d9, 0x7db5b620, 0x80030000}};
  float check = -3.89053039e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2954) {
  s21_decimal decimal = {{0xc11744c1, 0x8761f3d9, 0x7db5b620, 0x30000}};
  float check = 3.89053039e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2955) {
  s21_decimal decimal = {{0x2c1cb8ca, 0x660d514f, 0x4a534ccc, 0x90000}};
  float check = 2.30025947e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2956) {
  s21_decimal decimal = {{0x2c1cb8ca, 0x660d514f, 0x4a534ccc, 0x80090000}};
  float check = -2.30025947e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2957) {
  s21_decimal decimal = {{0x1b2834a, 0xdb3ce445, 0xc4f65850, 0x90000}};
  float check = 6.09568763e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2958) {
  s21_decimal decimal = {{0x1b2834a, 0xdb3ce445, 0xc4f65850, 0x80090000}};
  float check = -6.09568763e+19;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2959) {
  s21_decimal decimal = {{0x5c009952, 0xbab30902, 0x2b30c357, 0x800d0000}};
  float check = -1.33668066e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2960) {
  s21_decimal decimal = {{0x5c009952, 0xbab30902, 0x2b30c357, 0xd0000}};
  float check = 1.33668066e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2961) {
  s21_decimal decimal = {{0x41b13da5, 0xf31cd04, 0x926db4a0, 0xe0000}};
  float check = 4.53174381e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2962) {
  s21_decimal decimal = {{0x41b13da5, 0xf31cd04, 0x926db4a0, 0x800e0000}};
  float check = -4.53174381e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2963) {
  s21_decimal decimal = {{0xe35416bc, 0x406cc16, 0x26cdb644, 0xd0000}};
  float check = 1.20091205e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2964) {
  s21_decimal decimal = {{0xe35416bc, 0x406cc16, 0x26cdb644, 0x800d0000}};
  float check = -1.20091205e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2965) {
  s21_decimal decimal = {{0x204af4a5, 0x1e07053a, 0x5ec3d3ec, 0x50000}};
  float check = 2.93283325e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2966) {
  s21_decimal decimal = {{0x204af4a5, 0x1e07053a, 0x5ec3d3ec, 0x80050000}};
  float check = -2.93283325e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2967) {
  s21_decimal decimal = {{0x3bf9d51c, 0xb5f9010d, 0xfb208b31, 0x50000}};
  float check = 7.77200815e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2968) {
  s21_decimal decimal = {{0x3bf9d51c, 0xb5f9010d, 0xfb208b31, 0x80050000}};
  float check = -7.77200815e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2969) {
  s21_decimal decimal = {{0xa1f09d6, 0xd5dbd2e6, 0xb575b26c, 0x100000}};
  float check = 5.61590724e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2970) {
  s21_decimal decimal = {{0xa1f09d6, 0xd5dbd2e6, 0xb575b26c, 0x80100000}};
  float check = -5.61590724e+12;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2971) {
  s21_decimal decimal = {{0x33527716, 0x7b3b8887, 0x30163acd, 0xf0000}};
  float check = 1.48821550e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2972) {
  s21_decimal decimal = {{0x33527716, 0x7b3b8887, 0x30163acd, 0x800f0000}};
  float check = -1.48821550e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2973) {
  s21_decimal decimal = {{0xb89a2705, 0x27634e48, 0x4566545e, 0xe0000}};
  float check = 2.14781751e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2974) {
  s21_decimal decimal = {{0xb89a2705, 0x27634e48, 0x4566545e, 0x800e0000}};
  float check = -2.14781751e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2975) {
  s21_decimal decimal = {{0xb5fee767, 0x81fa5c40, 0xb7e8c5f9, 0xe0000}};
  float check = 5.69171616e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2976) {
  s21_decimal decimal = {{0xb5fee767, 0x81fa5c40, 0xb7e8c5f9, 0x800e0000}};
  float check = -5.69171616e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2977) {
  s21_decimal decimal = {{0x423dc9bc, 0x71b65e31, 0x96f10c25, 0x40000}};
  float check = 4.67141600e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2978) {
  s21_decimal decimal = {{0x423dc9bc, 0x71b65e31, 0x96f10c25, 0x80040000}};
  float check = -4.67141600e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2979) {
  s21_decimal decimal = {{0xd0462242, 0xa488a5c2, 0x27ffe0a8, 0x30000}};
  float check = 1.23792525e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2980) {
  s21_decimal decimal = {{0xd0462242, 0xa488a5c2, 0x27ffe0a8, 0x80030000}};
  float check = -1.23792525e+25;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2981) {
  s21_decimal decimal = {{0xf4a0970f, 0xba939905, 0x74d51c78, 0x80040000}};
  float check = -3.61578954e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2982) {
  s21_decimal decimal = {{0xf4a0970f, 0xba939905, 0x74d51c78, 0x40000}};
  float check = 3.61578954e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2983) {
  s21_decimal decimal = {{0x8a28e1be, 0x8df6839a, 0xab7256b1, 0x180000}};
  float check = 5.30601641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2984) {
  s21_decimal decimal = {{0x8a28e1be, 0x8df6839a, 0xab7256b1, 0x80180000}};
  float check = -5.30601641e+04;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2985) {
  s21_decimal decimal = {{0x31698dbe, 0xe4571613, 0x2d6ef092, 0x170000}};
  float check = 1.40609438e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2986) {
  s21_decimal decimal = {{0x31698dbe, 0xe4571613, 0x2d6ef092, 0x80170000}};
  float check = -1.40609438e+05;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2987) {
  s21_decimal decimal = {{0xde2c3ea3, 0x7fe5ec79, 0x24f3c5bb, 0x800a0000}};
  float check = -1.14361634e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2988) {
  s21_decimal decimal = {{0xde2c3ea3, 0x7fe5ec79, 0x24f3c5bb, 0xa0000}};
  float check = 1.14361634e+18;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2989) {
  s21_decimal decimal = {{0xe1505275, 0xfce5a857, 0xe6807b1c, 0xe0000}};
  float check = 7.13368768e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2990) {
  s21_decimal decimal = {{0xe1505275, 0xfce5a857, 0xe6807b1c, 0x800e0000}};
  float check = -7.13368768e+14;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2991) {
  s21_decimal decimal = {{0xcee87c40, 0x5260b302, 0x3d153f58, 0xd0000}};
  float check = 1.89042717e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2992) {
  s21_decimal decimal = {{0xcee87c40, 0x5260b302, 0x3d153f58, 0x800d0000}};
  float check = -1.89042717e+15;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2993) {
  s21_decimal decimal = {{0x94abcda4, 0x333c3ede, 0x45bd83a5, 0x80040000}};
  float check = -2.15835740e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2994) {
  s21_decimal decimal = {{0x94abcda4, 0x333c3ede, 0x45bd83a5, 0x40000}};
  float check = 2.15835740e+24;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2995) {
  s21_decimal decimal = {{0x1023791f, 0x67e38343, 0x750f658a, 0x50000}};
  float check = 3.62283605e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2996) {
  s21_decimal decimal = {{0x1023791f, 0x67e38343, 0x750f658a, 0x80050000}};
  float check = -3.62283605e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2997) {
  s21_decimal decimal = {{0x406fcce6, 0x32920d06, 0x1f055c30, 0x40000}};
  float check = 9.60051500e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2998) {
  s21_decimal decimal = {{0x406fcce6, 0x32920d06, 0x1f055c30, 0x80040000}};
  float check = -9.60051500e+23;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_2999) {
  s21_decimal decimal = {{0x8f00052e, 0x22e47096, 0x49d89924, 0x800f0000}};
  float check = -2.28542571e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_3000) {
  s21_decimal decimal = {{0x8f00052e, 0x22e47096, 0x49d89924, 0xf0000}};
  float check = 2.28542571e+13;
  test_from_decimal_to_float(decimal, check);
}
END_TEST

Suite *from_decimal_to_float_suite_1(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_float_1" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_decimal_to_float_1);
  tcase_add_test(tc_core, test_from_decimal_to_float_2);
  tcase_add_test(tc_core, test_from_decimal_to_float_3);
  tcase_add_test(tc_core, test_from_decimal_to_float_4);
  tcase_add_test(tc_core, test_from_decimal_to_float_5);
  tcase_add_test(tc_core, test_from_decimal_to_float_6);
  tcase_add_test(tc_core, test_from_decimal_to_float_7);
  tcase_add_test(tc_core, test_from_decimal_to_float_8);
  tcase_add_test(tc_core, test_from_decimal_to_float_9);
  tcase_add_test(tc_core, test_from_decimal_to_float_10);
  tcase_add_test(tc_core, test_from_decimal_to_float_11);
  tcase_add_test(tc_core, test_from_decimal_to_float_12);
  tcase_add_test(tc_core, test_from_decimal_to_float_13);
  tcase_add_test(tc_core, test_from_decimal_to_float_14);
  tcase_add_test(tc_core, test_from_decimal_to_float_15);
  tcase_add_test(tc_core, test_from_decimal_to_float_16);
  tcase_add_test(tc_core, test_from_decimal_to_float_17);
  tcase_add_test(tc_core, test_from_decimal_to_float_18);
  tcase_add_test(tc_core, test_from_decimal_to_float_19);
  tcase_add_test(tc_core, test_from_decimal_to_float_20);
  tcase_add_test(tc_core, test_from_decimal_to_float_21);
  tcase_add_test(tc_core, test_from_decimal_to_float_22);
  tcase_add_test(tc_core, test_from_decimal_to_float_23);
  tcase_add_test(tc_core, test_from_decimal_to_float_24);
  tcase_add_test(tc_core, test_from_decimal_to_float_25);
  tcase_add_test(tc_core, test_from_decimal_to_float_26);
  tcase_add_test(tc_core, test_from_decimal_to_float_27);
  tcase_add_test(tc_core, test_from_decimal_to_float_28);
  tcase_add_test(tc_core, test_from_decimal_to_float_29);
  tcase_add_test(tc_core, test_from_decimal_to_float_30);
  tcase_add_test(tc_core, test_from_decimal_to_float_31);
  tcase_add_test(tc_core, test_from_decimal_to_float_32);
  tcase_add_test(tc_core, test_from_decimal_to_float_33);
  tcase_add_test(tc_core, test_from_decimal_to_float_34);
  tcase_add_test(tc_core, test_from_decimal_to_float_35);
  tcase_add_test(tc_core, test_from_decimal_to_float_36);
  tcase_add_test(tc_core, test_from_decimal_to_float_37);
  tcase_add_test(tc_core, test_from_decimal_to_float_38);
  tcase_add_test(tc_core, test_from_decimal_to_float_39);
  tcase_add_test(tc_core, test_from_decimal_to_float_40);
  tcase_add_test(tc_core, test_from_decimal_to_float_41);
  tcase_add_test(tc_core, test_from_decimal_to_float_42);
  tcase_add_test(tc_core, test_from_decimal_to_float_43);
  tcase_add_test(tc_core, test_from_decimal_to_float_44);
  tcase_add_test(tc_core, test_from_decimal_to_float_45);
  tcase_add_test(tc_core, test_from_decimal_to_float_46);
  tcase_add_test(tc_core, test_from_decimal_to_float_47);
  tcase_add_test(tc_core, test_from_decimal_to_float_48);
  tcase_add_test(tc_core, test_from_decimal_to_float_49);
  tcase_add_test(tc_core, test_from_decimal_to_float_50);
  tcase_add_test(tc_core, test_from_decimal_to_float_51);
  tcase_add_test(tc_core, test_from_decimal_to_float_52);
  tcase_add_test(tc_core, test_from_decimal_to_float_53);
  tcase_add_test(tc_core, test_from_decimal_to_float_54);
  tcase_add_test(tc_core, test_from_decimal_to_float_55);
  tcase_add_test(tc_core, test_from_decimal_to_float_56);
  tcase_add_test(tc_core, test_from_decimal_to_float_57);
  tcase_add_test(tc_core, test_from_decimal_to_float_58);
  tcase_add_test(tc_core, test_from_decimal_to_float_59);
  tcase_add_test(tc_core, test_from_decimal_to_float_60);
  tcase_add_test(tc_core, test_from_decimal_to_float_61);
  tcase_add_test(tc_core, test_from_decimal_to_float_62);
  tcase_add_test(tc_core, test_from_decimal_to_float_63);
  tcase_add_test(tc_core, test_from_decimal_to_float_64);
  tcase_add_test(tc_core, test_from_decimal_to_float_65);
  tcase_add_test(tc_core, test_from_decimal_to_float_66);
  tcase_add_test(tc_core, test_from_decimal_to_float_67);
  tcase_add_test(tc_core, test_from_decimal_to_float_68);
  tcase_add_test(tc_core, test_from_decimal_to_float_69);
  tcase_add_test(tc_core, test_from_decimal_to_float_70);
  tcase_add_test(tc_core, test_from_decimal_to_float_71);
  tcase_add_test(tc_core, test_from_decimal_to_float_72);
  tcase_add_test(tc_core, test_from_decimal_to_float_73);
  tcase_add_test(tc_core, test_from_decimal_to_float_74);
  tcase_add_test(tc_core, test_from_decimal_to_float_75);
  tcase_add_test(tc_core, test_from_decimal_to_float_76);
  tcase_add_test(tc_core, test_from_decimal_to_float_77);
  tcase_add_test(tc_core, test_from_decimal_to_float_78);
  tcase_add_test(tc_core, test_from_decimal_to_float_79);
  tcase_add_test(tc_core, test_from_decimal_to_float_80);
  tcase_add_test(tc_core, test_from_decimal_to_float_81);
  tcase_add_test(tc_core, test_from_decimal_to_float_82);
  tcase_add_test(tc_core, test_from_decimal_to_float_83);
  tcase_add_test(tc_core, test_from_decimal_to_float_84);
  tcase_add_test(tc_core, test_from_decimal_to_float_85);
  tcase_add_test(tc_core, test_from_decimal_to_float_86);
  tcase_add_test(tc_core, test_from_decimal_to_float_87);
  tcase_add_test(tc_core, test_from_decimal_to_float_88);
  tcase_add_test(tc_core, test_from_decimal_to_float_89);
  tcase_add_test(tc_core, test_from_decimal_to_float_90);
  tcase_add_test(tc_core, test_from_decimal_to_float_91);
  tcase_add_test(tc_core, test_from_decimal_to_float_92);
  tcase_add_test(tc_core, test_from_decimal_to_float_93);
  tcase_add_test(tc_core, test_from_decimal_to_float_94);
  tcase_add_test(tc_core, test_from_decimal_to_float_95);
  tcase_add_test(tc_core, test_from_decimal_to_float_96);
  tcase_add_test(tc_core, test_from_decimal_to_float_97);
  tcase_add_test(tc_core, test_from_decimal_to_float_98);
  tcase_add_test(tc_core, test_from_decimal_to_float_99);
  tcase_add_test(tc_core, test_from_decimal_to_float_100);
  tcase_add_test(tc_core, test_from_decimal_to_float_101);
  tcase_add_test(tc_core, test_from_decimal_to_float_102);
  tcase_add_test(tc_core, test_from_decimal_to_float_103);
  tcase_add_test(tc_core, test_from_decimal_to_float_104);
  tcase_add_test(tc_core, test_from_decimal_to_float_105);
  tcase_add_test(tc_core, test_from_decimal_to_float_106);
  tcase_add_test(tc_core, test_from_decimal_to_float_107);
  tcase_add_test(tc_core, test_from_decimal_to_float_108);
  tcase_add_test(tc_core, test_from_decimal_to_float_109);
  tcase_add_test(tc_core, test_from_decimal_to_float_110);
  tcase_add_test(tc_core, test_from_decimal_to_float_111);
  tcase_add_test(tc_core, test_from_decimal_to_float_112);
  tcase_add_test(tc_core, test_from_decimal_to_float_113);
  tcase_add_test(tc_core, test_from_decimal_to_float_114);
  tcase_add_test(tc_core, test_from_decimal_to_float_115);
  tcase_add_test(tc_core, test_from_decimal_to_float_116);
  tcase_add_test(tc_core, test_from_decimal_to_float_117);
  tcase_add_test(tc_core, test_from_decimal_to_float_118);
  tcase_add_test(tc_core, test_from_decimal_to_float_119);
  tcase_add_test(tc_core, test_from_decimal_to_float_120);
  tcase_add_test(tc_core, test_from_decimal_to_float_121);
  tcase_add_test(tc_core, test_from_decimal_to_float_122);
  tcase_add_test(tc_core, test_from_decimal_to_float_123);
  tcase_add_test(tc_core, test_from_decimal_to_float_124);
  tcase_add_test(tc_core, test_from_decimal_to_float_125);
  tcase_add_test(tc_core, test_from_decimal_to_float_126);
  tcase_add_test(tc_core, test_from_decimal_to_float_127);
  tcase_add_test(tc_core, test_from_decimal_to_float_128);
  tcase_add_test(tc_core, test_from_decimal_to_float_129);
  tcase_add_test(tc_core, test_from_decimal_to_float_130);
  tcase_add_test(tc_core, test_from_decimal_to_float_131);
  tcase_add_test(tc_core, test_from_decimal_to_float_132);
  tcase_add_test(tc_core, test_from_decimal_to_float_133);
  tcase_add_test(tc_core, test_from_decimal_to_float_134);
  tcase_add_test(tc_core, test_from_decimal_to_float_135);
  tcase_add_test(tc_core, test_from_decimal_to_float_136);
  tcase_add_test(tc_core, test_from_decimal_to_float_137);
  tcase_add_test(tc_core, test_from_decimal_to_float_138);
  tcase_add_test(tc_core, test_from_decimal_to_float_139);
  tcase_add_test(tc_core, test_from_decimal_to_float_140);
  tcase_add_test(tc_core, test_from_decimal_to_float_141);
  tcase_add_test(tc_core, test_from_decimal_to_float_142);
  tcase_add_test(tc_core, test_from_decimal_to_float_143);
  tcase_add_test(tc_core, test_from_decimal_to_float_144);
  tcase_add_test(tc_core, test_from_decimal_to_float_145);
  tcase_add_test(tc_core, test_from_decimal_to_float_146);
  tcase_add_test(tc_core, test_from_decimal_to_float_147);
  tcase_add_test(tc_core, test_from_decimal_to_float_148);
  tcase_add_test(tc_core, test_from_decimal_to_float_149);
  tcase_add_test(tc_core, test_from_decimal_to_float_150);
  tcase_add_test(tc_core, test_from_decimal_to_float_151);
  tcase_add_test(tc_core, test_from_decimal_to_float_152);
  tcase_add_test(tc_core, test_from_decimal_to_float_153);
  tcase_add_test(tc_core, test_from_decimal_to_float_154);
  tcase_add_test(tc_core, test_from_decimal_to_float_155);
  tcase_add_test(tc_core, test_from_decimal_to_float_156);
  tcase_add_test(tc_core, test_from_decimal_to_float_157);
  tcase_add_test(tc_core, test_from_decimal_to_float_158);
  tcase_add_test(tc_core, test_from_decimal_to_float_159);
  tcase_add_test(tc_core, test_from_decimal_to_float_160);
  tcase_add_test(tc_core, test_from_decimal_to_float_161);
  tcase_add_test(tc_core, test_from_decimal_to_float_162);
  tcase_add_test(tc_core, test_from_decimal_to_float_163);
  tcase_add_test(tc_core, test_from_decimal_to_float_164);
  tcase_add_test(tc_core, test_from_decimal_to_float_165);
  tcase_add_test(tc_core, test_from_decimal_to_float_166);
  tcase_add_test(tc_core, test_from_decimal_to_float_167);
  tcase_add_test(tc_core, test_from_decimal_to_float_168);
  tcase_add_test(tc_core, test_from_decimal_to_float_169);
  tcase_add_test(tc_core, test_from_decimal_to_float_170);
  tcase_add_test(tc_core, test_from_decimal_to_float_171);
  tcase_add_test(tc_core, test_from_decimal_to_float_172);
  tcase_add_test(tc_core, test_from_decimal_to_float_173);
  tcase_add_test(tc_core, test_from_decimal_to_float_174);
  tcase_add_test(tc_core, test_from_decimal_to_float_175);
  tcase_add_test(tc_core, test_from_decimal_to_float_176);
  tcase_add_test(tc_core, test_from_decimal_to_float_177);
  tcase_add_test(tc_core, test_from_decimal_to_float_178);
  tcase_add_test(tc_core, test_from_decimal_to_float_179);
  tcase_add_test(tc_core, test_from_decimal_to_float_180);
  tcase_add_test(tc_core, test_from_decimal_to_float_181);
  tcase_add_test(tc_core, test_from_decimal_to_float_182);
  tcase_add_test(tc_core, test_from_decimal_to_float_183);
  tcase_add_test(tc_core, test_from_decimal_to_float_184);
  tcase_add_test(tc_core, test_from_decimal_to_float_185);
  tcase_add_test(tc_core, test_from_decimal_to_float_186);
  tcase_add_test(tc_core, test_from_decimal_to_float_187);
  tcase_add_test(tc_core, test_from_decimal_to_float_188);
  tcase_add_test(tc_core, test_from_decimal_to_float_189);
  tcase_add_test(tc_core, test_from_decimal_to_float_190);
  tcase_add_test(tc_core, test_from_decimal_to_float_191);
  tcase_add_test(tc_core, test_from_decimal_to_float_192);
  tcase_add_test(tc_core, test_from_decimal_to_float_193);
  tcase_add_test(tc_core, test_from_decimal_to_float_194);
  tcase_add_test(tc_core, test_from_decimal_to_float_195);
  tcase_add_test(tc_core, test_from_decimal_to_float_196);
  tcase_add_test(tc_core, test_from_decimal_to_float_197);
  tcase_add_test(tc_core, test_from_decimal_to_float_198);
  tcase_add_test(tc_core, test_from_decimal_to_float_199);
  tcase_add_test(tc_core, test_from_decimal_to_float_200);
  tcase_add_test(tc_core, test_from_decimal_to_float_201);
  tcase_add_test(tc_core, test_from_decimal_to_float_202);
  tcase_add_test(tc_core, test_from_decimal_to_float_203);
  tcase_add_test(tc_core, test_from_decimal_to_float_204);
  tcase_add_test(tc_core, test_from_decimal_to_float_205);
  tcase_add_test(tc_core, test_from_decimal_to_float_206);
  tcase_add_test(tc_core, test_from_decimal_to_float_207);
  tcase_add_test(tc_core, test_from_decimal_to_float_208);
  tcase_add_test(tc_core, test_from_decimal_to_float_209);
  tcase_add_test(tc_core, test_from_decimal_to_float_210);
  tcase_add_test(tc_core, test_from_decimal_to_float_211);
  tcase_add_test(tc_core, test_from_decimal_to_float_212);
  tcase_add_test(tc_core, test_from_decimal_to_float_213);
  tcase_add_test(tc_core, test_from_decimal_to_float_214);
  tcase_add_test(tc_core, test_from_decimal_to_float_215);
  tcase_add_test(tc_core, test_from_decimal_to_float_216);
  tcase_add_test(tc_core, test_from_decimal_to_float_217);
  tcase_add_test(tc_core, test_from_decimal_to_float_218);
  tcase_add_test(tc_core, test_from_decimal_to_float_219);
  tcase_add_test(tc_core, test_from_decimal_to_float_220);
  tcase_add_test(tc_core, test_from_decimal_to_float_221);
  tcase_add_test(tc_core, test_from_decimal_to_float_222);
  tcase_add_test(tc_core, test_from_decimal_to_float_223);
  tcase_add_test(tc_core, test_from_decimal_to_float_224);
  tcase_add_test(tc_core, test_from_decimal_to_float_225);
  tcase_add_test(tc_core, test_from_decimal_to_float_226);
  tcase_add_test(tc_core, test_from_decimal_to_float_227);
  tcase_add_test(tc_core, test_from_decimal_to_float_228);
  tcase_add_test(tc_core, test_from_decimal_to_float_229);
  tcase_add_test(tc_core, test_from_decimal_to_float_230);
  tcase_add_test(tc_core, test_from_decimal_to_float_231);
  tcase_add_test(tc_core, test_from_decimal_to_float_232);
  tcase_add_test(tc_core, test_from_decimal_to_float_233);
  tcase_add_test(tc_core, test_from_decimal_to_float_234);
  tcase_add_test(tc_core, test_from_decimal_to_float_235);
  tcase_add_test(tc_core, test_from_decimal_to_float_236);
  tcase_add_test(tc_core, test_from_decimal_to_float_237);
  tcase_add_test(tc_core, test_from_decimal_to_float_238);
  tcase_add_test(tc_core, test_from_decimal_to_float_239);
  tcase_add_test(tc_core, test_from_decimal_to_float_240);
  tcase_add_test(tc_core, test_from_decimal_to_float_241);
  tcase_add_test(tc_core, test_from_decimal_to_float_242);
  tcase_add_test(tc_core, test_from_decimal_to_float_243);
  tcase_add_test(tc_core, test_from_decimal_to_float_244);
  tcase_add_test(tc_core, test_from_decimal_to_float_245);
  tcase_add_test(tc_core, test_from_decimal_to_float_246);
  tcase_add_test(tc_core, test_from_decimal_to_float_247);
  tcase_add_test(tc_core, test_from_decimal_to_float_248);
  tcase_add_test(tc_core, test_from_decimal_to_float_249);
  tcase_add_test(tc_core, test_from_decimal_to_float_250);
  tcase_add_test(tc_core, test_from_decimal_to_float_251);
  tcase_add_test(tc_core, test_from_decimal_to_float_252);
  tcase_add_test(tc_core, test_from_decimal_to_float_253);
  tcase_add_test(tc_core, test_from_decimal_to_float_254);
  tcase_add_test(tc_core, test_from_decimal_to_float_255);
  tcase_add_test(tc_core, test_from_decimal_to_float_256);
  tcase_add_test(tc_core, test_from_decimal_to_float_257);
  tcase_add_test(tc_core, test_from_decimal_to_float_258);
  tcase_add_test(tc_core, test_from_decimal_to_float_259);
  tcase_add_test(tc_core, test_from_decimal_to_float_260);
  tcase_add_test(tc_core, test_from_decimal_to_float_261);
  tcase_add_test(tc_core, test_from_decimal_to_float_262);
  tcase_add_test(tc_core, test_from_decimal_to_float_263);
  tcase_add_test(tc_core, test_from_decimal_to_float_264);
  tcase_add_test(tc_core, test_from_decimal_to_float_265);
  tcase_add_test(tc_core, test_from_decimal_to_float_266);
  tcase_add_test(tc_core, test_from_decimal_to_float_267);
  tcase_add_test(tc_core, test_from_decimal_to_float_268);
  tcase_add_test(tc_core, test_from_decimal_to_float_269);
  tcase_add_test(tc_core, test_from_decimal_to_float_270);
  tcase_add_test(tc_core, test_from_decimal_to_float_271);
  tcase_add_test(tc_core, test_from_decimal_to_float_272);
  tcase_add_test(tc_core, test_from_decimal_to_float_273);
  tcase_add_test(tc_core, test_from_decimal_to_float_274);
  tcase_add_test(tc_core, test_from_decimal_to_float_275);
  tcase_add_test(tc_core, test_from_decimal_to_float_276);
  tcase_add_test(tc_core, test_from_decimal_to_float_277);
  tcase_add_test(tc_core, test_from_decimal_to_float_278);
  tcase_add_test(tc_core, test_from_decimal_to_float_279);
  tcase_add_test(tc_core, test_from_decimal_to_float_280);
  tcase_add_test(tc_core, test_from_decimal_to_float_281);
  tcase_add_test(tc_core, test_from_decimal_to_float_282);
  tcase_add_test(tc_core, test_from_decimal_to_float_283);
  tcase_add_test(tc_core, test_from_decimal_to_float_284);
  tcase_add_test(tc_core, test_from_decimal_to_float_285);
  tcase_add_test(tc_core, test_from_decimal_to_float_286);
  tcase_add_test(tc_core, test_from_decimal_to_float_287);
  tcase_add_test(tc_core, test_from_decimal_to_float_288);
  tcase_add_test(tc_core, test_from_decimal_to_float_289);
  tcase_add_test(tc_core, test_from_decimal_to_float_290);
  tcase_add_test(tc_core, test_from_decimal_to_float_291);
  tcase_add_test(tc_core, test_from_decimal_to_float_292);
  tcase_add_test(tc_core, test_from_decimal_to_float_293);
  tcase_add_test(tc_core, test_from_decimal_to_float_294);
  tcase_add_test(tc_core, test_from_decimal_to_float_295);
  tcase_add_test(tc_core, test_from_decimal_to_float_296);
  tcase_add_test(tc_core, test_from_decimal_to_float_297);
  tcase_add_test(tc_core, test_from_decimal_to_float_298);
  tcase_add_test(tc_core, test_from_decimal_to_float_299);
  tcase_add_test(tc_core, test_from_decimal_to_float_300);
  tcase_add_test(tc_core, test_from_decimal_to_float_301);
  tcase_add_test(tc_core, test_from_decimal_to_float_302);
  tcase_add_test(tc_core, test_from_decimal_to_float_303);
  tcase_add_test(tc_core, test_from_decimal_to_float_304);
  tcase_add_test(tc_core, test_from_decimal_to_float_305);
  tcase_add_test(tc_core, test_from_decimal_to_float_306);
  tcase_add_test(tc_core, test_from_decimal_to_float_307);
  tcase_add_test(tc_core, test_from_decimal_to_float_308);
  tcase_add_test(tc_core, test_from_decimal_to_float_309);
  tcase_add_test(tc_core, test_from_decimal_to_float_310);
  tcase_add_test(tc_core, test_from_decimal_to_float_311);
  tcase_add_test(tc_core, test_from_decimal_to_float_312);
  tcase_add_test(tc_core, test_from_decimal_to_float_313);
  tcase_add_test(tc_core, test_from_decimal_to_float_314);
  tcase_add_test(tc_core, test_from_decimal_to_float_315);
  tcase_add_test(tc_core, test_from_decimal_to_float_316);
  tcase_add_test(tc_core, test_from_decimal_to_float_317);
  tcase_add_test(tc_core, test_from_decimal_to_float_318);
  tcase_add_test(tc_core, test_from_decimal_to_float_319);
  tcase_add_test(tc_core, test_from_decimal_to_float_320);
  tcase_add_test(tc_core, test_from_decimal_to_float_321);
  tcase_add_test(tc_core, test_from_decimal_to_float_322);
  tcase_add_test(tc_core, test_from_decimal_to_float_323);
  tcase_add_test(tc_core, test_from_decimal_to_float_324);
  tcase_add_test(tc_core, test_from_decimal_to_float_325);
  tcase_add_test(tc_core, test_from_decimal_to_float_326);
  tcase_add_test(tc_core, test_from_decimal_to_float_327);
  tcase_add_test(tc_core, test_from_decimal_to_float_328);
  tcase_add_test(tc_core, test_from_decimal_to_float_329);
  tcase_add_test(tc_core, test_from_decimal_to_float_330);
  tcase_add_test(tc_core, test_from_decimal_to_float_331);
  tcase_add_test(tc_core, test_from_decimal_to_float_332);
  tcase_add_test(tc_core, test_from_decimal_to_float_333);
  tcase_add_test(tc_core, test_from_decimal_to_float_334);
  tcase_add_test(tc_core, test_from_decimal_to_float_335);
  tcase_add_test(tc_core, test_from_decimal_to_float_336);
  tcase_add_test(tc_core, test_from_decimal_to_float_337);
  tcase_add_test(tc_core, test_from_decimal_to_float_338);
  tcase_add_test(tc_core, test_from_decimal_to_float_339);
  tcase_add_test(tc_core, test_from_decimal_to_float_340);
  tcase_add_test(tc_core, test_from_decimal_to_float_341);
  tcase_add_test(tc_core, test_from_decimal_to_float_342);
  tcase_add_test(tc_core, test_from_decimal_to_float_343);
  tcase_add_test(tc_core, test_from_decimal_to_float_344);
  tcase_add_test(tc_core, test_from_decimal_to_float_345);
  tcase_add_test(tc_core, test_from_decimal_to_float_346);
  tcase_add_test(tc_core, test_from_decimal_to_float_347);
  tcase_add_test(tc_core, test_from_decimal_to_float_348);
  tcase_add_test(tc_core, test_from_decimal_to_float_349);
  tcase_add_test(tc_core, test_from_decimal_to_float_350);
  tcase_add_test(tc_core, test_from_decimal_to_float_351);
  tcase_add_test(tc_core, test_from_decimal_to_float_352);
  tcase_add_test(tc_core, test_from_decimal_to_float_353);
  tcase_add_test(tc_core, test_from_decimal_to_float_354);
  tcase_add_test(tc_core, test_from_decimal_to_float_355);
  tcase_add_test(tc_core, test_from_decimal_to_float_356);
  tcase_add_test(tc_core, test_from_decimal_to_float_357);
  tcase_add_test(tc_core, test_from_decimal_to_float_358);
  tcase_add_test(tc_core, test_from_decimal_to_float_359);
  tcase_add_test(tc_core, test_from_decimal_to_float_360);
  tcase_add_test(tc_core, test_from_decimal_to_float_361);
  tcase_add_test(tc_core, test_from_decimal_to_float_362);
  tcase_add_test(tc_core, test_from_decimal_to_float_363);
  tcase_add_test(tc_core, test_from_decimal_to_float_364);
  tcase_add_test(tc_core, test_from_decimal_to_float_365);
  tcase_add_test(tc_core, test_from_decimal_to_float_366);
  tcase_add_test(tc_core, test_from_decimal_to_float_367);
  tcase_add_test(tc_core, test_from_decimal_to_float_368);
  tcase_add_test(tc_core, test_from_decimal_to_float_369);
  tcase_add_test(tc_core, test_from_decimal_to_float_370);
  tcase_add_test(tc_core, test_from_decimal_to_float_371);
  tcase_add_test(tc_core, test_from_decimal_to_float_372);
  tcase_add_test(tc_core, test_from_decimal_to_float_373);
  tcase_add_test(tc_core, test_from_decimal_to_float_374);
  tcase_add_test(tc_core, test_from_decimal_to_float_375);
  tcase_add_test(tc_core, test_from_decimal_to_float_376);
  tcase_add_test(tc_core, test_from_decimal_to_float_377);
  tcase_add_test(tc_core, test_from_decimal_to_float_378);
  tcase_add_test(tc_core, test_from_decimal_to_float_379);
  tcase_add_test(tc_core, test_from_decimal_to_float_380);
  tcase_add_test(tc_core, test_from_decimal_to_float_381);
  tcase_add_test(tc_core, test_from_decimal_to_float_382);
  tcase_add_test(tc_core, test_from_decimal_to_float_383);
  tcase_add_test(tc_core, test_from_decimal_to_float_384);
  tcase_add_test(tc_core, test_from_decimal_to_float_385);
  tcase_add_test(tc_core, test_from_decimal_to_float_386);
  tcase_add_test(tc_core, test_from_decimal_to_float_387);
  tcase_add_test(tc_core, test_from_decimal_to_float_388);
  tcase_add_test(tc_core, test_from_decimal_to_float_389);
  tcase_add_test(tc_core, test_from_decimal_to_float_390);
  tcase_add_test(tc_core, test_from_decimal_to_float_391);
  tcase_add_test(tc_core, test_from_decimal_to_float_392);
  tcase_add_test(tc_core, test_from_decimal_to_float_393);
  tcase_add_test(tc_core, test_from_decimal_to_float_394);
  tcase_add_test(tc_core, test_from_decimal_to_float_395);
  tcase_add_test(tc_core, test_from_decimal_to_float_396);
  tcase_add_test(tc_core, test_from_decimal_to_float_397);
  tcase_add_test(tc_core, test_from_decimal_to_float_398);
  tcase_add_test(tc_core, test_from_decimal_to_float_399);
  tcase_add_test(tc_core, test_from_decimal_to_float_400);
  tcase_add_test(tc_core, test_from_decimal_to_float_401);
  tcase_add_test(tc_core, test_from_decimal_to_float_402);
  tcase_add_test(tc_core, test_from_decimal_to_float_403);
  tcase_add_test(tc_core, test_from_decimal_to_float_404);
  tcase_add_test(tc_core, test_from_decimal_to_float_405);
  tcase_add_test(tc_core, test_from_decimal_to_float_406);
  tcase_add_test(tc_core, test_from_decimal_to_float_407);
  tcase_add_test(tc_core, test_from_decimal_to_float_408);
  tcase_add_test(tc_core, test_from_decimal_to_float_409);
  tcase_add_test(tc_core, test_from_decimal_to_float_410);
  tcase_add_test(tc_core, test_from_decimal_to_float_411);
  tcase_add_test(tc_core, test_from_decimal_to_float_412);
  tcase_add_test(tc_core, test_from_decimal_to_float_413);
  tcase_add_test(tc_core, test_from_decimal_to_float_414);
  tcase_add_test(tc_core, test_from_decimal_to_float_415);
  tcase_add_test(tc_core, test_from_decimal_to_float_416);
  tcase_add_test(tc_core, test_from_decimal_to_float_417);
  tcase_add_test(tc_core, test_from_decimal_to_float_418);
  tcase_add_test(tc_core, test_from_decimal_to_float_419);
  tcase_add_test(tc_core, test_from_decimal_to_float_420);
  tcase_add_test(tc_core, test_from_decimal_to_float_421);
  tcase_add_test(tc_core, test_from_decimal_to_float_422);
  tcase_add_test(tc_core, test_from_decimal_to_float_423);
  tcase_add_test(tc_core, test_from_decimal_to_float_424);
  tcase_add_test(tc_core, test_from_decimal_to_float_425);
  tcase_add_test(tc_core, test_from_decimal_to_float_426);
  tcase_add_test(tc_core, test_from_decimal_to_float_427);
  tcase_add_test(tc_core, test_from_decimal_to_float_428);
  tcase_add_test(tc_core, test_from_decimal_to_float_429);
  tcase_add_test(tc_core, test_from_decimal_to_float_430);
  tcase_add_test(tc_core, test_from_decimal_to_float_431);
  tcase_add_test(tc_core, test_from_decimal_to_float_432);
  tcase_add_test(tc_core, test_from_decimal_to_float_433);
  tcase_add_test(tc_core, test_from_decimal_to_float_434);
  tcase_add_test(tc_core, test_from_decimal_to_float_435);
  tcase_add_test(tc_core, test_from_decimal_to_float_436);
  tcase_add_test(tc_core, test_from_decimal_to_float_437);
  tcase_add_test(tc_core, test_from_decimal_to_float_438);
  tcase_add_test(tc_core, test_from_decimal_to_float_439);
  tcase_add_test(tc_core, test_from_decimal_to_float_440);
  tcase_add_test(tc_core, test_from_decimal_to_float_441);
  tcase_add_test(tc_core, test_from_decimal_to_float_442);
  tcase_add_test(tc_core, test_from_decimal_to_float_443);
  tcase_add_test(tc_core, test_from_decimal_to_float_444);
  tcase_add_test(tc_core, test_from_decimal_to_float_445);
  tcase_add_test(tc_core, test_from_decimal_to_float_446);
  tcase_add_test(tc_core, test_from_decimal_to_float_447);
  tcase_add_test(tc_core, test_from_decimal_to_float_448);
  tcase_add_test(tc_core, test_from_decimal_to_float_449);
  tcase_add_test(tc_core, test_from_decimal_to_float_450);
  tcase_add_test(tc_core, test_from_decimal_to_float_451);
  tcase_add_test(tc_core, test_from_decimal_to_float_452);
  tcase_add_test(tc_core, test_from_decimal_to_float_453);
  tcase_add_test(tc_core, test_from_decimal_to_float_454);
  tcase_add_test(tc_core, test_from_decimal_to_float_455);
  tcase_add_test(tc_core, test_from_decimal_to_float_456);
  tcase_add_test(tc_core, test_from_decimal_to_float_457);
  tcase_add_test(tc_core, test_from_decimal_to_float_458);
  tcase_add_test(tc_core, test_from_decimal_to_float_459);
  tcase_add_test(tc_core, test_from_decimal_to_float_460);
  tcase_add_test(tc_core, test_from_decimal_to_float_461);
  tcase_add_test(tc_core, test_from_decimal_to_float_462);
  tcase_add_test(tc_core, test_from_decimal_to_float_463);
  tcase_add_test(tc_core, test_from_decimal_to_float_464);
  tcase_add_test(tc_core, test_from_decimal_to_float_465);
  tcase_add_test(tc_core, test_from_decimal_to_float_466);
  tcase_add_test(tc_core, test_from_decimal_to_float_467);
  tcase_add_test(tc_core, test_from_decimal_to_float_468);
  tcase_add_test(tc_core, test_from_decimal_to_float_469);
  tcase_add_test(tc_core, test_from_decimal_to_float_470);
  tcase_add_test(tc_core, test_from_decimal_to_float_471);
  tcase_add_test(tc_core, test_from_decimal_to_float_472);
  tcase_add_test(tc_core, test_from_decimal_to_float_473);
  tcase_add_test(tc_core, test_from_decimal_to_float_474);
  tcase_add_test(tc_core, test_from_decimal_to_float_475);
  tcase_add_test(tc_core, test_from_decimal_to_float_476);
  tcase_add_test(tc_core, test_from_decimal_to_float_477);
  tcase_add_test(tc_core, test_from_decimal_to_float_478);
  tcase_add_test(tc_core, test_from_decimal_to_float_479);
  tcase_add_test(tc_core, test_from_decimal_to_float_480);
  tcase_add_test(tc_core, test_from_decimal_to_float_481);
  tcase_add_test(tc_core, test_from_decimal_to_float_482);
  tcase_add_test(tc_core, test_from_decimal_to_float_483);
  tcase_add_test(tc_core, test_from_decimal_to_float_484);
  tcase_add_test(tc_core, test_from_decimal_to_float_485);
  tcase_add_test(tc_core, test_from_decimal_to_float_486);
  tcase_add_test(tc_core, test_from_decimal_to_float_487);
  tcase_add_test(tc_core, test_from_decimal_to_float_488);
  tcase_add_test(tc_core, test_from_decimal_to_float_489);
  tcase_add_test(tc_core, test_from_decimal_to_float_490);
  tcase_add_test(tc_core, test_from_decimal_to_float_491);
  tcase_add_test(tc_core, test_from_decimal_to_float_492);
  tcase_add_test(tc_core, test_from_decimal_to_float_493);
  tcase_add_test(tc_core, test_from_decimal_to_float_494);
  tcase_add_test(tc_core, test_from_decimal_to_float_495);
  tcase_add_test(tc_core, test_from_decimal_to_float_496);
  tcase_add_test(tc_core, test_from_decimal_to_float_497);
  tcase_add_test(tc_core, test_from_decimal_to_float_498);
  tcase_add_test(tc_core, test_from_decimal_to_float_499);
  tcase_add_test(tc_core, test_from_decimal_to_float_500);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_decimal_to_float_suite_2(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_float_2" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_decimal_to_float_501);
  tcase_add_test(tc_core, test_from_decimal_to_float_502);
  tcase_add_test(tc_core, test_from_decimal_to_float_503);
  tcase_add_test(tc_core, test_from_decimal_to_float_504);
  tcase_add_test(tc_core, test_from_decimal_to_float_505);
  tcase_add_test(tc_core, test_from_decimal_to_float_506);
  tcase_add_test(tc_core, test_from_decimal_to_float_507);
  tcase_add_test(tc_core, test_from_decimal_to_float_508);
  tcase_add_test(tc_core, test_from_decimal_to_float_509);
  tcase_add_test(tc_core, test_from_decimal_to_float_510);
  tcase_add_test(tc_core, test_from_decimal_to_float_511);
  tcase_add_test(tc_core, test_from_decimal_to_float_512);
  tcase_add_test(tc_core, test_from_decimal_to_float_513);
  tcase_add_test(tc_core, test_from_decimal_to_float_514);
  tcase_add_test(tc_core, test_from_decimal_to_float_515);
  tcase_add_test(tc_core, test_from_decimal_to_float_516);
  tcase_add_test(tc_core, test_from_decimal_to_float_517);
  tcase_add_test(tc_core, test_from_decimal_to_float_518);
  tcase_add_test(tc_core, test_from_decimal_to_float_519);
  tcase_add_test(tc_core, test_from_decimal_to_float_520);
  tcase_add_test(tc_core, test_from_decimal_to_float_521);
  tcase_add_test(tc_core, test_from_decimal_to_float_522);
  tcase_add_test(tc_core, test_from_decimal_to_float_523);
  tcase_add_test(tc_core, test_from_decimal_to_float_524);
  tcase_add_test(tc_core, test_from_decimal_to_float_525);
  tcase_add_test(tc_core, test_from_decimal_to_float_526);
  tcase_add_test(tc_core, test_from_decimal_to_float_527);
  tcase_add_test(tc_core, test_from_decimal_to_float_528);
  tcase_add_test(tc_core, test_from_decimal_to_float_529);
  tcase_add_test(tc_core, test_from_decimal_to_float_530);
  tcase_add_test(tc_core, test_from_decimal_to_float_531);
  tcase_add_test(tc_core, test_from_decimal_to_float_532);
  tcase_add_test(tc_core, test_from_decimal_to_float_533);
  tcase_add_test(tc_core, test_from_decimal_to_float_534);
  tcase_add_test(tc_core, test_from_decimal_to_float_535);
  tcase_add_test(tc_core, test_from_decimal_to_float_536);
  tcase_add_test(tc_core, test_from_decimal_to_float_537);
  tcase_add_test(tc_core, test_from_decimal_to_float_538);
  tcase_add_test(tc_core, test_from_decimal_to_float_539);
  tcase_add_test(tc_core, test_from_decimal_to_float_540);
  tcase_add_test(tc_core, test_from_decimal_to_float_541);
  tcase_add_test(tc_core, test_from_decimal_to_float_542);
  tcase_add_test(tc_core, test_from_decimal_to_float_543);
  tcase_add_test(tc_core, test_from_decimal_to_float_544);
  tcase_add_test(tc_core, test_from_decimal_to_float_545);
  tcase_add_test(tc_core, test_from_decimal_to_float_546);
  tcase_add_test(tc_core, test_from_decimal_to_float_547);
  tcase_add_test(tc_core, test_from_decimal_to_float_548);
  tcase_add_test(tc_core, test_from_decimal_to_float_549);
  tcase_add_test(tc_core, test_from_decimal_to_float_550);
  tcase_add_test(tc_core, test_from_decimal_to_float_551);
  tcase_add_test(tc_core, test_from_decimal_to_float_552);
  tcase_add_test(tc_core, test_from_decimal_to_float_553);
  tcase_add_test(tc_core, test_from_decimal_to_float_554);
  tcase_add_test(tc_core, test_from_decimal_to_float_555);
  tcase_add_test(tc_core, test_from_decimal_to_float_556);
  tcase_add_test(tc_core, test_from_decimal_to_float_557);
  tcase_add_test(tc_core, test_from_decimal_to_float_558);
  tcase_add_test(tc_core, test_from_decimal_to_float_559);
  tcase_add_test(tc_core, test_from_decimal_to_float_560);
  tcase_add_test(tc_core, test_from_decimal_to_float_561);
  tcase_add_test(tc_core, test_from_decimal_to_float_562);
  tcase_add_test(tc_core, test_from_decimal_to_float_563);
  tcase_add_test(tc_core, test_from_decimal_to_float_564);
  tcase_add_test(tc_core, test_from_decimal_to_float_565);
  tcase_add_test(tc_core, test_from_decimal_to_float_566);
  tcase_add_test(tc_core, test_from_decimal_to_float_567);
  tcase_add_test(tc_core, test_from_decimal_to_float_568);
  tcase_add_test(tc_core, test_from_decimal_to_float_569);
  tcase_add_test(tc_core, test_from_decimal_to_float_570);
  tcase_add_test(tc_core, test_from_decimal_to_float_571);
  tcase_add_test(tc_core, test_from_decimal_to_float_572);
  tcase_add_test(tc_core, test_from_decimal_to_float_573);
  tcase_add_test(tc_core, test_from_decimal_to_float_574);
  tcase_add_test(tc_core, test_from_decimal_to_float_575);
  tcase_add_test(tc_core, test_from_decimal_to_float_576);
  tcase_add_test(tc_core, test_from_decimal_to_float_577);
  tcase_add_test(tc_core, test_from_decimal_to_float_578);
  tcase_add_test(tc_core, test_from_decimal_to_float_579);
  tcase_add_test(tc_core, test_from_decimal_to_float_580);
  tcase_add_test(tc_core, test_from_decimal_to_float_581);
  tcase_add_test(tc_core, test_from_decimal_to_float_582);
  tcase_add_test(tc_core, test_from_decimal_to_float_583);
  tcase_add_test(tc_core, test_from_decimal_to_float_584);
  tcase_add_test(tc_core, test_from_decimal_to_float_585);
  tcase_add_test(tc_core, test_from_decimal_to_float_586);
  tcase_add_test(tc_core, test_from_decimal_to_float_587);
  tcase_add_test(tc_core, test_from_decimal_to_float_588);
  tcase_add_test(tc_core, test_from_decimal_to_float_589);
  tcase_add_test(tc_core, test_from_decimal_to_float_590);
  tcase_add_test(tc_core, test_from_decimal_to_float_591);
  tcase_add_test(tc_core, test_from_decimal_to_float_592);
  tcase_add_test(tc_core, test_from_decimal_to_float_593);
  tcase_add_test(tc_core, test_from_decimal_to_float_594);
  tcase_add_test(tc_core, test_from_decimal_to_float_595);
  tcase_add_test(tc_core, test_from_decimal_to_float_596);
  tcase_add_test(tc_core, test_from_decimal_to_float_597);
  tcase_add_test(tc_core, test_from_decimal_to_float_598);
  tcase_add_test(tc_core, test_from_decimal_to_float_599);
  tcase_add_test(tc_core, test_from_decimal_to_float_600);
  tcase_add_test(tc_core, test_from_decimal_to_float_601);
  tcase_add_test(tc_core, test_from_decimal_to_float_602);
  tcase_add_test(tc_core, test_from_decimal_to_float_603);
  tcase_add_test(tc_core, test_from_decimal_to_float_604);
  tcase_add_test(tc_core, test_from_decimal_to_float_605);
  tcase_add_test(tc_core, test_from_decimal_to_float_606);
  tcase_add_test(tc_core, test_from_decimal_to_float_607);
  tcase_add_test(tc_core, test_from_decimal_to_float_608);
  tcase_add_test(tc_core, test_from_decimal_to_float_609);
  tcase_add_test(tc_core, test_from_decimal_to_float_610);
  tcase_add_test(tc_core, test_from_decimal_to_float_611);
  tcase_add_test(tc_core, test_from_decimal_to_float_612);
  tcase_add_test(tc_core, test_from_decimal_to_float_613);
  tcase_add_test(tc_core, test_from_decimal_to_float_614);
  tcase_add_test(tc_core, test_from_decimal_to_float_615);
  tcase_add_test(tc_core, test_from_decimal_to_float_616);
  tcase_add_test(tc_core, test_from_decimal_to_float_617);
  tcase_add_test(tc_core, test_from_decimal_to_float_618);
  tcase_add_test(tc_core, test_from_decimal_to_float_619);
  tcase_add_test(tc_core, test_from_decimal_to_float_620);
  tcase_add_test(tc_core, test_from_decimal_to_float_621);
  tcase_add_test(tc_core, test_from_decimal_to_float_622);
  tcase_add_test(tc_core, test_from_decimal_to_float_623);
  tcase_add_test(tc_core, test_from_decimal_to_float_624);
  tcase_add_test(tc_core, test_from_decimal_to_float_625);
  tcase_add_test(tc_core, test_from_decimal_to_float_626);
  tcase_add_test(tc_core, test_from_decimal_to_float_627);
  tcase_add_test(tc_core, test_from_decimal_to_float_628);
  tcase_add_test(tc_core, test_from_decimal_to_float_629);
  tcase_add_test(tc_core, test_from_decimal_to_float_630);
  tcase_add_test(tc_core, test_from_decimal_to_float_631);
  tcase_add_test(tc_core, test_from_decimal_to_float_632);
  tcase_add_test(tc_core, test_from_decimal_to_float_633);
  tcase_add_test(tc_core, test_from_decimal_to_float_634);
  tcase_add_test(tc_core, test_from_decimal_to_float_635);
  tcase_add_test(tc_core, test_from_decimal_to_float_636);
  tcase_add_test(tc_core, test_from_decimal_to_float_637);
  tcase_add_test(tc_core, test_from_decimal_to_float_638);
  tcase_add_test(tc_core, test_from_decimal_to_float_639);
  tcase_add_test(tc_core, test_from_decimal_to_float_640);
  tcase_add_test(tc_core, test_from_decimal_to_float_641);
  tcase_add_test(tc_core, test_from_decimal_to_float_642);
  tcase_add_test(tc_core, test_from_decimal_to_float_643);
  tcase_add_test(tc_core, test_from_decimal_to_float_644);
  tcase_add_test(tc_core, test_from_decimal_to_float_645);
  tcase_add_test(tc_core, test_from_decimal_to_float_646);
  tcase_add_test(tc_core, test_from_decimal_to_float_647);
  tcase_add_test(tc_core, test_from_decimal_to_float_648);
  tcase_add_test(tc_core, test_from_decimal_to_float_649);
  tcase_add_test(tc_core, test_from_decimal_to_float_650);
  tcase_add_test(tc_core, test_from_decimal_to_float_651);
  tcase_add_test(tc_core, test_from_decimal_to_float_652);
  tcase_add_test(tc_core, test_from_decimal_to_float_653);
  tcase_add_test(tc_core, test_from_decimal_to_float_654);
  tcase_add_test(tc_core, test_from_decimal_to_float_655);
  tcase_add_test(tc_core, test_from_decimal_to_float_656);
  tcase_add_test(tc_core, test_from_decimal_to_float_657);
  tcase_add_test(tc_core, test_from_decimal_to_float_658);
  tcase_add_test(tc_core, test_from_decimal_to_float_659);
  tcase_add_test(tc_core, test_from_decimal_to_float_660);
  tcase_add_test(tc_core, test_from_decimal_to_float_661);
  tcase_add_test(tc_core, test_from_decimal_to_float_662);
  tcase_add_test(tc_core, test_from_decimal_to_float_663);
  tcase_add_test(tc_core, test_from_decimal_to_float_664);
  tcase_add_test(tc_core, test_from_decimal_to_float_665);
  tcase_add_test(tc_core, test_from_decimal_to_float_666);
  tcase_add_test(tc_core, test_from_decimal_to_float_667);
  tcase_add_test(tc_core, test_from_decimal_to_float_668);
  tcase_add_test(tc_core, test_from_decimal_to_float_669);
  tcase_add_test(tc_core, test_from_decimal_to_float_670);
  tcase_add_test(tc_core, test_from_decimal_to_float_671);
  tcase_add_test(tc_core, test_from_decimal_to_float_672);
  tcase_add_test(tc_core, test_from_decimal_to_float_673);
  tcase_add_test(tc_core, test_from_decimal_to_float_674);
  tcase_add_test(tc_core, test_from_decimal_to_float_675);
  tcase_add_test(tc_core, test_from_decimal_to_float_676);
  tcase_add_test(tc_core, test_from_decimal_to_float_677);
  tcase_add_test(tc_core, test_from_decimal_to_float_678);
  tcase_add_test(tc_core, test_from_decimal_to_float_679);
  tcase_add_test(tc_core, test_from_decimal_to_float_680);
  tcase_add_test(tc_core, test_from_decimal_to_float_681);
  tcase_add_test(tc_core, test_from_decimal_to_float_682);
  tcase_add_test(tc_core, test_from_decimal_to_float_683);
  tcase_add_test(tc_core, test_from_decimal_to_float_684);
  tcase_add_test(tc_core, test_from_decimal_to_float_685);
  tcase_add_test(tc_core, test_from_decimal_to_float_686);
  tcase_add_test(tc_core, test_from_decimal_to_float_687);
  tcase_add_test(tc_core, test_from_decimal_to_float_688);
  tcase_add_test(tc_core, test_from_decimal_to_float_689);
  tcase_add_test(tc_core, test_from_decimal_to_float_690);
  tcase_add_test(tc_core, test_from_decimal_to_float_691);
  tcase_add_test(tc_core, test_from_decimal_to_float_692);
  tcase_add_test(tc_core, test_from_decimal_to_float_693);
  tcase_add_test(tc_core, test_from_decimal_to_float_694);
  tcase_add_test(tc_core, test_from_decimal_to_float_695);
  tcase_add_test(tc_core, test_from_decimal_to_float_696);
  tcase_add_test(tc_core, test_from_decimal_to_float_697);
  tcase_add_test(tc_core, test_from_decimal_to_float_698);
  tcase_add_test(tc_core, test_from_decimal_to_float_699);
  tcase_add_test(tc_core, test_from_decimal_to_float_700);
  tcase_add_test(tc_core, test_from_decimal_to_float_701);
  tcase_add_test(tc_core, test_from_decimal_to_float_702);
  tcase_add_test(tc_core, test_from_decimal_to_float_703);
  tcase_add_test(tc_core, test_from_decimal_to_float_704);
  tcase_add_test(tc_core, test_from_decimal_to_float_705);
  tcase_add_test(tc_core, test_from_decimal_to_float_706);
  tcase_add_test(tc_core, test_from_decimal_to_float_707);
  tcase_add_test(tc_core, test_from_decimal_to_float_708);
  tcase_add_test(tc_core, test_from_decimal_to_float_709);
  tcase_add_test(tc_core, test_from_decimal_to_float_710);
  tcase_add_test(tc_core, test_from_decimal_to_float_711);
  tcase_add_test(tc_core, test_from_decimal_to_float_712);
  tcase_add_test(tc_core, test_from_decimal_to_float_713);
  tcase_add_test(tc_core, test_from_decimal_to_float_714);
  tcase_add_test(tc_core, test_from_decimal_to_float_715);
  tcase_add_test(tc_core, test_from_decimal_to_float_716);
  tcase_add_test(tc_core, test_from_decimal_to_float_717);
  tcase_add_test(tc_core, test_from_decimal_to_float_718);
  tcase_add_test(tc_core, test_from_decimal_to_float_719);
  tcase_add_test(tc_core, test_from_decimal_to_float_720);
  tcase_add_test(tc_core, test_from_decimal_to_float_721);
  tcase_add_test(tc_core, test_from_decimal_to_float_722);
  tcase_add_test(tc_core, test_from_decimal_to_float_723);
  tcase_add_test(tc_core, test_from_decimal_to_float_724);
  tcase_add_test(tc_core, test_from_decimal_to_float_725);
  tcase_add_test(tc_core, test_from_decimal_to_float_726);
  tcase_add_test(tc_core, test_from_decimal_to_float_727);
  tcase_add_test(tc_core, test_from_decimal_to_float_728);
  tcase_add_test(tc_core, test_from_decimal_to_float_729);
  tcase_add_test(tc_core, test_from_decimal_to_float_730);
  tcase_add_test(tc_core, test_from_decimal_to_float_731);
  tcase_add_test(tc_core, test_from_decimal_to_float_732);
  tcase_add_test(tc_core, test_from_decimal_to_float_733);
  tcase_add_test(tc_core, test_from_decimal_to_float_734);
  tcase_add_test(tc_core, test_from_decimal_to_float_735);
  tcase_add_test(tc_core, test_from_decimal_to_float_736);
  tcase_add_test(tc_core, test_from_decimal_to_float_737);
  tcase_add_test(tc_core, test_from_decimal_to_float_738);
  tcase_add_test(tc_core, test_from_decimal_to_float_739);
  tcase_add_test(tc_core, test_from_decimal_to_float_740);
  tcase_add_test(tc_core, test_from_decimal_to_float_741);
  tcase_add_test(tc_core, test_from_decimal_to_float_742);
  tcase_add_test(tc_core, test_from_decimal_to_float_743);
  tcase_add_test(tc_core, test_from_decimal_to_float_744);
  tcase_add_test(tc_core, test_from_decimal_to_float_745);
  tcase_add_test(tc_core, test_from_decimal_to_float_746);
  tcase_add_test(tc_core, test_from_decimal_to_float_747);
  tcase_add_test(tc_core, test_from_decimal_to_float_748);
  tcase_add_test(tc_core, test_from_decimal_to_float_749);
  tcase_add_test(tc_core, test_from_decimal_to_float_750);
  tcase_add_test(tc_core, test_from_decimal_to_float_751);
  tcase_add_test(tc_core, test_from_decimal_to_float_752);
  tcase_add_test(tc_core, test_from_decimal_to_float_753);
  tcase_add_test(tc_core, test_from_decimal_to_float_754);
  tcase_add_test(tc_core, test_from_decimal_to_float_755);
  tcase_add_test(tc_core, test_from_decimal_to_float_756);
  tcase_add_test(tc_core, test_from_decimal_to_float_757);
  tcase_add_test(tc_core, test_from_decimal_to_float_758);
  tcase_add_test(tc_core, test_from_decimal_to_float_759);
  tcase_add_test(tc_core, test_from_decimal_to_float_760);
  tcase_add_test(tc_core, test_from_decimal_to_float_761);
  tcase_add_test(tc_core, test_from_decimal_to_float_762);
  tcase_add_test(tc_core, test_from_decimal_to_float_763);
  tcase_add_test(tc_core, test_from_decimal_to_float_764);
  tcase_add_test(tc_core, test_from_decimal_to_float_765);
  tcase_add_test(tc_core, test_from_decimal_to_float_766);
  tcase_add_test(tc_core, test_from_decimal_to_float_767);
  tcase_add_test(tc_core, test_from_decimal_to_float_768);
  tcase_add_test(tc_core, test_from_decimal_to_float_769);
  tcase_add_test(tc_core, test_from_decimal_to_float_770);
  tcase_add_test(tc_core, test_from_decimal_to_float_771);
  tcase_add_test(tc_core, test_from_decimal_to_float_772);
  tcase_add_test(tc_core, test_from_decimal_to_float_773);
  tcase_add_test(tc_core, test_from_decimal_to_float_774);
  tcase_add_test(tc_core, test_from_decimal_to_float_775);
  tcase_add_test(tc_core, test_from_decimal_to_float_776);
  tcase_add_test(tc_core, test_from_decimal_to_float_777);
  tcase_add_test(tc_core, test_from_decimal_to_float_778);
  tcase_add_test(tc_core, test_from_decimal_to_float_779);
  tcase_add_test(tc_core, test_from_decimal_to_float_780);
  tcase_add_test(tc_core, test_from_decimal_to_float_781);
  tcase_add_test(tc_core, test_from_decimal_to_float_782);
  tcase_add_test(tc_core, test_from_decimal_to_float_783);
  tcase_add_test(tc_core, test_from_decimal_to_float_784);
  tcase_add_test(tc_core, test_from_decimal_to_float_785);
  tcase_add_test(tc_core, test_from_decimal_to_float_786);
  tcase_add_test(tc_core, test_from_decimal_to_float_787);
  tcase_add_test(tc_core, test_from_decimal_to_float_788);
  tcase_add_test(tc_core, test_from_decimal_to_float_789);
  tcase_add_test(tc_core, test_from_decimal_to_float_790);
  tcase_add_test(tc_core, test_from_decimal_to_float_791);
  tcase_add_test(tc_core, test_from_decimal_to_float_792);
  tcase_add_test(tc_core, test_from_decimal_to_float_793);
  tcase_add_test(tc_core, test_from_decimal_to_float_794);
  tcase_add_test(tc_core, test_from_decimal_to_float_795);
  tcase_add_test(tc_core, test_from_decimal_to_float_796);
  tcase_add_test(tc_core, test_from_decimal_to_float_797);
  tcase_add_test(tc_core, test_from_decimal_to_float_798);
  tcase_add_test(tc_core, test_from_decimal_to_float_799);
  tcase_add_test(tc_core, test_from_decimal_to_float_800);
  tcase_add_test(tc_core, test_from_decimal_to_float_801);
  tcase_add_test(tc_core, test_from_decimal_to_float_802);
  tcase_add_test(tc_core, test_from_decimal_to_float_803);
  tcase_add_test(tc_core, test_from_decimal_to_float_804);
  tcase_add_test(tc_core, test_from_decimal_to_float_805);
  tcase_add_test(tc_core, test_from_decimal_to_float_806);
  tcase_add_test(tc_core, test_from_decimal_to_float_807);
  tcase_add_test(tc_core, test_from_decimal_to_float_808);
  tcase_add_test(tc_core, test_from_decimal_to_float_809);
  tcase_add_test(tc_core, test_from_decimal_to_float_810);
  tcase_add_test(tc_core, test_from_decimal_to_float_811);
  tcase_add_test(tc_core, test_from_decimal_to_float_812);
  tcase_add_test(tc_core, test_from_decimal_to_float_813);
  tcase_add_test(tc_core, test_from_decimal_to_float_814);
  tcase_add_test(tc_core, test_from_decimal_to_float_815);
  tcase_add_test(tc_core, test_from_decimal_to_float_816);
  tcase_add_test(tc_core, test_from_decimal_to_float_817);
  tcase_add_test(tc_core, test_from_decimal_to_float_818);
  tcase_add_test(tc_core, test_from_decimal_to_float_819);
  tcase_add_test(tc_core, test_from_decimal_to_float_820);
  tcase_add_test(tc_core, test_from_decimal_to_float_821);
  tcase_add_test(tc_core, test_from_decimal_to_float_822);
  tcase_add_test(tc_core, test_from_decimal_to_float_823);
  tcase_add_test(tc_core, test_from_decimal_to_float_824);
  tcase_add_test(tc_core, test_from_decimal_to_float_825);
  tcase_add_test(tc_core, test_from_decimal_to_float_826);
  tcase_add_test(tc_core, test_from_decimal_to_float_827);
  tcase_add_test(tc_core, test_from_decimal_to_float_828);
  tcase_add_test(tc_core, test_from_decimal_to_float_829);
  tcase_add_test(tc_core, test_from_decimal_to_float_830);
  tcase_add_test(tc_core, test_from_decimal_to_float_831);
  tcase_add_test(tc_core, test_from_decimal_to_float_832);
  tcase_add_test(tc_core, test_from_decimal_to_float_833);
  tcase_add_test(tc_core, test_from_decimal_to_float_834);
  tcase_add_test(tc_core, test_from_decimal_to_float_835);
  tcase_add_test(tc_core, test_from_decimal_to_float_836);
  tcase_add_test(tc_core, test_from_decimal_to_float_837);
  tcase_add_test(tc_core, test_from_decimal_to_float_838);
  tcase_add_test(tc_core, test_from_decimal_to_float_839);
  tcase_add_test(tc_core, test_from_decimal_to_float_840);
  tcase_add_test(tc_core, test_from_decimal_to_float_841);
  tcase_add_test(tc_core, test_from_decimal_to_float_842);
  tcase_add_test(tc_core, test_from_decimal_to_float_843);
  tcase_add_test(tc_core, test_from_decimal_to_float_844);
  tcase_add_test(tc_core, test_from_decimal_to_float_845);
  tcase_add_test(tc_core, test_from_decimal_to_float_846);
  tcase_add_test(tc_core, test_from_decimal_to_float_847);
  tcase_add_test(tc_core, test_from_decimal_to_float_848);
  tcase_add_test(tc_core, test_from_decimal_to_float_849);
  tcase_add_test(tc_core, test_from_decimal_to_float_850);
  tcase_add_test(tc_core, test_from_decimal_to_float_851);
  tcase_add_test(tc_core, test_from_decimal_to_float_852);
  tcase_add_test(tc_core, test_from_decimal_to_float_853);
  tcase_add_test(tc_core, test_from_decimal_to_float_854);
  tcase_add_test(tc_core, test_from_decimal_to_float_855);
  tcase_add_test(tc_core, test_from_decimal_to_float_856);
  tcase_add_test(tc_core, test_from_decimal_to_float_857);
  tcase_add_test(tc_core, test_from_decimal_to_float_858);
  tcase_add_test(tc_core, test_from_decimal_to_float_859);
  tcase_add_test(tc_core, test_from_decimal_to_float_860);
  tcase_add_test(tc_core, test_from_decimal_to_float_861);
  tcase_add_test(tc_core, test_from_decimal_to_float_862);
  tcase_add_test(tc_core, test_from_decimal_to_float_863);
  tcase_add_test(tc_core, test_from_decimal_to_float_864);
  tcase_add_test(tc_core, test_from_decimal_to_float_865);
  tcase_add_test(tc_core, test_from_decimal_to_float_866);
  tcase_add_test(tc_core, test_from_decimal_to_float_867);
  tcase_add_test(tc_core, test_from_decimal_to_float_868);
  tcase_add_test(tc_core, test_from_decimal_to_float_869);
  tcase_add_test(tc_core, test_from_decimal_to_float_870);
  tcase_add_test(tc_core, test_from_decimal_to_float_871);
  tcase_add_test(tc_core, test_from_decimal_to_float_872);
  tcase_add_test(tc_core, test_from_decimal_to_float_873);
  tcase_add_test(tc_core, test_from_decimal_to_float_874);
  tcase_add_test(tc_core, test_from_decimal_to_float_875);
  tcase_add_test(tc_core, test_from_decimal_to_float_876);
  tcase_add_test(tc_core, test_from_decimal_to_float_877);
  tcase_add_test(tc_core, test_from_decimal_to_float_878);
  tcase_add_test(tc_core, test_from_decimal_to_float_879);
  tcase_add_test(tc_core, test_from_decimal_to_float_880);
  tcase_add_test(tc_core, test_from_decimal_to_float_881);
  tcase_add_test(tc_core, test_from_decimal_to_float_882);
  tcase_add_test(tc_core, test_from_decimal_to_float_883);
  tcase_add_test(tc_core, test_from_decimal_to_float_884);
  tcase_add_test(tc_core, test_from_decimal_to_float_885);
  tcase_add_test(tc_core, test_from_decimal_to_float_886);
  tcase_add_test(tc_core, test_from_decimal_to_float_887);
  tcase_add_test(tc_core, test_from_decimal_to_float_888);
  tcase_add_test(tc_core, test_from_decimal_to_float_889);
  tcase_add_test(tc_core, test_from_decimal_to_float_890);
  tcase_add_test(tc_core, test_from_decimal_to_float_891);
  tcase_add_test(tc_core, test_from_decimal_to_float_892);
  tcase_add_test(tc_core, test_from_decimal_to_float_893);
  tcase_add_test(tc_core, test_from_decimal_to_float_894);
  tcase_add_test(tc_core, test_from_decimal_to_float_895);
  tcase_add_test(tc_core, test_from_decimal_to_float_896);
  tcase_add_test(tc_core, test_from_decimal_to_float_897);
  tcase_add_test(tc_core, test_from_decimal_to_float_898);
  tcase_add_test(tc_core, test_from_decimal_to_float_899);
  tcase_add_test(tc_core, test_from_decimal_to_float_900);
  tcase_add_test(tc_core, test_from_decimal_to_float_901);
  tcase_add_test(tc_core, test_from_decimal_to_float_902);
  tcase_add_test(tc_core, test_from_decimal_to_float_903);
  tcase_add_test(tc_core, test_from_decimal_to_float_904);
  tcase_add_test(tc_core, test_from_decimal_to_float_905);
  tcase_add_test(tc_core, test_from_decimal_to_float_906);
  tcase_add_test(tc_core, test_from_decimal_to_float_907);
  tcase_add_test(tc_core, test_from_decimal_to_float_908);
  tcase_add_test(tc_core, test_from_decimal_to_float_909);
  tcase_add_test(tc_core, test_from_decimal_to_float_910);
  tcase_add_test(tc_core, test_from_decimal_to_float_911);
  tcase_add_test(tc_core, test_from_decimal_to_float_912);
  tcase_add_test(tc_core, test_from_decimal_to_float_913);
  tcase_add_test(tc_core, test_from_decimal_to_float_914);
  tcase_add_test(tc_core, test_from_decimal_to_float_915);
  tcase_add_test(tc_core, test_from_decimal_to_float_916);
  tcase_add_test(tc_core, test_from_decimal_to_float_917);
  tcase_add_test(tc_core, test_from_decimal_to_float_918);
  tcase_add_test(tc_core, test_from_decimal_to_float_919);
  tcase_add_test(tc_core, test_from_decimal_to_float_920);
  tcase_add_test(tc_core, test_from_decimal_to_float_921);
  tcase_add_test(tc_core, test_from_decimal_to_float_922);
  tcase_add_test(tc_core, test_from_decimal_to_float_923);
  tcase_add_test(tc_core, test_from_decimal_to_float_924);
  tcase_add_test(tc_core, test_from_decimal_to_float_925);
  tcase_add_test(tc_core, test_from_decimal_to_float_926);
  tcase_add_test(tc_core, test_from_decimal_to_float_927);
  tcase_add_test(tc_core, test_from_decimal_to_float_928);
  tcase_add_test(tc_core, test_from_decimal_to_float_929);
  tcase_add_test(tc_core, test_from_decimal_to_float_930);
  tcase_add_test(tc_core, test_from_decimal_to_float_931);
  tcase_add_test(tc_core, test_from_decimal_to_float_932);
  tcase_add_test(tc_core, test_from_decimal_to_float_933);
  tcase_add_test(tc_core, test_from_decimal_to_float_934);
  tcase_add_test(tc_core, test_from_decimal_to_float_935);
  tcase_add_test(tc_core, test_from_decimal_to_float_936);
  tcase_add_test(tc_core, test_from_decimal_to_float_937);
  tcase_add_test(tc_core, test_from_decimal_to_float_938);
  tcase_add_test(tc_core, test_from_decimal_to_float_939);
  tcase_add_test(tc_core, test_from_decimal_to_float_940);
  tcase_add_test(tc_core, test_from_decimal_to_float_941);
  tcase_add_test(tc_core, test_from_decimal_to_float_942);
  tcase_add_test(tc_core, test_from_decimal_to_float_943);
  tcase_add_test(tc_core, test_from_decimal_to_float_944);
  tcase_add_test(tc_core, test_from_decimal_to_float_945);
  tcase_add_test(tc_core, test_from_decimal_to_float_946);
  tcase_add_test(tc_core, test_from_decimal_to_float_947);
  tcase_add_test(tc_core, test_from_decimal_to_float_948);
  tcase_add_test(tc_core, test_from_decimal_to_float_949);
  tcase_add_test(tc_core, test_from_decimal_to_float_950);
  tcase_add_test(tc_core, test_from_decimal_to_float_951);
  tcase_add_test(tc_core, test_from_decimal_to_float_952);
  tcase_add_test(tc_core, test_from_decimal_to_float_953);
  tcase_add_test(tc_core, test_from_decimal_to_float_954);
  tcase_add_test(tc_core, test_from_decimal_to_float_955);
  tcase_add_test(tc_core, test_from_decimal_to_float_956);
  tcase_add_test(tc_core, test_from_decimal_to_float_957);
  tcase_add_test(tc_core, test_from_decimal_to_float_958);
  tcase_add_test(tc_core, test_from_decimal_to_float_959);
  tcase_add_test(tc_core, test_from_decimal_to_float_960);
  tcase_add_test(tc_core, test_from_decimal_to_float_961);
  tcase_add_test(tc_core, test_from_decimal_to_float_962);
  tcase_add_test(tc_core, test_from_decimal_to_float_963);
  tcase_add_test(tc_core, test_from_decimal_to_float_964);
  tcase_add_test(tc_core, test_from_decimal_to_float_965);
  tcase_add_test(tc_core, test_from_decimal_to_float_966);
  tcase_add_test(tc_core, test_from_decimal_to_float_967);
  tcase_add_test(tc_core, test_from_decimal_to_float_968);
  tcase_add_test(tc_core, test_from_decimal_to_float_969);
  tcase_add_test(tc_core, test_from_decimal_to_float_970);
  tcase_add_test(tc_core, test_from_decimal_to_float_971);
  tcase_add_test(tc_core, test_from_decimal_to_float_972);
  tcase_add_test(tc_core, test_from_decimal_to_float_973);
  tcase_add_test(tc_core, test_from_decimal_to_float_974);
  tcase_add_test(tc_core, test_from_decimal_to_float_975);
  tcase_add_test(tc_core, test_from_decimal_to_float_976);
  tcase_add_test(tc_core, test_from_decimal_to_float_977);
  tcase_add_test(tc_core, test_from_decimal_to_float_978);
  tcase_add_test(tc_core, test_from_decimal_to_float_979);
  tcase_add_test(tc_core, test_from_decimal_to_float_980);
  tcase_add_test(tc_core, test_from_decimal_to_float_981);
  tcase_add_test(tc_core, test_from_decimal_to_float_982);
  tcase_add_test(tc_core, test_from_decimal_to_float_983);
  tcase_add_test(tc_core, test_from_decimal_to_float_984);
  tcase_add_test(tc_core, test_from_decimal_to_float_985);
  tcase_add_test(tc_core, test_from_decimal_to_float_986);
  tcase_add_test(tc_core, test_from_decimal_to_float_987);
  tcase_add_test(tc_core, test_from_decimal_to_float_988);
  tcase_add_test(tc_core, test_from_decimal_to_float_989);
  tcase_add_test(tc_core, test_from_decimal_to_float_990);
  tcase_add_test(tc_core, test_from_decimal_to_float_991);
  tcase_add_test(tc_core, test_from_decimal_to_float_992);
  tcase_add_test(tc_core, test_from_decimal_to_float_993);
  tcase_add_test(tc_core, test_from_decimal_to_float_994);
  tcase_add_test(tc_core, test_from_decimal_to_float_995);
  tcase_add_test(tc_core, test_from_decimal_to_float_996);
  tcase_add_test(tc_core, test_from_decimal_to_float_997);
  tcase_add_test(tc_core, test_from_decimal_to_float_998);
  tcase_add_test(tc_core, test_from_decimal_to_float_999);
  tcase_add_test(tc_core, test_from_decimal_to_float_1000);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_decimal_to_float_suite_3(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_float_3" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_decimal_to_float_1001);
  tcase_add_test(tc_core, test_from_decimal_to_float_1002);
  tcase_add_test(tc_core, test_from_decimal_to_float_1003);
  tcase_add_test(tc_core, test_from_decimal_to_float_1004);
  tcase_add_test(tc_core, test_from_decimal_to_float_1005);
  tcase_add_test(tc_core, test_from_decimal_to_float_1006);
  tcase_add_test(tc_core, test_from_decimal_to_float_1007);
  tcase_add_test(tc_core, test_from_decimal_to_float_1008);
  tcase_add_test(tc_core, test_from_decimal_to_float_1009);
  tcase_add_test(tc_core, test_from_decimal_to_float_1010);
  tcase_add_test(tc_core, test_from_decimal_to_float_1011);
  tcase_add_test(tc_core, test_from_decimal_to_float_1012);
  tcase_add_test(tc_core, test_from_decimal_to_float_1013);
  tcase_add_test(tc_core, test_from_decimal_to_float_1014);
  tcase_add_test(tc_core, test_from_decimal_to_float_1015);
  tcase_add_test(tc_core, test_from_decimal_to_float_1016);
  tcase_add_test(tc_core, test_from_decimal_to_float_1017);
  tcase_add_test(tc_core, test_from_decimal_to_float_1018);
  tcase_add_test(tc_core, test_from_decimal_to_float_1019);
  tcase_add_test(tc_core, test_from_decimal_to_float_1020);
  tcase_add_test(tc_core, test_from_decimal_to_float_1021);
  tcase_add_test(tc_core, test_from_decimal_to_float_1022);
  tcase_add_test(tc_core, test_from_decimal_to_float_1023);
  tcase_add_test(tc_core, test_from_decimal_to_float_1024);
  tcase_add_test(tc_core, test_from_decimal_to_float_1025);
  tcase_add_test(tc_core, test_from_decimal_to_float_1026);
  tcase_add_test(tc_core, test_from_decimal_to_float_1027);
  tcase_add_test(tc_core, test_from_decimal_to_float_1028);
  tcase_add_test(tc_core, test_from_decimal_to_float_1029);
  tcase_add_test(tc_core, test_from_decimal_to_float_1030);
  tcase_add_test(tc_core, test_from_decimal_to_float_1031);
  tcase_add_test(tc_core, test_from_decimal_to_float_1032);
  tcase_add_test(tc_core, test_from_decimal_to_float_1033);
  tcase_add_test(tc_core, test_from_decimal_to_float_1034);
  tcase_add_test(tc_core, test_from_decimal_to_float_1035);
  tcase_add_test(tc_core, test_from_decimal_to_float_1036);
  tcase_add_test(tc_core, test_from_decimal_to_float_1037);
  tcase_add_test(tc_core, test_from_decimal_to_float_1038);
  tcase_add_test(tc_core, test_from_decimal_to_float_1039);
  tcase_add_test(tc_core, test_from_decimal_to_float_1040);
  tcase_add_test(tc_core, test_from_decimal_to_float_1041);
  tcase_add_test(tc_core, test_from_decimal_to_float_1042);
  tcase_add_test(tc_core, test_from_decimal_to_float_1043);
  tcase_add_test(tc_core, test_from_decimal_to_float_1044);
  tcase_add_test(tc_core, test_from_decimal_to_float_1045);
  tcase_add_test(tc_core, test_from_decimal_to_float_1046);
  tcase_add_test(tc_core, test_from_decimal_to_float_1047);
  tcase_add_test(tc_core, test_from_decimal_to_float_1048);
  tcase_add_test(tc_core, test_from_decimal_to_float_1049);
  tcase_add_test(tc_core, test_from_decimal_to_float_1050);
  tcase_add_test(tc_core, test_from_decimal_to_float_1051);
  tcase_add_test(tc_core, test_from_decimal_to_float_1052);
  tcase_add_test(tc_core, test_from_decimal_to_float_1053);
  tcase_add_test(tc_core, test_from_decimal_to_float_1054);
  tcase_add_test(tc_core, test_from_decimal_to_float_1055);
  tcase_add_test(tc_core, test_from_decimal_to_float_1056);
  tcase_add_test(tc_core, test_from_decimal_to_float_1057);
  tcase_add_test(tc_core, test_from_decimal_to_float_1058);
  tcase_add_test(tc_core, test_from_decimal_to_float_1059);
  tcase_add_test(tc_core, test_from_decimal_to_float_1060);
  tcase_add_test(tc_core, test_from_decimal_to_float_1061);
  tcase_add_test(tc_core, test_from_decimal_to_float_1062);
  tcase_add_test(tc_core, test_from_decimal_to_float_1063);
  tcase_add_test(tc_core, test_from_decimal_to_float_1064);
  tcase_add_test(tc_core, test_from_decimal_to_float_1065);
  tcase_add_test(tc_core, test_from_decimal_to_float_1066);
  tcase_add_test(tc_core, test_from_decimal_to_float_1067);
  tcase_add_test(tc_core, test_from_decimal_to_float_1068);
  tcase_add_test(tc_core, test_from_decimal_to_float_1069);
  tcase_add_test(tc_core, test_from_decimal_to_float_1070);
  tcase_add_test(tc_core, test_from_decimal_to_float_1071);
  tcase_add_test(tc_core, test_from_decimal_to_float_1072);
  tcase_add_test(tc_core, test_from_decimal_to_float_1073);
  tcase_add_test(tc_core, test_from_decimal_to_float_1074);
  tcase_add_test(tc_core, test_from_decimal_to_float_1075);
  tcase_add_test(tc_core, test_from_decimal_to_float_1076);
  tcase_add_test(tc_core, test_from_decimal_to_float_1077);
  tcase_add_test(tc_core, test_from_decimal_to_float_1078);
  tcase_add_test(tc_core, test_from_decimal_to_float_1079);
  tcase_add_test(tc_core, test_from_decimal_to_float_1080);
  tcase_add_test(tc_core, test_from_decimal_to_float_1081);
  tcase_add_test(tc_core, test_from_decimal_to_float_1082);
  tcase_add_test(tc_core, test_from_decimal_to_float_1083);
  tcase_add_test(tc_core, test_from_decimal_to_float_1084);
  tcase_add_test(tc_core, test_from_decimal_to_float_1085);
  tcase_add_test(tc_core, test_from_decimal_to_float_1086);
  tcase_add_test(tc_core, test_from_decimal_to_float_1087);
  tcase_add_test(tc_core, test_from_decimal_to_float_1088);
  tcase_add_test(tc_core, test_from_decimal_to_float_1089);
  tcase_add_test(tc_core, test_from_decimal_to_float_1090);
  tcase_add_test(tc_core, test_from_decimal_to_float_1091);
  tcase_add_test(tc_core, test_from_decimal_to_float_1092);
  tcase_add_test(tc_core, test_from_decimal_to_float_1093);
  tcase_add_test(tc_core, test_from_decimal_to_float_1094);
  tcase_add_test(tc_core, test_from_decimal_to_float_1095);
  tcase_add_test(tc_core, test_from_decimal_to_float_1096);
  tcase_add_test(tc_core, test_from_decimal_to_float_1097);
  tcase_add_test(tc_core, test_from_decimal_to_float_1098);
  tcase_add_test(tc_core, test_from_decimal_to_float_1099);
  tcase_add_test(tc_core, test_from_decimal_to_float_1100);
  tcase_add_test(tc_core, test_from_decimal_to_float_1101);
  tcase_add_test(tc_core, test_from_decimal_to_float_1102);
  tcase_add_test(tc_core, test_from_decimal_to_float_1103);
  tcase_add_test(tc_core, test_from_decimal_to_float_1104);
  tcase_add_test(tc_core, test_from_decimal_to_float_1105);
  tcase_add_test(tc_core, test_from_decimal_to_float_1106);
  tcase_add_test(tc_core, test_from_decimal_to_float_1107);
  tcase_add_test(tc_core, test_from_decimal_to_float_1108);
  tcase_add_test(tc_core, test_from_decimal_to_float_1109);
  tcase_add_test(tc_core, test_from_decimal_to_float_1110);
  tcase_add_test(tc_core, test_from_decimal_to_float_1111);
  tcase_add_test(tc_core, test_from_decimal_to_float_1112);
  tcase_add_test(tc_core, test_from_decimal_to_float_1113);
  tcase_add_test(tc_core, test_from_decimal_to_float_1114);
  tcase_add_test(tc_core, test_from_decimal_to_float_1115);
  tcase_add_test(tc_core, test_from_decimal_to_float_1116);
  tcase_add_test(tc_core, test_from_decimal_to_float_1117);
  tcase_add_test(tc_core, test_from_decimal_to_float_1118);
  tcase_add_test(tc_core, test_from_decimal_to_float_1119);
  tcase_add_test(tc_core, test_from_decimal_to_float_1120);
  tcase_add_test(tc_core, test_from_decimal_to_float_1121);
  tcase_add_test(tc_core, test_from_decimal_to_float_1122);
  tcase_add_test(tc_core, test_from_decimal_to_float_1123);
  tcase_add_test(tc_core, test_from_decimal_to_float_1124);
  tcase_add_test(tc_core, test_from_decimal_to_float_1125);
  tcase_add_test(tc_core, test_from_decimal_to_float_1126);
  tcase_add_test(tc_core, test_from_decimal_to_float_1127);
  tcase_add_test(tc_core, test_from_decimal_to_float_1128);
  tcase_add_test(tc_core, test_from_decimal_to_float_1129);
  tcase_add_test(tc_core, test_from_decimal_to_float_1130);
  tcase_add_test(tc_core, test_from_decimal_to_float_1131);
  tcase_add_test(tc_core, test_from_decimal_to_float_1132);
  tcase_add_test(tc_core, test_from_decimal_to_float_1133);
  tcase_add_test(tc_core, test_from_decimal_to_float_1134);
  tcase_add_test(tc_core, test_from_decimal_to_float_1135);
  tcase_add_test(tc_core, test_from_decimal_to_float_1136);
  tcase_add_test(tc_core, test_from_decimal_to_float_1137);
  tcase_add_test(tc_core, test_from_decimal_to_float_1138);
  tcase_add_test(tc_core, test_from_decimal_to_float_1139);
  tcase_add_test(tc_core, test_from_decimal_to_float_1140);
  tcase_add_test(tc_core, test_from_decimal_to_float_1141);
  tcase_add_test(tc_core, test_from_decimal_to_float_1142);
  tcase_add_test(tc_core, test_from_decimal_to_float_1143);
  tcase_add_test(tc_core, test_from_decimal_to_float_1144);
  tcase_add_test(tc_core, test_from_decimal_to_float_1145);
  tcase_add_test(tc_core, test_from_decimal_to_float_1146);
  tcase_add_test(tc_core, test_from_decimal_to_float_1147);
  tcase_add_test(tc_core, test_from_decimal_to_float_1148);
  tcase_add_test(tc_core, test_from_decimal_to_float_1149);
  tcase_add_test(tc_core, test_from_decimal_to_float_1150);
  tcase_add_test(tc_core, test_from_decimal_to_float_1151);
  tcase_add_test(tc_core, test_from_decimal_to_float_1152);
  tcase_add_test(tc_core, test_from_decimal_to_float_1153);
  tcase_add_test(tc_core, test_from_decimal_to_float_1154);
  tcase_add_test(tc_core, test_from_decimal_to_float_1155);
  tcase_add_test(tc_core, test_from_decimal_to_float_1156);
  tcase_add_test(tc_core, test_from_decimal_to_float_1157);
  tcase_add_test(tc_core, test_from_decimal_to_float_1158);
  tcase_add_test(tc_core, test_from_decimal_to_float_1159);
  tcase_add_test(tc_core, test_from_decimal_to_float_1160);
  tcase_add_test(tc_core, test_from_decimal_to_float_1161);
  tcase_add_test(tc_core, test_from_decimal_to_float_1162);
  tcase_add_test(tc_core, test_from_decimal_to_float_1163);
  tcase_add_test(tc_core, test_from_decimal_to_float_1164);
  tcase_add_test(tc_core, test_from_decimal_to_float_1165);
  tcase_add_test(tc_core, test_from_decimal_to_float_1166);
  tcase_add_test(tc_core, test_from_decimal_to_float_1167);
  tcase_add_test(tc_core, test_from_decimal_to_float_1168);
  tcase_add_test(tc_core, test_from_decimal_to_float_1169);
  tcase_add_test(tc_core, test_from_decimal_to_float_1170);
  tcase_add_test(tc_core, test_from_decimal_to_float_1171);
  tcase_add_test(tc_core, test_from_decimal_to_float_1172);
  tcase_add_test(tc_core, test_from_decimal_to_float_1173);
  tcase_add_test(tc_core, test_from_decimal_to_float_1174);
  tcase_add_test(tc_core, test_from_decimal_to_float_1175);
  tcase_add_test(tc_core, test_from_decimal_to_float_1176);
  tcase_add_test(tc_core, test_from_decimal_to_float_1177);
  tcase_add_test(tc_core, test_from_decimal_to_float_1178);
  tcase_add_test(tc_core, test_from_decimal_to_float_1179);
  tcase_add_test(tc_core, test_from_decimal_to_float_1180);
  tcase_add_test(tc_core, test_from_decimal_to_float_1181);
  tcase_add_test(tc_core, test_from_decimal_to_float_1182);
  tcase_add_test(tc_core, test_from_decimal_to_float_1183);
  tcase_add_test(tc_core, test_from_decimal_to_float_1184);
  tcase_add_test(tc_core, test_from_decimal_to_float_1185);
  tcase_add_test(tc_core, test_from_decimal_to_float_1186);
  tcase_add_test(tc_core, test_from_decimal_to_float_1187);
  tcase_add_test(tc_core, test_from_decimal_to_float_1188);
  tcase_add_test(tc_core, test_from_decimal_to_float_1189);
  tcase_add_test(tc_core, test_from_decimal_to_float_1190);
  tcase_add_test(tc_core, test_from_decimal_to_float_1191);
  tcase_add_test(tc_core, test_from_decimal_to_float_1192);
  tcase_add_test(tc_core, test_from_decimal_to_float_1193);
  tcase_add_test(tc_core, test_from_decimal_to_float_1194);
  tcase_add_test(tc_core, test_from_decimal_to_float_1195);
  tcase_add_test(tc_core, test_from_decimal_to_float_1196);
  tcase_add_test(tc_core, test_from_decimal_to_float_1197);
  tcase_add_test(tc_core, test_from_decimal_to_float_1198);
  tcase_add_test(tc_core, test_from_decimal_to_float_1199);
  tcase_add_test(tc_core, test_from_decimal_to_float_1200);
  tcase_add_test(tc_core, test_from_decimal_to_float_1201);
  tcase_add_test(tc_core, test_from_decimal_to_float_1202);
  tcase_add_test(tc_core, test_from_decimal_to_float_1203);
  tcase_add_test(tc_core, test_from_decimal_to_float_1204);
  tcase_add_test(tc_core, test_from_decimal_to_float_1205);
  tcase_add_test(tc_core, test_from_decimal_to_float_1206);
  tcase_add_test(tc_core, test_from_decimal_to_float_1207);
  tcase_add_test(tc_core, test_from_decimal_to_float_1208);
  tcase_add_test(tc_core, test_from_decimal_to_float_1209);
  tcase_add_test(tc_core, test_from_decimal_to_float_1210);
  tcase_add_test(tc_core, test_from_decimal_to_float_1211);
  tcase_add_test(tc_core, test_from_decimal_to_float_1212);
  tcase_add_test(tc_core, test_from_decimal_to_float_1213);
  tcase_add_test(tc_core, test_from_decimal_to_float_1214);
  tcase_add_test(tc_core, test_from_decimal_to_float_1215);
  tcase_add_test(tc_core, test_from_decimal_to_float_1216);
  tcase_add_test(tc_core, test_from_decimal_to_float_1217);
  tcase_add_test(tc_core, test_from_decimal_to_float_1218);
  tcase_add_test(tc_core, test_from_decimal_to_float_1219);
  tcase_add_test(tc_core, test_from_decimal_to_float_1220);
  tcase_add_test(tc_core, test_from_decimal_to_float_1221);
  tcase_add_test(tc_core, test_from_decimal_to_float_1222);
  tcase_add_test(tc_core, test_from_decimal_to_float_1223);
  tcase_add_test(tc_core, test_from_decimal_to_float_1224);
  tcase_add_test(tc_core, test_from_decimal_to_float_1225);
  tcase_add_test(tc_core, test_from_decimal_to_float_1226);
  tcase_add_test(tc_core, test_from_decimal_to_float_1227);
  tcase_add_test(tc_core, test_from_decimal_to_float_1228);
  tcase_add_test(tc_core, test_from_decimal_to_float_1229);
  tcase_add_test(tc_core, test_from_decimal_to_float_1230);
  tcase_add_test(tc_core, test_from_decimal_to_float_1231);
  tcase_add_test(tc_core, test_from_decimal_to_float_1232);
  tcase_add_test(tc_core, test_from_decimal_to_float_1233);
  tcase_add_test(tc_core, test_from_decimal_to_float_1234);
  tcase_add_test(tc_core, test_from_decimal_to_float_1235);
  tcase_add_test(tc_core, test_from_decimal_to_float_1236);
  tcase_add_test(tc_core, test_from_decimal_to_float_1237);
  tcase_add_test(tc_core, test_from_decimal_to_float_1238);
  tcase_add_test(tc_core, test_from_decimal_to_float_1239);
  tcase_add_test(tc_core, test_from_decimal_to_float_1240);
  tcase_add_test(tc_core, test_from_decimal_to_float_1241);
  tcase_add_test(tc_core, test_from_decimal_to_float_1242);
  tcase_add_test(tc_core, test_from_decimal_to_float_1243);
  tcase_add_test(tc_core, test_from_decimal_to_float_1244);
  tcase_add_test(tc_core, test_from_decimal_to_float_1245);
  tcase_add_test(tc_core, test_from_decimal_to_float_1246);
  tcase_add_test(tc_core, test_from_decimal_to_float_1247);
  tcase_add_test(tc_core, test_from_decimal_to_float_1248);
  tcase_add_test(tc_core, test_from_decimal_to_float_1249);
  tcase_add_test(tc_core, test_from_decimal_to_float_1250);
  tcase_add_test(tc_core, test_from_decimal_to_float_1251);
  tcase_add_test(tc_core, test_from_decimal_to_float_1252);
  tcase_add_test(tc_core, test_from_decimal_to_float_1253);
  tcase_add_test(tc_core, test_from_decimal_to_float_1254);
  tcase_add_test(tc_core, test_from_decimal_to_float_1255);
  tcase_add_test(tc_core, test_from_decimal_to_float_1256);
  tcase_add_test(tc_core, test_from_decimal_to_float_1257);
  tcase_add_test(tc_core, test_from_decimal_to_float_1258);
  tcase_add_test(tc_core, test_from_decimal_to_float_1259);
  tcase_add_test(tc_core, test_from_decimal_to_float_1260);
  tcase_add_test(tc_core, test_from_decimal_to_float_1261);
  tcase_add_test(tc_core, test_from_decimal_to_float_1262);
  tcase_add_test(tc_core, test_from_decimal_to_float_1263);
  tcase_add_test(tc_core, test_from_decimal_to_float_1264);
  tcase_add_test(tc_core, test_from_decimal_to_float_1265);
  tcase_add_test(tc_core, test_from_decimal_to_float_1266);
  tcase_add_test(tc_core, test_from_decimal_to_float_1267);
  tcase_add_test(tc_core, test_from_decimal_to_float_1268);
  tcase_add_test(tc_core, test_from_decimal_to_float_1269);
  tcase_add_test(tc_core, test_from_decimal_to_float_1270);
  tcase_add_test(tc_core, test_from_decimal_to_float_1271);
  tcase_add_test(tc_core, test_from_decimal_to_float_1272);
  tcase_add_test(tc_core, test_from_decimal_to_float_1273);
  tcase_add_test(tc_core, test_from_decimal_to_float_1274);
  tcase_add_test(tc_core, test_from_decimal_to_float_1275);
  tcase_add_test(tc_core, test_from_decimal_to_float_1276);
  tcase_add_test(tc_core, test_from_decimal_to_float_1277);
  tcase_add_test(tc_core, test_from_decimal_to_float_1278);
  tcase_add_test(tc_core, test_from_decimal_to_float_1279);
  tcase_add_test(tc_core, test_from_decimal_to_float_1280);
  tcase_add_test(tc_core, test_from_decimal_to_float_1281);
  tcase_add_test(tc_core, test_from_decimal_to_float_1282);
  tcase_add_test(tc_core, test_from_decimal_to_float_1283);
  tcase_add_test(tc_core, test_from_decimal_to_float_1284);
  tcase_add_test(tc_core, test_from_decimal_to_float_1285);
  tcase_add_test(tc_core, test_from_decimal_to_float_1286);
  tcase_add_test(tc_core, test_from_decimal_to_float_1287);
  tcase_add_test(tc_core, test_from_decimal_to_float_1288);
  tcase_add_test(tc_core, test_from_decimal_to_float_1289);
  tcase_add_test(tc_core, test_from_decimal_to_float_1290);
  tcase_add_test(tc_core, test_from_decimal_to_float_1291);
  tcase_add_test(tc_core, test_from_decimal_to_float_1292);
  tcase_add_test(tc_core, test_from_decimal_to_float_1293);
  tcase_add_test(tc_core, test_from_decimal_to_float_1294);
  tcase_add_test(tc_core, test_from_decimal_to_float_1295);
  tcase_add_test(tc_core, test_from_decimal_to_float_1296);
  tcase_add_test(tc_core, test_from_decimal_to_float_1297);
  tcase_add_test(tc_core, test_from_decimal_to_float_1298);
  tcase_add_test(tc_core, test_from_decimal_to_float_1299);
  tcase_add_test(tc_core, test_from_decimal_to_float_1300);
  tcase_add_test(tc_core, test_from_decimal_to_float_1301);
  tcase_add_test(tc_core, test_from_decimal_to_float_1302);
  tcase_add_test(tc_core, test_from_decimal_to_float_1303);
  tcase_add_test(tc_core, test_from_decimal_to_float_1304);
  tcase_add_test(tc_core, test_from_decimal_to_float_1305);
  tcase_add_test(tc_core, test_from_decimal_to_float_1306);
  tcase_add_test(tc_core, test_from_decimal_to_float_1307);
  tcase_add_test(tc_core, test_from_decimal_to_float_1308);
  tcase_add_test(tc_core, test_from_decimal_to_float_1309);
  tcase_add_test(tc_core, test_from_decimal_to_float_1310);
  tcase_add_test(tc_core, test_from_decimal_to_float_1311);
  tcase_add_test(tc_core, test_from_decimal_to_float_1312);
  tcase_add_test(tc_core, test_from_decimal_to_float_1313);
  tcase_add_test(tc_core, test_from_decimal_to_float_1314);
  tcase_add_test(tc_core, test_from_decimal_to_float_1315);
  tcase_add_test(tc_core, test_from_decimal_to_float_1316);
  tcase_add_test(tc_core, test_from_decimal_to_float_1317);
  tcase_add_test(tc_core, test_from_decimal_to_float_1318);
  tcase_add_test(tc_core, test_from_decimal_to_float_1319);
  tcase_add_test(tc_core, test_from_decimal_to_float_1320);
  tcase_add_test(tc_core, test_from_decimal_to_float_1321);
  tcase_add_test(tc_core, test_from_decimal_to_float_1322);
  tcase_add_test(tc_core, test_from_decimal_to_float_1323);
  tcase_add_test(tc_core, test_from_decimal_to_float_1324);
  tcase_add_test(tc_core, test_from_decimal_to_float_1325);
  tcase_add_test(tc_core, test_from_decimal_to_float_1326);
  tcase_add_test(tc_core, test_from_decimal_to_float_1327);
  tcase_add_test(tc_core, test_from_decimal_to_float_1328);
  tcase_add_test(tc_core, test_from_decimal_to_float_1329);
  tcase_add_test(tc_core, test_from_decimal_to_float_1330);
  tcase_add_test(tc_core, test_from_decimal_to_float_1331);
  tcase_add_test(tc_core, test_from_decimal_to_float_1332);
  tcase_add_test(tc_core, test_from_decimal_to_float_1333);
  tcase_add_test(tc_core, test_from_decimal_to_float_1334);
  tcase_add_test(tc_core, test_from_decimal_to_float_1335);
  tcase_add_test(tc_core, test_from_decimal_to_float_1336);
  tcase_add_test(tc_core, test_from_decimal_to_float_1337);
  tcase_add_test(tc_core, test_from_decimal_to_float_1338);
  tcase_add_test(tc_core, test_from_decimal_to_float_1339);
  tcase_add_test(tc_core, test_from_decimal_to_float_1340);
  tcase_add_test(tc_core, test_from_decimal_to_float_1341);
  tcase_add_test(tc_core, test_from_decimal_to_float_1342);
  tcase_add_test(tc_core, test_from_decimal_to_float_1343);
  tcase_add_test(tc_core, test_from_decimal_to_float_1344);
  tcase_add_test(tc_core, test_from_decimal_to_float_1345);
  tcase_add_test(tc_core, test_from_decimal_to_float_1346);
  tcase_add_test(tc_core, test_from_decimal_to_float_1347);
  tcase_add_test(tc_core, test_from_decimal_to_float_1348);
  tcase_add_test(tc_core, test_from_decimal_to_float_1349);
  tcase_add_test(tc_core, test_from_decimal_to_float_1350);
  tcase_add_test(tc_core, test_from_decimal_to_float_1351);
  tcase_add_test(tc_core, test_from_decimal_to_float_1352);
  tcase_add_test(tc_core, test_from_decimal_to_float_1353);
  tcase_add_test(tc_core, test_from_decimal_to_float_1354);
  tcase_add_test(tc_core, test_from_decimal_to_float_1355);
  tcase_add_test(tc_core, test_from_decimal_to_float_1356);
  tcase_add_test(tc_core, test_from_decimal_to_float_1357);
  tcase_add_test(tc_core, test_from_decimal_to_float_1358);
  tcase_add_test(tc_core, test_from_decimal_to_float_1359);
  tcase_add_test(tc_core, test_from_decimal_to_float_1360);
  tcase_add_test(tc_core, test_from_decimal_to_float_1361);
  tcase_add_test(tc_core, test_from_decimal_to_float_1362);
  tcase_add_test(tc_core, test_from_decimal_to_float_1363);
  tcase_add_test(tc_core, test_from_decimal_to_float_1364);
  tcase_add_test(tc_core, test_from_decimal_to_float_1365);
  tcase_add_test(tc_core, test_from_decimal_to_float_1366);
  tcase_add_test(tc_core, test_from_decimal_to_float_1367);
  tcase_add_test(tc_core, test_from_decimal_to_float_1368);
  tcase_add_test(tc_core, test_from_decimal_to_float_1369);
  tcase_add_test(tc_core, test_from_decimal_to_float_1370);
  tcase_add_test(tc_core, test_from_decimal_to_float_1371);
  tcase_add_test(tc_core, test_from_decimal_to_float_1372);
  tcase_add_test(tc_core, test_from_decimal_to_float_1373);
  tcase_add_test(tc_core, test_from_decimal_to_float_1374);
  tcase_add_test(tc_core, test_from_decimal_to_float_1375);
  tcase_add_test(tc_core, test_from_decimal_to_float_1376);
  tcase_add_test(tc_core, test_from_decimal_to_float_1377);
  tcase_add_test(tc_core, test_from_decimal_to_float_1378);
  tcase_add_test(tc_core, test_from_decimal_to_float_1379);
  tcase_add_test(tc_core, test_from_decimal_to_float_1380);
  tcase_add_test(tc_core, test_from_decimal_to_float_1381);
  tcase_add_test(tc_core, test_from_decimal_to_float_1382);
  tcase_add_test(tc_core, test_from_decimal_to_float_1383);
  tcase_add_test(tc_core, test_from_decimal_to_float_1384);
  tcase_add_test(tc_core, test_from_decimal_to_float_1385);
  tcase_add_test(tc_core, test_from_decimal_to_float_1386);
  tcase_add_test(tc_core, test_from_decimal_to_float_1387);
  tcase_add_test(tc_core, test_from_decimal_to_float_1388);
  tcase_add_test(tc_core, test_from_decimal_to_float_1389);
  tcase_add_test(tc_core, test_from_decimal_to_float_1390);
  tcase_add_test(tc_core, test_from_decimal_to_float_1391);
  tcase_add_test(tc_core, test_from_decimal_to_float_1392);
  tcase_add_test(tc_core, test_from_decimal_to_float_1393);
  tcase_add_test(tc_core, test_from_decimal_to_float_1394);
  tcase_add_test(tc_core, test_from_decimal_to_float_1395);
  tcase_add_test(tc_core, test_from_decimal_to_float_1396);
  tcase_add_test(tc_core, test_from_decimal_to_float_1397);
  tcase_add_test(tc_core, test_from_decimal_to_float_1398);
  tcase_add_test(tc_core, test_from_decimal_to_float_1399);
  tcase_add_test(tc_core, test_from_decimal_to_float_1400);
  tcase_add_test(tc_core, test_from_decimal_to_float_1401);
  tcase_add_test(tc_core, test_from_decimal_to_float_1402);
  tcase_add_test(tc_core, test_from_decimal_to_float_1403);
  tcase_add_test(tc_core, test_from_decimal_to_float_1404);
  tcase_add_test(tc_core, test_from_decimal_to_float_1405);
  tcase_add_test(tc_core, test_from_decimal_to_float_1406);
  tcase_add_test(tc_core, test_from_decimal_to_float_1407);
  tcase_add_test(tc_core, test_from_decimal_to_float_1408);
  tcase_add_test(tc_core, test_from_decimal_to_float_1409);
  tcase_add_test(tc_core, test_from_decimal_to_float_1410);
  tcase_add_test(tc_core, test_from_decimal_to_float_1411);
  tcase_add_test(tc_core, test_from_decimal_to_float_1412);
  tcase_add_test(tc_core, test_from_decimal_to_float_1413);
  tcase_add_test(tc_core, test_from_decimal_to_float_1414);
  tcase_add_test(tc_core, test_from_decimal_to_float_1415);
  tcase_add_test(tc_core, test_from_decimal_to_float_1416);
  tcase_add_test(tc_core, test_from_decimal_to_float_1417);
  tcase_add_test(tc_core, test_from_decimal_to_float_1418);
  tcase_add_test(tc_core, test_from_decimal_to_float_1419);
  tcase_add_test(tc_core, test_from_decimal_to_float_1420);
  tcase_add_test(tc_core, test_from_decimal_to_float_1421);
  tcase_add_test(tc_core, test_from_decimal_to_float_1422);
  tcase_add_test(tc_core, test_from_decimal_to_float_1423);
  tcase_add_test(tc_core, test_from_decimal_to_float_1424);
  tcase_add_test(tc_core, test_from_decimal_to_float_1425);
  tcase_add_test(tc_core, test_from_decimal_to_float_1426);
  tcase_add_test(tc_core, test_from_decimal_to_float_1427);
  tcase_add_test(tc_core, test_from_decimal_to_float_1428);
  tcase_add_test(tc_core, test_from_decimal_to_float_1429);
  tcase_add_test(tc_core, test_from_decimal_to_float_1430);
  tcase_add_test(tc_core, test_from_decimal_to_float_1431);
  tcase_add_test(tc_core, test_from_decimal_to_float_1432);
  tcase_add_test(tc_core, test_from_decimal_to_float_1433);
  tcase_add_test(tc_core, test_from_decimal_to_float_1434);
  tcase_add_test(tc_core, test_from_decimal_to_float_1435);
  tcase_add_test(tc_core, test_from_decimal_to_float_1436);
  tcase_add_test(tc_core, test_from_decimal_to_float_1437);
  tcase_add_test(tc_core, test_from_decimal_to_float_1438);
  tcase_add_test(tc_core, test_from_decimal_to_float_1439);
  tcase_add_test(tc_core, test_from_decimal_to_float_1440);
  tcase_add_test(tc_core, test_from_decimal_to_float_1441);
  tcase_add_test(tc_core, test_from_decimal_to_float_1442);
  tcase_add_test(tc_core, test_from_decimal_to_float_1443);
  tcase_add_test(tc_core, test_from_decimal_to_float_1444);
  tcase_add_test(tc_core, test_from_decimal_to_float_1445);
  tcase_add_test(tc_core, test_from_decimal_to_float_1446);
  tcase_add_test(tc_core, test_from_decimal_to_float_1447);
  tcase_add_test(tc_core, test_from_decimal_to_float_1448);
  tcase_add_test(tc_core, test_from_decimal_to_float_1449);
  tcase_add_test(tc_core, test_from_decimal_to_float_1450);
  tcase_add_test(tc_core, test_from_decimal_to_float_1451);
  tcase_add_test(tc_core, test_from_decimal_to_float_1452);
  tcase_add_test(tc_core, test_from_decimal_to_float_1453);
  tcase_add_test(tc_core, test_from_decimal_to_float_1454);
  tcase_add_test(tc_core, test_from_decimal_to_float_1455);
  tcase_add_test(tc_core, test_from_decimal_to_float_1456);
  tcase_add_test(tc_core, test_from_decimal_to_float_1457);
  tcase_add_test(tc_core, test_from_decimal_to_float_1458);
  tcase_add_test(tc_core, test_from_decimal_to_float_1459);
  tcase_add_test(tc_core, test_from_decimal_to_float_1460);
  tcase_add_test(tc_core, test_from_decimal_to_float_1461);
  tcase_add_test(tc_core, test_from_decimal_to_float_1462);
  tcase_add_test(tc_core, test_from_decimal_to_float_1463);
  tcase_add_test(tc_core, test_from_decimal_to_float_1464);
  tcase_add_test(tc_core, test_from_decimal_to_float_1465);
  tcase_add_test(tc_core, test_from_decimal_to_float_1466);
  tcase_add_test(tc_core, test_from_decimal_to_float_1467);
  tcase_add_test(tc_core, test_from_decimal_to_float_1468);
  tcase_add_test(tc_core, test_from_decimal_to_float_1469);
  tcase_add_test(tc_core, test_from_decimal_to_float_1470);
  tcase_add_test(tc_core, test_from_decimal_to_float_1471);
  tcase_add_test(tc_core, test_from_decimal_to_float_1472);
  tcase_add_test(tc_core, test_from_decimal_to_float_1473);
  tcase_add_test(tc_core, test_from_decimal_to_float_1474);
  tcase_add_test(tc_core, test_from_decimal_to_float_1475);
  tcase_add_test(tc_core, test_from_decimal_to_float_1476);
  tcase_add_test(tc_core, test_from_decimal_to_float_1477);
  tcase_add_test(tc_core, test_from_decimal_to_float_1478);
  tcase_add_test(tc_core, test_from_decimal_to_float_1479);
  tcase_add_test(tc_core, test_from_decimal_to_float_1480);
  tcase_add_test(tc_core, test_from_decimal_to_float_1481);
  tcase_add_test(tc_core, test_from_decimal_to_float_1482);
  tcase_add_test(tc_core, test_from_decimal_to_float_1483);
  tcase_add_test(tc_core, test_from_decimal_to_float_1484);
  tcase_add_test(tc_core, test_from_decimal_to_float_1485);
  tcase_add_test(tc_core, test_from_decimal_to_float_1486);
  tcase_add_test(tc_core, test_from_decimal_to_float_1487);
  tcase_add_test(tc_core, test_from_decimal_to_float_1488);
  tcase_add_test(tc_core, test_from_decimal_to_float_1489);
  tcase_add_test(tc_core, test_from_decimal_to_float_1490);
  tcase_add_test(tc_core, test_from_decimal_to_float_1491);
  tcase_add_test(tc_core, test_from_decimal_to_float_1492);
  tcase_add_test(tc_core, test_from_decimal_to_float_1493);
  tcase_add_test(tc_core, test_from_decimal_to_float_1494);
  tcase_add_test(tc_core, test_from_decimal_to_float_1495);
  tcase_add_test(tc_core, test_from_decimal_to_float_1496);
  tcase_add_test(tc_core, test_from_decimal_to_float_1497);
  tcase_add_test(tc_core, test_from_decimal_to_float_1498);
  tcase_add_test(tc_core, test_from_decimal_to_float_1499);
  tcase_add_test(tc_core, test_from_decimal_to_float_1500);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_decimal_to_float_suite_4(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_float_4" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_decimal_to_float_1501);
  tcase_add_test(tc_core, test_from_decimal_to_float_1502);
  tcase_add_test(tc_core, test_from_decimal_to_float_1503);
  tcase_add_test(tc_core, test_from_decimal_to_float_1504);
  tcase_add_test(tc_core, test_from_decimal_to_float_1505);
  tcase_add_test(tc_core, test_from_decimal_to_float_1506);
  tcase_add_test(tc_core, test_from_decimal_to_float_1507);
  tcase_add_test(tc_core, test_from_decimal_to_float_1508);
  tcase_add_test(tc_core, test_from_decimal_to_float_1509);
  tcase_add_test(tc_core, test_from_decimal_to_float_1510);
  tcase_add_test(tc_core, test_from_decimal_to_float_1511);
  tcase_add_test(tc_core, test_from_decimal_to_float_1512);
  tcase_add_test(tc_core, test_from_decimal_to_float_1513);
  tcase_add_test(tc_core, test_from_decimal_to_float_1514);
  tcase_add_test(tc_core, test_from_decimal_to_float_1515);
  tcase_add_test(tc_core, test_from_decimal_to_float_1516);
  tcase_add_test(tc_core, test_from_decimal_to_float_1517);
  tcase_add_test(tc_core, test_from_decimal_to_float_1518);
  tcase_add_test(tc_core, test_from_decimal_to_float_1519);
  tcase_add_test(tc_core, test_from_decimal_to_float_1520);
  tcase_add_test(tc_core, test_from_decimal_to_float_1521);
  tcase_add_test(tc_core, test_from_decimal_to_float_1522);
  tcase_add_test(tc_core, test_from_decimal_to_float_1523);
  tcase_add_test(tc_core, test_from_decimal_to_float_1524);
  tcase_add_test(tc_core, test_from_decimal_to_float_1525);
  tcase_add_test(tc_core, test_from_decimal_to_float_1526);
  tcase_add_test(tc_core, test_from_decimal_to_float_1527);
  tcase_add_test(tc_core, test_from_decimal_to_float_1528);
  tcase_add_test(tc_core, test_from_decimal_to_float_1529);
  tcase_add_test(tc_core, test_from_decimal_to_float_1530);
  tcase_add_test(tc_core, test_from_decimal_to_float_1531);
  tcase_add_test(tc_core, test_from_decimal_to_float_1532);
  tcase_add_test(tc_core, test_from_decimal_to_float_1533);
  tcase_add_test(tc_core, test_from_decimal_to_float_1534);
  tcase_add_test(tc_core, test_from_decimal_to_float_1535);
  tcase_add_test(tc_core, test_from_decimal_to_float_1536);
  tcase_add_test(tc_core, test_from_decimal_to_float_1537);
  tcase_add_test(tc_core, test_from_decimal_to_float_1538);
  tcase_add_test(tc_core, test_from_decimal_to_float_1539);
  tcase_add_test(tc_core, test_from_decimal_to_float_1540);
  tcase_add_test(tc_core, test_from_decimal_to_float_1541);
  tcase_add_test(tc_core, test_from_decimal_to_float_1542);
  tcase_add_test(tc_core, test_from_decimal_to_float_1543);
  tcase_add_test(tc_core, test_from_decimal_to_float_1544);
  tcase_add_test(tc_core, test_from_decimal_to_float_1545);
  tcase_add_test(tc_core, test_from_decimal_to_float_1546);
  tcase_add_test(tc_core, test_from_decimal_to_float_1547);
  tcase_add_test(tc_core, test_from_decimal_to_float_1548);
  tcase_add_test(tc_core, test_from_decimal_to_float_1549);
  tcase_add_test(tc_core, test_from_decimal_to_float_1550);
  tcase_add_test(tc_core, test_from_decimal_to_float_1551);
  tcase_add_test(tc_core, test_from_decimal_to_float_1552);
  tcase_add_test(tc_core, test_from_decimal_to_float_1553);
  tcase_add_test(tc_core, test_from_decimal_to_float_1554);
  tcase_add_test(tc_core, test_from_decimal_to_float_1555);
  tcase_add_test(tc_core, test_from_decimal_to_float_1556);
  tcase_add_test(tc_core, test_from_decimal_to_float_1557);
  tcase_add_test(tc_core, test_from_decimal_to_float_1558);
  tcase_add_test(tc_core, test_from_decimal_to_float_1559);
  tcase_add_test(tc_core, test_from_decimal_to_float_1560);
  tcase_add_test(tc_core, test_from_decimal_to_float_1561);
  tcase_add_test(tc_core, test_from_decimal_to_float_1562);
  tcase_add_test(tc_core, test_from_decimal_to_float_1563);
  tcase_add_test(tc_core, test_from_decimal_to_float_1564);
  tcase_add_test(tc_core, test_from_decimal_to_float_1565);
  tcase_add_test(tc_core, test_from_decimal_to_float_1566);
  tcase_add_test(tc_core, test_from_decimal_to_float_1567);
  tcase_add_test(tc_core, test_from_decimal_to_float_1568);
  tcase_add_test(tc_core, test_from_decimal_to_float_1569);
  tcase_add_test(tc_core, test_from_decimal_to_float_1570);
  tcase_add_test(tc_core, test_from_decimal_to_float_1571);
  tcase_add_test(tc_core, test_from_decimal_to_float_1572);
  tcase_add_test(tc_core, test_from_decimal_to_float_1573);
  tcase_add_test(tc_core, test_from_decimal_to_float_1574);
  tcase_add_test(tc_core, test_from_decimal_to_float_1575);
  tcase_add_test(tc_core, test_from_decimal_to_float_1576);
  tcase_add_test(tc_core, test_from_decimal_to_float_1577);
  tcase_add_test(tc_core, test_from_decimal_to_float_1578);
  tcase_add_test(tc_core, test_from_decimal_to_float_1579);
  tcase_add_test(tc_core, test_from_decimal_to_float_1580);
  tcase_add_test(tc_core, test_from_decimal_to_float_1581);
  tcase_add_test(tc_core, test_from_decimal_to_float_1582);
  tcase_add_test(tc_core, test_from_decimal_to_float_1583);
  tcase_add_test(tc_core, test_from_decimal_to_float_1584);
  tcase_add_test(tc_core, test_from_decimal_to_float_1585);
  tcase_add_test(tc_core, test_from_decimal_to_float_1586);
  tcase_add_test(tc_core, test_from_decimal_to_float_1587);
  tcase_add_test(tc_core, test_from_decimal_to_float_1588);
  tcase_add_test(tc_core, test_from_decimal_to_float_1589);
  tcase_add_test(tc_core, test_from_decimal_to_float_1590);
  tcase_add_test(tc_core, test_from_decimal_to_float_1591);
  tcase_add_test(tc_core, test_from_decimal_to_float_1592);
  tcase_add_test(tc_core, test_from_decimal_to_float_1593);
  tcase_add_test(tc_core, test_from_decimal_to_float_1594);
  tcase_add_test(tc_core, test_from_decimal_to_float_1595);
  tcase_add_test(tc_core, test_from_decimal_to_float_1596);
  tcase_add_test(tc_core, test_from_decimal_to_float_1597);
  tcase_add_test(tc_core, test_from_decimal_to_float_1598);
  tcase_add_test(tc_core, test_from_decimal_to_float_1599);
  tcase_add_test(tc_core, test_from_decimal_to_float_1600);
  tcase_add_test(tc_core, test_from_decimal_to_float_1601);
  tcase_add_test(tc_core, test_from_decimal_to_float_1602);
  tcase_add_test(tc_core, test_from_decimal_to_float_1603);
  tcase_add_test(tc_core, test_from_decimal_to_float_1604);
  tcase_add_test(tc_core, test_from_decimal_to_float_1605);
  tcase_add_test(tc_core, test_from_decimal_to_float_1606);
  tcase_add_test(tc_core, test_from_decimal_to_float_1607);
  tcase_add_test(tc_core, test_from_decimal_to_float_1608);
  tcase_add_test(tc_core, test_from_decimal_to_float_1609);
  tcase_add_test(tc_core, test_from_decimal_to_float_1610);
  tcase_add_test(tc_core, test_from_decimal_to_float_1611);
  tcase_add_test(tc_core, test_from_decimal_to_float_1612);
  tcase_add_test(tc_core, test_from_decimal_to_float_1613);
  tcase_add_test(tc_core, test_from_decimal_to_float_1614);
  tcase_add_test(tc_core, test_from_decimal_to_float_1615);
  tcase_add_test(tc_core, test_from_decimal_to_float_1616);
  tcase_add_test(tc_core, test_from_decimal_to_float_1617);
  tcase_add_test(tc_core, test_from_decimal_to_float_1618);
  tcase_add_test(tc_core, test_from_decimal_to_float_1619);
  tcase_add_test(tc_core, test_from_decimal_to_float_1620);
  tcase_add_test(tc_core, test_from_decimal_to_float_1621);
  tcase_add_test(tc_core, test_from_decimal_to_float_1622);
  tcase_add_test(tc_core, test_from_decimal_to_float_1623);
  tcase_add_test(tc_core, test_from_decimal_to_float_1624);
  tcase_add_test(tc_core, test_from_decimal_to_float_1625);
  tcase_add_test(tc_core, test_from_decimal_to_float_1626);
  tcase_add_test(tc_core, test_from_decimal_to_float_1627);
  tcase_add_test(tc_core, test_from_decimal_to_float_1628);
  tcase_add_test(tc_core, test_from_decimal_to_float_1629);
  tcase_add_test(tc_core, test_from_decimal_to_float_1630);
  tcase_add_test(tc_core, test_from_decimal_to_float_1631);
  tcase_add_test(tc_core, test_from_decimal_to_float_1632);
  tcase_add_test(tc_core, test_from_decimal_to_float_1633);
  tcase_add_test(tc_core, test_from_decimal_to_float_1634);
  tcase_add_test(tc_core, test_from_decimal_to_float_1635);
  tcase_add_test(tc_core, test_from_decimal_to_float_1636);
  tcase_add_test(tc_core, test_from_decimal_to_float_1637);
  tcase_add_test(tc_core, test_from_decimal_to_float_1638);
  tcase_add_test(tc_core, test_from_decimal_to_float_1639);
  tcase_add_test(tc_core, test_from_decimal_to_float_1640);
  tcase_add_test(tc_core, test_from_decimal_to_float_1641);
  tcase_add_test(tc_core, test_from_decimal_to_float_1642);
  tcase_add_test(tc_core, test_from_decimal_to_float_1643);
  tcase_add_test(tc_core, test_from_decimal_to_float_1644);
  tcase_add_test(tc_core, test_from_decimal_to_float_1645);
  tcase_add_test(tc_core, test_from_decimal_to_float_1646);
  tcase_add_test(tc_core, test_from_decimal_to_float_1647);
  tcase_add_test(tc_core, test_from_decimal_to_float_1648);
  tcase_add_test(tc_core, test_from_decimal_to_float_1649);
  tcase_add_test(tc_core, test_from_decimal_to_float_1650);
  tcase_add_test(tc_core, test_from_decimal_to_float_1651);
  tcase_add_test(tc_core, test_from_decimal_to_float_1652);
  tcase_add_test(tc_core, test_from_decimal_to_float_1653);
  tcase_add_test(tc_core, test_from_decimal_to_float_1654);
  tcase_add_test(tc_core, test_from_decimal_to_float_1655);
  tcase_add_test(tc_core, test_from_decimal_to_float_1656);
  tcase_add_test(tc_core, test_from_decimal_to_float_1657);
  tcase_add_test(tc_core, test_from_decimal_to_float_1658);
  tcase_add_test(tc_core, test_from_decimal_to_float_1659);
  tcase_add_test(tc_core, test_from_decimal_to_float_1660);
  tcase_add_test(tc_core, test_from_decimal_to_float_1661);
  tcase_add_test(tc_core, test_from_decimal_to_float_1662);
  tcase_add_test(tc_core, test_from_decimal_to_float_1663);
  tcase_add_test(tc_core, test_from_decimal_to_float_1664);
  tcase_add_test(tc_core, test_from_decimal_to_float_1665);
  tcase_add_test(tc_core, test_from_decimal_to_float_1666);
  tcase_add_test(tc_core, test_from_decimal_to_float_1667);
  tcase_add_test(tc_core, test_from_decimal_to_float_1668);
  tcase_add_test(tc_core, test_from_decimal_to_float_1669);
  tcase_add_test(tc_core, test_from_decimal_to_float_1670);
  tcase_add_test(tc_core, test_from_decimal_to_float_1671);
  tcase_add_test(tc_core, test_from_decimal_to_float_1672);
  tcase_add_test(tc_core, test_from_decimal_to_float_1673);
  tcase_add_test(tc_core, test_from_decimal_to_float_1674);
  tcase_add_test(tc_core, test_from_decimal_to_float_1675);
  tcase_add_test(tc_core, test_from_decimal_to_float_1676);
  tcase_add_test(tc_core, test_from_decimal_to_float_1677);
  tcase_add_test(tc_core, test_from_decimal_to_float_1678);
  tcase_add_test(tc_core, test_from_decimal_to_float_1679);
  tcase_add_test(tc_core, test_from_decimal_to_float_1680);
  tcase_add_test(tc_core, test_from_decimal_to_float_1681);
  tcase_add_test(tc_core, test_from_decimal_to_float_1682);
  tcase_add_test(tc_core, test_from_decimal_to_float_1683);
  tcase_add_test(tc_core, test_from_decimal_to_float_1684);
  tcase_add_test(tc_core, test_from_decimal_to_float_1685);
  tcase_add_test(tc_core, test_from_decimal_to_float_1686);
  tcase_add_test(tc_core, test_from_decimal_to_float_1687);
  tcase_add_test(tc_core, test_from_decimal_to_float_1688);
  tcase_add_test(tc_core, test_from_decimal_to_float_1689);
  tcase_add_test(tc_core, test_from_decimal_to_float_1690);
  tcase_add_test(tc_core, test_from_decimal_to_float_1691);
  tcase_add_test(tc_core, test_from_decimal_to_float_1692);
  tcase_add_test(tc_core, test_from_decimal_to_float_1693);
  tcase_add_test(tc_core, test_from_decimal_to_float_1694);
  tcase_add_test(tc_core, test_from_decimal_to_float_1695);
  tcase_add_test(tc_core, test_from_decimal_to_float_1696);
  tcase_add_test(tc_core, test_from_decimal_to_float_1697);
  tcase_add_test(tc_core, test_from_decimal_to_float_1698);
  tcase_add_test(tc_core, test_from_decimal_to_float_1699);
  tcase_add_test(tc_core, test_from_decimal_to_float_1700);
  tcase_add_test(tc_core, test_from_decimal_to_float_1701);
  tcase_add_test(tc_core, test_from_decimal_to_float_1702);
  tcase_add_test(tc_core, test_from_decimal_to_float_1703);
  tcase_add_test(tc_core, test_from_decimal_to_float_1704);
  tcase_add_test(tc_core, test_from_decimal_to_float_1705);
  tcase_add_test(tc_core, test_from_decimal_to_float_1706);
  tcase_add_test(tc_core, test_from_decimal_to_float_1707);
  tcase_add_test(tc_core, test_from_decimal_to_float_1708);
  tcase_add_test(tc_core, test_from_decimal_to_float_1709);
  tcase_add_test(tc_core, test_from_decimal_to_float_1710);
  tcase_add_test(tc_core, test_from_decimal_to_float_1711);
  tcase_add_test(tc_core, test_from_decimal_to_float_1712);
  tcase_add_test(tc_core, test_from_decimal_to_float_1713);
  tcase_add_test(tc_core, test_from_decimal_to_float_1714);
  tcase_add_test(tc_core, test_from_decimal_to_float_1715);
  tcase_add_test(tc_core, test_from_decimal_to_float_1716);
  tcase_add_test(tc_core, test_from_decimal_to_float_1717);
  tcase_add_test(tc_core, test_from_decimal_to_float_1718);
  tcase_add_test(tc_core, test_from_decimal_to_float_1719);
  tcase_add_test(tc_core, test_from_decimal_to_float_1720);
  tcase_add_test(tc_core, test_from_decimal_to_float_1721);
  tcase_add_test(tc_core, test_from_decimal_to_float_1722);
  tcase_add_test(tc_core, test_from_decimal_to_float_1723);
  tcase_add_test(tc_core, test_from_decimal_to_float_1724);
  tcase_add_test(tc_core, test_from_decimal_to_float_1725);
  tcase_add_test(tc_core, test_from_decimal_to_float_1726);
  tcase_add_test(tc_core, test_from_decimal_to_float_1727);
  tcase_add_test(tc_core, test_from_decimal_to_float_1728);
  tcase_add_test(tc_core, test_from_decimal_to_float_1729);
  tcase_add_test(tc_core, test_from_decimal_to_float_1730);
  tcase_add_test(tc_core, test_from_decimal_to_float_1731);
  tcase_add_test(tc_core, test_from_decimal_to_float_1732);
  tcase_add_test(tc_core, test_from_decimal_to_float_1733);
  tcase_add_test(tc_core, test_from_decimal_to_float_1734);
  tcase_add_test(tc_core, test_from_decimal_to_float_1735);
  tcase_add_test(tc_core, test_from_decimal_to_float_1736);
  tcase_add_test(tc_core, test_from_decimal_to_float_1737);
  tcase_add_test(tc_core, test_from_decimal_to_float_1738);
  tcase_add_test(tc_core, test_from_decimal_to_float_1739);
  tcase_add_test(tc_core, test_from_decimal_to_float_1740);
  tcase_add_test(tc_core, test_from_decimal_to_float_1741);
  tcase_add_test(tc_core, test_from_decimal_to_float_1742);
  tcase_add_test(tc_core, test_from_decimal_to_float_1743);
  tcase_add_test(tc_core, test_from_decimal_to_float_1744);
  tcase_add_test(tc_core, test_from_decimal_to_float_1745);
  tcase_add_test(tc_core, test_from_decimal_to_float_1746);
  tcase_add_test(tc_core, test_from_decimal_to_float_1747);
  tcase_add_test(tc_core, test_from_decimal_to_float_1748);
  tcase_add_test(tc_core, test_from_decimal_to_float_1749);
  tcase_add_test(tc_core, test_from_decimal_to_float_1750);
  tcase_add_test(tc_core, test_from_decimal_to_float_1751);
  tcase_add_test(tc_core, test_from_decimal_to_float_1752);
  tcase_add_test(tc_core, test_from_decimal_to_float_1753);
  tcase_add_test(tc_core, test_from_decimal_to_float_1754);
  tcase_add_test(tc_core, test_from_decimal_to_float_1755);
  tcase_add_test(tc_core, test_from_decimal_to_float_1756);
  tcase_add_test(tc_core, test_from_decimal_to_float_1757);
  tcase_add_test(tc_core, test_from_decimal_to_float_1758);
  tcase_add_test(tc_core, test_from_decimal_to_float_1759);
  tcase_add_test(tc_core, test_from_decimal_to_float_1760);
  tcase_add_test(tc_core, test_from_decimal_to_float_1761);
  tcase_add_test(tc_core, test_from_decimal_to_float_1762);
  tcase_add_test(tc_core, test_from_decimal_to_float_1763);
  tcase_add_test(tc_core, test_from_decimal_to_float_1764);
  tcase_add_test(tc_core, test_from_decimal_to_float_1765);
  tcase_add_test(tc_core, test_from_decimal_to_float_1766);
  tcase_add_test(tc_core, test_from_decimal_to_float_1767);
  tcase_add_test(tc_core, test_from_decimal_to_float_1768);
  tcase_add_test(tc_core, test_from_decimal_to_float_1769);
  tcase_add_test(tc_core, test_from_decimal_to_float_1770);
  tcase_add_test(tc_core, test_from_decimal_to_float_1771);
  tcase_add_test(tc_core, test_from_decimal_to_float_1772);
  tcase_add_test(tc_core, test_from_decimal_to_float_1773);
  tcase_add_test(tc_core, test_from_decimal_to_float_1774);
  tcase_add_test(tc_core, test_from_decimal_to_float_1775);
  tcase_add_test(tc_core, test_from_decimal_to_float_1776);
  tcase_add_test(tc_core, test_from_decimal_to_float_1777);
  tcase_add_test(tc_core, test_from_decimal_to_float_1778);
  tcase_add_test(tc_core, test_from_decimal_to_float_1779);
  tcase_add_test(tc_core, test_from_decimal_to_float_1780);
  tcase_add_test(tc_core, test_from_decimal_to_float_1781);
  tcase_add_test(tc_core, test_from_decimal_to_float_1782);
  tcase_add_test(tc_core, test_from_decimal_to_float_1783);
  tcase_add_test(tc_core, test_from_decimal_to_float_1784);
  tcase_add_test(tc_core, test_from_decimal_to_float_1785);
  tcase_add_test(tc_core, test_from_decimal_to_float_1786);
  tcase_add_test(tc_core, test_from_decimal_to_float_1787);
  tcase_add_test(tc_core, test_from_decimal_to_float_1788);
  tcase_add_test(tc_core, test_from_decimal_to_float_1789);
  tcase_add_test(tc_core, test_from_decimal_to_float_1790);
  tcase_add_test(tc_core, test_from_decimal_to_float_1791);
  tcase_add_test(tc_core, test_from_decimal_to_float_1792);
  tcase_add_test(tc_core, test_from_decimal_to_float_1793);
  tcase_add_test(tc_core, test_from_decimal_to_float_1794);
  tcase_add_test(tc_core, test_from_decimal_to_float_1795);
  tcase_add_test(tc_core, test_from_decimal_to_float_1796);
  tcase_add_test(tc_core, test_from_decimal_to_float_1797);
  tcase_add_test(tc_core, test_from_decimal_to_float_1798);
  tcase_add_test(tc_core, test_from_decimal_to_float_1799);
  tcase_add_test(tc_core, test_from_decimal_to_float_1800);
  tcase_add_test(tc_core, test_from_decimal_to_float_1801);
  tcase_add_test(tc_core, test_from_decimal_to_float_1802);
  tcase_add_test(tc_core, test_from_decimal_to_float_1803);
  tcase_add_test(tc_core, test_from_decimal_to_float_1804);
  tcase_add_test(tc_core, test_from_decimal_to_float_1805);
  tcase_add_test(tc_core, test_from_decimal_to_float_1806);
  tcase_add_test(tc_core, test_from_decimal_to_float_1807);
  tcase_add_test(tc_core, test_from_decimal_to_float_1808);
  tcase_add_test(tc_core, test_from_decimal_to_float_1809);
  tcase_add_test(tc_core, test_from_decimal_to_float_1810);
  tcase_add_test(tc_core, test_from_decimal_to_float_1811);
  tcase_add_test(tc_core, test_from_decimal_to_float_1812);
  tcase_add_test(tc_core, test_from_decimal_to_float_1813);
  tcase_add_test(tc_core, test_from_decimal_to_float_1814);
  tcase_add_test(tc_core, test_from_decimal_to_float_1815);
  tcase_add_test(tc_core, test_from_decimal_to_float_1816);
  tcase_add_test(tc_core, test_from_decimal_to_float_1817);
  tcase_add_test(tc_core, test_from_decimal_to_float_1818);
  tcase_add_test(tc_core, test_from_decimal_to_float_1819);
  tcase_add_test(tc_core, test_from_decimal_to_float_1820);
  tcase_add_test(tc_core, test_from_decimal_to_float_1821);
  tcase_add_test(tc_core, test_from_decimal_to_float_1822);
  tcase_add_test(tc_core, test_from_decimal_to_float_1823);
  tcase_add_test(tc_core, test_from_decimal_to_float_1824);
  tcase_add_test(tc_core, test_from_decimal_to_float_1825);
  tcase_add_test(tc_core, test_from_decimal_to_float_1826);
  tcase_add_test(tc_core, test_from_decimal_to_float_1827);
  tcase_add_test(tc_core, test_from_decimal_to_float_1828);
  tcase_add_test(tc_core, test_from_decimal_to_float_1829);
  tcase_add_test(tc_core, test_from_decimal_to_float_1830);
  tcase_add_test(tc_core, test_from_decimal_to_float_1831);
  tcase_add_test(tc_core, test_from_decimal_to_float_1832);
  tcase_add_test(tc_core, test_from_decimal_to_float_1833);
  tcase_add_test(tc_core, test_from_decimal_to_float_1834);
  tcase_add_test(tc_core, test_from_decimal_to_float_1835);
  tcase_add_test(tc_core, test_from_decimal_to_float_1836);
  tcase_add_test(tc_core, test_from_decimal_to_float_1837);
  tcase_add_test(tc_core, test_from_decimal_to_float_1838);
  tcase_add_test(tc_core, test_from_decimal_to_float_1839);
  tcase_add_test(tc_core, test_from_decimal_to_float_1840);
  tcase_add_test(tc_core, test_from_decimal_to_float_1841);
  tcase_add_test(tc_core, test_from_decimal_to_float_1842);
  tcase_add_test(tc_core, test_from_decimal_to_float_1843);
  tcase_add_test(tc_core, test_from_decimal_to_float_1844);
  tcase_add_test(tc_core, test_from_decimal_to_float_1845);
  tcase_add_test(tc_core, test_from_decimal_to_float_1846);
  tcase_add_test(tc_core, test_from_decimal_to_float_1847);
  tcase_add_test(tc_core, test_from_decimal_to_float_1848);
  tcase_add_test(tc_core, test_from_decimal_to_float_1849);
  tcase_add_test(tc_core, test_from_decimal_to_float_1850);
  tcase_add_test(tc_core, test_from_decimal_to_float_1851);
  tcase_add_test(tc_core, test_from_decimal_to_float_1852);
  tcase_add_test(tc_core, test_from_decimal_to_float_1853);
  tcase_add_test(tc_core, test_from_decimal_to_float_1854);
  tcase_add_test(tc_core, test_from_decimal_to_float_1855);
  tcase_add_test(tc_core, test_from_decimal_to_float_1856);
  tcase_add_test(tc_core, test_from_decimal_to_float_1857);
  tcase_add_test(tc_core, test_from_decimal_to_float_1858);
  tcase_add_test(tc_core, test_from_decimal_to_float_1859);
  tcase_add_test(tc_core, test_from_decimal_to_float_1860);
  tcase_add_test(tc_core, test_from_decimal_to_float_1861);
  tcase_add_test(tc_core, test_from_decimal_to_float_1862);
  tcase_add_test(tc_core, test_from_decimal_to_float_1863);
  tcase_add_test(tc_core, test_from_decimal_to_float_1864);
  tcase_add_test(tc_core, test_from_decimal_to_float_1865);
  tcase_add_test(tc_core, test_from_decimal_to_float_1866);
  tcase_add_test(tc_core, test_from_decimal_to_float_1867);
  tcase_add_test(tc_core, test_from_decimal_to_float_1868);
  tcase_add_test(tc_core, test_from_decimal_to_float_1869);
  tcase_add_test(tc_core, test_from_decimal_to_float_1870);
  tcase_add_test(tc_core, test_from_decimal_to_float_1871);
  tcase_add_test(tc_core, test_from_decimal_to_float_1872);
  tcase_add_test(tc_core, test_from_decimal_to_float_1873);
  tcase_add_test(tc_core, test_from_decimal_to_float_1874);
  tcase_add_test(tc_core, test_from_decimal_to_float_1875);
  tcase_add_test(tc_core, test_from_decimal_to_float_1876);
  tcase_add_test(tc_core, test_from_decimal_to_float_1877);
  tcase_add_test(tc_core, test_from_decimal_to_float_1878);
  tcase_add_test(tc_core, test_from_decimal_to_float_1879);
  tcase_add_test(tc_core, test_from_decimal_to_float_1880);
  tcase_add_test(tc_core, test_from_decimal_to_float_1881);
  tcase_add_test(tc_core, test_from_decimal_to_float_1882);
  tcase_add_test(tc_core, test_from_decimal_to_float_1883);
  tcase_add_test(tc_core, test_from_decimal_to_float_1884);
  tcase_add_test(tc_core, test_from_decimal_to_float_1885);
  tcase_add_test(tc_core, test_from_decimal_to_float_1886);
  tcase_add_test(tc_core, test_from_decimal_to_float_1887);
  tcase_add_test(tc_core, test_from_decimal_to_float_1888);
  tcase_add_test(tc_core, test_from_decimal_to_float_1889);
  tcase_add_test(tc_core, test_from_decimal_to_float_1890);
  tcase_add_test(tc_core, test_from_decimal_to_float_1891);
  tcase_add_test(tc_core, test_from_decimal_to_float_1892);
  tcase_add_test(tc_core, test_from_decimal_to_float_1893);
  tcase_add_test(tc_core, test_from_decimal_to_float_1894);
  tcase_add_test(tc_core, test_from_decimal_to_float_1895);
  tcase_add_test(tc_core, test_from_decimal_to_float_1896);
  tcase_add_test(tc_core, test_from_decimal_to_float_1897);
  tcase_add_test(tc_core, test_from_decimal_to_float_1898);
  tcase_add_test(tc_core, test_from_decimal_to_float_1899);
  tcase_add_test(tc_core, test_from_decimal_to_float_1900);
  tcase_add_test(tc_core, test_from_decimal_to_float_1901);
  tcase_add_test(tc_core, test_from_decimal_to_float_1902);
  tcase_add_test(tc_core, test_from_decimal_to_float_1903);
  tcase_add_test(tc_core, test_from_decimal_to_float_1904);
  tcase_add_test(tc_core, test_from_decimal_to_float_1905);
  tcase_add_test(tc_core, test_from_decimal_to_float_1906);
  tcase_add_test(tc_core, test_from_decimal_to_float_1907);
  tcase_add_test(tc_core, test_from_decimal_to_float_1908);
  tcase_add_test(tc_core, test_from_decimal_to_float_1909);
  tcase_add_test(tc_core, test_from_decimal_to_float_1910);
  tcase_add_test(tc_core, test_from_decimal_to_float_1911);
  tcase_add_test(tc_core, test_from_decimal_to_float_1912);
  tcase_add_test(tc_core, test_from_decimal_to_float_1913);
  tcase_add_test(tc_core, test_from_decimal_to_float_1914);
  tcase_add_test(tc_core, test_from_decimal_to_float_1915);
  tcase_add_test(tc_core, test_from_decimal_to_float_1916);
  tcase_add_test(tc_core, test_from_decimal_to_float_1917);
  tcase_add_test(tc_core, test_from_decimal_to_float_1918);
  tcase_add_test(tc_core, test_from_decimal_to_float_1919);
  tcase_add_test(tc_core, test_from_decimal_to_float_1920);
  tcase_add_test(tc_core, test_from_decimal_to_float_1921);
  tcase_add_test(tc_core, test_from_decimal_to_float_1922);
  tcase_add_test(tc_core, test_from_decimal_to_float_1923);
  tcase_add_test(tc_core, test_from_decimal_to_float_1924);
  tcase_add_test(tc_core, test_from_decimal_to_float_1925);
  tcase_add_test(tc_core, test_from_decimal_to_float_1926);
  tcase_add_test(tc_core, test_from_decimal_to_float_1927);
  tcase_add_test(tc_core, test_from_decimal_to_float_1928);
  tcase_add_test(tc_core, test_from_decimal_to_float_1929);
  tcase_add_test(tc_core, test_from_decimal_to_float_1930);
  tcase_add_test(tc_core, test_from_decimal_to_float_1931);
  tcase_add_test(tc_core, test_from_decimal_to_float_1932);
  tcase_add_test(tc_core, test_from_decimal_to_float_1933);
  tcase_add_test(tc_core, test_from_decimal_to_float_1934);
  tcase_add_test(tc_core, test_from_decimal_to_float_1935);
  tcase_add_test(tc_core, test_from_decimal_to_float_1936);
  tcase_add_test(tc_core, test_from_decimal_to_float_1937);
  tcase_add_test(tc_core, test_from_decimal_to_float_1938);
  tcase_add_test(tc_core, test_from_decimal_to_float_1939);
  tcase_add_test(tc_core, test_from_decimal_to_float_1940);
  tcase_add_test(tc_core, test_from_decimal_to_float_1941);
  tcase_add_test(tc_core, test_from_decimal_to_float_1942);
  tcase_add_test(tc_core, test_from_decimal_to_float_1943);
  tcase_add_test(tc_core, test_from_decimal_to_float_1944);
  tcase_add_test(tc_core, test_from_decimal_to_float_1945);
  tcase_add_test(tc_core, test_from_decimal_to_float_1946);
  tcase_add_test(tc_core, test_from_decimal_to_float_1947);
  tcase_add_test(tc_core, test_from_decimal_to_float_1948);
  tcase_add_test(tc_core, test_from_decimal_to_float_1949);
  tcase_add_test(tc_core, test_from_decimal_to_float_1950);
  tcase_add_test(tc_core, test_from_decimal_to_float_1951);
  tcase_add_test(tc_core, test_from_decimal_to_float_1952);
  tcase_add_test(tc_core, test_from_decimal_to_float_1953);
  tcase_add_test(tc_core, test_from_decimal_to_float_1954);
  tcase_add_test(tc_core, test_from_decimal_to_float_1955);
  tcase_add_test(tc_core, test_from_decimal_to_float_1956);
  tcase_add_test(tc_core, test_from_decimal_to_float_1957);
  tcase_add_test(tc_core, test_from_decimal_to_float_1958);
  tcase_add_test(tc_core, test_from_decimal_to_float_1959);
  tcase_add_test(tc_core, test_from_decimal_to_float_1960);
  tcase_add_test(tc_core, test_from_decimal_to_float_1961);
  tcase_add_test(tc_core, test_from_decimal_to_float_1962);
  tcase_add_test(tc_core, test_from_decimal_to_float_1963);
  tcase_add_test(tc_core, test_from_decimal_to_float_1964);
  tcase_add_test(tc_core, test_from_decimal_to_float_1965);
  tcase_add_test(tc_core, test_from_decimal_to_float_1966);
  tcase_add_test(tc_core, test_from_decimal_to_float_1967);
  tcase_add_test(tc_core, test_from_decimal_to_float_1968);
  tcase_add_test(tc_core, test_from_decimal_to_float_1969);
  tcase_add_test(tc_core, test_from_decimal_to_float_1970);
  tcase_add_test(tc_core, test_from_decimal_to_float_1971);
  tcase_add_test(tc_core, test_from_decimal_to_float_1972);
  tcase_add_test(tc_core, test_from_decimal_to_float_1973);
  tcase_add_test(tc_core, test_from_decimal_to_float_1974);
  tcase_add_test(tc_core, test_from_decimal_to_float_1975);
  tcase_add_test(tc_core, test_from_decimal_to_float_1976);
  tcase_add_test(tc_core, test_from_decimal_to_float_1977);
  tcase_add_test(tc_core, test_from_decimal_to_float_1978);
  tcase_add_test(tc_core, test_from_decimal_to_float_1979);
  tcase_add_test(tc_core, test_from_decimal_to_float_1980);
  tcase_add_test(tc_core, test_from_decimal_to_float_1981);
  tcase_add_test(tc_core, test_from_decimal_to_float_1982);
  tcase_add_test(tc_core, test_from_decimal_to_float_1983);
  tcase_add_test(tc_core, test_from_decimal_to_float_1984);
  tcase_add_test(tc_core, test_from_decimal_to_float_1985);
  tcase_add_test(tc_core, test_from_decimal_to_float_1986);
  tcase_add_test(tc_core, test_from_decimal_to_float_1987);
  tcase_add_test(tc_core, test_from_decimal_to_float_1988);
  tcase_add_test(tc_core, test_from_decimal_to_float_1989);
  tcase_add_test(tc_core, test_from_decimal_to_float_1990);
  tcase_add_test(tc_core, test_from_decimal_to_float_1991);
  tcase_add_test(tc_core, test_from_decimal_to_float_1992);
  tcase_add_test(tc_core, test_from_decimal_to_float_1993);
  tcase_add_test(tc_core, test_from_decimal_to_float_1994);
  tcase_add_test(tc_core, test_from_decimal_to_float_1995);
  tcase_add_test(tc_core, test_from_decimal_to_float_1996);
  tcase_add_test(tc_core, test_from_decimal_to_float_1997);
  tcase_add_test(tc_core, test_from_decimal_to_float_1998);
  tcase_add_test(tc_core, test_from_decimal_to_float_1999);
  tcase_add_test(tc_core, test_from_decimal_to_float_2000);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_decimal_to_float_suite_5(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_float_5" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_decimal_to_float_2001);
  tcase_add_test(tc_core, test_from_decimal_to_float_2002);
  tcase_add_test(tc_core, test_from_decimal_to_float_2003);
  tcase_add_test(tc_core, test_from_decimal_to_float_2004);
  tcase_add_test(tc_core, test_from_decimal_to_float_2005);
  tcase_add_test(tc_core, test_from_decimal_to_float_2006);
  tcase_add_test(tc_core, test_from_decimal_to_float_2007);
  tcase_add_test(tc_core, test_from_decimal_to_float_2008);
  tcase_add_test(tc_core, test_from_decimal_to_float_2009);
  tcase_add_test(tc_core, test_from_decimal_to_float_2010);
  tcase_add_test(tc_core, test_from_decimal_to_float_2011);
  tcase_add_test(tc_core, test_from_decimal_to_float_2012);
  tcase_add_test(tc_core, test_from_decimal_to_float_2013);
  tcase_add_test(tc_core, test_from_decimal_to_float_2014);
  tcase_add_test(tc_core, test_from_decimal_to_float_2015);
  tcase_add_test(tc_core, test_from_decimal_to_float_2016);
  tcase_add_test(tc_core, test_from_decimal_to_float_2017);
  tcase_add_test(tc_core, test_from_decimal_to_float_2018);
  tcase_add_test(tc_core, test_from_decimal_to_float_2019);
  tcase_add_test(tc_core, test_from_decimal_to_float_2020);
  tcase_add_test(tc_core, test_from_decimal_to_float_2021);
  tcase_add_test(tc_core, test_from_decimal_to_float_2022);
  tcase_add_test(tc_core, test_from_decimal_to_float_2023);
  tcase_add_test(tc_core, test_from_decimal_to_float_2024);
  tcase_add_test(tc_core, test_from_decimal_to_float_2025);
  tcase_add_test(tc_core, test_from_decimal_to_float_2026);
  tcase_add_test(tc_core, test_from_decimal_to_float_2027);
  tcase_add_test(tc_core, test_from_decimal_to_float_2028);
  tcase_add_test(tc_core, test_from_decimal_to_float_2029);
  tcase_add_test(tc_core, test_from_decimal_to_float_2030);
  tcase_add_test(tc_core, test_from_decimal_to_float_2031);
  tcase_add_test(tc_core, test_from_decimal_to_float_2032);
  tcase_add_test(tc_core, test_from_decimal_to_float_2033);
  tcase_add_test(tc_core, test_from_decimal_to_float_2034);
  tcase_add_test(tc_core, test_from_decimal_to_float_2035);
  tcase_add_test(tc_core, test_from_decimal_to_float_2036);
  tcase_add_test(tc_core, test_from_decimal_to_float_2037);
  tcase_add_test(tc_core, test_from_decimal_to_float_2038);
  tcase_add_test(tc_core, test_from_decimal_to_float_2039);
  tcase_add_test(tc_core, test_from_decimal_to_float_2040);
  tcase_add_test(tc_core, test_from_decimal_to_float_2041);
  tcase_add_test(tc_core, test_from_decimal_to_float_2042);
  tcase_add_test(tc_core, test_from_decimal_to_float_2043);
  tcase_add_test(tc_core, test_from_decimal_to_float_2044);
  tcase_add_test(tc_core, test_from_decimal_to_float_2045);
  tcase_add_test(tc_core, test_from_decimal_to_float_2046);
  tcase_add_test(tc_core, test_from_decimal_to_float_2047);
  tcase_add_test(tc_core, test_from_decimal_to_float_2048);
  tcase_add_test(tc_core, test_from_decimal_to_float_2049);
  tcase_add_test(tc_core, test_from_decimal_to_float_2050);
  tcase_add_test(tc_core, test_from_decimal_to_float_2051);
  tcase_add_test(tc_core, test_from_decimal_to_float_2052);
  tcase_add_test(tc_core, test_from_decimal_to_float_2053);
  tcase_add_test(tc_core, test_from_decimal_to_float_2054);
  tcase_add_test(tc_core, test_from_decimal_to_float_2055);
  tcase_add_test(tc_core, test_from_decimal_to_float_2056);
  tcase_add_test(tc_core, test_from_decimal_to_float_2057);
  tcase_add_test(tc_core, test_from_decimal_to_float_2058);
  tcase_add_test(tc_core, test_from_decimal_to_float_2059);
  tcase_add_test(tc_core, test_from_decimal_to_float_2060);
  tcase_add_test(tc_core, test_from_decimal_to_float_2061);
  tcase_add_test(tc_core, test_from_decimal_to_float_2062);
  tcase_add_test(tc_core, test_from_decimal_to_float_2063);
  tcase_add_test(tc_core, test_from_decimal_to_float_2064);
  tcase_add_test(tc_core, test_from_decimal_to_float_2065);
  tcase_add_test(tc_core, test_from_decimal_to_float_2066);
  tcase_add_test(tc_core, test_from_decimal_to_float_2067);
  tcase_add_test(tc_core, test_from_decimal_to_float_2068);
  tcase_add_test(tc_core, test_from_decimal_to_float_2069);
  tcase_add_test(tc_core, test_from_decimal_to_float_2070);
  tcase_add_test(tc_core, test_from_decimal_to_float_2071);
  tcase_add_test(tc_core, test_from_decimal_to_float_2072);
  tcase_add_test(tc_core, test_from_decimal_to_float_2073);
  tcase_add_test(tc_core, test_from_decimal_to_float_2074);
  tcase_add_test(tc_core, test_from_decimal_to_float_2075);
  tcase_add_test(tc_core, test_from_decimal_to_float_2076);
  tcase_add_test(tc_core, test_from_decimal_to_float_2077);
  tcase_add_test(tc_core, test_from_decimal_to_float_2078);
  tcase_add_test(tc_core, test_from_decimal_to_float_2079);
  tcase_add_test(tc_core, test_from_decimal_to_float_2080);
  tcase_add_test(tc_core, test_from_decimal_to_float_2081);
  tcase_add_test(tc_core, test_from_decimal_to_float_2082);
  tcase_add_test(tc_core, test_from_decimal_to_float_2083);
  tcase_add_test(tc_core, test_from_decimal_to_float_2084);
  tcase_add_test(tc_core, test_from_decimal_to_float_2085);
  tcase_add_test(tc_core, test_from_decimal_to_float_2086);
  tcase_add_test(tc_core, test_from_decimal_to_float_2087);
  tcase_add_test(tc_core, test_from_decimal_to_float_2088);
  tcase_add_test(tc_core, test_from_decimal_to_float_2089);
  tcase_add_test(tc_core, test_from_decimal_to_float_2090);
  tcase_add_test(tc_core, test_from_decimal_to_float_2091);
  tcase_add_test(tc_core, test_from_decimal_to_float_2092);
  tcase_add_test(tc_core, test_from_decimal_to_float_2093);
  tcase_add_test(tc_core, test_from_decimal_to_float_2094);
  tcase_add_test(tc_core, test_from_decimal_to_float_2095);
  tcase_add_test(tc_core, test_from_decimal_to_float_2096);
  tcase_add_test(tc_core, test_from_decimal_to_float_2097);
  tcase_add_test(tc_core, test_from_decimal_to_float_2098);
  tcase_add_test(tc_core, test_from_decimal_to_float_2099);
  tcase_add_test(tc_core, test_from_decimal_to_float_2100);
  tcase_add_test(tc_core, test_from_decimal_to_float_2101);
  tcase_add_test(tc_core, test_from_decimal_to_float_2102);
  tcase_add_test(tc_core, test_from_decimal_to_float_2103);
  tcase_add_test(tc_core, test_from_decimal_to_float_2104);
  tcase_add_test(tc_core, test_from_decimal_to_float_2105);
  tcase_add_test(tc_core, test_from_decimal_to_float_2106);
  tcase_add_test(tc_core, test_from_decimal_to_float_2107);
  tcase_add_test(tc_core, test_from_decimal_to_float_2108);
  tcase_add_test(tc_core, test_from_decimal_to_float_2109);
  tcase_add_test(tc_core, test_from_decimal_to_float_2110);
  tcase_add_test(tc_core, test_from_decimal_to_float_2111);
  tcase_add_test(tc_core, test_from_decimal_to_float_2112);
  tcase_add_test(tc_core, test_from_decimal_to_float_2113);
  tcase_add_test(tc_core, test_from_decimal_to_float_2114);
  tcase_add_test(tc_core, test_from_decimal_to_float_2115);
  tcase_add_test(tc_core, test_from_decimal_to_float_2116);
  tcase_add_test(tc_core, test_from_decimal_to_float_2117);
  tcase_add_test(tc_core, test_from_decimal_to_float_2118);
  tcase_add_test(tc_core, test_from_decimal_to_float_2119);
  tcase_add_test(tc_core, test_from_decimal_to_float_2120);
  tcase_add_test(tc_core, test_from_decimal_to_float_2121);
  tcase_add_test(tc_core, test_from_decimal_to_float_2122);
  tcase_add_test(tc_core, test_from_decimal_to_float_2123);
  tcase_add_test(tc_core, test_from_decimal_to_float_2124);
  tcase_add_test(tc_core, test_from_decimal_to_float_2125);
  tcase_add_test(tc_core, test_from_decimal_to_float_2126);
  tcase_add_test(tc_core, test_from_decimal_to_float_2127);
  tcase_add_test(tc_core, test_from_decimal_to_float_2128);
  tcase_add_test(tc_core, test_from_decimal_to_float_2129);
  tcase_add_test(tc_core, test_from_decimal_to_float_2130);
  tcase_add_test(tc_core, test_from_decimal_to_float_2131);
  tcase_add_test(tc_core, test_from_decimal_to_float_2132);
  tcase_add_test(tc_core, test_from_decimal_to_float_2133);
  tcase_add_test(tc_core, test_from_decimal_to_float_2134);
  tcase_add_test(tc_core, test_from_decimal_to_float_2135);
  tcase_add_test(tc_core, test_from_decimal_to_float_2136);
  tcase_add_test(tc_core, test_from_decimal_to_float_2137);
  tcase_add_test(tc_core, test_from_decimal_to_float_2138);
  tcase_add_test(tc_core, test_from_decimal_to_float_2139);
  tcase_add_test(tc_core, test_from_decimal_to_float_2140);
  tcase_add_test(tc_core, test_from_decimal_to_float_2141);
  tcase_add_test(tc_core, test_from_decimal_to_float_2142);
  tcase_add_test(tc_core, test_from_decimal_to_float_2143);
  tcase_add_test(tc_core, test_from_decimal_to_float_2144);
  tcase_add_test(tc_core, test_from_decimal_to_float_2145);
  tcase_add_test(tc_core, test_from_decimal_to_float_2146);
  tcase_add_test(tc_core, test_from_decimal_to_float_2147);
  tcase_add_test(tc_core, test_from_decimal_to_float_2148);
  tcase_add_test(tc_core, test_from_decimal_to_float_2149);
  tcase_add_test(tc_core, test_from_decimal_to_float_2150);
  tcase_add_test(tc_core, test_from_decimal_to_float_2151);
  tcase_add_test(tc_core, test_from_decimal_to_float_2152);
  tcase_add_test(tc_core, test_from_decimal_to_float_2153);
  tcase_add_test(tc_core, test_from_decimal_to_float_2154);
  tcase_add_test(tc_core, test_from_decimal_to_float_2155);
  tcase_add_test(tc_core, test_from_decimal_to_float_2156);
  tcase_add_test(tc_core, test_from_decimal_to_float_2157);
  tcase_add_test(tc_core, test_from_decimal_to_float_2158);
  tcase_add_test(tc_core, test_from_decimal_to_float_2159);
  tcase_add_test(tc_core, test_from_decimal_to_float_2160);
  tcase_add_test(tc_core, test_from_decimal_to_float_2161);
  tcase_add_test(tc_core, test_from_decimal_to_float_2162);
  tcase_add_test(tc_core, test_from_decimal_to_float_2163);
  tcase_add_test(tc_core, test_from_decimal_to_float_2164);
  tcase_add_test(tc_core, test_from_decimal_to_float_2165);
  tcase_add_test(tc_core, test_from_decimal_to_float_2166);
  tcase_add_test(tc_core, test_from_decimal_to_float_2167);
  tcase_add_test(tc_core, test_from_decimal_to_float_2168);
  tcase_add_test(tc_core, test_from_decimal_to_float_2169);
  tcase_add_test(tc_core, test_from_decimal_to_float_2170);
  tcase_add_test(tc_core, test_from_decimal_to_float_2171);
  tcase_add_test(tc_core, test_from_decimal_to_float_2172);
  tcase_add_test(tc_core, test_from_decimal_to_float_2173);
  tcase_add_test(tc_core, test_from_decimal_to_float_2174);
  tcase_add_test(tc_core, test_from_decimal_to_float_2175);
  tcase_add_test(tc_core, test_from_decimal_to_float_2176);
  tcase_add_test(tc_core, test_from_decimal_to_float_2177);
  tcase_add_test(tc_core, test_from_decimal_to_float_2178);
  tcase_add_test(tc_core, test_from_decimal_to_float_2179);
  tcase_add_test(tc_core, test_from_decimal_to_float_2180);
  tcase_add_test(tc_core, test_from_decimal_to_float_2181);
  tcase_add_test(tc_core, test_from_decimal_to_float_2182);
  tcase_add_test(tc_core, test_from_decimal_to_float_2183);
  tcase_add_test(tc_core, test_from_decimal_to_float_2184);
  tcase_add_test(tc_core, test_from_decimal_to_float_2185);
  tcase_add_test(tc_core, test_from_decimal_to_float_2186);
  tcase_add_test(tc_core, test_from_decimal_to_float_2187);
  tcase_add_test(tc_core, test_from_decimal_to_float_2188);
  tcase_add_test(tc_core, test_from_decimal_to_float_2189);
  tcase_add_test(tc_core, test_from_decimal_to_float_2190);
  tcase_add_test(tc_core, test_from_decimal_to_float_2191);
  tcase_add_test(tc_core, test_from_decimal_to_float_2192);
  tcase_add_test(tc_core, test_from_decimal_to_float_2193);
  tcase_add_test(tc_core, test_from_decimal_to_float_2194);
  tcase_add_test(tc_core, test_from_decimal_to_float_2195);
  tcase_add_test(tc_core, test_from_decimal_to_float_2196);
  tcase_add_test(tc_core, test_from_decimal_to_float_2197);
  tcase_add_test(tc_core, test_from_decimal_to_float_2198);
  tcase_add_test(tc_core, test_from_decimal_to_float_2199);
  tcase_add_test(tc_core, test_from_decimal_to_float_2200);
  tcase_add_test(tc_core, test_from_decimal_to_float_2201);
  tcase_add_test(tc_core, test_from_decimal_to_float_2202);
  tcase_add_test(tc_core, test_from_decimal_to_float_2203);
  tcase_add_test(tc_core, test_from_decimal_to_float_2204);
  tcase_add_test(tc_core, test_from_decimal_to_float_2205);
  tcase_add_test(tc_core, test_from_decimal_to_float_2206);
  tcase_add_test(tc_core, test_from_decimal_to_float_2207);
  tcase_add_test(tc_core, test_from_decimal_to_float_2208);
  tcase_add_test(tc_core, test_from_decimal_to_float_2209);
  tcase_add_test(tc_core, test_from_decimal_to_float_2210);
  tcase_add_test(tc_core, test_from_decimal_to_float_2211);
  tcase_add_test(tc_core, test_from_decimal_to_float_2212);
  tcase_add_test(tc_core, test_from_decimal_to_float_2213);
  tcase_add_test(tc_core, test_from_decimal_to_float_2214);
  tcase_add_test(tc_core, test_from_decimal_to_float_2215);
  tcase_add_test(tc_core, test_from_decimal_to_float_2216);
  tcase_add_test(tc_core, test_from_decimal_to_float_2217);
  tcase_add_test(tc_core, test_from_decimal_to_float_2218);
  tcase_add_test(tc_core, test_from_decimal_to_float_2219);
  tcase_add_test(tc_core, test_from_decimal_to_float_2220);
  tcase_add_test(tc_core, test_from_decimal_to_float_2221);
  tcase_add_test(tc_core, test_from_decimal_to_float_2222);
  tcase_add_test(tc_core, test_from_decimal_to_float_2223);
  tcase_add_test(tc_core, test_from_decimal_to_float_2224);
  tcase_add_test(tc_core, test_from_decimal_to_float_2225);
  tcase_add_test(tc_core, test_from_decimal_to_float_2226);
  tcase_add_test(tc_core, test_from_decimal_to_float_2227);
  tcase_add_test(tc_core, test_from_decimal_to_float_2228);
  tcase_add_test(tc_core, test_from_decimal_to_float_2229);
  tcase_add_test(tc_core, test_from_decimal_to_float_2230);
  tcase_add_test(tc_core, test_from_decimal_to_float_2231);
  tcase_add_test(tc_core, test_from_decimal_to_float_2232);
  tcase_add_test(tc_core, test_from_decimal_to_float_2233);
  tcase_add_test(tc_core, test_from_decimal_to_float_2234);
  tcase_add_test(tc_core, test_from_decimal_to_float_2235);
  tcase_add_test(tc_core, test_from_decimal_to_float_2236);
  tcase_add_test(tc_core, test_from_decimal_to_float_2237);
  tcase_add_test(tc_core, test_from_decimal_to_float_2238);
  tcase_add_test(tc_core, test_from_decimal_to_float_2239);
  tcase_add_test(tc_core, test_from_decimal_to_float_2240);
  tcase_add_test(tc_core, test_from_decimal_to_float_2241);
  tcase_add_test(tc_core, test_from_decimal_to_float_2242);
  tcase_add_test(tc_core, test_from_decimal_to_float_2243);
  tcase_add_test(tc_core, test_from_decimal_to_float_2244);
  tcase_add_test(tc_core, test_from_decimal_to_float_2245);
  tcase_add_test(tc_core, test_from_decimal_to_float_2246);
  tcase_add_test(tc_core, test_from_decimal_to_float_2247);
  tcase_add_test(tc_core, test_from_decimal_to_float_2248);
  tcase_add_test(tc_core, test_from_decimal_to_float_2249);
  tcase_add_test(tc_core, test_from_decimal_to_float_2250);
  tcase_add_test(tc_core, test_from_decimal_to_float_2251);
  tcase_add_test(tc_core, test_from_decimal_to_float_2252);
  tcase_add_test(tc_core, test_from_decimal_to_float_2253);
  tcase_add_test(tc_core, test_from_decimal_to_float_2254);
  tcase_add_test(tc_core, test_from_decimal_to_float_2255);
  tcase_add_test(tc_core, test_from_decimal_to_float_2256);
  tcase_add_test(tc_core, test_from_decimal_to_float_2257);
  tcase_add_test(tc_core, test_from_decimal_to_float_2258);
  tcase_add_test(tc_core, test_from_decimal_to_float_2259);
  tcase_add_test(tc_core, test_from_decimal_to_float_2260);
  tcase_add_test(tc_core, test_from_decimal_to_float_2261);
  tcase_add_test(tc_core, test_from_decimal_to_float_2262);
  tcase_add_test(tc_core, test_from_decimal_to_float_2263);
  tcase_add_test(tc_core, test_from_decimal_to_float_2264);
  tcase_add_test(tc_core, test_from_decimal_to_float_2265);
  tcase_add_test(tc_core, test_from_decimal_to_float_2266);
  tcase_add_test(tc_core, test_from_decimal_to_float_2267);
  tcase_add_test(tc_core, test_from_decimal_to_float_2268);
  tcase_add_test(tc_core, test_from_decimal_to_float_2269);
  tcase_add_test(tc_core, test_from_decimal_to_float_2270);
  tcase_add_test(tc_core, test_from_decimal_to_float_2271);
  tcase_add_test(tc_core, test_from_decimal_to_float_2272);
  tcase_add_test(tc_core, test_from_decimal_to_float_2273);
  tcase_add_test(tc_core, test_from_decimal_to_float_2274);
  tcase_add_test(tc_core, test_from_decimal_to_float_2275);
  tcase_add_test(tc_core, test_from_decimal_to_float_2276);
  tcase_add_test(tc_core, test_from_decimal_to_float_2277);
  tcase_add_test(tc_core, test_from_decimal_to_float_2278);
  tcase_add_test(tc_core, test_from_decimal_to_float_2279);
  tcase_add_test(tc_core, test_from_decimal_to_float_2280);
  tcase_add_test(tc_core, test_from_decimal_to_float_2281);
  tcase_add_test(tc_core, test_from_decimal_to_float_2282);
  tcase_add_test(tc_core, test_from_decimal_to_float_2283);
  tcase_add_test(tc_core, test_from_decimal_to_float_2284);
  tcase_add_test(tc_core, test_from_decimal_to_float_2285);
  tcase_add_test(tc_core, test_from_decimal_to_float_2286);
  tcase_add_test(tc_core, test_from_decimal_to_float_2287);
  tcase_add_test(tc_core, test_from_decimal_to_float_2288);
  tcase_add_test(tc_core, test_from_decimal_to_float_2289);
  tcase_add_test(tc_core, test_from_decimal_to_float_2290);
  tcase_add_test(tc_core, test_from_decimal_to_float_2291);
  tcase_add_test(tc_core, test_from_decimal_to_float_2292);
  tcase_add_test(tc_core, test_from_decimal_to_float_2293);
  tcase_add_test(tc_core, test_from_decimal_to_float_2294);
  tcase_add_test(tc_core, test_from_decimal_to_float_2295);
  tcase_add_test(tc_core, test_from_decimal_to_float_2296);
  tcase_add_test(tc_core, test_from_decimal_to_float_2297);
  tcase_add_test(tc_core, test_from_decimal_to_float_2298);
  tcase_add_test(tc_core, test_from_decimal_to_float_2299);
  tcase_add_test(tc_core, test_from_decimal_to_float_2300);
  tcase_add_test(tc_core, test_from_decimal_to_float_2301);
  tcase_add_test(tc_core, test_from_decimal_to_float_2302);
  tcase_add_test(tc_core, test_from_decimal_to_float_2303);
  tcase_add_test(tc_core, test_from_decimal_to_float_2304);
  tcase_add_test(tc_core, test_from_decimal_to_float_2305);
  tcase_add_test(tc_core, test_from_decimal_to_float_2306);
  tcase_add_test(tc_core, test_from_decimal_to_float_2307);
  tcase_add_test(tc_core, test_from_decimal_to_float_2308);
  tcase_add_test(tc_core, test_from_decimal_to_float_2309);
  tcase_add_test(tc_core, test_from_decimal_to_float_2310);
  tcase_add_test(tc_core, test_from_decimal_to_float_2311);
  tcase_add_test(tc_core, test_from_decimal_to_float_2312);
  tcase_add_test(tc_core, test_from_decimal_to_float_2313);
  tcase_add_test(tc_core, test_from_decimal_to_float_2314);
  tcase_add_test(tc_core, test_from_decimal_to_float_2315);
  tcase_add_test(tc_core, test_from_decimal_to_float_2316);
  tcase_add_test(tc_core, test_from_decimal_to_float_2317);
  tcase_add_test(tc_core, test_from_decimal_to_float_2318);
  tcase_add_test(tc_core, test_from_decimal_to_float_2319);
  tcase_add_test(tc_core, test_from_decimal_to_float_2320);
  tcase_add_test(tc_core, test_from_decimal_to_float_2321);
  tcase_add_test(tc_core, test_from_decimal_to_float_2322);
  tcase_add_test(tc_core, test_from_decimal_to_float_2323);
  tcase_add_test(tc_core, test_from_decimal_to_float_2324);
  tcase_add_test(tc_core, test_from_decimal_to_float_2325);
  tcase_add_test(tc_core, test_from_decimal_to_float_2326);
  tcase_add_test(tc_core, test_from_decimal_to_float_2327);
  tcase_add_test(tc_core, test_from_decimal_to_float_2328);
  tcase_add_test(tc_core, test_from_decimal_to_float_2329);
  tcase_add_test(tc_core, test_from_decimal_to_float_2330);
  tcase_add_test(tc_core, test_from_decimal_to_float_2331);
  tcase_add_test(tc_core, test_from_decimal_to_float_2332);
  tcase_add_test(tc_core, test_from_decimal_to_float_2333);
  tcase_add_test(tc_core, test_from_decimal_to_float_2334);
  tcase_add_test(tc_core, test_from_decimal_to_float_2335);
  tcase_add_test(tc_core, test_from_decimal_to_float_2336);
  tcase_add_test(tc_core, test_from_decimal_to_float_2337);
  tcase_add_test(tc_core, test_from_decimal_to_float_2338);
  tcase_add_test(tc_core, test_from_decimal_to_float_2339);
  tcase_add_test(tc_core, test_from_decimal_to_float_2340);
  tcase_add_test(tc_core, test_from_decimal_to_float_2341);
  tcase_add_test(tc_core, test_from_decimal_to_float_2342);
  tcase_add_test(tc_core, test_from_decimal_to_float_2343);
  tcase_add_test(tc_core, test_from_decimal_to_float_2344);
  tcase_add_test(tc_core, test_from_decimal_to_float_2345);
  tcase_add_test(tc_core, test_from_decimal_to_float_2346);
  tcase_add_test(tc_core, test_from_decimal_to_float_2347);
  tcase_add_test(tc_core, test_from_decimal_to_float_2348);
  tcase_add_test(tc_core, test_from_decimal_to_float_2349);
  tcase_add_test(tc_core, test_from_decimal_to_float_2350);
  tcase_add_test(tc_core, test_from_decimal_to_float_2351);
  tcase_add_test(tc_core, test_from_decimal_to_float_2352);
  tcase_add_test(tc_core, test_from_decimal_to_float_2353);
  tcase_add_test(tc_core, test_from_decimal_to_float_2354);
  tcase_add_test(tc_core, test_from_decimal_to_float_2355);
  tcase_add_test(tc_core, test_from_decimal_to_float_2356);
  tcase_add_test(tc_core, test_from_decimal_to_float_2357);
  tcase_add_test(tc_core, test_from_decimal_to_float_2358);
  tcase_add_test(tc_core, test_from_decimal_to_float_2359);
  tcase_add_test(tc_core, test_from_decimal_to_float_2360);
  tcase_add_test(tc_core, test_from_decimal_to_float_2361);
  tcase_add_test(tc_core, test_from_decimal_to_float_2362);
  tcase_add_test(tc_core, test_from_decimal_to_float_2363);
  tcase_add_test(tc_core, test_from_decimal_to_float_2364);
  tcase_add_test(tc_core, test_from_decimal_to_float_2365);
  tcase_add_test(tc_core, test_from_decimal_to_float_2366);
  tcase_add_test(tc_core, test_from_decimal_to_float_2367);
  tcase_add_test(tc_core, test_from_decimal_to_float_2368);
  tcase_add_test(tc_core, test_from_decimal_to_float_2369);
  tcase_add_test(tc_core, test_from_decimal_to_float_2370);
  tcase_add_test(tc_core, test_from_decimal_to_float_2371);
  tcase_add_test(tc_core, test_from_decimal_to_float_2372);
  tcase_add_test(tc_core, test_from_decimal_to_float_2373);
  tcase_add_test(tc_core, test_from_decimal_to_float_2374);
  tcase_add_test(tc_core, test_from_decimal_to_float_2375);
  tcase_add_test(tc_core, test_from_decimal_to_float_2376);
  tcase_add_test(tc_core, test_from_decimal_to_float_2377);
  tcase_add_test(tc_core, test_from_decimal_to_float_2378);
  tcase_add_test(tc_core, test_from_decimal_to_float_2379);
  tcase_add_test(tc_core, test_from_decimal_to_float_2380);
  tcase_add_test(tc_core, test_from_decimal_to_float_2381);
  tcase_add_test(tc_core, test_from_decimal_to_float_2382);
  tcase_add_test(tc_core, test_from_decimal_to_float_2383);
  tcase_add_test(tc_core, test_from_decimal_to_float_2384);
  tcase_add_test(tc_core, test_from_decimal_to_float_2385);
  tcase_add_test(tc_core, test_from_decimal_to_float_2386);
  tcase_add_test(tc_core, test_from_decimal_to_float_2387);
  tcase_add_test(tc_core, test_from_decimal_to_float_2388);
  tcase_add_test(tc_core, test_from_decimal_to_float_2389);
  tcase_add_test(tc_core, test_from_decimal_to_float_2390);
  tcase_add_test(tc_core, test_from_decimal_to_float_2391);
  tcase_add_test(tc_core, test_from_decimal_to_float_2392);
  tcase_add_test(tc_core, test_from_decimal_to_float_2393);
  tcase_add_test(tc_core, test_from_decimal_to_float_2394);
  tcase_add_test(tc_core, test_from_decimal_to_float_2395);
  tcase_add_test(tc_core, test_from_decimal_to_float_2396);
  tcase_add_test(tc_core, test_from_decimal_to_float_2397);
  tcase_add_test(tc_core, test_from_decimal_to_float_2398);
  tcase_add_test(tc_core, test_from_decimal_to_float_2399);
  tcase_add_test(tc_core, test_from_decimal_to_float_2400);
  tcase_add_test(tc_core, test_from_decimal_to_float_2401);
  tcase_add_test(tc_core, test_from_decimal_to_float_2402);
  tcase_add_test(tc_core, test_from_decimal_to_float_2403);
  tcase_add_test(tc_core, test_from_decimal_to_float_2404);
  tcase_add_test(tc_core, test_from_decimal_to_float_2405);
  tcase_add_test(tc_core, test_from_decimal_to_float_2406);
  tcase_add_test(tc_core, test_from_decimal_to_float_2407);
  tcase_add_test(tc_core, test_from_decimal_to_float_2408);
  tcase_add_test(tc_core, test_from_decimal_to_float_2409);
  tcase_add_test(tc_core, test_from_decimal_to_float_2410);
  tcase_add_test(tc_core, test_from_decimal_to_float_2411);
  tcase_add_test(tc_core, test_from_decimal_to_float_2412);
  tcase_add_test(tc_core, test_from_decimal_to_float_2413);
  tcase_add_test(tc_core, test_from_decimal_to_float_2414);
  tcase_add_test(tc_core, test_from_decimal_to_float_2415);
  tcase_add_test(tc_core, test_from_decimal_to_float_2416);
  tcase_add_test(tc_core, test_from_decimal_to_float_2417);
  tcase_add_test(tc_core, test_from_decimal_to_float_2418);
  tcase_add_test(tc_core, test_from_decimal_to_float_2419);
  tcase_add_test(tc_core, test_from_decimal_to_float_2420);
  tcase_add_test(tc_core, test_from_decimal_to_float_2421);
  tcase_add_test(tc_core, test_from_decimal_to_float_2422);
  tcase_add_test(tc_core, test_from_decimal_to_float_2423);
  tcase_add_test(tc_core, test_from_decimal_to_float_2424);
  tcase_add_test(tc_core, test_from_decimal_to_float_2425);
  tcase_add_test(tc_core, test_from_decimal_to_float_2426);
  tcase_add_test(tc_core, test_from_decimal_to_float_2427);
  tcase_add_test(tc_core, test_from_decimal_to_float_2428);
  tcase_add_test(tc_core, test_from_decimal_to_float_2429);
  tcase_add_test(tc_core, test_from_decimal_to_float_2430);
  tcase_add_test(tc_core, test_from_decimal_to_float_2431);
  tcase_add_test(tc_core, test_from_decimal_to_float_2432);
  tcase_add_test(tc_core, test_from_decimal_to_float_2433);
  tcase_add_test(tc_core, test_from_decimal_to_float_2434);
  tcase_add_test(tc_core, test_from_decimal_to_float_2435);
  tcase_add_test(tc_core, test_from_decimal_to_float_2436);
  tcase_add_test(tc_core, test_from_decimal_to_float_2437);
  tcase_add_test(tc_core, test_from_decimal_to_float_2438);
  tcase_add_test(tc_core, test_from_decimal_to_float_2439);
  tcase_add_test(tc_core, test_from_decimal_to_float_2440);
  tcase_add_test(tc_core, test_from_decimal_to_float_2441);
  tcase_add_test(tc_core, test_from_decimal_to_float_2442);
  tcase_add_test(tc_core, test_from_decimal_to_float_2443);
  tcase_add_test(tc_core, test_from_decimal_to_float_2444);
  tcase_add_test(tc_core, test_from_decimal_to_float_2445);
  tcase_add_test(tc_core, test_from_decimal_to_float_2446);
  tcase_add_test(tc_core, test_from_decimal_to_float_2447);
  tcase_add_test(tc_core, test_from_decimal_to_float_2448);
  tcase_add_test(tc_core, test_from_decimal_to_float_2449);
  tcase_add_test(tc_core, test_from_decimal_to_float_2450);
  tcase_add_test(tc_core, test_from_decimal_to_float_2451);
  tcase_add_test(tc_core, test_from_decimal_to_float_2452);
  tcase_add_test(tc_core, test_from_decimal_to_float_2453);
  tcase_add_test(tc_core, test_from_decimal_to_float_2454);
  tcase_add_test(tc_core, test_from_decimal_to_float_2455);
  tcase_add_test(tc_core, test_from_decimal_to_float_2456);
  tcase_add_test(tc_core, test_from_decimal_to_float_2457);
  tcase_add_test(tc_core, test_from_decimal_to_float_2458);
  tcase_add_test(tc_core, test_from_decimal_to_float_2459);
  tcase_add_test(tc_core, test_from_decimal_to_float_2460);
  tcase_add_test(tc_core, test_from_decimal_to_float_2461);
  tcase_add_test(tc_core, test_from_decimal_to_float_2462);
  tcase_add_test(tc_core, test_from_decimal_to_float_2463);
  tcase_add_test(tc_core, test_from_decimal_to_float_2464);
  tcase_add_test(tc_core, test_from_decimal_to_float_2465);
  tcase_add_test(tc_core, test_from_decimal_to_float_2466);
  tcase_add_test(tc_core, test_from_decimal_to_float_2467);
  tcase_add_test(tc_core, test_from_decimal_to_float_2468);
  tcase_add_test(tc_core, test_from_decimal_to_float_2469);
  tcase_add_test(tc_core, test_from_decimal_to_float_2470);
  tcase_add_test(tc_core, test_from_decimal_to_float_2471);
  tcase_add_test(tc_core, test_from_decimal_to_float_2472);
  tcase_add_test(tc_core, test_from_decimal_to_float_2473);
  tcase_add_test(tc_core, test_from_decimal_to_float_2474);
  tcase_add_test(tc_core, test_from_decimal_to_float_2475);
  tcase_add_test(tc_core, test_from_decimal_to_float_2476);
  tcase_add_test(tc_core, test_from_decimal_to_float_2477);
  tcase_add_test(tc_core, test_from_decimal_to_float_2478);
  tcase_add_test(tc_core, test_from_decimal_to_float_2479);
  tcase_add_test(tc_core, test_from_decimal_to_float_2480);
  tcase_add_test(tc_core, test_from_decimal_to_float_2481);
  tcase_add_test(tc_core, test_from_decimal_to_float_2482);
  tcase_add_test(tc_core, test_from_decimal_to_float_2483);
  tcase_add_test(tc_core, test_from_decimal_to_float_2484);
  tcase_add_test(tc_core, test_from_decimal_to_float_2485);
  tcase_add_test(tc_core, test_from_decimal_to_float_2486);
  tcase_add_test(tc_core, test_from_decimal_to_float_2487);
  tcase_add_test(tc_core, test_from_decimal_to_float_2488);
  tcase_add_test(tc_core, test_from_decimal_to_float_2489);
  tcase_add_test(tc_core, test_from_decimal_to_float_2490);
  tcase_add_test(tc_core, test_from_decimal_to_float_2491);
  tcase_add_test(tc_core, test_from_decimal_to_float_2492);
  tcase_add_test(tc_core, test_from_decimal_to_float_2493);
  tcase_add_test(tc_core, test_from_decimal_to_float_2494);
  tcase_add_test(tc_core, test_from_decimal_to_float_2495);
  tcase_add_test(tc_core, test_from_decimal_to_float_2496);
  tcase_add_test(tc_core, test_from_decimal_to_float_2497);
  tcase_add_test(tc_core, test_from_decimal_to_float_2498);
  tcase_add_test(tc_core, test_from_decimal_to_float_2499);
  tcase_add_test(tc_core, test_from_decimal_to_float_2500);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_decimal_to_float_suite_6(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_float_6" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_decimal_to_float_2501);
  tcase_add_test(tc_core, test_from_decimal_to_float_2502);
  tcase_add_test(tc_core, test_from_decimal_to_float_2503);
  tcase_add_test(tc_core, test_from_decimal_to_float_2504);
  tcase_add_test(tc_core, test_from_decimal_to_float_2505);
  tcase_add_test(tc_core, test_from_decimal_to_float_2506);
  tcase_add_test(tc_core, test_from_decimal_to_float_2507);
  tcase_add_test(tc_core, test_from_decimal_to_float_2508);
  tcase_add_test(tc_core, test_from_decimal_to_float_2509);
  tcase_add_test(tc_core, test_from_decimal_to_float_2510);
  tcase_add_test(tc_core, test_from_decimal_to_float_2511);
  tcase_add_test(tc_core, test_from_decimal_to_float_2512);
  tcase_add_test(tc_core, test_from_decimal_to_float_2513);
  tcase_add_test(tc_core, test_from_decimal_to_float_2514);
  tcase_add_test(tc_core, test_from_decimal_to_float_2515);
  tcase_add_test(tc_core, test_from_decimal_to_float_2516);
  tcase_add_test(tc_core, test_from_decimal_to_float_2517);
  tcase_add_test(tc_core, test_from_decimal_to_float_2518);
  tcase_add_test(tc_core, test_from_decimal_to_float_2519);
  tcase_add_test(tc_core, test_from_decimal_to_float_2520);
  tcase_add_test(tc_core, test_from_decimal_to_float_2521);
  tcase_add_test(tc_core, test_from_decimal_to_float_2522);
  tcase_add_test(tc_core, test_from_decimal_to_float_2523);
  tcase_add_test(tc_core, test_from_decimal_to_float_2524);
  tcase_add_test(tc_core, test_from_decimal_to_float_2525);
  tcase_add_test(tc_core, test_from_decimal_to_float_2526);
  tcase_add_test(tc_core, test_from_decimal_to_float_2527);
  tcase_add_test(tc_core, test_from_decimal_to_float_2528);
  tcase_add_test(tc_core, test_from_decimal_to_float_2529);
  tcase_add_test(tc_core, test_from_decimal_to_float_2530);
  tcase_add_test(tc_core, test_from_decimal_to_float_2531);
  tcase_add_test(tc_core, test_from_decimal_to_float_2532);
  tcase_add_test(tc_core, test_from_decimal_to_float_2533);
  tcase_add_test(tc_core, test_from_decimal_to_float_2534);
  tcase_add_test(tc_core, test_from_decimal_to_float_2535);
  tcase_add_test(tc_core, test_from_decimal_to_float_2536);
  tcase_add_test(tc_core, test_from_decimal_to_float_2537);
  tcase_add_test(tc_core, test_from_decimal_to_float_2538);
  tcase_add_test(tc_core, test_from_decimal_to_float_2539);
  tcase_add_test(tc_core, test_from_decimal_to_float_2540);
  tcase_add_test(tc_core, test_from_decimal_to_float_2541);
  tcase_add_test(tc_core, test_from_decimal_to_float_2542);
  tcase_add_test(tc_core, test_from_decimal_to_float_2543);
  tcase_add_test(tc_core, test_from_decimal_to_float_2544);
  tcase_add_test(tc_core, test_from_decimal_to_float_2545);
  tcase_add_test(tc_core, test_from_decimal_to_float_2546);
  tcase_add_test(tc_core, test_from_decimal_to_float_2547);
  tcase_add_test(tc_core, test_from_decimal_to_float_2548);
  tcase_add_test(tc_core, test_from_decimal_to_float_2549);
  tcase_add_test(tc_core, test_from_decimal_to_float_2550);
  tcase_add_test(tc_core, test_from_decimal_to_float_2551);
  tcase_add_test(tc_core, test_from_decimal_to_float_2552);
  tcase_add_test(tc_core, test_from_decimal_to_float_2553);
  tcase_add_test(tc_core, test_from_decimal_to_float_2554);
  tcase_add_test(tc_core, test_from_decimal_to_float_2555);
  tcase_add_test(tc_core, test_from_decimal_to_float_2556);
  tcase_add_test(tc_core, test_from_decimal_to_float_2557);
  tcase_add_test(tc_core, test_from_decimal_to_float_2558);
  tcase_add_test(tc_core, test_from_decimal_to_float_2559);
  tcase_add_test(tc_core, test_from_decimal_to_float_2560);
  tcase_add_test(tc_core, test_from_decimal_to_float_2561);
  tcase_add_test(tc_core, test_from_decimal_to_float_2562);
  tcase_add_test(tc_core, test_from_decimal_to_float_2563);
  tcase_add_test(tc_core, test_from_decimal_to_float_2564);
  tcase_add_test(tc_core, test_from_decimal_to_float_2565);
  tcase_add_test(tc_core, test_from_decimal_to_float_2566);
  tcase_add_test(tc_core, test_from_decimal_to_float_2567);
  tcase_add_test(tc_core, test_from_decimal_to_float_2568);
  tcase_add_test(tc_core, test_from_decimal_to_float_2569);
  tcase_add_test(tc_core, test_from_decimal_to_float_2570);
  tcase_add_test(tc_core, test_from_decimal_to_float_2571);
  tcase_add_test(tc_core, test_from_decimal_to_float_2572);
  tcase_add_test(tc_core, test_from_decimal_to_float_2573);
  tcase_add_test(tc_core, test_from_decimal_to_float_2574);
  tcase_add_test(tc_core, test_from_decimal_to_float_2575);
  tcase_add_test(tc_core, test_from_decimal_to_float_2576);
  tcase_add_test(tc_core, test_from_decimal_to_float_2577);
  tcase_add_test(tc_core, test_from_decimal_to_float_2578);
  tcase_add_test(tc_core, test_from_decimal_to_float_2579);
  tcase_add_test(tc_core, test_from_decimal_to_float_2580);
  tcase_add_test(tc_core, test_from_decimal_to_float_2581);
  tcase_add_test(tc_core, test_from_decimal_to_float_2582);
  tcase_add_test(tc_core, test_from_decimal_to_float_2583);
  tcase_add_test(tc_core, test_from_decimal_to_float_2584);
  tcase_add_test(tc_core, test_from_decimal_to_float_2585);
  tcase_add_test(tc_core, test_from_decimal_to_float_2586);
  tcase_add_test(tc_core, test_from_decimal_to_float_2587);
  tcase_add_test(tc_core, test_from_decimal_to_float_2588);
  tcase_add_test(tc_core, test_from_decimal_to_float_2589);
  tcase_add_test(tc_core, test_from_decimal_to_float_2590);
  tcase_add_test(tc_core, test_from_decimal_to_float_2591);
  tcase_add_test(tc_core, test_from_decimal_to_float_2592);
  tcase_add_test(tc_core, test_from_decimal_to_float_2593);
  tcase_add_test(tc_core, test_from_decimal_to_float_2594);
  tcase_add_test(tc_core, test_from_decimal_to_float_2595);
  tcase_add_test(tc_core, test_from_decimal_to_float_2596);
  tcase_add_test(tc_core, test_from_decimal_to_float_2597);
  tcase_add_test(tc_core, test_from_decimal_to_float_2598);
  tcase_add_test(tc_core, test_from_decimal_to_float_2599);
  tcase_add_test(tc_core, test_from_decimal_to_float_2600);
  tcase_add_test(tc_core, test_from_decimal_to_float_2601);
  tcase_add_test(tc_core, test_from_decimal_to_float_2602);
  tcase_add_test(tc_core, test_from_decimal_to_float_2603);
  tcase_add_test(tc_core, test_from_decimal_to_float_2604);
  tcase_add_test(tc_core, test_from_decimal_to_float_2605);
  tcase_add_test(tc_core, test_from_decimal_to_float_2606);
  tcase_add_test(tc_core, test_from_decimal_to_float_2607);
  tcase_add_test(tc_core, test_from_decimal_to_float_2608);
  tcase_add_test(tc_core, test_from_decimal_to_float_2609);
  tcase_add_test(tc_core, test_from_decimal_to_float_2610);
  tcase_add_test(tc_core, test_from_decimal_to_float_2611);
  tcase_add_test(tc_core, test_from_decimal_to_float_2612);
  tcase_add_test(tc_core, test_from_decimal_to_float_2613);
  tcase_add_test(tc_core, test_from_decimal_to_float_2614);
  tcase_add_test(tc_core, test_from_decimal_to_float_2615);
  tcase_add_test(tc_core, test_from_decimal_to_float_2616);
  tcase_add_test(tc_core, test_from_decimal_to_float_2617);
  tcase_add_test(tc_core, test_from_decimal_to_float_2618);
  tcase_add_test(tc_core, test_from_decimal_to_float_2619);
  tcase_add_test(tc_core, test_from_decimal_to_float_2620);
  tcase_add_test(tc_core, test_from_decimal_to_float_2621);
  tcase_add_test(tc_core, test_from_decimal_to_float_2622);
  tcase_add_test(tc_core, test_from_decimal_to_float_2623);
  tcase_add_test(tc_core, test_from_decimal_to_float_2624);
  tcase_add_test(tc_core, test_from_decimal_to_float_2625);
  tcase_add_test(tc_core, test_from_decimal_to_float_2626);
  tcase_add_test(tc_core, test_from_decimal_to_float_2627);
  tcase_add_test(tc_core, test_from_decimal_to_float_2628);
  tcase_add_test(tc_core, test_from_decimal_to_float_2629);
  tcase_add_test(tc_core, test_from_decimal_to_float_2630);
  tcase_add_test(tc_core, test_from_decimal_to_float_2631);
  tcase_add_test(tc_core, test_from_decimal_to_float_2632);
  tcase_add_test(tc_core, test_from_decimal_to_float_2633);
  tcase_add_test(tc_core, test_from_decimal_to_float_2634);
  tcase_add_test(tc_core, test_from_decimal_to_float_2635);
  tcase_add_test(tc_core, test_from_decimal_to_float_2636);
  tcase_add_test(tc_core, test_from_decimal_to_float_2637);
  tcase_add_test(tc_core, test_from_decimal_to_float_2638);
  tcase_add_test(tc_core, test_from_decimal_to_float_2639);
  tcase_add_test(tc_core, test_from_decimal_to_float_2640);
  tcase_add_test(tc_core, test_from_decimal_to_float_2641);
  tcase_add_test(tc_core, test_from_decimal_to_float_2642);
  tcase_add_test(tc_core, test_from_decimal_to_float_2643);
  tcase_add_test(tc_core, test_from_decimal_to_float_2644);
  tcase_add_test(tc_core, test_from_decimal_to_float_2645);
  tcase_add_test(tc_core, test_from_decimal_to_float_2646);
  tcase_add_test(tc_core, test_from_decimal_to_float_2647);
  tcase_add_test(tc_core, test_from_decimal_to_float_2648);
  tcase_add_test(tc_core, test_from_decimal_to_float_2649);
  tcase_add_test(tc_core, test_from_decimal_to_float_2650);
  tcase_add_test(tc_core, test_from_decimal_to_float_2651);
  tcase_add_test(tc_core, test_from_decimal_to_float_2652);
  tcase_add_test(tc_core, test_from_decimal_to_float_2653);
  tcase_add_test(tc_core, test_from_decimal_to_float_2654);
  tcase_add_test(tc_core, test_from_decimal_to_float_2655);
  tcase_add_test(tc_core, test_from_decimal_to_float_2656);
  tcase_add_test(tc_core, test_from_decimal_to_float_2657);
  tcase_add_test(tc_core, test_from_decimal_to_float_2658);
  tcase_add_test(tc_core, test_from_decimal_to_float_2659);
  tcase_add_test(tc_core, test_from_decimal_to_float_2660);
  tcase_add_test(tc_core, test_from_decimal_to_float_2661);
  tcase_add_test(tc_core, test_from_decimal_to_float_2662);
  tcase_add_test(tc_core, test_from_decimal_to_float_2663);
  tcase_add_test(tc_core, test_from_decimal_to_float_2664);
  tcase_add_test(tc_core, test_from_decimal_to_float_2665);
  tcase_add_test(tc_core, test_from_decimal_to_float_2666);
  tcase_add_test(tc_core, test_from_decimal_to_float_2667);
  tcase_add_test(tc_core, test_from_decimal_to_float_2668);
  tcase_add_test(tc_core, test_from_decimal_to_float_2669);
  tcase_add_test(tc_core, test_from_decimal_to_float_2670);
  tcase_add_test(tc_core, test_from_decimal_to_float_2671);
  tcase_add_test(tc_core, test_from_decimal_to_float_2672);
  tcase_add_test(tc_core, test_from_decimal_to_float_2673);
  tcase_add_test(tc_core, test_from_decimal_to_float_2674);
  tcase_add_test(tc_core, test_from_decimal_to_float_2675);
  tcase_add_test(tc_core, test_from_decimal_to_float_2676);
  tcase_add_test(tc_core, test_from_decimal_to_float_2677);
  tcase_add_test(tc_core, test_from_decimal_to_float_2678);
  tcase_add_test(tc_core, test_from_decimal_to_float_2679);
  tcase_add_test(tc_core, test_from_decimal_to_float_2680);
  tcase_add_test(tc_core, test_from_decimal_to_float_2681);
  tcase_add_test(tc_core, test_from_decimal_to_float_2682);
  tcase_add_test(tc_core, test_from_decimal_to_float_2683);
  tcase_add_test(tc_core, test_from_decimal_to_float_2684);
  tcase_add_test(tc_core, test_from_decimal_to_float_2685);
  tcase_add_test(tc_core, test_from_decimal_to_float_2686);
  tcase_add_test(tc_core, test_from_decimal_to_float_2687);
  tcase_add_test(tc_core, test_from_decimal_to_float_2688);
  tcase_add_test(tc_core, test_from_decimal_to_float_2689);
  tcase_add_test(tc_core, test_from_decimal_to_float_2690);
  tcase_add_test(tc_core, test_from_decimal_to_float_2691);
  tcase_add_test(tc_core, test_from_decimal_to_float_2692);
  tcase_add_test(tc_core, test_from_decimal_to_float_2693);
  tcase_add_test(tc_core, test_from_decimal_to_float_2694);
  tcase_add_test(tc_core, test_from_decimal_to_float_2695);
  tcase_add_test(tc_core, test_from_decimal_to_float_2696);
  tcase_add_test(tc_core, test_from_decimal_to_float_2697);
  tcase_add_test(tc_core, test_from_decimal_to_float_2698);
  tcase_add_test(tc_core, test_from_decimal_to_float_2699);
  tcase_add_test(tc_core, test_from_decimal_to_float_2700);
  tcase_add_test(tc_core, test_from_decimal_to_float_2701);
  tcase_add_test(tc_core, test_from_decimal_to_float_2702);
  tcase_add_test(tc_core, test_from_decimal_to_float_2703);
  tcase_add_test(tc_core, test_from_decimal_to_float_2704);
  tcase_add_test(tc_core, test_from_decimal_to_float_2705);
  tcase_add_test(tc_core, test_from_decimal_to_float_2706);
  tcase_add_test(tc_core, test_from_decimal_to_float_2707);
  tcase_add_test(tc_core, test_from_decimal_to_float_2708);
  tcase_add_test(tc_core, test_from_decimal_to_float_2709);
  tcase_add_test(tc_core, test_from_decimal_to_float_2710);
  tcase_add_test(tc_core, test_from_decimal_to_float_2711);
  tcase_add_test(tc_core, test_from_decimal_to_float_2712);
  tcase_add_test(tc_core, test_from_decimal_to_float_2713);
  tcase_add_test(tc_core, test_from_decimal_to_float_2714);
  tcase_add_test(tc_core, test_from_decimal_to_float_2715);
  tcase_add_test(tc_core, test_from_decimal_to_float_2716);
  tcase_add_test(tc_core, test_from_decimal_to_float_2717);
  tcase_add_test(tc_core, test_from_decimal_to_float_2718);
  tcase_add_test(tc_core, test_from_decimal_to_float_2719);
  tcase_add_test(tc_core, test_from_decimal_to_float_2720);
  tcase_add_test(tc_core, test_from_decimal_to_float_2721);
  tcase_add_test(tc_core, test_from_decimal_to_float_2722);
  tcase_add_test(tc_core, test_from_decimal_to_float_2723);
  tcase_add_test(tc_core, test_from_decimal_to_float_2724);
  tcase_add_test(tc_core, test_from_decimal_to_float_2725);
  tcase_add_test(tc_core, test_from_decimal_to_float_2726);
  tcase_add_test(tc_core, test_from_decimal_to_float_2727);
  tcase_add_test(tc_core, test_from_decimal_to_float_2728);
  tcase_add_test(tc_core, test_from_decimal_to_float_2729);
  tcase_add_test(tc_core, test_from_decimal_to_float_2730);
  tcase_add_test(tc_core, test_from_decimal_to_float_2731);
  tcase_add_test(tc_core, test_from_decimal_to_float_2732);
  tcase_add_test(tc_core, test_from_decimal_to_float_2733);
  tcase_add_test(tc_core, test_from_decimal_to_float_2734);
  tcase_add_test(tc_core, test_from_decimal_to_float_2735);
  tcase_add_test(tc_core, test_from_decimal_to_float_2736);
  tcase_add_test(tc_core, test_from_decimal_to_float_2737);
  tcase_add_test(tc_core, test_from_decimal_to_float_2738);
  tcase_add_test(tc_core, test_from_decimal_to_float_2739);
  tcase_add_test(tc_core, test_from_decimal_to_float_2740);
  tcase_add_test(tc_core, test_from_decimal_to_float_2741);
  tcase_add_test(tc_core, test_from_decimal_to_float_2742);
  tcase_add_test(tc_core, test_from_decimal_to_float_2743);
  tcase_add_test(tc_core, test_from_decimal_to_float_2744);
  tcase_add_test(tc_core, test_from_decimal_to_float_2745);
  tcase_add_test(tc_core, test_from_decimal_to_float_2746);
  tcase_add_test(tc_core, test_from_decimal_to_float_2747);
  tcase_add_test(tc_core, test_from_decimal_to_float_2748);
  tcase_add_test(tc_core, test_from_decimal_to_float_2749);
  tcase_add_test(tc_core, test_from_decimal_to_float_2750);
  tcase_add_test(tc_core, test_from_decimal_to_float_2751);
  tcase_add_test(tc_core, test_from_decimal_to_float_2752);
  tcase_add_test(tc_core, test_from_decimal_to_float_2753);
  tcase_add_test(tc_core, test_from_decimal_to_float_2754);
  tcase_add_test(tc_core, test_from_decimal_to_float_2755);
  tcase_add_test(tc_core, test_from_decimal_to_float_2756);
  tcase_add_test(tc_core, test_from_decimal_to_float_2757);
  tcase_add_test(tc_core, test_from_decimal_to_float_2758);
  tcase_add_test(tc_core, test_from_decimal_to_float_2759);
  tcase_add_test(tc_core, test_from_decimal_to_float_2760);
  tcase_add_test(tc_core, test_from_decimal_to_float_2761);
  tcase_add_test(tc_core, test_from_decimal_to_float_2762);
  tcase_add_test(tc_core, test_from_decimal_to_float_2763);
  tcase_add_test(tc_core, test_from_decimal_to_float_2764);
  tcase_add_test(tc_core, test_from_decimal_to_float_2765);
  tcase_add_test(tc_core, test_from_decimal_to_float_2766);
  tcase_add_test(tc_core, test_from_decimal_to_float_2767);
  tcase_add_test(tc_core, test_from_decimal_to_float_2768);
  tcase_add_test(tc_core, test_from_decimal_to_float_2769);
  tcase_add_test(tc_core, test_from_decimal_to_float_2770);
  tcase_add_test(tc_core, test_from_decimal_to_float_2771);
  tcase_add_test(tc_core, test_from_decimal_to_float_2772);
  tcase_add_test(tc_core, test_from_decimal_to_float_2773);
  tcase_add_test(tc_core, test_from_decimal_to_float_2774);
  tcase_add_test(tc_core, test_from_decimal_to_float_2775);
  tcase_add_test(tc_core, test_from_decimal_to_float_2776);
  tcase_add_test(tc_core, test_from_decimal_to_float_2777);
  tcase_add_test(tc_core, test_from_decimal_to_float_2778);
  tcase_add_test(tc_core, test_from_decimal_to_float_2779);
  tcase_add_test(tc_core, test_from_decimal_to_float_2780);
  tcase_add_test(tc_core, test_from_decimal_to_float_2781);
  tcase_add_test(tc_core, test_from_decimal_to_float_2782);
  tcase_add_test(tc_core, test_from_decimal_to_float_2783);
  tcase_add_test(tc_core, test_from_decimal_to_float_2784);
  tcase_add_test(tc_core, test_from_decimal_to_float_2785);
  tcase_add_test(tc_core, test_from_decimal_to_float_2786);
  tcase_add_test(tc_core, test_from_decimal_to_float_2787);
  tcase_add_test(tc_core, test_from_decimal_to_float_2788);
  tcase_add_test(tc_core, test_from_decimal_to_float_2789);
  tcase_add_test(tc_core, test_from_decimal_to_float_2790);
  tcase_add_test(tc_core, test_from_decimal_to_float_2791);
  tcase_add_test(tc_core, test_from_decimal_to_float_2792);
  tcase_add_test(tc_core, test_from_decimal_to_float_2793);
  tcase_add_test(tc_core, test_from_decimal_to_float_2794);
  tcase_add_test(tc_core, test_from_decimal_to_float_2795);
  tcase_add_test(tc_core, test_from_decimal_to_float_2796);
  tcase_add_test(tc_core, test_from_decimal_to_float_2797);
  tcase_add_test(tc_core, test_from_decimal_to_float_2798);
  tcase_add_test(tc_core, test_from_decimal_to_float_2799);
  tcase_add_test(tc_core, test_from_decimal_to_float_2800);
  tcase_add_test(tc_core, test_from_decimal_to_float_2801);
  tcase_add_test(tc_core, test_from_decimal_to_float_2802);
  tcase_add_test(tc_core, test_from_decimal_to_float_2803);
  tcase_add_test(tc_core, test_from_decimal_to_float_2804);
  tcase_add_test(tc_core, test_from_decimal_to_float_2805);
  tcase_add_test(tc_core, test_from_decimal_to_float_2806);
  tcase_add_test(tc_core, test_from_decimal_to_float_2807);
  tcase_add_test(tc_core, test_from_decimal_to_float_2808);
  tcase_add_test(tc_core, test_from_decimal_to_float_2809);
  tcase_add_test(tc_core, test_from_decimal_to_float_2810);
  tcase_add_test(tc_core, test_from_decimal_to_float_2811);
  tcase_add_test(tc_core, test_from_decimal_to_float_2812);
  tcase_add_test(tc_core, test_from_decimal_to_float_2813);
  tcase_add_test(tc_core, test_from_decimal_to_float_2814);
  tcase_add_test(tc_core, test_from_decimal_to_float_2815);
  tcase_add_test(tc_core, test_from_decimal_to_float_2816);
  tcase_add_test(tc_core, test_from_decimal_to_float_2817);
  tcase_add_test(tc_core, test_from_decimal_to_float_2818);
  tcase_add_test(tc_core, test_from_decimal_to_float_2819);
  tcase_add_test(tc_core, test_from_decimal_to_float_2820);
  tcase_add_test(tc_core, test_from_decimal_to_float_2821);
  tcase_add_test(tc_core, test_from_decimal_to_float_2822);
  tcase_add_test(tc_core, test_from_decimal_to_float_2823);
  tcase_add_test(tc_core, test_from_decimal_to_float_2824);
  tcase_add_test(tc_core, test_from_decimal_to_float_2825);
  tcase_add_test(tc_core, test_from_decimal_to_float_2826);
  tcase_add_test(tc_core, test_from_decimal_to_float_2827);
  tcase_add_test(tc_core, test_from_decimal_to_float_2828);
  tcase_add_test(tc_core, test_from_decimal_to_float_2829);
  tcase_add_test(tc_core, test_from_decimal_to_float_2830);
  tcase_add_test(tc_core, test_from_decimal_to_float_2831);
  tcase_add_test(tc_core, test_from_decimal_to_float_2832);
  tcase_add_test(tc_core, test_from_decimal_to_float_2833);
  tcase_add_test(tc_core, test_from_decimal_to_float_2834);
  tcase_add_test(tc_core, test_from_decimal_to_float_2835);
  tcase_add_test(tc_core, test_from_decimal_to_float_2836);
  tcase_add_test(tc_core, test_from_decimal_to_float_2837);
  tcase_add_test(tc_core, test_from_decimal_to_float_2838);
  tcase_add_test(tc_core, test_from_decimal_to_float_2839);
  tcase_add_test(tc_core, test_from_decimal_to_float_2840);
  tcase_add_test(tc_core, test_from_decimal_to_float_2841);
  tcase_add_test(tc_core, test_from_decimal_to_float_2842);
  tcase_add_test(tc_core, test_from_decimal_to_float_2843);
  tcase_add_test(tc_core, test_from_decimal_to_float_2844);
  tcase_add_test(tc_core, test_from_decimal_to_float_2845);
  tcase_add_test(tc_core, test_from_decimal_to_float_2846);
  tcase_add_test(tc_core, test_from_decimal_to_float_2847);
  tcase_add_test(tc_core, test_from_decimal_to_float_2848);
  tcase_add_test(tc_core, test_from_decimal_to_float_2849);
  tcase_add_test(tc_core, test_from_decimal_to_float_2850);
  tcase_add_test(tc_core, test_from_decimal_to_float_2851);
  tcase_add_test(tc_core, test_from_decimal_to_float_2852);
  tcase_add_test(tc_core, test_from_decimal_to_float_2853);
  tcase_add_test(tc_core, test_from_decimal_to_float_2854);
  tcase_add_test(tc_core, test_from_decimal_to_float_2855);
  tcase_add_test(tc_core, test_from_decimal_to_float_2856);
  tcase_add_test(tc_core, test_from_decimal_to_float_2857);
  tcase_add_test(tc_core, test_from_decimal_to_float_2858);
  tcase_add_test(tc_core, test_from_decimal_to_float_2859);
  tcase_add_test(tc_core, test_from_decimal_to_float_2860);
  tcase_add_test(tc_core, test_from_decimal_to_float_2861);
  tcase_add_test(tc_core, test_from_decimal_to_float_2862);
  tcase_add_test(tc_core, test_from_decimal_to_float_2863);
  tcase_add_test(tc_core, test_from_decimal_to_float_2864);
  tcase_add_test(tc_core, test_from_decimal_to_float_2865);
  tcase_add_test(tc_core, test_from_decimal_to_float_2866);
  tcase_add_test(tc_core, test_from_decimal_to_float_2867);
  tcase_add_test(tc_core, test_from_decimal_to_float_2868);
  tcase_add_test(tc_core, test_from_decimal_to_float_2869);
  tcase_add_test(tc_core, test_from_decimal_to_float_2870);
  tcase_add_test(tc_core, test_from_decimal_to_float_2871);
  tcase_add_test(tc_core, test_from_decimal_to_float_2872);
  tcase_add_test(tc_core, test_from_decimal_to_float_2873);
  tcase_add_test(tc_core, test_from_decimal_to_float_2874);
  tcase_add_test(tc_core, test_from_decimal_to_float_2875);
  tcase_add_test(tc_core, test_from_decimal_to_float_2876);
  tcase_add_test(tc_core, test_from_decimal_to_float_2877);
  tcase_add_test(tc_core, test_from_decimal_to_float_2878);
  tcase_add_test(tc_core, test_from_decimal_to_float_2879);
  tcase_add_test(tc_core, test_from_decimal_to_float_2880);
  tcase_add_test(tc_core, test_from_decimal_to_float_2881);
  tcase_add_test(tc_core, test_from_decimal_to_float_2882);
  tcase_add_test(tc_core, test_from_decimal_to_float_2883);
  tcase_add_test(tc_core, test_from_decimal_to_float_2884);
  tcase_add_test(tc_core, test_from_decimal_to_float_2885);
  tcase_add_test(tc_core, test_from_decimal_to_float_2886);
  tcase_add_test(tc_core, test_from_decimal_to_float_2887);
  tcase_add_test(tc_core, test_from_decimal_to_float_2888);
  tcase_add_test(tc_core, test_from_decimal_to_float_2889);
  tcase_add_test(tc_core, test_from_decimal_to_float_2890);
  tcase_add_test(tc_core, test_from_decimal_to_float_2891);
  tcase_add_test(tc_core, test_from_decimal_to_float_2892);
  tcase_add_test(tc_core, test_from_decimal_to_float_2893);
  tcase_add_test(tc_core, test_from_decimal_to_float_2894);
  tcase_add_test(tc_core, test_from_decimal_to_float_2895);
  tcase_add_test(tc_core, test_from_decimal_to_float_2896);
  tcase_add_test(tc_core, test_from_decimal_to_float_2897);
  tcase_add_test(tc_core, test_from_decimal_to_float_2898);
  tcase_add_test(tc_core, test_from_decimal_to_float_2899);
  tcase_add_test(tc_core, test_from_decimal_to_float_2900);
  tcase_add_test(tc_core, test_from_decimal_to_float_2901);
  tcase_add_test(tc_core, test_from_decimal_to_float_2902);
  tcase_add_test(tc_core, test_from_decimal_to_float_2903);
  tcase_add_test(tc_core, test_from_decimal_to_float_2904);
  tcase_add_test(tc_core, test_from_decimal_to_float_2905);
  tcase_add_test(tc_core, test_from_decimal_to_float_2906);
  tcase_add_test(tc_core, test_from_decimal_to_float_2907);
  tcase_add_test(tc_core, test_from_decimal_to_float_2908);
  tcase_add_test(tc_core, test_from_decimal_to_float_2909);
  tcase_add_test(tc_core, test_from_decimal_to_float_2910);
  tcase_add_test(tc_core, test_from_decimal_to_float_2911);
  tcase_add_test(tc_core, test_from_decimal_to_float_2912);
  tcase_add_test(tc_core, test_from_decimal_to_float_2913);
  tcase_add_test(tc_core, test_from_decimal_to_float_2914);
  tcase_add_test(tc_core, test_from_decimal_to_float_2915);
  tcase_add_test(tc_core, test_from_decimal_to_float_2916);
  tcase_add_test(tc_core, test_from_decimal_to_float_2917);
  tcase_add_test(tc_core, test_from_decimal_to_float_2918);
  tcase_add_test(tc_core, test_from_decimal_to_float_2919);
  tcase_add_test(tc_core, test_from_decimal_to_float_2920);
  tcase_add_test(tc_core, test_from_decimal_to_float_2921);
  tcase_add_test(tc_core, test_from_decimal_to_float_2922);
  tcase_add_test(tc_core, test_from_decimal_to_float_2923);
  tcase_add_test(tc_core, test_from_decimal_to_float_2924);
  tcase_add_test(tc_core, test_from_decimal_to_float_2925);
  tcase_add_test(tc_core, test_from_decimal_to_float_2926);
  tcase_add_test(tc_core, test_from_decimal_to_float_2927);
  tcase_add_test(tc_core, test_from_decimal_to_float_2928);
  tcase_add_test(tc_core, test_from_decimal_to_float_2929);
  tcase_add_test(tc_core, test_from_decimal_to_float_2930);
  tcase_add_test(tc_core, test_from_decimal_to_float_2931);
  tcase_add_test(tc_core, test_from_decimal_to_float_2932);
  tcase_add_test(tc_core, test_from_decimal_to_float_2933);
  tcase_add_test(tc_core, test_from_decimal_to_float_2934);
  tcase_add_test(tc_core, test_from_decimal_to_float_2935);
  tcase_add_test(tc_core, test_from_decimal_to_float_2936);
  tcase_add_test(tc_core, test_from_decimal_to_float_2937);
  tcase_add_test(tc_core, test_from_decimal_to_float_2938);
  tcase_add_test(tc_core, test_from_decimal_to_float_2939);
  tcase_add_test(tc_core, test_from_decimal_to_float_2940);
  tcase_add_test(tc_core, test_from_decimal_to_float_2941);
  tcase_add_test(tc_core, test_from_decimal_to_float_2942);
  tcase_add_test(tc_core, test_from_decimal_to_float_2943);
  tcase_add_test(tc_core, test_from_decimal_to_float_2944);
  tcase_add_test(tc_core, test_from_decimal_to_float_2945);
  tcase_add_test(tc_core, test_from_decimal_to_float_2946);
  tcase_add_test(tc_core, test_from_decimal_to_float_2947);
  tcase_add_test(tc_core, test_from_decimal_to_float_2948);
  tcase_add_test(tc_core, test_from_decimal_to_float_2949);
  tcase_add_test(tc_core, test_from_decimal_to_float_2950);
  tcase_add_test(tc_core, test_from_decimal_to_float_2951);
  tcase_add_test(tc_core, test_from_decimal_to_float_2952);
  tcase_add_test(tc_core, test_from_decimal_to_float_2953);
  tcase_add_test(tc_core, test_from_decimal_to_float_2954);
  tcase_add_test(tc_core, test_from_decimal_to_float_2955);
  tcase_add_test(tc_core, test_from_decimal_to_float_2956);
  tcase_add_test(tc_core, test_from_decimal_to_float_2957);
  tcase_add_test(tc_core, test_from_decimal_to_float_2958);
  tcase_add_test(tc_core, test_from_decimal_to_float_2959);
  tcase_add_test(tc_core, test_from_decimal_to_float_2960);
  tcase_add_test(tc_core, test_from_decimal_to_float_2961);
  tcase_add_test(tc_core, test_from_decimal_to_float_2962);
  tcase_add_test(tc_core, test_from_decimal_to_float_2963);
  tcase_add_test(tc_core, test_from_decimal_to_float_2964);
  tcase_add_test(tc_core, test_from_decimal_to_float_2965);
  tcase_add_test(tc_core, test_from_decimal_to_float_2966);
  tcase_add_test(tc_core, test_from_decimal_to_float_2967);
  tcase_add_test(tc_core, test_from_decimal_to_float_2968);
  tcase_add_test(tc_core, test_from_decimal_to_float_2969);
  tcase_add_test(tc_core, test_from_decimal_to_float_2970);
  tcase_add_test(tc_core, test_from_decimal_to_float_2971);
  tcase_add_test(tc_core, test_from_decimal_to_float_2972);
  tcase_add_test(tc_core, test_from_decimal_to_float_2973);
  tcase_add_test(tc_core, test_from_decimal_to_float_2974);
  tcase_add_test(tc_core, test_from_decimal_to_float_2975);
  tcase_add_test(tc_core, test_from_decimal_to_float_2976);
  tcase_add_test(tc_core, test_from_decimal_to_float_2977);
  tcase_add_test(tc_core, test_from_decimal_to_float_2978);
  tcase_add_test(tc_core, test_from_decimal_to_float_2979);
  tcase_add_test(tc_core, test_from_decimal_to_float_2980);
  tcase_add_test(tc_core, test_from_decimal_to_float_2981);
  tcase_add_test(tc_core, test_from_decimal_to_float_2982);
  tcase_add_test(tc_core, test_from_decimal_to_float_2983);
  tcase_add_test(tc_core, test_from_decimal_to_float_2984);
  tcase_add_test(tc_core, test_from_decimal_to_float_2985);
  tcase_add_test(tc_core, test_from_decimal_to_float_2986);
  tcase_add_test(tc_core, test_from_decimal_to_float_2987);
  tcase_add_test(tc_core, test_from_decimal_to_float_2988);
  tcase_add_test(tc_core, test_from_decimal_to_float_2989);
  tcase_add_test(tc_core, test_from_decimal_to_float_2990);
  tcase_add_test(tc_core, test_from_decimal_to_float_2991);
  tcase_add_test(tc_core, test_from_decimal_to_float_2992);
  tcase_add_test(tc_core, test_from_decimal_to_float_2993);
  tcase_add_test(tc_core, test_from_decimal_to_float_2994);
  tcase_add_test(tc_core, test_from_decimal_to_float_2995);
  tcase_add_test(tc_core, test_from_decimal_to_float_2996);
  tcase_add_test(tc_core, test_from_decimal_to_float_2997);
  tcase_add_test(tc_core, test_from_decimal_to_float_2998);
  tcase_add_test(tc_core, test_from_decimal_to_float_2999);
  tcase_add_test(tc_core, test_from_decimal_to_float_3000);
  suite_add_tcase(s, tc_core);
  return s;
}
