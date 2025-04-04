#include "test.h"

START_TEST(test_from_float_to_decimal_1) {
  s21_decimal check = {{0x22d9f0, 0, 0, 0x190000}};
  float number = 2.28401628e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2) {
  s21_decimal check = {{0x22d9f0, 0, 0, 0x80190000}};
  float number = -2.28401628e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_3) {
  s21_decimal check = {{0xbf280000, 0x9ed0576, 0x7d64, 0}};
  float number = 5.92141241e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_4) {
  s21_decimal check = {{0xbf280000, 0x9ed0576, 0x7d64, 0x80000000}};
  float number = -5.92141241e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_5) {
  s21_decimal check = {{0x209376, 0, 0, 0x180000}};
  float number = 2.13490250e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_6) {
  s21_decimal check = {{0x209376, 0, 0, 0x80180000}};
  float number = -2.13490250e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_7) {
  s21_decimal check = {{0x2467a4, 0, 0, 0xe0000}};
  float number = 2.38582807e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_8) {
  s21_decimal check = {{0x2467a4, 0, 0, 0x800e0000}};
  float number = -2.38582807e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_9) {
  s21_decimal check = {{0x501a8de0, 0xb8, 0, 0}};
  float number = 7.91617864e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_10) {
  s21_decimal check = {{0x501a8de0, 0xb8, 0, 0x80000000}};
  float number = -7.91617864e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_11) {
  s21_decimal check = {{0x5f048000, 0xeef78a9e, 0x6b, 0}};
  float number = 1.99102057e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_12) {
  s21_decimal check = {{0x5f048000, 0xeef78a9e, 0x6b, 0x80000000}};
  float number = -1.99102057e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_13) {
  s21_decimal check = {{0xe380000, 0x6cd28004, 0x7afad, 0}};
  float number = 9.29209423e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_14) {
  s21_decimal check = {{0xe380000, 0x6cd28004, 0x7afad, 0x80000000}};
  float number = -9.29209423e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_15) {
  s21_decimal check = {{0x119efb, 0, 0, 0xa0000}};
  float number = 1.15481133e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_16) {
  s21_decimal check = {{0x119efb, 0, 0, 0x800a0000}};
  float number = -1.15481133e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_17) {
  s21_decimal check = {{0xd3a55, 0, 0, 0x1c0000}};
  float number = 8.66900895e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_18) {
  s21_decimal check = {{0xd3a55, 0, 0, 0x801c0000}};
  float number = -8.66900895e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_19) {
  s21_decimal check = {{0x21a3b200, 0x5b, 0, 0}};
  float number = 3.91406387e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_20) {
  s21_decimal check = {{0x21a3b200, 0x5b, 0, 0x80000000}};
  float number = -3.91406387e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_21) {
  s21_decimal check = {{0x25c0d, 0, 0, 0x150000}};
  float number = 1.54636995e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_22) {
  s21_decimal check = {{0x25c0d, 0, 0, 0x80150000}};
  float number = -1.54636995e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_23) {
  s21_decimal check = {{0x101c59, 0, 0, 0x130000}};
  float number = 1.05583253e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_24) {
  s21_decimal check = {{0x101c59, 0, 0, 0x80130000}};
  float number = -1.05583253e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_25) {
  s21_decimal check = {{0x4a811c, 0, 0, 0x30000}};
  float number = 4.88271582e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_26) {
  s21_decimal check = {{0x4a811c, 0, 0, 0x80030000}};
  float number = -4.88271582e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_27) {
  s21_decimal check = {{0xc7, 0, 0, 0x1c0000}};
  float number = 1.99299160e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_28) {
  s21_decimal check = {{0xc7, 0, 0, 0x801c0000}};
  float number = -1.99299160e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_29) {
  s21_decimal check = {{0x36895d, 0, 0, 0x30000}};
  float number = 3.57410864e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_30) {
  s21_decimal check = {{0x36895d, 0, 0, 0x80030000}};
  float number = -3.57410864e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_31) {
  s21_decimal check = {{0x3760fb, 0, 0, 0x130000}};
  float number = 3.62930687e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_32) {
  s21_decimal check = {{0x3760fb, 0, 0, 0x80130000}};
  float number = -3.62930687e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_33) {
  s21_decimal check = {{0x20ab0a, 0, 0, 0x190000}};
  float number = 2.14093820e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_34) {
  s21_decimal check = {{0x20ab0a, 0, 0, 0x80190000}};
  float number = -2.14093820e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_35) {
  s21_decimal check = {{0x24cf9d, 0, 0, 0x40000}};
  float number = 2.41244507e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_36) {
  s21_decimal check = {{0x24cf9d, 0, 0, 0x80040000}};
  float number = -2.41244507e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_37) {
  s21_decimal check = {{0x7a76c9, 0, 0, 0x10000}};
  float number = 8.02580062e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_38) {
  s21_decimal check = {{0x7a76c9, 0, 0, 0x80010000}};
  float number = -8.02580062e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_39) {
  s21_decimal check = {{0xb858fc00, 0x129f590, 0, 0}};
  float number = 8.38680669e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_40) {
  s21_decimal check = {{0xb858fc00, 0x129f590, 0, 0x80000000}};
  float number = -8.38680669e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_41) {
  s21_decimal check = {{0x3c0cbb, 0, 0, 0x170000}};
  float number = 3.93541897e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_42) {
  s21_decimal check = {{0x3c0cbb, 0, 0, 0x80170000}};
  float number = -3.93541897e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_43) {
  s21_decimal check = {{0x163dea, 0, 0, 0x1a0000}};
  float number = 1.45764168e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_44) {
  s21_decimal check = {{0x163dea, 0, 0, 0x801a0000}};
  float number = -1.45764168e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_45) {
  s21_decimal check = {{0x207fc000, 0x4c9a980f, 0x7, 0}};
  float number = 1.34647118e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_46) {
  s21_decimal check = {{0x207fc000, 0x4c9a980f, 0x7, 0x80000000}};
  float number = -1.34647118e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_47) {
  s21_decimal check = {{0x21b72e, 0, 0, 0x1a0000}};
  float number = 2.20958198e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_48) {
  s21_decimal check = {{0x21b72e, 0, 0, 0x801a0000}};
  float number = -2.20958198e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_49) {
  s21_decimal check = {{0x51e1d8, 0, 0, 0xf0000}};
  float number = 5.36623235e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_50) {
  s21_decimal check = {{0x51e1d8, 0, 0, 0x800f0000}};
  float number = -5.36623235e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_51) {
  s21_decimal check = {{0xa3031000, 0x6895c30, 0, 0}};
  float number = 4.71008997e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_52) {
  s21_decimal check = {{0xa3031000, 0x6895c30, 0, 0x80000000}};
  float number = -4.71008997e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_53) {
  s21_decimal check = {{0x2410f3, 0, 0, 0x110000}};
  float number = 2.36363464e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_54) {
  s21_decimal check = {{0x2410f3, 0, 0, 0x80110000}};
  float number = -2.36363464e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_55) {
  s21_decimal check = {{0x26f108, 0, 0, 0x80000}};
  float number = 2.55207196e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_56) {
  s21_decimal check = {{0x26f108, 0, 0, 0x80080000}};
  float number = -2.55207196e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_57) {
  s21_decimal check = {{0x9a97, 0, 0, 0x1c0000}};
  float number = 3.95752820e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_58) {
  s21_decimal check = {{0x9a97, 0, 0, 0x801c0000}};
  float number = -3.95752820e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_59) {
  s21_decimal check = {{0x3ce752, 0, 0, 0x90000}};
  float number = 3.99137754e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_60) {
  s21_decimal check = {{0x3ce752, 0, 0, 0x80090000}};
  float number = -3.99137754e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_61) {
  s21_decimal check = {{0x1dc62a, 0, 0, 0xb0000}};
  float number = 1.95127377e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_62) {
  s21_decimal check = {{0x1dc62a, 0, 0, 0x800b0000}};
  float number = -1.95127377e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_63) {
  s21_decimal check = {{0x1356fc, 0, 0, 0x1a0000}};
  float number = 1.26745242e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_64) {
  s21_decimal check = {{0x1356fc, 0, 0, 0x801a0000}};
  float number = -1.26745242e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_65) {
  s21_decimal check = {{0x74a1e5, 0, 0, 0x80000}};
  float number = 7.64362067e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_66) {
  s21_decimal check = {{0x74a1e5, 0, 0, 0x80080000}};
  float number = -7.64362067e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_67) {
  s21_decimal check = {{0x1238eb, 0, 0, 0x180000}};
  float number = 1.19421885e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_68) {
  s21_decimal check = {{0x1238eb, 0, 0, 0x80180000}};
  float number = -1.19421885e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_69) {
  s21_decimal check = {{0xc1d2e, 0, 0, 0x150000}};
  float number = 7.93902012e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_70) {
  s21_decimal check = {{0xc1d2e, 0, 0, 0x80150000}};
  float number = -7.93902012e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_71) {
  s21_decimal check = {{0x8f257, 0, 0, 0x140000}};
  float number = 5.86327048e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_72) {
  s21_decimal check = {{0x8f257, 0, 0, 0x80140000}};
  float number = -5.86327048e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_73) {
  s21_decimal check = {{0x8209ad, 0, 0, 0x110000}};
  float number = 8.52215659e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_74) {
  s21_decimal check = {{0x8209ad, 0, 0, 0x80110000}};
  float number = -8.52215659e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_75) {
  s21_decimal check = {{0x1, 0, 0, 0x1b0000}};
  float number = 9.61645806e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_76) {
  s21_decimal check = {{0x1, 0, 0, 0x801b0000}};
  float number = -9.61645806e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_77) {
  s21_decimal check = {{0x2c23740, 0, 0, 0}};
  float number = 4.62825600e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_78) {
  s21_decimal check = {{0x2c23740, 0, 0, 0x80000000}};
  float number = -4.62825600e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_79) {
  s21_decimal check = {{0x119078, 0, 0, 0x120000}};
  float number = 1.15109615e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_80) {
  s21_decimal check = {{0x119078, 0, 0, 0x80120000}};
  float number = -1.15109615e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_81) {
  s21_decimal check = {{0x2b4dbb, 0, 0, 0x110000}};
  float number = 2.83794689e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_82) {
  s21_decimal check = {{0x2b4dbb, 0, 0, 0x80110000}};
  float number = -2.83794689e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_83) {
  s21_decimal check = {{0x80a905, 0, 0, 0x100000}};
  float number = 8.43187742e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_84) {
  s21_decimal check = {{0x80a905, 0, 0, 0x80100000}};
  float number = -8.43187742e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_85) {
  s21_decimal check = {{0x72049000, 0xda4e3b8, 0, 0}};
  float number = 9.83161032e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_86) {
  s21_decimal check = {{0x72049000, 0xda4e3b8, 0, 0x80000000}};
  float number = -9.83161032e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_87) {
  s21_decimal check = {{0x4c7305, 0, 0, 0x30000}};
  float number = 5.01018115e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_88) {
  s21_decimal check = {{0x4c7305, 0, 0, 0x80030000}};
  float number = -5.01018115e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_89) {
  s21_decimal check = {{0x16c3, 0, 0, 0x1c0000}};
  float number = 5.82704236e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_90) {
  s21_decimal check = {{0x16c3, 0, 0, 0x801c0000}};
  float number = -5.82704236e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_91) {
  s21_decimal check = {{0x9d7a4000, 0xb43789, 0, 0}};
  float number = 5.07265574e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_92) {
  s21_decimal check = {{0x9d7a4000, 0xb43789, 0, 0x80000000}};
  float number = -5.07265574e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_93) {
  s21_decimal check = {{0xfd28e000, 0xbc3cd4a8, 0, 0}};
  float number = 1.35639493e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_94) {
  s21_decimal check = {{0xfd28e000, 0xbc3cd4a8, 0, 0x80000000}};
  float number = -1.35639493e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_97) {
  s21_decimal check = {{0x6b7a4000, 0x38c429dc, 0x31, 0}};
  float number = 9.07980924e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_98) {
  s21_decimal check = {{0x6b7a4000, 0x38c429dc, 0x31, 0x80000000}};
  float number = -9.07980924e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_99) {
  s21_decimal check = {{0xea911a, 0, 0, 0}};
  float number = 1.53725660e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_100) {
  s21_decimal check = {{0xea911a, 0, 0, 0x80000000}};
  float number = -1.53725660e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_101) {
  s21_decimal check = {{0xf07a9, 0, 0, 0x1c0000}};
  float number = 9.85001198e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_102) {
  s21_decimal check = {{0xf07a9, 0, 0, 0x801c0000}};
  float number = -9.85001198e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_103) {
  s21_decimal check = {{0x45eaa3, 0, 0, 0x120000}};
  float number = 4.58205132e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_104) {
  s21_decimal check = {{0x45eaa3, 0, 0, 0x80120000}};
  float number = -4.58205132e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_105) {
  s21_decimal check = {{0x691cba, 0, 0, 0x120000}};
  float number = 6.88863376e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_106) {
  s21_decimal check = {{0x691cba, 0, 0, 0x80120000}};
  float number = -6.88863376e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_107) {
  s21_decimal check = {{0x88ec3290, 0x4, 0, 0}};
  float number = 1.94770514e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_108) {
  s21_decimal check = {{0x88ec3290, 0x4, 0, 0x80000000}};
  float number = -1.94770514e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_109) {
  s21_decimal check = {{0x71c077, 0, 0, 0xa0000}};
  float number = 7.45483907e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_110) {
  s21_decimal check = {{0x71c077, 0, 0, 0x800a0000}};
  float number = -7.45483907e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_111) {
  s21_decimal check = {{0xdd238000, 0x6d0e80c8, 0, 0}};
  float number = 7.85835969e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_112) {
  s21_decimal check = {{0xdd238000, 0x6d0e80c8, 0, 0x80000000}};
  float number = -7.85835969e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_113) {
  s21_decimal check = {{0x883c8000, 0x2a4c5a69, 0xee, 0}};
  float number = 4.39337262e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_114) {
  s21_decimal check = {{0x883c8000, 0x2a4c5a69, 0xee, 0x80000000}};
  float number = -4.39337262e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_115) {
  s21_decimal check = {{0x88276000, 0xa7312eb9, 0x2, 0}};
  float number = 4.89409470e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_116) {
  s21_decimal check = {{0x88276000, 0xa7312eb9, 0x2, 0x80000000}};
  float number = -4.89409470e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_117) {
  s21_decimal check = {{0x34628000, 0x1e3092c6, 0, 0}};
  float number = 2.17539970e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_118) {
  s21_decimal check = {{0x34628000, 0x1e3092c6, 0, 0x80000000}};
  float number = -2.17539970e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_119) {
  s21_decimal check = {{0x1a1e8dc0, 0xc4, 0, 0}};
  float number = 8.42251829e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_120) {
  s21_decimal check = {{0x1a1e8dc0, 0xc4, 0, 0x80000000}};
  float number = -8.42251829e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_121) {
  s21_decimal check = {{0x6819a, 0, 0, 0xc0000}};
  float number = 4.26393967e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_122) {
  s21_decimal check = {{0x6819a, 0, 0, 0x800c0000}};
  float number = -4.26393967e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_123) {
  s21_decimal check = {{0x1c284b, 0, 0, 0x120000}};
  float number = 1.84532337e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_124) {
  s21_decimal check = {{0x1c284b, 0, 0, 0x80120000}};
  float number = -1.84532337e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_125) {
  s21_decimal check = {{0x75a430, 0, 0, 0x1a0000}};
  float number = 7.70974401e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_126) {
  s21_decimal check = {{0x75a430, 0, 0, 0x801a0000}};
  float number = -7.70974401e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_127) {
  s21_decimal check = {{0xfff66, 0, 0, 0x80000}};
  float number = 1.04842195e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_128) {
  s21_decimal check = {{0xfff66, 0, 0, 0x80080000}};
  float number = -1.04842195e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_129) {
  s21_decimal check = {{0x1e3bde, 0, 0, 0x1c0000}};
  float number = 1.98140566e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_130) {
  s21_decimal check = {{0x1e3bde, 0, 0, 0x801c0000}};
  float number = -1.98140566e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_131) {
  s21_decimal check = {{0x6f3e0000, 0x505c1ea1, 0x27f, 0}};
  float number = 1.17932588e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_132) {
  s21_decimal check = {{0x6f3e0000, 0x505c1ea1, 0x27f, 0x80000000}};
  float number = -1.17932588e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_133) {
  s21_decimal check = {{0x366d9c, 0, 0, 0x10000}};
  float number = 3.56700438e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_134) {
  s21_decimal check = {{0x366d9c, 0, 0, 0x80010000}};
  float number = -3.56700438e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_135) {
  s21_decimal check = {{0x4148ac, 0, 0, 0x170000}};
  float number = 4.27844415e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_136) {
  s21_decimal check = {{0x4148ac, 0, 0, 0x80170000}};
  float number = -4.27844415e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_137) {
  s21_decimal check = {{0xbd8242, 0, 0, 0}};
  float number = 1.24196490e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_138) {
  s21_decimal check = {{0xbd8242, 0, 0, 0x80000000}};
  float number = -1.24196490e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_139) {
  s21_decimal check = {{0x2f12b2, 0, 0, 0x1b0000}};
  float number = 3.08497797e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_140) {
  s21_decimal check = {{0x2f12b2, 0, 0, 0x801b0000}};
  float number = -3.08497797e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_141) {
  s21_decimal check = {{0x2e1bc800, 0xeddde, 0, 0}};
  float number = 4.18459603e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_142) {
  s21_decimal check = {{0x2e1bc800, 0xeddde, 0, 0x80000000}};
  float number = -4.18459603e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_143) {
  s21_decimal check = {{0xbae00000, 0x7467df7, 0x60ab36, 0}};
  float number = 1.16865436e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_144) {
  s21_decimal check = {{0xbae00000, 0x7467df7, 0x60ab36, 0x80000000}};
  float number = -1.16865436e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_145) {
  s21_decimal check = {{0x99478e40, 0x276, 0, 0}};
  float number = 2.70840103e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_146) {
  s21_decimal check = {{0x99478e40, 0x276, 0, 0x80000000}};
  float number = -2.70840103e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_147) {
  s21_decimal check = {{0x66f3f4, 0, 0, 0x1b0000}};
  float number = 6.74712444e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_148) {
  s21_decimal check = {{0x66f3f4, 0, 0, 0x801b0000}};
  float number = -6.74712444e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_149) {
  s21_decimal check = {{0x562663, 0, 0, 0x110000}};
  float number = 5.64592297e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_150) {
  s21_decimal check = {{0x562663, 0, 0, 0x80110000}};
  float number = -5.64592297e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_151) {
  s21_decimal check = {{0xaacb4080, 0xa, 0, 0}};
  float number = 4.58151199e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_152) {
  s21_decimal check = {{0xaacb4080, 0xa, 0, 0x80000000}};
  float number = -4.58151199e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_153) {
  s21_decimal check = {{0x16aba9, 0, 0, 0x1a0000}};
  float number = 1.48573706e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_154) {
  s21_decimal check = {{0x16aba9, 0, 0, 0x801a0000}};
  float number = -1.48573706e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_155) {
  s21_decimal check = {{0x22531, 0, 0, 0x1b0000}};
  float number = 1.40592974e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_156) {
  s21_decimal check = {{0x22531, 0, 0, 0x801b0000}};
  float number = -1.40592974e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_157) {
  s21_decimal check = {{0x2a1f0000, 0x3d6cdfb7, 0x3e5, 0}};
  float number = 1.83958331e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_158) {
  s21_decimal check = {{0x2a1f0000, 0x3d6cdfb7, 0x3e5, 0x80000000}};
  float number = -1.83958331e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_159) {
  s21_decimal check = {{0xffefe, 0, 0, 0xd0000}};
  float number = 1.04831784e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_160) {
  s21_decimal check = {{0xffefe, 0, 0, 0x800d0000}};
  float number = -1.04831784e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_161) {
  s21_decimal check = {{0x7f106400, 0x78f21e, 0, 0}};
  float number = 3.40432057e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_162) {
  s21_decimal check = {{0x7f106400, 0x78f21e, 0, 0x80000000}};
  float number = -3.40432057e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_163) {
  s21_decimal check = {{0x43c80c, 0, 0, 0x1b0000}};
  float number = 4.44212428e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_164) {
  s21_decimal check = {{0x43c80c, 0, 0, 0x801b0000}};
  float number = -4.44212428e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_165) {
  s21_decimal check = {{0x43da2, 0, 0, 0xa0000}};
  float number = 2.77922045e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_166) {
  s21_decimal check = {{0x43da2, 0, 0, 0x800a0000}};
  float number = -2.77922045e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_167) {
  s21_decimal check = {{0x25cf31, 0, 0, 0x130000}};
  float number = 2.47787305e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_168) {
  s21_decimal check = {{0x25cf31, 0, 0, 0x80130000}};
  float number = -2.47787305e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_169) {
  s21_decimal check = {{0x7ce629, 0, 0, 0x190000}};
  float number = 8.18538540e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_170) {
  s21_decimal check = {{0x7ce629, 0, 0, 0x80190000}};
  float number = -8.18538540e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_171) {
  s21_decimal check = {{0xe22c0000, 0xc47cdaf3, 0x1beda, 0}};
  float number = 2.11021068e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_172) {
  s21_decimal check = {{0xe22c0000, 0xc47cdaf3, 0x1beda, 0x80000000}};
  float number = -2.11021068e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_173) {
  s21_decimal check = {{0x6d003c60, 0, 0, 0}};
  float number = 1.82873229e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_174) {
  s21_decimal check = {{0x6d003c60, 0, 0, 0x80000000}};
  float number = -1.82873229e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_175) {
  s21_decimal check = {{0x3a18a6, 0, 0, 0}};
  float number = 3.80739825e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_176) {
  s21_decimal check = {{0x3a18a6, 0, 0, 0x80000000}};
  float number = -3.80739825e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_177) {
  s21_decimal check = {{0x7b26a8, 0, 0, 0x40000}};
  float number = 8.07082397e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_178) {
  s21_decimal check = {{0x7b26a8, 0, 0, 0x80040000}};
  float number = -8.07082397e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_179) {
  s21_decimal check = {{0xf54af, 0, 0, 0x160000}};
  float number = 1.00471938e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_180) {
  s21_decimal check = {{0xf54af, 0, 0, 0x80160000}};
  float number = -1.00471938e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_181) {
  s21_decimal check = {{0x2019f, 0, 0, 0x170000}};
  float number = 1.31486965e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_182) {
  s21_decimal check = {{0x2019f, 0, 0, 0x80170000}};
  float number = -1.31486965e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_183) {
  s21_decimal check = {{0x815397, 0, 0, 0x130000}};
  float number = 8.47554286e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_184) {
  s21_decimal check = {{0x815397, 0, 0, 0x80130000}};
  float number = -8.47554286e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_185) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 2.07975469e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_186) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -2.07975469e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_187) {
  s21_decimal check = {{0x27aef480, 0x192d, 0, 0}};
  float number = 2.76817269e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_188) {
  s21_decimal check = {{0x27aef480, 0x192d, 0, 0x80000000}};
  float number = -2.76817269e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_189) {
  s21_decimal check = {{0x2c0e77c0, 0x268, 0, 0}};
  float number = 2.64643858e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_190) {
  s21_decimal check = {{0x2c0e77c0, 0x268, 0, 0x80000000}};
  float number = -2.64643858e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_191) {
  s21_decimal check = {{0xc4d38000, 0x6a5e03fc, 0, 0}};
  float number = 7.66456801e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_192) {
  s21_decimal check = {{0xc4d38000, 0x6a5e03fc, 0, 0x80000000}};
  float number = -7.66456801e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_195) {
  s21_decimal check = {{0x481d85, 0, 0, 0x190000}};
  float number = 4.72614865e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_196) {
  s21_decimal check = {{0x481d85, 0, 0, 0x80190000}};
  float number = -4.72614865e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_197) {
  s21_decimal check = {{0x12b37e, 0, 0, 0x130000}};
  float number = 1.22559799e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_198) {
  s21_decimal check = {{0x12b37e, 0, 0, 0x80130000}};
  float number = -1.22559799e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_201) {
  s21_decimal check = {{0xe, 0, 0, 0x1c0000}};
  float number = 1.43260896e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_202) {
  s21_decimal check = {{0xe, 0, 0, 0x801c0000}};
  float number = -1.43260896e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_203) {
  s21_decimal check = {{0x2777a, 0, 0, 0x80000}};
  float number = 1.61657971e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_204) {
  s21_decimal check = {{0x2777a, 0, 0, 0x80080000}};
  float number = -1.61657971e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_205) {
  s21_decimal check = {{0x11023c, 0, 0, 0x180000}};
  float number = 1.11468367e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_206) {
  s21_decimal check = {{0x11023c, 0, 0, 0x80180000}};
  float number = -1.11468367e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_207) {
  s21_decimal check = {{0x168d7e, 0, 0, 0x30000}};
  float number = 1.47801416e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_208) {
  s21_decimal check = {{0x168d7e, 0, 0, 0x80030000}};
  float number = -1.47801416e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_209) {
  s21_decimal check = {{0xd9a8bbd0, 0, 0, 0}};
  float number = 3.65171430e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_210) {
  s21_decimal check = {{0xd9a8bbd0, 0, 0, 0x80000000}};
  float number = -3.65171430e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_211) {
  s21_decimal check = {{0x13780000, 0x1e7fe2b2, 0x1138f7, 0}};
  float number = 2.08207478e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_212) {
  s21_decimal check = {{0x13780000, 0x1e7fe2b2, 0x1138f7, 0x80000000}};
  float number = -2.08207478e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_213) {
  s21_decimal check = {{0x28d75, 0, 0, 0xb0000}};
  float number = 1.67284952e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_214) {
  s21_decimal check = {{0x28d75, 0, 0, 0x800b0000}};
  float number = -1.67284952e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_217) {
  s21_decimal check = {{0x65a54b, 0, 0, 0x180000}};
  float number = 6.66145091e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_218) {
  s21_decimal check = {{0x65a54b, 0, 0, 0x80180000}};
  float number = -6.66145091e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_219) {
  s21_decimal check = {{0x17feb7, 0, 0, 0x20000}};
  float number = 1.57253545e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_220) {
  s21_decimal check = {{0x17feb7, 0, 0, 0x80020000}};
  float number = -1.57253545e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_221) {
  s21_decimal check = {{0x145ad5, 0, 0, 0x60000}};
  float number = 1.33397293e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_222) {
  s21_decimal check = {{0x145ad5, 0, 0, 0x80060000}};
  float number = -1.33397293e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_223) {
  s21_decimal check = {{0x192e50, 0, 0, 0x10000}};
  float number = 1.65025641e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_224) {
  s21_decimal check = {{0x192e50, 0, 0, 0x80010000}};
  float number = -1.65025641e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_225) {
  s21_decimal check = {{0xb2255c00, 0x46b93, 0, 0}};
  float number = 1.24418210e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_226) {
  s21_decimal check = {{0xb2255c00, 0x46b93, 0, 0x80000000}};
  float number = -1.24418210e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_227) {
  s21_decimal check = {{0x202ad1, 0, 0, 0x130000}};
  float number = 2.10811349e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_228) {
  s21_decimal check = {{0x202ad1, 0, 0, 0x80130000}};
  float number = -2.10811349e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_229) {
  s21_decimal check = {{0x6d925280, 0x15e5, 0, 0}};
  float number = 2.40751309e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_230) {
  s21_decimal check = {{0x6d925280, 0x15e5, 0, 0x80000000}};
  float number = -2.40751309e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_231) {
  s21_decimal check = {{0x9b9, 0, 0, 0x1c0000}};
  float number = 2.48895624e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_232) {
  s21_decimal check = {{0x9b9, 0, 0, 0x801c0000}};
  float number = -2.48895624e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_233) {
  s21_decimal check = {{0xb5941640, 0x1e, 0, 0}};
  float number = 1.31895402e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_234) {
  s21_decimal check = {{0xb5941640, 0x1e, 0, 0x80000000}};
  float number = -1.31895402e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_235) {
  s21_decimal check = {{0xe08a97e0, 0x21, 0, 0}};
  float number = 1.45501110e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_236) {
  s21_decimal check = {{0xe08a97e0, 0x21, 0, 0x80000000}};
  float number = -1.45501110e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_237) {
  s21_decimal check = {{0x989d7, 0, 0, 0x1c0000}};
  float number = 6.25111367e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_238) {
  s21_decimal check = {{0x989d7, 0, 0, 0x801c0000}};
  float number = -6.25111367e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_241) {
  s21_decimal check = {{0x149, 0, 0, 0x1c0000}};
  float number = 3.28743145e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_242) {
  s21_decimal check = {{0x149, 0, 0, 0x801c0000}};
  float number = -3.28743145e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_243) {
  s21_decimal check = {{0x83754000, 0x1457cfe, 0, 0}};
  float number = 9.16167978e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_244) {
  s21_decimal check = {{0x83754000, 0x1457cfe, 0, 0x80000000}};
  float number = -9.16167978e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_245) {
  s21_decimal check = {{0x285361, 0, 0, 0x80000}};
  float number = 2.64278520e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_246) {
  s21_decimal check = {{0x285361, 0, 0, 0x80080000}};
  float number = -2.64278520e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_247) {
  s21_decimal check = {{0x12ee42, 0, 0, 0x150000}};
  float number = 1.24064249e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_248) {
  s21_decimal check = {{0x12ee42, 0, 0, 0x80150000}};
  float number = -1.24064249e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_249) {
  s21_decimal check = {{0x7a4dcc00, 0x4201a, 0, 0}};
  float number = 1.16119836e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_250) {
  s21_decimal check = {{0x7a4dcc00, 0x4201a, 0, 0x80000000}};
  float number = -1.16119836e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_251) {
  s21_decimal check = {{0x263589, 0, 0, 0x110000}};
  float number = 2.50407264e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_252) {
  s21_decimal check = {{0x263589, 0, 0, 0x80110000}};
  float number = -2.50407264e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_253) {
  s21_decimal check = {{0x995cd600, 0x9a7a0, 0, 0}};
  float number = 2.71758257e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_254) {
  s21_decimal check = {{0x995cd600, 0x9a7a0, 0, 0x80000000}};
  float number = -2.71758257e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_255) {
  s21_decimal check = {{0xa0766c00, 0x1626540, 0, 0}};
  float number = 9.97534673e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_256) {
  s21_decimal check = {{0xa0766c00, 0x1626540, 0, 0x80000000}};
  float number = -9.97534673e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_257) {
  s21_decimal check = {{0x148560, 0, 0, 0x150000}};
  float number = 1.34486375e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_258) {
  s21_decimal check = {{0x148560, 0, 0, 0x80150000}};
  float number = -1.34486375e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_259) {
  s21_decimal check = {{0x1bdf20, 0, 0, 0x120000}};
  float number = 1.82659161e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_260) {
  s21_decimal check = {{0x1bdf20, 0, 0, 0x80120000}};
  float number = -1.82659161e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_261) {
  s21_decimal check = {{0x76b471, 0, 0, 0x60000}};
  float number = 7.77944088e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_262) {
  s21_decimal check = {{0x76b471, 0, 0, 0x80060000}};
  float number = -7.77944088e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_263) {
  s21_decimal check = {{0x2bec6400, 0x6ee557, 0, 0}};
  float number = 3.12144136e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_264) {
  s21_decimal check = {{0x2bec6400, 0x6ee557, 0, 0x80000000}};
  float number = -3.12144136e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_265) {
  s21_decimal check = {{0x1f9df00c, 0, 0, 0}};
  float number = 5.30444320e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_266) {
  s21_decimal check = {{0x1f9df00c, 0, 0, 0x80000000}};
  float number = -5.30444320e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_267) {
  s21_decimal check = {{0x337e6fc0, 0x393, 0, 0}};
  float number = 3.93075884e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_268) {
  s21_decimal check = {{0x337e6fc0, 0x393, 0, 0x80000000}};
  float number = -3.93075884e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_269) {
  s21_decimal check = {{0x7142b2, 0, 0, 0x190000}};
  float number = 7.42264215e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_270) {
  s21_decimal check = {{0x7142b2, 0, 0, 0x80190000}};
  float number = -7.42264215e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_271) {
  s21_decimal check = {{0x1037d3, 0, 0, 0x190000}};
  float number = 1.06286686e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_272) {
  s21_decimal check = {{0x1037d3, 0, 0, 0x80190000}};
  float number = -1.06286686e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_273) {
  s21_decimal check = {{0x2313c000, 0xe0479, 0, 0}};
  float number = 3.94556822e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_274) {
  s21_decimal check = {{0x2313c000, 0xe0479, 0, 0x80000000}};
  float number = -3.94556822e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_275) {
  s21_decimal check = {{0x1ab0c640, 0x1, 0, 0}};
  float number = 4.74276045e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_276) {
  s21_decimal check = {{0x1ab0c640, 0x1, 0, 0x80000000}};
  float number = -4.74276045e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_277) {
  s21_decimal check = {{0x67e50e, 0, 0, 0xb0000}};
  float number = 6.80884550e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_278) {
  s21_decimal check = {{0x67e50e, 0, 0, 0x800b0000}};
  float number = -6.80884550e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_279) {
  s21_decimal check = {{0x63, 0, 0, 0x1c0000}};
  float number = 9.93429178e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_280) {
  s21_decimal check = {{0x63, 0, 0, 0x801c0000}};
  float number = -9.93429178e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_281) {
  s21_decimal check = {{0x13870c, 0, 0, 0xe0000}};
  float number = 1.27975550e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_282) {
  s21_decimal check = {{0x13870c, 0, 0, 0x800e0000}};
  float number = -1.27975550e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_283) {
  s21_decimal check = {{0x1b7b2e, 0, 0, 0x60000}};
  float number = 1.80100608e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_284) {
  s21_decimal check = {{0x1b7b2e, 0, 0, 0x80060000}};
  float number = -1.80100608e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_285) {
  s21_decimal check = {{0x2bf4f1, 0, 0, 0x150000}};
  float number = 2.88075291e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_286) {
  s21_decimal check = {{0x2bf4f1, 0, 0, 0x80150000}};
  float number = -2.88075291e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_287) {
  s21_decimal check = {{0x7b393000, 0xb10564, 0, 0}};
  float number = 4.98270022e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_288) {
  s21_decimal check = {{0x7b393000, 0xb10564, 0, 0x80000000}};
  float number = -4.98270022e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_289) {
  s21_decimal check = {{0x1d59d3, 0, 0, 0x50000}};
  float number = 1.92353897e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_290) {
  s21_decimal check = {{0x1d59d3, 0, 0, 0x80050000}};
  float number = -1.92353897e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_291) {
  s21_decimal check = {{0x736f13, 0, 0, 0xc0000}};
  float number = 7.56507507e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_292) {
  s21_decimal check = {{0x736f13, 0, 0, 0x800c0000}};
  float number = -7.56507507e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_293) {
  s21_decimal check = {{0x1a60e7, 0, 0, 0x100000}};
  float number = 1.72874326e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_294) {
  s21_decimal check = {{0x1a60e7, 0, 0, 0x80100000}};
  float number = -1.72874326e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_295) {
  s21_decimal check = {{0x94936f, 0, 0, 0x40000}};
  float number = 9.73707092e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_296) {
  s21_decimal check = {{0x94936f, 0, 0, 0x80040000}};
  float number = -9.73707092e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_297) {
  s21_decimal check = {{0x8923000, 0x7b99ac5, 0, 0}};
  float number = 5.56646213e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_298) {
  s21_decimal check = {{0x8923000, 0x7b99ac5, 0, 0x80000000}};
  float number = -5.56646213e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_299) {
  s21_decimal check = {{0x524ec9, 0, 0, 0x80000}};
  float number = 5.39412126e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_300) {
  s21_decimal check = {{0x524ec9, 0, 0, 0x80080000}};
  float number = -5.39412126e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_301) {
  s21_decimal check = {{0x84580000, 0x6567a044, 0x2f013c, 0}};
  float number = 5.68253473e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_302) {
  s21_decimal check = {{0x84580000, 0x6567a044, 0x2f013c, 0x80000000}};
  float number = -5.68253473e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_303) {
  s21_decimal check = {{0x1ccbad, 0, 0, 0x1c0000}};
  float number = 1.88714903e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_304) {
  s21_decimal check = {{0x1ccbad, 0, 0, 0x801c0000}};
  float number = -1.88714903e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_305) {
  s21_decimal check = {{0xd7a58000, 0x4eca7dcb, 0xd1, 0}};
  float number = 3.86104686e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_306) {
  s21_decimal check = {{0xd7a58000, 0x4eca7dcb, 0xd1, 0x80000000}};
  float number = -3.86104686e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_307) {
  s21_decimal check = {{0x64ed, 0, 0, 0x1b0000}};
  float number = 2.58369932e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_308) {
  s21_decimal check = {{0x64ed, 0, 0, 0x801b0000}};
  float number = -2.58369932e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_309) {
  s21_decimal check = {{0xdafd3600, 0x15748, 0, 0}};
  float number = 3.77445417e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_310) {
  s21_decimal check = {{0xdafd3600, 0x15748, 0, 0x80000000}};
  float number = -3.77445417e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_311) {
  s21_decimal check = {{0x4, 0, 0, 0x1b0000}};
  float number = 3.96881507e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_312) {
  s21_decimal check = {{0x4, 0, 0, 0x801b0000}};
  float number = -3.96881507e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_313) {
  s21_decimal check = {{0xea0c5400, 0xd859b9, 0, 0}};
  float number = 6.08972547e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_314) {
  s21_decimal check = {{0xea0c5400, 0xd859b9, 0, 0x80000000}};
  float number = -6.08972547e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_315) {
  s21_decimal check = {{0xef0a0100, 0x19d52, 0, 0}};
  float number = 4.54454516e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_316) {
  s21_decimal check = {{0xef0a0100, 0x19d52, 0, 0x80000000}};
  float number = -4.54454516e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_317) {
  s21_decimal check = {{0x2d87d6, 0, 0, 0x10000}};
  float number = 2.98389375e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_318) {
  s21_decimal check = {{0x2d87d6, 0, 0, 0x80010000}};
  float number = -2.98389375e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_319) {
  s21_decimal check = {{0x70e368, 0, 0, 0x190000}};
  float number = 7.39824756e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_320) {
  s21_decimal check = {{0x70e368, 0, 0, 0x80190000}};
  float number = -7.39824756e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_323) {
  s21_decimal check = {{0x7f9737, 0, 0, 0xc0000}};
  float number = 8.36178333e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_324) {
  s21_decimal check = {{0x7f9737, 0, 0, 0x800c0000}};
  float number = -8.36178333e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_325) {
  s21_decimal check = {{0x398381, 0, 0, 0x30000}};
  float number = 3.76921729e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_326) {
  s21_decimal check = {{0x398381, 0, 0, 0x80030000}};
  float number = -3.76921729e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_327) {
  s21_decimal check = {{0x606cb000, 0x1a4, 0, 0}};
  float number = 1.80550409e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_328) {
  s21_decimal check = {{0x606cb000, 0x1a4, 0, 0x80000000}};
  float number = -1.80550409e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_329) {
  s21_decimal check = {{0x2c508000, 0xdce343c9, 0x6c, 0}};
  float number = 2.00816507e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_330) {
  s21_decimal check = {{0x2c508000, 0xdce343c9, 0x6c, 0x80000000}};
  float number = -2.00816507e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_331) {
  s21_decimal check = {{0x40d15a, 0, 0, 0x50000}};
  float number = 4.24789772e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_332) {
  s21_decimal check = {{0x40d15a, 0, 0, 0x80050000}};
  float number = -4.24789772e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_333) {
  s21_decimal check = {{0x7320ad00, 0x812e, 0, 0}};
  float number = 1.42036498e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_334) {
  s21_decimal check = {{0x7320ad00, 0x812e, 0, 0x80000000}};
  float number = -1.42036498e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_335) {
  s21_decimal check = {{0x479a0000, 0xb364228d, 0x10, 0}};
  float number = 3.08074432e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_336) {
  s21_decimal check = {{0x479a0000, 0xb364228d, 0x10, 0x80000000}};
  float number = -3.08074432e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_337) {
  s21_decimal check = {{0xcda60000, 0xf7b1a7fd, 0x3bce, 0}};
  float number = 2.82437522e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_338) {
  s21_decimal check = {{0xcda60000, 0xf7b1a7fd, 0x3bce, 0x80000000}};
  float number = -2.82437522e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_339) {
  s21_decimal check = {{0x2101cd, 0, 0, 0xc0000}};
  float number = 2.16314857e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_340) {
  s21_decimal check = {{0x2101cd, 0, 0, 0x800c0000}};
  float number = -2.16314857e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_341) {
  s21_decimal check = {{0x79c4, 0, 0, 0x1b0000}};
  float number = 3.11719901e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_342) {
  s21_decimal check = {{0x79c4, 0, 0, 0x801b0000}};
  float number = -3.11719901e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_343) {
  s21_decimal check = {{0x9b958000, 0x62a4e345, 0, 0}};
  float number = 7.10805625e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_344) {
  s21_decimal check = {{0x9b958000, 0x62a4e345, 0, 0x80000000}};
  float number = -7.10805625e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_345) {
  s21_decimal check = {{0x1af84, 0, 0, 0x1c0000}};
  float number = 1.10467782e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_346) {
  s21_decimal check = {{0x1af84, 0, 0, 0x801c0000}};
  float number = -1.10467782e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_347) {
  s21_decimal check = {{0x745d0000, 0xaa70eaaa, 0x15e, 0}};
  float number = 6.46864174e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_348) {
  s21_decimal check = {{0x745d0000, 0xaa70eaaa, 0x15e, 0x80000000}};
  float number = -6.46864174e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_349) {
  s21_decimal check = {{0x3773eb, 0, 0, 0x90000}};
  float number = 3.63415456e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_350) {
  s21_decimal check = {{0x3773eb, 0, 0, 0x80090000}};
  float number = -3.63415456e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_351) {
  s21_decimal check = {{0x2b8bf, 0, 0, 0xd0000}};
  float number = 1.78366992e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_352) {
  s21_decimal check = {{0x2b8bf, 0, 0, 0x800d0000}};
  float number = -1.78366992e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_353) {
  s21_decimal check = {{0x320ea5, 0, 0, 0xd0000}};
  float number = 3.28054909e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_354) {
  s21_decimal check = {{0x320ea5, 0, 0, 0x800d0000}};
  float number = -3.28054909e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_355) {
  s21_decimal check = {{0x13bbff, 0, 0, 0x70000}};
  float number = 1.29331082e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_356) {
  s21_decimal check = {{0x13bbff, 0, 0, 0x80070000}};
  float number = -1.29331082e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_357) {
  s21_decimal check = {{0x2ee571, 0, 0, 0x50000}};
  float number = 3.07339287e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_358) {
  s21_decimal check = {{0x2ee571, 0, 0, 0x80050000}};
  float number = -3.07339287e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_359) {
  s21_decimal check = {{0x4b26b, 0, 0, 0x170000}};
  float number = 3.07818970e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_360) {
  s21_decimal check = {{0x4b26b, 0, 0, 0x80170000}};
  float number = -3.07818970e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_361) {
  s21_decimal check = {{0x1921b000, 0x1f648e8, 0, 0}};
  float number = 1.41380582e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_362) {
  s21_decimal check = {{0x1921b000, 0x1f648e8, 0, 0x80000000}};
  float number = -1.41380582e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_363) {
  s21_decimal check = {{0x85, 0, 0, 0x1c0000}};
  float number = 1.33295075e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_364) {
  s21_decimal check = {{0x85, 0, 0, 0x801c0000}};
  float number = -1.33295075e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_365) {
  s21_decimal check = {{0xf5f400, 0x12de9a2, 0, 0}};
  float number = 8.49808500e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_366) {
  s21_decimal check = {{0xf5f400, 0x12de9a2, 0, 0x80000000}};
  float number = -8.49808500e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_367) {
  s21_decimal check = {{0x1e494, 0, 0, 0x10000}};
  float number = 1.24051982e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_368) {
  s21_decimal check = {{0x1e494, 0, 0, 0x80010000}};
  float number = -1.24051982e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_369) {
  s21_decimal check = {{0x1a1671, 0, 0, 0x1a0000}};
  float number = 1.70968087e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_370) {
  s21_decimal check = {{0x1a1671, 0, 0, 0x801a0000}};
  float number = -1.70968087e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_371) {
  s21_decimal check = {{0x1fff1c, 0, 0, 0x160000}};
  float number = 2.09692443e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_372) {
  s21_decimal check = {{0x1fff1c, 0, 0, 0x80160000}};
  float number = -2.09692443e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_373) {
  s21_decimal check = {{0x8b89b740, 0x74b, 0, 0}};
  float number = 8.02104489e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_374) {
  s21_decimal check = {{0x8b89b740, 0x74b, 0, 0x80000000}};
  float number = -8.02104489e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_375) {
  s21_decimal check = {{0xfeacd, 0, 0, 0xd0000}};
  float number = 1.04314942e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_376) {
  s21_decimal check = {{0xfeacd, 0, 0, 0x800d0000}};
  float number = -1.04314942e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_377) {
  s21_decimal check = {{0xa721b000, 0x961df, 0, 0}};
  float number = 2.64088815e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_378) {
  s21_decimal check = {{0xa721b000, 0x961df, 0, 0x80000000}};
  float number = -2.64088815e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_379) {
  s21_decimal check = {{0xdd800000, 0xfe325bbc, 0x26b437, 0}};
  float number = 4.67902401e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_380) {
  s21_decimal check = {{0xdd800000, 0xfe325bbc, 0x26b437, 0x80000000}};
  float number = -4.67902401e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_381) {
  s21_decimal check = {{0x1a6ce8, 0, 0, 0x180000}};
  float number = 1.73181625e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_382) {
  s21_decimal check = {{0x1a6ce8, 0, 0, 0x80180000}};
  float number = -1.73181625e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_383) {
  s21_decimal check = {{0x95fd8000, 0x3ba4e8e1, 0, 0}};
  float number = 4.29781641e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_384) {
  s21_decimal check = {{0x95fd8000, 0x3ba4e8e1, 0, 0x80000000}};
  float number = -4.29781641e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_385) {
  s21_decimal check = {{0xefd40000, 0x368267ea, 0x1b1, 0}};
  float number = 7.99136845e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_386) {
  s21_decimal check = {{0xefd40000, 0x368267ea, 0x1b1, 0x80000000}};
  float number = -7.99136845e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_387) {
  s21_decimal check = {{0x125a, 0, 0, 0x1c0000}};
  float number = 4.69790976e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_388) {
  s21_decimal check = {{0x125a, 0, 0, 0x801c0000}};
  float number = -4.69790976e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_389) {
  s21_decimal check = {{0x70d40000, 0xabb90cd4, 0x6, 0}};
  float number = 1.23054447e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_390) {
  s21_decimal check = {{0x70d40000, 0xabb90cd4, 0x6, 0x80000000}};
  float number = -1.23054447e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_391) {
  s21_decimal check = {{0xc6f40600, 0x2b220, 0, 0}};
  float number = 7.58803818e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_392) {
  s21_decimal check = {{0xc6f40600, 0x2b220, 0, 0x80000000}};
  float number = -7.58803818e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_393) {
  s21_decimal check = {{0x6f9e5800, 0xd7e9, 0, 0}};
  float number = 2.37397573e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_394) {
  s21_decimal check = {{0x6f9e5800, 0xd7e9, 0, 0x80000000}};
  float number = -2.37397573e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_395) {
  s21_decimal check = {{0xc1ef4, 0, 0, 0xf0000}};
  float number = 7.94356025e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_396) {
  s21_decimal check = {{0xc1ef4, 0, 0, 0x800f0000}};
  float number = -7.94356025e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_397) {
  s21_decimal check = {{0x24dfa580, 0x1688, 0, 0}};
  float number = 2.47739942e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_398) {
  s21_decimal check = {{0x24dfa580, 0x1688, 0, 0x80000000}};
  float number = -2.47739942e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_399) {
  s21_decimal check = {{0x4a00b800, 0x6676926, 0, 0}};
  float number = 4.61453107e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_400) {
  s21_decimal check = {{0x4a00b800, 0x6676926, 0, 0x80000000}};
  float number = -4.61453107e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_401) {
  s21_decimal check = {{0x144474, 0, 0, 0x80000}};
  float number = 1.32824397e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_402) {
  s21_decimal check = {{0x144474, 0, 0, 0x80080000}};
  float number = -1.32824397e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_403) {
  s21_decimal check = {{0x2880d3, 0, 0, 0x130000}};
  float number = 2.65441857e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_404) {
  s21_decimal check = {{0x2880d3, 0, 0, 0x80130000}};
  float number = -2.65441857e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_405) {
  s21_decimal check = {{0x346c1b, 0, 0, 0x90000}};
  float number = 3.43554723e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_406) {
  s21_decimal check = {{0x346c1b, 0, 0, 0x80090000}};
  float number = -3.43554723e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_407) {
  s21_decimal check = {{0x14a54e, 0, 0, 0x150000}};
  float number = 1.35303762e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_408) {
  s21_decimal check = {{0x14a54e, 0, 0, 0x80150000}};
  float number = -1.35303762e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_409) {
  s21_decimal check = {{0x437ba5, 0, 0, 0x180000}};
  float number = 4.42256499e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_410) {
  s21_decimal check = {{0x437ba5, 0, 0, 0x80180000}};
  float number = -4.42256499e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_411) {
  s21_decimal check = {{0xf2700000, 0xd426d6a2, 0x34ec2, 0}};
  float number = 3.99871570e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_412) {
  s21_decimal check = {{0xf2700000, 0xd426d6a2, 0x34ec2, 0x80000000}};
  float number = -3.99871570e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_413) {
  s21_decimal check = {{0x61212000, 0xeb6cfb1d, 0, 0}};
  float number = 1.69642088e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_414) {
  s21_decimal check = {{0x61212000, 0xeb6cfb1d, 0, 0x80000000}};
  float number = -1.69642088e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_415) {
  s21_decimal check = {{0x36cf3000, 0x3fbbc72, 0, 0}};
  float number = 2.87030190e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_416) {
  s21_decimal check = {{0x36cf3000, 0x3fbbc72, 0, 0x80000000}};
  float number = -2.87030190e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_417) {
  s21_decimal check = {{0x6c5893, 0, 0, 0x90000}};
  float number = 7.10056303e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_418) {
  s21_decimal check = {{0x6c5893, 0, 0, 0x80090000}};
  float number = -7.10056303e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_419) {
  s21_decimal check = {{0x1faeb1, 0, 0, 0x160000}};
  float number = 2.07633703e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_420) {
  s21_decimal check = {{0x1faeb1, 0, 0, 0x80160000}};
  float number = -2.07633703e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_421) {
  s21_decimal check = {{0x12d16a, 0, 0, 0x80000}};
  float number = 1.23325782e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_422) {
  s21_decimal check = {{0x12d16a, 0, 0, 0x80080000}};
  float number = -1.23325782e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_423) {
  s21_decimal check = {{0x11dc1a, 0, 0, 0x1b0000}};
  float number = 1.17045804e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_424) {
  s21_decimal check = {{0x11dc1a, 0, 0, 0x801b0000}};
  float number = -1.17045804e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_425) {
  s21_decimal check = {{0x2de, 0, 0, 0x1c0000}};
  float number = 7.34081171e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_426) {
  s21_decimal check = {{0x2de, 0, 0, 0x801c0000}};
  float number = -7.34081171e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_427) {
  s21_decimal check = {{0x93bace, 0, 0, 0x160000}};
  float number = 9.68161412e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_428) {
  s21_decimal check = {{0x93bace, 0, 0, 0x80160000}};
  float number = -9.68161412e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_429) {
  s21_decimal check = {{0x7c860, 0, 0, 0x170000}};
  float number = 5.10048003e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_430) {
  s21_decimal check = {{0x7c860, 0, 0, 0x80170000}};
  float number = -5.10048003e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_431) {
  s21_decimal check = {{0x8b822400, 0x529b3, 0, 0}};
  float number = 1.45322634e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_432) {
  s21_decimal check = {{0x8b822400, 0x529b3, 0, 0x80000000}};
  float number = -1.45322634e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_433) {
  s21_decimal check = {{0x4c80cf, 0, 0, 0xb0000}};
  float number = 5.01371069e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_434) {
  s21_decimal check = {{0x4c80cf, 0, 0, 0x800b0000}};
  float number = -5.01371069e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_435) {
  s21_decimal check = {{0x797fc000, 0x21ad0e0, 0, 0}};
  float number = 1.51663215e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_436) {
  s21_decimal check = {{0x797fc000, 0x21ad0e0, 0, 0x80000000}};
  float number = -1.51663215e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_437) {
  s21_decimal check = {{0x28440b, 0, 0, 0xd0000}};
  float number = 2.63885937e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_438) {
  s21_decimal check = {{0x28440b, 0, 0, 0x800d0000}};
  float number = -2.63885937e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_439) {
  s21_decimal check = {{0x92b8a2, 0, 0, 0x80000}};
  float number = 9.61552188e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_440) {
  s21_decimal check = {{0x92b8a2, 0, 0, 0x80080000}};
  float number = -9.61552188e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_441) {
  s21_decimal check = {{0x4eb74a, 0, 0, 0}};
  float number = 5.15872950e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_442) {
  s21_decimal check = {{0x4eb74a, 0, 0, 0x80000000}};
  float number = -5.15872950e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_443) {
  s21_decimal check = {{0x2a0aa7, 0, 0, 0x170000}};
  float number = 2.75523903e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_444) {
  s21_decimal check = {{0x2a0aa7, 0, 0, 0x80170000}};
  float number = -2.75523903e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_445) {
  s21_decimal check = {{0x43400000, 0x2b05e443, 0xcc7, 0}};
  float number = 6.03424028e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_446) {
  s21_decimal check = {{0x43400000, 0x2b05e443, 0xcc7, 0x80000000}};
  float number = -6.03424028e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_447) {
  s21_decimal check = {{0x9d64de00, 0xb1608, 0, 0}};
  float number = 3.12045131e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_448) {
  s21_decimal check = {{0x9d64de00, 0xb1608, 0, 0x80000000}};
  float number = -3.12045131e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_449) {
  s21_decimal check = {{0xc, 0, 0, 0x1b0000}};
  float number = 1.20439300e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_450) {
  s21_decimal check = {{0xc, 0, 0, 0x801b0000}};
  float number = -1.20439300e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_451) {
  s21_decimal check = {{0x10cd6, 0, 0, 0x1c0000}};
  float number = 6.88218899e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_452) {
  s21_decimal check = {{0x10cd6, 0, 0, 0x801c0000}};
  float number = -6.88218899e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_453) {
  s21_decimal check = {{0x3ebf4300, 0x32690, 0, 0}};
  float number = 8.86825921e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_454) {
  s21_decimal check = {{0x3ebf4300, 0x32690, 0, 0x80000000}};
  float number = -8.86825921e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_455) {
  s21_decimal check = {{0xceef8000, 0xa13dd7e6, 0, 0}};
  float number = 1.16186845e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_456) {
  s21_decimal check = {{0xceef8000, 0xa13dd7e6, 0, 0x80000000}};
  float number = -1.16186845e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_457) {
  s21_decimal check = {{0x800b4000, 0xdb4e7083, 0x2, 0}};
  float number = 5.26961750e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_458) {
  s21_decimal check = {{0x800b4000, 0xdb4e7083, 0x2, 0x80000000}};
  float number = -5.26961750e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_459) {
  s21_decimal check = {{0x12e7f0, 0, 0, 0x60000}};
  float number = 1.23902404e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_460) {
  s21_decimal check = {{0x12e7f0, 0, 0, 0x80060000}};
  float number = -1.23902404e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_461) {
  s21_decimal check = {{0x7326da, 0, 0, 0xb0000}};
  float number = 7.54658613e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_462) {
  s21_decimal check = {{0x7326da, 0, 0, 0x800b0000}};
  float number = -7.54658613e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_463) {
  s21_decimal check = {{0x60460000, 0x2bb38ca1, 0xb, 0}};
  float number = 2.06063239e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_464) {
  s21_decimal check = {{0x60460000, 0x2bb38ca1, 0xb, 0x80000000}};
  float number = -2.06063239e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_465) {
  s21_decimal check = {{0x548a74, 0, 0, 0x30000}};
  float number = 5.54046826e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_466) {
  s21_decimal check = {{0x548a74, 0, 0, 0x80030000}};
  float number = -5.54046826e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_467) {
  s21_decimal check = {{0x331496, 0, 0, 0x50000}};
  float number = 3.34760551e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_468) {
  s21_decimal check = {{0x331496, 0, 0, 0x80050000}};
  float number = -3.34760551e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_469) {
  s21_decimal check = {{0x5a07, 0, 0, 0x20000}};
  float number = 2.30469971e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_470) {
  s21_decimal check = {{0x5a07, 0, 0, 0x80020000}};
  float number = -2.30469971e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_471) {
  s21_decimal check = {{0x2b39c4, 0, 0, 0xf0000}};
  float number = 2.83283619e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_472) {
  s21_decimal check = {{0x2b39c4, 0, 0, 0x800f0000}};
  float number = -2.83283619e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_473) {
  s21_decimal check = {{0x3a2a76, 0, 0, 0xc0000}};
  float number = 3.81195787e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_474) {
  s21_decimal check = {{0x3a2a76, 0, 0, 0x800c0000}};
  float number = -3.81195787e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_475) {
  s21_decimal check = {{0x3248c8, 0, 0, 0xd0000}};
  float number = 3.29543241e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_476) {
  s21_decimal check = {{0x3248c8, 0, 0, 0x800d0000}};
  float number = -3.29543241e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_477) {
  s21_decimal check = {{0x429ae, 0, 0, 0x160000}};
  float number = 2.72814009e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_478) {
  s21_decimal check = {{0x429ae, 0, 0, 0x80160000}};
  float number = -2.72814009e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_479) {
  s21_decimal check = {{0x2b, 0, 0, 0x1c0000}};
  float number = 4.31017690e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_480) {
  s21_decimal check = {{0x2b, 0, 0, 0x801c0000}};
  float number = -4.31017690e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_481) {
  s21_decimal check = {{0x5e0184, 0, 0, 0x180000}};
  float number = 6.16077213e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_482) {
  s21_decimal check = {{0x5e0184, 0, 0, 0x80180000}};
  float number = -6.16077213e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_483) {
  s21_decimal check = {{0x7dba4180, 0xc77, 0, 0}};
  float number = 1.37073535e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_484) {
  s21_decimal check = {{0x7dba4180, 0xc77, 0, 0x80000000}};
  float number = -1.37073535e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_485) {
  s21_decimal check = {{0xd73c7200, 0xd44, 0, 0}};
  float number = 1.45893181e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_486) {
  s21_decimal check = {{0xd73c7200, 0xd44, 0, 0x80000000}};
  float number = -1.45893181e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_487) {
  s21_decimal check = {{0x12b6e3, 0, 0, 0xd0000}};
  float number = 1.22646696e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_488) {
  s21_decimal check = {{0x12b6e3, 0, 0, 0x800d0000}};
  float number = -1.22646696e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_489) {
  s21_decimal check = {{0x1e22a2, 0, 0, 0x110000}};
  float number = 1.97494607e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_490) {
  s21_decimal check = {{0x1e22a2, 0, 0, 0x80110000}};
  float number = -1.97494607e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_491) {
  s21_decimal check = {{0xc750000, 0xe9f37736, 0x2a, 0}};
  float number = 7.91621210e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_492) {
  s21_decimal check = {{0xc750000, 0xe9f37736, 0x2a, 0x80000000}};
  float number = -7.91621210e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_493) {
  s21_decimal check = {{0x25725, 0, 0, 0}};
  float number = 1.53381047e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_494) {
  s21_decimal check = {{0x25725, 0, 0, 0x80000000}};
  float number = -1.53381047e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_495) {
  s21_decimal check = {{0x3f582b, 0, 0, 0x80000}};
  float number = 4.15133908e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_496) {
  s21_decimal check = {{0x3f582b, 0, 0, 0x80080000}};
  float number = -4.15133908e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_497) {
  s21_decimal check = {{0x45b154d0, 0x16, 0, 0}};
  float number = 9.56585329e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_498) {
  s21_decimal check = {{0x45b154d0, 0x16, 0, 0x80000000}};
  float number = -9.56585329e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_499) {
  s21_decimal check = {{0x488f0000, 0xb1db5e3d, 0x469, 0}};
  float number = 2.08391936e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_500) {
  s21_decimal check = {{0x488f0000, 0xb1db5e3d, 0x469, 0x80000000}};
  float number = -2.08391936e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_501) {
  s21_decimal check = {{0xbd6ce, 0, 0, 0x190000}};
  float number = 7.75885980e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_502) {
  s21_decimal check = {{0xbd6ce, 0, 0, 0x80190000}};
  float number = -7.75885980e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_503) {
  s21_decimal check = {{0xfe128900, 0x2b8aa, 0, 0}};
  float number = 7.65994465e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_504) {
  s21_decimal check = {{0xfe128900, 0x2b8aa, 0, 0x80000000}};
  float number = -7.65994465e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_505) {
  s21_decimal check = {{0x50487400, 0x54d19, 0, 0}};
  float number = 1.49214613e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_506) {
  s21_decimal check = {{0x50487400, 0x54d19, 0, 0x80000000}};
  float number = -1.49214613e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_507) {
  s21_decimal check = {{0x6724, 0, 0, 0x1c0000}};
  float number = 2.64035748e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_508) {
  s21_decimal check = {{0x6724, 0, 0, 0x801c0000}};
  float number = -2.64035748e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_509) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 4.43193314e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_510) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -4.43193314e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_511) {
  s21_decimal check = {{0x12a0, 0, 0, 0x1b0000}};
  float number = 4.76799009e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_512) {
  s21_decimal check = {{0x12a0, 0, 0, 0x801b0000}};
  float number = -4.76799009e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_513) {
  s21_decimal check = {{0x2250e0, 0, 0, 0x180000}};
  float number = 2.24892810e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_514) {
  s21_decimal check = {{0x2250e0, 0, 0, 0x80180000}};
  float number = -2.24892810e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_515) {
  s21_decimal check = {{0x53e24f, 0, 0, 0x70000}};
  float number = 5.49742341e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_516) {
  s21_decimal check = {{0x53e24f, 0, 0, 0x80070000}};
  float number = -5.49742341e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_517) {
  s21_decimal check = {{0xb, 0, 0, 0x1c0000}};
  float number = 1.11953749e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_518) {
  s21_decimal check = {{0xb, 0, 0, 0x801c0000}};
  float number = -1.11953749e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_519) {
  s21_decimal check = {{0x510e0000, 0x441708ad, 0x7d80, 0}};
  float number = 5.92661930e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_520) {
  s21_decimal check = {{0x510e0000, 0x441708ad, 0x7d80, 0x80000000}};
  float number = -5.92661930e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_523) {
  s21_decimal check = {{0xf88f8800, 0xa724a96, 0, 0}};
  float number = 7.52746070e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_524) {
  s21_decimal check = {{0xf88f8800, 0xa724a96, 0, 0x80000000}};
  float number = -7.52746070e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_525) {
  s21_decimal check = {{0xb7146400, 0xa5110, 0, 0}};
  float number = 2.90388188e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_526) {
  s21_decimal check = {{0xb7146400, 0xa5110, 0, 0x80000000}};
  float number = -2.90388188e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_527) {
  s21_decimal check = {{0x492c6400, 0x53848, 0, 0}};
  float number = 1.46925811e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_528) {
  s21_decimal check = {{0x492c6400, 0x53848, 0, 0x80000000}};
  float number = -1.46925811e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_529) {
  s21_decimal check = {{0x6cccfa, 0, 0, 0x10000}};
  float number = 7.13036250e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_530) {
  s21_decimal check = {{0x6cccfa, 0, 0, 0x80010000}};
  float number = -7.13036250e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_531) {
  s21_decimal check = {{0x58deca, 0, 0, 0xb0000}};
  float number = 5.82420180e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_532) {
  s21_decimal check = {{0x58deca, 0, 0, 0x800b0000}};
  float number = -5.82420180e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_533) {
  s21_decimal check = {{0xff72a, 0, 0, 0xd0000}};
  float number = 1.04631354e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_534) {
  s21_decimal check = {{0xff72a, 0, 0, 0x800d0000}};
  float number = -1.04631354e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_535) {
  s21_decimal check = {{0xfa1e8, 0, 0, 0xf0000}};
  float number = 1.02448827e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_536) {
  s21_decimal check = {{0xfa1e8, 0, 0, 0x800f0000}};
  float number = -1.02448827e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_537) {
  s21_decimal check = {{0x3dff16, 0, 0, 0x60000}};
  float number = 4.06299782e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_538) {
  s21_decimal check = {{0x3dff16, 0, 0, 0x80060000}};
  float number = -4.06299782e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_539) {
  s21_decimal check = {{0x6b3b37b8, 0, 0, 0}};
  float number = 1.79904282e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_540) {
  s21_decimal check = {{0x6b3b37b8, 0, 0, 0x80000000}};
  float number = -1.79904282e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_541) {
  s21_decimal check = {{0x1af4f9, 0, 0, 0x180000}};
  float number = 1.76664872e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_542) {
  s21_decimal check = {{0x1af4f9, 0, 0, 0x80180000}};
  float number = -1.76664872e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_543) {
  s21_decimal check = {{0xd665e000, 0xf94f127f, 0x3, 0}};
  float number = 7.33048273e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_544) {
  s21_decimal check = {{0xd665e000, 0xf94f127f, 0x3, 0x80000000}};
  float number = -7.33048273e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_545) {
  s21_decimal check = {{0x10e205, 0, 0, 0xa0000}};
  float number = 1.10643683e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_546) {
  s21_decimal check = {{0x10e205, 0, 0, 0x800a0000}};
  float number = -1.10643683e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_547) {
  s21_decimal check = {{0x63342f, 0, 0, 0x190000}};
  float number = 6.50142300e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_548) {
  s21_decimal check = {{0x63342f, 0, 0, 0x80190000}};
  float number = -6.50142300e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_549) {
  s21_decimal check = {{0xc0731, 0, 0, 0x1c0000}};
  float number = 7.88272731e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_550) {
  s21_decimal check = {{0xc0731, 0, 0, 0x801c0000}};
  float number = -7.88272731e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_551) {
  s21_decimal check = {{0xbb0f40a0, 0x2c, 0, 0}};
  float number = 1.92116916e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_552) {
  s21_decimal check = {{0xbb0f40a0, 0x2c, 0, 0x80000000}};
  float number = -1.92116916e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_553) {
  s21_decimal check = {{0x9221ad, 0, 0, 0x130000}};
  float number = 9.57687705e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_554) {
  s21_decimal check = {{0x9221ad, 0, 0, 0x80130000}};
  float number = -9.57687705e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_555) {
  s21_decimal check = {{0x24cbe1, 0, 0, 0xf0000}};
  float number = 2.41148923e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_556) {
  s21_decimal check = {{0x24cbe1, 0, 0, 0x800f0000}};
  float number = -2.41148923e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_557) {
  s21_decimal check = {{0xc2d34, 0, 0, 0x120000}};
  float number = 7.98004024e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_558) {
  s21_decimal check = {{0xc2d34, 0, 0, 0x80120000}};
  float number = -7.98004024e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_559) {
  s21_decimal check = {{0x66000000, 0x7b44d9c0, 0x27f6ee0, 0}};
  float number = 7.73027191e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_560) {
  s21_decimal check = {{0x66000000, 0x7b44d9c0, 0x27f6ee0, 0x80000000}};
  float number = -7.73027191e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_561) {
  s21_decimal check = {{0x237078, 0, 0, 0x110000}};
  float number = 2.32255222e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_562) {
  s21_decimal check = {{0x237078, 0, 0, 0x80110000}};
  float number = -2.32255222e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_563) {
  s21_decimal check = {{0x1fe0b1, 0, 0, 0x1c0000}};
  float number = 2.08913693e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_564) {
  s21_decimal check = {{0x1fe0b1, 0, 0, 0x801c0000}};
  float number = -2.08913693e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_565) {
  s21_decimal check = {{0x46b00000, 0xb2f27f22, 0x6602ef, 0}};
  float number = 1.23324259e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_566) {
  s21_decimal check = {{0x46b00000, 0xb2f27f22, 0x6602ef, 0x80000000}};
  float number = -1.23324259e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_567) {
  s21_decimal check = {{0x38883800, 0x43497, 0, 0}};
  float number = 1.18372413e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_568) {
  s21_decimal check = {{0x38883800, 0x43497, 0, 0x80000000}};
  float number = -1.18372413e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_569) {
  s21_decimal check = {{0x1960c9, 0, 0, 0x190000}};
  float number = 1.66317729e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_570) {
  s21_decimal check = {{0x1960c9, 0, 0, 0x80190000}};
  float number = -1.66317729e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_571) {
  s21_decimal check = {{0xf4720, 0, 0, 0x70000}};
  float number = 1.00124776e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_572) {
  s21_decimal check = {{0xf4720, 0, 0, 0x80070000}};
  float number = -1.00124776e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_573) {
  s21_decimal check = {{0x4da40000, 0xb341f3f1, 0x1cc1, 0}};
  float number = 1.35799399e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_574) {
  s21_decimal check = {{0x4da40000, 0xb341f3f1, 0x1cc1, 0x80000000}};
  float number = -1.35799399e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_575) {
  s21_decimal check = {{0x1076a7, 0, 0, 0x110000}};
  float number = 1.07895064e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_576) {
  s21_decimal check = {{0x1076a7, 0, 0, 0x80110000}};
  float number = -1.07895064e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_577) {
  s21_decimal check = {{0x770577, 0, 0, 0x100000}};
  float number = 7.80018328e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_578) {
  s21_decimal check = {{0x770577, 0, 0, 0x80100000}};
  float number = -7.80018328e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_579) {
  s21_decimal check = {{0x12d5b7, 0, 0, 0x130000}};
  float number = 1.23435862e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_580) {
  s21_decimal check = {{0x12d5b7, 0, 0, 0x80130000}};
  float number = -1.23435862e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_581) {
  s21_decimal check = {{0x47b00000, 0x41ad4854, 0x1f3608b, 0}};
  float number = 6.03709877e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_582) {
  s21_decimal check = {{0x47b00000, 0x41ad4854, 0x1f3608b, 0x80000000}};
  float number = -6.03709877e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_583) {
  s21_decimal check = {{0x2a45ae80, 0x340, 0, 0}};
  float number = 3.57412189e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_584) {
  s21_decimal check = {{0x2a45ae80, 0x340, 0, 0x80000000}};
  float number = -3.57412189e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_585) {
  s21_decimal check = {{0x2d984d, 0, 0, 0x180000}};
  float number = 2.98810890e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_586) {
  s21_decimal check = {{0x2d984d, 0, 0, 0x80180000}};
  float number = -2.98810890e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_587) {
  s21_decimal check = {{0x37ef8, 0, 0, 0x1c0000}};
  float number = 2.29112028e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_588) {
  s21_decimal check = {{0x37ef8, 0, 0, 0x801c0000}};
  float number = -2.29112028e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_589) {
  s21_decimal check = {{0x80df4000, 0x82c6f7e9, 0x2, 0}};
  float number = 4.63169801e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_590) {
  s21_decimal check = {{0x80df4000, 0x82c6f7e9, 0x2, 0x80000000}};
  float number = -4.63169801e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_591) {
  s21_decimal check = {{0x3f52f9, 0, 0, 0x180000}};
  float number = 4.15000939e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_592) {
  s21_decimal check = {{0x3f52f9, 0, 0, 0x80180000}};
  float number = -4.15000939e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_593) {
  s21_decimal check = {{0xe7fade00, 0xff5c5, 0, 0}};
  float number = 4.49235487e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_594) {
  s21_decimal check = {{0xe7fade00, 0xff5c5, 0, 0x80000000}};
  float number = -4.49235487e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_595) {
  s21_decimal check = {{0x351e7000, 0x8a39f, 0, 0}};
  float number = 2.43170365e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_596) {
  s21_decimal check = {{0x351e7000, 0x8a39f, 0, 0x80000000}};
  float number = -2.43170365e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_597) {
  s21_decimal check = {{0x8b81c8, 0, 0, 0x20000}};
  float number = 9.14272812e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_598) {
  s21_decimal check = {{0x8b81c8, 0, 0, 0x80020000}};
  float number = -9.14272812e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_599) {
  s21_decimal check = {{0x991e74e0, 0x25, 0, 0}};
  float number = 1.61482719e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_600) {
  s21_decimal check = {{0x991e74e0, 0x25, 0, 0x80000000}};
  float number = -1.61482719e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_601) {
  s21_decimal check = {{0x5d36f, 0, 0, 0x100000}};
  float number = 3.81807017e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_602) {
  s21_decimal check = {{0x5d36f, 0, 0, 0x80100000}};
  float number = -3.81807017e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_603) {
  s21_decimal check = {{0x5ce, 0, 0, 0x1b0000}};
  float number = 1.48595707e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_604) {
  s21_decimal check = {{0x5ce, 0, 0, 0x801b0000}};
  float number = -1.48595707e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_605) {
  s21_decimal check = {{0x7c325200, 0x84fb6, 0, 0}};
  float number = 2.33944506e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_606) {
  s21_decimal check = {{0x7c325200, 0x84fb6, 0, 0x80000000}};
  float number = -2.33944506e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_607) {
  s21_decimal check = {{0x27b56000, 0x71594eb2, 0x1, 0}};
  float number = 2.66143914e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_608) {
  s21_decimal check = {{0x27b56000, 0x71594eb2, 0x1, 0x80000000}};
  float number = -2.66143914e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_609) {
  s21_decimal check = {{0x586e37, 0, 0, 0x50000}};
  float number = 5.79538345e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_610) {
  s21_decimal check = {{0x586e37, 0, 0, 0x80050000}};
  float number = -5.79538345e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_611) {
  s21_decimal check = {{0x4ba570, 0, 0, 0x1c0000}};
  float number = 4.95755180e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_612) {
  s21_decimal check = {{0x4ba570, 0, 0, 0x801c0000}};
  float number = -4.95755180e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_613) {
  s21_decimal check = {{0x34b272, 0, 0, 0x1a0000}};
  float number = 3.45355434e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_614) {
  s21_decimal check = {{0x34b272, 0, 0, 0x801a0000}};
  float number = -3.45355434e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_615) {
  s21_decimal check = {{0x12128a, 0, 0, 0xb0000}};
  float number = 1.18439420e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_616) {
  s21_decimal check = {{0x12128a, 0, 0, 0x800b0000}};
  float number = -1.18439420e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_617) {
  s21_decimal check = {{0x8414e400, 0x7553be, 0, 0}};
  float number = 3.30246499e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_618) {
  s21_decimal check = {{0x8414e400, 0x7553be, 0, 0x80000000}};
  float number = -3.30246499e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_619) {
  s21_decimal check = {{0x126d41, 0, 0, 0x1b0000}};
  float number = 1.20761675e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_620) {
  s21_decimal check = {{0x126d41, 0, 0, 0x801b0000}};
  float number = -1.20761675e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_621) {
  s21_decimal check = {{0x23a846, 0, 0, 0}};
  float number = 2.33683775e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_622) {
  s21_decimal check = {{0x23a846, 0, 0, 0x80000000}};
  float number = -2.33683775e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_623) {
  s21_decimal check = {{0x1ba5e6f8, 0, 0, 0}};
  float number = 4.63857440e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_624) {
  s21_decimal check = {{0x1ba5e6f8, 0, 0, 0x80000000}};
  float number = -4.63857440e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_625) {
  s21_decimal check = {{0x23, 0, 0, 0x1c0000}};
  float number = 3.46025978e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_626) {
  s21_decimal check = {{0x23, 0, 0, 0x801c0000}};
  float number = -3.46025978e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_627) {
  s21_decimal check = {{0xd10ec000, 0x73fd3205, 0x7, 0}};
  float number = 1.37485124e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_628) {
  s21_decimal check = {{0xd10ec000, 0x73fd3205, 0x7, 0x80000000}};
  float number = -1.37485124e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_629) {
  s21_decimal check = {{0x145304, 0, 0, 0xa0000}};
  float number = 1.33197187e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_630) {
  s21_decimal check = {{0x145304, 0, 0, 0x800a0000}};
  float number = -1.33197187e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_631) {
  s21_decimal check = {{0xda041c60, 0x31, 0, 0}};
  float number = 2.14111109e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_632) {
  s21_decimal check = {{0xda041c60, 0x31, 0, 0x80000000}};
  float number = -2.14111109e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_633) {
  s21_decimal check = {{0xb8145808, 0, 0, 0}};
  float number = 3.08834099e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_634) {
  s21_decimal check = {{0xb8145808, 0, 0, 0x80000000}};
  float number = -3.08834099e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_635) {
  s21_decimal check = {{0x44cc7000, 0xfb73b45, 0, 0}};
  float number = 1.13243857e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_636) {
  s21_decimal check = {{0x44cc7000, 0xfb73b45, 0, 0x80000000}};
  float number = -1.13243857e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_637) {
  s21_decimal check = {{0x8b6ff1, 0, 0, 0xb0000}};
  float number = 9.13816111e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_638) {
  s21_decimal check = {{0x8b6ff1, 0, 0, 0x800b0000}};
  float number = -9.13816111e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_639) {
  s21_decimal check = {{0xf3b00000, 0xb7c47f0c, 0x5efe0, 0}};
  float number = 7.17742002e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_640) {
  s21_decimal check = {{0xf3b00000, 0xb7c47f0c, 0x5efe0, 0x80000000}};
  float number = -7.17742002e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_641) {
  s21_decimal check = {{0x41474f, 0, 0, 0x100000}};
  float number = 4.27809455e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_642) {
  s21_decimal check = {{0x41474f, 0, 0, 0x80100000}};
  float number = -4.27809455e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_643) {
  s21_decimal check = {{0xe0a68000, 0xaf3b53fe, 0x1ff, 0}};
  float number = 9.43891319e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_644) {
  s21_decimal check = {{0xe0a68000, 0xaf3b53fe, 0x1ff, 0x80000000}};
  float number = -9.43891319e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_645) {
  s21_decimal check = {{0xccb54000, 0x935a9c8, 0, 0}};
  float number = 6.63623162e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_646) {
  s21_decimal check = {{0xccb54000, 0x935a9c8, 0, 0x80000000}};
  float number = -6.63623162e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_647) {
  s21_decimal check = {{0x6b1, 0, 0, 0x1c0000}};
  float number = 1.71251152e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_648) {
  s21_decimal check = {{0x6b1, 0, 0, 0x801c0000}};
  float number = -1.71251152e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_649) {
  s21_decimal check = {{0x162421, 0, 0, 0x60000}};
  float number = 1.45104063e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_650) {
  s21_decimal check = {{0x162421, 0, 0, 0x80060000}};
  float number = -1.45104063e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_651) {
  s21_decimal check = {{0x4dab33, 0, 0, 0x130000}};
  float number = 5.09009881e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_652) {
  s21_decimal check = {{0x4dab33, 0, 0, 0x80130000}};
  float number = -5.09009881e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_653) {
  s21_decimal check = {{0x25f7f5, 0, 0, 0x70000}};
  float number = 2.48830885e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_654) {
  s21_decimal check = {{0x25f7f5, 0, 0, 0x80070000}};
  float number = -2.48830885e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_655) {
  s21_decimal check = {{0x2562fc, 0, 0, 0x1a0000}};
  float number = 2.45017198e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_656) {
  s21_decimal check = {{0x2562fc, 0, 0, 0x801a0000}};
  float number = -2.45017198e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_657) {
  s21_decimal check = {{0x65d801, 0, 0, 0x1b0000}};
  float number = 6.67443312e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_658) {
  s21_decimal check = {{0x65d801, 0, 0, 0x801b0000}};
  float number = -6.67443312e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_659) {
  s21_decimal check = {{0x8c419d00, 0x413, 0, 0}};
  float number = 4.48200389e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_660) {
  s21_decimal check = {{0x8c419d00, 0x413, 0, 0x80000000}};
  float number = -4.48200389e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_661) {
  s21_decimal check = {{0xad85be00, 0x1210, 0, 0}};
  float number = 1.98628354e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_662) {
  s21_decimal check = {{0xad85be00, 0x1210, 0, 0x80000000}};
  float number = -1.98628354e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_663) {
  s21_decimal check = {{0x1e2fb3, 0, 0, 0x100000}};
  float number = 1.97829059e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_664) {
  s21_decimal check = {{0x1e2fb3, 0, 0, 0x80100000}};
  float number = -1.97829059e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_665) {
  s21_decimal check = {{0x1452aa, 0, 0, 0x20000}};
  float number = 1.33188164e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_666) {
  s21_decimal check = {{0x1452aa, 0, 0, 0x80020000}};
  float number = -1.33188164e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_667) {
  s21_decimal check = {{0x1301b8, 0, 0, 0xc0000}};
  float number = 1.24562382e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_668) {
  s21_decimal check = {{0x1301b8, 0, 0, 0x800c0000}};
  float number = -1.24562382e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_669) {
  s21_decimal check = {{0xfdcb0, 0, 0, 0x70000}};
  float number = 1.03953570e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_670) {
  s21_decimal check = {{0xfdcb0, 0, 0, 0x80070000}};
  float number = -1.03953570e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_671) {
  s21_decimal check = {{0x315, 0, 0, 0x1c0000}};
  float number = 7.88859981e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_672) {
  s21_decimal check = {{0x315, 0, 0, 0x801c0000}};
  float number = -7.88859981e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_673) {
  s21_decimal check = {{0x225660, 0, 0, 0x1a0000}};
  float number = 2.25033613e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_674) {
  s21_decimal check = {{0x225660, 0, 0, 0x801a0000}};
  float number = -2.25033613e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_675) {
  s21_decimal check = {{0x51840000, 0x7c32aa9c, 0x1e09d, 0}};
  float number = 2.26964084e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_676) {
  s21_decimal check = {{0x51840000, 0x7c32aa9c, 0x1e09d, 0x80000000}};
  float number = -2.26964084e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_677) {
  s21_decimal check = {{0x7f1, 0, 0, 0x1c0000}};
  float number = 2.03335899e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_678) {
  s21_decimal check = {{0x7f1, 0, 0, 0x801c0000}};
  float number = -2.03335899e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_679) {
  s21_decimal check = {{0xe4afc000, 0x5bd64f20, 0x4, 0}};
  float number = 8.04045410e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_680) {
  s21_decimal check = {{0xe4afc000, 0x5bd64f20, 0x4, 0x80000000}};
  float number = -8.04045410e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_681) {
  s21_decimal check = {{0xae630, 0, 0, 0x1a0000}};
  float number = 7.14287988e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_682) {
  s21_decimal check = {{0xae630, 0, 0, 0x801a0000}};
  float number = -7.14287988e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_683) {
  s21_decimal check = {{0x578916, 0, 0, 0x110000}};
  float number = 5.73672637e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_684) {
  s21_decimal check = {{0x578916, 0, 0, 0x80110000}};
  float number = -5.73672637e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_685) {
  s21_decimal check = {{0x30e1c9, 0, 0, 0x100000}};
  float number = 3.20352939e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_686) {
  s21_decimal check = {{0x30e1c9, 0, 0, 0x80100000}};
  float number = -3.20352939e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_687) {
  s21_decimal check = {{0x20, 0, 0, 0x1c0000}};
  float number = 3.19178245e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_688) {
  s21_decimal check = {{0x20, 0, 0, 0x801c0000}};
  float number = -3.19178245e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_689) {
  s21_decimal check = {{0x81865, 0, 0, 0x70000}};
  float number = 5.30532971e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_690) {
  s21_decimal check = {{0x81865, 0, 0, 0x80070000}};
  float number = -5.30532971e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_691) {
  s21_decimal check = {{0x1426c7, 0, 0, 0x1a0000}};
  float number = 1.32064732e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_692) {
  s21_decimal check = {{0x1426c7, 0, 0, 0x801a0000}};
  float number = -1.32064732e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_693) {
  s21_decimal check = {{0x271536, 0, 0, 0x60000}};
  float number = 2.56133413e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_694) {
  s21_decimal check = {{0x271536, 0, 0, 0x80060000}};
  float number = -2.56133413e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_695) {
  s21_decimal check = {{0x20c991, 0, 0, 0x1a0000}};
  float number = 2.14875318e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_696) {
  s21_decimal check = {{0x20c991, 0, 0, 0x801a0000}};
  float number = -2.14875318e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_697) {
  s21_decimal check = {{0x824ad2, 0, 0, 0x80000}};
  float number = 8.53883401e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_698) {
  s21_decimal check = {{0x824ad2, 0, 0, 0x80080000}};
  float number = -8.53883401e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_699) {
  s21_decimal check = {{0x1ff00000, 0xe1972e6f, 0x5b1f9a, 0}};
  float number = 1.10161521e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_700) {
  s21_decimal check = {{0x1ff00000, 0xe1972e6f, 0x5b1f9a, 0x80000000}};
  float number = -1.10161521e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_701) {
  s21_decimal check = {{0x6976eb, 0, 0, 0x100000}};
  float number = 6.91172286e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_702) {
  s21_decimal check = {{0x6976eb, 0, 0, 0x80100000}};
  float number = -6.91172286e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_703) {
  s21_decimal check = {{0xeec8da00, 0x706f1, 0, 0}};
  float number = 1.97796062e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_704) {
  s21_decimal check = {{0xeec8da00, 0x706f1, 0, 0x80000000}};
  float number = -1.97796062e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_705) {
  s21_decimal check = {{0x15a794, 0, 0, 0x190000}};
  float number = 1.41915604e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_706) {
  s21_decimal check = {{0x15a794, 0, 0, 0x80190000}};
  float number = -1.41915604e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_707) {
  s21_decimal check = {{0x619383, 0, 0, 0x90000}};
  float number = 6.39475463e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_708) {
  s21_decimal check = {{0x619383, 0, 0, 0x80090000}};
  float number = -6.39475463e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_709) {
  s21_decimal check = {{0x385099, 0, 0, 0x180000}};
  float number = 3.69064870e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_710) {
  s21_decimal check = {{0x385099, 0, 0, 0x80180000}};
  float number = -3.69064870e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_711) {
  s21_decimal check = {{0x3857f1, 0, 0, 0x150000}};
  float number = 3.69252917e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_712) {
  s21_decimal check = {{0x3857f1, 0, 0, 0x80150000}};
  float number = -3.69252917e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_713) {
  s21_decimal check = {{0x1628, 0, 0, 0x1c0000}};
  float number = 5.67219439e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_714) {
  s21_decimal check = {{0x1628, 0, 0, 0x801c0000}};
  float number = -5.67219439e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_715) {
  s21_decimal check = {{0x15a8a1, 0, 0, 0x40000}};
  float number = 1.41942535e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_716) {
  s21_decimal check = {{0x15a8a1, 0, 0, 0x80040000}};
  float number = -1.41942535e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_717) {
  s21_decimal check = {{0x8e1b77, 0, 0, 0x1a0000}};
  float number = 9.31314315e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_718) {
  s21_decimal check = {{0x8e1b77, 0, 0, 0x801a0000}};
  float number = -9.31314315e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_719) {
  s21_decimal check = {{0x16e9, 0, 0, 0x1c0000}};
  float number = 5.86461137e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_720) {
  s21_decimal check = {{0x16e9, 0, 0, 0x801c0000}};
  float number = -5.86461137e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_721) {
  s21_decimal check = {{0x38cee3, 0, 0, 0x90000}};
  float number = 3.72297852e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_722) {
  s21_decimal check = {{0x38cee3, 0, 0, 0x80090000}};
  float number = -3.72297852e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_723) {
  s21_decimal check = {{0x529db000, 0x13145ddf, 0, 0}};
  float number = 1.37482673e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_724) {
  s21_decimal check = {{0x529db000, 0x13145ddf, 0, 0x80000000}};
  float number = -1.37482673e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_725) {
  s21_decimal check = {{0x1524b, 0, 0, 0x1c0000}};
  float number = 8.66029961e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_726) {
  s21_decimal check = {{0x1524b, 0, 0, 0x801c0000}};
  float number = -8.66029961e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_727) {
  s21_decimal check = {{0x2a958000, 0x2b7fb017, 0xc5, 0}};
  float number = 3.63714309e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_728) {
  s21_decimal check = {{0x2a958000, 0x2b7fb017, 0xc5, 0x80000000}};
  float number = -3.63714309e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_729) {
  s21_decimal check = {{0x15a903, 0, 0, 0x170000}};
  float number = 1.41952283e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_730) {
  s21_decimal check = {{0x15a903, 0, 0, 0x80170000}};
  float number = -1.41952283e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_731) {
  s21_decimal check = {{0x937f0, 0, 0, 0x1c0000}};
  float number = 6.04143949e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_732) {
  s21_decimal check = {{0x937f0, 0, 0, 0x801c0000}};
  float number = -6.04143949e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_733) {
  s21_decimal check = {{0xdf690000, 0x25fdb87f, 0x3a8, 0}};
  float number = 1.72688895e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_734) {
  s21_decimal check = {{0xdf690000, 0x25fdb87f, 0x3a8, 0x80000000}};
  float number = -1.72688895e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_735) {
  s21_decimal check = {{0x4718d, 0, 0, 0x80000}};
  float number = 2.91212997e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_736) {
  s21_decimal check = {{0x4718d, 0, 0, 0x80080000}};
  float number = -2.91212997e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_737) {
  s21_decimal check = {{0x65f9a7, 0, 0, 0x180000}};
  float number = 6.68304653e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_738) {
  s21_decimal check = {{0x65f9a7, 0, 0, 0x80180000}};
  float number = -6.68304653e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_739) {
  s21_decimal check = {{0x88bea7, 0, 0, 0x180000}};
  float number = 8.96170288e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_740) {
  s21_decimal check = {{0x88bea7, 0, 0, 0x80180000}};
  float number = -8.96170288e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_741) {
  s21_decimal check = {{0x93ab96, 0, 0, 0xe0000}};
  float number = 9.67771783e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_742) {
  s21_decimal check = {{0x93ab96, 0, 0, 0x800e0000}};
  float number = -9.67771783e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_743) {
  s21_decimal check = {{0x141bd8, 0, 0, 0x30000}};
  float number = 1.31784827e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_744) {
  s21_decimal check = {{0x141bd8, 0, 0, 0x80030000}};
  float number = -1.31784827e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_745) {
  s21_decimal check = {{0x89eef, 0, 0, 0x10000}};
  float number = 5.64975000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_746) {
  s21_decimal check = {{0x89eef, 0, 0, 0x80010000}};
  float number = -5.64975000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_747) {
  s21_decimal check = {{0x527dd4, 0, 0, 0xd0000}};
  float number = 5.40616441e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_748) {
  s21_decimal check = {{0x527dd4, 0, 0, 0x800d0000}};
  float number = -5.40616441e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_749) {
  s21_decimal check = {{0x4a0264, 0, 0, 0}};
  float number = 4.85027600e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_750) {
  s21_decimal check = {{0x4a0264, 0, 0, 0x80000000}};
  float number = -4.85027600e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_751) {
  s21_decimal check = {{0xf4055000, 0x65ec48ac, 0, 0}};
  float number = 7.34432536e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_752) {
  s21_decimal check = {{0xf4055000, 0x65ec48ac, 0, 0x80000000}};
  float number = -7.34432536e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_753) {
  s21_decimal check = {{0x7ab34f, 0, 0, 0xe0000}};
  float number = 8.04129527e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_754) {
  s21_decimal check = {{0x7ab34f, 0, 0, 0x800e0000}};
  float number = -8.04129527e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_755) {
  s21_decimal check = {{0x1e6de4, 0, 0, 0}};
  float number = 1.99421150e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_756) {
  s21_decimal check = {{0x1e6de4, 0, 0, 0x80000000}};
  float number = -1.99421150e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_757) {
  s21_decimal check = {{0x310892, 0, 0, 0xc0000}};
  float number = 3.21345760e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_758) {
  s21_decimal check = {{0x310892, 0, 0, 0x800c0000}};
  float number = -3.21345760e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_759) {
  s21_decimal check = {{0x1041d2, 0, 0, 0x180000}};
  float number = 1.06542590e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_760) {
  s21_decimal check = {{0x1041d2, 0, 0, 0x80180000}};
  float number = -1.06542590e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_761) {
  s21_decimal check = {{0x1f4c4b, 0, 0, 0x10000}};
  float number = 2.05114672e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_762) {
  s21_decimal check = {{0x1f4c4b, 0, 0, 0x80010000}};
  float number = -2.05114672e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_763) {
  s21_decimal check = {{0x5d961f, 0, 0, 0x1a0000}};
  float number = 6.13327929e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_764) {
  s21_decimal check = {{0x5d961f, 0, 0, 0x801a0000}};
  float number = -6.13327929e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_765) {
  s21_decimal check = {{0x1646d2, 0, 0, 0x70000}};
  float number = 1.45992219e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_766) {
  s21_decimal check = {{0x1646d2, 0, 0, 0x80070000}};
  float number = -1.45992219e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_769) {
  s21_decimal check = {{0x35685a, 0, 0, 0x170000}};
  float number = 3.50012179e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_770) {
  s21_decimal check = {{0x35685a, 0, 0, 0x80170000}};
  float number = -3.50012179e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_771) {
  s21_decimal check = {{0x4d13e000, 0x23272e, 0, 0}};
  float number = 9.89470378e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_772) {
  s21_decimal check = {{0x4d13e000, 0x23272e, 0, 0x80000000}};
  float number = -9.89470378e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_773) {
  s21_decimal check = {{0xfe00000, 0x5637db47, 0x11ddc37, 0}};
  float number = 3.45583812e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_774) {
  s21_decimal check = {{0xfe00000, 0x5637db47, 0x11ddc37, 0x80000000}};
  float number = -3.45583812e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_775) {
  s21_decimal check = {{0x84880000, 0x71cbaadd, 0x1b70b, 0}};
  float number = 2.07332973e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_776) {
  s21_decimal check = {{0x84880000, 0x71cbaadd, 0x1b70b, 0x80000000}};
  float number = -2.07332973e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_777) {
  s21_decimal check = {{0x20, 0, 0, 0x1c0000}};
  float number = 3.18047301e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_778) {
  s21_decimal check = {{0x20, 0, 0, 0x801c0000}};
  float number = -3.18047301e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_779) {
  s21_decimal check = {{0x574, 0, 0, 0x1c0000}};
  float number = 1.39601805e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_780) {
  s21_decimal check = {{0x574, 0, 0, 0x801c0000}};
  float number = -1.39601805e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_781) {
  s21_decimal check = {{0x519eb000, 0xf0b9b9, 0, 0}};
  float number = 6.77582029e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_782) {
  s21_decimal check = {{0x519eb000, 0xf0b9b9, 0, 0x80000000}};
  float number = -6.77582029e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_783) {
  s21_decimal check = {{0x770077, 0, 0, 0xb0000}};
  float number = 7.79890252e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_784) {
  s21_decimal check = {{0x770077, 0, 0, 0x800b0000}};
  float number = -7.79890252e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_785) {
  s21_decimal check = {{0x12db54, 0, 0, 0x10000}};
  float number = 1.23579570e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_786) {
  s21_decimal check = {{0x12db54, 0, 0, 0x80010000}};
  float number = -1.23579570e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_787) {
  s21_decimal check = {{0xbdc800, 0x28cb418, 0, 0}};
  float number = 1.83719683e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_788) {
  s21_decimal check = {{0xbdc800, 0x28cb418, 0, 0x80000000}};
  float number = -1.83719683e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_789) {
  s21_decimal check = {{0x205a47, 0, 0, 0x160000}};
  float number = 2.12026283e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_790) {
  s21_decimal check = {{0x205a47, 0, 0, 0x80160000}};
  float number = -2.12026283e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_791) {
  s21_decimal check = {{0x521757, 0, 0, 0x1b0000}};
  float number = 5.37992697e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_792) {
  s21_decimal check = {{0x521757, 0, 0, 0x801b0000}};
  float number = -5.37992697e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_793) {
  s21_decimal check = {{0xb3, 0, 0, 0x1c0000}};
  float number = 1.79480092e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_794) {
  s21_decimal check = {{0xb3, 0, 0, 0x801c0000}};
  float number = -1.79480092e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_795) {
  s21_decimal check = {{0x43bb01, 0, 0, 0x140000}};
  float number = 4.43878502e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_796) {
  s21_decimal check = {{0x43bb01, 0, 0, 0x80140000}};
  float number = -4.43878502e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_797) {
  s21_decimal check = {{0x6b74854, 0, 0, 0}};
  float number = 1.12674904e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_798) {
  s21_decimal check = {{0x6b74854, 0, 0, 0x80000000}};
  float number = -1.12674904e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_799) {
  s21_decimal check = {{0x21f446, 0, 0, 0x180000}};
  float number = 2.22522193e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_800) {
  s21_decimal check = {{0x21f446, 0, 0, 0x80180000}};
  float number = -2.22522193e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_801) {
  s21_decimal check = {{0xeeb, 0, 0, 0x1c0000}};
  float number = 3.81901000e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_802) {
  s21_decimal check = {{0xeeb, 0, 0, 0x801c0000}};
  float number = -3.81901000e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_803) {
  s21_decimal check = {{0x57734000, 0x82404b57, 0x30, 0}};
  float number = 8.94829288e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_804) {
  s21_decimal check = {{0x57734000, 0x82404b57, 0x30, 0x80000000}};
  float number = -8.94829288e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_805) {
  s21_decimal check = {{0xf1df9600, 0x58abc, 0, 0}};
  float number = 1.55991883e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_806) {
  s21_decimal check = {{0xf1df9600, 0x58abc, 0, 0x80000000}};
  float number = -1.55991883e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_807) {
  s21_decimal check = {{0x74621, 0, 0, 0x1c0000}};
  float number = 4.76704638e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_808) {
  s21_decimal check = {{0x74621, 0, 0, 0x801c0000}};
  float number = -4.76704638e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_809) {
  s21_decimal check = {{0x11c504, 0, 0, 0xb0000}};
  float number = 1.16454767e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_810) {
  s21_decimal check = {{0x11c504, 0, 0, 0x800b0000}};
  float number = -1.16454767e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_811) {
  s21_decimal check = {{0x4cf14a, 0, 0, 0x10000}};
  float number = 5.04250562e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_812) {
  s21_decimal check = {{0x4cf14a, 0, 0, 0x80010000}};
  float number = -5.04250562e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_813) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 3.55198610e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_814) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -3.55198610e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_815) {
  s21_decimal check = {{0x260751, 0, 0, 0x10000}};
  float number = 2.49224078e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_816) {
  s21_decimal check = {{0x260751, 0, 0, 0x80010000}};
  float number = -2.49224078e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_817) {
  s21_decimal check = {{0x269ef61c, 0, 0, 0}};
  float number = 6.47951936e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_818) {
  s21_decimal check = {{0x269ef61c, 0, 0, 0x80000000}};
  float number = -6.47951936e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_819) {
  s21_decimal check = {{0x4f3da7, 0, 0, 0x190000}};
  float number = 5.19312726e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_820) {
  s21_decimal check = {{0x4f3da7, 0, 0, 0x80190000}};
  float number = -5.19312726e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_821) {
  s21_decimal check = {{0xaa7cebb0, 0x5, 0, 0}};
  float number = 2.43351511e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_822) {
  s21_decimal check = {{0xaa7cebb0, 0x5, 0, 0x80000000}};
  float number = -2.43351511e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_823) {
  s21_decimal check = {{0x297d70, 0, 0, 0x130000}};
  float number = 2.71908798e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_824) {
  s21_decimal check = {{0x297d70, 0, 0, 0x80130000}};
  float number = -2.71908798e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_825) {
  s21_decimal check = {{0x49300000, 0x944c34e1, 0x126801, 0}};
  float number = 2.22518185e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_826) {
  s21_decimal check = {{0x49300000, 0x944c34e1, 0x126801, 0x80000000}};
  float number = -2.22518185e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_827) {
  s21_decimal check = {{0x254f3800, 0x9ba161, 0, 0}};
  float number = 4.38060637e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_828) {
  s21_decimal check = {{0x254f3800, 0x9ba161, 0, 0x80000000}};
  float number = -4.38060637e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_829) {
  s21_decimal check = {{0x2bd5bc, 0, 0, 0x120000}};
  float number = 2.87276366e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_830) {
  s21_decimal check = {{0x2bd5bc, 0, 0, 0x80120000}};
  float number = -2.87276366e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_831) {
  s21_decimal check = {{0x308021, 0, 0, 0x1c0000}};
  float number = 3.17852910e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_832) {
  s21_decimal check = {{0x308021, 0, 0, 0x801c0000}};
  float number = -3.17852910e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_833) {
  s21_decimal check = {{0x486914, 0, 0, 0x1a0000}};
  float number = 4.74549220e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_834) {
  s21_decimal check = {{0x486914, 0, 0, 0x801a0000}};
  float number = -4.74549220e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_835) {
  s21_decimal check = {{0xa80e0000, 0xf1996b45, 0x3866, 0}};
  float number = 2.66351547e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_836) {
  s21_decimal check = {{0xa80e0000, 0xf1996b45, 0x3866, 0x80000000}};
  float number = -2.66351547e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_837) {
  s21_decimal check = {{0x265c22, 0, 0, 0x70000}};
  float number = 2.51395375e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_838) {
  s21_decimal check = {{0x265c22, 0, 0, 0x80070000}};
  float number = -2.51395375e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_839) {
  s21_decimal check = {{0x165e9d, 0, 0, 0x150000}};
  float number = 1.46601350e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_840) {
  s21_decimal check = {{0x165e9d, 0, 0, 0x80150000}};
  float number = -1.46601350e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_841) {
  s21_decimal check = {{0xa6380000, 0xe1479d68, 0xe01a1, 0}};
  float number = 1.69326734e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_842) {
  s21_decimal check = {{0xa6380000, 0xe1479d68, 0xe01a1, 0x80000000}};
  float number = -1.69326734e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_843) {
  s21_decimal check = {{0x592c6400, 0x1d6f2a, 0, 0}};
  float number = 8.28500158e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_844) {
  s21_decimal check = {{0x592c6400, 0x1d6f2a, 0, 0x80000000}};
  float number = -8.28500158e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_845) {
  s21_decimal check = {{0x43b04f, 0, 0, 0x150000}};
  float number = 4.43604749e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_846) {
  s21_decimal check = {{0x43b04f, 0, 0, 0x80150000}};
  float number = -4.43604749e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_847) {
  s21_decimal check = {{0x98800000, 0xb0396630, 0x14d671, 0}};
  float number = 2.51911965e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_848) {
  s21_decimal check = {{0x98800000, 0xb0396630, 0x14d671, 0x80000000}};
  float number = -2.51911965e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_849) {
  s21_decimal check = {{0x6050c5, 0, 0, 0x170000}};
  float number = 6.31213320e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_850) {
  s21_decimal check = {{0x6050c5, 0, 0, 0x80170000}};
  float number = -6.31213320e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_851) {
  s21_decimal check = {{0xa1667d00, 0x11276, 0, 0}};
  float number = 3.01775710e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_852) {
  s21_decimal check = {{0xa1667d00, 0x11276, 0, 0x80000000}};
  float number = -3.01775710e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_853) {
  s21_decimal check = {{0xf84f3000, 0x120a5c, 0, 0}};
  float number = 5.07794359e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_854) {
  s21_decimal check = {{0xf84f3000, 0x120a5c, 0, 0x80000000}};
  float number = -5.07794359e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_855) {
  s21_decimal check = {{0x758f54, 0, 0, 0x20000}};
  float number = 7.70440391e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_856) {
  s21_decimal check = {{0x758f54, 0, 0, 0x80020000}};
  float number = -7.70440391e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_859) {
  s21_decimal check = {{0x8fbf70, 0, 0, 0x120000}};
  float number = 9.42065610e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_860) {
  s21_decimal check = {{0x8fbf70, 0, 0, 0x80120000}};
  float number = -9.42065610e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_861) {
  s21_decimal check = {{0x1ee1d0, 0, 0, 0}};
  float number = 2.02388800e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_862) {
  s21_decimal check = {{0x1ee1d0, 0, 0, 0x80000000}};
  float number = -2.02388800e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_863) {
  s21_decimal check = {{0x92de0000, 0x525a6dd6, 0xc1bd, 0}};
  float number = 9.14909147e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_864) {
  s21_decimal check = {{0x92de0000, 0x525a6dd6, 0xc1bd, 0x80000000}};
  float number = -9.14909147e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_865) {
  s21_decimal check = {{0xe2b38c00, 0x3e5ee5, 0, 0}};
  float number = 1.75557937e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_866) {
  s21_decimal check = {{0xe2b38c00, 0x3e5ee5, 0, 0x80000000}};
  float number = -1.75557937e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_867) {
  s21_decimal check = {{0x24, 0, 0, 0x1c0000}};
  float number = 3.64562900e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_868) {
  s21_decimal check = {{0x24, 0, 0, 0x801c0000}};
  float number = -3.64562900e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_869) {
  s21_decimal check = {{0x127c0000, 0x467fe709, 0x23736, 0}};
  float number = 2.67858282e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_870) {
  s21_decimal check = {{0x127c0000, 0x467fe709, 0x23736, 0x80000000}};
  float number = -2.67858282e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_871) {
  s21_decimal check = {{0x11561c, 0, 0, 0x40000}};
  float number = 1.13615631e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_872) {
  s21_decimal check = {{0x11561c, 0, 0, 0x80040000}};
  float number = -1.13615631e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_873) {
  s21_decimal check = {{0x1f2c87, 0, 0, 0x170000}};
  float number = 2.04301485e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_874) {
  s21_decimal check = {{0x1f2c87, 0, 0, 0x80170000}};
  float number = -2.04301485e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_875) {
  s21_decimal check = {{0x17267a, 0, 0, 0x170000}};
  float number = 1.51717779e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_876) {
  s21_decimal check = {{0x17267a, 0, 0, 0x80170000}};
  float number = -1.51717779e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_877) {
  s21_decimal check = {{0x156c7d, 0, 0, 0xc0000}};
  float number = 1.40402926e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_878) {
  s21_decimal check = {{0x156c7d, 0, 0, 0x800c0000}};
  float number = -1.40402926e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_879) {
  s21_decimal check = {{0x3188ac, 0, 0, 0xb0000}};
  float number = 3.24625216e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_880) {
  s21_decimal check = {{0x3188ac, 0, 0, 0x800b0000}};
  float number = -3.24625216e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_881) {
  s21_decimal check = {{0x221c0, 0, 0, 0}};
  float number = 1.39711969e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_882) {
  s21_decimal check = {{0x221c0, 0, 0, 0x80000000}};
  float number = -1.39711969e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_883) {
  s21_decimal check = {{0x291ca7, 0, 0, 0x170000}};
  float number = 2.69431139e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_884) {
  s21_decimal check = {{0x291ca7, 0, 0, 0x80170000}};
  float number = -2.69431139e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_885) {
  s21_decimal check = {{0x27e26, 0, 0, 0x1c0000}};
  float number = 1.63365789e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_886) {
  s21_decimal check = {{0x27e26, 0, 0, 0x801c0000}};
  float number = -1.63365789e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_887) {
  s21_decimal check = {{0xbfab0828, 0, 0, 0}};
  float number = 3.21565747e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_888) {
  s21_decimal check = {{0xbfab0828, 0, 0, 0x80000000}};
  float number = -3.21565747e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_889) {
  s21_decimal check = {{0x2befe6, 0, 0, 0x180000}};
  float number = 2.87946203e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_890) {
  s21_decimal check = {{0x2befe6, 0, 0, 0x80180000}};
  float number = -2.87946203e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_891) {
  s21_decimal check = {{0x140d59, 0, 0, 0xf0000}};
  float number = 1.31413691e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_892) {
  s21_decimal check = {{0x140d59, 0, 0, 0x800f0000}};
  float number = -1.31413691e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_893) {
  s21_decimal check = {{0x19b965, 0, 0, 0x120000}};
  float number = 1.68586065e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_894) {
  s21_decimal check = {{0x19b965, 0, 0, 0x80120000}};
  float number = -1.68586065e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_895) {
  s21_decimal check = {{0x16563e, 0, 0, 0}};
  float number = 1.46387012e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_896) {
  s21_decimal check = {{0x16563e, 0, 0, 0x80000000}};
  float number = -1.46387012e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_897) {
  s21_decimal check = {{0x65053b, 0, 0, 0x100000}};
  float number = 6.62047472e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_898) {
  s21_decimal check = {{0x65053b, 0, 0, 0x80100000}};
  float number = -6.62047472e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_899) {
  s21_decimal check = {{0xf9c80000, 0xa6731167, 0x48a3, 0}};
  float number = 3.43029168e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_900) {
  s21_decimal check = {{0xf9c80000, 0xa6731167, 0x48a3, 0x80000000}};
  float number = -3.43029168e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_901) {
  s21_decimal check = {{0x36229400, 0xc81b84, 0, 0}};
  float number = 5.63252534e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_902) {
  s21_decimal check = {{0x36229400, 0xc81b84, 0, 0x80000000}};
  float number = -5.63252534e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_903) {
  s21_decimal check = {{0x90b40000, 0x72ce8b54, 0x2b465, 0}};
  float number = 3.26974937e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_904) {
  s21_decimal check = {{0x90b40000, 0x72ce8b54, 0x2b465, 0x80000000}};
  float number = -3.26974937e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_905) {
  s21_decimal check = {{0x401efb, 0, 0, 0x20000}};
  float number = 4.20223516e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_906) {
  s21_decimal check = {{0x401efb, 0, 0, 0x80020000}};
  float number = -4.20223516e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_907) {
  s21_decimal check = {{0x3b7320, 0, 0, 0x160000}};
  float number = 3.89609586e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_908) {
  s21_decimal check = {{0x3b7320, 0, 0, 0x80160000}};
  float number = -3.89609586e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_909) {
  s21_decimal check = {{0x515, 0, 0, 0x1c0000}};
  float number = 1.30094713e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_910) {
  s21_decimal check = {{0x515, 0, 0, 0x801c0000}};
  float number = -1.30094713e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_911) {
  s21_decimal check = {{0x38021, 0, 0, 0x1c0000}};
  float number = 2.29408719e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_912) {
  s21_decimal check = {{0x38021, 0, 0, 0x801c0000}};
  float number = -2.29408719e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_913) {
  s21_decimal check = {{0x94871f, 0, 0, 0xa0000}};
  float number = 9.73391929e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_914) {
  s21_decimal check = {{0x94871f, 0, 0, 0x800a0000}};
  float number = -9.73391929e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_915) {
  s21_decimal check = {{0x39e6670, 0, 0, 0}};
  float number = 6.07125560e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_916) {
  s21_decimal check = {{0x39e6670, 0, 0, 0x80000000}};
  float number = -6.07125560e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_917) {
  s21_decimal check = {{0xf73a11a0, 0x58, 0, 0}};
  float number = 3.82104928e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_918) {
  s21_decimal check = {{0xf73a11a0, 0x58, 0, 0x80000000}};
  float number = -3.82104928e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_919) {
  s21_decimal check = {{0x8cba80, 0, 0, 0x90000}};
  float number = 9.22278408e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_920) {
  s21_decimal check = {{0x8cba80, 0, 0, 0x80090000}};
  float number = -9.22278408e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_921) {
  s21_decimal check = {{0x30b67d0, 0, 0, 0}};
  float number = 5.10791240e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_922) {
  s21_decimal check = {{0x30b67d0, 0, 0, 0x80000000}};
  float number = -5.10791240e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_923) {
  s21_decimal check = {{0x11bf40, 0, 0, 0x150000}};
  float number = 1.16307216e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_924) {
  s21_decimal check = {{0x11bf40, 0, 0, 0x80150000}};
  float number = -1.16307216e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_925) {
  s21_decimal check = {{0x4e1c9b, 0, 0, 0xb0000}};
  float number = 5.11913131e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_926) {
  s21_decimal check = {{0x4e1c9b, 0, 0, 0x800b0000}};
  float number = -5.11913131e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_927) {
  s21_decimal check = {{0x3635a4, 0, 0, 0x190000}};
  float number = 3.55267611e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_928) {
  s21_decimal check = {{0x3635a4, 0, 0, 0x80190000}};
  float number = -3.55267611e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_929) {
  s21_decimal check = {{0x244345, 0, 0, 0xd0000}};
  float number = 2.37651690e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_930) {
  s21_decimal check = {{0x244345, 0, 0, 0x800d0000}};
  float number = -2.37651690e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_931) {
  s21_decimal check = {{0x145d44, 0, 0, 0x20000}};
  float number = 1.33459590e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_932) {
  s21_decimal check = {{0x145d44, 0, 0, 0x80020000}};
  float number = -1.33459590e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_933) {
  s21_decimal check = {{0x15e7ad, 0, 0, 0x110000}};
  float number = 1.43556538e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_934) {
  s21_decimal check = {{0x15e7ad, 0, 0, 0x80110000}};
  float number = -1.43556538e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_935) {
  s21_decimal check = {{0xa16eb380, 0x37f2, 0, 0}};
  float number = 6.15152269e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_936) {
  s21_decimal check = {{0xa16eb380, 0x37f2, 0, 0x80000000}};
  float number = -6.15152269e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_937) {
  s21_decimal check = {{0xab2572a0, 0x3, 0, 0}};
  float number = 1.57562583e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_938) {
  s21_decimal check = {{0xab2572a0, 0x3, 0, 0x80000000}};
  float number = -1.57562583e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_939) {
  s21_decimal check = {{0x132104, 0, 0, 0x20000}};
  float number = 1.25363623e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_940) {
  s21_decimal check = {{0x132104, 0, 0, 0x80020000}};
  float number = -1.25363623e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_941) {
  s21_decimal check = {{0x3c9aaa40, 0x705, 0, 0}};
  float number = 7.71907283e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_942) {
  s21_decimal check = {{0x3c9aaa40, 0x705, 0, 0x80000000}};
  float number = -7.71907283e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_943) {
  s21_decimal check = {{0x71bf0200, 0x588fd, 0, 0}};
  float number = 1.55799670e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_944) {
  s21_decimal check = {{0x71bf0200, 0x588fd, 0, 0x80000000}};
  float number = -1.55799670e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_945) {
  s21_decimal check = {{0x9076ea, 0, 0, 0x100000}};
  float number = 9.46762557e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_946) {
  s21_decimal check = {{0x9076ea, 0, 0, 0x80100000}};
  float number = -9.46762557e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_947) {
  s21_decimal check = {{0x3c3d0000, 0x822e308, 0x1ab, 0}};
  float number = 7.87734575e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_948) {
  s21_decimal check = {{0x3c3d0000, 0x822e308, 0x1ab, 0x80000000}};
  float number = -7.87734575e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_949) {
  s21_decimal check = {{0x271173, 0, 0, 0x90000}};
  float number = 2.56037107e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_950) {
  s21_decimal check = {{0x271173, 0, 0, 0x80090000}};
  float number = -2.56037107e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_951) {
  s21_decimal check = {{0x2ffcad, 0, 0, 0x30000}};
  float number = 3.14487744e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_952) {
  s21_decimal check = {{0x2ffcad, 0, 0, 0x80030000}};
  float number = -3.14487744e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_953) {
  s21_decimal check = {{0x28a28c, 0, 0, 0x60000}};
  float number = 2.66305232e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_954) {
  s21_decimal check = {{0x28a28c, 0, 0, 0x80060000}};
  float number = -2.66305232e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_955) {
  s21_decimal check = {{0x158004, 0, 0, 0xc0000}};
  float number = 1.40902762e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_956) {
  s21_decimal check = {{0x158004, 0, 0, 0x800c0000}};
  float number = -1.40902762e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_957) {
  s21_decimal check = {{0x88debd, 0, 0, 0x20000}};
  float number = 8.96991719e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_958) {
  s21_decimal check = {{0x88debd, 0, 0, 0x80020000}};
  float number = -8.96991719e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_959) {
  s21_decimal check = {{0x9e4b5f60, 0xb, 0, 0}};
  float number = 4.99003843e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_960) {
  s21_decimal check = {{0x9e4b5f60, 0xb, 0, 0x80000000}};
  float number = -4.99003843e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_961) {
  s21_decimal check = {{0x35fa3a, 0, 0, 0x120000}};
  float number = 3.53746611e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_962) {
  s21_decimal check = {{0x35fa3a, 0, 0, 0x80120000}};
  float number = -3.53746611e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_965) {
  s21_decimal check = {{0x2fd3, 0, 0, 0x1c0000}};
  float number = 1.22431489e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_966) {
  s21_decimal check = {{0x2fd3, 0, 0, 0x801c0000}};
  float number = -1.22431489e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_967) {
  s21_decimal check = {{0x610c8000, 0x4f8da353, 0xc5, 0}};
  float number = 3.63974054e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_968) {
  s21_decimal check = {{0x610c8000, 0x4f8da353, 0xc5, 0x80000000}};
  float number = -3.63974054e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_969) {
  s21_decimal check = {{0x296df, 0, 0, 0xf0000}};
  float number = 1.69694953e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_970) {
  s21_decimal check = {{0x296df, 0, 0, 0x800f0000}};
  float number = -1.69694953e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_971) {
  s21_decimal check = {{0x31bebc, 0, 0, 0x70000}};
  float number = 3.26009154e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_972) {
  s21_decimal check = {{0x31bebc, 0, 0, 0x80070000}};
  float number = -3.26009154e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_973) {
  s21_decimal check = {{0x1030fc, 0, 0, 0x190000}};
  float number = 1.06111569e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_974) {
  s21_decimal check = {{0x1030fc, 0, 0, 0x80190000}};
  float number = -1.06111569e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_975) {
  s21_decimal check = {{0x22efe0, 0, 0, 0xd0000}};
  float number = 2.28963174e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_976) {
  s21_decimal check = {{0x22efe0, 0, 0, 0x800d0000}};
  float number = -2.28963174e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_977) {
  s21_decimal check = {{0xd7f95800, 0x3314fc, 0, 0}};
  float number = 1.43782985e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_978) {
  s21_decimal check = {{0xd7f95800, 0x3314fc, 0, 0x80000000}};
  float number = -1.43782985e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_979) {
  s21_decimal check = {{0x2339105c, 0, 0, 0}};
  float number = 5.90942336e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_980) {
  s21_decimal check = {{0x2339105c, 0, 0, 0x80000000}};
  float number = -5.90942336e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_981) {
  s21_decimal check = {{0x965e0000, 0x582f0288, 0xc10, 0}};
  float number = 5.69699048e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_982) {
  s21_decimal check = {{0x965e0000, 0x582f0288, 0xc10, 0x80000000}};
  float number = -5.69699048e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_983) {
  s21_decimal check = {{0x328837, 0, 0, 0xd0000}};
  float number = 3.31167087e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_984) {
  s21_decimal check = {{0x328837, 0, 0, 0x800d0000}};
  float number = -3.31167087e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_985) {
  s21_decimal check = {{0x3f7a58, 0, 0, 0x110000}};
  float number = 4.16008825e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_986) {
  s21_decimal check = {{0x3f7a58, 0, 0, 0x80110000}};
  float number = -4.16008825e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_987) {
  s21_decimal check = {{0x1d11ff00, 0x2093, 0, 0}};
  float number = 3.58162230e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_988) {
  s21_decimal check = {{0x1d11ff00, 0x2093, 0, 0x80000000}};
  float number = -3.58162230e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_989) {
  s21_decimal check = {{0x656a78, 0, 0, 0x10000}};
  float number = 6.64639188e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_990) {
  s21_decimal check = {{0x656a78, 0, 0, 0x80010000}};
  float number = -6.64639188e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_991) {
  s21_decimal check = {{0x139f71, 0, 0, 0x180000}};
  float number = 1.28600095e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_992) {
  s21_decimal check = {{0x139f71, 0, 0, 0x80180000}};
  float number = -1.28600095e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_993) {
  s21_decimal check = {{0x27ce25, 0, 0, 0x10000}};
  float number = 2.60867656e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_994) {
  s21_decimal check = {{0x27ce25, 0, 0, 0x80010000}};
  float number = -2.60867656e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_995) {
  s21_decimal check = {{0xcdc2bf00, 0x1527, 0, 0}};
  float number = 2.32606977e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_996) {
  s21_decimal check = {{0xcdc2bf00, 0x1527, 0, 0x80000000}};
  float number = -2.32606977e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_997) {
  s21_decimal check = {{0x13df82, 0, 0, 0x1c0000}};
  float number = 1.30240166e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_998) {
  s21_decimal check = {{0x13df82, 0, 0, 0x801c0000}};
  float number = -1.30240166e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_999) {
  s21_decimal check = {{0x105d00, 0, 0, 0xa0000}};
  float number = 1.07238448e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1000) {
  s21_decimal check = {{0x105d00, 0, 0, 0x800a0000}};
  float number = -1.07238448e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1001) {
  s21_decimal check = {{0x4277a000, 0xa8340119, 0x4, 0}};
  float number = 8.59072888e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1002) {
  s21_decimal check = {{0x4277a000, 0xa8340119, 0x4, 0x80000000}};
  float number = -8.59072888e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1003) {
  s21_decimal check = {{0x14d25d, 0, 0, 0xe0000}};
  float number = 1.36457290e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1004) {
  s21_decimal check = {{0x14d25d, 0, 0, 0x800e0000}};
  float number = -1.36457290e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1005) {
  s21_decimal check = {{0xfcde800, 0x526f, 0, 0}};
  float number = 9.06369633e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1006) {
  s21_decimal check = {{0xfcde800, 0x526f, 0, 0x80000000}};
  float number = -9.06369633e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1007) {
  s21_decimal check = {{0x50e212, 0, 0, 0x20000}};
  float number = 5.30075391e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1008) {
  s21_decimal check = {{0x50e212, 0, 0, 0x80020000}};
  float number = -5.30075391e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1009) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 2.23378672e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1010) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -2.23378672e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1011) {
  s21_decimal check = {{0x4f214000, 0xf3f1634c, 0, 0}};
  float number = 1.75779386e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1012) {
  s21_decimal check = {{0x4f214000, 0xf3f1634c, 0, 0x80000000}};
  float number = -1.75779386e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1013) {
  s21_decimal check = {{0x18ba05, 0, 0, 0xb0000}};
  float number = 1.62048545e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1014) {
  s21_decimal check = {{0x18ba05, 0, 0, 0x800b0000}};
  float number = -1.62048545e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1015) {
  s21_decimal check = {{0x51d26b, 0, 0, 0x60000}};
  float number = 5.36228323e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1016) {
  s21_decimal check = {{0x51d26b, 0, 0, 0x80060000}};
  float number = -5.36228323e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1017) {
  s21_decimal check = {{0x74ff75, 0, 0, 0x20000}};
  float number = 7.66757344e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1018) {
  s21_decimal check = {{0x74ff75, 0, 0, 0x80020000}};
  float number = -7.66757344e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1019) {
  s21_decimal check = {{0x66f29, 0, 0, 0x100000}};
  float number = 4.21673009e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1020) {
  s21_decimal check = {{0x66f29, 0, 0, 0x80100000}};
  float number = -4.21673009e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1021) {
  s21_decimal check = {{0x20d4db, 0, 0, 0xc0000}};
  float number = 2.15164255e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1022) {
  s21_decimal check = {{0x20d4db, 0, 0, 0x800c0000}};
  float number = -2.15164255e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1023) {
  s21_decimal check = {{0x4bb70000, 0xe05e5d93, 0x13, 0}};
  float number = 3.66655567e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1024) {
  s21_decimal check = {{0x4bb70000, 0xe05e5d93, 0x13, 0x80000000}};
  float number = -3.66655567e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1025) {
  s21_decimal check = {{0xf40b4000, 0xabb1d791, 0x12, 0}};
  float number = 3.44413309e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1026) {
  s21_decimal check = {{0xf40b4000, 0xabb1d791, 0x12, 0x80000000}};
  float number = -3.44413309e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1027) {
  s21_decimal check = {{0xcfa01000, 0x6a7fa45a, 0, 0}};
  float number = 7.67403261e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1028) {
  s21_decimal check = {{0xcfa01000, 0x6a7fa45a, 0, 0x80000000}};
  float number = -7.67403261e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1031) {
  s21_decimal check = {{0x155918, 0, 0, 0x80000}};
  float number = 1.39906397e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1032) {
  s21_decimal check = {{0x155918, 0, 0, 0x80080000}};
  float number = -1.39906397e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1035) {
  s21_decimal check = {{0x21df8, 0, 0, 0xd0000}};
  float number = 1.38743976e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1036) {
  s21_decimal check = {{0x21df8, 0, 0, 0x800d0000}};
  float number = -1.38743976e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1037) {
  s21_decimal check = {{0x3d05cbb0, 0, 0, 0}};
  float number = 1.02378995e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1038) {
  s21_decimal check = {{0x3d05cbb0, 0, 0, 0x80000000}};
  float number = -1.02378995e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1039) {
  s21_decimal check = {{0x4e03cc00, 0x2d, 0, 0}};
  float number = 1.94582413e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1040) {
  s21_decimal check = {{0x4e03cc00, 0x2d, 0, 0x80000000}};
  float number = -1.94582413e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1041) {
  s21_decimal check = {{0x5ebb03, 0, 0, 0x160000}};
  float number = 6.20825917e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1042) {
  s21_decimal check = {{0x5ebb03, 0, 0, 0x80160000}};
  float number = -6.20825917e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1043) {
  s21_decimal check = {{0x2f799580, 0x38ea, 0, 0}};
  float number = 6.25784662e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1044) {
  s21_decimal check = {{0x2f799580, 0x38ea, 0, 0x80000000}};
  float number = -6.25784662e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1045) {
  s21_decimal check = {{0xc7ba7400, 0xf06c1, 0, 0}};
  float number = 4.22955387e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1046) {
  s21_decimal check = {{0xc7ba7400, 0xf06c1, 0, 0x80000000}};
  float number = -4.22955387e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1047) {
  s21_decimal check = {{0x91d0f000, 0x5d6d51d6, 0, 0}};
  float number = 6.73212718e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1048) {
  s21_decimal check = {{0x91d0f000, 0x5d6d51d6, 0, 0x80000000}};
  float number = -6.73212718e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1049) {
  s21_decimal check = {{0x10acff, 0, 0, 0x70000}};
  float number = 1.09286256e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1050) {
  s21_decimal check = {{0x10acff, 0, 0, 0x80070000}};
  float number = -1.09286256e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1051) {
  s21_decimal check = {{0x12123f, 0, 0, 0x190000}};
  float number = 1.18431933e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1052) {
  s21_decimal check = {{0x12123f, 0, 0, 0x80190000}};
  float number = -1.18431933e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1053) {
  s21_decimal check = {{0x3a4ef7, 0, 0, 0x130000}};
  float number = 3.82130308e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1054) {
  s21_decimal check = {{0x3a4ef7, 0, 0, 0x80130000}};
  float number = -3.82130308e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1055) {
  s21_decimal check = {{0x2828fd, 0, 0, 0xb0000}};
  float number = 2.63193288e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1056) {
  s21_decimal check = {{0x2828fd, 0, 0, 0x800b0000}};
  float number = -2.63193288e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1057) {
  s21_decimal check = {{0x48cea, 0, 0, 0x1c0000}};
  float number = 2.98218484e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1058) {
  s21_decimal check = {{0x48cea, 0, 0, 0x801c0000}};
  float number = -2.98218484e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1059) {
  s21_decimal check = {{0x323a8, 0, 0, 0x1c0000}};
  float number = 2.05735713e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1060) {
  s21_decimal check = {{0x323a8, 0, 0, 0x801c0000}};
  float number = -2.05735713e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1061) {
  s21_decimal check = {{0x91c61400, 0x28b0ab, 0, 0}};
  float number = 1.14532465e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1062) {
  s21_decimal check = {{0x91c61400, 0x28b0ab, 0, 0x80000000}};
  float number = -1.14532465e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1063) {
  s21_decimal check = {{0x115b03, 0, 0, 0x10000}};
  float number = 1.13741125e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1064) {
  s21_decimal check = {{0x115b03, 0, 0, 0x80010000}};
  float number = -1.13741125e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1065) {
  s21_decimal check = {{0xff160, 0, 0, 0x1c0000}};
  float number = 1.04483220e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1066) {
  s21_decimal check = {{0xff160, 0, 0, 0x801c0000}};
  float number = -1.04483220e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1067) {
  s21_decimal check = {{0x5d000000, 0x92140d9d, 0x15683d5, 0}};
  float number = 4.14075245e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1068) {
  s21_decimal check = {{0x5d000000, 0x92140d9d, 0x15683d5, 0x80000000}};
  float number = -4.14075245e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1069) {
  s21_decimal check = {{0x103a7824, 0, 0, 0}};
  float number = 2.72267296e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1070) {
  s21_decimal check = {{0x103a7824, 0, 0, 0x80000000}};
  float number = -2.72267296e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1071) {
  s21_decimal check = {{0x28455800, 0x75ba, 0, 0}};
  float number = 1.29442395e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1072) {
  s21_decimal check = {{0x28455800, 0x75ba, 0, 0x80000000}};
  float number = -1.29442395e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1073) {
  s21_decimal check = {{0xc4, 0, 0, 0x1b0000}};
  float number = 1.96034819e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1074) {
  s21_decimal check = {{0xc4, 0, 0, 0x801b0000}};
  float number = -1.96034819e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1075) {
  s21_decimal check = {{0x11a352, 0, 0, 0x110000}};
  float number = 1.15592232e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1076) {
  s21_decimal check = {{0x11a352, 0, 0, 0x80110000}};
  float number = -1.15592232e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1077) {
  s21_decimal check = {{0x4afd2610, 0x9, 0, 0}};
  float number = 3.99128125e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1078) {
  s21_decimal check = {{0x4afd2610, 0x9, 0, 0x80000000}};
  float number = -3.99128125e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1079) {
  s21_decimal check = {{0x8de603, 0, 0, 0x120000}};
  float number = 9.29945877e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1080) {
  s21_decimal check = {{0x8de603, 0, 0, 0x80120000}};
  float number = -9.29945877e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1081) {
  s21_decimal check = {{0xc2eb0000, 0xc2456fa5, 0x3ef, 0}};
  float number = 1.85898651e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1082) {
  s21_decimal check = {{0xc2eb0000, 0xc2456fa5, 0x3ef, 0x80000000}};
  float number = -1.85898651e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1083) {
  s21_decimal check = {{0x1002c5, 0, 0, 0x80000}};
  float number = 1.04928548e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1084) {
  s21_decimal check = {{0x1002c5, 0, 0, 0x80080000}};
  float number = -1.04928548e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1085) {
  s21_decimal check = {{0x17a193, 0, 0, 0}};
  float number = 1.54869088e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1086) {
  s21_decimal check = {{0x17a193, 0, 0, 0x80000000}};
  float number = -1.54869088e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1087) {
  s21_decimal check = {{0x34016c, 0, 0, 0x120000}};
  float number = 3.40823615e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1088) {
  s21_decimal check = {{0x34016c, 0, 0, 0x80120000}};
  float number = -3.40823615e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1089) {
  s21_decimal check = {{0x6dca, 0, 0, 0x1c0000}};
  float number = 2.81055916e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1090) {
  s21_decimal check = {{0x6dca, 0, 0, 0x801c0000}};
  float number = -2.81055916e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1091) {
  s21_decimal check = {{0xd7b4000, 0xf7c0ca6b, 0x7, 0}};
  float number = 1.46979724e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1092) {
  s21_decimal check = {{0xd7b4000, 0xf7c0ca6b, 0x7, 0x80000000}};
  float number = -1.46979724e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1093) {
  s21_decimal check = {{0x45380f, 0, 0, 0x100000}};
  float number = 4.53633492e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1094) {
  s21_decimal check = {{0x45380f, 0, 0, 0x80100000}};
  float number = -4.53633492e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1095) {
  s21_decimal check = {{0x296671, 0, 0, 0x120000}};
  float number = 2.71320141e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1096) {
  s21_decimal check = {{0x296671, 0, 0, 0x80120000}};
  float number = -2.71320141e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1097) {
  s21_decimal check = {{0x6f62f4, 0, 0, 0x30000}};
  float number = 7.29982764e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1098) {
  s21_decimal check = {{0x6f62f4, 0, 0, 0x80030000}};
  float number = -7.29982764e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1099) {
  s21_decimal check = {{0x65d80000, 0xc39e3c94, 0x26801f, 0}};
  float number = 4.65442251e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1100) {
  s21_decimal check = {{0x65d80000, 0xc39e3c94, 0x26801f, 0x80000000}};
  float number = -4.65442251e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1101) {
  s21_decimal check = {{0x7, 0, 0, 0x1c0000}};
  float number = 6.67746875e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1102) {
  s21_decimal check = {{0x7, 0, 0, 0x801c0000}};
  float number = -6.67746875e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1103) {
  s21_decimal check = {{0x77d, 0, 0, 0x1c0000}};
  float number = 1.91731719e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1104) {
  s21_decimal check = {{0x77d, 0, 0, 0x801c0000}};
  float number = -1.91731719e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1105) {
  s21_decimal check = {{0x19680000, 0x7334b6c1, 0x248, 0}};
  float number = 1.07811953e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1106) {
  s21_decimal check = {{0x19680000, 0x7334b6c1, 0x248, 0x80000000}};
  float number = -1.07811953e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1107) {
  s21_decimal check = {{0x34322c, 0, 0, 0x160000}};
  float number = 3.42071582e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1108) {
  s21_decimal check = {{0x34322c, 0, 0, 0x80160000}};
  float number = -3.42071582e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1109) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 4.38333952e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1110) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -4.38333952e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1111) {
  s21_decimal check = {{0x2e860000, 0x4d6efc4c, 0x8e53, 0}};
  float number = 6.72112669e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1112) {
  s21_decimal check = {{0x2e860000, 0x4d6efc4c, 0x8e53, 0x80000000}};
  float number = -6.72112669e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1113) {
  s21_decimal check = {{0x30e0d3, 0, 0, 0xc0000}};
  float number = 3.20328286e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1114) {
  s21_decimal check = {{0x30e0d3, 0, 0, 0x800c0000}};
  float number = -3.20328286e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1115) {
  s21_decimal check = {{0xc836c300, 0x637, 0, 0}};
  float number = 6.83665156e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1116) {
  s21_decimal check = {{0xc836c300, 0x637, 0, 0x80000000}};
  float number = -6.83665156e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1117) {
  s21_decimal check = {{0x23de0000, 0xe70b284e, 0x330c, 0}};
  float number = 2.41078679e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1118) {
  s21_decimal check = {{0x23de0000, 0xe70b284e, 0x330c, 0x80000000}};
  float number = -2.41078679e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1119) {
  s21_decimal check = {{0x6f5c77f8, 0, 0, 0}};
  float number = 1.86833126e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1120) {
  s21_decimal check = {{0x6f5c77f8, 0, 0, 0x80000000}};
  float number = -1.86833126e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1121) {
  s21_decimal check = {{0x46fe05, 0, 0, 0xd0000}};
  float number = 4.65254857e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1122) {
  s21_decimal check = {{0x46fe05, 0, 0, 0x800d0000}};
  float number = -4.65254857e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1123) {
  s21_decimal check = {{0x999e7800, 0x440e6f1, 0, 0}};
  float number = 3.06498727e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1124) {
  s21_decimal check = {{0x999e7800, 0x440e6f1, 0, 0x80000000}};
  float number = -3.06498727e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1125) {
  s21_decimal check = {{0x1a4b57, 0, 0, 0x150000}};
  float number = 1.72322299e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1126) {
  s21_decimal check = {{0x1a4b57, 0, 0, 0x80150000}};
  float number = -1.72322299e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1127) {
  s21_decimal check = {{0x5f55e, 0, 0, 0x100000}};
  float number = 3.90493957e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1128) {
  s21_decimal check = {{0x5f55e, 0, 0, 0x80100000}};
  float number = -3.90493957e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1129) {
  s21_decimal check = {{0x1b0d05, 0, 0, 0xf0000}};
  float number = 1.77280512e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1130) {
  s21_decimal check = {{0x1b0d05, 0, 0, 0x800f0000}};
  float number = -1.77280512e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1131) {
  s21_decimal check = {{0x11e67d8, 0, 0, 0}};
  float number = 1.87698760e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1132) {
  s21_decimal check = {{0x11e67d8, 0, 0, 0x80000000}};
  float number = -1.87698760e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1133) {
  s21_decimal check = {{0x63be93, 0, 0, 0x20000}};
  float number = 6.53685078e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1134) {
  s21_decimal check = {{0x63be93, 0, 0, 0x80020000}};
  float number = -6.53685078e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1135) {
  s21_decimal check = {{0x88961720, 0x63, 0, 0}};
  float number = 4.27493327e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1136) {
  s21_decimal check = {{0x88961720, 0x63, 0, 0x80000000}};
  float number = -4.27493327e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1137) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.38941413e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1138) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.38941413e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1139) {
  s21_decimal check = {{0x778, 0, 0, 0x1c0000}};
  float number = 1.91158673e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1140) {
  s21_decimal check = {{0x778, 0, 0, 0x801c0000}};
  float number = -1.91158673e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1141) {
  s21_decimal check = {{0x36ece9, 0, 0, 0x160000}};
  float number = 3.59959330e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1142) {
  s21_decimal check = {{0x36ece9, 0, 0, 0x80160000}};
  float number = -3.59959330e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1143) {
  s21_decimal check = {{0x67583, 0, 0, 0x60000}};
  float number = 4.23298985e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1144) {
  s21_decimal check = {{0x67583, 0, 0, 0x80060000}};
  float number = -4.23298985e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1145) {
  s21_decimal check = {{0x88126b, 0, 0, 0x80000}};
  float number = 8.91761109e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1146) {
  s21_decimal check = {{0x88126b, 0, 0, 0x80080000}};
  float number = -8.91761109e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1147) {
  s21_decimal check = {{0x59ac2a, 0, 0, 0x190000}};
  float number = 5.87677807e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1148) {
  s21_decimal check = {{0x59ac2a, 0, 0, 0x80190000}};
  float number = -5.87677807e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1149) {
  s21_decimal check = {{0x963d0d, 0, 0, 0}};
  float number = 9.84602900e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1150) {
  s21_decimal check = {{0x963d0d, 0, 0, 0x80000000}};
  float number = -9.84602900e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1151) {
  s21_decimal check = {{0x590e82, 0, 0, 0x20000}};
  float number = 5.83641836e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1152) {
  s21_decimal check = {{0x590e82, 0, 0, 0x80020000}};
  float number = -5.83641836e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1153) {
  s21_decimal check = {{0x94c00000, 0xda419a4, 0x107236, 0}};
  float number = 1.98821590e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1154) {
  s21_decimal check = {{0x94c00000, 0xda419a4, 0x107236, 0x80000000}};
  float number = -1.98821590e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1155) {
  s21_decimal check = {{0x6014c9, 0, 0, 0x120000}};
  float number = 6.29677690e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1156) {
  s21_decimal check = {{0x6014c9, 0, 0, 0x80120000}};
  float number = -6.29677690e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1157) {
  s21_decimal check = {{0x252dd6, 0, 0, 0x20000}};
  float number = 2.43656602e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1158) {
  s21_decimal check = {{0x252dd6, 0, 0, 0x80020000}};
  float number = -2.43656602e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1159) {
  s21_decimal check = {{0x6e7ba1, 0, 0, 0xa0000}};
  float number = 7.24060868e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1160) {
  s21_decimal check = {{0x6e7ba1, 0, 0, 0x800a0000}};
  float number = -7.24060868e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1161) {
  s21_decimal check = {{0x1dec84f8, 0, 0, 0}};
  float number = 5.02039808e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1162) {
  s21_decimal check = {{0x1dec84f8, 0, 0, 0x80000000}};
  float number = -5.02039808e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1163) {
  s21_decimal check = {{0xec7e5c00, 0xf527a2, 0, 0}};
  float number = 6.90049460e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1164) {
  s21_decimal check = {{0xec7e5c00, 0xf527a2, 0, 0x80000000}};
  float number = -6.90049460e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1165) {
  s21_decimal check = {{0x6acfa0c0, 0, 0, 0}};
  float number = 1.79199168e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1166) {
  s21_decimal check = {{0x6acfa0c0, 0, 0, 0x80000000}};
  float number = -1.79199168e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1167) {
  s21_decimal check = {{0x97b00000, 0x6fe84883, 0x34caad, 0}};
  float number = 6.38212565e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1168) {
  s21_decimal check = {{0x97b00000, 0x6fe84883, 0x34caad, 0x80000000}};
  float number = -6.38212565e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1169) {
  s21_decimal check = {{0x8f150000, 0x44b9b379, 0x341, 0}};
  float number = 1.53710873e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1170) {
  s21_decimal check = {{0x8f150000, 0x44b9b379, 0x341, 0x80000000}};
  float number = -1.53710873e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1171) {
  s21_decimal check = {{0x2caaf0, 0, 0, 0x40000}};
  float number = 2.92734375e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1172) {
  s21_decimal check = {{0x2caaf0, 0, 0, 0x80040000}};
  float number = -2.92734375e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1173) {
  s21_decimal check = {{0x284ac7, 0, 0, 0x60000}};
  float number = 2.64058328e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1174) {
  s21_decimal check = {{0x284ac7, 0, 0, 0x80060000}};
  float number = -2.64058328e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1175) {
  s21_decimal check = {{0x192a6a00, 0x25, 0, 0}};
  float number = 1.59336006e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1176) {
  s21_decimal check = {{0x192a6a00, 0x25, 0, 0x80000000}};
  float number = -1.59336006e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1177) {
  s21_decimal check = {{0x6fd6ce00, 0xfd4d9, 0, 0}};
  float number = 4.45615473e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1178) {
  s21_decimal check = {{0x6fd6ce00, 0xfd4d9, 0, 0x80000000}};
  float number = -4.45615473e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1179) {
  s21_decimal check = {{0x1fcf01, 0, 0, 0x40000}};
  float number = 2.08460907e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1180) {
  s21_decimal check = {{0x1fcf01, 0, 0, 0x80040000}};
  float number = -2.08460907e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1181) {
  s21_decimal check = {{0x3e697a, 0, 0, 0x190000}};
  float number = 4.09023416e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1182) {
  s21_decimal check = {{0x3e697a, 0, 0, 0x80190000}};
  float number = -4.09023416e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1183) {
  s21_decimal check = {{0x6e65d1, 0, 0, 0x1b0000}};
  float number = 7.23502489e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1184) {
  s21_decimal check = {{0x6e65d1, 0, 0, 0x801b0000}};
  float number = -7.23502489e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1185) {
  s21_decimal check = {{0x48d401, 0, 0, 0x170000}};
  float number = 4.77286522e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1186) {
  s21_decimal check = {{0x48d401, 0, 0, 0x80170000}};
  float number = -4.77286522e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1187) {
  s21_decimal check = {{0xf8176000, 0x25d8d6f5, 0x1, 0}};
  float number = 2.11739089e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1188) {
  s21_decimal check = {{0xf8176000, 0x25d8d6f5, 0x1, 0x80000000}};
  float number = -2.11739089e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1189) {
  s21_decimal check = {{0xcdb26180, 0x10d8, 0, 0}};
  float number = 1.85233530e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1190) {
  s21_decimal check = {{0xcdb26180, 0x10d8, 0, 0x80000000}};
  float number = -1.85233530e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1191) {
  s21_decimal check = {{0xfb990000, 0x24e59827, 0x343, 0}};
  float number = 1.54056884e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1192) {
  s21_decimal check = {{0xfb990000, 0x24e59827, 0x343, 0x80000000}};
  float number = -1.54056884e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1193) {
  s21_decimal check = {{0x248, 0, 0, 0x1c0000}};
  float number = 5.83757933e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1194) {
  s21_decimal check = {{0x248, 0, 0, 0x801c0000}};
  float number = -5.83757933e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1195) {
  s21_decimal check = {{0x1e12d5, 0, 0, 0x1c0000}};
  float number = 1.97090056e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1196) {
  s21_decimal check = {{0x1e12d5, 0, 0, 0x801c0000}};
  float number = -1.97090056e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1197) {
  s21_decimal check = {{0x4f14dc00, 0x3648f, 0, 0}};
  float number = 9.54991615e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1198) {
  s21_decimal check = {{0x4f14dc00, 0x3648f, 0, 0x80000000}};
  float number = -9.54991615e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1199) {
  s21_decimal check = {{0x38a767, 0, 0, 0x140000}};
  float number = 3.71287067e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1200) {
  s21_decimal check = {{0x38a767, 0, 0, 0x80140000}};
  float number = -3.71287067e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1201) {
  s21_decimal check = {{0x1bd77, 0, 0, 0x1c0000}};
  float number = 1.14038529e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1202) {
  s21_decimal check = {{0x1bd77, 0, 0, 0x801c0000}};
  float number = -1.14038529e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1203) {
  s21_decimal check = {{0x29b32b, 0, 0, 0xa0000}};
  float number = 2.73284328e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1204) {
  s21_decimal check = {{0x29b32b, 0, 0, 0x800a0000}};
  float number = -2.73284328e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1205) {
  s21_decimal check = {{0x1dc1a4, 0, 0, 0x1c0000}};
  float number = 1.95011591e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1206) {
  s21_decimal check = {{0x1dc1a4, 0, 0, 0x801c0000}};
  float number = -1.95011591e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1207) {
  s21_decimal check = {{0x3af678, 0, 0, 0x100000}};
  float number = 3.86418425e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1208) {
  s21_decimal check = {{0x3af678, 0, 0, 0x80100000}};
  float number = -3.86418425e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1209) {
  s21_decimal check = {{0x147115, 0, 0, 0x30000}};
  float number = 1.33966907e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1210) {
  s21_decimal check = {{0x147115, 0, 0, 0x80030000}};
  float number = -1.33966907e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1211) {
  s21_decimal check = {{0x17f6c1, 0, 0, 0xf0000}};
  float number = 1.57049718e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1212) {
  s21_decimal check = {{0x17f6c1, 0, 0, 0x800f0000}};
  float number = -1.57049718e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1213) {
  s21_decimal check = {{0x53f219, 0, 0, 0xd0000}};
  float number = 5.50146524e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1214) {
  s21_decimal check = {{0x53f219, 0, 0, 0x800d0000}};
  float number = -5.50146524e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1215) {
  s21_decimal check = {{0x1d8b45, 0, 0, 0x40000}};
  float number = 1.93619705e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1216) {
  s21_decimal check = {{0x1d8b45, 0, 0, 0x80040000}};
  float number = -1.93619705e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1217) {
  s21_decimal check = {{0x7f3faf, 0, 0, 0xc0000}};
  float number = 8.33937520e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1218) {
  s21_decimal check = {{0x7f3faf, 0, 0, 0x800c0000}};
  float number = -8.33937520e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1219) {
  s21_decimal check = {{0x6fb692, 0, 0, 0x150000}};
  float number = 7.32123356e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1220) {
  s21_decimal check = {{0x6fb692, 0, 0, 0x80150000}};
  float number = -7.32123356e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1221) {
  s21_decimal check = {{0xc300a400, 0x73db93, 0, 0}};
  float number = 3.26110489e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1222) {
  s21_decimal check = {{0xc300a400, 0x73db93, 0, 0x80000000}};
  float number = -3.26110489e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1223) {
  s21_decimal check = {{0x67280000, 0x4bedfe47, 0x3598, 0}};
  float number = 2.53094841e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1224) {
  s21_decimal check = {{0x67280000, 0x4bedfe47, 0x3598, 0x80000000}};
  float number = -2.53094841e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1225) {
  s21_decimal check = {{0x19100000, 0x99bab743, 0xe5933b, 0}};
  float number = 2.77539344e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1226) {
  s21_decimal check = {{0x19100000, 0x99bab743, 0xe5933b, 0x80000000}};
  float number = -2.77539344e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1227) {
  s21_decimal check = {{0x28d3c, 0, 0, 0x110000}};
  float number = 1.67228015e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1228) {
  s21_decimal check = {{0x28d3c, 0, 0, 0x80110000}};
  float number = -1.67228015e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1229) {
  s21_decimal check = {{0x31c28000, 0x3312954c, 0, 0}};
  float number = 3.68016767e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1230) {
  s21_decimal check = {{0x31c28000, 0x3312954c, 0, 0x80000000}};
  float number = -3.68016767e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1231) {
  s21_decimal check = {{0x334ad7, 0, 0, 0xc0000}};
  float number = 3.36149537e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1232) {
  s21_decimal check = {{0x334ad7, 0, 0, 0x800c0000}};
  float number = -3.36149537e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1233) {
  s21_decimal check = {{0x34b00000, 0x4cf7afbf, 0x8f732d, 0}};
  float number = 1.73420258e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1234) {
  s21_decimal check = {{0x34b00000, 0x4cf7afbf, 0x8f732d, 0x80000000}};
  float number = -1.73420258e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1235) {
  s21_decimal check = {{0x20d9c, 0, 0, 0x1c0000}};
  float number = 1.34556352e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1236) {
  s21_decimal check = {{0x20d9c, 0, 0, 0x801c0000}};
  float number = -1.34556352e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1237) {
  s21_decimal check = {{0x3e78b, 0, 0, 0x140000}};
  float number = 2.55882978e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1238) {
  s21_decimal check = {{0x3e78b, 0, 0, 0x80140000}};
  float number = -2.55882978e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1239) {
  s21_decimal check = {{0x2f8fa5, 0, 0, 0}};
  float number = 3.11696475e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1240) {
  s21_decimal check = {{0x2f8fa5, 0, 0, 0x80000000}};
  float number = -3.11696475e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1241) {
  s21_decimal check = {{0xb3180000, 0x18104cfe, 0x61951, 0}};
  float number = 7.37311000e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1242) {
  s21_decimal check = {{0xb3180000, 0x18104cfe, 0x61951, 0x80000000}};
  float number = -7.37311000e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1243) {
  s21_decimal check = {{0xfa587a60, 0x31, 0, 0}};
  float number = 2.14653485e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1244) {
  s21_decimal check = {{0xfa587a60, 0x31, 0, 0x80000000}};
  float number = -2.14653485e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1245) {
  s21_decimal check = {{0x90b6dd80, 0x535c, 0, 0}};
  float number = 9.16570264e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1246) {
  s21_decimal check = {{0x90b6dd80, 0x535c, 0, 0x80000000}};
  float number = -9.16570264e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1247) {
  s21_decimal check = {{0x66414f, 0, 0, 0x130000}};
  float number = 6.70139129e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1248) {
  s21_decimal check = {{0x66414f, 0, 0, 0x80130000}};
  float number = -6.70139129e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1249) {
  s21_decimal check = {{0x1422e860, 0x6c, 0, 0}};
  float number = 4.64194306e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1250) {
  s21_decimal check = {{0x1422e860, 0x6c, 0, 0x80000000}};
  float number = -4.64194306e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1251) {
  s21_decimal check = {{0xab180000, 0x2ef185a0, 0x28f, 0}};
  float number = 1.20859973e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1252) {
  s21_decimal check = {{0xab180000, 0x2ef185a0, 0x28f, 0x80000000}};
  float number = -1.20859973e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1253) {
  s21_decimal check = {{0xdbb2c, 0, 0, 0x1c0000}};
  float number = 8.99884305e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1254) {
  s21_decimal check = {{0xdbb2c, 0, 0, 0x801c0000}};
  float number = -8.99884305e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1255) {
  s21_decimal check = {{0x1df53b, 0, 0, 0x90000}};
  float number = 1.96332252e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1256) {
  s21_decimal check = {{0x1df53b, 0, 0, 0x80090000}};
  float number = -1.96332252e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1257) {
  s21_decimal check = {{0x164ccc, 0, 0, 0x140000}};
  float number = 1.46145184e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1258) {
  s21_decimal check = {{0x164ccc, 0, 0, 0x80140000}};
  float number = -1.46145184e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1259) {
  s21_decimal check = {{0x319068, 0, 0, 0x40000}};
  float number = 3.24823212e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1260) {
  s21_decimal check = {{0x319068, 0, 0, 0x80040000}};
  float number = -3.24823212e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1261) {
  s21_decimal check = {{0x4e57cf, 0, 0, 0xf0000}};
  float number = 5.13428722e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1262) {
  s21_decimal check = {{0x4e57cf, 0, 0, 0x800f0000}};
  float number = -5.13428722e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1263) {
  s21_decimal check = {{0x3c90b320, 0, 0, 0}};
  float number = 1.01611616e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1264) {
  s21_decimal check = {{0x3c90b320, 0, 0, 0x80000000}};
  float number = -1.01611616e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1265) {
  s21_decimal check = {{0x64154c, 0, 0, 0xf0000}};
  float number = 6.55905241e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1266) {
  s21_decimal check = {{0x64154c, 0, 0, 0x800f0000}};
  float number = -6.55905241e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1267) {
  s21_decimal check = {{0x314bd5, 0, 0, 0x1b0000}};
  float number = 3.23067667e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1268) {
  s21_decimal check = {{0x314bd5, 0, 0, 0x801b0000}};
  float number = -3.23067667e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1269) {
  s21_decimal check = {{0x31295f, 0, 0, 0x190000}};
  float number = 3.22185504e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1270) {
  s21_decimal check = {{0x31295f, 0, 0, 0x80190000}};
  float number = -3.22185504e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1271) {
  s21_decimal check = {{0x30, 0, 0, 0x1c0000}};
  float number = 4.77281494e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1272) {
  s21_decimal check = {{0x30, 0, 0, 0x801c0000}};
  float number = -4.77281494e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1273) {
  s21_decimal check = {{0x1b7603, 0, 0, 0x60000}};
  float number = 1.79968286e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1274) {
  s21_decimal check = {{0x1b7603, 0, 0, 0x80060000}};
  float number = -1.79968286e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1275) {
  s21_decimal check = {{0x47c770, 0, 0, 0x1a0000}};
  float number = 4.70411217e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1276) {
  s21_decimal check = {{0x47c770, 0, 0, 0x801a0000}};
  float number = -4.70411217e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1277) {
  s21_decimal check = {{0x2e4e, 0, 0, 0x140000}};
  float number = 1.18540011e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1278) {
  s21_decimal check = {{0x2e4e, 0, 0, 0x80140000}};
  float number = -1.18540011e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1279) {
  s21_decimal check = {{0x4bd33b, 0, 0, 0xe0000}};
  float number = 4.96927477e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1280) {
  s21_decimal check = {{0x4bd33b, 0, 0, 0x800e0000}};
  float number = -4.96927477e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1281) {
  s21_decimal check = {{0x2be00000, 0x7008f9dd, 0x1b74b81, 0}};
  float number = 5.31075047e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1282) {
  s21_decimal check = {{0x2be00000, 0x7008f9dd, 0x1b74b81, 0x80000000}};
  float number = -5.31075047e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1283) {
  s21_decimal check = {{0xd3a4b400, 0x188ac6, 0, 0}};
  float number = 6.90798567e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1284) {
  s21_decimal check = {{0xd3a4b400, 0x188ac6, 0, 0x80000000}};
  float number = -6.90798567e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1285) {
  s21_decimal check = {{0xe7ad1, 0, 0, 0x1c0000}};
  float number = 9.48945206e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1286) {
  s21_decimal check = {{0xe7ad1, 0, 0, 0x801c0000}};
  float number = -9.48945206e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1287) {
  s21_decimal check = {{0x2f99c9, 0, 0, 0xf0000}};
  float number = 3.11956083e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1288) {
  s21_decimal check = {{0x2f99c9, 0, 0, 0x800f0000}};
  float number = -3.11956083e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1289) {
  s21_decimal check = {{0x30448a, 0, 0, 0x30000}};
  float number = 3.16327368e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1290) {
  s21_decimal check = {{0x30448a, 0, 0, 0x80030000}};
  float number = -3.16327368e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1291) {
  s21_decimal check = {{0x1f4e, 0, 0, 0x1c0000}};
  float number = 8.01409661e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1292) {
  s21_decimal check = {{0x1f4e, 0, 0, 0x801c0000}};
  float number = -8.01409661e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1295) {
  s21_decimal check = {{0x7593ed80, 0xcdb, 0, 0}};
  float number = 1.41367076e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1296) {
  s21_decimal check = {{0x7593ed80, 0xcdb, 0, 0x80000000}};
  float number = -1.41367076e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1297) {
  s21_decimal check = {{0xf0132000, 0x51cbd0b1, 0, 0}};
  float number = 5.89403379e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1298) {
  s21_decimal check = {{0xf0132000, 0x51cbd0b1, 0, 0x80000000}};
  float number = -5.89403379e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1299) {
  s21_decimal check = {{0x2a0d9a, 0, 0, 0x1a0000}};
  float number = 2.75599423e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1300) {
  s21_decimal check = {{0x2a0d9a, 0, 0, 0x801a0000}};
  float number = -2.75599423e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1301) {
  s21_decimal check = {{0x73135100, 0x13c9, 0, 0}};
  float number = 2.17559387e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1302) {
  s21_decimal check = {{0x73135100, 0x13c9, 0, 0x80000000}};
  float number = -2.17559387e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1303) {
  s21_decimal check = {{0x53a91400, 0x75ad8, 0, 0}};
  float number = 2.07021048e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1304) {
  s21_decimal check = {{0x53a91400, 0x75ad8, 0, 0x80000000}};
  float number = -2.07021048e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1305) {
  s21_decimal check = {{0x2d7e2f30, 0x9, 0, 0}};
  float number = 3.94179461e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1306) {
  s21_decimal check = {{0x2d7e2f30, 0x9, 0, 0x80000000}};
  float number = -3.94179461e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1307) {
  s21_decimal check = {{0x7ab00000, 0x1b610e7e, 0xf7dacb, 0}};
  float number = 2.99637916e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1308) {
  s21_decimal check = {{0x7ab00000, 0x1b610e7e, 0xf7dacb, 0x80000000}};
  float number = -2.99637916e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1309) {
  s21_decimal check = {{0x4df47f, 0, 0, 0x1b0000}};
  float number = 5.10886255e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1310) {
  s21_decimal check = {{0x4df47f, 0, 0, 0x801b0000}};
  float number = -5.10886255e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1311) {
  s21_decimal check = {{0x4ff2dd, 0, 0, 0x170000}};
  float number = 5.23951718e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1312) {
  s21_decimal check = {{0x4ff2dd, 0, 0, 0x80170000}};
  float number = -5.23951718e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1313) {
  s21_decimal check = {{0x2f1767, 0, 0, 0x60000}};
  float number = 3.08618259e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1314) {
  s21_decimal check = {{0x2f1767, 0, 0, 0x80060000}};
  float number = -3.08618259e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1315) {
  s21_decimal check = {{0x8c1615c, 0, 0, 0}};
  float number = 1.46891104e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1316) {
  s21_decimal check = {{0x8c1615c, 0, 0, 0x80000000}};
  float number = -1.46891104e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1317) {
  s21_decimal check = {{0x3f3976, 0, 0, 0xa0000}};
  float number = 4.14347829e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1318) {
  s21_decimal check = {{0x3f3976, 0, 0, 0x800a0000}};
  float number = -4.14347829e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1319) {
  s21_decimal check = {{0x53ad9e, 0, 0, 0x80000}};
  float number = 5.48393428e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1320) {
  s21_decimal check = {{0x53ad9e, 0, 0, 0x80080000}};
  float number = -5.48393428e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1321) {
  s21_decimal check = {{0x6eb, 0, 0, 0x1c0000}};
  float number = 1.77090941e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1322) {
  s21_decimal check = {{0x6eb, 0, 0, 0x801c0000}};
  float number = -1.77090941e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1323) {
  s21_decimal check = {{0x1ce16f00, 0x77fc, 0, 0}};
  float number = 1.31924719e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1324) {
  s21_decimal check = {{0x1ce16f00, 0x77fc, 0, 0x80000000}};
  float number = -1.31924719e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1325) {
  s21_decimal check = {{0x4e39f, 0, 0, 0x1c0000}};
  float number = 3.20414537e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1326) {
  s21_decimal check = {{0x4e39f, 0, 0, 0x801c0000}};
  float number = -3.20414537e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1327) {
  s21_decimal check = {{0x19d60bc0, 0x3, 0, 0}};
  float number = 1.33183601e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1328) {
  s21_decimal check = {{0x19d60bc0, 0x3, 0, 0x80000000}};
  float number = -1.33183601e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1329) {
  s21_decimal check = {{0x6f19b5c0, 0xb0, 0, 0}};
  float number = 7.57778219e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1330) {
  s21_decimal check = {{0x6f19b5c0, 0xb0, 0, 0x80000000}};
  float number = -7.57778219e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1331) {
  s21_decimal check = {{0xd1000000, 0xfb5e1571, 0x1a4d3b, 0}};
  float number = 3.17968049e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1332) {
  s21_decimal check = {{0xd1000000, 0xfb5e1571, 0x1a4d3b, 0x80000000}};
  float number = -3.17968049e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1333) {
  s21_decimal check = {{0x3bad70, 0, 0, 0xd0000}};
  float number = 3.91102361e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1334) {
  s21_decimal check = {{0x3bad70, 0, 0, 0x800d0000}};
  float number = -3.91102361e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1335) {
  s21_decimal check = {{0x339b99ec, 0, 0, 0}};
  float number = 8.65835520e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1336) {
  s21_decimal check = {{0x339b99ec, 0, 0, 0x80000000}};
  float number = -8.65835520e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1337) {
  s21_decimal check = {{0x5d7c0000, 0xecea0bec, 0x22881, 0}};
  float number = 2.60914322e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1338) {
  s21_decimal check = {{0x5d7c0000, 0xecea0bec, 0x22881, 0x80000000}};
  float number = -2.60914322e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1339) {
  s21_decimal check = {{0x7616e3, 0, 0, 0}};
  float number = 7.73910700e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1340) {
  s21_decimal check = {{0x7616e3, 0, 0, 0x80000000}};
  float number = -7.73910700e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1341) {
  s21_decimal check = {{0x2f948b00, 0xd8, 0, 0}};
  float number = 9.28511230e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1342) {
  s21_decimal check = {{0x2f948b00, 0xd8, 0, 0x80000000}};
  float number = -9.28511230e+11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1343) {
  s21_decimal check = {{0x2390de4, 0, 0, 0}};
  float number = 3.72935440e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1344) {
  s21_decimal check = {{0x2390de4, 0, 0, 0x80000000}};
  float number = -3.72935440e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1345) {
  s21_decimal check = {{0x66d3ee60, 0xd, 0, 0}};
  float number = 5.75597363e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1346) {
  s21_decimal check = {{0x66d3ee60, 0xd, 0, 0x80000000}};
  float number = -5.75597363e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1347) {
  s21_decimal check = {{0xff4ef0c0, 0x5, 0, 0}};
  float number = 2.57581978e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1348) {
  s21_decimal check = {{0xff4ef0c0, 0x5, 0, 0x80000000}};
  float number = -2.57581978e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1349) {
  s21_decimal check = {{0x2c99a2, 0, 0, 0x90000}};
  float number = 2.92291376e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1350) {
  s21_decimal check = {{0x2c99a2, 0, 0, 0x80090000}};
  float number = -2.92291376e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1351) {
  s21_decimal check = {{0x65b00000, 0x81dcd5df, 0x1b792ee, 0}};
  float number = 5.31412291e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1352) {
  s21_decimal check = {{0x65b00000, 0x81dcd5df, 0x1b792ee, 0x80000000}};
  float number = -5.31412291e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1353) {
  s21_decimal check = {{0x22d226, 0, 0, 0xb0000}};
  float number = 2.28202243e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1354) {
  s21_decimal check = {{0x22d226, 0, 0, 0x800b0000}};
  float number = -2.28202243e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1355) {
  s21_decimal check = {{0x16efe5, 0, 0, 0x160000}};
  float number = 1.50320475e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1356) {
  s21_decimal check = {{0x16efe5, 0, 0, 0x80160000}};
  float number = -1.50320475e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1357) {
  s21_decimal check = {{0x19dd5, 0, 0, 0x30000}};
  float number = 1.05940971e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1358) {
  s21_decimal check = {{0x19dd5, 0, 0, 0x80030000}};
  float number = -1.05940971e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1359) {
  s21_decimal check = {{0x2c06c6, 0, 0, 0x90000}};
  float number = 2.88531766e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1360) {
  s21_decimal check = {{0x2c06c6, 0, 0, 0x80090000}};
  float number = -2.88531766e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1361) {
  s21_decimal check = {{0xd22796c0, 0x202, 0, 0}};
  float number = 2.21113903e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1362) {
  s21_decimal check = {{0xd22796c0, 0x202, 0, 0x80000000}};
  float number = -2.21113903e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1363) {
  s21_decimal check = {{0x302579, 0, 0, 0x180000}};
  float number = 3.15532139e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1364) {
  s21_decimal check = {{0x302579, 0, 0, 0x80180000}};
  float number = -3.15532139e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1365) {
  s21_decimal check = {{0x3624b3, 0, 0, 0xa0000}};
  float number = 3.54833872e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1366) {
  s21_decimal check = {{0x3624b3, 0, 0, 0x800a0000}};
  float number = -3.54833872e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1367) {
  s21_decimal check = {{0x39020000, 0x995e576f, 0x379c, 0}};
  float number = 2.62618927e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1368) {
  s21_decimal check = {{0x39020000, 0x995e576f, 0x379c, 0x80000000}};
  float number = -2.62618927e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1369) {
  s21_decimal check = {{0xe11356, 0, 0, 0}};
  float number = 1.47505460e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1370) {
  s21_decimal check = {{0xe11356, 0, 0, 0x80000000}};
  float number = -1.47505460e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1371) {
  s21_decimal check = {{0x126b4b, 0, 0, 0xc0000}};
  float number = 1.20711491e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1372) {
  s21_decimal check = {{0x126b4b, 0, 0, 0x800c0000}};
  float number = -1.20711491e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1373) {
  s21_decimal check = {{0xc2664000, 0x2f181d, 0, 0}};
  float number = 1.32558400e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1374) {
  s21_decimal check = {{0xc2664000, 0x2f181d, 0, 0x80000000}};
  float number = -1.32558400e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1375) {
  s21_decimal check = {{0x20d59c, 0, 0, 0x170000}};
  float number = 2.15183559e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1376) {
  s21_decimal check = {{0x20d59c, 0, 0, 0x80170000}};
  float number = -2.15183559e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1377) {
  s21_decimal check = {{0xc628a800, 0x2403820, 0, 0}};
  float number = 1.62191279e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1378) {
  s21_decimal check = {{0xc628a800, 0x2403820, 0, 0x80000000}};
  float number = -1.62191279e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1379) {
  s21_decimal check = {{0x23bdc200, 0x153071, 0, 0}};
  float number = 5.96423694e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1380) {
  s21_decimal check = {{0x23bdc200, 0x153071, 0, 0x80000000}};
  float number = -5.96423694e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1381) {
  s21_decimal check = {{0xbcc02, 0, 0, 0xf0000}};
  float number = 7.73121955e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1382) {
  s21_decimal check = {{0xbcc02, 0, 0, 0x800f0000}};
  float number = -7.73121955e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1383) {
  s21_decimal check = {{0x6e76ed18, 0x1, 0, 0}};
  float number = 6.14825472e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1384) {
  s21_decimal check = {{0x6e76ed18, 0x1, 0, 0x80000000}};
  float number = -6.14825472e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1385) {
  s21_decimal check = {{0x562952, 0, 0, 0x50000}};
  float number = 5.64667435e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1386) {
  s21_decimal check = {{0x562952, 0, 0, 0x80050000}};
  float number = -5.64667435e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1387) {
  s21_decimal check = {{0x2078c8, 0, 0, 0x30000}};
  float number = 2.12807227e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1388) {
  s21_decimal check = {{0x2078c8, 0, 0, 0x80030000}};
  float number = -2.12807227e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1389) {
  s21_decimal check = {{0x2b7382, 0, 0, 0x1b0000}};
  float number = 2.84761773e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1390) {
  s21_decimal check = {{0x2b7382, 0, 0, 0x801b0000}};
  float number = -2.84761773e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1391) {
  s21_decimal check = {{0xcb, 0, 0, 0x1c0000}};
  float number = 2.02591560e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1392) {
  s21_decimal check = {{0xcb, 0, 0, 0x801c0000}};
  float number = -2.02591560e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1393) {
  s21_decimal check = {{0x5014a2, 0, 0, 0x70000}};
  float number = 5.24816155e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1394) {
  s21_decimal check = {{0x5014a2, 0, 0, 0x80070000}};
  float number = -5.24816155e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1395) {
  s21_decimal check = {{0x3559bf, 0, 0, 0x150000}};
  float number = 3.49638345e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1396) {
  s21_decimal check = {{0x3559bf, 0, 0, 0x80150000}};
  float number = -3.49638345e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1397) {
  s21_decimal check = {{0x986329, 0, 0, 0xa0000}};
  float number = 9.98685719e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1398) {
  s21_decimal check = {{0x986329, 0, 0, 0x800a0000}};
  float number = -9.98685719e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1399) {
  s21_decimal check = {{0xf26f6, 0, 0, 0xa0000}};
  float number = 9.93013964e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1400) {
  s21_decimal check = {{0xf26f6, 0, 0, 0x800a0000}};
  float number = -9.93013964e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1401) {
  s21_decimal check = {{0xf9e2b, 0, 0, 0x60000}};
  float number = 1.02353072e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1402) {
  s21_decimal check = {{0xf9e2b, 0, 0, 0x80060000}};
  float number = -1.02353072e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1403) {
  s21_decimal check = {{0x1708df, 0, 0, 0x1a0000}};
  float number = 1.50959880e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1404) {
  s21_decimal check = {{0x1708df, 0, 0, 0x801a0000}};
  float number = -1.50959880e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1405) {
  s21_decimal check = {{0x282319, 0, 0, 0}};
  float number = 2.63042525e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1406) {
  s21_decimal check = {{0x282319, 0, 0, 0x80000000}};
  float number = -2.63042525e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1407) {
  s21_decimal check = {{0x4b, 0, 0, 0x1c0000}};
  float number = 7.49090375e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1408) {
  s21_decimal check = {{0x4b, 0, 0, 0x801c0000}};
  float number = -7.49090375e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1409) {
  s21_decimal check = {{0x16db49, 0, 0, 0x140000}};
  float number = 1.49792864e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1410) {
  s21_decimal check = {{0x16db49, 0, 0, 0x80140000}};
  float number = -1.49792864e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1411) {
  s21_decimal check = {{0xfb780000, 0xd3d92073, 0x767e, 0}};
  float number = 5.59578775e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1412) {
  s21_decimal check = {{0xfb780000, 0xd3d92073, 0x767e, 0x80000000}};
  float number = -5.59578775e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1413) {
  s21_decimal check = {{0x1e660000, 0x1ac98279, 0x78f, 0}};
  float number = 3.56963841e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1414) {
  s21_decimal check = {{0x1e660000, 0x1ac98279, 0x78f, 0x80000000}};
  float number = -3.56963841e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1415) {
  s21_decimal check = {{0xd0cb2000, 0xafe38f2, 0, 0}};
  float number = 7.92133188e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1416) {
  s21_decimal check = {{0xd0cb2000, 0xafe38f2, 0, 0x80000000}};
  float number = -7.92133188e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1417) {
  s21_decimal check = {{0x296d66, 0, 0, 0x100000}};
  float number = 2.71498241e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1418) {
  s21_decimal check = {{0x296d66, 0, 0, 0x80100000}};
  float number = -2.71498241e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1421) {
  s21_decimal check = {{0x11e519, 0, 0, 0}};
  float number = 1.17276100e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1422) {
  s21_decimal check = {{0x11e519, 0, 0, 0x80000000}};
  float number = -1.17276100e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1423) {
  s21_decimal check = {{0x1ef1c7, 0, 0, 0x1c0000}};
  float number = 2.02797484e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1424) {
  s21_decimal check = {{0x1ef1c7, 0, 0, 0x801c0000}};
  float number = -2.02797484e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1425) {
  s21_decimal check = {{0x6b040000, 0xb05d1e04, 0x12a53, 0}};
  float number = 1.40880926e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1426) {
  s21_decimal check = {{0x6b040000, 0xb05d1e04, 0x12a53, 0x80000000}};
  float number = -1.40880926e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1427) {
  s21_decimal check = {{0xc8a53000, 0x1f23588, 0, 0}};
  float number = 1.40233397e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1428) {
  s21_decimal check = {{0xc8a53000, 0x1f23588, 0, 0x80000000}};
  float number = -1.40233397e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1429) {
  s21_decimal check = {{0x1271e5, 0, 0, 0x20000}};
  float number = 1.20880547e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1430) {
  s21_decimal check = {{0x1271e5, 0, 0, 0x80020000}};
  float number = -1.20880547e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1431) {
  s21_decimal check = {{0x7aec72c0, 0x6, 0, 0}};
  float number = 2.78321213e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1432) {
  s21_decimal check = {{0x7aec72c0, 0x6, 0, 0x80000000}};
  float number = -2.78321213e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1433) {
  s21_decimal check = {{0x1daa39, 0, 0, 0x1b0000}};
  float number = 1.94412142e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1434) {
  s21_decimal check = {{0x1daa39, 0, 0, 0x801b0000}};
  float number = -1.94412142e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1435) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.21054832e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1436) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.21054832e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1437) {
  s21_decimal check = {{0x2be8c000, 0x95eec0ba, 0x30, 0}};
  float number = 8.96247499e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1438) {
  s21_decimal check = {{0x2be8c000, 0x95eec0ba, 0x30, 0x80000000}};
  float number = -8.96247499e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1439) {
  s21_decimal check = {{0x5f1167, 0, 0, 0x1b0000}};
  float number = 6.23037486e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1440) {
  s21_decimal check = {{0x5f1167, 0, 0, 0x801b0000}};
  float number = -6.23037486e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1445) {
  s21_decimal check = {{0x4daaf710, 0, 0, 0}};
  float number = 1.30304960e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1446) {
  s21_decimal check = {{0x4daaf710, 0, 0, 0x80000000}};
  float number = -1.30304960e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1447) {
  s21_decimal check = {{0xe8c00000, 0xa4731590, 0xbd927f, 0}};
  float number = 2.29178751e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1448) {
  s21_decimal check = {{0xe8c00000, 0xa4731590, 0xbd927f, 0x80000000}};
  float number = -2.29178751e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1449) {
  s21_decimal check = {{0xc59b, 0, 0, 0x1b0000}};
  float number = 5.05870151e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1450) {
  s21_decimal check = {{0xc59b, 0, 0, 0x801b0000}};
  float number = -5.05870151e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1451) {
  s21_decimal check = {{0x1144c000, 0xef4d3025, 0x7, 0}};
  float number = 1.46370735e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1452) {
  s21_decimal check = {{0x1144c000, 0xef4d3025, 0x7, 0x80000000}};
  float number = -1.46370735e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1453) {
  s21_decimal check = {{0x57a40000, 0x129203bd, 0x895b, 0}};
  float number = 6.48644231e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1454) {
  s21_decimal check = {{0x57a40000, 0x129203bd, 0x895b, 0x80000000}};
  float number = -6.48644231e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1455) {
  s21_decimal check = {{0xc4200000, 0xe2d23be3, 0xae619, 0}};
  float number = 1.31758809e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1456) {
  s21_decimal check = {{0xc4200000, 0xe2d23be3, 0xae619, 0x80000000}};
  float number = -1.31758809e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1457) {
  s21_decimal check = {{0x8c7bbe, 0, 0, 0xe0000}};
  float number = 9.20671752e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1458) {
  s21_decimal check = {{0x8c7bbe, 0, 0, 0x800e0000}};
  float number = -9.20671752e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1459) {
  s21_decimal check = {{0x166ef9, 0, 0, 0x150000}};
  float number = 1.47020070e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1460) {
  s21_decimal check = {{0x166ef9, 0, 0, 0x80150000}};
  float number = -1.47020070e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1461) {
  s21_decimal check = {{0x3de48, 0, 0, 0x110000}};
  float number = 2.53511968e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1462) {
  s21_decimal check = {{0x3de48, 0, 0, 0x80110000}};
  float number = -2.53511968e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1465) {
  s21_decimal check = {{0x34e0b6, 0, 0, 0x20000}};
  float number = 3.46539805e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1466) {
  s21_decimal check = {{0x34e0b6, 0, 0, 0x80020000}};
  float number = -3.46539805e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1467) {
  s21_decimal check = {{0xc8440000, 0x4ba07311, 0xe097, 0}};
  float number = 1.06060081e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1468) {
  s21_decimal check = {{0xc8440000, 0x4ba07311, 0xe097, 0x80000000}};
  float number = -1.06060081e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1469) {
  s21_decimal check = {{0x52249e00, 0x25c28, 0, 0}};
  float number = 6.64278231e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1470) {
  s21_decimal check = {{0x52249e00, 0x25c28, 0, 0x80000000}};
  float number = -6.64278231e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1471) {
  s21_decimal check = {{0x75b718, 0, 0, 0xd0000}};
  float number = 7.71458417e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1472) {
  s21_decimal check = {{0x75b718, 0, 0, 0x800d0000}};
  float number = -7.71458417e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1473) {
  s21_decimal check = {{0x5dec79, 0, 0, 0xd0000}};
  float number = 6.15538454e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1474) {
  s21_decimal check = {{0x5dec79, 0, 0, 0x800d0000}};
  float number = -6.15538454e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1475) {
  s21_decimal check = {{0x229345, 0, 0, 0x160000}};
  float number = 2.26592457e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1476) {
  s21_decimal check = {{0x229345, 0, 0, 0x80160000}};
  float number = -2.26592457e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1477) {
  s21_decimal check = {{0x8678b5, 0, 0, 0x80000}};
  float number = 8.81272480e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1478) {
  s21_decimal check = {{0x8678b5, 0, 0, 0x80080000}};
  float number = -8.81272480e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1479) {
  s21_decimal check = {{0x13ef9c, 0, 0, 0x50000}};
  float number = 1.30652351e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1480) {
  s21_decimal check = {{0x13ef9c, 0, 0, 0x80050000}};
  float number = -1.30652351e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1481) {
  s21_decimal check = {{0x187988, 0, 0, 0x110000}};
  float number = 1.60397633e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1482) {
  s21_decimal check = {{0x187988, 0, 0, 0x80110000}};
  float number = -1.60397633e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1483) {
  s21_decimal check = {{0x757d8800, 0x3a5c9d, 0, 0}};
  float number = 1.64273759e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1484) {
  s21_decimal check = {{0x757d8800, 0x3a5c9d, 0, 0x80000000}};
  float number = -1.64273759e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1485) {
  s21_decimal check = {{0xe2c57610, 0x8, 0, 0}};
  float number = 3.81643284e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1486) {
  s21_decimal check = {{0xe2c57610, 0x8, 0, 0x80000000}};
  float number = -3.81643284e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1487) {
  s21_decimal check = {{0xaad59e4, 0, 0, 0}};
  float number = 1.79132864e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1488) {
  s21_decimal check = {{0xaad59e4, 0, 0, 0x80000000}};
  float number = -1.79132864e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1491) {
  s21_decimal check = {{0x13, 0, 0, 0x1b0000}};
  float number = 1.90140623e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1492) {
  s21_decimal check = {{0x13, 0, 0, 0x801b0000}};
  float number = -1.90140623e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1493) {
  s21_decimal check = {{0x3e433f, 0, 0, 0x30000}};
  float number = 4.08044678e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1494) {
  s21_decimal check = {{0x3e433f, 0, 0, 0x80030000}};
  float number = -4.08044678e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1495) {
  s21_decimal check = {{0x3c56ff, 0, 0, 0x40000}};
  float number = 3.95443115e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1496) {
  s21_decimal check = {{0x3c56ff, 0, 0, 0x80040000}};
  float number = -3.95443115e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1497) {
  s21_decimal check = {{0x47a2a400, 0x14a2cf4, 0, 0}};
  float number = 9.29361688e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1498) {
  s21_decimal check = {{0x47a2a400, 0x14a2cf4, 0, 0x80000000}};
  float number = -9.29361688e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1499) {
  s21_decimal check = {{0x7c01f, 0, 0, 0x130000}};
  float number = 5.07934996e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1500) {
  s21_decimal check = {{0x7c01f, 0, 0, 0x80130000}};
  float number = -5.07934996e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1501) {
  s21_decimal check = {{0x9e91e640, 0x495, 0, 0}};
  float number = 5.04065740e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1502) {
  s21_decimal check = {{0x9e91e640, 0x495, 0, 0x80000000}};
  float number = -5.04065740e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1503) {
  s21_decimal check = {{0x46087d, 0, 0, 0x110000}};
  float number = 4.58969321e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1504) {
  s21_decimal check = {{0x46087d, 0, 0, 0x80110000}};
  float number = -4.58969321e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1505) {
  s21_decimal check = {{0xf9139, 0, 0, 0x180000}};
  float number = 1.02021675e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1506) {
  s21_decimal check = {{0xf9139, 0, 0, 0x80180000}};
  float number = -1.02021675e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1507) {
  s21_decimal check = {{0x315f6c, 0, 0, 0x1b0000}};
  float number = 3.23569185e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1508) {
  s21_decimal check = {{0x315f6c, 0, 0, 0x801b0000}};
  float number = -3.23569185e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1509) {
  s21_decimal check = {{0x3f176f, 0, 0, 0x140000}};
  float number = 4.13476660e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1510) {
  s21_decimal check = {{0x3f176f, 0, 0, 0x80140000}};
  float number = -4.13476660e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1511) {
  s21_decimal check = {{0x225967, 0, 0, 0x100000}};
  float number = 2.25111083e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1512) {
  s21_decimal check = {{0x225967, 0, 0, 0x80100000}};
  float number = -2.25111083e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1513) {
  s21_decimal check = {{0x120efe, 0, 0, 0x110000}};
  float number = 1.18348621e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1514) {
  s21_decimal check = {{0x120efe, 0, 0, 0x80110000}};
  float number = -1.18348621e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1515) {
  s21_decimal check = {{0x59607a, 0, 0, 0x90000}};
  float number = 5.85740153e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1516) {
  s21_decimal check = {{0x59607a, 0, 0, 0x80090000}};
  float number = -5.85740153e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1517) {
  s21_decimal check = {{0xa0353d00, 0x7e5a, 0, 0}};
  float number = 1.38927671e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1518) {
  s21_decimal check = {{0xa0353d00, 0x7e5a, 0, 0x80000000}};
  float number = -1.38927671e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1519) {
  s21_decimal check = {{0x1e6f9d, 0, 0, 0x160000}};
  float number = 1.99465274e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1520) {
  s21_decimal check = {{0x1e6f9d, 0, 0, 0x80160000}};
  float number = -1.99465274e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1521) {
  s21_decimal check = {{0xbae9a000, 0x604c0ef, 0, 0}};
  float number = 4.33683636e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1522) {
  s21_decimal check = {{0xbae9a000, 0x604c0ef, 0, 0x80000000}};
  float number = -4.33683636e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1523) {
  s21_decimal check = {{0x2ac66a00, 0x503ba, 0, 0}};
  float number = 1.41147295e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1524) {
  s21_decimal check = {{0x2ac66a00, 0x503ba, 0, 0x80000000}};
  float number = -1.41147295e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1525) {
  s21_decimal check = {{0x43783c, 0, 0, 0x140000}};
  float number = 4.42169156e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1526) {
  s21_decimal check = {{0x43783c, 0, 0, 0x80140000}};
  float number = -4.42169156e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1527) {
  s21_decimal check = {{0x14a70000, 0xd60ee992, 0x13ca, 0}};
  float number = 9.34666258e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1528) {
  s21_decimal check = {{0x14a70000, 0xd60ee992, 0x13ca, 0x80000000}};
  float number = -9.34666258e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1529) {
  s21_decimal check = {{0x3871cc, 0, 0, 0x60000}};
  float number = 3.69914818e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1530) {
  s21_decimal check = {{0x3871cc, 0, 0, 0x80060000}};
  float number = -3.69914818e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1531) {
  s21_decimal check = {{0x1da350, 0, 0, 0xa0000}};
  float number = 1.94235196e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1532) {
  s21_decimal check = {{0x1da350, 0, 0, 0x800a0000}};
  float number = -1.94235196e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1533) {
  s21_decimal check = {{0x1682c3, 0, 0, 0xf0000}};
  float number = 1.47526702e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1534) {
  s21_decimal check = {{0x1682c3, 0, 0, 0x800f0000}};
  float number = -1.47526702e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1535) {
  s21_decimal check = {{0xfd803800, 0x91881a6, 0, 0}};
  float number = 6.55416339e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1536) {
  s21_decimal check = {{0xfd803800, 0x91881a6, 0, 0x80000000}};
  float number = -6.55416339e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1537) {
  s21_decimal check = {{0x3eae2000, 0xfc18e5e1, 0x2, 0}};
  float number = 5.50590079e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1538) {
  s21_decimal check = {{0x3eae2000, 0xfc18e5e1, 0x2, 0x80000000}};
  float number = -5.50590079e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1541) {
  s21_decimal check = {{0x221a22, 0, 0, 0x1c0000}};
  float number = 2.23491388e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1542) {
  s21_decimal check = {{0x221a22, 0, 0, 0x801c0000}};
  float number = -2.23491388e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1543) {
  s21_decimal check = {{0xecb0b400, 0x3b4, 0, 0}};
  float number = 4.07559995e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1544) {
  s21_decimal check = {{0xecb0b400, 0x3b4, 0, 0x80000000}};
  float number = -4.07559995e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1545) {
  s21_decimal check = {{0x1587d1, 0, 0, 0xf0000}};
  float number = 1.41102474e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1546) {
  s21_decimal check = {{0x1587d1, 0, 0, 0x800f0000}};
  float number = -1.41102474e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1547) {
  s21_decimal check = {{0x355104, 0, 0, 0x190000}};
  float number = 3.49414765e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1548) {
  s21_decimal check = {{0x355104, 0, 0, 0x80190000}};
  float number = -3.49414765e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1549) {
  s21_decimal check = {{0x5d9fd8c, 0, 0, 0}};
  float number = 9.81722960e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1550) {
  s21_decimal check = {{0x5d9fd8c, 0, 0, 0x80000000}};
  float number = -9.81722960e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1551) {
  s21_decimal check = {{0x7, 0, 0, 0x1c0000}};
  float number = 7.27355032e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1552) {
  s21_decimal check = {{0x7, 0, 0, 0x801c0000}};
  float number = -7.27355032e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1553) {
  s21_decimal check = {{0x1280c4, 0, 0, 0x1b0000}};
  float number = 1.21261214e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1554) {
  s21_decimal check = {{0x1280c4, 0, 0, 0x801b0000}};
  float number = -1.21261214e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1555) {
  s21_decimal check = {{0x5761a000, 0x66baed6f, 0, 0}};
  float number = 7.40248952e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1556) {
  s21_decimal check = {{0x5761a000, 0x66baed6f, 0, 0x80000000}};
  float number = -7.40248952e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1557) {
  s21_decimal check = {{0x94e0a800, 0xa337bb, 0, 0}};
  float number = 4.59417018e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1558) {
  s21_decimal check = {{0x94e0a800, 0xa337bb, 0, 0x80000000}};
  float number = -4.59417018e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1559) {
  s21_decimal check = {{0xa6f40000, 0x51b69fce, 0x25, 0}};
  float number = 6.88417635e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1560) {
  s21_decimal check = {{0xa6f40000, 0x51b69fce, 0x25, 0x80000000}};
  float number = -6.88417635e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1561) {
  s21_decimal check = {{0x377f15, 0, 0, 0x1c0000}};
  float number = 3.63701329e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1562) {
  s21_decimal check = {{0x377f15, 0, 0, 0x801c0000}};
  float number = -3.63701329e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1563) {
  s21_decimal check = {{0x84d6f6, 0, 0, 0x180000}};
  float number = 8.70578230e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1564) {
  s21_decimal check = {{0x84d6f6, 0, 0, 0x80180000}};
  float number = -8.70578230e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1565) {
  s21_decimal check = {{0xed800000, 0xc66e415d, 0x39902b, 0}};
  float number = 6.95896041e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1566) {
  s21_decimal check = {{0xed800000, 0xc66e415d, 0x39902b, 0x80000000}};
  float number = -6.95896041e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1567) {
  s21_decimal check = {{0x43000000, 0x3091a5c0, 0x17bd6, 0}};
  float number = 1.79372781e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1568) {
  s21_decimal check = {{0x43000000, 0x3091a5c0, 0x17bd6, 0x80000000}};
  float number = -1.79372781e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1569) {
  s21_decimal check = {{0x15f215, 0, 0, 0x100000}};
  float number = 1.43822898e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1570) {
  s21_decimal check = {{0x15f215, 0, 0, 0x80100000}};
  float number = -1.43822898e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1571) {
  s21_decimal check = {{0x659ff800, 0x62bf6c, 0, 0}};
  float number = 2.77950161e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1572) {
  s21_decimal check = {{0x659ff800, 0x62bf6c, 0, 0x80000000}};
  float number = -2.77950161e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1573) {
  s21_decimal check = {{0x1cdb31e, 0, 0, 0}};
  float number = 3.02579460e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1574) {
  s21_decimal check = {{0x1cdb31e, 0, 0, 0x80000000}};
  float number = -3.02579460e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1575) {
  s21_decimal check = {{0x1040a3, 0, 0, 0x130000}};
  float number = 1.06512259e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1576) {
  s21_decimal check = {{0x1040a3, 0, 0, 0x80130000}};
  float number = -1.06512259e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1577) {
  s21_decimal check = {{0x61da80, 0, 0, 0x80000}};
  float number = 6.41292781e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1578) {
  s21_decimal check = {{0x61da80, 0, 0, 0x80080000}};
  float number = -6.41292781e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1579) {
  s21_decimal check = {{0x558bb1, 0, 0, 0x140000}};
  float number = 5.60632134e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1580) {
  s21_decimal check = {{0x558bb1, 0, 0, 0x80140000}};
  float number = -5.60632134e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1581) {
  s21_decimal check = {{0x49e20000, 0x8468c551, 0xdbd, 0}};
  float number = 6.48867420e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1582) {
  s21_decimal check = {{0x49e20000, 0x8468c551, 0xdbd, 0x80000000}};
  float number = -6.48867420e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1583) {
  s21_decimal check = {{0x64871c00, 0x3090, 0, 0}};
  float number = 5.33967237e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1584) {
  s21_decimal check = {{0x64871c00, 0x3090, 0, 0x80000000}};
  float number = -5.33967237e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1585) {
  s21_decimal check = {{0x3131f9, 0, 0, 0x120000}};
  float number = 3.22405687e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1586) {
  s21_decimal check = {{0x3131f9, 0, 0, 0x80120000}};
  float number = -3.22405687e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1587) {
  s21_decimal check = {{0x5693, 0, 0, 0x1c0000}};
  float number = 2.21627454e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1588) {
  s21_decimal check = {{0x5693, 0, 0, 0x801c0000}};
  float number = -2.21627454e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1589) {
  s21_decimal check = {{0x2d4839, 0, 0, 0x50000}};
  float number = 2.96760864e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1590) {
  s21_decimal check = {{0x2d4839, 0, 0, 0x80050000}};
  float number = -2.96760864e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1591) {
  s21_decimal check = {{0x11e769, 0, 0, 0xe0000}};
  float number = 1.17335288e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1592) {
  s21_decimal check = {{0x11e769, 0, 0, 0x800e0000}};
  float number = -1.17335288e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1593) {
  s21_decimal check = {{0x2d586, 0, 0, 0xe0000}};
  float number = 1.85734028e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1594) {
  s21_decimal check = {{0x2d586, 0, 0, 0x800e0000}};
  float number = -1.85734028e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1595) {
  s21_decimal check = {{0x1fffc0, 0, 0, 0x10000}};
  float number = 2.09708766e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1596) {
  s21_decimal check = {{0x1fffc0, 0, 0, 0x80010000}};
  float number = -2.09708766e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1597) {
  s21_decimal check = {{0x2de00000, 0xafe50810, 0x136189, 0}};
  float number = 2.34302012e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1598) {
  s21_decimal check = {{0x2de00000, 0xafe50810, 0x136189, 0x80000000}};
  float number = -2.34302012e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1599) {
  s21_decimal check = {{0x136991, 0, 0, 0xd0000}};
  float number = 1.27220915e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1600) {
  s21_decimal check = {{0x136991, 0, 0, 0x800d0000}};
  float number = -1.27220915e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1601) {
  s21_decimal check = {{0x627845, 0, 0, 0x60000}};
  float number = 6.45331717e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1602) {
  s21_decimal check = {{0x627845, 0, 0, 0x80060000}};
  float number = -6.45331717e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1603) {
  s21_decimal check = {{0x18b6bb, 0, 0, 0x30000}};
  float number = 1.61964319e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1604) {
  s21_decimal check = {{0x18b6bb, 0, 0, 0x80030000}};
  float number = -1.61964319e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1605) {
  s21_decimal check = {{0x6c8e16, 0, 0, 0x60000}};
  float number = 7.11426210e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1606) {
  s21_decimal check = {{0x6c8e16, 0, 0, 0x80060000}};
  float number = -7.11426210e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1607) {
  s21_decimal check = {{0xb74c7e, 0, 0, 0}};
  float number = 1.20126660e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1608) {
  s21_decimal check = {{0xb74c7e, 0, 0, 0x80000000}};
  float number = -1.20126660e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1609) {
  s21_decimal check = {{0xdd00000, 0xfd0da3ba, 0x2ea7b5, 0}};
  float number = 5.64025756e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1610) {
  s21_decimal check = {{0xdd00000, 0xfd0da3ba, 0x2ea7b5, 0x80000000}};
  float number = -5.64025756e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1611) {
  s21_decimal check = {{0x7b416800, 0x826e319, 0, 0}};
  float number = 5.87406459e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1612) {
  s21_decimal check = {{0x7b416800, 0x826e319, 0, 0x80000000}};
  float number = -5.87406459e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1613) {
  s21_decimal check = {{0x418bbc00, 0x72716f, 0, 0}};
  float number = 3.22128710e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1614) {
  s21_decimal check = {{0x418bbc00, 0x72716f, 0, 0x80000000}};
  float number = -3.22128710e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1615) {
  s21_decimal check = {{0x5e7c4000, 0x14a8456a, 0, 0}};
  float number = 1.48851609e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1616) {
  s21_decimal check = {{0x5e7c4000, 0x14a8456a, 0, 0x80000000}};
  float number = -1.48851609e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1617) {
  s21_decimal check = {{0x1a0de1, 0, 0, 0x110000}};
  float number = 1.70748884e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1618) {
  s21_decimal check = {{0x1a0de1, 0, 0, 0x80110000}};
  float number = -1.70748884e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1619) {
  s21_decimal check = {{0xb26, 0, 0, 0x1c0000}};
  float number = 2.85416827e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1620) {
  s21_decimal check = {{0xb26, 0, 0, 0x801c0000}};
  float number = -2.85416827e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1621) {
  s21_decimal check = {{0x5, 0, 0, 0x1c0000}};
  float number = 4.96119746e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1622) {
  s21_decimal check = {{0x5, 0, 0, 0x801c0000}};
  float number = -4.96119746e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1623) {
  s21_decimal check = {{0x794499, 0, 0, 0x130000}};
  float number = 7.94741660e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1624) {
  s21_decimal check = {{0x794499, 0, 0, 0x80130000}};
  float number = -7.94741660e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1625) {
  s21_decimal check = {{0x129a35, 0, 0, 0x70000}};
  float number = 1.21912479e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1626) {
  s21_decimal check = {{0x129a35, 0, 0, 0x80070000}};
  float number = -1.21912479e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1627) {
  s21_decimal check = {{0x463ed350, 0xc, 0, 0}};
  float number = 5.27181251e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1628) {
  s21_decimal check = {{0x463ed350, 0xc, 0, 0x80000000}};
  float number = -5.27181251e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1629) {
  s21_decimal check = {{0xfb340000, 0x4f21324c, 0x39c5, 0}};
  float number = 2.72814645e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1630) {
  s21_decimal check = {{0xfb340000, 0x4f21324c, 0x39c5, 0x80000000}};
  float number = -2.72814645e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1631) {
  s21_decimal check = {{0x24cf7f, 0, 0, 0xa0000}};
  float number = 2.41241476e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1632) {
  s21_decimal check = {{0x24cf7f, 0, 0, 0x800a0000}};
  float number = -2.41241476e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1633) {
  s21_decimal check = {{0x972c20, 0, 0, 0}};
  float number = 9.90723200e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1634) {
  s21_decimal check = {{0x972c20, 0, 0, 0x80000000}};
  float number = -9.90723200e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1635) {
  s21_decimal check = {{0x252fdc, 0, 0, 0x1a0000}};
  float number = 2.43708427e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1636) {
  s21_decimal check = {{0x252fdc, 0, 0, 0x801a0000}};
  float number = -2.43708427e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1637) {
  s21_decimal check = {{0x6492bd, 0, 0, 0xc0000}};
  float number = 6.59116495e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1638) {
  s21_decimal check = {{0x6492bd, 0, 0, 0x800c0000}};
  float number = -6.59116495e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1639) {
  s21_decimal check = {{0x64de1a, 0, 0, 0x50000}};
  float number = 6.61045761e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1640) {
  s21_decimal check = {{0x64de1a, 0, 0, 0x80050000}};
  float number = -6.61045761e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1641) {
  s21_decimal check = {{0x3071e7, 0, 0, 0}};
  float number = 3.17488675e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1642) {
  s21_decimal check = {{0x3071e7, 0, 0, 0x80000000}};
  float number = -3.17488675e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1643) {
  s21_decimal check = {{0x500f0000, 0x7f065d40, 0x2df, 0}};
  float number = 1.35675071e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1644) {
  s21_decimal check = {{0x500f0000, 0x7f065d40, 0x2df, 0x80000000}};
  float number = -1.35675071e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1645) {
  s21_decimal check = {{0x4bfb7d, 0, 0, 0x1a0000}};
  float number = 4.97958076e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1646) {
  s21_decimal check = {{0x4bfb7d, 0, 0, 0x801a0000}};
  float number = -4.97958076e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1647) {
  s21_decimal check = {{0x4887ea, 0, 0, 0xc0000}};
  float number = 4.75338629e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1648) {
  s21_decimal check = {{0x4887ea, 0, 0, 0x800c0000}};
  float number = -4.75338629e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1649) {
  s21_decimal check = {{0xbf800000, 0x99e1ef97, 0x197b, 0}};
  float number = 1.20339190e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1650) {
  s21_decimal check = {{0xbf800000, 0x99e1ef97, 0x197b, 0x80000000}};
  float number = -1.20339190e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1651) {
  s21_decimal check = {{0x42eabd, 0, 0, 0x180000}};
  float number = 4.38546883e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1652) {
  s21_decimal check = {{0x42eabd, 0, 0, 0x80180000}};
  float number = -4.38546883e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1653) {
  s21_decimal check = {{0x1f597, 0, 0, 0x130000}};
  float number = 1.28406985e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1654) {
  s21_decimal check = {{0x1f597, 0, 0, 0x80130000}};
  float number = -1.28406985e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1655) {
  s21_decimal check = {{0xc4a, 0, 0, 0x1b0000}};
  float number = 3.14603882e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1656) {
  s21_decimal check = {{0xc4a, 0, 0, 0x801b0000}};
  float number = -3.14603882e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1657) {
  s21_decimal check = {{0x11ad63, 0, 0, 0x80000}};
  float number = 1.15849925e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1658) {
  s21_decimal check = {{0x11ad63, 0, 0, 0x80080000}};
  float number = -1.15849925e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1659) {
  s21_decimal check = {{0x68520, 0, 0, 0x1c0000}};
  float number = 4.27295534e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1660) {
  s21_decimal check = {{0x68520, 0, 0, 0x801c0000}};
  float number = -4.27295534e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1661) {
  s21_decimal check = {{0x3a7896, 0, 0, 0x70000}};
  float number = 3.83195788e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1662) {
  s21_decimal check = {{0x3a7896, 0, 0, 0x80070000}};
  float number = -3.83195788e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1663) {
  s21_decimal check = {{0xe2b4, 0, 0, 0xd0000}};
  float number = 5.80359982e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1664) {
  s21_decimal check = {{0xe2b4, 0, 0, 0x800d0000}};
  float number = -5.80359982e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1665) {
  s21_decimal check = {{0xebe2bfb0, 0x11, 0, 0}};
  float number = 7.69719501e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1666) {
  s21_decimal check = {{0xebe2bfb0, 0x11, 0, 0x80000000}};
  float number = -7.69719501e+10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1667) {
  s21_decimal check = {{0x346d09, 0, 0, 0x150000}};
  float number = 3.43578544e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1668) {
  s21_decimal check = {{0x346d09, 0, 0, 0x80150000}};
  float number = -3.43578544e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1669) {
  s21_decimal check = {{0x10ede4, 0, 0, 0x180000}};
  float number = 1.10947616e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1670) {
  s21_decimal check = {{0x10ede4, 0, 0, 0x80180000}};
  float number = -1.10947616e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1671) {
  s21_decimal check = {{0x21df0a, 0, 0, 0xd0000}};
  float number = 2.21978596e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1672) {
  s21_decimal check = {{0x21df0a, 0, 0, 0x800d0000}};
  float number = -2.21978596e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1673) {
  s21_decimal check = {{0x125889, 0, 0, 0x60000}};
  float number = 1.20231330e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1674) {
  s21_decimal check = {{0x125889, 0, 0, 0x80060000}};
  float number = -1.20231330e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1675) {
  s21_decimal check = {{0x2d3557, 0, 0, 0x1a0000}};
  float number = 2.96277484e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1676) {
  s21_decimal check = {{0x2d3557, 0, 0, 0x801a0000}};
  float number = -2.96277484e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1677) {
  s21_decimal check = {{0x17798400, 0x7020e6, 0, 0}};
  float number = 3.15613653e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1678) {
  s21_decimal check = {{0x17798400, 0x7020e6, 0, 0x80000000}};
  float number = -3.15613653e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1679) {
  s21_decimal check = {{0x22824f, 0, 0, 0x100000}};
  float number = 2.26158287e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1680) {
  s21_decimal check = {{0x22824f, 0, 0, 0x80100000}};
  float number = -2.26158287e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1681) {
  s21_decimal check = {{0x23bc4800, 0x5ec8c18, 0, 0}};
  float number = 4.26870065e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1682) {
  s21_decimal check = {{0x23bc4800, 0x5ec8c18, 0, 0x80000000}};
  float number = -4.26870065e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1683) {
  s21_decimal check = {{0x4f4676, 0, 0, 0}};
  float number = 5.19538150e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1684) {
  s21_decimal check = {{0x4f4676, 0, 0, 0x80000000}};
  float number = -5.19538150e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1685) {
  s21_decimal check = {{0x31e02a00, 0xb69c7, 0, 0}};
  float number = 3.21252870e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1686) {
  s21_decimal check = {{0x31e02a00, 0xb69c7, 0, 0x80000000}};
  float number = -3.21252870e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1687) {
  s21_decimal check = {{0x253100, 0, 0, 0x150000}};
  float number = 2.43737585e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1688) {
  s21_decimal check = {{0x253100, 0, 0, 0x80150000}};
  float number = -2.43737585e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1689) {
  s21_decimal check = {{0x17c2, 0, 0, 0x1c0000}};
  float number = 6.08167730e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1690) {
  s21_decimal check = {{0x17c2, 0, 0, 0x801c0000}};
  float number = -6.08167730e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1691) {
  s21_decimal check = {{0x3f2f84, 0, 0, 0xa0000}};
  float number = 4.14093171e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1692) {
  s21_decimal check = {{0x3f2f84, 0, 0, 0x800a0000}};
  float number = -4.14093171e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1693) {
  s21_decimal check = {{0x5393, 0, 0, 0x1c0000}};
  float number = 2.13953533e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1694) {
  s21_decimal check = {{0x5393, 0, 0, 0x801c0000}};
  float number = -2.13953533e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1695) {
  s21_decimal check = {{0x2dbcaa, 0, 0, 0xb0000}};
  float number = 2.99741787e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1696) {
  s21_decimal check = {{0x2dbcaa, 0, 0, 0x800b0000}};
  float number = -2.99741787e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1697) {
  s21_decimal check = {{0xcc00000, 0x9f4708ad, 0x2856888, 0}};
  float number = 7.80250789e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1698) {
  s21_decimal check = {{0xcc00000, 0x9f4708ad, 0x2856888, 0x80000000}};
  float number = -7.80250789e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1699) {
  s21_decimal check = {{0xced40000, 0xd335a8c, 0x19ad, 0}};
  float number = 1.21251368e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1700) {
  s21_decimal check = {{0xced40000, 0xd335a8c, 0x19ad, 0x80000000}};
  float number = -1.21251368e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1701) {
  s21_decimal check = {{0x2bc091, 0, 0, 0x40000}};
  float number = 2.86734528e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1702) {
  s21_decimal check = {{0x2bc091, 0, 0, 0x80040000}};
  float number = -2.86734528e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1703) {
  s21_decimal check = {{0x8, 0, 0, 0x1c0000}};
  float number = 7.76409335e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1704) {
  s21_decimal check = {{0x8, 0, 0, 0x801c0000}};
  float number = -7.76409335e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1705) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 1.61393098e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1706) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -1.61393098e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1707) {
  s21_decimal check = {{0x33a052, 0, 0, 0x150000}};
  float number = 3.38337760e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1708) {
  s21_decimal check = {{0x33a052, 0, 0, 0x80150000}};
  float number = -3.38337760e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1709) {
  s21_decimal check = {{0x1ffd18, 0, 0, 0x20000}};
  float number = 2.09640762e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1710) {
  s21_decimal check = {{0x1ffd18, 0, 0, 0x80020000}};
  float number = -2.09640762e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1711) {
  s21_decimal check = {{0x46e4f7, 0, 0, 0xa0000}};
  float number = 4.64613491e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1712) {
  s21_decimal check = {{0x46e4f7, 0, 0, 0x800a0000}};
  float number = -4.64613491e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1713) {
  s21_decimal check = {{0x18ea83, 0, 0, 0x160000}};
  float number = 1.63289940e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1714) {
  s21_decimal check = {{0x18ea83, 0, 0, 0x80160000}};
  float number = -1.63289940e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1715) {
  s21_decimal check = {{0x41ee0000, 0x256d8e01, 0x508f, 0}};
  float number = 3.80429941e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1716) {
  s21_decimal check = {{0x41ee0000, 0x256d8e01, 0x508f, 0x80000000}};
  float number = -3.80429941e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1717) {
  s21_decimal check = {{0xf49f9, 0, 0, 0x40000}};
  float number = 1.00197678e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1718) {
  s21_decimal check = {{0xf49f9, 0, 0, 0x80040000}};
  float number = -1.00197678e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1719) {
  s21_decimal check = {{0x999d8, 0, 0, 0x10000}};
  float number = 6.29207969e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1720) {
  s21_decimal check = {{0x999d8, 0, 0, 0x80010000}};
  float number = -6.29207969e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1721) {
  s21_decimal check = {{0x46819f, 0, 0, 0xd0000}};
  float number = 4.62070318e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1722) {
  s21_decimal check = {{0x46819f, 0, 0, 0x800d0000}};
  float number = -4.62070318e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1723) {
  s21_decimal check = {{0xfbfe2, 0, 0, 0x40000}};
  float number = 1.03216202e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1724) {
  s21_decimal check = {{0xfbfe2, 0, 0, 0x80040000}};
  float number = -1.03216202e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1725) {
  s21_decimal check = {{0x207e4, 0, 0, 0x170000}};
  float number = 1.33091985e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1726) {
  s21_decimal check = {{0x207e4, 0, 0, 0x80170000}};
  float number = -1.33091985e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1727) {
  s21_decimal check = {{0x15, 0, 0, 0x1c0000}};
  float number = 2.07658485e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1728) {
  s21_decimal check = {{0x15, 0, 0, 0x801c0000}};
  float number = -2.07658485e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1729) {
  s21_decimal check = {{0x727f8a, 0, 0, 0xd0000}};
  float number = 7.50375364e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1730) {
  s21_decimal check = {{0x727f8a, 0, 0, 0x800d0000}};
  float number = -7.50375364e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1731) {
  s21_decimal check = {{0x42995e, 0, 0, 0x80000}};
  float number = 4.36463840e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1732) {
  s21_decimal check = {{0x42995e, 0, 0, 0x80080000}};
  float number = -4.36463840e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1733) {
  s21_decimal check = {{0x2766aa, 0, 0, 0xc0000}};
  float number = 2.58218643e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1734) {
  s21_decimal check = {{0x2766aa, 0, 0, 0x800c0000}};
  float number = -2.58218643e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1735) {
  s21_decimal check = {{0xe14, 0, 0, 0x1c0000}};
  float number = 3.60375229e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1736) {
  s21_decimal check = {{0xe14, 0, 0, 0x801c0000}};
  float number = -3.60375229e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1737) {
  s21_decimal check = {{0x4664c3, 0, 0, 0x100000}};
  float number = 4.61331529e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1738) {
  s21_decimal check = {{0x4664c3, 0, 0, 0x80100000}};
  float number = -4.61331529e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1739) {
  s21_decimal check = {{0x12fad9, 0, 0, 0xe0000}};
  float number = 1.24386528e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1740) {
  s21_decimal check = {{0x12fad9, 0, 0, 0x800e0000}};
  float number = -1.24386528e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1741) {
  s21_decimal check = {{0xf4026a00, 0x6002, 0, 0}};
  float number = 1.05565791e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1742) {
  s21_decimal check = {{0xf4026a00, 0x6002, 0, 0x80000000}};
  float number = -1.05565791e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1743) {
  s21_decimal check = {{0x325ab6, 0, 0, 0x120000}};
  float number = 3.30002215e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1744) {
  s21_decimal check = {{0x325ab6, 0, 0, 0x80120000}};
  float number = -3.30002215e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1745) {
  s21_decimal check = {{0x754b17, 0, 0, 0x190000}};
  float number = 7.68693463e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1746) {
  s21_decimal check = {{0x754b17, 0, 0, 0x80190000}};
  float number = -7.68693463e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1747) {
  s21_decimal check = {{0xc91c0000, 0xaa83e6cb, 0x60b, 0}};
  float number = 2.85494034e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1748) {
  s21_decimal check = {{0xc91c0000, 0xaa83e6cb, 0x60b, 0x80000000}};
  float number = -2.85494034e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1749) {
  s21_decimal check = {{0x7cd11b, 0, 0, 0x50000}};
  float number = 8.17999496e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1750) {
  s21_decimal check = {{0x7cd11b, 0, 0, 0x80050000}};
  float number = -8.17999496e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1751) {
  s21_decimal check = {{0x4fc85000, 0x40181d4, 0, 0}};
  float number = 2.88654581e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1752) {
  s21_decimal check = {{0x4fc85000, 0x40181d4, 0, 0x80000000}};
  float number = -2.88654581e+17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1753) {
  s21_decimal check = {{0xe2b00000, 0xb1a10cab, 0x1bc71, 0}};
  float number = 2.09882774e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1754) {
  s21_decimal check = {{0xe2b00000, 0xb1a10cab, 0x1bc71, 0x80000000}};
  float number = -2.09882774e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1755) {
  s21_decimal check = {{0xb57b6d80, 0x987, 0, 0}};
  float number = 1.04784661e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1756) {
  s21_decimal check = {{0xb57b6d80, 0x987, 0, 0x80000000}};
  float number = -1.04784661e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1757) {
  s21_decimal check = {{0x7c3b08, 0, 0, 0x1a0000}};
  float number = 8.14157623e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1758) {
  s21_decimal check = {{0x7c3b08, 0, 0, 0x801a0000}};
  float number = -8.14157623e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1759) {
  s21_decimal check = {{0x168552, 0, 0, 0x120000}};
  float number = 1.47592203e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1760) {
  s21_decimal check = {{0x168552, 0, 0, 0x80120000}};
  float number = -1.47592203e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1761) {
  s21_decimal check = {{0x9f280000, 0x8810e371, 0x1b26e, 0}};
  float number = 2.05154571e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1762) {
  s21_decimal check = {{0x9f280000, 0x8810e371, 0x1b26e, 0x80000000}};
  float number = -2.05154571e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1763) {
  s21_decimal check = {{0x191ab7d8, 0, 0, 0}};
  float number = 4.21181408e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1764) {
  s21_decimal check = {{0x191ab7d8, 0, 0, 0x80000000}};
  float number = -4.21181408e+08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1765) {
  s21_decimal check = {{0xd9c00000, 0x486fda2c, 0x2bc1, 0}};
  float number = 2.06627169e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1766) {
  s21_decimal check = {{0xd9c00000, 0x486fda2c, 0x2bc1, 0x80000000}};
  float number = -2.06627169e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1767) {
  s21_decimal check = {{0x48f55f, 0, 0, 0xe0000}};
  float number = 4.78140691e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1768) {
  s21_decimal check = {{0x48f55f, 0, 0, 0x800e0000}};
  float number = -4.78140691e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1769) {
  s21_decimal check = {{0x378010, 0, 0, 0xe0000}};
  float number = 3.63726436e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1770) {
  s21_decimal check = {{0x378010, 0, 0, 0x800e0000}};
  float number = -3.63726436e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1771) {
  s21_decimal check = {{0x4a3413, 0, 0, 0x120000}};
  float number = 4.86299542e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1772) {
  s21_decimal check = {{0x4a3413, 0, 0, 0x80120000}};
  float number = -4.86299542e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1773) {
  s21_decimal check = {{0x1be389, 0, 0, 0x190000}};
  float number = 1.82772135e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1774) {
  s21_decimal check = {{0x1be389, 0, 0, 0x80190000}};
  float number = -1.82772135e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1775) {
  s21_decimal check = {{0x435d69, 0, 0, 0x130000}};
  float number = 4.41482463e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1776) {
  s21_decimal check = {{0x435d69, 0, 0, 0x80130000}};
  float number = -4.41482463e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1777) {
  s21_decimal check = {{0x83b0b7, 0, 0, 0x80000}};
  float number = 8.63045529e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1778) {
  s21_decimal check = {{0x83b0b7, 0, 0, 0x80080000}};
  float number = -8.63045529e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1779) {
  s21_decimal check = {{0x11394d, 0, 0, 0x30000}};
  float number = 1.12878113e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1780) {
  s21_decimal check = {{0x11394d, 0, 0, 0x80030000}};
  float number = -1.12878113e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1781) {
  s21_decimal check = {{0xd0900000, 0xcc5ef7a5, 0x11e17bd, 0}};
  float number = 3.45864867e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1782) {
  s21_decimal check = {{0xd0900000, 0xcc5ef7a5, 0x11e17bd, 0x80000000}};
  float number = -3.45864867e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1783) {
  s21_decimal check = {{0x184c90, 0, 0, 0xc0000}};
  float number = 1.59246395e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1784) {
  s21_decimal check = {{0x184c90, 0, 0, 0x800c0000}};
  float number = -1.59246395e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1785) {
  s21_decimal check = {{0x2eb475, 0, 0, 0xa0000}};
  float number = 3.06085334e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1786) {
  s21_decimal check = {{0x2eb475, 0, 0, 0x800a0000}};
  float number = -3.06085334e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1787) {
  s21_decimal check = {{0x19, 0, 0, 0x1c0000}};
  float number = 2.51718273e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1788) {
  s21_decimal check = {{0x19, 0, 0, 0x801c0000}};
  float number = -2.51718273e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1789) {
  s21_decimal check = {{0xfc6a8800, 0xdd8c, 0, 0}};
  float number = 2.43597559e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1790) {
  s21_decimal check = {{0xfc6a8800, 0xdd8c, 0, 0x80000000}};
  float number = -2.43597559e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1791) {
  s21_decimal check = {{0x670ab, 0, 0, 0x1c0000}};
  float number = 4.22058854e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1792) {
  s21_decimal check = {{0x670ab, 0, 0, 0x801c0000}};
  float number = -4.22058854e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1793) {
  s21_decimal check = {{0x3e0970, 0, 0, 0x140000}};
  float number = 4.06564769e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1794) {
  s21_decimal check = {{0x3e0970, 0, 0, 0x80140000}};
  float number = -4.06564769e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1795) {
  s21_decimal check = {{0x175828, 0, 0, 0x20000}};
  float number = 1.52989609e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1796) {
  s21_decimal check = {{0x175828, 0, 0, 0x80020000}};
  float number = -1.52989609e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1797) {
  s21_decimal check = {{0x6194e560, 0, 0, 0}};
  float number = 1.63714765e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1798) {
  s21_decimal check = {{0x6194e560, 0, 0, 0x80000000}};
  float number = -1.63714765e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1799) {
  s21_decimal check = {{0x68c65d, 0, 0, 0xc0000}};
  float number = 6.86652493e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1800) {
  s21_decimal check = {{0x68c65d, 0, 0, 0x800c0000}};
  float number = -6.86652493e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1801) {
  s21_decimal check = {{0x190be000, 0x46348443, 0x4, 0}};
  float number = 7.88457853e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1802) {
  s21_decimal check = {{0x190be000, 0x46348443, 0x4, 0x80000000}};
  float number = -7.88457853e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1803) {
  s21_decimal check = {{0x65dba000, 0x51b7d5b2, 0, 0}};
  float number = 5.88840978e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1804) {
  s21_decimal check = {{0x65dba000, 0x51b7d5b2, 0, 0x80000000}};
  float number = -5.88840978e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1805) {
  s21_decimal check = {{0xb83e0000, 0x7f56c8bf, 0xdac, 0}};
  float number = 6.45727826e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1806) {
  s21_decimal check = {{0xb83e0000, 0x7f56c8bf, 0xdac, 0x80000000}};
  float number = -6.45727826e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1807) {
  s21_decimal check = {{0x4e84b, 0, 0, 0x90000}};
  float number = 3.21611034e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1808) {
  s21_decimal check = {{0x4e84b, 0, 0, 0x80090000}};
  float number = -3.21611034e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1809) {
  s21_decimal check = {{0xca800000, 0x9870bcbd, 0x1d4b014, 0}};
  float number = 5.66608752e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1810) {
  s21_decimal check = {{0xca800000, 0x9870bcbd, 0x1d4b014, 0x80000000}};
  float number = -5.66608752e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1811) {
  s21_decimal check = {{0x2159, 0, 0, 0x1c0000}};
  float number = 8.53727853e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1812) {
  s21_decimal check = {{0x2159, 0, 0, 0x801c0000}};
  float number = -8.53727853e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1813) {
  s21_decimal check = {{0x3c089f30, 0, 0, 0}};
  float number = 1.00719846e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1814) {
  s21_decimal check = {{0x3c089f30, 0, 0, 0x80000000}};
  float number = -1.00719846e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1815) {
  s21_decimal check = {{0x2c180000, 0xa364f2d2, 0x740b, 0}};
  float number = 5.48009208e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1816) {
  s21_decimal check = {{0x2c180000, 0xa364f2d2, 0x740b, 0x80000000}};
  float number = -5.48009208e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1817) {
  s21_decimal check = {{0x2106f2, 0, 0, 0x50000}};
  float number = 2.16446609e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1818) {
  s21_decimal check = {{0x2106f2, 0, 0, 0x80050000}};
  float number = -2.16446609e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1819) {
  s21_decimal check = {{0x191ba1, 0, 0, 0x20000}};
  float number = 1.64547344e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1820) {
  s21_decimal check = {{0x191ba1, 0, 0, 0x80020000}};
  float number = -1.64547344e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1821) {
  s21_decimal check = {{0x21a13c, 0, 0, 0x100000}};
  float number = 2.20396382e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1822) {
  s21_decimal check = {{0x21a13c, 0, 0, 0x80100000}};
  float number = -2.20396382e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1823) {
  s21_decimal check = {{0x59547, 0, 0, 0x110000}};
  float number = 3.65895031e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1824) {
  s21_decimal check = {{0x59547, 0, 0, 0x80110000}};
  float number = -3.65895031e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1825) {
  s21_decimal check = {{0x4a27ff, 0, 0, 0x20000}};
  float number = 4.85990273e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1826) {
  s21_decimal check = {{0x4a27ff, 0, 0, 0x80020000}};
  float number = -4.85990273e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1827) {
  s21_decimal check = {{0xd7b, 0, 0, 0x1c0000}};
  float number = 3.45149079e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1828) {
  s21_decimal check = {{0xd7b, 0, 0, 0x801c0000}};
  float number = -3.45149079e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1829) {
  s21_decimal check = {{0x2e7a68, 0, 0, 0x80000}};
  float number = 3.04599181e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1830) {
  s21_decimal check = {{0x2e7a68, 0, 0, 0x80080000}};
  float number = -3.04599181e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1831) {
  s21_decimal check = {{0x5591ac, 0, 0, 0x40000}};
  float number = 5.60785217e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1832) {
  s21_decimal check = {{0x5591ac, 0, 0, 0x80040000}};
  float number = -5.60785217e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1833) {
  s21_decimal check = {{0x497325, 0, 0, 0xa0000}};
  float number = 4.81360476e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1834) {
  s21_decimal check = {{0x497325, 0, 0, 0x800a0000}};
  float number = -4.81360476e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1835) {
  s21_decimal check = {{0xd40224, 0, 0, 0}};
  float number = 1.38941810e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1836) {
  s21_decimal check = {{0xd40224, 0, 0, 0x80000000}};
  float number = -1.38941810e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1837) {
  s21_decimal check = {{0x2ab427, 0, 0, 0x80000}};
  float number = 2.79863067e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1838) {
  s21_decimal check = {{0x2ab427, 0, 0, 0x80080000}};
  float number = -2.79863067e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1839) {
  s21_decimal check = {{0x9de20000, 0x1ef5c2bb, 0x1f69, 0}};
  float number = 1.48332521e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1840) {
  s21_decimal check = {{0x9de20000, 0x1ef5c2bb, 0x1f69, 0x80000000}};
  float number = -1.48332521e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1841) {
  s21_decimal check = {{0x3b707, 0, 0, 0x1a0000}};
  float number = 2.43463044e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1842) {
  s21_decimal check = {{0x3b707, 0, 0, 0x801a0000}};
  float number = -2.43463044e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1843) {
  s21_decimal check = {{0x931c0000, 0xb0cdb2bd, 0x48db6, 0}};
  float number = 5.50492694e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1844) {
  s21_decimal check = {{0x931c0000, 0xb0cdb2bd, 0x48db6, 0x80000000}};
  float number = -5.50492694e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1845) {
  s21_decimal check = {{0x1faa84, 0, 0, 0xc0000}};
  float number = 2.07526796e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1846) {
  s21_decimal check = {{0x1faa84, 0, 0, 0x800c0000}};
  float number = -2.07526796e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1847) {
  s21_decimal check = {{0x201b3f, 0, 0, 0x10000}};
  float number = 2.10412734e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1848) {
  s21_decimal check = {{0x201b3f, 0, 0, 0x80010000}};
  float number = -2.10412734e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1849) {
  s21_decimal check = {{0x1b1109, 0, 0, 0x170000}};
  float number = 1.77383291e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1850) {
  s21_decimal check = {{0x1b1109, 0, 0, 0x80170000}};
  float number = -1.77383291e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1851) {
  s21_decimal check = {{0x3380f3, 0, 0, 0x190000}};
  float number = 3.37534668e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1852) {
  s21_decimal check = {{0x3380f3, 0, 0, 0x80190000}};
  float number = -3.37534668e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1853) {
  s21_decimal check = {{0x4966c070, 0x1, 0, 0}};
  float number = 5.52643840e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1854) {
  s21_decimal check = {{0x4966c070, 0x1, 0, 0x80000000}};
  float number = -5.52643840e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1855) {
  s21_decimal check = {{0x85000000, 0x3aeb40b8, 0x7c33ec, 0}};
  float number = 1.50151996e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1856) {
  s21_decimal check = {{0x85000000, 0x3aeb40b8, 0x7c33ec, 0x80000000}};
  float number = -1.50151996e+26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1857) {
  s21_decimal check = {{0xad980000, 0x5fa79dad, 0x303778, 0}};
  float number = 5.82903923e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1858) {
  s21_decimal check = {{0xad980000, 0x5fa79dad, 0x303778, 0x80000000}};
  float number = -5.82903923e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1859) {
  s21_decimal check = {{0x1e9260, 0, 0, 0x140000}};
  float number = 2.00355191e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1860) {
  s21_decimal check = {{0x1e9260, 0, 0, 0x80140000}};
  float number = -2.00355191e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1861) {
  s21_decimal check = {{0x75fbc7, 0, 0, 0xe0000}};
  float number = 7.73216726e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1862) {
  s21_decimal check = {{0x75fbc7, 0, 0, 0x800e0000}};
  float number = -7.73216726e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1863) {
  s21_decimal check = {{0x151b68, 0, 0, 0x180000}};
  float number = 1.38327191e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1864) {
  s21_decimal check = {{0x151b68, 0, 0, 0x80180000}};
  float number = -1.38327191e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1865) {
  s21_decimal check = {{0xf1208000, 0x8e2a638c, 0x164, 0}};
  float number = 6.57728545e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1866) {
  s21_decimal check = {{0xf1208000, 0x8e2a638c, 0x164, 0x80000000}};
  float number = -6.57728545e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1867) {
  s21_decimal check = {{0x59414a, 0, 0, 0x30000}};
  float number = 5.84941846e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1868) {
  s21_decimal check = {{0x59414a, 0, 0, 0x80030000}};
  float number = -5.84941846e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1869) {
  s21_decimal check = {{0x8ad461, 0, 0, 0x150000}};
  float number = 9.09833749e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1870) {
  s21_decimal check = {{0x8ad461, 0, 0, 0x80150000}};
  float number = -9.09833749e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1871) {
  s21_decimal check = {{0x31690000, 0xa4206e55, 0x1257, 0}};
  float number = 8.66192899e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1872) {
  s21_decimal check = {{0x31690000, 0xa4206e55, 0x1257, 0x80000000}};
  float number = -8.66192899e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1873) {
  s21_decimal check = {{0x319050, 0, 0, 0x30000}};
  float number = 3.24820801e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1874) {
  s21_decimal check = {{0x319050, 0, 0, 0x80030000}};
  float number = -3.24820801e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1875) {
  s21_decimal check = {{0x314d25, 0, 0, 0x120000}};
  float number = 3.23101333e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1876) {
  s21_decimal check = {{0x314d25, 0, 0, 0x80120000}};
  float number = -3.23101333e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1877) {
  s21_decimal check = {{0x3f84ed, 0, 0, 0x170000}};
  float number = 4.16279669e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1878) {
  s21_decimal check = {{0x3f84ed, 0, 0, 0x80170000}};
  float number = -4.16279669e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1879) {
  s21_decimal check = {{0x3ddd4f, 0, 0, 0x1c0000}};
  float number = 4.05435075e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1880) {
  s21_decimal check = {{0x3ddd4f, 0, 0, 0x801c0000}};
  float number = -4.05435075e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1881) {
  s21_decimal check = {{0x46bef6, 0, 0, 0x90000}};
  float number = 4.63640597e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1882) {
  s21_decimal check = {{0x46bef6, 0, 0, 0x80090000}};
  float number = -4.63640597e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1883) {
  s21_decimal check = {{0xcea, 0, 0, 0x1c0000}};
  float number = 3.30625805e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1884) {
  s21_decimal check = {{0xcea, 0, 0, 0x801c0000}};
  float number = -3.30625805e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1885) {
  s21_decimal check = {{0x1a4d6, 0, 0, 0x10000}};
  float number = 1.07734004e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1886) {
  s21_decimal check = {{0x1a4d6, 0, 0, 0x80010000}};
  float number = -1.07734004e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1887) {
  s21_decimal check = {{0x51041700, 0x11a, 0, 0}};
  float number = 1.21254013e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1888) {
  s21_decimal check = {{0x51041700, 0x11a, 0, 0x80000000}};
  float number = -1.21254013e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1889) {
  s21_decimal check = {{0x3e9, 0, 0, 0x1c0000}};
  float number = 1.00056701e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1890) {
  s21_decimal check = {{0x3e9, 0, 0, 0x801c0000}};
  float number = -1.00056701e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1891) {
  s21_decimal check = {{0x461d7f, 0, 0, 0x70000}};
  float number = 4.59507078e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1892) {
  s21_decimal check = {{0x461d7f, 0, 0, 0x80070000}};
  float number = -4.59507078e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1893) {
  s21_decimal check = {{0x1e9b654, 0, 0, 0}};
  float number = 3.20937760e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1894) {
  s21_decimal check = {{0x1e9b654, 0, 0, 0x80000000}};
  float number = -3.20937760e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1895) {
  s21_decimal check = {{0x45666b, 0, 0, 0x180000}};
  float number = 4.54820297e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1896) {
  s21_decimal check = {{0x45666b, 0, 0, 0x80180000}};
  float number = -4.54820297e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1897) {
  s21_decimal check = {{0x611fe, 0, 0, 0xd0000}};
  float number = 3.97821971e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1898) {
  s21_decimal check = {{0x611fe, 0, 0, 0x800d0000}};
  float number = -3.97821971e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1899) {
  s21_decimal check = {{0x16, 0, 0, 0x1c0000}};
  float number = 2.20014597e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1900) {
  s21_decimal check = {{0x16, 0, 0, 0x801c0000}};
  float number = -2.20014597e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1901) {
  s21_decimal check = {{0x80a89f, 0, 0, 0x80000}};
  float number = 8.43177512e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1902) {
  s21_decimal check = {{0x80a89f, 0, 0, 0x80080000}};
  float number = -8.43177512e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1903) {
  s21_decimal check = {{0x165b93, 0, 0, 0x90000}};
  float number = 1.46523479e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1904) {
  s21_decimal check = {{0x165b93, 0, 0, 0x80090000}};
  float number = -1.46523479e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1905) {
  s21_decimal check = {{0x78c80000, 0x7661957c, 0x39af, 0}};
  float number = 2.72411573e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1906) {
  s21_decimal check = {{0x78c80000, 0x7661957c, 0x39af, 0x80000000}};
  float number = -2.72411573e+23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1907) {
  s21_decimal check = {{0x1018ef, 0, 0, 0x20000}};
  float number = 1.05495869e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1908) {
  s21_decimal check = {{0x1018ef, 0, 0, 0x80020000}};
  float number = -1.05495869e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1909) {
  s21_decimal check = {{0x2330e, 0, 0, 0x1c0000}};
  float number = 1.44142447e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1910) {
  s21_decimal check = {{0x2330e, 0, 0, 0x801c0000}};
  float number = -1.44142447e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1911) {
  s21_decimal check = {{0x2a1bd0c0, 0x6a0, 0, 0}};
  float number = 7.28497127e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1912) {
  s21_decimal check = {{0x2a1bd0c0, 0x6a0, 0, 0x80000000}};
  float number = -7.28497127e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1913) {
  s21_decimal check = {{0x42711, 0, 0, 0x130000}};
  float number = 2.72145045e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1914) {
  s21_decimal check = {{0x42711, 0, 0, 0x80130000}};
  float number = -2.72145045e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1915) {
  s21_decimal check = {{0x2f4ee9, 0, 0, 0x1b0000}};
  float number = 3.10039269e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1916) {
  s21_decimal check = {{0x2f4ee9, 0, 0, 0x801b0000}};
  float number = -3.10039269e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1917) {
  s21_decimal check = {{0x721, 0, 0, 0x1c0000}};
  float number = 1.82536090e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1918) {
  s21_decimal check = {{0x721, 0, 0, 0x801c0000}};
  float number = -1.82536090e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1919) {
  s21_decimal check = {{0x800ec7, 0, 0, 0}};
  float number = 8.39239100e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1920) {
  s21_decimal check = {{0x800ec7, 0, 0, 0x80000000}};
  float number = -8.39239100e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1921) {
  s21_decimal check = {{0x7ca684, 0, 0, 0x170000}};
  float number = 8.16909213e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1922) {
  s21_decimal check = {{0x7ca684, 0, 0, 0x80170000}};
  float number = -8.16909213e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1923) {
  s21_decimal check = {{0x32b577, 0, 0, 0x60000}};
  float number = 3.32325506e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1924) {
  s21_decimal check = {{0x32b577, 0, 0, 0x80060000}};
  float number = -3.32325506e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1925) {
  s21_decimal check = {{0xfb553400, 0x842ee, 0, 0}};
  float number = 2.32539381e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1926) {
  s21_decimal check = {{0xfb553400, 0x842ee, 0, 0x80000000}};
  float number = -2.32539381e+15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1927) {
  s21_decimal check = {{0xd7bc, 0, 0, 0x1c0000}};
  float number = 5.52278798e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1928) {
  s21_decimal check = {{0xd7bc, 0, 0, 0x801c0000}};
  float number = -5.52278798e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1929) {
  s21_decimal check = {{0x17, 0, 0, 0x1c0000}};
  float number = 2.31565034e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1930) {
  s21_decimal check = {{0x17, 0, 0, 0x801c0000}};
  float number = -2.31565034e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1931) {
  s21_decimal check = {{0x97880000, 0xae217320, 0x20c9c4, 0}};
  float number = 3.96384467e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1932) {
  s21_decimal check = {{0x97880000, 0xae217320, 0x20c9c4, 0x80000000}};
  float number = -3.96384467e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1933) {
  s21_decimal check = {{0x5abfa7, 0, 0, 0x160000}};
  float number = 5.94730261e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1934) {
  s21_decimal check = {{0x5abfa7, 0, 0, 0x80160000}};
  float number = -5.94730261e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1935) {
  s21_decimal check = {{0xfe739000, 0x39004e57, 0, 0}};
  float number = 4.10736890e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1936) {
  s21_decimal check = {{0xfe739000, 0x39004e57, 0, 0x80000000}};
  float number = -4.10736890e+18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1937) {
  s21_decimal check = {{0x11d63d8, 0, 0, 0}};
  float number = 1.87033180e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1938) {
  s21_decimal check = {{0x11d63d8, 0, 0, 0x80000000}};
  float number = -1.87033180e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1939) {
  s21_decimal check = {{0x8b165b, 0, 0, 0xe0000}};
  float number = 9.11522733e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1940) {
  s21_decimal check = {{0x8b165b, 0, 0, 0x800e0000}};
  float number = -9.11522733e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1941) {
  s21_decimal check = {{0x13131000, 0x13c48ee, 0, 0}};
  float number = 8.90262797e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1942) {
  s21_decimal check = {{0x13131000, 0x13c48ee, 0, 0x80000000}};
  float number = -8.90262797e+16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1943) {
  s21_decimal check = {{0xbc800000, 0xc7d94659, 0x3d7df8, 0}};
  float number = 7.43393594e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1944) {
  s21_decimal check = {{0xbc800000, 0xc7d94659, 0x3d7df8, 0x80000000}};
  float number = -7.43393594e+25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1945) {
  s21_decimal check = {{0x19841d, 0, 0, 0x150000}};
  float number = 1.67222081e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1946) {
  s21_decimal check = {{0x19841d, 0, 0, 0x80150000}};
  float number = -1.67222081e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1947) {
  s21_decimal check = {{0x3507da, 0, 0, 0x190000}};
  float number = 3.47541821e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1948) {
  s21_decimal check = {{0x3507da, 0, 0, 0x80190000}};
  float number = -3.47541821e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1949) {
  s21_decimal check = {{0x1a1063, 0, 0, 0x130000}};
  float number = 1.70813098e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1950) {
  s21_decimal check = {{0x1a1063, 0, 0, 0x80130000}};
  float number = -1.70813098e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1951) {
  s21_decimal check = {{0x5f810000, 0x88c8dcc3, 0x190, 0}};
  float number = 7.38855376e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1952) {
  s21_decimal check = {{0x5f810000, 0x88c8dcc3, 0x190, 0x80000000}};
  float number = -7.38855376e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1953) {
  s21_decimal check = {{0x5207f4, 0, 0, 0x180000}};
  float number = 5.37598825e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1954) {
  s21_decimal check = {{0x5207f4, 0, 0, 0x80180000}};
  float number = -5.37598825e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1955) {
  s21_decimal check = {{0x829365, 0, 0, 0x70000}};
  float number = 8.55741262e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1956) {
  s21_decimal check = {{0x829365, 0, 0, 0x80070000}};
  float number = -8.55741262e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1957) {
  s21_decimal check = {{0x19658, 0, 0, 0xd0000}};
  float number = 1.04024034e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1958) {
  s21_decimal check = {{0x19658, 0, 0, 0x800d0000}};
  float number = -1.04024034e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1959) {
  s21_decimal check = {{0x1c79fa, 0, 0, 0x50000}};
  float number = 1.86623402e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1960) {
  s21_decimal check = {{0x1c79fa, 0, 0, 0x80050000}};
  float number = -1.86623402e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1961) {
  s21_decimal check = {{0xf92f6, 0, 0, 0xe0000}};
  float number = 1.02066178e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1962) {
  s21_decimal check = {{0xf92f6, 0, 0, 0x800e0000}};
  float number = -1.02066178e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1963) {
  s21_decimal check = {{0x12e57b, 0, 0, 0x110000}};
  float number = 1.23839506e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1964) {
  s21_decimal check = {{0x12e57b, 0, 0, 0x80110000}};
  float number = -1.23839506e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1965) {
  s21_decimal check = {{0xf81cc, 0, 0, 0xb0000}};
  float number = 1.01626838e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1966) {
  s21_decimal check = {{0xf81cc, 0, 0, 0x800b0000}};
  float number = -1.01626838e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1967) {
  s21_decimal check = {{0x288bba00, 0xef83, 0, 0}};
  float number = 2.63346624e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1968) {
  s21_decimal check = {{0x288bba00, 0xef83, 0, 0x80000000}};
  float number = -2.63346624e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1969) {
  s21_decimal check = {{0x23bd9d, 0, 0, 0x10000}};
  float number = 2.34230062e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1970) {
  s21_decimal check = {{0x23bd9d, 0, 0, 0x80010000}};
  float number = -2.34230062e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1971) {
  s21_decimal check = {{0x8eb1a800, 0x185e, 0, 0}};
  float number = 2.67943988e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1972) {
  s21_decimal check = {{0x8eb1a800, 0x185e, 0, 0x80000000}};
  float number = -2.67943988e+13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1973) {
  s21_decimal check = {{0xc43f, 0, 0, 0x1c0000}};
  float number = 5.02389341e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1974) {
  s21_decimal check = {{0xc43f, 0, 0, 0x801c0000}};
  float number = -5.02389341e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1975) {
  s21_decimal check = {{0x2f562c, 0, 0, 0x1b0000}};
  float number = 3.10225183e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1976) {
  s21_decimal check = {{0x2f562c, 0, 0, 0x801b0000}};
  float number = -3.10225183e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1977) {
  s21_decimal check = {{0x1d90ce, 0, 0, 0x120000}};
  float number = 1.93761370e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1978) {
  s21_decimal check = {{0x1d90ce, 0, 0, 0x80120000}};
  float number = -1.93761370e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1979) {
  s21_decimal check = {{0x99833, 0, 0, 0xf0000}};
  float number = 6.28786967e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1980) {
  s21_decimal check = {{0x99833, 0, 0, 0x800f0000}};
  float number = -6.28786967e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1981) {
  s21_decimal check = {{0x5d585b, 0, 0, 0x80000}};
  float number = 6.11746721e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1982) {
  s21_decimal check = {{0x5d585b, 0, 0, 0x80080000}};
  float number = -6.11746721e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1983) {
  s21_decimal check = {{0x1011bf, 0, 0, 0x140000}};
  float number = 1.05311920e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1984) {
  s21_decimal check = {{0x1011bf, 0, 0, 0x80140000}};
  float number = -1.05311920e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1985) {
  s21_decimal check = {{0x704, 0, 0, 0x1c0000}};
  float number = 1.79615123e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1986) {
  s21_decimal check = {{0x704, 0, 0, 0x801c0000}};
  float number = -1.79615123e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1987) {
  s21_decimal check = {{0x23ab6a, 0, 0, 0xc0000}};
  float number = 2.33764240e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1988) {
  s21_decimal check = {{0x23ab6a, 0, 0, 0x800c0000}};
  float number = -2.33764240e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1989) {
  s21_decimal check = {{0xa71ae280, 0x256, 0, 0}};
  float number = 2.57119381e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1990) {
  s21_decimal check = {{0xa71ae280, 0x256, 0, 0x80000000}};
  float number = -2.57119381e+12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1991) {
  s21_decimal check = {{0x45b9af00, 0x280c9, 0, 0}};
  float number = 7.04551938e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1992) {
  s21_decimal check = {{0x45b9af00, 0x280c9, 0, 0x80000000}};
  float number = -7.04551938e+14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1993) {
  s21_decimal check = {{0x53847, 0, 0, 0x1c0000}};
  float number = 3.42087291e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1994) {
  s21_decimal check = {{0x53847, 0, 0, 0x801c0000}};
  float number = -3.42087291e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1995) {
  s21_decimal check = {{0x985823, 0, 0, 0x120000}};
  float number = 9.98403530e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1996) {
  s21_decimal check = {{0x985823, 0, 0, 0x80120000}};
  float number = -9.98403530e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1997) {
  s21_decimal check = {{0x2a9818, 0, 0, 0x60000}};
  float number = 2.79144812e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1998) {
  s21_decimal check = {{0x2a9818, 0, 0, 0x80060000}};
  float number = -2.79144812e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_1999) {
  s21_decimal check = {{0xbefb0000, 0x8efeae8e, 0xd18, 0}};
  float number = 6.18437859e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2000) {
  s21_decimal check = {{0xbefb0000, 0x8efeae8e, 0xd18, 0x80000000}};
  float number = -6.18437859e+22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2039) {
  s21_decimal check = {{0x19440000, 0x590d4990, 0x35555, 0}};
  float number = 4.02975264e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2040) {
  s21_decimal check = {{0x19440000, 0x590d4990, 0x35555, 0x80000000}};
  float number = -4.02975264e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2041) {
  s21_decimal check = {{0xfd700000, 0x501b713, 0x20000, 0}};
  float number = 2.41785164e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2042) {
  s21_decimal check = {{0xfd700000, 0x501b713, 0x20000, 0x80000000}};
  float number = -2.41785164e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2043) {
  s21_decimal check = {{0x560c0000, 0xf7210060, 0x1ffff, 0}};
  float number = 2.41785150e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2044) {
  s21_decimal check = {{0x560c0000, 0xf7210060, 0x1ffff, 0x80000000}};
  float number = -2.41785150e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2045) {
  s21_decimal check = {{0x560c0000, 0xf7210060, 0x1ffff, 0}};
  float number = 2.41785135e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2046) {
  s21_decimal check = {{0x560c0000, 0xf7210060, 0x1ffff, 0x80000000}};
  float number = -2.41785135e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2047) {
  s21_decimal check = {{0x37a80000, 0xa81724f8, 0x2aaaa, 0}};
  float number = 3.22380199e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2048) {
  s21_decimal check = {{0x37a80000, 0xa81724f8, 0x2aaaa, 0x80000000}};
  float number = -3.22380199e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2049) {
  s21_decimal check = {{0x38f00000, 0xa596496e, 0x1aaaa, 0}};
  float number = 2.01487632e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2050) {
  s21_decimal check = {{0x38f00000, 0xa596496e, 0x1aaaa, 0x80000000}};
  float number = -2.01487632e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2051) {
  s21_decimal check = {{0x1bd40000, 0x540b927c, 0x15555, 0}};
  float number = 1.61190100e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2052) {
  s21_decimal check = {{0x1bd40000, 0x540b927c, 0x15555, 0x80000000}};
  float number = -1.61190100e+24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2053) {
  s21_decimal check = {{0xf16c8000, 0x1f28, 0x200, 0}};
  float number = 9.44473297e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2054) {
  s21_decimal check = {{0xf16c8000, 0x1f28, 0x200, 0x80000000}};
  float number = -9.44473297e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2055) {
  s21_decimal check = {{0x4ca60000, 0xfffc91aa, 0x1ff, 0}};
  float number = 9.44473240e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2056) {
  s21_decimal check = {{0x4ca60000, 0xfffc91aa, 0x1ff, 0x80000000}};
  float number = -9.44473240e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2057) {
  s21_decimal check = {{0x4ca60000, 0xfffc91aa, 0x1ff, 0}};
  float number = 9.44473184e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2058) {
  s21_decimal check = {{0x4ca60000, 0xfffc91aa, 0x1ff, 0x80000000}};
  float number = -9.44473184e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2059) {
  s21_decimal check = {{0x39fb8000, 0xaaab5c37, 0x1aa, 0}};
  float number = 7.87061062e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2060) {
  s21_decimal check = {{0x39fb8000, 0xaaab5c37, 0x1aa, 0x80000000}};
  float number = -7.87061062e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2061) {
  s21_decimal check = {{0xddc40000, 0x55530bc6, 0x155, 0}};
  float number = 6.29648827e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2062) {
  s21_decimal check = {{0xddc40000, 0x55530bc6, 0x155, 0x80000000}};
  float number = -6.29648827e+21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2063) {
  s21_decimal check = {{0x2d078000, 0xfffff694, 0x1f, 0}};
  float number = 5.90295810e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2064) {
  s21_decimal check = {{0x2d078000, 0xfffff694, 0x1f, 0x80000000}};
  float number = -5.90295810e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2065) {
  s21_decimal check = {{0x2d078000, 0xfffff694, 0x1f, 0}};
  float number = 5.90295775e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2066) {
  s21_decimal check = {{0x2d078000, 0xfffff694, 0x1f, 0x80000000}};
  float number = -5.90295775e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2067) {
  s21_decimal check = {{0x1c8d4000, 0xffff9ba1, 0x1f, 0}};
  float number = 5.90295740e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2068) {
  s21_decimal check = {{0x1c8d4000, 0xffff9ba1, 0x1f, 0x80000000}};
  float number = -5.90295740e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2069) {
  s21_decimal check = {{0xd5af0000, 0xaaaac121, 0x1a, 0}};
  float number = 4.91913164e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2070) {
  s21_decimal check = {{0xd5af0000, 0xaaaac121, 0x1a, 0x80000000}};
  float number = -4.91913164e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2071) {
  s21_decimal check = {{0x6ddc4000, 0x555530bc, 0x15, 0}};
  float number = 3.93530517e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2072) {
  s21_decimal check = {{0x6ddc4000, 0x555530bc, 0x15, 0x80000000}};
  float number = -3.93530517e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2073) {
  s21_decimal check = {{0x937f0000, 0x2b1e, 0x8, 0}};
  float number = 1.47573953e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2074) {
  s21_decimal check = {{0x937f0000, 0x2b1e, 0x8, 0x80000000}};
  float number = -1.47573953e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2075) {
  s21_decimal check = {{0x8304c000, 0xffffd02b, 0x7, 0}};
  float number = 1.47573944e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2076) {
  s21_decimal check = {{0x8304c000, 0xffffd02b, 0x7, 0x80000000}};
  float number = -1.47573944e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2077) {
  s21_decimal check = {{0x8304c000, 0xffffd02b, 0x7, 0}};
  float number = 1.47573935e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2078) {
  s21_decimal check = {{0x8304c000, 0xffffd02b, 0x7, 0x80000000}};
  float number = -1.47573935e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2079) {
  s21_decimal check = {{0x756bc000, 0xaaaab048, 0x6, 0}};
  float number = 1.22978291e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2080) {
  s21_decimal check = {{0x756bc000, 0xaaaab048, 0x6, 0x80000000}};
  float number = -1.22978291e+20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2081) {
  s21_decimal check = {{0x42b06000, 0x555550bb, 0x5, 0}};
  float number = 9.83826292e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2082) {
  s21_decimal check = {{0x42b06000, 0x555550bb, 0x5, 0x80000000}};
  float number = -9.83826292e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2083) {
  s21_decimal check = {{0x3ab5e000, 0x55555824, 0x3, 0}};
  float number = 6.14891454e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2084) {
  s21_decimal check = {{0x3ab5e000, 0x55555824, 0x3, 0x80000000}};
  float number = -6.14891454e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2085) {
  s21_decimal check = {{0x566d2000, 0x1af, 0x2, 0}};
  float number = 3.68934881e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2086) {
  s21_decimal check = {{0x566d2000, 0x1af, 0x2, 0x80000000}};
  float number = -3.68934881e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2087) {
  s21_decimal check = {{0x566d2000, 0x1af, 0x2, 0}};
  float number = 3.68934859e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2088) {
  s21_decimal check = {{0x566d2000, 0x1af, 0x2, 0x80000000}};
  float number = -3.68934859e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2089) {
  s21_decimal check = {{0x7fa8000, 0xfffff897, 0x1, 0}};
  float number = 3.68934837e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2090) {
  s21_decimal check = {{0x7fa8000, 0xfffff897, 0x1, 0x80000000}};
  float number = -3.68934837e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2091) {
  s21_decimal check = {{0xf621a000, 0xaaaaa785, 0x1, 0}};
  float number = 3.07445727e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2092) {
  s21_decimal check = {{0xf621a000, 0xaaaaa785, 0x1, 0x80000000}};
  float number = -3.07445727e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2093) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0}};
  float number = 2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2094) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0x80000000}};
  float number = -2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2095) {
  s21_decimal check = {{0xe448c000, 0x55555674, 0x1, 0}};
  float number = 2.45956573e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2096) {
  s21_decimal check = {{0xe448c000, 0x55555674, 0x1, 0x80000000}};
  float number = -2.45956573e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2097) {
  s21_decimal check = {{0x198, 0x2, 0, 0}};
  float number = 8.58993459e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2098) {
  s21_decimal check = {{0x198, 0x2, 0, 0x80000000}};
  float number = -8.58993459e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2099) {
  s21_decimal check = {{0xfffffdb0, 0x1, 0, 0}};
  float number = 8.58993408e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2100) {
  s21_decimal check = {{0xfffffdb0, 0x1, 0, 0x80000000}};
  float number = -8.58993408e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2101) {
  s21_decimal check = {{0xfffffdb0, 0x1, 0, 0}};
  float number = 8.58993357e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2102) {
  s21_decimal check = {{0xfffffdb0, 0x1, 0, 0x80000000}};
  float number = -8.58993357e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2103) {
  s21_decimal check = {{0xaaaaab58, 0x1, 0, 0}};
  float number = 7.15827866e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2104) {
  s21_decimal check = {{0xaaaaab58, 0x1, 0, 0x80000000}};
  float number = -7.15827866e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2105) {
  s21_decimal check = {{0x80000038, 0x1, 0, 0}};
  float number = 6.44245094e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2106) {
  s21_decimal check = {{0x80000038, 0x1, 0, 0x80000000}};
  float number = -6.44245094e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2107) {
  s21_decimal check = {{0x55555518, 0x1, 0, 0}};
  float number = 5.72662272e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2108) {
  s21_decimal check = {{0x55555518, 0x1, 0, 0x80000000}};
  float number = -5.72662272e+09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2109) {
  s21_decimal check = {{0x4e4b3c, 0, 0, 0}};
  float number = 5.13106750e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2110) {
  s21_decimal check = {{0x4e4b3c, 0, 0, 0x80000000}};
  float number = -5.13106750e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2111) {
  s21_decimal check = {{0x4e4b3b, 0, 0, 0}};
  float number = 5.13106700e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2112) {
  s21_decimal check = {{0x4e4b3b, 0, 0, 0x80000000}};
  float number = -5.13106700e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2113) {
  s21_decimal check = {{0x4e4b3a, 0, 0, 0}};
  float number = 5.13106650e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2114) {
  s21_decimal check = {{0x4e4b3a, 0, 0, 0x80000000}};
  float number = -5.13106650e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2115) {
  s21_decimal check = {{0x11423f, 0, 0, 0}};
  float number = 1.13107112e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2116) {
  s21_decimal check = {{0x11423f, 0, 0, 0x80000000}};
  float number = -1.13107112e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2117) {
  s21_decimal check = {{0x11423f, 0, 0, 0}};
  float number = 1.13107100e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2118) {
  s21_decimal check = {{0x11423f, 0, 0, 0x80000000}};
  float number = -1.13107100e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2119) {
  s21_decimal check = {{0x11423f, 0, 0, 0}};
  float number = 1.13107088e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2120) {
  s21_decimal check = {{0x11423f, 0, 0, 0x80000000}};
  float number = -1.13107088e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2121) {
  s21_decimal check = {{0x20000, 0, 0, 0}};
  float number = 1.31071992e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2122) {
  s21_decimal check = {{0x20000, 0, 0, 0x80000000}};
  float number = -1.31071992e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2123) {
  s21_decimal check = {{0x1ffff, 0, 0, 0}};
  float number = 1.31071008e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2124) {
  s21_decimal check = {{0x1ffff, 0, 0, 0x80000000}};
  float number = -1.31071008e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2125) {
  s21_decimal check = {{0x1ffff, 0, 0, 0}};
  float number = 1.31071000e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2126) {
  s21_decimal check = {{0x1ffff, 0, 0, 0x80000000}};
  float number = -1.31071000e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2127) {
  s21_decimal check = {{0x1ffff, 0, 0, 0}};
  float number = 1.31070992e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2128) {
  s21_decimal check = {{0x1ffff, 0, 0, 0x80000000}};
  float number = -1.31070992e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2129) {
  s21_decimal check = {{0x10aaab, 0, 0, 0x10000}};
  float number = 1.09226664e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2130) {
  s21_decimal check = {{0x10aaab, 0, 0, 0x80010000}};
  float number = -1.09226664e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2131) {
  s21_decimal check = {{0x960001, 0, 0, 0x20000}};
  float number = 9.83040078e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2132) {
  s21_decimal check = {{0x960001, 0, 0, 0x80020000}};
  float number = -9.83040078e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2133) {
  s21_decimal check = {{0x18000, 0, 0, 0}};
  float number = 9.83040000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2134) {
  s21_decimal check = {{0x18000, 0, 0, 0x80000000}};
  float number = -9.83040000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2135) {
  s21_decimal check = {{0x95ffff, 0, 0, 0x20000}};
  float number = 9.83039922e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2136) {
  s21_decimal check = {{0x95ffff, 0, 0, 0x80020000}};
  float number = -9.83039922e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2137) {
  s21_decimal check = {{0x855555, 0, 0, 0x20000}};
  float number = 8.73813281e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2138) {
  s21_decimal check = {{0x855555, 0, 0, 0x80020000}};
  float number = -8.73813281e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2139) {
  s21_decimal check = {{0x855535, 0, 0, 0x20000}};
  float number = 8.73810078e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2140) {
  s21_decimal check = {{0x855535, 0, 0, 0x80020000}};
  float number = -8.73810078e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2141) {
  s21_decimal check = {{0x15555, 0, 0, 0}};
  float number = 8.73810000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2142) {
  s21_decimal check = {{0x15555, 0, 0, 0x80000000}};
  float number = -8.73810000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2143) {
  s21_decimal check = {{0x855533, 0, 0, 0x20000}};
  float number = 8.73809922e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2144) {
  s21_decimal check = {{0x855533, 0, 0, 0x80020000}};
  float number = -8.73809922e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2145) {
  s21_decimal check = {{0xc350, 0, 0, 0}};
  float number = 5.00000039e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2146) {
  s21_decimal check = {{0xc350, 0, 0, 0x80000000}};
  float number = -5.00000039e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2147) {
  s21_decimal check = {{0xc350, 0, 0, 0}};
  float number = 5.00000000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2148) {
  s21_decimal check = {{0xc350, 0, 0, 0x80000000}};
  float number = -5.00000000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2149) {
  s21_decimal check = {{0xc350, 0, 0, 0}};
  float number = 4.99999961e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2150) {
  s21_decimal check = {{0xc350, 0, 0, 0x80000000}};
  float number = -4.99999961e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2151) {
  s21_decimal check = {{0x7d00, 0, 0, 0}};
  float number = 3.20000020e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2152) {
  s21_decimal check = {{0x7d00, 0, 0, 0x80000000}};
  float number = -3.20000020e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2153) {
  s21_decimal check = {{0x7d00, 0, 0, 0}};
  float number = 3.20000000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2154) {
  s21_decimal check = {{0x7d00, 0, 0, 0x80000000}};
  float number = -3.20000000e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2155) {
  s21_decimal check = {{0x7d00, 0, 0, 0}};
  float number = 3.19999980e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2156) {
  s21_decimal check = {{0x7d00, 0, 0, 0x80000000}};
  float number = -3.19999980e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2157) {
  s21_decimal check = {{0x400, 0, 0, 0}};
  float number = 1.02400012e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2158) {
  s21_decimal check = {{0x400, 0, 0, 0x80000000}};
  float number = -1.02400012e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2159) {
  s21_decimal check = {{0x400, 0, 0, 0}};
  float number = 1.02400000e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2160) {
  s21_decimal check = {{0x400, 0, 0, 0x80000000}};
  float number = -1.02400000e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2161) {
  s21_decimal check = {{0x400, 0, 0, 0}};
  float number = 1.02399994e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2162) {
  s21_decimal check = {{0x400, 0, 0, 0x80000000}};
  float number = -1.02399994e+03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2163) {
  s21_decimal check = {{0x4e2001, 0, 0, 0x40000}};
  float number = 5.12000061e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2164) {
  s21_decimal check = {{0x4e2001, 0, 0, 0x80040000}};
  float number = -5.12000061e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2165) {
  s21_decimal check = {{0x200, 0, 0, 0}};
  float number = 5.12000000e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2166) {
  s21_decimal check = {{0x200, 0, 0, 0x80000000}};
  float number = -5.12000000e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2167) {
  s21_decimal check = {{0x200, 0, 0, 0}};
  float number = 5.11999969e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2168) {
  s21_decimal check = {{0x200, 0, 0, 0x80000000}};
  float number = -5.11999969e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2169) {
  s21_decimal check = {{0x4e1fff, 0, 0, 0x40000}};
  float number = 5.11999939e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2170) {
  s21_decimal check = {{0x4e1fff, 0, 0, 0x80040000}};
  float number = -5.11999939e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2171) {
  s21_decimal check = {{0x411aab, 0, 0, 0x40000}};
  float number = 4.26666656e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2172) {
  s21_decimal check = {{0x411aab, 0, 0, 0x80040000}};
  float number = -4.26666656e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2173) {
  s21_decimal check = {{0x180, 0, 0, 0}};
  float number = 3.84000000e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2174) {
  s21_decimal check = {{0x180, 0, 0, 0x80000000}};
  float number = -3.84000000e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2175) {
  s21_decimal check = {{0x341555, 0, 0, 0x40000}};
  float number = 3.41333313e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2176) {
  s21_decimal check = {{0x341555, 0, 0, 0x80040000}};
  float number = -3.41333313e+02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2177) {
  s21_decimal check = {{0x61a801, 0, 0, 0x50000}};
  float number = 6.40000076e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2178) {
  s21_decimal check = {{0x61a801, 0, 0, 0x80050000}};
  float number = -6.40000076e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2179) {
  s21_decimal check = {{0x40, 0, 0, 0}};
  float number = 6.40000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2180) {
  s21_decimal check = {{0x40, 0, 0, 0x80000000}};
  float number = -6.40000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2181) {
  s21_decimal check = {{0x40, 0, 0, 0}};
  float number = 6.39999962e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2182) {
  s21_decimal check = {{0x40, 0, 0, 0x80000000}};
  float number = -6.39999962e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2183) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2184) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2185) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.19999981e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2186) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.19999981e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2187) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.19999962e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2188) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.19999962e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2189) {
  s21_decimal check = {{0x28b0ab, 0, 0, 0x50000}};
  float number = 2.66666660e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2190) {
  s21_decimal check = {{0x28b0ab, 0, 0, 0x80050000}};
  float number = -2.66666660e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2191) {
  s21_decimal check = {{0x18, 0, 0, 0}};
  float number = 2.40000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2192) {
  s21_decimal check = {{0x18, 0, 0, 0x80000000}};
  float number = -2.40000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2193) {
  s21_decimal check = {{0x208d55, 0, 0, 0x50000}};
  float number = 2.13333321e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2194) {
  s21_decimal check = {{0x208d55, 0, 0, 0x80050000}};
  float number = -2.13333321e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2195) {
  s21_decimal check = {{0x10, 0, 0, 0}};
  float number = 1.60000019e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2196) {
  s21_decimal check = {{0x10, 0, 0, 0x80000000}};
  float number = -1.60000019e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2197) {
  s21_decimal check = {{0x10, 0, 0, 0}};
  float number = 1.60000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2198) {
  s21_decimal check = {{0x10, 0, 0, 0x80000000}};
  float number = -1.60000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2199) {
  s21_decimal check = {{0x10, 0, 0, 0}};
  float number = 1.59999990e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2200) {
  s21_decimal check = {{0x10, 0, 0, 0x80000000}};
  float number = -1.59999990e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2201) {
  s21_decimal check = {{0x10c134, 0, 0, 0x50000}};
  float number = 1.09803553e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2202) {
  s21_decimal check = {{0x10c134, 0, 0, 0x80050000}};
  float number = -1.09803553e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2203) {
  s21_decimal check = {{0x895441, 0, 0, 0x60000}};
  float number = 9.00000095e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2204) {
  s21_decimal check = {{0x895441, 0, 0, 0x80060000}};
  float number = -9.00000095e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2205) {
  s21_decimal check = {{0x9, 0, 0, 0}};
  float number = 9.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2206) {
  s21_decimal check = {{0x9, 0, 0, 0x80000000}};
  float number = -9.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2207) {
  s21_decimal check = {{0x89543f, 0, 0, 0x60000}};
  float number = 8.99999905e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2208) {
  s21_decimal check = {{0x89543f, 0, 0, 0x80060000}};
  float number = -8.99999905e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2209) {
  s21_decimal check = {{0x8, 0, 0, 0}};
  float number = 8.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2210) {
  s21_decimal check = {{0x8, 0, 0, 0x80000000}};
  float number = -8.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2211) {
  s21_decimal check = {{0x8, 0, 0, 0}};
  float number = 7.99999952e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2212) {
  s21_decimal check = {{0x8, 0, 0, 0x80000000}};
  float number = -7.99999952e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2213) {
  s21_decimal check = {{0x65b9ab, 0, 0, 0x60000}};
  float number = 6.66666651e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2214) {
  s21_decimal check = {{0x65b9ab, 0, 0, 0x80060000}};
  float number = -6.66666651e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2215) {
  s21_decimal check = {{0x6, 0, 0, 0}};
  float number = 6.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2216) {
  s21_decimal check = {{0x6, 0, 0, 0x80000000}};
  float number = -6.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2217) {
  s21_decimal check = {{0x516155, 0, 0, 0x60000}};
  float number = 5.33333302e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2218) {
  s21_decimal check = {{0x516155, 0, 0, 0x80060000}};
  float number = -5.33333302e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2219) {
  s21_decimal check = {{0x4, 0, 0, 0}};
  float number = 4.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2220) {
  s21_decimal check = {{0x4, 0, 0, 0x80000000}};
  float number = -4.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2221) {
  s21_decimal check = {{0x4, 0, 0, 0}};
  float number = 3.99999976e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2222) {
  s21_decimal check = {{0x4, 0, 0, 0x80000000}};
  float number = -3.99999976e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2223) {
  s21_decimal check = {{0x4, 0, 0, 0}};
  float number = 3.99999952e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2224) {
  s21_decimal check = {{0x4, 0, 0, 0x80000000}};
  float number = -3.99999952e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2225) {
  s21_decimal check = {{0x32dcd5, 0, 0, 0x60000}};
  float number = 3.33333325e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2226) {
  s21_decimal check = {{0x32dcd5, 0, 0, 0x80060000}};
  float number = -3.33333325e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2227) {
  s21_decimal check = {{0x3, 0, 0, 0}};
  float number = 3.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2228) {
  s21_decimal check = {{0x3, 0, 0, 0x80000000}};
  float number = -3.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2229) {
  s21_decimal check = {{0x28b0ab, 0, 0, 0x60000}};
  float number = 2.66666651e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2230) {
  s21_decimal check = {{0x28b0ab, 0, 0, 0x80060000}};
  float number = -2.66666651e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2231) {
  s21_decimal check = {{0x2, 0, 0, 0}};
  float number = 2.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2232) {
  s21_decimal check = {{0x2, 0, 0, 0x80000000}};
  float number = -2.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2233) {
  s21_decimal check = {{0x2, 0, 0, 0}};
  float number = 2.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2234) {
  s21_decimal check = {{0x2, 0, 0, 0x80000000}};
  float number = -2.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2235) {
  s21_decimal check = {{0x2, 0, 0, 0}};
  float number = 1.99999988e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2236) {
  s21_decimal check = {{0x2, 0, 0, 0x80000000}};
  float number = -1.99999988e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2237) {
  s21_decimal check = {{0xf, 0, 0, 0x10000}};
  float number = 1.50000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2238) {
  s21_decimal check = {{0xf, 0, 0, 0x80010000}};
  float number = -1.50000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2239) {
  s21_decimal check = {{0xf, 0, 0, 0x10000}};
  float number = 1.50000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2240) {
  s21_decimal check = {{0xf, 0, 0, 0x80010000}};
  float number = -1.50000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2241) {
  s21_decimal check = {{0xf, 0, 0, 0x10000}};
  float number = 1.49999988e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2242) {
  s21_decimal check = {{0xf, 0, 0, 0x80010000}};
  float number = -1.49999988e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2243) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2244) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2245) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2246) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2247) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2248) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2249) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2250) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2251) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2252) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2253) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2254) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2255) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2256) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2257) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2258) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2259) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2260) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2261) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2262) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2263) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2264) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2265) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2266) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2267) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2268) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2269) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2270) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2271) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2272) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2273) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2274) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000024e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2275) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0}};
  float number = 2.76701183e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2276) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0x80000000}};
  float number = -2.76701183e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2277) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0}};
  float number = 2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2278) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0x80000000}};
  float number = -2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2279) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0}};
  float number = 2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2280) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0x80000000}};
  float number = -2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2281) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0}};
  float number = 2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2282) {
  s21_decimal check = {{0x946e8000, 0x80000389, 0x1, 0x80000000}};
  float number = -2.76701161e+19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2283) {
  s21_decimal check = {{0x855556, 0, 0, 0x20000}};
  float number = 8.73813359e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2284) {
  s21_decimal check = {{0x855556, 0, 0, 0x80020000}};
  float number = -8.73813359e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2285) {
  s21_decimal check = {{0x855556, 0, 0, 0x20000}};
  float number = 8.73813359e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2286) {
  s21_decimal check = {{0x855556, 0, 0, 0x80020000}};
  float number = -8.73813359e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2287) {
  s21_decimal check = {{0x855555, 0, 0, 0x20000}};
  float number = 8.73813281e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2288) {
  s21_decimal check = {{0x855555, 0, 0, 0x80020000}};
  float number = -8.73813281e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2289) {
  s21_decimal check = {{0x855555, 0, 0, 0x20000}};
  float number = 8.73813281e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2290) {
  s21_decimal check = {{0x855555, 0, 0, 0x80020000}};
  float number = -8.73813281e+04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2291) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.20000038e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2292) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.20000038e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2293) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.20000038e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2294) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.20000038e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2295) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2296) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2297) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2298) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2299) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2300) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2301) {
  s21_decimal check = {{0x20, 0, 0, 0}};
  float number = 3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2302) {
  s21_decimal check = {{0x20, 0, 0, 0x80000000}};
  float number = -3.20000000e+01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2303) {
  s21_decimal check = {{0x3d09, 0, 0, 0x50000}};
  float number = 1.56250000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2304) {
  s21_decimal check = {{0x3d09, 0, 0, 0x80050000}};
  float number = -1.56250000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2305) {
  s21_decimal check = {{0x98967f, 0, 0, 0x70000}};
  float number = 9.99999940e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2306) {
  s21_decimal check = {{0x98967f, 0, 0, 0x80070000}};
  float number = -9.99999940e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2307) {
  s21_decimal check = {{0x19, 0, 0, 0x20000}};
  float number = 2.49999985e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2308) {
  s21_decimal check = {{0x19, 0, 0, 0x80020000}};
  float number = -2.49999985e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2309) {
  s21_decimal check = {{0x3d09, 0, 0, 0x60000}};
  float number = 1.56249991e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2310) {
  s21_decimal check = {{0x3d09, 0, 0, 0x80060000}};
  float number = -1.56249991e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2311) {
  s21_decimal check = {{0x5d21db, 0, 0, 0xb0000}};
  float number = 6.10351526e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2312) {
  s21_decimal check = {{0x5d21db, 0, 0, 0x800b0000}};
  float number = -6.10351526e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2313) {
  s21_decimal check = {{0x8e1bc9, 0, 0, 0x100000}};
  float number = 9.31322519e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2314) {
  s21_decimal check = {{0x8e1bc9, 0, 0, 0x80100000}};
  float number = -9.31322519e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2315) {
  s21_decimal check = {{0x211654, 0, 0, 0x190000}};
  float number = 2.16840422e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2316) {
  s21_decimal check = {{0x211654, 0, 0, 0x80190000}};
  float number = -2.16840422e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2317) {
  s21_decimal check = {{0x108b2a, 0, 0, 0x190000}};
  float number = 1.08420211e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2318) {
  s21_decimal check = {{0x108b2a, 0, 0, 0x80190000}};
  float number = -1.08420211e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2319) {
  s21_decimal check = {{0x52b7d3, 0, 0, 0x1a0000}};
  float number = 5.42101054e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2320) {
  s21_decimal check = {{0x52b7d3, 0, 0, 0x801a0000}};
  float number = -5.42101054e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2321) {
  s21_decimal check = {{0x14adf5, 0, 0, 0x1a0000}};
  float number = 1.35525263e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2322) {
  s21_decimal check = {{0x14adf5, 0, 0, 0x801a0000}};
  float number = -1.35525263e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2323) {
  s21_decimal check = {{0x813f39, 0, 0, 0x1c0000}};
  float number = 8.47032897e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2324) {
  s21_decimal check = {{0x813f39, 0, 0, 0x801c0000}};
  float number = -8.47032897e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2325) {
  s21_decimal check = {{0x813f, 0, 0, 0x1c0000}};
  float number = 3.30872225e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2326) {
  s21_decimal check = {{0x813f, 0, 0, 0x801c0000}};
  float number = -3.30872225e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2327) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.00974190e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2328) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.00974190e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2329) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 4.03896759e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2330) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -4.03896759e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2331) {
  s21_decimal check = {{0x41, 0, 0, 0x1c0000}};
  float number = 6.46234815e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2332) {
  s21_decimal check = {{0x41, 0, 0, 0x801c0000}};
  float number = -6.46234815e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2333) {
  s21_decimal check = {{0x40a0, 0, 0, 0x1c0000}};
  float number = 1.65436113e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2334) {
  s21_decimal check = {{0x40a0, 0, 0, 0x801c0000}};
  float number = -1.65436113e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2335) {
  s21_decimal check = {{0x145855, 0, 0, 0x60000}};
  float number = 1.33333325e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2336) {
  s21_decimal check = {{0x145855, 0, 0, 0x80060000}};
  float number = -1.33333325e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2337) {
  s21_decimal check = {{0x65b9aa, 0, 0, 0x70000}};
  float number = 6.66666627e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2338) {
  s21_decimal check = {{0x65b9aa, 0, 0, 0x80070000}};
  float number = -6.66666627e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2339) {
  s21_decimal check = {{0x196e6b, 0, 0, 0x70000}};
  float number = 1.66666657e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2340) {
  s21_decimal check = {{0x196e6b, 0, 0, 0x80070000}};
  float number = -1.66666657e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2341) {
  s21_decimal check = {{0xfe503, 0, 0, 0x80000}};
  float number = 1.04166660e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2342) {
  s21_decimal check = {{0xfe503, 0, 0, 0x80080000}};
  float number = -1.04166660e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2343) {
  s21_decimal check = {{0x63575, 0, 0, 0xa0000}};
  float number = 4.06901017e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2344) {
  s21_decimal check = {{0x63575, 0, 0, 0x800a0000}};
  float number = -4.06901017e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2345) {
  s21_decimal check = {{0x5ebd31, 0, 0, 0x100000}};
  float number = 6.20881679e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2346) {
  s21_decimal check = {{0x5ebd31, 0, 0, 0x80100000}};
  float number = -6.20881679e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2347) {
  s21_decimal check = {{0x17af4c, 0, 0, 0x100000}};
  float number = 1.55220420e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2348) {
  s21_decimal check = {{0x17af4c, 0, 0, 0x80100000}};
  float number = -1.55220420e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2349) {
  s21_decimal check = {{0x5ebd3, 0, 0, 0x100000}};
  float number = 3.88051050e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2350) {
  s21_decimal check = {{0x5ebd3, 0, 0, 0x80100000}};
  float number = -3.88051050e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2351) {
  s21_decimal check = {{0x2501e7, 0, 0, 0x120000}};
  float number = 2.42531906e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2352) {
  s21_decimal check = {{0x2501e7, 0, 0, 0x80120000}};
  float number = -2.42531906e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2353) {
  s21_decimal check = {{0x908f6f, 0, 0, 0x150000}};
  float number = 9.47390258e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2354) {
  s21_decimal check = {{0x908f6f, 0, 0, 0x80150000}};
  float number = -9.47390258e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2355) {
  s21_decimal check = {{0x4847b7, 0, 0, 0x150000}};
  float number = 4.73695129e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2356) {
  s21_decimal check = {{0x4847b7, 0, 0, 0x80150000}};
  float number = -4.73695129e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2357) {
  s21_decimal check = {{0x1c3c04, 0, 0, 0x170000}};
  float number = 1.85037160e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2358) {
  s21_decimal check = {{0x1c3c04, 0, 0, 0x80170000}};
  float number = -1.85037160e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2359) {
  s21_decimal check = {{0x11a582, 0, 0, 0x180000}};
  float number = 1.15648225e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2360) {
  s21_decimal check = {{0x11a582, 0, 0, 0x80180000}};
  float number = -1.15648225e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2361) {
  s21_decimal check = {{0x160ee3, 0, 0, 0x190000}};
  float number = 1.44560281e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2362) {
  s21_decimal check = {{0x160ee3, 0, 0, 0x80190000}};
  float number = -1.44560281e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2363) {
  s21_decimal check = {{0x6e4a6e, 0, 0, 0x1a0000}};
  float number = 7.22801405e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2364) {
  s21_decimal check = {{0x6e4a6e, 0, 0, 0x801a0000}};
  float number = -7.22801405e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2365) {
  s21_decimal check = {{0x372537, 0, 0, 0x1a0000}};
  float number = 3.61400703e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2366) {
  s21_decimal check = {{0x372537, 0, 0, 0x801a0000}};
  float number = -3.61400703e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2367) {
  s21_decimal check = {{0x89dd0a, 0, 0, 0x1b0000}};
  float number = 9.03501757e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2368) {
  s21_decimal check = {{0x89dd0a, 0, 0, 0x801b0000}};
  float number = -9.03501757e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2369) {
  s21_decimal check = {{0x562a26, 0, 0, 0x1c0000}};
  float number = 5.64688598e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2370) {
  s21_decimal check = {{0x562a26, 0, 0, 0x801c0000}};
  float number = -5.64688598e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2371) {
  s21_decimal check = {{0x562a, 0, 0, 0x1c0000}};
  float number = 2.20581484e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2372) {
  s21_decimal check = {{0x562a, 0, 0, 0x801c0000}};
  float number = -2.20581484e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2373) {
  s21_decimal check = {{0x158b, 0, 0, 0x1c0000}};
  float number = 5.51453709e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2374) {
  s21_decimal check = {{0x158b, 0, 0, 0x801c0000}};
  float number = -5.51453709e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2375) {
  s21_decimal check = {{0xac, 0, 0, 0x1c0000}};
  float number = 1.72329284e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2376) {
  s21_decimal check = {{0xac, 0, 0, 0x801c0000}};
  float number = -1.72329284e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2377) {
  s21_decimal check = {{0x2b, 0, 0, 0x1c0000}};
  float number = 4.30823210e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2378) {
  s21_decimal check = {{0x2b, 0, 0, 0x801c0000}};
  float number = -4.30823210e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2379) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 2.69264506e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2380) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -2.69264506e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2381) {
  s21_decimal check = {{0x196e6b, 0, 0, 0x60000}};
  float number = 1.66666663e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2382) {
  s21_decimal check = {{0x196e6b, 0, 0, 0x80060000}};
  float number = -1.66666663e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2383) {
  s21_decimal check = {{0x7f2815, 0, 0, 0x70000}};
  float number = 8.33333313e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2384) {
  s21_decimal check = {{0x7f2815, 0, 0, 0x80070000}};
  float number = -8.33333313e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2385) {
  s21_decimal check = {{0x1fca05, 0, 0, 0x70000}};
  float number = 2.08333328e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2386) {
  s21_decimal check = {{0x1fca05, 0, 0, 0x80070000}};
  float number = -2.08333328e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2387) {
  s21_decimal check = {{0x13de43, 0, 0, 0x80000}};
  float number = 1.30208330e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2388) {
  s21_decimal check = {{0x13de43, 0, 0, 0x80080000}};
  float number = -1.30208330e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2389) {
  s21_decimal check = {{0x4d9c37, 0, 0, 0xb0000}};
  float number = 5.08626290e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2390) {
  s21_decimal check = {{0x4d9c37, 0, 0, 0x800b0000}};
  float number = -5.08626290e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2391) {
  s21_decimal check = {{0x766c7d, 0, 0, 0x100000}};
  float number = 7.76102127e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2392) {
  s21_decimal check = {{0x766c7d, 0, 0, 0x80100000}};
  float number = -7.76102127e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2393) {
  s21_decimal check = {{0x1d9b1f, 0, 0, 0x100000}};
  float number = 1.94025532e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2394) {
  s21_decimal check = {{0x1d9b1f, 0, 0, 0x80100000}};
  float number = -1.94025532e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2395) {
  s21_decimal check = {{0x4a03ce, 0, 0, 0x110000}};
  float number = 4.85063829e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2396) {
  s21_decimal check = {{0x4a03ce, 0, 0, 0x80110000}};
  float number = -4.85063829e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2397) {
  s21_decimal check = {{0x2e4261, 0, 0, 0x120000}};
  float number = 3.03164893e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2398) {
  s21_decimal check = {{0x2e4261, 0, 0, 0x80120000}};
  float number = -3.03164893e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2399) {
  s21_decimal check = {{0x1211ee, 0, 0, 0x140000}};
  float number = 1.18423786e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2400) {
  s21_decimal check = {{0x1211ee, 0, 0, 0x80140000}};
  float number = -1.18423786e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2401) {
  s21_decimal check = {{0x5a59a5, 0, 0, 0x150000}};
  float number = 5.92118932e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2402) {
  s21_decimal check = {{0x5a59a5, 0, 0, 0x80150000}};
  float number = -5.92118932e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2403) {
  s21_decimal check = {{0x70f00f, 0, 0, 0x160000}};
  float number = 7.40148665e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2404) {
  s21_decimal check = {{0x70f00f, 0, 0, 0x80160000}};
  float number = -7.40148665e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2405) {
  s21_decimal check = {{0x234b05, 0, 0, 0x170000}};
  float number = 2.31296458e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2406) {
  s21_decimal check = {{0x234b05, 0, 0, 0x80170000}};
  float number = -2.31296458e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2407) {
  s21_decimal check = {{0x160ee3, 0, 0, 0x180000}};
  float number = 1.44560286e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2408) {
  s21_decimal check = {{0x160ee3, 0, 0, 0x80180000}};
  float number = -1.44560286e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2409) {
  s21_decimal check = {{0x372537, 0, 0, 0x190000}};
  float number = 3.61400716e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2410) {
  s21_decimal check = {{0x372537, 0, 0, 0x80190000}};
  float number = -3.61400716e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2411) {
  s21_decimal check = {{0x1b929c, 0, 0, 0x190000}};
  float number = 1.80700358e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2412) {
  s21_decimal check = {{0x1b929c, 0, 0, 0x80190000}};
  float number = -1.80700358e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2413) {
  s21_decimal check = {{0x89dd0a, 0, 0, 0x1a0000}};
  float number = 9.03501789e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2414) {
  s21_decimal check = {{0x89dd0a, 0, 0, 0x801a0000}};
  float number = -9.03501789e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2415) {
  s21_decimal check = {{0x44ee85, 0, 0, 0x1a0000}};
  float number = 4.51750894e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2416) {
  s21_decimal check = {{0x44ee85, 0, 0, 0x801a0000}};
  float number = -4.51750894e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2417) {
  s21_decimal check = {{0x113ba1, 0, 0, 0x1a0000}};
  float number = 1.12937724e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2418) {
  s21_decimal check = {{0x113ba1, 0, 0, 0x801a0000}};
  float number = -1.12937724e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2419) {
  s21_decimal check = {{0x6bb4b0, 0, 0, 0x1c0000}};
  float number = 7.05860773e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2420) {
  s21_decimal check = {{0x6bb4b0, 0, 0, 0x801c0000}};
  float number = -7.05860773e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2421) {
  s21_decimal check = {{0x6bb5, 0, 0, 0x1c0000}};
  float number = 2.75726864e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2422) {
  s21_decimal check = {{0x6bb5, 0, 0, 0x801c0000}};
  float number = -2.75726864e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2423) {
  s21_decimal check = {{0x35da, 0, 0, 0x1c0000}};
  float number = 1.37863432e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2424) {
  s21_decimal check = {{0x35da, 0, 0, 0x801c0000}};
  float number = -1.37863432e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2425) {
  s21_decimal check = {{0x1aed, 0, 0, 0x1c0000}};
  float number = 6.89317161e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2426) {
  s21_decimal check = {{0x1aed, 0, 0, 0x801c0000}};
  float number = -6.89317161e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2427) {
  s21_decimal check = {{0x6bb, 0, 0, 0x1c0000}};
  float number = 1.72329290e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2428) {
  s21_decimal check = {{0x6bb, 0, 0, 0x801c0000}};
  float number = -1.72329290e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2429) {
  s21_decimal check = {{0x36, 0, 0, 0x1c0000}};
  float number = 5.38529032e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2430) {
  s21_decimal check = {{0x36, 0, 0, 0x801c0000}};
  float number = -5.38529032e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2431) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 3.36580645e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2432) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -3.36580645e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2433) {
  s21_decimal check = {{0x4b, 0, 0, 0x20000}};
  float number = 7.50000000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2434) {
  s21_decimal check = {{0x4b, 0, 0, 0x80020000}};
  float number = -7.50000000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2435) {
  s21_decimal check = {{0x5, 0, 0, 0x10000}};
  float number = 5.00000000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2436) {
  s21_decimal check = {{0x5, 0, 0, 0x80010000}};
  float number = -5.00000000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2437) {
  s21_decimal check = {{0x753, 0, 0, 0x40000}};
  float number = 1.87500000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2438) {
  s21_decimal check = {{0x753, 0, 0, 0x80040000}};
  float number = -1.87500000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2439) {
  s21_decimal check = {{0x7d, 0, 0, 0x30000}};
  float number = 1.25000000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2440) {
  s21_decimal check = {{0x7d, 0, 0, 0x80030000}};
  float number = -1.25000000e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2441) {
  s21_decimal check = {{0x271, 0, 0, 0x40000}};
  float number = 6.25000000e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2442) {
  s21_decimal check = {{0x271, 0, 0, 0x80040000}};
  float number = -6.25000000e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2443) {
  s21_decimal check = {{0x3d09, 0, 0, 0x60000}};
  float number = 1.56250000e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2444) {
  s21_decimal check = {{0x3d09, 0, 0, 0x80060000}};
  float number = -1.56250000e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2445) {
  s21_decimal check = {{0x11e1a3, 0, 0, 0x80000}};
  float number = 1.17187500e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2446) {
  s21_decimal check = {{0x11e1a3, 0, 0, 0x80080000}};
  float number = -1.17187500e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2447) {
  s21_decimal check = {{0x1312d, 0, 0, 0x70000}};
  float number = 7.81250000e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2448) {
  s21_decimal check = {{0x1312d, 0, 0, 0x80070000}};
  float number = -7.81250000e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2449) {
  s21_decimal check = {{0x5f5e1, 0, 0, 0x80000}};
  float number = 3.90625000e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2450) {
  s21_decimal check = {{0x5f5e1, 0, 0, 0x80080000}};
  float number = -3.90625000e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2451) {
  s21_decimal check = {{0x2540be, 0, 0, 0xa0000}};
  float number = 2.44140625e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2452) {
  s21_decimal check = {{0x2540be, 0, 0, 0x800a0000}};
  float number = -2.44140625e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2453) {
  s21_decimal check = {{0x45d965, 0, 0, 0xb0000}};
  float number = 4.57763672e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2454) {
  s21_decimal check = {{0x45d965, 0, 0, 0x800b0000}};
  float number = -4.57763672e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2455) {
  s21_decimal check = {{0x2e90ee, 0, 0, 0xb0000}};
  float number = 3.05175781e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2456) {
  s21_decimal check = {{0x2e90ee, 0, 0, 0x800b0000}};
  float number = -3.05175781e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2457) {
  s21_decimal check = {{0x174877, 0, 0, 0xb0000}};
  float number = 1.52587891e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2458) {
  s21_decimal check = {{0x174877, 0, 0, 0x800b0000}};
  float number = -1.52587891e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2459) {
  s21_decimal check = {{0x470de5, 0, 0, 0x100000}};
  float number = 4.65661287e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2460) {
  s21_decimal check = {{0x470de5, 0, 0, 0x80100000}};
  float number = -4.65661287e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2461) {
  s21_decimal check = {{0x6a94d7, 0, 0, 0x100000}};
  float number = 6.98491931e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2462) {
  s21_decimal check = {{0x6a94d7, 0, 0, 0x80100000}};
  float number = -6.98491931e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2463) {
  s21_decimal check = {{0x108b2a, 0, 0, 0x190000}};
  float number = 1.08420217e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2464) {
  s21_decimal check = {{0x108b2a, 0, 0, 0x80190000}};
  float number = -1.08420217e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2465) {
  s21_decimal check = {{0x1, 0, 0, 0x10000}};
  float number = 1.00000001e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2466) {
  s21_decimal check = {{0x1, 0, 0, 0x80010000}};
  float number = -1.00000001e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2467) {
  s21_decimal check = {{0x3e7, 0, 0, 0x30000}};
  float number = 9.99000013e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2468) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80030000}};
  float number = -9.99000013e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2469) {
  s21_decimal check = {{0x9, 0, 0, 0x10000}};
  float number = 8.99999976e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2470) {
  s21_decimal check = {{0x9, 0, 0, 0x80010000}};
  float number = -8.99999976e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2471) {
  s21_decimal check = {{0x3e7, 0, 0, 0x40000}};
  float number = 9.98999998e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2472) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80040000}};
  float number = -9.98999998e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2473) {
  s21_decimal check = {{0x3e7, 0, 0, 0x50000}};
  float number = 9.99000017e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2474) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80050000}};
  float number = -9.99000017e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2475) {
  s21_decimal check = {{0x3e7, 0, 0, 0x60000}};
  float number = 9.99000040e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2476) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80060000}};
  float number = -9.99000040e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2477) {
  s21_decimal check = {{0x3e7, 0, 0, 0x70000}};
  float number = 9.98999967e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2478) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80070000}};
  float number = -9.98999967e-05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2479) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80000}};
  float number = 9.98999985e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2480) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80080000}};
  float number = -9.98999985e-06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2481) {
  s21_decimal check = {{0x3e7, 0, 0, 0x90000}};
  float number = 9.99000008e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2482) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80090000}};
  float number = -9.99000008e-07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2483) {
  s21_decimal check = {{0x3e7, 0, 0, 0xa0000}};
  float number = 9.98999994e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2484) {
  s21_decimal check = {{0x3e7, 0, 0, 0x800a0000}};
  float number = -9.98999994e-08;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2485) {
  s21_decimal check = {{0x3e7, 0, 0, 0xb0000}};
  float number = 9.98999994e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2486) {
  s21_decimal check = {{0x3e7, 0, 0, 0x800b0000}};
  float number = -9.98999994e-09;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2487) {
  s21_decimal check = {{0x3e7, 0, 0, 0xc0000}};
  float number = 9.98999994e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2488) {
  s21_decimal check = {{0x3e7, 0, 0, 0x800c0000}};
  float number = -9.98999994e-10;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2489) {
  s21_decimal check = {{0x3e7, 0, 0, 0xd0000}};
  float number = 9.98999980e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2490) {
  s21_decimal check = {{0x3e7, 0, 0, 0x800d0000}};
  float number = -9.98999980e-11;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2491) {
  s21_decimal check = {{0x3e7, 0, 0, 0xe0000}};
  float number = 9.99000015e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2492) {
  s21_decimal check = {{0x3e7, 0, 0, 0x800e0000}};
  float number = -9.99000015e-12;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2493) {
  s21_decimal check = {{0x3e7, 0, 0, 0xf0000}};
  float number = 9.99000036e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2494) {
  s21_decimal check = {{0x3e7, 0, 0, 0x800f0000}};
  float number = -9.99000036e-13;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2495) {
  s21_decimal check = {{0x3e7, 0, 0, 0x100000}};
  float number = 9.99000009e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2496) {
  s21_decimal check = {{0x3e7, 0, 0, 0x80100000}};
  float number = -9.99000009e-14;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2497) {
  s21_decimal check = {{0x8baba8, 0, 0, 0x150000}};
  float number = 9.15344799e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2498) {
  s21_decimal check = {{0x8baba8, 0, 0, 0x80150000}};
  float number = -9.15344799e-15;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2499) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x160000}};
  float number = 1.15344831e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2500) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x80160000}};
  float number = -1.15344831e-16;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2501) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x170000}};
  float number = 1.15344827e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2502) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x80170000}};
  float number = -1.15344827e-17;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2503) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x180000}};
  float number = 1.15344825e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2504) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x80180000}};
  float number = -1.15344825e-18;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2505) {
  s21_decimal check = {{0x18d0bf, 0, 0, 0x190000}};
  float number = 1.62630326e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2506) {
  s21_decimal check = {{0x18d0bf, 0, 0, 0x80190000}};
  float number = -1.62630326e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2507) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x190000}};
  float number = 1.15344830e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2508) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x80190000}};
  float number = -1.15344830e-19;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2509) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x1a0000}};
  float number = 1.15344827e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2510) {
  s21_decimal check = {{0x1199a8, 0, 0, 0x801a0000}};
  float number = -1.15344827e-20;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2511) {
  s21_decimal check = {{0x6d2728, 0, 0, 0x1b0000}};
  float number = 7.15344824e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2512) {
  s21_decimal check = {{0x6d2728, 0, 0, 0x801b0000}};
  float number = -7.15344824e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2513) {
  s21_decimal check = {{0x6d2727, 0, 0, 0x1b0000}};
  float number = 7.15344744e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2514) {
  s21_decimal check = {{0x6d2727, 0, 0, 0x801b0000}};
  float number = -7.15344744e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2515) {
  s21_decimal check = {{0x72f78b, 0, 0, 0x1c0000}};
  float number = 7.53447488e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2516) {
  s21_decimal check = {{0x72f78b, 0, 0, 0x801c0000}};
  float number = -7.53447488e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2517) {
  s21_decimal check = {{0x72f78a, 0, 0, 0x1c0000}};
  float number = 7.53447437e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2518) {
  s21_decimal check = {{0x72f78a, 0, 0, 0x801c0000}};
  float number = -7.53447437e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2519) {
  s21_decimal check = {{0xb832b, 0, 0, 0x1c0000}};
  float number = 7.54474521e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2520) {
  s21_decimal check = {{0xb832b, 0, 0, 0x801c0000}};
  float number = -7.54474521e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2521) {
  s21_decimal check = {{0xb832a, 0, 0, 0x1c0000}};
  float number = 7.54474458e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2522) {
  s21_decimal check = {{0xb832a, 0, 0, 0x801c0000}};
  float number = -7.54474458e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2523) {
  s21_decimal check = {{0x174d8, 0, 0, 0x1c0000}};
  float number = 9.54475074e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2524) {
  s21_decimal check = {{0x174d8, 0, 0, 0x801c0000}};
  float number = -9.54475074e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2525) {
  s21_decimal check = {{0x174d7, 0, 0, 0x1c0000}};
  float number = 9.54474995e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2526) {
  s21_decimal check = {{0x174d7, 0, 0, 0x801c0000}};
  float number = -9.54474995e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2527) {
  s21_decimal check = {{0x221, 0, 0, 0x1c0000}};
  float number = 5.44500023e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2528) {
  s21_decimal check = {{0x221, 0, 0, 0x801c0000}};
  float number = -5.44500023e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2529) {
  s21_decimal check = {{0x220, 0, 0, 0x1c0000}};
  float number = 5.44499962e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2530) {
  s21_decimal check = {{0x220, 0, 0, 0x801c0000}};
  float number = -5.44499962e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2531) {
  s21_decimal check = {{0x91, 0, 0, 0x1c0000}};
  float number = 1.44500012e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2532) {
  s21_decimal check = {{0x91, 0, 0, 0x801c0000}};
  float number = -1.44500012e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2533) {
  s21_decimal check = {{0x90, 0, 0, 0x1c0000}};
  float number = 1.44499997e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2534) {
  s21_decimal check = {{0x90, 0, 0, 0x801c0000}};
  float number = -1.44499997e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2535) {
  s21_decimal check = {{0xf, 0, 0, 0x1c0000}};
  float number = 1.50000004e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2536) {
  s21_decimal check = {{0xf, 0, 0, 0x801c0000}};
  float number = -1.50000004e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2537) {
  s21_decimal check = {{0xf, 0, 0, 0x1c0000}};
  float number = 1.49999994e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2538) {
  s21_decimal check = {{0xf, 0, 0, 0x801c0000}};
  float number = -1.49999994e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2539) {
  s21_decimal check = {{0xf, 0, 0, 0x1c0000}};
  float number = 1.45000001e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2540) {
  s21_decimal check = {{0xf, 0, 0, 0x801c0000}};
  float number = -1.45000001e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2541) {
  s21_decimal check = {{0xe, 0, 0, 0x1c0000}};
  float number = 1.44999991e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2542) {
  s21_decimal check = {{0xe, 0, 0, 0x801c0000}};
  float number = -1.44999991e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2543) {
  s21_decimal check = {{0xc, 0, 0, 0x1c0000}};
  float number = 1.20000005e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2544) {
  s21_decimal check = {{0xc, 0, 0, 0x801c0000}};
  float number = -1.20000005e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2545) {
  s21_decimal check = {{0xc, 0, 0, 0x1c0000}};
  float number = 1.19999996e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2546) {
  s21_decimal check = {{0xc, 0, 0, 0x801c0000}};
  float number = -1.19999996e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2547) {
  s21_decimal check = {{0xc, 0, 0, 0x1c0000}};
  float number = 1.15000002e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2548) {
  s21_decimal check = {{0xc, 0, 0, 0x801c0000}};
  float number = -1.15000002e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2549) {
  s21_decimal check = {{0xb, 0, 0, 0x1c0000}};
  float number = 1.14999993e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2550) {
  s21_decimal check = {{0xb, 0, 0, 0x801c0000}};
  float number = -1.14999993e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2551) {
  s21_decimal check = {{0xb, 0, 0, 0x1c0000}};
  float number = 1.10000009e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2552) {
  s21_decimal check = {{0xb, 0, 0, 0x801c0000}};
  float number = -1.10000009e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2553) {
  s21_decimal check = {{0xb, 0, 0, 0x1c0000}};
  float number = 1.09999999e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2554) {
  s21_decimal check = {{0xb, 0, 0, 0x801c0000}};
  float number = -1.09999999e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2555) {
  s21_decimal check = {{0xb, 0, 0, 0x1c0000}};
  float number = 1.05000006e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2556) {
  s21_decimal check = {{0xb, 0, 0, 0x801c0000}};
  float number = -1.05000006e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2557) {
  s21_decimal check = {{0x1, 0, 0, 0x1b0000}};
  float number = 1.04999996e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2558) {
  s21_decimal check = {{0x1, 0, 0, 0x801b0000}};
  float number = -1.04999996e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2559) {
  s21_decimal check = {{0x1, 0, 0, 0x1b0000}};
  float number = 1.00000003e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2560) {
  s21_decimal check = {{0x1, 0, 0, 0x801b0000}};
  float number = -1.00000003e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2561) {
  s21_decimal check = {{0x1, 0, 0, 0x1b0000}};
  float number = 9.99999931e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2562) {
  s21_decimal check = {{0x1, 0, 0, 0x801b0000}};
  float number = -9.99999931e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2563) {
  s21_decimal check = {{0x1, 0, 0, 0x1b0000}};
  float number = 9.50000093e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2564) {
  s21_decimal check = {{0x1, 0, 0, 0x801b0000}};
  float number = -9.50000093e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2565) {
  s21_decimal check = {{0x9, 0, 0, 0x1c0000}};
  float number = 9.49999997e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2566) {
  s21_decimal check = {{0x9, 0, 0, 0x801c0000}};
  float number = -9.49999997e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2567) {
  s21_decimal check = {{0x9, 0, 0, 0x1c0000}};
  float number = 9.00000063e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2568) {
  s21_decimal check = {{0x9, 0, 0, 0x801c0000}};
  float number = -9.00000063e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2569) {
  s21_decimal check = {{0x9, 0, 0, 0x1c0000}};
  float number = 8.99999967e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2570) {
  s21_decimal check = {{0x9, 0, 0, 0x801c0000}};
  float number = -8.99999967e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2571) {
  s21_decimal check = {{0x9, 0, 0, 0x1c0000}};
  float number = 8.50000033e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2572) {
  s21_decimal check = {{0x9, 0, 0, 0x801c0000}};
  float number = -8.50000033e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2573) {
  s21_decimal check = {{0x8, 0, 0, 0x1c0000}};
  float number = 8.49999936e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2574) {
  s21_decimal check = {{0x8, 0, 0, 0x801c0000}};
  float number = -8.49999936e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2575) {
  s21_decimal check = {{0x8, 0, 0, 0x1c0000}};
  float number = 8.00000003e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2576) {
  s21_decimal check = {{0x8, 0, 0, 0x801c0000}};
  float number = -8.00000003e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2577) {
  s21_decimal check = {{0x8, 0, 0, 0x1c0000}};
  float number = 7.99999954e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2578) {
  s21_decimal check = {{0x8, 0, 0, 0x801c0000}};
  float number = -7.99999954e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2579) {
  s21_decimal check = {{0x8, 0, 0, 0x1c0000}};
  float number = 7.50000020e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2580) {
  s21_decimal check = {{0x8, 0, 0, 0x801c0000}};
  float number = -7.50000020e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2581) {
  s21_decimal check = {{0x7, 0, 0, 0x1c0000}};
  float number = 7.49999972e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2582) {
  s21_decimal check = {{0x7, 0, 0, 0x801c0000}};
  float number = -7.49999972e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2583) {
  s21_decimal check = {{0x7, 0, 0, 0x1c0000}};
  float number = 7.00000038e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2584) {
  s21_decimal check = {{0x7, 0, 0, 0x801c0000}};
  float number = -7.00000038e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2585) {
  s21_decimal check = {{0x7, 0, 0, 0x1c0000}};
  float number = 6.99999990e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2586) {
  s21_decimal check = {{0x7, 0, 0, 0x801c0000}};
  float number = -6.99999990e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2587) {
  s21_decimal check = {{0x7, 0, 0, 0x1c0000}};
  float number = 6.50000008e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2588) {
  s21_decimal check = {{0x7, 0, 0, 0x801c0000}};
  float number = -6.50000008e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2589) {
  s21_decimal check = {{0x6, 0, 0, 0x1c0000}};
  float number = 6.49999960e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2590) {
  s21_decimal check = {{0x6, 0, 0, 0x801c0000}};
  float number = -6.49999960e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2591) {
  s21_decimal check = {{0x6, 0, 0, 0x1c0000}};
  float number = 6.00000026e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2592) {
  s21_decimal check = {{0x6, 0, 0, 0x801c0000}};
  float number = -6.00000026e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2593) {
  s21_decimal check = {{0x6, 0, 0, 0x1c0000}};
  float number = 5.99999978e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2594) {
  s21_decimal check = {{0x6, 0, 0, 0x801c0000}};
  float number = -5.99999978e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2595) {
  s21_decimal check = {{0x6, 0, 0, 0x1c0000}};
  float number = 5.50000044e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2596) {
  s21_decimal check = {{0x6, 0, 0, 0x801c0000}};
  float number = -5.50000044e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2597) {
  s21_decimal check = {{0x5, 0, 0, 0x1c0000}};
  float number = 5.49999996e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2598) {
  s21_decimal check = {{0x5, 0, 0, 0x801c0000}};
  float number = -5.49999996e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2599) {
  s21_decimal check = {{0x5, 0, 0, 0x1c0000}};
  float number = 5.00000014e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2600) {
  s21_decimal check = {{0x5, 0, 0, 0x801c0000}};
  float number = -5.00000014e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2601) {
  s21_decimal check = {{0x5, 0, 0, 0x1c0000}};
  float number = 4.99999965e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2602) {
  s21_decimal check = {{0x5, 0, 0, 0x801c0000}};
  float number = -4.99999965e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2603) {
  s21_decimal check = {{0x5, 0, 0, 0x1c0000}};
  float number = 4.50000032e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2604) {
  s21_decimal check = {{0x5, 0, 0, 0x801c0000}};
  float number = -4.50000032e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2605) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 4.49999983e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2606) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -4.49999983e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2607) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 4.00000001e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2608) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -4.00000001e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2609) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 3.99999977e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2610) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -3.99999977e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2611) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 3.50000043e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2612) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -3.50000043e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2613) {
  s21_decimal check = {{0x4, 0, 0, 0x1c0000}};
  float number = 3.50000019e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2614) {
  s21_decimal check = {{0x4, 0, 0, 0x801c0000}};
  float number = -3.50000019e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2615) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 3.49999995e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2616) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -3.49999995e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2617) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 3.49999971e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2618) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -3.49999971e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2619) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 3.00000013e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2620) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -3.00000013e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2621) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 2.99999989e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2622) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -2.99999989e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2623) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 2.99999965e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2624) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -2.99999965e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2625) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 2.50000031e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2626) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -2.50000031e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2627) {
  s21_decimal check = {{0x3, 0, 0, 0x1c0000}};
  float number = 2.50000007e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2628) {
  s21_decimal check = {{0x3, 0, 0, 0x801c0000}};
  float number = -2.50000007e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2629) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 2.49999983e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2630) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -2.49999983e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2631) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 2.00000013e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2632) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -2.00000013e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2633) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 2.00000001e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2634) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -2.00000001e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2635) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 1.99999989e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2636) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -1.99999989e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2637) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 1.50000019e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2638) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -1.50000019e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2639) {
  s21_decimal check = {{0x2, 0, 0, 0x1c0000}};
  float number = 1.50000006e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2640) {
  s21_decimal check = {{0x2, 0, 0, 0x801c0000}};
  float number = -1.50000006e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2641) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.49999994e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2642) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.49999994e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2643) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.49999814e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2644) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.49999814e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2645) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.00000018e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2646) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.00000018e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2647) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.00000012e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2648) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.00000012e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2649) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.00000006e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2650) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.00000006e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2651) {
  s21_decimal check = {{0x1, 0, 0, 0x1c0000}};
  float number = 1.00000000e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2652) {
  s21_decimal check = {{0x1, 0, 0, 0x801c0000}};
  float number = -1.00000000e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2653) {
  s21_decimal check = {{0x989680, 0, 0, 0}};
  float number = 1.00000050e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2654) {
  s21_decimal check = {{0x989680, 0, 0, 0x80000000}};
  float number = -1.00000050e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2655) {
  s21_decimal check = {{0x989680, 0, 0, 0}};
  float number = 1.00000020e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2656) {
  s21_decimal check = {{0x989680, 0, 0, 0x80000000}};
  float number = -1.00000020e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2657) {
  s21_decimal check = {{0x989680, 0, 0, 0}};
  float number = 1.00000010e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2658) {
  s21_decimal check = {{0x989680, 0, 0, 0x80000000}};
  float number = -1.00000010e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2659) {
  s21_decimal check = {{0x989680, 0, 0, 0}};
  float number = 1.00000000e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2660) {
  s21_decimal check = {{0x989680, 0, 0, 0x80000000}};
  float number = -1.00000000e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2661) {
  s21_decimal check = {{0x98967f, 0, 0, 0}};
  float number = 9.99999900e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2662) {
  s21_decimal check = {{0x98967f, 0, 0, 0x80000000}};
  float number = -9.99999900e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2663) {
  s21_decimal check = {{0x98967e, 0, 0, 0}};
  float number = 9.99999800e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2664) {
  s21_decimal check = {{0x98967e, 0, 0, 0x80000000}};
  float number = -9.99999800e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2665) {
  s21_decimal check = {{0xf4242, 0, 0, 0}};
  float number = 1.00000156e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2666) {
  s21_decimal check = {{0xf4242, 0, 0, 0x80000000}};
  float number = -1.00000156e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2667) {
  s21_decimal check = {{0xf4242, 0, 0, 0}};
  float number = 1.00000150e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2668) {
  s21_decimal check = {{0xf4242, 0, 0, 0x80000000}};
  float number = -1.00000150e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2669) {
  s21_decimal check = {{0xf4241, 0, 0, 0}};
  float number = 1.00000144e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2670) {
  s21_decimal check = {{0xf4241, 0, 0, 0x80000000}};
  float number = -1.00000144e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2671) {
  s21_decimal check = {{0xf4241, 0, 0, 0}};
  float number = 1.00000056e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2672) {
  s21_decimal check = {{0xf4241, 0, 0, 0x80000000}};
  float number = -1.00000056e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2673) {
  s21_decimal check = {{0xf4240, 0, 0, 0}};
  float number = 1.00000050e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2674) {
  s21_decimal check = {{0xf4240, 0, 0, 0x80000000}};
  float number = -1.00000050e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2675) {
  s21_decimal check = {{0xf4240, 0, 0, 0}};
  float number = 1.00000044e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2676) {
  s21_decimal check = {{0xf4240, 0, 0, 0x80000000}};
  float number = -1.00000044e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2677) {
  s21_decimal check = {{0xf4240, 0, 0, 0}};
  float number = 1.00000006e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2678) {
  s21_decimal check = {{0xf4240, 0, 0, 0x80000000}};
  float number = -1.00000006e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2679) {
  s21_decimal check = {{0xf4240, 0, 0, 0}};
  float number = 1.00000000e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2680) {
  s21_decimal check = {{0xf4240, 0, 0, 0x80000000}};
  float number = -1.00000000e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2681) {
  s21_decimal check = {{0x98967f, 0, 0, 0x10000}};
  float number = 9.99999938e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2682) {
  s21_decimal check = {{0x98967f, 0, 0, 0x80010000}};
  float number = -9.99999938e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2683) {
  s21_decimal check = {{0x98967b, 0, 0, 0x10000}};
  float number = 9.99999500e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2684) {
  s21_decimal check = {{0x98967b, 0, 0, 0x80010000}};
  float number = -9.99999500e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2685) {
  s21_decimal check = {{0x98967a, 0, 0, 0x10000}};
  float number = 9.99999438e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2686) {
  s21_decimal check = {{0x98967a, 0, 0, 0x80010000}};
  float number = -9.99999438e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2687) {
  s21_decimal check = {{0x989672, 0, 0, 0x10000}};
  float number = 9.99998562e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2688) {
  s21_decimal check = {{0x989672, 0, 0, 0x80010000}};
  float number = -9.99998562e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2689) {
  s21_decimal check = {{0x989671, 0, 0, 0x10000}};
  float number = 9.99998500e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2690) {
  s21_decimal check = {{0x989671, 0, 0, 0x80010000}};
  float number = -9.99998500e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2691) {
  s21_decimal check = {{0x989670, 0, 0, 0x10000}};
  float number = 9.99998438e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2692) {
  s21_decimal check = {{0x989670, 0, 0, 0x80010000}};
  float number = -9.99998438e+05;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2693) {
  s21_decimal check = {{0x27468d, 0, 0, 0x1b0000}};
  float number = 2.57396453e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2694) {
  s21_decimal check = {{0x27468d, 0, 0, 0x801b0000}};
  float number = -2.57396453e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2695) {
  s21_decimal check = {{0x27468d, 0, 0, 0x1b0000}};
  float number = 2.57396453e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2696) {
  s21_decimal check = {{0x27468d, 0, 0, 0x801b0000}};
  float number = -2.57396453e-21;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2697) {
  s21_decimal check = {{0x27468d, 0, 0, 0x60000}};
  float number = 2.57396460e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2698) {
  s21_decimal check = {{0x27468d, 0, 0, 0x80060000}};
  float number = -2.57396460e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2699) {
  s21_decimal check = {{0x1dcd65, 0, 0, 0x90000}};
  float number = 1.95312500e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2700) {
  s21_decimal check = {{0x1dcd65, 0, 0, 0x80090000}};
  float number = -1.95312500e-03;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2701) {
  s21_decimal check = {{0xed5be8, 0, 0, 0}};
  float number = 1.55555550e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2702) {
  s21_decimal check = {{0xed5be8, 0, 0, 0x80000000}};
  float number = -1.55555550e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2703) {
  s21_decimal check = {{0xed5be8, 0, 0, 0}};
  float number = 1.55555650e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2704) {
  s21_decimal check = {{0xed5be8, 0, 0, 0x80000000}};
  float number = -1.55555650e+07;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2705) {
  s21_decimal check = {{0x3b87c8, 0, 0, 0}};
  float number = 3.90138450e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2706) {
  s21_decimal check = {{0x3b87c8, 0, 0, 0x80000000}};
  float number = -3.90138450e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2707) {
  s21_decimal check = {{0x3b87ca, 0, 0, 0}};
  float number = 3.90138550e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2708) {
  s21_decimal check = {{0x3b87ca, 0, 0, 0x80000000}};
  float number = -3.90138550e+06;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2709) {
  s21_decimal check = {{0x78e480, 0, 0, 0x70000}};
  float number = 7.92281568e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2710) {
  s21_decimal check = {{0x78e480, 0, 0, 0x80070000}};
  float number = -7.92281568e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2711) {
  s21_decimal check = {{0x78e480, 0, 0, 0x70000}};
  float number = 7.92281628e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2712) {
  s21_decimal check = {{0x78e480, 0, 0, 0x80070000}};
  float number = -7.92281628e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2713) {
  s21_decimal check = {{0x78e481, 0, 0, 0x70000}};
  float number = 7.92281687e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2714) {
  s21_decimal check = {{0x78e481, 0, 0, 0x80070000}};
  float number = -7.92281687e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2715) {
  s21_decimal check = {{0x78e480, 0, 0, 0x60000}};
  float number = 7.92281580e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2716) {
  s21_decimal check = {{0x78e480, 0, 0, 0x80060000}};
  float number = -7.92281580e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2717) {
  s21_decimal check = {{0x78e480, 0, 0, 0x60000}};
  float number = 7.92281628e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2718) {
  s21_decimal check = {{0x78e480, 0, 0, 0x80060000}};
  float number = -7.92281628e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2719) {
  s21_decimal check = {{0x78e481, 0, 0, 0x60000}};
  float number = 7.92281675e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2720) {
  s21_decimal check = {{0x78e481, 0, 0, 0x80060000}};
  float number = -7.92281675e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2721) {
  s21_decimal check = {{0x4a817c, 0, 0, 0xa0000}};
  float number = 4.88281250e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2722) {
  s21_decimal check = {{0x4a817c, 0, 0, 0x800a0000}};
  float number = -4.88281250e-04;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2723) {
  s21_decimal check = {{0x87a24, 0, 0, 0x1c0000}};
  float number = 5.55555671e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2724) {
  s21_decimal check = {{0x87a24, 0, 0, 0x801c0000}};
  float number = -5.55555671e-23;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2725) {
  s21_decimal check = {{0x54c565, 0, 0, 0x1c0000}};
  float number = 5.55555684e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2726) {
  s21_decimal check = {{0x54c565, 0, 0, 0x801c0000}};
  float number = -5.55555684e-22;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2727) {
  s21_decimal check = {{0xd904, 0, 0, 0x1c0000}};
  float number = 5.55555687e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2728) {
  s21_decimal check = {{0xd904, 0, 0, 0x801c0000}};
  float number = -5.55555687e-24;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2729) {
  s21_decimal check = {{0x15b4, 0, 0, 0x1c0000}};
  float number = 5.55555687e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2730) {
  s21_decimal check = {{0x15b4, 0, 0, 0x801c0000}};
  float number = -5.55555687e-25;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2731) {
  s21_decimal check = {{0x22c, 0, 0, 0x1c0000}};
  float number = 5.55555662e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2732) {
  s21_decimal check = {{0x22c, 0, 0, 0x801c0000}};
  float number = -5.55555662e-26;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2733) {
  s21_decimal check = {{0x38, 0, 0, 0x1c0000}};
  float number = 5.55555678e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2734) {
  s21_decimal check = {{0x38, 0, 0, 0x801c0000}};
  float number = -5.55555678e-27;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2735) {
  s21_decimal check = {{0x6, 0, 0, 0x1c0000}};
  float number = 5.55555678e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2736) {
  s21_decimal check = {{0x6, 0, 0, 0x801c0000}};
  float number = -5.55555678e-28;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2737) {
  s21_decimal check = {{0x3, 0, 0, 0x20000}};
  float number = 2.99999993e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2738) {
  s21_decimal check = {{0x3, 0, 0, 0x80020000}};
  float number = -2.99999993e-02;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2739) {
  s21_decimal check = {{0x1, 0, 0, 0x10000}};
  float number = 1.00000001e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2740) {
  s21_decimal check = {{0x1, 0, 0, 0x80010000}};
  float number = -1.00000001e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2741) {
  s21_decimal check = {{0x9, 0, 0, 0x10000}};
  float number = 8.99999976e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2742) {
  s21_decimal check = {{0x9, 0, 0, 0x80010000}};
  float number = -8.99999976e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2743) {
  s21_decimal check = {{0x98967f, 0, 0, 0x70000}};
  float number = 9.99999940e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2744) {
  s21_decimal check = {{0x98967f, 0, 0, 0x80070000}};
  float number = -9.99999940e-01;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2745) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2746) {
  s21_decimal check = {{0x1, 0, 0, 0x80000000}};
  float number = -1.00000000e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_2747) {
  s21_decimal check = {{0x1, 0, 0, 0}};
  float number = 1.00000012e+00;
  test_from_float_to_decimal(number, check);
}
END_TEST

START_TEST(test_from_float_to_decimal_edge_case_3) {
  float f = INFINITY;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(test_from_float_to_decimal_edge_case_4) {
  float f = -INFINITY;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(test_from_float_to_decimal_edge_case_5) {
  float f = NAN;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(test_from_float_to_decimal_edge_case_6) {
  float f = -NAN;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(test_from_float_to_decimal_edge_case_big) {
  float f = get_big_float(_i);
  s21_decimal result;
  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(test_from_float_to_decimal_edge_case_big_negate) {
  float f = -get_big_float(_i);
  s21_decimal result;
  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

Suite *test_from_float_to_decimal_suite_1(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_float_to_decimal_1" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_float_to_decimal_1);
  tcase_add_test(tc_core, test_from_float_to_decimal_2);
  tcase_add_test(tc_core, test_from_float_to_decimal_3);
  tcase_add_test(tc_core, test_from_float_to_decimal_4);
  tcase_add_test(tc_core, test_from_float_to_decimal_5);
  tcase_add_test(tc_core, test_from_float_to_decimal_6);
  tcase_add_test(tc_core, test_from_float_to_decimal_7);
  tcase_add_test(tc_core, test_from_float_to_decimal_8);
  tcase_add_test(tc_core, test_from_float_to_decimal_9);
  tcase_add_test(tc_core, test_from_float_to_decimal_10);
  tcase_add_test(tc_core, test_from_float_to_decimal_11);
  tcase_add_test(tc_core, test_from_float_to_decimal_12);
  tcase_add_test(tc_core, test_from_float_to_decimal_13);
  tcase_add_test(tc_core, test_from_float_to_decimal_14);
  tcase_add_test(tc_core, test_from_float_to_decimal_15);
  tcase_add_test(tc_core, test_from_float_to_decimal_16);
  tcase_add_test(tc_core, test_from_float_to_decimal_17);
  tcase_add_test(tc_core, test_from_float_to_decimal_18);
  tcase_add_test(tc_core, test_from_float_to_decimal_19);
  tcase_add_test(tc_core, test_from_float_to_decimal_20);
  tcase_add_test(tc_core, test_from_float_to_decimal_21);
  tcase_add_test(tc_core, test_from_float_to_decimal_22);
  tcase_add_test(tc_core, test_from_float_to_decimal_23);
  tcase_add_test(tc_core, test_from_float_to_decimal_24);
  tcase_add_test(tc_core, test_from_float_to_decimal_25);
  tcase_add_test(tc_core, test_from_float_to_decimal_26);
  tcase_add_test(tc_core, test_from_float_to_decimal_27);
  tcase_add_test(tc_core, test_from_float_to_decimal_28);
  tcase_add_test(tc_core, test_from_float_to_decimal_29);
  tcase_add_test(tc_core, test_from_float_to_decimal_30);
  tcase_add_test(tc_core, test_from_float_to_decimal_31);
  tcase_add_test(tc_core, test_from_float_to_decimal_32);
  tcase_add_test(tc_core, test_from_float_to_decimal_33);
  tcase_add_test(tc_core, test_from_float_to_decimal_34);
  tcase_add_test(tc_core, test_from_float_to_decimal_35);
  tcase_add_test(tc_core, test_from_float_to_decimal_36);
  tcase_add_test(tc_core, test_from_float_to_decimal_37);
  tcase_add_test(tc_core, test_from_float_to_decimal_38);
  tcase_add_test(tc_core, test_from_float_to_decimal_39);
  tcase_add_test(tc_core, test_from_float_to_decimal_40);
  tcase_add_test(tc_core, test_from_float_to_decimal_41);
  tcase_add_test(tc_core, test_from_float_to_decimal_42);
  tcase_add_test(tc_core, test_from_float_to_decimal_43);
  tcase_add_test(tc_core, test_from_float_to_decimal_44);
  tcase_add_test(tc_core, test_from_float_to_decimal_45);
  tcase_add_test(tc_core, test_from_float_to_decimal_46);
  tcase_add_test(tc_core, test_from_float_to_decimal_47);
  tcase_add_test(tc_core, test_from_float_to_decimal_48);
  tcase_add_test(tc_core, test_from_float_to_decimal_49);
  tcase_add_test(tc_core, test_from_float_to_decimal_50);
  tcase_add_test(tc_core, test_from_float_to_decimal_51);
  tcase_add_test(tc_core, test_from_float_to_decimal_52);
  tcase_add_test(tc_core, test_from_float_to_decimal_53);
  tcase_add_test(tc_core, test_from_float_to_decimal_54);
  tcase_add_test(tc_core, test_from_float_to_decimal_55);
  tcase_add_test(tc_core, test_from_float_to_decimal_56);
  tcase_add_test(tc_core, test_from_float_to_decimal_57);
  tcase_add_test(tc_core, test_from_float_to_decimal_58);
  tcase_add_test(tc_core, test_from_float_to_decimal_59);
  tcase_add_test(tc_core, test_from_float_to_decimal_60);
  tcase_add_test(tc_core, test_from_float_to_decimal_61);
  tcase_add_test(tc_core, test_from_float_to_decimal_62);
  tcase_add_test(tc_core, test_from_float_to_decimal_63);
  tcase_add_test(tc_core, test_from_float_to_decimal_64);
  tcase_add_test(tc_core, test_from_float_to_decimal_65);
  tcase_add_test(tc_core, test_from_float_to_decimal_66);
  tcase_add_test(tc_core, test_from_float_to_decimal_67);
  tcase_add_test(tc_core, test_from_float_to_decimal_68);
  tcase_add_test(tc_core, test_from_float_to_decimal_69);
  tcase_add_test(tc_core, test_from_float_to_decimal_70);
  tcase_add_test(tc_core, test_from_float_to_decimal_71);
  tcase_add_test(tc_core, test_from_float_to_decimal_72);
  tcase_add_test(tc_core, test_from_float_to_decimal_73);
  tcase_add_test(tc_core, test_from_float_to_decimal_74);
  tcase_add_test(tc_core, test_from_float_to_decimal_75);
  tcase_add_test(tc_core, test_from_float_to_decimal_76);
  tcase_add_test(tc_core, test_from_float_to_decimal_77);
  tcase_add_test(tc_core, test_from_float_to_decimal_78);
  tcase_add_test(tc_core, test_from_float_to_decimal_79);
  tcase_add_test(tc_core, test_from_float_to_decimal_80);
  tcase_add_test(tc_core, test_from_float_to_decimal_81);
  tcase_add_test(tc_core, test_from_float_to_decimal_82);
  tcase_add_test(tc_core, test_from_float_to_decimal_83);
  tcase_add_test(tc_core, test_from_float_to_decimal_84);
  tcase_add_test(tc_core, test_from_float_to_decimal_85);
  tcase_add_test(tc_core, test_from_float_to_decimal_86);
  tcase_add_test(tc_core, test_from_float_to_decimal_87);
  tcase_add_test(tc_core, test_from_float_to_decimal_88);
  tcase_add_test(tc_core, test_from_float_to_decimal_89);
  tcase_add_test(tc_core, test_from_float_to_decimal_90);
  tcase_add_test(tc_core, test_from_float_to_decimal_91);
  tcase_add_test(tc_core, test_from_float_to_decimal_92);
  tcase_add_test(tc_core, test_from_float_to_decimal_93);
  tcase_add_test(tc_core, test_from_float_to_decimal_94);
  tcase_add_test(tc_core, test_from_float_to_decimal_97);
  tcase_add_test(tc_core, test_from_float_to_decimal_98);
  tcase_add_test(tc_core, test_from_float_to_decimal_99);
  tcase_add_test(tc_core, test_from_float_to_decimal_100);
  tcase_add_test(tc_core, test_from_float_to_decimal_101);
  tcase_add_test(tc_core, test_from_float_to_decimal_102);
  tcase_add_test(tc_core, test_from_float_to_decimal_103);
  tcase_add_test(tc_core, test_from_float_to_decimal_104);
  tcase_add_test(tc_core, test_from_float_to_decimal_105);
  tcase_add_test(tc_core, test_from_float_to_decimal_106);
  tcase_add_test(tc_core, test_from_float_to_decimal_107);
  tcase_add_test(tc_core, test_from_float_to_decimal_108);
  tcase_add_test(tc_core, test_from_float_to_decimal_109);
  tcase_add_test(tc_core, test_from_float_to_decimal_110);
  tcase_add_test(tc_core, test_from_float_to_decimal_111);
  tcase_add_test(tc_core, test_from_float_to_decimal_112);
  tcase_add_test(tc_core, test_from_float_to_decimal_113);
  tcase_add_test(tc_core, test_from_float_to_decimal_114);
  tcase_add_test(tc_core, test_from_float_to_decimal_115);
  tcase_add_test(tc_core, test_from_float_to_decimal_116);
  tcase_add_test(tc_core, test_from_float_to_decimal_117);
  tcase_add_test(tc_core, test_from_float_to_decimal_118);
  tcase_add_test(tc_core, test_from_float_to_decimal_119);
  tcase_add_test(tc_core, test_from_float_to_decimal_120);
  tcase_add_test(tc_core, test_from_float_to_decimal_121);
  tcase_add_test(tc_core, test_from_float_to_decimal_122);
  tcase_add_test(tc_core, test_from_float_to_decimal_123);
  tcase_add_test(tc_core, test_from_float_to_decimal_124);
  tcase_add_test(tc_core, test_from_float_to_decimal_125);
  tcase_add_test(tc_core, test_from_float_to_decimal_126);
  tcase_add_test(tc_core, test_from_float_to_decimal_127);
  tcase_add_test(tc_core, test_from_float_to_decimal_128);
  tcase_add_test(tc_core, test_from_float_to_decimal_129);
  tcase_add_test(tc_core, test_from_float_to_decimal_130);
  tcase_add_test(tc_core, test_from_float_to_decimal_131);
  tcase_add_test(tc_core, test_from_float_to_decimal_132);
  tcase_add_test(tc_core, test_from_float_to_decimal_133);
  tcase_add_test(tc_core, test_from_float_to_decimal_134);
  tcase_add_test(tc_core, test_from_float_to_decimal_135);
  tcase_add_test(tc_core, test_from_float_to_decimal_136);
  tcase_add_test(tc_core, test_from_float_to_decimal_137);
  tcase_add_test(tc_core, test_from_float_to_decimal_138);
  tcase_add_test(tc_core, test_from_float_to_decimal_139);
  tcase_add_test(tc_core, test_from_float_to_decimal_140);
  tcase_add_test(tc_core, test_from_float_to_decimal_141);
  tcase_add_test(tc_core, test_from_float_to_decimal_142);
  tcase_add_test(tc_core, test_from_float_to_decimal_143);
  tcase_add_test(tc_core, test_from_float_to_decimal_144);
  tcase_add_test(tc_core, test_from_float_to_decimal_145);
  tcase_add_test(tc_core, test_from_float_to_decimal_146);
  tcase_add_test(tc_core, test_from_float_to_decimal_147);
  tcase_add_test(tc_core, test_from_float_to_decimal_148);
  tcase_add_test(tc_core, test_from_float_to_decimal_149);
  tcase_add_test(tc_core, test_from_float_to_decimal_150);
  tcase_add_test(tc_core, test_from_float_to_decimal_151);
  tcase_add_test(tc_core, test_from_float_to_decimal_152);
  tcase_add_test(tc_core, test_from_float_to_decimal_153);
  tcase_add_test(tc_core, test_from_float_to_decimal_154);
  tcase_add_test(tc_core, test_from_float_to_decimal_155);
  tcase_add_test(tc_core, test_from_float_to_decimal_156);
  tcase_add_test(tc_core, test_from_float_to_decimal_157);
  tcase_add_test(tc_core, test_from_float_to_decimal_158);
  tcase_add_test(tc_core, test_from_float_to_decimal_159);
  tcase_add_test(tc_core, test_from_float_to_decimal_160);
  tcase_add_test(tc_core, test_from_float_to_decimal_161);
  tcase_add_test(tc_core, test_from_float_to_decimal_162);
  tcase_add_test(tc_core, test_from_float_to_decimal_163);
  tcase_add_test(tc_core, test_from_float_to_decimal_164);
  tcase_add_test(tc_core, test_from_float_to_decimal_165);
  tcase_add_test(tc_core, test_from_float_to_decimal_166);
  tcase_add_test(tc_core, test_from_float_to_decimal_167);
  tcase_add_test(tc_core, test_from_float_to_decimal_168);
  tcase_add_test(tc_core, test_from_float_to_decimal_169);
  tcase_add_test(tc_core, test_from_float_to_decimal_170);
  tcase_add_test(tc_core, test_from_float_to_decimal_171);
  tcase_add_test(tc_core, test_from_float_to_decimal_172);
  tcase_add_test(tc_core, test_from_float_to_decimal_173);
  tcase_add_test(tc_core, test_from_float_to_decimal_174);
  tcase_add_test(tc_core, test_from_float_to_decimal_175);
  tcase_add_test(tc_core, test_from_float_to_decimal_176);
  tcase_add_test(tc_core, test_from_float_to_decimal_177);
  tcase_add_test(tc_core, test_from_float_to_decimal_178);
  tcase_add_test(tc_core, test_from_float_to_decimal_179);
  tcase_add_test(tc_core, test_from_float_to_decimal_180);
  tcase_add_test(tc_core, test_from_float_to_decimal_181);
  tcase_add_test(tc_core, test_from_float_to_decimal_182);
  tcase_add_test(tc_core, test_from_float_to_decimal_183);
  tcase_add_test(tc_core, test_from_float_to_decimal_184);
  tcase_add_test(tc_core, test_from_float_to_decimal_185);
  tcase_add_test(tc_core, test_from_float_to_decimal_186);
  tcase_add_test(tc_core, test_from_float_to_decimal_187);
  tcase_add_test(tc_core, test_from_float_to_decimal_188);
  tcase_add_test(tc_core, test_from_float_to_decimal_189);
  tcase_add_test(tc_core, test_from_float_to_decimal_190);
  tcase_add_test(tc_core, test_from_float_to_decimal_191);
  tcase_add_test(tc_core, test_from_float_to_decimal_192);
  tcase_add_test(tc_core, test_from_float_to_decimal_195);
  tcase_add_test(tc_core, test_from_float_to_decimal_196);
  tcase_add_test(tc_core, test_from_float_to_decimal_197);
  tcase_add_test(tc_core, test_from_float_to_decimal_198);
  tcase_add_test(tc_core, test_from_float_to_decimal_201);
  tcase_add_test(tc_core, test_from_float_to_decimal_202);
  tcase_add_test(tc_core, test_from_float_to_decimal_203);
  tcase_add_test(tc_core, test_from_float_to_decimal_204);
  tcase_add_test(tc_core, test_from_float_to_decimal_205);
  tcase_add_test(tc_core, test_from_float_to_decimal_206);
  tcase_add_test(tc_core, test_from_float_to_decimal_207);
  tcase_add_test(tc_core, test_from_float_to_decimal_208);
  tcase_add_test(tc_core, test_from_float_to_decimal_209);
  tcase_add_test(tc_core, test_from_float_to_decimal_210);
  tcase_add_test(tc_core, test_from_float_to_decimal_211);
  tcase_add_test(tc_core, test_from_float_to_decimal_212);
  tcase_add_test(tc_core, test_from_float_to_decimal_213);
  tcase_add_test(tc_core, test_from_float_to_decimal_214);
  tcase_add_test(tc_core, test_from_float_to_decimal_217);
  tcase_add_test(tc_core, test_from_float_to_decimal_218);
  tcase_add_test(tc_core, test_from_float_to_decimal_219);
  tcase_add_test(tc_core, test_from_float_to_decimal_220);
  tcase_add_test(tc_core, test_from_float_to_decimal_221);
  tcase_add_test(tc_core, test_from_float_to_decimal_222);
  tcase_add_test(tc_core, test_from_float_to_decimal_223);
  tcase_add_test(tc_core, test_from_float_to_decimal_224);
  tcase_add_test(tc_core, test_from_float_to_decimal_225);
  tcase_add_test(tc_core, test_from_float_to_decimal_226);
  tcase_add_test(tc_core, test_from_float_to_decimal_227);
  tcase_add_test(tc_core, test_from_float_to_decimal_228);
  tcase_add_test(tc_core, test_from_float_to_decimal_229);
  tcase_add_test(tc_core, test_from_float_to_decimal_230);
  tcase_add_test(tc_core, test_from_float_to_decimal_231);
  tcase_add_test(tc_core, test_from_float_to_decimal_232);
  tcase_add_test(tc_core, test_from_float_to_decimal_233);
  tcase_add_test(tc_core, test_from_float_to_decimal_234);
  tcase_add_test(tc_core, test_from_float_to_decimal_235);
  tcase_add_test(tc_core, test_from_float_to_decimal_236);
  tcase_add_test(tc_core, test_from_float_to_decimal_237);
  tcase_add_test(tc_core, test_from_float_to_decimal_238);
  tcase_add_test(tc_core, test_from_float_to_decimal_241);
  tcase_add_test(tc_core, test_from_float_to_decimal_242);
  tcase_add_test(tc_core, test_from_float_to_decimal_243);
  tcase_add_test(tc_core, test_from_float_to_decimal_244);
  tcase_add_test(tc_core, test_from_float_to_decimal_245);
  tcase_add_test(tc_core, test_from_float_to_decimal_246);
  tcase_add_test(tc_core, test_from_float_to_decimal_247);
  tcase_add_test(tc_core, test_from_float_to_decimal_248);
  tcase_add_test(tc_core, test_from_float_to_decimal_249);
  tcase_add_test(tc_core, test_from_float_to_decimal_250);
  tcase_add_test(tc_core, test_from_float_to_decimal_251);
  tcase_add_test(tc_core, test_from_float_to_decimal_252);
  tcase_add_test(tc_core, test_from_float_to_decimal_253);
  tcase_add_test(tc_core, test_from_float_to_decimal_254);
  tcase_add_test(tc_core, test_from_float_to_decimal_255);
  tcase_add_test(tc_core, test_from_float_to_decimal_256);
  tcase_add_test(tc_core, test_from_float_to_decimal_257);
  tcase_add_test(tc_core, test_from_float_to_decimal_258);
  tcase_add_test(tc_core, test_from_float_to_decimal_259);
  tcase_add_test(tc_core, test_from_float_to_decimal_260);
  tcase_add_test(tc_core, test_from_float_to_decimal_261);
  tcase_add_test(tc_core, test_from_float_to_decimal_262);
  tcase_add_test(tc_core, test_from_float_to_decimal_263);
  tcase_add_test(tc_core, test_from_float_to_decimal_264);
  tcase_add_test(tc_core, test_from_float_to_decimal_265);
  tcase_add_test(tc_core, test_from_float_to_decimal_266);
  tcase_add_test(tc_core, test_from_float_to_decimal_267);
  tcase_add_test(tc_core, test_from_float_to_decimal_268);
  tcase_add_test(tc_core, test_from_float_to_decimal_269);
  tcase_add_test(tc_core, test_from_float_to_decimal_270);
  tcase_add_test(tc_core, test_from_float_to_decimal_271);
  tcase_add_test(tc_core, test_from_float_to_decimal_272);
  tcase_add_test(tc_core, test_from_float_to_decimal_273);
  tcase_add_test(tc_core, test_from_float_to_decimal_274);
  tcase_add_test(tc_core, test_from_float_to_decimal_275);
  tcase_add_test(tc_core, test_from_float_to_decimal_276);
  tcase_add_test(tc_core, test_from_float_to_decimal_277);
  tcase_add_test(tc_core, test_from_float_to_decimal_278);
  tcase_add_test(tc_core, test_from_float_to_decimal_279);
  tcase_add_test(tc_core, test_from_float_to_decimal_280);
  tcase_add_test(tc_core, test_from_float_to_decimal_281);
  tcase_add_test(tc_core, test_from_float_to_decimal_282);
  tcase_add_test(tc_core, test_from_float_to_decimal_283);
  tcase_add_test(tc_core, test_from_float_to_decimal_284);
  tcase_add_test(tc_core, test_from_float_to_decimal_285);
  tcase_add_test(tc_core, test_from_float_to_decimal_286);
  tcase_add_test(tc_core, test_from_float_to_decimal_287);
  tcase_add_test(tc_core, test_from_float_to_decimal_288);
  tcase_add_test(tc_core, test_from_float_to_decimal_289);
  tcase_add_test(tc_core, test_from_float_to_decimal_290);
  tcase_add_test(tc_core, test_from_float_to_decimal_291);
  tcase_add_test(tc_core, test_from_float_to_decimal_292);
  tcase_add_test(tc_core, test_from_float_to_decimal_293);
  tcase_add_test(tc_core, test_from_float_to_decimal_294);
  tcase_add_test(tc_core, test_from_float_to_decimal_295);
  tcase_add_test(tc_core, test_from_float_to_decimal_296);
  tcase_add_test(tc_core, test_from_float_to_decimal_297);
  tcase_add_test(tc_core, test_from_float_to_decimal_298);
  tcase_add_test(tc_core, test_from_float_to_decimal_299);
  tcase_add_test(tc_core, test_from_float_to_decimal_300);
  tcase_add_test(tc_core, test_from_float_to_decimal_301);
  tcase_add_test(tc_core, test_from_float_to_decimal_302);
  tcase_add_test(tc_core, test_from_float_to_decimal_303);
  tcase_add_test(tc_core, test_from_float_to_decimal_304);
  tcase_add_test(tc_core, test_from_float_to_decimal_305);
  tcase_add_test(tc_core, test_from_float_to_decimal_306);
  tcase_add_test(tc_core, test_from_float_to_decimal_307);
  tcase_add_test(tc_core, test_from_float_to_decimal_308);
  tcase_add_test(tc_core, test_from_float_to_decimal_309);
  tcase_add_test(tc_core, test_from_float_to_decimal_310);
  tcase_add_test(tc_core, test_from_float_to_decimal_311);
  tcase_add_test(tc_core, test_from_float_to_decimal_312);
  tcase_add_test(tc_core, test_from_float_to_decimal_313);
  tcase_add_test(tc_core, test_from_float_to_decimal_314);
  tcase_add_test(tc_core, test_from_float_to_decimal_315);
  tcase_add_test(tc_core, test_from_float_to_decimal_316);
  tcase_add_test(tc_core, test_from_float_to_decimal_317);
  tcase_add_test(tc_core, test_from_float_to_decimal_318);
  tcase_add_test(tc_core, test_from_float_to_decimal_319);
  tcase_add_test(tc_core, test_from_float_to_decimal_320);
  tcase_add_test(tc_core, test_from_float_to_decimal_323);
  tcase_add_test(tc_core, test_from_float_to_decimal_324);
  tcase_add_test(tc_core, test_from_float_to_decimal_325);
  tcase_add_test(tc_core, test_from_float_to_decimal_326);
  tcase_add_test(tc_core, test_from_float_to_decimal_327);
  tcase_add_test(tc_core, test_from_float_to_decimal_328);
  tcase_add_test(tc_core, test_from_float_to_decimal_329);
  tcase_add_test(tc_core, test_from_float_to_decimal_330);
  tcase_add_test(tc_core, test_from_float_to_decimal_331);
  tcase_add_test(tc_core, test_from_float_to_decimal_332);
  tcase_add_test(tc_core, test_from_float_to_decimal_333);
  tcase_add_test(tc_core, test_from_float_to_decimal_334);
  tcase_add_test(tc_core, test_from_float_to_decimal_335);
  tcase_add_test(tc_core, test_from_float_to_decimal_336);
  tcase_add_test(tc_core, test_from_float_to_decimal_337);
  tcase_add_test(tc_core, test_from_float_to_decimal_338);
  tcase_add_test(tc_core, test_from_float_to_decimal_339);
  tcase_add_test(tc_core, test_from_float_to_decimal_340);
  tcase_add_test(tc_core, test_from_float_to_decimal_341);
  tcase_add_test(tc_core, test_from_float_to_decimal_342);
  tcase_add_test(tc_core, test_from_float_to_decimal_343);
  tcase_add_test(tc_core, test_from_float_to_decimal_344);
  tcase_add_test(tc_core, test_from_float_to_decimal_345);
  tcase_add_test(tc_core, test_from_float_to_decimal_346);
  tcase_add_test(tc_core, test_from_float_to_decimal_347);
  tcase_add_test(tc_core, test_from_float_to_decimal_348);
  tcase_add_test(tc_core, test_from_float_to_decimal_349);
  tcase_add_test(tc_core, test_from_float_to_decimal_350);
  tcase_add_test(tc_core, test_from_float_to_decimal_351);
  tcase_add_test(tc_core, test_from_float_to_decimal_352);
  tcase_add_test(tc_core, test_from_float_to_decimal_353);
  tcase_add_test(tc_core, test_from_float_to_decimal_354);
  tcase_add_test(tc_core, test_from_float_to_decimal_355);
  tcase_add_test(tc_core, test_from_float_to_decimal_356);
  tcase_add_test(tc_core, test_from_float_to_decimal_357);
  tcase_add_test(tc_core, test_from_float_to_decimal_358);
  tcase_add_test(tc_core, test_from_float_to_decimal_359);
  tcase_add_test(tc_core, test_from_float_to_decimal_360);
  tcase_add_test(tc_core, test_from_float_to_decimal_361);
  tcase_add_test(tc_core, test_from_float_to_decimal_362);
  tcase_add_test(tc_core, test_from_float_to_decimal_363);
  tcase_add_test(tc_core, test_from_float_to_decimal_364);
  tcase_add_test(tc_core, test_from_float_to_decimal_365);
  tcase_add_test(tc_core, test_from_float_to_decimal_366);
  tcase_add_test(tc_core, test_from_float_to_decimal_367);
  tcase_add_test(tc_core, test_from_float_to_decimal_368);
  tcase_add_test(tc_core, test_from_float_to_decimal_369);
  tcase_add_test(tc_core, test_from_float_to_decimal_370);
  tcase_add_test(tc_core, test_from_float_to_decimal_371);
  tcase_add_test(tc_core, test_from_float_to_decimal_372);
  tcase_add_test(tc_core, test_from_float_to_decimal_373);
  tcase_add_test(tc_core, test_from_float_to_decimal_374);
  tcase_add_test(tc_core, test_from_float_to_decimal_375);
  tcase_add_test(tc_core, test_from_float_to_decimal_376);
  tcase_add_test(tc_core, test_from_float_to_decimal_377);
  tcase_add_test(tc_core, test_from_float_to_decimal_378);
  tcase_add_test(tc_core, test_from_float_to_decimal_379);
  tcase_add_test(tc_core, test_from_float_to_decimal_380);
  tcase_add_test(tc_core, test_from_float_to_decimal_381);
  tcase_add_test(tc_core, test_from_float_to_decimal_382);
  tcase_add_test(tc_core, test_from_float_to_decimal_383);
  tcase_add_test(tc_core, test_from_float_to_decimal_384);
  tcase_add_test(tc_core, test_from_float_to_decimal_385);
  tcase_add_test(tc_core, test_from_float_to_decimal_386);
  tcase_add_test(tc_core, test_from_float_to_decimal_387);
  tcase_add_test(tc_core, test_from_float_to_decimal_388);
  tcase_add_test(tc_core, test_from_float_to_decimal_389);
  tcase_add_test(tc_core, test_from_float_to_decimal_390);
  tcase_add_test(tc_core, test_from_float_to_decimal_391);
  tcase_add_test(tc_core, test_from_float_to_decimal_392);
  tcase_add_test(tc_core, test_from_float_to_decimal_393);
  tcase_add_test(tc_core, test_from_float_to_decimal_394);
  tcase_add_test(tc_core, test_from_float_to_decimal_395);
  tcase_add_test(tc_core, test_from_float_to_decimal_396);
  tcase_add_test(tc_core, test_from_float_to_decimal_397);
  tcase_add_test(tc_core, test_from_float_to_decimal_398);
  tcase_add_test(tc_core, test_from_float_to_decimal_399);
  tcase_add_test(tc_core, test_from_float_to_decimal_400);
  tcase_add_test(tc_core, test_from_float_to_decimal_401);
  tcase_add_test(tc_core, test_from_float_to_decimal_402);
  tcase_add_test(tc_core, test_from_float_to_decimal_403);
  tcase_add_test(tc_core, test_from_float_to_decimal_404);
  tcase_add_test(tc_core, test_from_float_to_decimal_405);
  tcase_add_test(tc_core, test_from_float_to_decimal_406);
  tcase_add_test(tc_core, test_from_float_to_decimal_407);
  tcase_add_test(tc_core, test_from_float_to_decimal_408);
  tcase_add_test(tc_core, test_from_float_to_decimal_409);
  tcase_add_test(tc_core, test_from_float_to_decimal_410);
  tcase_add_test(tc_core, test_from_float_to_decimal_411);
  tcase_add_test(tc_core, test_from_float_to_decimal_412);
  tcase_add_test(tc_core, test_from_float_to_decimal_413);
  tcase_add_test(tc_core, test_from_float_to_decimal_414);
  tcase_add_test(tc_core, test_from_float_to_decimal_415);
  tcase_add_test(tc_core, test_from_float_to_decimal_416);
  tcase_add_test(tc_core, test_from_float_to_decimal_417);
  tcase_add_test(tc_core, test_from_float_to_decimal_418);
  tcase_add_test(tc_core, test_from_float_to_decimal_419);
  tcase_add_test(tc_core, test_from_float_to_decimal_420);
  tcase_add_test(tc_core, test_from_float_to_decimal_421);
  tcase_add_test(tc_core, test_from_float_to_decimal_422);
  tcase_add_test(tc_core, test_from_float_to_decimal_423);
  tcase_add_test(tc_core, test_from_float_to_decimal_424);
  tcase_add_test(tc_core, test_from_float_to_decimal_425);
  tcase_add_test(tc_core, test_from_float_to_decimal_426);
  tcase_add_test(tc_core, test_from_float_to_decimal_427);
  tcase_add_test(tc_core, test_from_float_to_decimal_428);
  tcase_add_test(tc_core, test_from_float_to_decimal_429);
  tcase_add_test(tc_core, test_from_float_to_decimal_430);
  tcase_add_test(tc_core, test_from_float_to_decimal_431);
  tcase_add_test(tc_core, test_from_float_to_decimal_432);
  tcase_add_test(tc_core, test_from_float_to_decimal_433);
  tcase_add_test(tc_core, test_from_float_to_decimal_434);
  tcase_add_test(tc_core, test_from_float_to_decimal_435);
  tcase_add_test(tc_core, test_from_float_to_decimal_436);
  tcase_add_test(tc_core, test_from_float_to_decimal_437);
  tcase_add_test(tc_core, test_from_float_to_decimal_438);
  tcase_add_test(tc_core, test_from_float_to_decimal_439);
  tcase_add_test(tc_core, test_from_float_to_decimal_440);
  tcase_add_test(tc_core, test_from_float_to_decimal_441);
  tcase_add_test(tc_core, test_from_float_to_decimal_442);
  tcase_add_test(tc_core, test_from_float_to_decimal_443);
  tcase_add_test(tc_core, test_from_float_to_decimal_444);
  tcase_add_test(tc_core, test_from_float_to_decimal_445);
  tcase_add_test(tc_core, test_from_float_to_decimal_446);
  tcase_add_test(tc_core, test_from_float_to_decimal_447);
  tcase_add_test(tc_core, test_from_float_to_decimal_448);
  tcase_add_test(tc_core, test_from_float_to_decimal_449);
  tcase_add_test(tc_core, test_from_float_to_decimal_450);
  tcase_add_test(tc_core, test_from_float_to_decimal_451);
  tcase_add_test(tc_core, test_from_float_to_decimal_452);
  tcase_add_test(tc_core, test_from_float_to_decimal_453);
  tcase_add_test(tc_core, test_from_float_to_decimal_454);
  tcase_add_test(tc_core, test_from_float_to_decimal_455);
  tcase_add_test(tc_core, test_from_float_to_decimal_456);
  tcase_add_test(tc_core, test_from_float_to_decimal_457);
  tcase_add_test(tc_core, test_from_float_to_decimal_458);
  tcase_add_test(tc_core, test_from_float_to_decimal_459);
  tcase_add_test(tc_core, test_from_float_to_decimal_460);
  tcase_add_test(tc_core, test_from_float_to_decimal_461);
  tcase_add_test(tc_core, test_from_float_to_decimal_462);
  tcase_add_test(tc_core, test_from_float_to_decimal_463);
  tcase_add_test(tc_core, test_from_float_to_decimal_464);
  tcase_add_test(tc_core, test_from_float_to_decimal_465);
  tcase_add_test(tc_core, test_from_float_to_decimal_466);
  tcase_add_test(tc_core, test_from_float_to_decimal_467);
  tcase_add_test(tc_core, test_from_float_to_decimal_468);
  tcase_add_test(tc_core, test_from_float_to_decimal_469);
  tcase_add_test(tc_core, test_from_float_to_decimal_470);
  tcase_add_test(tc_core, test_from_float_to_decimal_471);
  tcase_add_test(tc_core, test_from_float_to_decimal_472);
  tcase_add_test(tc_core, test_from_float_to_decimal_473);
  tcase_add_test(tc_core, test_from_float_to_decimal_474);
  tcase_add_test(tc_core, test_from_float_to_decimal_475);
  tcase_add_test(tc_core, test_from_float_to_decimal_476);
  tcase_add_test(tc_core, test_from_float_to_decimal_477);
  tcase_add_test(tc_core, test_from_float_to_decimal_478);
  tcase_add_test(tc_core, test_from_float_to_decimal_479);
  tcase_add_test(tc_core, test_from_float_to_decimal_480);
  tcase_add_test(tc_core, test_from_float_to_decimal_481);
  tcase_add_test(tc_core, test_from_float_to_decimal_482);
  tcase_add_test(tc_core, test_from_float_to_decimal_483);
  tcase_add_test(tc_core, test_from_float_to_decimal_484);
  tcase_add_test(tc_core, test_from_float_to_decimal_485);
  tcase_add_test(tc_core, test_from_float_to_decimal_486);
  tcase_add_test(tc_core, test_from_float_to_decimal_487);
  tcase_add_test(tc_core, test_from_float_to_decimal_488);
  tcase_add_test(tc_core, test_from_float_to_decimal_489);
  tcase_add_test(tc_core, test_from_float_to_decimal_490);
  tcase_add_test(tc_core, test_from_float_to_decimal_491);
  tcase_add_test(tc_core, test_from_float_to_decimal_492);
  tcase_add_test(tc_core, test_from_float_to_decimal_493);
  tcase_add_test(tc_core, test_from_float_to_decimal_494);
  tcase_add_test(tc_core, test_from_float_to_decimal_495);
  tcase_add_test(tc_core, test_from_float_to_decimal_496);
  tcase_add_test(tc_core, test_from_float_to_decimal_497);
  tcase_add_test(tc_core, test_from_float_to_decimal_498);
  tcase_add_test(tc_core, test_from_float_to_decimal_499);
  tcase_add_test(tc_core, test_from_float_to_decimal_500);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *test_from_float_to_decimal_suite_2(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_float_to_decimal_2" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_float_to_decimal_501);
  tcase_add_test(tc_core, test_from_float_to_decimal_502);
  tcase_add_test(tc_core, test_from_float_to_decimal_503);
  tcase_add_test(tc_core, test_from_float_to_decimal_504);
  tcase_add_test(tc_core, test_from_float_to_decimal_505);
  tcase_add_test(tc_core, test_from_float_to_decimal_506);
  tcase_add_test(tc_core, test_from_float_to_decimal_507);
  tcase_add_test(tc_core, test_from_float_to_decimal_508);
  tcase_add_test(tc_core, test_from_float_to_decimal_509);
  tcase_add_test(tc_core, test_from_float_to_decimal_510);
  tcase_add_test(tc_core, test_from_float_to_decimal_511);
  tcase_add_test(tc_core, test_from_float_to_decimal_512);
  tcase_add_test(tc_core, test_from_float_to_decimal_513);
  tcase_add_test(tc_core, test_from_float_to_decimal_514);
  tcase_add_test(tc_core, test_from_float_to_decimal_515);
  tcase_add_test(tc_core, test_from_float_to_decimal_516);
  tcase_add_test(tc_core, test_from_float_to_decimal_517);
  tcase_add_test(tc_core, test_from_float_to_decimal_518);
  tcase_add_test(tc_core, test_from_float_to_decimal_519);
  tcase_add_test(tc_core, test_from_float_to_decimal_520);
  tcase_add_test(tc_core, test_from_float_to_decimal_523);
  tcase_add_test(tc_core, test_from_float_to_decimal_524);
  tcase_add_test(tc_core, test_from_float_to_decimal_525);
  tcase_add_test(tc_core, test_from_float_to_decimal_526);
  tcase_add_test(tc_core, test_from_float_to_decimal_527);
  tcase_add_test(tc_core, test_from_float_to_decimal_528);
  tcase_add_test(tc_core, test_from_float_to_decimal_529);
  tcase_add_test(tc_core, test_from_float_to_decimal_530);
  tcase_add_test(tc_core, test_from_float_to_decimal_531);
  tcase_add_test(tc_core, test_from_float_to_decimal_532);
  tcase_add_test(tc_core, test_from_float_to_decimal_533);
  tcase_add_test(tc_core, test_from_float_to_decimal_534);
  tcase_add_test(tc_core, test_from_float_to_decimal_535);
  tcase_add_test(tc_core, test_from_float_to_decimal_536);
  tcase_add_test(tc_core, test_from_float_to_decimal_537);
  tcase_add_test(tc_core, test_from_float_to_decimal_538);
  tcase_add_test(tc_core, test_from_float_to_decimal_539);
  tcase_add_test(tc_core, test_from_float_to_decimal_540);
  tcase_add_test(tc_core, test_from_float_to_decimal_541);
  tcase_add_test(tc_core, test_from_float_to_decimal_542);
  tcase_add_test(tc_core, test_from_float_to_decimal_543);
  tcase_add_test(tc_core, test_from_float_to_decimal_544);
  tcase_add_test(tc_core, test_from_float_to_decimal_545);
  tcase_add_test(tc_core, test_from_float_to_decimal_546);
  tcase_add_test(tc_core, test_from_float_to_decimal_547);
  tcase_add_test(tc_core, test_from_float_to_decimal_548);
  tcase_add_test(tc_core, test_from_float_to_decimal_549);
  tcase_add_test(tc_core, test_from_float_to_decimal_550);
  tcase_add_test(tc_core, test_from_float_to_decimal_551);
  tcase_add_test(tc_core, test_from_float_to_decimal_552);
  tcase_add_test(tc_core, test_from_float_to_decimal_553);
  tcase_add_test(tc_core, test_from_float_to_decimal_554);
  tcase_add_test(tc_core, test_from_float_to_decimal_555);
  tcase_add_test(tc_core, test_from_float_to_decimal_556);
  tcase_add_test(tc_core, test_from_float_to_decimal_557);
  tcase_add_test(tc_core, test_from_float_to_decimal_558);
  tcase_add_test(tc_core, test_from_float_to_decimal_559);
  tcase_add_test(tc_core, test_from_float_to_decimal_560);
  tcase_add_test(tc_core, test_from_float_to_decimal_561);
  tcase_add_test(tc_core, test_from_float_to_decimal_562);
  tcase_add_test(tc_core, test_from_float_to_decimal_563);
  tcase_add_test(tc_core, test_from_float_to_decimal_564);
  tcase_add_test(tc_core, test_from_float_to_decimal_565);
  tcase_add_test(tc_core, test_from_float_to_decimal_566);
  tcase_add_test(tc_core, test_from_float_to_decimal_567);
  tcase_add_test(tc_core, test_from_float_to_decimal_568);
  tcase_add_test(tc_core, test_from_float_to_decimal_569);
  tcase_add_test(tc_core, test_from_float_to_decimal_570);
  tcase_add_test(tc_core, test_from_float_to_decimal_571);
  tcase_add_test(tc_core, test_from_float_to_decimal_572);
  tcase_add_test(tc_core, test_from_float_to_decimal_573);
  tcase_add_test(tc_core, test_from_float_to_decimal_574);
  tcase_add_test(tc_core, test_from_float_to_decimal_575);
  tcase_add_test(tc_core, test_from_float_to_decimal_576);
  tcase_add_test(tc_core, test_from_float_to_decimal_577);
  tcase_add_test(tc_core, test_from_float_to_decimal_578);
  tcase_add_test(tc_core, test_from_float_to_decimal_579);
  tcase_add_test(tc_core, test_from_float_to_decimal_580);
  tcase_add_test(tc_core, test_from_float_to_decimal_581);
  tcase_add_test(tc_core, test_from_float_to_decimal_582);
  tcase_add_test(tc_core, test_from_float_to_decimal_583);
  tcase_add_test(tc_core, test_from_float_to_decimal_584);
  tcase_add_test(tc_core, test_from_float_to_decimal_585);
  tcase_add_test(tc_core, test_from_float_to_decimal_586);
  tcase_add_test(tc_core, test_from_float_to_decimal_587);
  tcase_add_test(tc_core, test_from_float_to_decimal_588);
  tcase_add_test(tc_core, test_from_float_to_decimal_589);
  tcase_add_test(tc_core, test_from_float_to_decimal_590);
  tcase_add_test(tc_core, test_from_float_to_decimal_591);
  tcase_add_test(tc_core, test_from_float_to_decimal_592);
  tcase_add_test(tc_core, test_from_float_to_decimal_593);
  tcase_add_test(tc_core, test_from_float_to_decimal_594);
  tcase_add_test(tc_core, test_from_float_to_decimal_595);
  tcase_add_test(tc_core, test_from_float_to_decimal_596);
  tcase_add_test(tc_core, test_from_float_to_decimal_597);
  tcase_add_test(tc_core, test_from_float_to_decimal_598);
  tcase_add_test(tc_core, test_from_float_to_decimal_599);
  tcase_add_test(tc_core, test_from_float_to_decimal_600);
  tcase_add_test(tc_core, test_from_float_to_decimal_601);
  tcase_add_test(tc_core, test_from_float_to_decimal_602);
  tcase_add_test(tc_core, test_from_float_to_decimal_603);
  tcase_add_test(tc_core, test_from_float_to_decimal_604);
  tcase_add_test(tc_core, test_from_float_to_decimal_605);
  tcase_add_test(tc_core, test_from_float_to_decimal_606);
  tcase_add_test(tc_core, test_from_float_to_decimal_607);
  tcase_add_test(tc_core, test_from_float_to_decimal_608);
  tcase_add_test(tc_core, test_from_float_to_decimal_609);
  tcase_add_test(tc_core, test_from_float_to_decimal_610);
  tcase_add_test(tc_core, test_from_float_to_decimal_611);
  tcase_add_test(tc_core, test_from_float_to_decimal_612);
  tcase_add_test(tc_core, test_from_float_to_decimal_613);
  tcase_add_test(tc_core, test_from_float_to_decimal_614);
  tcase_add_test(tc_core, test_from_float_to_decimal_615);
  tcase_add_test(tc_core, test_from_float_to_decimal_616);
  tcase_add_test(tc_core, test_from_float_to_decimal_617);
  tcase_add_test(tc_core, test_from_float_to_decimal_618);
  tcase_add_test(tc_core, test_from_float_to_decimal_619);
  tcase_add_test(tc_core, test_from_float_to_decimal_620);
  tcase_add_test(tc_core, test_from_float_to_decimal_621);
  tcase_add_test(tc_core, test_from_float_to_decimal_622);
  tcase_add_test(tc_core, test_from_float_to_decimal_623);
  tcase_add_test(tc_core, test_from_float_to_decimal_624);
  tcase_add_test(tc_core, test_from_float_to_decimal_625);
  tcase_add_test(tc_core, test_from_float_to_decimal_626);
  tcase_add_test(tc_core, test_from_float_to_decimal_627);
  tcase_add_test(tc_core, test_from_float_to_decimal_628);
  tcase_add_test(tc_core, test_from_float_to_decimal_629);
  tcase_add_test(tc_core, test_from_float_to_decimal_630);
  tcase_add_test(tc_core, test_from_float_to_decimal_631);
  tcase_add_test(tc_core, test_from_float_to_decimal_632);
  tcase_add_test(tc_core, test_from_float_to_decimal_633);
  tcase_add_test(tc_core, test_from_float_to_decimal_634);
  tcase_add_test(tc_core, test_from_float_to_decimal_635);
  tcase_add_test(tc_core, test_from_float_to_decimal_636);
  tcase_add_test(tc_core, test_from_float_to_decimal_637);
  tcase_add_test(tc_core, test_from_float_to_decimal_638);
  tcase_add_test(tc_core, test_from_float_to_decimal_639);
  tcase_add_test(tc_core, test_from_float_to_decimal_640);
  tcase_add_test(tc_core, test_from_float_to_decimal_641);
  tcase_add_test(tc_core, test_from_float_to_decimal_642);
  tcase_add_test(tc_core, test_from_float_to_decimal_643);
  tcase_add_test(tc_core, test_from_float_to_decimal_644);
  tcase_add_test(tc_core, test_from_float_to_decimal_645);
  tcase_add_test(tc_core, test_from_float_to_decimal_646);
  tcase_add_test(tc_core, test_from_float_to_decimal_647);
  tcase_add_test(tc_core, test_from_float_to_decimal_648);
  tcase_add_test(tc_core, test_from_float_to_decimal_649);
  tcase_add_test(tc_core, test_from_float_to_decimal_650);
  tcase_add_test(tc_core, test_from_float_to_decimal_651);
  tcase_add_test(tc_core, test_from_float_to_decimal_652);
  tcase_add_test(tc_core, test_from_float_to_decimal_653);
  tcase_add_test(tc_core, test_from_float_to_decimal_654);
  tcase_add_test(tc_core, test_from_float_to_decimal_655);
  tcase_add_test(tc_core, test_from_float_to_decimal_656);
  tcase_add_test(tc_core, test_from_float_to_decimal_657);
  tcase_add_test(tc_core, test_from_float_to_decimal_658);
  tcase_add_test(tc_core, test_from_float_to_decimal_659);
  tcase_add_test(tc_core, test_from_float_to_decimal_660);
  tcase_add_test(tc_core, test_from_float_to_decimal_661);
  tcase_add_test(tc_core, test_from_float_to_decimal_662);
  tcase_add_test(tc_core, test_from_float_to_decimal_663);
  tcase_add_test(tc_core, test_from_float_to_decimal_664);
  tcase_add_test(tc_core, test_from_float_to_decimal_665);
  tcase_add_test(tc_core, test_from_float_to_decimal_666);
  tcase_add_test(tc_core, test_from_float_to_decimal_667);
  tcase_add_test(tc_core, test_from_float_to_decimal_668);
  tcase_add_test(tc_core, test_from_float_to_decimal_669);
  tcase_add_test(tc_core, test_from_float_to_decimal_670);
  tcase_add_test(tc_core, test_from_float_to_decimal_671);
  tcase_add_test(tc_core, test_from_float_to_decimal_672);
  tcase_add_test(tc_core, test_from_float_to_decimal_673);
  tcase_add_test(tc_core, test_from_float_to_decimal_674);
  tcase_add_test(tc_core, test_from_float_to_decimal_675);
  tcase_add_test(tc_core, test_from_float_to_decimal_676);
  tcase_add_test(tc_core, test_from_float_to_decimal_677);
  tcase_add_test(tc_core, test_from_float_to_decimal_678);
  tcase_add_test(tc_core, test_from_float_to_decimal_679);
  tcase_add_test(tc_core, test_from_float_to_decimal_680);
  tcase_add_test(tc_core, test_from_float_to_decimal_681);
  tcase_add_test(tc_core, test_from_float_to_decimal_682);
  tcase_add_test(tc_core, test_from_float_to_decimal_683);
  tcase_add_test(tc_core, test_from_float_to_decimal_684);
  tcase_add_test(tc_core, test_from_float_to_decimal_685);
  tcase_add_test(tc_core, test_from_float_to_decimal_686);
  tcase_add_test(tc_core, test_from_float_to_decimal_687);
  tcase_add_test(tc_core, test_from_float_to_decimal_688);
  tcase_add_test(tc_core, test_from_float_to_decimal_689);
  tcase_add_test(tc_core, test_from_float_to_decimal_690);
  tcase_add_test(tc_core, test_from_float_to_decimal_691);
  tcase_add_test(tc_core, test_from_float_to_decimal_692);
  tcase_add_test(tc_core, test_from_float_to_decimal_693);
  tcase_add_test(tc_core, test_from_float_to_decimal_694);
  tcase_add_test(tc_core, test_from_float_to_decimal_695);
  tcase_add_test(tc_core, test_from_float_to_decimal_696);
  tcase_add_test(tc_core, test_from_float_to_decimal_697);
  tcase_add_test(tc_core, test_from_float_to_decimal_698);
  tcase_add_test(tc_core, test_from_float_to_decimal_699);
  tcase_add_test(tc_core, test_from_float_to_decimal_700);
  tcase_add_test(tc_core, test_from_float_to_decimal_701);
  tcase_add_test(tc_core, test_from_float_to_decimal_702);
  tcase_add_test(tc_core, test_from_float_to_decimal_703);
  tcase_add_test(tc_core, test_from_float_to_decimal_704);
  tcase_add_test(tc_core, test_from_float_to_decimal_705);
  tcase_add_test(tc_core, test_from_float_to_decimal_706);
  tcase_add_test(tc_core, test_from_float_to_decimal_707);
  tcase_add_test(tc_core, test_from_float_to_decimal_708);
  tcase_add_test(tc_core, test_from_float_to_decimal_709);
  tcase_add_test(tc_core, test_from_float_to_decimal_710);
  tcase_add_test(tc_core, test_from_float_to_decimal_711);
  tcase_add_test(tc_core, test_from_float_to_decimal_712);
  tcase_add_test(tc_core, test_from_float_to_decimal_713);
  tcase_add_test(tc_core, test_from_float_to_decimal_714);
  tcase_add_test(tc_core, test_from_float_to_decimal_715);
  tcase_add_test(tc_core, test_from_float_to_decimal_716);
  tcase_add_test(tc_core, test_from_float_to_decimal_717);
  tcase_add_test(tc_core, test_from_float_to_decimal_718);
  tcase_add_test(tc_core, test_from_float_to_decimal_719);
  tcase_add_test(tc_core, test_from_float_to_decimal_720);
  tcase_add_test(tc_core, test_from_float_to_decimal_721);
  tcase_add_test(tc_core, test_from_float_to_decimal_722);
  tcase_add_test(tc_core, test_from_float_to_decimal_723);
  tcase_add_test(tc_core, test_from_float_to_decimal_724);
  tcase_add_test(tc_core, test_from_float_to_decimal_725);
  tcase_add_test(tc_core, test_from_float_to_decimal_726);
  tcase_add_test(tc_core, test_from_float_to_decimal_727);
  tcase_add_test(tc_core, test_from_float_to_decimal_728);
  tcase_add_test(tc_core, test_from_float_to_decimal_729);
  tcase_add_test(tc_core, test_from_float_to_decimal_730);
  tcase_add_test(tc_core, test_from_float_to_decimal_731);
  tcase_add_test(tc_core, test_from_float_to_decimal_732);
  tcase_add_test(tc_core, test_from_float_to_decimal_733);
  tcase_add_test(tc_core, test_from_float_to_decimal_734);
  tcase_add_test(tc_core, test_from_float_to_decimal_735);
  tcase_add_test(tc_core, test_from_float_to_decimal_736);
  tcase_add_test(tc_core, test_from_float_to_decimal_737);
  tcase_add_test(tc_core, test_from_float_to_decimal_738);
  tcase_add_test(tc_core, test_from_float_to_decimal_739);
  tcase_add_test(tc_core, test_from_float_to_decimal_740);
  tcase_add_test(tc_core, test_from_float_to_decimal_741);
  tcase_add_test(tc_core, test_from_float_to_decimal_742);
  tcase_add_test(tc_core, test_from_float_to_decimal_743);
  tcase_add_test(tc_core, test_from_float_to_decimal_744);
  tcase_add_test(tc_core, test_from_float_to_decimal_745);
  tcase_add_test(tc_core, test_from_float_to_decimal_746);
  tcase_add_test(tc_core, test_from_float_to_decimal_747);
  tcase_add_test(tc_core, test_from_float_to_decimal_748);
  tcase_add_test(tc_core, test_from_float_to_decimal_749);
  tcase_add_test(tc_core, test_from_float_to_decimal_750);
  tcase_add_test(tc_core, test_from_float_to_decimal_751);
  tcase_add_test(tc_core, test_from_float_to_decimal_752);
  tcase_add_test(tc_core, test_from_float_to_decimal_753);
  tcase_add_test(tc_core, test_from_float_to_decimal_754);
  tcase_add_test(tc_core, test_from_float_to_decimal_755);
  tcase_add_test(tc_core, test_from_float_to_decimal_756);
  tcase_add_test(tc_core, test_from_float_to_decimal_757);
  tcase_add_test(tc_core, test_from_float_to_decimal_758);
  tcase_add_test(tc_core, test_from_float_to_decimal_759);
  tcase_add_test(tc_core, test_from_float_to_decimal_760);
  tcase_add_test(tc_core, test_from_float_to_decimal_761);
  tcase_add_test(tc_core, test_from_float_to_decimal_762);
  tcase_add_test(tc_core, test_from_float_to_decimal_763);
  tcase_add_test(tc_core, test_from_float_to_decimal_764);
  tcase_add_test(tc_core, test_from_float_to_decimal_765);
  tcase_add_test(tc_core, test_from_float_to_decimal_766);
  tcase_add_test(tc_core, test_from_float_to_decimal_769);
  tcase_add_test(tc_core, test_from_float_to_decimal_770);
  tcase_add_test(tc_core, test_from_float_to_decimal_771);
  tcase_add_test(tc_core, test_from_float_to_decimal_772);
  tcase_add_test(tc_core, test_from_float_to_decimal_773);
  tcase_add_test(tc_core, test_from_float_to_decimal_774);
  tcase_add_test(tc_core, test_from_float_to_decimal_775);
  tcase_add_test(tc_core, test_from_float_to_decimal_776);
  tcase_add_test(tc_core, test_from_float_to_decimal_777);
  tcase_add_test(tc_core, test_from_float_to_decimal_778);
  tcase_add_test(tc_core, test_from_float_to_decimal_779);
  tcase_add_test(tc_core, test_from_float_to_decimal_780);
  tcase_add_test(tc_core, test_from_float_to_decimal_781);
  tcase_add_test(tc_core, test_from_float_to_decimal_782);
  tcase_add_test(tc_core, test_from_float_to_decimal_783);
  tcase_add_test(tc_core, test_from_float_to_decimal_784);
  tcase_add_test(tc_core, test_from_float_to_decimal_785);
  tcase_add_test(tc_core, test_from_float_to_decimal_786);
  tcase_add_test(tc_core, test_from_float_to_decimal_787);
  tcase_add_test(tc_core, test_from_float_to_decimal_788);
  tcase_add_test(tc_core, test_from_float_to_decimal_789);
  tcase_add_test(tc_core, test_from_float_to_decimal_790);
  tcase_add_test(tc_core, test_from_float_to_decimal_791);
  tcase_add_test(tc_core, test_from_float_to_decimal_792);
  tcase_add_test(tc_core, test_from_float_to_decimal_793);
  tcase_add_test(tc_core, test_from_float_to_decimal_794);
  tcase_add_test(tc_core, test_from_float_to_decimal_795);
  tcase_add_test(tc_core, test_from_float_to_decimal_796);
  tcase_add_test(tc_core, test_from_float_to_decimal_797);
  tcase_add_test(tc_core, test_from_float_to_decimal_798);
  tcase_add_test(tc_core, test_from_float_to_decimal_799);
  tcase_add_test(tc_core, test_from_float_to_decimal_800);
  tcase_add_test(tc_core, test_from_float_to_decimal_801);
  tcase_add_test(tc_core, test_from_float_to_decimal_802);
  tcase_add_test(tc_core, test_from_float_to_decimal_803);
  tcase_add_test(tc_core, test_from_float_to_decimal_804);
  tcase_add_test(tc_core, test_from_float_to_decimal_805);
  tcase_add_test(tc_core, test_from_float_to_decimal_806);
  tcase_add_test(tc_core, test_from_float_to_decimal_807);
  tcase_add_test(tc_core, test_from_float_to_decimal_808);
  tcase_add_test(tc_core, test_from_float_to_decimal_809);
  tcase_add_test(tc_core, test_from_float_to_decimal_810);
  tcase_add_test(tc_core, test_from_float_to_decimal_811);
  tcase_add_test(tc_core, test_from_float_to_decimal_812);
  tcase_add_test(tc_core, test_from_float_to_decimal_813);
  tcase_add_test(tc_core, test_from_float_to_decimal_814);
  tcase_add_test(tc_core, test_from_float_to_decimal_815);
  tcase_add_test(tc_core, test_from_float_to_decimal_816);
  tcase_add_test(tc_core, test_from_float_to_decimal_817);
  tcase_add_test(tc_core, test_from_float_to_decimal_818);
  tcase_add_test(tc_core, test_from_float_to_decimal_819);
  tcase_add_test(tc_core, test_from_float_to_decimal_820);
  tcase_add_test(tc_core, test_from_float_to_decimal_821);
  tcase_add_test(tc_core, test_from_float_to_decimal_822);
  tcase_add_test(tc_core, test_from_float_to_decimal_823);
  tcase_add_test(tc_core, test_from_float_to_decimal_824);
  tcase_add_test(tc_core, test_from_float_to_decimal_825);
  tcase_add_test(tc_core, test_from_float_to_decimal_826);
  tcase_add_test(tc_core, test_from_float_to_decimal_827);
  tcase_add_test(tc_core, test_from_float_to_decimal_828);
  tcase_add_test(tc_core, test_from_float_to_decimal_829);
  tcase_add_test(tc_core, test_from_float_to_decimal_830);
  tcase_add_test(tc_core, test_from_float_to_decimal_831);
  tcase_add_test(tc_core, test_from_float_to_decimal_832);
  tcase_add_test(tc_core, test_from_float_to_decimal_833);
  tcase_add_test(tc_core, test_from_float_to_decimal_834);
  tcase_add_test(tc_core, test_from_float_to_decimal_835);
  tcase_add_test(tc_core, test_from_float_to_decimal_836);
  tcase_add_test(tc_core, test_from_float_to_decimal_837);
  tcase_add_test(tc_core, test_from_float_to_decimal_838);
  tcase_add_test(tc_core, test_from_float_to_decimal_839);
  tcase_add_test(tc_core, test_from_float_to_decimal_840);
  tcase_add_test(tc_core, test_from_float_to_decimal_841);
  tcase_add_test(tc_core, test_from_float_to_decimal_842);
  tcase_add_test(tc_core, test_from_float_to_decimal_843);
  tcase_add_test(tc_core, test_from_float_to_decimal_844);
  tcase_add_test(tc_core, test_from_float_to_decimal_845);
  tcase_add_test(tc_core, test_from_float_to_decimal_846);
  tcase_add_test(tc_core, test_from_float_to_decimal_847);
  tcase_add_test(tc_core, test_from_float_to_decimal_848);
  tcase_add_test(tc_core, test_from_float_to_decimal_849);
  tcase_add_test(tc_core, test_from_float_to_decimal_850);
  tcase_add_test(tc_core, test_from_float_to_decimal_851);
  tcase_add_test(tc_core, test_from_float_to_decimal_852);
  tcase_add_test(tc_core, test_from_float_to_decimal_853);
  tcase_add_test(tc_core, test_from_float_to_decimal_854);
  tcase_add_test(tc_core, test_from_float_to_decimal_855);
  tcase_add_test(tc_core, test_from_float_to_decimal_856);
  tcase_add_test(tc_core, test_from_float_to_decimal_859);
  tcase_add_test(tc_core, test_from_float_to_decimal_860);
  tcase_add_test(tc_core, test_from_float_to_decimal_861);
  tcase_add_test(tc_core, test_from_float_to_decimal_862);
  tcase_add_test(tc_core, test_from_float_to_decimal_863);
  tcase_add_test(tc_core, test_from_float_to_decimal_864);
  tcase_add_test(tc_core, test_from_float_to_decimal_865);
  tcase_add_test(tc_core, test_from_float_to_decimal_866);
  tcase_add_test(tc_core, test_from_float_to_decimal_867);
  tcase_add_test(tc_core, test_from_float_to_decimal_868);
  tcase_add_test(tc_core, test_from_float_to_decimal_869);
  tcase_add_test(tc_core, test_from_float_to_decimal_870);
  tcase_add_test(tc_core, test_from_float_to_decimal_871);
  tcase_add_test(tc_core, test_from_float_to_decimal_872);
  tcase_add_test(tc_core, test_from_float_to_decimal_873);
  tcase_add_test(tc_core, test_from_float_to_decimal_874);
  tcase_add_test(tc_core, test_from_float_to_decimal_875);
  tcase_add_test(tc_core, test_from_float_to_decimal_876);
  tcase_add_test(tc_core, test_from_float_to_decimal_877);
  tcase_add_test(tc_core, test_from_float_to_decimal_878);
  tcase_add_test(tc_core, test_from_float_to_decimal_879);
  tcase_add_test(tc_core, test_from_float_to_decimal_880);
  tcase_add_test(tc_core, test_from_float_to_decimal_881);
  tcase_add_test(tc_core, test_from_float_to_decimal_882);
  tcase_add_test(tc_core, test_from_float_to_decimal_883);
  tcase_add_test(tc_core, test_from_float_to_decimal_884);
  tcase_add_test(tc_core, test_from_float_to_decimal_885);
  tcase_add_test(tc_core, test_from_float_to_decimal_886);
  tcase_add_test(tc_core, test_from_float_to_decimal_887);
  tcase_add_test(tc_core, test_from_float_to_decimal_888);
  tcase_add_test(tc_core, test_from_float_to_decimal_889);
  tcase_add_test(tc_core, test_from_float_to_decimal_890);
  tcase_add_test(tc_core, test_from_float_to_decimal_891);
  tcase_add_test(tc_core, test_from_float_to_decimal_892);
  tcase_add_test(tc_core, test_from_float_to_decimal_893);
  tcase_add_test(tc_core, test_from_float_to_decimal_894);
  tcase_add_test(tc_core, test_from_float_to_decimal_895);
  tcase_add_test(tc_core, test_from_float_to_decimal_896);
  tcase_add_test(tc_core, test_from_float_to_decimal_897);
  tcase_add_test(tc_core, test_from_float_to_decimal_898);
  tcase_add_test(tc_core, test_from_float_to_decimal_899);
  tcase_add_test(tc_core, test_from_float_to_decimal_900);
  tcase_add_test(tc_core, test_from_float_to_decimal_901);
  tcase_add_test(tc_core, test_from_float_to_decimal_902);
  tcase_add_test(tc_core, test_from_float_to_decimal_903);
  tcase_add_test(tc_core, test_from_float_to_decimal_904);
  tcase_add_test(tc_core, test_from_float_to_decimal_905);
  tcase_add_test(tc_core, test_from_float_to_decimal_906);
  tcase_add_test(tc_core, test_from_float_to_decimal_907);
  tcase_add_test(tc_core, test_from_float_to_decimal_908);
  tcase_add_test(tc_core, test_from_float_to_decimal_909);
  tcase_add_test(tc_core, test_from_float_to_decimal_910);
  tcase_add_test(tc_core, test_from_float_to_decimal_911);
  tcase_add_test(tc_core, test_from_float_to_decimal_912);
  tcase_add_test(tc_core, test_from_float_to_decimal_913);
  tcase_add_test(tc_core, test_from_float_to_decimal_914);
  tcase_add_test(tc_core, test_from_float_to_decimal_915);
  tcase_add_test(tc_core, test_from_float_to_decimal_916);
  tcase_add_test(tc_core, test_from_float_to_decimal_917);
  tcase_add_test(tc_core, test_from_float_to_decimal_918);
  tcase_add_test(tc_core, test_from_float_to_decimal_919);
  tcase_add_test(tc_core, test_from_float_to_decimal_920);
  tcase_add_test(tc_core, test_from_float_to_decimal_921);
  tcase_add_test(tc_core, test_from_float_to_decimal_922);
  tcase_add_test(tc_core, test_from_float_to_decimal_923);
  tcase_add_test(tc_core, test_from_float_to_decimal_924);
  tcase_add_test(tc_core, test_from_float_to_decimal_925);
  tcase_add_test(tc_core, test_from_float_to_decimal_926);
  tcase_add_test(tc_core, test_from_float_to_decimal_927);
  tcase_add_test(tc_core, test_from_float_to_decimal_928);
  tcase_add_test(tc_core, test_from_float_to_decimal_929);
  tcase_add_test(tc_core, test_from_float_to_decimal_930);
  tcase_add_test(tc_core, test_from_float_to_decimal_931);
  tcase_add_test(tc_core, test_from_float_to_decimal_932);
  tcase_add_test(tc_core, test_from_float_to_decimal_933);
  tcase_add_test(tc_core, test_from_float_to_decimal_934);
  tcase_add_test(tc_core, test_from_float_to_decimal_935);
  tcase_add_test(tc_core, test_from_float_to_decimal_936);
  tcase_add_test(tc_core, test_from_float_to_decimal_937);
  tcase_add_test(tc_core, test_from_float_to_decimal_938);
  tcase_add_test(tc_core, test_from_float_to_decimal_939);
  tcase_add_test(tc_core, test_from_float_to_decimal_940);
  tcase_add_test(tc_core, test_from_float_to_decimal_941);
  tcase_add_test(tc_core, test_from_float_to_decimal_942);
  tcase_add_test(tc_core, test_from_float_to_decimal_943);
  tcase_add_test(tc_core, test_from_float_to_decimal_944);
  tcase_add_test(tc_core, test_from_float_to_decimal_945);
  tcase_add_test(tc_core, test_from_float_to_decimal_946);
  tcase_add_test(tc_core, test_from_float_to_decimal_947);
  tcase_add_test(tc_core, test_from_float_to_decimal_948);
  tcase_add_test(tc_core, test_from_float_to_decimal_949);
  tcase_add_test(tc_core, test_from_float_to_decimal_950);
  tcase_add_test(tc_core, test_from_float_to_decimal_951);
  tcase_add_test(tc_core, test_from_float_to_decimal_952);
  tcase_add_test(tc_core, test_from_float_to_decimal_953);
  tcase_add_test(tc_core, test_from_float_to_decimal_954);
  tcase_add_test(tc_core, test_from_float_to_decimal_955);
  tcase_add_test(tc_core, test_from_float_to_decimal_956);
  tcase_add_test(tc_core, test_from_float_to_decimal_957);
  tcase_add_test(tc_core, test_from_float_to_decimal_958);
  tcase_add_test(tc_core, test_from_float_to_decimal_959);
  tcase_add_test(tc_core, test_from_float_to_decimal_960);
  tcase_add_test(tc_core, test_from_float_to_decimal_961);
  tcase_add_test(tc_core, test_from_float_to_decimal_962);
  tcase_add_test(tc_core, test_from_float_to_decimal_965);
  tcase_add_test(tc_core, test_from_float_to_decimal_966);
  tcase_add_test(tc_core, test_from_float_to_decimal_967);
  tcase_add_test(tc_core, test_from_float_to_decimal_968);
  tcase_add_test(tc_core, test_from_float_to_decimal_969);
  tcase_add_test(tc_core, test_from_float_to_decimal_970);
  tcase_add_test(tc_core, test_from_float_to_decimal_971);
  tcase_add_test(tc_core, test_from_float_to_decimal_972);
  tcase_add_test(tc_core, test_from_float_to_decimal_973);
  tcase_add_test(tc_core, test_from_float_to_decimal_974);
  tcase_add_test(tc_core, test_from_float_to_decimal_975);
  tcase_add_test(tc_core, test_from_float_to_decimal_976);
  tcase_add_test(tc_core, test_from_float_to_decimal_977);
  tcase_add_test(tc_core, test_from_float_to_decimal_978);
  tcase_add_test(tc_core, test_from_float_to_decimal_979);
  tcase_add_test(tc_core, test_from_float_to_decimal_980);
  tcase_add_test(tc_core, test_from_float_to_decimal_981);
  tcase_add_test(tc_core, test_from_float_to_decimal_982);
  tcase_add_test(tc_core, test_from_float_to_decimal_983);
  tcase_add_test(tc_core, test_from_float_to_decimal_984);
  tcase_add_test(tc_core, test_from_float_to_decimal_985);
  tcase_add_test(tc_core, test_from_float_to_decimal_986);
  tcase_add_test(tc_core, test_from_float_to_decimal_987);
  tcase_add_test(tc_core, test_from_float_to_decimal_988);
  tcase_add_test(tc_core, test_from_float_to_decimal_989);
  tcase_add_test(tc_core, test_from_float_to_decimal_990);
  tcase_add_test(tc_core, test_from_float_to_decimal_991);
  tcase_add_test(tc_core, test_from_float_to_decimal_992);
  tcase_add_test(tc_core, test_from_float_to_decimal_993);
  tcase_add_test(tc_core, test_from_float_to_decimal_994);
  tcase_add_test(tc_core, test_from_float_to_decimal_995);
  tcase_add_test(tc_core, test_from_float_to_decimal_996);
  tcase_add_test(tc_core, test_from_float_to_decimal_997);
  tcase_add_test(tc_core, test_from_float_to_decimal_998);
  tcase_add_test(tc_core, test_from_float_to_decimal_999);
  tcase_add_test(tc_core, test_from_float_to_decimal_1000);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *test_from_float_to_decimal_suite_3(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_float_to_decimal_3" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_float_to_decimal_1001);
  tcase_add_test(tc_core, test_from_float_to_decimal_1002);
  tcase_add_test(tc_core, test_from_float_to_decimal_1003);
  tcase_add_test(tc_core, test_from_float_to_decimal_1004);
  tcase_add_test(tc_core, test_from_float_to_decimal_1005);
  tcase_add_test(tc_core, test_from_float_to_decimal_1006);
  tcase_add_test(tc_core, test_from_float_to_decimal_1007);
  tcase_add_test(tc_core, test_from_float_to_decimal_1008);
  tcase_add_test(tc_core, test_from_float_to_decimal_1009);
  tcase_add_test(tc_core, test_from_float_to_decimal_1010);
  tcase_add_test(tc_core, test_from_float_to_decimal_1011);
  tcase_add_test(tc_core, test_from_float_to_decimal_1012);
  tcase_add_test(tc_core, test_from_float_to_decimal_1013);
  tcase_add_test(tc_core, test_from_float_to_decimal_1014);
  tcase_add_test(tc_core, test_from_float_to_decimal_1015);
  tcase_add_test(tc_core, test_from_float_to_decimal_1016);
  tcase_add_test(tc_core, test_from_float_to_decimal_1017);
  tcase_add_test(tc_core, test_from_float_to_decimal_1018);
  tcase_add_test(tc_core, test_from_float_to_decimal_1019);
  tcase_add_test(tc_core, test_from_float_to_decimal_1020);
  tcase_add_test(tc_core, test_from_float_to_decimal_1021);
  tcase_add_test(tc_core, test_from_float_to_decimal_1022);
  tcase_add_test(tc_core, test_from_float_to_decimal_1023);
  tcase_add_test(tc_core, test_from_float_to_decimal_1024);
  tcase_add_test(tc_core, test_from_float_to_decimal_1025);
  tcase_add_test(tc_core, test_from_float_to_decimal_1026);
  tcase_add_test(tc_core, test_from_float_to_decimal_1027);
  tcase_add_test(tc_core, test_from_float_to_decimal_1028);
  tcase_add_test(tc_core, test_from_float_to_decimal_1031);
  tcase_add_test(tc_core, test_from_float_to_decimal_1032);
  tcase_add_test(tc_core, test_from_float_to_decimal_1035);
  tcase_add_test(tc_core, test_from_float_to_decimal_1036);
  tcase_add_test(tc_core, test_from_float_to_decimal_1037);
  tcase_add_test(tc_core, test_from_float_to_decimal_1038);
  tcase_add_test(tc_core, test_from_float_to_decimal_1039);
  tcase_add_test(tc_core, test_from_float_to_decimal_1040);
  tcase_add_test(tc_core, test_from_float_to_decimal_1041);
  tcase_add_test(tc_core, test_from_float_to_decimal_1042);
  tcase_add_test(tc_core, test_from_float_to_decimal_1043);
  tcase_add_test(tc_core, test_from_float_to_decimal_1044);
  tcase_add_test(tc_core, test_from_float_to_decimal_1045);
  tcase_add_test(tc_core, test_from_float_to_decimal_1046);
  tcase_add_test(tc_core, test_from_float_to_decimal_1047);
  tcase_add_test(tc_core, test_from_float_to_decimal_1048);
  tcase_add_test(tc_core, test_from_float_to_decimal_1049);
  tcase_add_test(tc_core, test_from_float_to_decimal_1050);
  tcase_add_test(tc_core, test_from_float_to_decimal_1051);
  tcase_add_test(tc_core, test_from_float_to_decimal_1052);
  tcase_add_test(tc_core, test_from_float_to_decimal_1053);
  tcase_add_test(tc_core, test_from_float_to_decimal_1054);
  tcase_add_test(tc_core, test_from_float_to_decimal_1055);
  tcase_add_test(tc_core, test_from_float_to_decimal_1056);
  tcase_add_test(tc_core, test_from_float_to_decimal_1057);
  tcase_add_test(tc_core, test_from_float_to_decimal_1058);
  tcase_add_test(tc_core, test_from_float_to_decimal_1059);
  tcase_add_test(tc_core, test_from_float_to_decimal_1060);
  tcase_add_test(tc_core, test_from_float_to_decimal_1061);
  tcase_add_test(tc_core, test_from_float_to_decimal_1062);
  tcase_add_test(tc_core, test_from_float_to_decimal_1063);
  tcase_add_test(tc_core, test_from_float_to_decimal_1064);
  tcase_add_test(tc_core, test_from_float_to_decimal_1065);
  tcase_add_test(tc_core, test_from_float_to_decimal_1066);
  tcase_add_test(tc_core, test_from_float_to_decimal_1067);
  tcase_add_test(tc_core, test_from_float_to_decimal_1068);
  tcase_add_test(tc_core, test_from_float_to_decimal_1069);
  tcase_add_test(tc_core, test_from_float_to_decimal_1070);
  tcase_add_test(tc_core, test_from_float_to_decimal_1071);
  tcase_add_test(tc_core, test_from_float_to_decimal_1072);
  tcase_add_test(tc_core, test_from_float_to_decimal_1073);
  tcase_add_test(tc_core, test_from_float_to_decimal_1074);
  tcase_add_test(tc_core, test_from_float_to_decimal_1075);
  tcase_add_test(tc_core, test_from_float_to_decimal_1076);
  tcase_add_test(tc_core, test_from_float_to_decimal_1077);
  tcase_add_test(tc_core, test_from_float_to_decimal_1078);
  tcase_add_test(tc_core, test_from_float_to_decimal_1079);
  tcase_add_test(tc_core, test_from_float_to_decimal_1080);
  tcase_add_test(tc_core, test_from_float_to_decimal_1081);
  tcase_add_test(tc_core, test_from_float_to_decimal_1082);
  tcase_add_test(tc_core, test_from_float_to_decimal_1083);
  tcase_add_test(tc_core, test_from_float_to_decimal_1084);
  tcase_add_test(tc_core, test_from_float_to_decimal_1085);
  tcase_add_test(tc_core, test_from_float_to_decimal_1086);
  tcase_add_test(tc_core, test_from_float_to_decimal_1087);
  tcase_add_test(tc_core, test_from_float_to_decimal_1088);
  tcase_add_test(tc_core, test_from_float_to_decimal_1089);
  tcase_add_test(tc_core, test_from_float_to_decimal_1090);
  tcase_add_test(tc_core, test_from_float_to_decimal_1091);
  tcase_add_test(tc_core, test_from_float_to_decimal_1092);
  tcase_add_test(tc_core, test_from_float_to_decimal_1093);
  tcase_add_test(tc_core, test_from_float_to_decimal_1094);
  tcase_add_test(tc_core, test_from_float_to_decimal_1095);
  tcase_add_test(tc_core, test_from_float_to_decimal_1096);
  tcase_add_test(tc_core, test_from_float_to_decimal_1097);
  tcase_add_test(tc_core, test_from_float_to_decimal_1098);
  tcase_add_test(tc_core, test_from_float_to_decimal_1099);
  tcase_add_test(tc_core, test_from_float_to_decimal_1100);
  tcase_add_test(tc_core, test_from_float_to_decimal_1101);
  tcase_add_test(tc_core, test_from_float_to_decimal_1102);
  tcase_add_test(tc_core, test_from_float_to_decimal_1103);
  tcase_add_test(tc_core, test_from_float_to_decimal_1104);
  tcase_add_test(tc_core, test_from_float_to_decimal_1105);
  tcase_add_test(tc_core, test_from_float_to_decimal_1106);
  tcase_add_test(tc_core, test_from_float_to_decimal_1107);
  tcase_add_test(tc_core, test_from_float_to_decimal_1108);
  tcase_add_test(tc_core, test_from_float_to_decimal_1109);
  tcase_add_test(tc_core, test_from_float_to_decimal_1110);
  tcase_add_test(tc_core, test_from_float_to_decimal_1111);
  tcase_add_test(tc_core, test_from_float_to_decimal_1112);
  tcase_add_test(tc_core, test_from_float_to_decimal_1113);
  tcase_add_test(tc_core, test_from_float_to_decimal_1114);
  tcase_add_test(tc_core, test_from_float_to_decimal_1115);
  tcase_add_test(tc_core, test_from_float_to_decimal_1116);
  tcase_add_test(tc_core, test_from_float_to_decimal_1117);
  tcase_add_test(tc_core, test_from_float_to_decimal_1118);
  tcase_add_test(tc_core, test_from_float_to_decimal_1119);
  tcase_add_test(tc_core, test_from_float_to_decimal_1120);
  tcase_add_test(tc_core, test_from_float_to_decimal_1121);
  tcase_add_test(tc_core, test_from_float_to_decimal_1122);
  tcase_add_test(tc_core, test_from_float_to_decimal_1123);
  tcase_add_test(tc_core, test_from_float_to_decimal_1124);
  tcase_add_test(tc_core, test_from_float_to_decimal_1125);
  tcase_add_test(tc_core, test_from_float_to_decimal_1126);
  tcase_add_test(tc_core, test_from_float_to_decimal_1127);
  tcase_add_test(tc_core, test_from_float_to_decimal_1128);
  tcase_add_test(tc_core, test_from_float_to_decimal_1129);
  tcase_add_test(tc_core, test_from_float_to_decimal_1130);
  tcase_add_test(tc_core, test_from_float_to_decimal_1131);
  tcase_add_test(tc_core, test_from_float_to_decimal_1132);
  tcase_add_test(tc_core, test_from_float_to_decimal_1133);
  tcase_add_test(tc_core, test_from_float_to_decimal_1134);
  tcase_add_test(tc_core, test_from_float_to_decimal_1135);
  tcase_add_test(tc_core, test_from_float_to_decimal_1136);
  tcase_add_test(tc_core, test_from_float_to_decimal_1137);
  tcase_add_test(tc_core, test_from_float_to_decimal_1138);
  tcase_add_test(tc_core, test_from_float_to_decimal_1139);
  tcase_add_test(tc_core, test_from_float_to_decimal_1140);
  tcase_add_test(tc_core, test_from_float_to_decimal_1141);
  tcase_add_test(tc_core, test_from_float_to_decimal_1142);
  tcase_add_test(tc_core, test_from_float_to_decimal_1143);
  tcase_add_test(tc_core, test_from_float_to_decimal_1144);
  tcase_add_test(tc_core, test_from_float_to_decimal_1145);
  tcase_add_test(tc_core, test_from_float_to_decimal_1146);
  tcase_add_test(tc_core, test_from_float_to_decimal_1147);
  tcase_add_test(tc_core, test_from_float_to_decimal_1148);
  tcase_add_test(tc_core, test_from_float_to_decimal_1149);
  tcase_add_test(tc_core, test_from_float_to_decimal_1150);
  tcase_add_test(tc_core, test_from_float_to_decimal_1151);
  tcase_add_test(tc_core, test_from_float_to_decimal_1152);
  tcase_add_test(tc_core, test_from_float_to_decimal_1153);
  tcase_add_test(tc_core, test_from_float_to_decimal_1154);
  tcase_add_test(tc_core, test_from_float_to_decimal_1155);
  tcase_add_test(tc_core, test_from_float_to_decimal_1156);
  tcase_add_test(tc_core, test_from_float_to_decimal_1157);
  tcase_add_test(tc_core, test_from_float_to_decimal_1158);
  tcase_add_test(tc_core, test_from_float_to_decimal_1159);
  tcase_add_test(tc_core, test_from_float_to_decimal_1160);
  tcase_add_test(tc_core, test_from_float_to_decimal_1161);
  tcase_add_test(tc_core, test_from_float_to_decimal_1162);
  tcase_add_test(tc_core, test_from_float_to_decimal_1163);
  tcase_add_test(tc_core, test_from_float_to_decimal_1164);
  tcase_add_test(tc_core, test_from_float_to_decimal_1165);
  tcase_add_test(tc_core, test_from_float_to_decimal_1166);
  tcase_add_test(tc_core, test_from_float_to_decimal_1167);
  tcase_add_test(tc_core, test_from_float_to_decimal_1168);
  tcase_add_test(tc_core, test_from_float_to_decimal_1169);
  tcase_add_test(tc_core, test_from_float_to_decimal_1170);
  tcase_add_test(tc_core, test_from_float_to_decimal_1171);
  tcase_add_test(tc_core, test_from_float_to_decimal_1172);
  tcase_add_test(tc_core, test_from_float_to_decimal_1173);
  tcase_add_test(tc_core, test_from_float_to_decimal_1174);
  tcase_add_test(tc_core, test_from_float_to_decimal_1175);
  tcase_add_test(tc_core, test_from_float_to_decimal_1176);
  tcase_add_test(tc_core, test_from_float_to_decimal_1177);
  tcase_add_test(tc_core, test_from_float_to_decimal_1178);
  tcase_add_test(tc_core, test_from_float_to_decimal_1179);
  tcase_add_test(tc_core, test_from_float_to_decimal_1180);
  tcase_add_test(tc_core, test_from_float_to_decimal_1181);
  tcase_add_test(tc_core, test_from_float_to_decimal_1182);
  tcase_add_test(tc_core, test_from_float_to_decimal_1183);
  tcase_add_test(tc_core, test_from_float_to_decimal_1184);
  tcase_add_test(tc_core, test_from_float_to_decimal_1185);
  tcase_add_test(tc_core, test_from_float_to_decimal_1186);
  tcase_add_test(tc_core, test_from_float_to_decimal_1187);
  tcase_add_test(tc_core, test_from_float_to_decimal_1188);
  tcase_add_test(tc_core, test_from_float_to_decimal_1189);
  tcase_add_test(tc_core, test_from_float_to_decimal_1190);
  tcase_add_test(tc_core, test_from_float_to_decimal_1191);
  tcase_add_test(tc_core, test_from_float_to_decimal_1192);
  tcase_add_test(tc_core, test_from_float_to_decimal_1193);
  tcase_add_test(tc_core, test_from_float_to_decimal_1194);
  tcase_add_test(tc_core, test_from_float_to_decimal_1195);
  tcase_add_test(tc_core, test_from_float_to_decimal_1196);
  tcase_add_test(tc_core, test_from_float_to_decimal_1197);
  tcase_add_test(tc_core, test_from_float_to_decimal_1198);
  tcase_add_test(tc_core, test_from_float_to_decimal_1199);
  tcase_add_test(tc_core, test_from_float_to_decimal_1200);
  tcase_add_test(tc_core, test_from_float_to_decimal_1201);
  tcase_add_test(tc_core, test_from_float_to_decimal_1202);
  tcase_add_test(tc_core, test_from_float_to_decimal_1203);
  tcase_add_test(tc_core, test_from_float_to_decimal_1204);
  tcase_add_test(tc_core, test_from_float_to_decimal_1205);
  tcase_add_test(tc_core, test_from_float_to_decimal_1206);
  tcase_add_test(tc_core, test_from_float_to_decimal_1207);
  tcase_add_test(tc_core, test_from_float_to_decimal_1208);
  tcase_add_test(tc_core, test_from_float_to_decimal_1209);
  tcase_add_test(tc_core, test_from_float_to_decimal_1210);
  tcase_add_test(tc_core, test_from_float_to_decimal_1211);
  tcase_add_test(tc_core, test_from_float_to_decimal_1212);
  tcase_add_test(tc_core, test_from_float_to_decimal_1213);
  tcase_add_test(tc_core, test_from_float_to_decimal_1214);
  tcase_add_test(tc_core, test_from_float_to_decimal_1215);
  tcase_add_test(tc_core, test_from_float_to_decimal_1216);
  tcase_add_test(tc_core, test_from_float_to_decimal_1217);
  tcase_add_test(tc_core, test_from_float_to_decimal_1218);
  tcase_add_test(tc_core, test_from_float_to_decimal_1219);
  tcase_add_test(tc_core, test_from_float_to_decimal_1220);
  tcase_add_test(tc_core, test_from_float_to_decimal_1221);
  tcase_add_test(tc_core, test_from_float_to_decimal_1222);
  tcase_add_test(tc_core, test_from_float_to_decimal_1223);
  tcase_add_test(tc_core, test_from_float_to_decimal_1224);
  tcase_add_test(tc_core, test_from_float_to_decimal_1225);
  tcase_add_test(tc_core, test_from_float_to_decimal_1226);
  tcase_add_test(tc_core, test_from_float_to_decimal_1227);
  tcase_add_test(tc_core, test_from_float_to_decimal_1228);
  tcase_add_test(tc_core, test_from_float_to_decimal_1229);
  tcase_add_test(tc_core, test_from_float_to_decimal_1230);
  tcase_add_test(tc_core, test_from_float_to_decimal_1231);
  tcase_add_test(tc_core, test_from_float_to_decimal_1232);
  tcase_add_test(tc_core, test_from_float_to_decimal_1233);
  tcase_add_test(tc_core, test_from_float_to_decimal_1234);
  tcase_add_test(tc_core, test_from_float_to_decimal_1235);
  tcase_add_test(tc_core, test_from_float_to_decimal_1236);
  tcase_add_test(tc_core, test_from_float_to_decimal_1237);
  tcase_add_test(tc_core, test_from_float_to_decimal_1238);
  tcase_add_test(tc_core, test_from_float_to_decimal_1239);
  tcase_add_test(tc_core, test_from_float_to_decimal_1240);
  tcase_add_test(tc_core, test_from_float_to_decimal_1241);
  tcase_add_test(tc_core, test_from_float_to_decimal_1242);
  tcase_add_test(tc_core, test_from_float_to_decimal_1243);
  tcase_add_test(tc_core, test_from_float_to_decimal_1244);
  tcase_add_test(tc_core, test_from_float_to_decimal_1245);
  tcase_add_test(tc_core, test_from_float_to_decimal_1246);
  tcase_add_test(tc_core, test_from_float_to_decimal_1247);
  tcase_add_test(tc_core, test_from_float_to_decimal_1248);
  tcase_add_test(tc_core, test_from_float_to_decimal_1249);
  tcase_add_test(tc_core, test_from_float_to_decimal_1250);
  tcase_add_test(tc_core, test_from_float_to_decimal_1251);
  tcase_add_test(tc_core, test_from_float_to_decimal_1252);
  tcase_add_test(tc_core, test_from_float_to_decimal_1253);
  tcase_add_test(tc_core, test_from_float_to_decimal_1254);
  tcase_add_test(tc_core, test_from_float_to_decimal_1255);
  tcase_add_test(tc_core, test_from_float_to_decimal_1256);
  tcase_add_test(tc_core, test_from_float_to_decimal_1257);
  tcase_add_test(tc_core, test_from_float_to_decimal_1258);
  tcase_add_test(tc_core, test_from_float_to_decimal_1259);
  tcase_add_test(tc_core, test_from_float_to_decimal_1260);
  tcase_add_test(tc_core, test_from_float_to_decimal_1261);
  tcase_add_test(tc_core, test_from_float_to_decimal_1262);
  tcase_add_test(tc_core, test_from_float_to_decimal_1263);
  tcase_add_test(tc_core, test_from_float_to_decimal_1264);
  tcase_add_test(tc_core, test_from_float_to_decimal_1265);
  tcase_add_test(tc_core, test_from_float_to_decimal_1266);
  tcase_add_test(tc_core, test_from_float_to_decimal_1267);
  tcase_add_test(tc_core, test_from_float_to_decimal_1268);
  tcase_add_test(tc_core, test_from_float_to_decimal_1269);
  tcase_add_test(tc_core, test_from_float_to_decimal_1270);
  tcase_add_test(tc_core, test_from_float_to_decimal_1271);
  tcase_add_test(tc_core, test_from_float_to_decimal_1272);
  tcase_add_test(tc_core, test_from_float_to_decimal_1273);
  tcase_add_test(tc_core, test_from_float_to_decimal_1274);
  tcase_add_test(tc_core, test_from_float_to_decimal_1275);
  tcase_add_test(tc_core, test_from_float_to_decimal_1276);
  tcase_add_test(tc_core, test_from_float_to_decimal_1277);
  tcase_add_test(tc_core, test_from_float_to_decimal_1278);
  tcase_add_test(tc_core, test_from_float_to_decimal_1279);
  tcase_add_test(tc_core, test_from_float_to_decimal_1280);
  tcase_add_test(tc_core, test_from_float_to_decimal_1281);
  tcase_add_test(tc_core, test_from_float_to_decimal_1282);
  tcase_add_test(tc_core, test_from_float_to_decimal_1283);
  tcase_add_test(tc_core, test_from_float_to_decimal_1284);
  tcase_add_test(tc_core, test_from_float_to_decimal_1285);
  tcase_add_test(tc_core, test_from_float_to_decimal_1286);
  tcase_add_test(tc_core, test_from_float_to_decimal_1287);
  tcase_add_test(tc_core, test_from_float_to_decimal_1288);
  tcase_add_test(tc_core, test_from_float_to_decimal_1289);
  tcase_add_test(tc_core, test_from_float_to_decimal_1290);
  tcase_add_test(tc_core, test_from_float_to_decimal_1291);
  tcase_add_test(tc_core, test_from_float_to_decimal_1292);
  tcase_add_test(tc_core, test_from_float_to_decimal_1295);
  tcase_add_test(tc_core, test_from_float_to_decimal_1296);
  tcase_add_test(tc_core, test_from_float_to_decimal_1297);
  tcase_add_test(tc_core, test_from_float_to_decimal_1298);
  tcase_add_test(tc_core, test_from_float_to_decimal_1299);
  tcase_add_test(tc_core, test_from_float_to_decimal_1300);
  tcase_add_test(tc_core, test_from_float_to_decimal_1301);
  tcase_add_test(tc_core, test_from_float_to_decimal_1302);
  tcase_add_test(tc_core, test_from_float_to_decimal_1303);
  tcase_add_test(tc_core, test_from_float_to_decimal_1304);
  tcase_add_test(tc_core, test_from_float_to_decimal_1305);
  tcase_add_test(tc_core, test_from_float_to_decimal_1306);
  tcase_add_test(tc_core, test_from_float_to_decimal_1307);
  tcase_add_test(tc_core, test_from_float_to_decimal_1308);
  tcase_add_test(tc_core, test_from_float_to_decimal_1309);
  tcase_add_test(tc_core, test_from_float_to_decimal_1310);
  tcase_add_test(tc_core, test_from_float_to_decimal_1311);
  tcase_add_test(tc_core, test_from_float_to_decimal_1312);
  tcase_add_test(tc_core, test_from_float_to_decimal_1313);
  tcase_add_test(tc_core, test_from_float_to_decimal_1314);
  tcase_add_test(tc_core, test_from_float_to_decimal_1315);
  tcase_add_test(tc_core, test_from_float_to_decimal_1316);
  tcase_add_test(tc_core, test_from_float_to_decimal_1317);
  tcase_add_test(tc_core, test_from_float_to_decimal_1318);
  tcase_add_test(tc_core, test_from_float_to_decimal_1319);
  tcase_add_test(tc_core, test_from_float_to_decimal_1320);
  tcase_add_test(tc_core, test_from_float_to_decimal_1321);
  tcase_add_test(tc_core, test_from_float_to_decimal_1322);
  tcase_add_test(tc_core, test_from_float_to_decimal_1323);
  tcase_add_test(tc_core, test_from_float_to_decimal_1324);
  tcase_add_test(tc_core, test_from_float_to_decimal_1325);
  tcase_add_test(tc_core, test_from_float_to_decimal_1326);
  tcase_add_test(tc_core, test_from_float_to_decimal_1327);
  tcase_add_test(tc_core, test_from_float_to_decimal_1328);
  tcase_add_test(tc_core, test_from_float_to_decimal_1329);
  tcase_add_test(tc_core, test_from_float_to_decimal_1330);
  tcase_add_test(tc_core, test_from_float_to_decimal_1331);
  tcase_add_test(tc_core, test_from_float_to_decimal_1332);
  tcase_add_test(tc_core, test_from_float_to_decimal_1333);
  tcase_add_test(tc_core, test_from_float_to_decimal_1334);
  tcase_add_test(tc_core, test_from_float_to_decimal_1335);
  tcase_add_test(tc_core, test_from_float_to_decimal_1336);
  tcase_add_test(tc_core, test_from_float_to_decimal_1337);
  tcase_add_test(tc_core, test_from_float_to_decimal_1338);
  tcase_add_test(tc_core, test_from_float_to_decimal_1339);
  tcase_add_test(tc_core, test_from_float_to_decimal_1340);
  tcase_add_test(tc_core, test_from_float_to_decimal_1341);
  tcase_add_test(tc_core, test_from_float_to_decimal_1342);
  tcase_add_test(tc_core, test_from_float_to_decimal_1343);
  tcase_add_test(tc_core, test_from_float_to_decimal_1344);
  tcase_add_test(tc_core, test_from_float_to_decimal_1345);
  tcase_add_test(tc_core, test_from_float_to_decimal_1346);
  tcase_add_test(tc_core, test_from_float_to_decimal_1347);
  tcase_add_test(tc_core, test_from_float_to_decimal_1348);
  tcase_add_test(tc_core, test_from_float_to_decimal_1349);
  tcase_add_test(tc_core, test_from_float_to_decimal_1350);
  tcase_add_test(tc_core, test_from_float_to_decimal_1351);
  tcase_add_test(tc_core, test_from_float_to_decimal_1352);
  tcase_add_test(tc_core, test_from_float_to_decimal_1353);
  tcase_add_test(tc_core, test_from_float_to_decimal_1354);
  tcase_add_test(tc_core, test_from_float_to_decimal_1355);
  tcase_add_test(tc_core, test_from_float_to_decimal_1356);
  tcase_add_test(tc_core, test_from_float_to_decimal_1357);
  tcase_add_test(tc_core, test_from_float_to_decimal_1358);
  tcase_add_test(tc_core, test_from_float_to_decimal_1359);
  tcase_add_test(tc_core, test_from_float_to_decimal_1360);
  tcase_add_test(tc_core, test_from_float_to_decimal_1361);
  tcase_add_test(tc_core, test_from_float_to_decimal_1362);
  tcase_add_test(tc_core, test_from_float_to_decimal_1363);
  tcase_add_test(tc_core, test_from_float_to_decimal_1364);
  tcase_add_test(tc_core, test_from_float_to_decimal_1365);
  tcase_add_test(tc_core, test_from_float_to_decimal_1366);
  tcase_add_test(tc_core, test_from_float_to_decimal_1367);
  tcase_add_test(tc_core, test_from_float_to_decimal_1368);
  tcase_add_test(tc_core, test_from_float_to_decimal_1369);
  tcase_add_test(tc_core, test_from_float_to_decimal_1370);
  tcase_add_test(tc_core, test_from_float_to_decimal_1371);
  tcase_add_test(tc_core, test_from_float_to_decimal_1372);
  tcase_add_test(tc_core, test_from_float_to_decimal_1373);
  tcase_add_test(tc_core, test_from_float_to_decimal_1374);
  tcase_add_test(tc_core, test_from_float_to_decimal_1375);
  tcase_add_test(tc_core, test_from_float_to_decimal_1376);
  tcase_add_test(tc_core, test_from_float_to_decimal_1377);
  tcase_add_test(tc_core, test_from_float_to_decimal_1378);
  tcase_add_test(tc_core, test_from_float_to_decimal_1379);
  tcase_add_test(tc_core, test_from_float_to_decimal_1380);
  tcase_add_test(tc_core, test_from_float_to_decimal_1381);
  tcase_add_test(tc_core, test_from_float_to_decimal_1382);
  tcase_add_test(tc_core, test_from_float_to_decimal_1383);
  tcase_add_test(tc_core, test_from_float_to_decimal_1384);
  tcase_add_test(tc_core, test_from_float_to_decimal_1385);
  tcase_add_test(tc_core, test_from_float_to_decimal_1386);
  tcase_add_test(tc_core, test_from_float_to_decimal_1387);
  tcase_add_test(tc_core, test_from_float_to_decimal_1388);
  tcase_add_test(tc_core, test_from_float_to_decimal_1389);
  tcase_add_test(tc_core, test_from_float_to_decimal_1390);
  tcase_add_test(tc_core, test_from_float_to_decimal_1391);
  tcase_add_test(tc_core, test_from_float_to_decimal_1392);
  tcase_add_test(tc_core, test_from_float_to_decimal_1393);
  tcase_add_test(tc_core, test_from_float_to_decimal_1394);
  tcase_add_test(tc_core, test_from_float_to_decimal_1395);
  tcase_add_test(tc_core, test_from_float_to_decimal_1396);
  tcase_add_test(tc_core, test_from_float_to_decimal_1397);
  tcase_add_test(tc_core, test_from_float_to_decimal_1398);
  tcase_add_test(tc_core, test_from_float_to_decimal_1399);
  tcase_add_test(tc_core, test_from_float_to_decimal_1400);
  tcase_add_test(tc_core, test_from_float_to_decimal_1401);
  tcase_add_test(tc_core, test_from_float_to_decimal_1402);
  tcase_add_test(tc_core, test_from_float_to_decimal_1403);
  tcase_add_test(tc_core, test_from_float_to_decimal_1404);
  tcase_add_test(tc_core, test_from_float_to_decimal_1405);
  tcase_add_test(tc_core, test_from_float_to_decimal_1406);
  tcase_add_test(tc_core, test_from_float_to_decimal_1407);
  tcase_add_test(tc_core, test_from_float_to_decimal_1408);
  tcase_add_test(tc_core, test_from_float_to_decimal_1409);
  tcase_add_test(tc_core, test_from_float_to_decimal_1410);
  tcase_add_test(tc_core, test_from_float_to_decimal_1411);
  tcase_add_test(tc_core, test_from_float_to_decimal_1412);
  tcase_add_test(tc_core, test_from_float_to_decimal_1413);
  tcase_add_test(tc_core, test_from_float_to_decimal_1414);
  tcase_add_test(tc_core, test_from_float_to_decimal_1415);
  tcase_add_test(tc_core, test_from_float_to_decimal_1416);
  tcase_add_test(tc_core, test_from_float_to_decimal_1417);
  tcase_add_test(tc_core, test_from_float_to_decimal_1418);
  tcase_add_test(tc_core, test_from_float_to_decimal_1421);
  tcase_add_test(tc_core, test_from_float_to_decimal_1422);
  tcase_add_test(tc_core, test_from_float_to_decimal_1423);
  tcase_add_test(tc_core, test_from_float_to_decimal_1424);
  tcase_add_test(tc_core, test_from_float_to_decimal_1425);
  tcase_add_test(tc_core, test_from_float_to_decimal_1426);
  tcase_add_test(tc_core, test_from_float_to_decimal_1427);
  tcase_add_test(tc_core, test_from_float_to_decimal_1428);
  tcase_add_test(tc_core, test_from_float_to_decimal_1429);
  tcase_add_test(tc_core, test_from_float_to_decimal_1430);
  tcase_add_test(tc_core, test_from_float_to_decimal_1431);
  tcase_add_test(tc_core, test_from_float_to_decimal_1432);
  tcase_add_test(tc_core, test_from_float_to_decimal_1433);
  tcase_add_test(tc_core, test_from_float_to_decimal_1434);
  tcase_add_test(tc_core, test_from_float_to_decimal_1435);
  tcase_add_test(tc_core, test_from_float_to_decimal_1436);
  tcase_add_test(tc_core, test_from_float_to_decimal_1437);
  tcase_add_test(tc_core, test_from_float_to_decimal_1438);
  tcase_add_test(tc_core, test_from_float_to_decimal_1439);
  tcase_add_test(tc_core, test_from_float_to_decimal_1440);
  tcase_add_test(tc_core, test_from_float_to_decimal_1445);
  tcase_add_test(tc_core, test_from_float_to_decimal_1446);
  tcase_add_test(tc_core, test_from_float_to_decimal_1447);
  tcase_add_test(tc_core, test_from_float_to_decimal_1448);
  tcase_add_test(tc_core, test_from_float_to_decimal_1449);
  tcase_add_test(tc_core, test_from_float_to_decimal_1450);
  tcase_add_test(tc_core, test_from_float_to_decimal_1451);
  tcase_add_test(tc_core, test_from_float_to_decimal_1452);
  tcase_add_test(tc_core, test_from_float_to_decimal_1453);
  tcase_add_test(tc_core, test_from_float_to_decimal_1454);
  tcase_add_test(tc_core, test_from_float_to_decimal_1455);
  tcase_add_test(tc_core, test_from_float_to_decimal_1456);
  tcase_add_test(tc_core, test_from_float_to_decimal_1457);
  tcase_add_test(tc_core, test_from_float_to_decimal_1458);
  tcase_add_test(tc_core, test_from_float_to_decimal_1459);
  tcase_add_test(tc_core, test_from_float_to_decimal_1460);
  tcase_add_test(tc_core, test_from_float_to_decimal_1461);
  tcase_add_test(tc_core, test_from_float_to_decimal_1462);
  tcase_add_test(tc_core, test_from_float_to_decimal_1465);
  tcase_add_test(tc_core, test_from_float_to_decimal_1466);
  tcase_add_test(tc_core, test_from_float_to_decimal_1467);
  tcase_add_test(tc_core, test_from_float_to_decimal_1468);
  tcase_add_test(tc_core, test_from_float_to_decimal_1469);
  tcase_add_test(tc_core, test_from_float_to_decimal_1470);
  tcase_add_test(tc_core, test_from_float_to_decimal_1471);
  tcase_add_test(tc_core, test_from_float_to_decimal_1472);
  tcase_add_test(tc_core, test_from_float_to_decimal_1473);
  tcase_add_test(tc_core, test_from_float_to_decimal_1474);
  tcase_add_test(tc_core, test_from_float_to_decimal_1475);
  tcase_add_test(tc_core, test_from_float_to_decimal_1476);
  tcase_add_test(tc_core, test_from_float_to_decimal_1477);
  tcase_add_test(tc_core, test_from_float_to_decimal_1478);
  tcase_add_test(tc_core, test_from_float_to_decimal_1479);
  tcase_add_test(tc_core, test_from_float_to_decimal_1480);
  tcase_add_test(tc_core, test_from_float_to_decimal_1481);
  tcase_add_test(tc_core, test_from_float_to_decimal_1482);
  tcase_add_test(tc_core, test_from_float_to_decimal_1483);
  tcase_add_test(tc_core, test_from_float_to_decimal_1484);
  tcase_add_test(tc_core, test_from_float_to_decimal_1485);
  tcase_add_test(tc_core, test_from_float_to_decimal_1486);
  tcase_add_test(tc_core, test_from_float_to_decimal_1487);
  tcase_add_test(tc_core, test_from_float_to_decimal_1488);
  tcase_add_test(tc_core, test_from_float_to_decimal_1491);
  tcase_add_test(tc_core, test_from_float_to_decimal_1492);
  tcase_add_test(tc_core, test_from_float_to_decimal_1493);
  tcase_add_test(tc_core, test_from_float_to_decimal_1494);
  tcase_add_test(tc_core, test_from_float_to_decimal_1495);
  tcase_add_test(tc_core, test_from_float_to_decimal_1496);
  tcase_add_test(tc_core, test_from_float_to_decimal_1497);
  tcase_add_test(tc_core, test_from_float_to_decimal_1498);
  tcase_add_test(tc_core, test_from_float_to_decimal_1499);
  tcase_add_test(tc_core, test_from_float_to_decimal_1500);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *test_from_float_to_decimal_suite_4(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_float_to_decimal_4" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_float_to_decimal_1501);
  tcase_add_test(tc_core, test_from_float_to_decimal_1502);
  tcase_add_test(tc_core, test_from_float_to_decimal_1503);
  tcase_add_test(tc_core, test_from_float_to_decimal_1504);
  tcase_add_test(tc_core, test_from_float_to_decimal_1505);
  tcase_add_test(tc_core, test_from_float_to_decimal_1506);
  tcase_add_test(tc_core, test_from_float_to_decimal_1507);
  tcase_add_test(tc_core, test_from_float_to_decimal_1508);
  tcase_add_test(tc_core, test_from_float_to_decimal_1509);
  tcase_add_test(tc_core, test_from_float_to_decimal_1510);
  tcase_add_test(tc_core, test_from_float_to_decimal_1511);
  tcase_add_test(tc_core, test_from_float_to_decimal_1512);
  tcase_add_test(tc_core, test_from_float_to_decimal_1513);
  tcase_add_test(tc_core, test_from_float_to_decimal_1514);
  tcase_add_test(tc_core, test_from_float_to_decimal_1515);
  tcase_add_test(tc_core, test_from_float_to_decimal_1516);
  tcase_add_test(tc_core, test_from_float_to_decimal_1517);
  tcase_add_test(tc_core, test_from_float_to_decimal_1518);
  tcase_add_test(tc_core, test_from_float_to_decimal_1519);
  tcase_add_test(tc_core, test_from_float_to_decimal_1520);
  tcase_add_test(tc_core, test_from_float_to_decimal_1521);
  tcase_add_test(tc_core, test_from_float_to_decimal_1522);
  tcase_add_test(tc_core, test_from_float_to_decimal_1523);
  tcase_add_test(tc_core, test_from_float_to_decimal_1524);
  tcase_add_test(tc_core, test_from_float_to_decimal_1525);
  tcase_add_test(tc_core, test_from_float_to_decimal_1526);
  tcase_add_test(tc_core, test_from_float_to_decimal_1527);
  tcase_add_test(tc_core, test_from_float_to_decimal_1528);
  tcase_add_test(tc_core, test_from_float_to_decimal_1529);
  tcase_add_test(tc_core, test_from_float_to_decimal_1530);
  tcase_add_test(tc_core, test_from_float_to_decimal_1531);
  tcase_add_test(tc_core, test_from_float_to_decimal_1532);
  tcase_add_test(tc_core, test_from_float_to_decimal_1533);
  tcase_add_test(tc_core, test_from_float_to_decimal_1534);
  tcase_add_test(tc_core, test_from_float_to_decimal_1535);
  tcase_add_test(tc_core, test_from_float_to_decimal_1536);
  tcase_add_test(tc_core, test_from_float_to_decimal_1537);
  tcase_add_test(tc_core, test_from_float_to_decimal_1538);
  tcase_add_test(tc_core, test_from_float_to_decimal_1541);
  tcase_add_test(tc_core, test_from_float_to_decimal_1542);
  tcase_add_test(tc_core, test_from_float_to_decimal_1543);
  tcase_add_test(tc_core, test_from_float_to_decimal_1544);
  tcase_add_test(tc_core, test_from_float_to_decimal_1545);
  tcase_add_test(tc_core, test_from_float_to_decimal_1546);
  tcase_add_test(tc_core, test_from_float_to_decimal_1547);
  tcase_add_test(tc_core, test_from_float_to_decimal_1548);
  tcase_add_test(tc_core, test_from_float_to_decimal_1549);
  tcase_add_test(tc_core, test_from_float_to_decimal_1550);
  tcase_add_test(tc_core, test_from_float_to_decimal_1551);
  tcase_add_test(tc_core, test_from_float_to_decimal_1552);
  tcase_add_test(tc_core, test_from_float_to_decimal_1553);
  tcase_add_test(tc_core, test_from_float_to_decimal_1554);
  tcase_add_test(tc_core, test_from_float_to_decimal_1555);
  tcase_add_test(tc_core, test_from_float_to_decimal_1556);
  tcase_add_test(tc_core, test_from_float_to_decimal_1557);
  tcase_add_test(tc_core, test_from_float_to_decimal_1558);
  tcase_add_test(tc_core, test_from_float_to_decimal_1559);
  tcase_add_test(tc_core, test_from_float_to_decimal_1560);
  tcase_add_test(tc_core, test_from_float_to_decimal_1561);
  tcase_add_test(tc_core, test_from_float_to_decimal_1562);
  tcase_add_test(tc_core, test_from_float_to_decimal_1563);
  tcase_add_test(tc_core, test_from_float_to_decimal_1564);
  tcase_add_test(tc_core, test_from_float_to_decimal_1565);
  tcase_add_test(tc_core, test_from_float_to_decimal_1566);
  tcase_add_test(tc_core, test_from_float_to_decimal_1567);
  tcase_add_test(tc_core, test_from_float_to_decimal_1568);
  tcase_add_test(tc_core, test_from_float_to_decimal_1569);
  tcase_add_test(tc_core, test_from_float_to_decimal_1570);
  tcase_add_test(tc_core, test_from_float_to_decimal_1571);
  tcase_add_test(tc_core, test_from_float_to_decimal_1572);
  tcase_add_test(tc_core, test_from_float_to_decimal_1573);
  tcase_add_test(tc_core, test_from_float_to_decimal_1574);
  tcase_add_test(tc_core, test_from_float_to_decimal_1575);
  tcase_add_test(tc_core, test_from_float_to_decimal_1576);
  tcase_add_test(tc_core, test_from_float_to_decimal_1577);
  tcase_add_test(tc_core, test_from_float_to_decimal_1578);
  tcase_add_test(tc_core, test_from_float_to_decimal_1579);
  tcase_add_test(tc_core, test_from_float_to_decimal_1580);
  tcase_add_test(tc_core, test_from_float_to_decimal_1581);
  tcase_add_test(tc_core, test_from_float_to_decimal_1582);
  tcase_add_test(tc_core, test_from_float_to_decimal_1583);
  tcase_add_test(tc_core, test_from_float_to_decimal_1584);
  tcase_add_test(tc_core, test_from_float_to_decimal_1585);
  tcase_add_test(tc_core, test_from_float_to_decimal_1586);
  tcase_add_test(tc_core, test_from_float_to_decimal_1587);
  tcase_add_test(tc_core, test_from_float_to_decimal_1588);
  tcase_add_test(tc_core, test_from_float_to_decimal_1589);
  tcase_add_test(tc_core, test_from_float_to_decimal_1590);
  tcase_add_test(tc_core, test_from_float_to_decimal_1591);
  tcase_add_test(tc_core, test_from_float_to_decimal_1592);
  tcase_add_test(tc_core, test_from_float_to_decimal_1593);
  tcase_add_test(tc_core, test_from_float_to_decimal_1594);
  tcase_add_test(tc_core, test_from_float_to_decimal_1595);
  tcase_add_test(tc_core, test_from_float_to_decimal_1596);
  tcase_add_test(tc_core, test_from_float_to_decimal_1597);
  tcase_add_test(tc_core, test_from_float_to_decimal_1598);
  tcase_add_test(tc_core, test_from_float_to_decimal_1599);
  tcase_add_test(tc_core, test_from_float_to_decimal_1600);
  tcase_add_test(tc_core, test_from_float_to_decimal_1601);
  tcase_add_test(tc_core, test_from_float_to_decimal_1602);
  tcase_add_test(tc_core, test_from_float_to_decimal_1603);
  tcase_add_test(tc_core, test_from_float_to_decimal_1604);
  tcase_add_test(tc_core, test_from_float_to_decimal_1605);
  tcase_add_test(tc_core, test_from_float_to_decimal_1606);
  tcase_add_test(tc_core, test_from_float_to_decimal_1607);
  tcase_add_test(tc_core, test_from_float_to_decimal_1608);
  tcase_add_test(tc_core, test_from_float_to_decimal_1609);
  tcase_add_test(tc_core, test_from_float_to_decimal_1610);
  tcase_add_test(tc_core, test_from_float_to_decimal_1611);
  tcase_add_test(tc_core, test_from_float_to_decimal_1612);
  tcase_add_test(tc_core, test_from_float_to_decimal_1613);
  tcase_add_test(tc_core, test_from_float_to_decimal_1614);
  tcase_add_test(tc_core, test_from_float_to_decimal_1615);
  tcase_add_test(tc_core, test_from_float_to_decimal_1616);
  tcase_add_test(tc_core, test_from_float_to_decimal_1617);
  tcase_add_test(tc_core, test_from_float_to_decimal_1618);
  tcase_add_test(tc_core, test_from_float_to_decimal_1619);
  tcase_add_test(tc_core, test_from_float_to_decimal_1620);
  tcase_add_test(tc_core, test_from_float_to_decimal_1621);
  tcase_add_test(tc_core, test_from_float_to_decimal_1622);
  tcase_add_test(tc_core, test_from_float_to_decimal_1623);
  tcase_add_test(tc_core, test_from_float_to_decimal_1624);
  tcase_add_test(tc_core, test_from_float_to_decimal_1625);
  tcase_add_test(tc_core, test_from_float_to_decimal_1626);
  tcase_add_test(tc_core, test_from_float_to_decimal_1627);
  tcase_add_test(tc_core, test_from_float_to_decimal_1628);
  tcase_add_test(tc_core, test_from_float_to_decimal_1629);
  tcase_add_test(tc_core, test_from_float_to_decimal_1630);
  tcase_add_test(tc_core, test_from_float_to_decimal_1631);
  tcase_add_test(tc_core, test_from_float_to_decimal_1632);
  tcase_add_test(tc_core, test_from_float_to_decimal_1633);
  tcase_add_test(tc_core, test_from_float_to_decimal_1634);
  tcase_add_test(tc_core, test_from_float_to_decimal_1635);
  tcase_add_test(tc_core, test_from_float_to_decimal_1636);
  tcase_add_test(tc_core, test_from_float_to_decimal_1637);
  tcase_add_test(tc_core, test_from_float_to_decimal_1638);
  tcase_add_test(tc_core, test_from_float_to_decimal_1639);
  tcase_add_test(tc_core, test_from_float_to_decimal_1640);
  tcase_add_test(tc_core, test_from_float_to_decimal_1641);
  tcase_add_test(tc_core, test_from_float_to_decimal_1642);
  tcase_add_test(tc_core, test_from_float_to_decimal_1643);
  tcase_add_test(tc_core, test_from_float_to_decimal_1644);
  tcase_add_test(tc_core, test_from_float_to_decimal_1645);
  tcase_add_test(tc_core, test_from_float_to_decimal_1646);
  tcase_add_test(tc_core, test_from_float_to_decimal_1647);
  tcase_add_test(tc_core, test_from_float_to_decimal_1648);
  tcase_add_test(tc_core, test_from_float_to_decimal_1649);
  tcase_add_test(tc_core, test_from_float_to_decimal_1650);
  tcase_add_test(tc_core, test_from_float_to_decimal_1651);
  tcase_add_test(tc_core, test_from_float_to_decimal_1652);
  tcase_add_test(tc_core, test_from_float_to_decimal_1653);
  tcase_add_test(tc_core, test_from_float_to_decimal_1654);
  tcase_add_test(tc_core, test_from_float_to_decimal_1655);
  tcase_add_test(tc_core, test_from_float_to_decimal_1656);
  tcase_add_test(tc_core, test_from_float_to_decimal_1657);
  tcase_add_test(tc_core, test_from_float_to_decimal_1658);
  tcase_add_test(tc_core, test_from_float_to_decimal_1659);
  tcase_add_test(tc_core, test_from_float_to_decimal_1660);
  tcase_add_test(tc_core, test_from_float_to_decimal_1661);
  tcase_add_test(tc_core, test_from_float_to_decimal_1662);
  tcase_add_test(tc_core, test_from_float_to_decimal_1663);
  tcase_add_test(tc_core, test_from_float_to_decimal_1664);
  tcase_add_test(tc_core, test_from_float_to_decimal_1665);
  tcase_add_test(tc_core, test_from_float_to_decimal_1666);
  tcase_add_test(tc_core, test_from_float_to_decimal_1667);
  tcase_add_test(tc_core, test_from_float_to_decimal_1668);
  tcase_add_test(tc_core, test_from_float_to_decimal_1669);
  tcase_add_test(tc_core, test_from_float_to_decimal_1670);
  tcase_add_test(tc_core, test_from_float_to_decimal_1671);
  tcase_add_test(tc_core, test_from_float_to_decimal_1672);
  tcase_add_test(tc_core, test_from_float_to_decimal_1673);
  tcase_add_test(tc_core, test_from_float_to_decimal_1674);
  tcase_add_test(tc_core, test_from_float_to_decimal_1675);
  tcase_add_test(tc_core, test_from_float_to_decimal_1676);
  tcase_add_test(tc_core, test_from_float_to_decimal_1677);
  tcase_add_test(tc_core, test_from_float_to_decimal_1678);
  tcase_add_test(tc_core, test_from_float_to_decimal_1679);
  tcase_add_test(tc_core, test_from_float_to_decimal_1680);
  tcase_add_test(tc_core, test_from_float_to_decimal_1681);
  tcase_add_test(tc_core, test_from_float_to_decimal_1682);
  tcase_add_test(tc_core, test_from_float_to_decimal_1683);
  tcase_add_test(tc_core, test_from_float_to_decimal_1684);
  tcase_add_test(tc_core, test_from_float_to_decimal_1685);
  tcase_add_test(tc_core, test_from_float_to_decimal_1686);
  tcase_add_test(tc_core, test_from_float_to_decimal_1687);
  tcase_add_test(tc_core, test_from_float_to_decimal_1688);
  tcase_add_test(tc_core, test_from_float_to_decimal_1689);
  tcase_add_test(tc_core, test_from_float_to_decimal_1690);
  tcase_add_test(tc_core, test_from_float_to_decimal_1691);
  tcase_add_test(tc_core, test_from_float_to_decimal_1692);
  tcase_add_test(tc_core, test_from_float_to_decimal_1693);
  tcase_add_test(tc_core, test_from_float_to_decimal_1694);
  tcase_add_test(tc_core, test_from_float_to_decimal_1695);
  tcase_add_test(tc_core, test_from_float_to_decimal_1696);
  tcase_add_test(tc_core, test_from_float_to_decimal_1697);
  tcase_add_test(tc_core, test_from_float_to_decimal_1698);
  tcase_add_test(tc_core, test_from_float_to_decimal_1699);
  tcase_add_test(tc_core, test_from_float_to_decimal_1700);
  tcase_add_test(tc_core, test_from_float_to_decimal_1701);
  tcase_add_test(tc_core, test_from_float_to_decimal_1702);
  tcase_add_test(tc_core, test_from_float_to_decimal_1703);
  tcase_add_test(tc_core, test_from_float_to_decimal_1704);
  tcase_add_test(tc_core, test_from_float_to_decimal_1705);
  tcase_add_test(tc_core, test_from_float_to_decimal_1706);
  tcase_add_test(tc_core, test_from_float_to_decimal_1707);
  tcase_add_test(tc_core, test_from_float_to_decimal_1708);
  tcase_add_test(tc_core, test_from_float_to_decimal_1709);
  tcase_add_test(tc_core, test_from_float_to_decimal_1710);
  tcase_add_test(tc_core, test_from_float_to_decimal_1711);
  tcase_add_test(tc_core, test_from_float_to_decimal_1712);
  tcase_add_test(tc_core, test_from_float_to_decimal_1713);
  tcase_add_test(tc_core, test_from_float_to_decimal_1714);
  tcase_add_test(tc_core, test_from_float_to_decimal_1715);
  tcase_add_test(tc_core, test_from_float_to_decimal_1716);
  tcase_add_test(tc_core, test_from_float_to_decimal_1717);
  tcase_add_test(tc_core, test_from_float_to_decimal_1718);
  tcase_add_test(tc_core, test_from_float_to_decimal_1719);
  tcase_add_test(tc_core, test_from_float_to_decimal_1720);
  tcase_add_test(tc_core, test_from_float_to_decimal_1721);
  tcase_add_test(tc_core, test_from_float_to_decimal_1722);
  tcase_add_test(tc_core, test_from_float_to_decimal_1723);
  tcase_add_test(tc_core, test_from_float_to_decimal_1724);
  tcase_add_test(tc_core, test_from_float_to_decimal_1725);
  tcase_add_test(tc_core, test_from_float_to_decimal_1726);
  tcase_add_test(tc_core, test_from_float_to_decimal_1727);
  tcase_add_test(tc_core, test_from_float_to_decimal_1728);
  tcase_add_test(tc_core, test_from_float_to_decimal_1729);
  tcase_add_test(tc_core, test_from_float_to_decimal_1730);
  tcase_add_test(tc_core, test_from_float_to_decimal_1731);
  tcase_add_test(tc_core, test_from_float_to_decimal_1732);
  tcase_add_test(tc_core, test_from_float_to_decimal_1733);
  tcase_add_test(tc_core, test_from_float_to_decimal_1734);
  tcase_add_test(tc_core, test_from_float_to_decimal_1735);
  tcase_add_test(tc_core, test_from_float_to_decimal_1736);
  tcase_add_test(tc_core, test_from_float_to_decimal_1737);
  tcase_add_test(tc_core, test_from_float_to_decimal_1738);
  tcase_add_test(tc_core, test_from_float_to_decimal_1739);
  tcase_add_test(tc_core, test_from_float_to_decimal_1740);
  tcase_add_test(tc_core, test_from_float_to_decimal_1741);
  tcase_add_test(tc_core, test_from_float_to_decimal_1742);
  tcase_add_test(tc_core, test_from_float_to_decimal_1743);
  tcase_add_test(tc_core, test_from_float_to_decimal_1744);
  tcase_add_test(tc_core, test_from_float_to_decimal_1745);
  tcase_add_test(tc_core, test_from_float_to_decimal_1746);
  tcase_add_test(tc_core, test_from_float_to_decimal_1747);
  tcase_add_test(tc_core, test_from_float_to_decimal_1748);
  tcase_add_test(tc_core, test_from_float_to_decimal_1749);
  tcase_add_test(tc_core, test_from_float_to_decimal_1750);
  tcase_add_test(tc_core, test_from_float_to_decimal_1751);
  tcase_add_test(tc_core, test_from_float_to_decimal_1752);
  tcase_add_test(tc_core, test_from_float_to_decimal_1753);
  tcase_add_test(tc_core, test_from_float_to_decimal_1754);
  tcase_add_test(tc_core, test_from_float_to_decimal_1755);
  tcase_add_test(tc_core, test_from_float_to_decimal_1756);
  tcase_add_test(tc_core, test_from_float_to_decimal_1757);
  tcase_add_test(tc_core, test_from_float_to_decimal_1758);
  tcase_add_test(tc_core, test_from_float_to_decimal_1759);
  tcase_add_test(tc_core, test_from_float_to_decimal_1760);
  tcase_add_test(tc_core, test_from_float_to_decimal_1761);
  tcase_add_test(tc_core, test_from_float_to_decimal_1762);
  tcase_add_test(tc_core, test_from_float_to_decimal_1763);
  tcase_add_test(tc_core, test_from_float_to_decimal_1764);
  tcase_add_test(tc_core, test_from_float_to_decimal_1765);
  tcase_add_test(tc_core, test_from_float_to_decimal_1766);
  tcase_add_test(tc_core, test_from_float_to_decimal_1767);
  tcase_add_test(tc_core, test_from_float_to_decimal_1768);
  tcase_add_test(tc_core, test_from_float_to_decimal_1769);
  tcase_add_test(tc_core, test_from_float_to_decimal_1770);
  tcase_add_test(tc_core, test_from_float_to_decimal_1771);
  tcase_add_test(tc_core, test_from_float_to_decimal_1772);
  tcase_add_test(tc_core, test_from_float_to_decimal_1773);
  tcase_add_test(tc_core, test_from_float_to_decimal_1774);
  tcase_add_test(tc_core, test_from_float_to_decimal_1775);
  tcase_add_test(tc_core, test_from_float_to_decimal_1776);
  tcase_add_test(tc_core, test_from_float_to_decimal_1777);
  tcase_add_test(tc_core, test_from_float_to_decimal_1778);
  tcase_add_test(tc_core, test_from_float_to_decimal_1779);
  tcase_add_test(tc_core, test_from_float_to_decimal_1780);
  tcase_add_test(tc_core, test_from_float_to_decimal_1781);
  tcase_add_test(tc_core, test_from_float_to_decimal_1782);
  tcase_add_test(tc_core, test_from_float_to_decimal_1783);
  tcase_add_test(tc_core, test_from_float_to_decimal_1784);
  tcase_add_test(tc_core, test_from_float_to_decimal_1785);
  tcase_add_test(tc_core, test_from_float_to_decimal_1786);
  tcase_add_test(tc_core, test_from_float_to_decimal_1787);
  tcase_add_test(tc_core, test_from_float_to_decimal_1788);
  tcase_add_test(tc_core, test_from_float_to_decimal_1789);
  tcase_add_test(tc_core, test_from_float_to_decimal_1790);
  tcase_add_test(tc_core, test_from_float_to_decimal_1791);
  tcase_add_test(tc_core, test_from_float_to_decimal_1792);
  tcase_add_test(tc_core, test_from_float_to_decimal_1793);
  tcase_add_test(tc_core, test_from_float_to_decimal_1794);
  tcase_add_test(tc_core, test_from_float_to_decimal_1795);
  tcase_add_test(tc_core, test_from_float_to_decimal_1796);
  tcase_add_test(tc_core, test_from_float_to_decimal_1797);
  tcase_add_test(tc_core, test_from_float_to_decimal_1798);
  tcase_add_test(tc_core, test_from_float_to_decimal_1799);
  tcase_add_test(tc_core, test_from_float_to_decimal_1800);
  tcase_add_test(tc_core, test_from_float_to_decimal_1801);
  tcase_add_test(tc_core, test_from_float_to_decimal_1802);
  tcase_add_test(tc_core, test_from_float_to_decimal_1803);
  tcase_add_test(tc_core, test_from_float_to_decimal_1804);
  tcase_add_test(tc_core, test_from_float_to_decimal_1805);
  tcase_add_test(tc_core, test_from_float_to_decimal_1806);
  tcase_add_test(tc_core, test_from_float_to_decimal_1807);
  tcase_add_test(tc_core, test_from_float_to_decimal_1808);
  tcase_add_test(tc_core, test_from_float_to_decimal_1809);
  tcase_add_test(tc_core, test_from_float_to_decimal_1810);
  tcase_add_test(tc_core, test_from_float_to_decimal_1811);
  tcase_add_test(tc_core, test_from_float_to_decimal_1812);
  tcase_add_test(tc_core, test_from_float_to_decimal_1813);
  tcase_add_test(tc_core, test_from_float_to_decimal_1814);
  tcase_add_test(tc_core, test_from_float_to_decimal_1815);
  tcase_add_test(tc_core, test_from_float_to_decimal_1816);
  tcase_add_test(tc_core, test_from_float_to_decimal_1817);
  tcase_add_test(tc_core, test_from_float_to_decimal_1818);
  tcase_add_test(tc_core, test_from_float_to_decimal_1819);
  tcase_add_test(tc_core, test_from_float_to_decimal_1820);
  tcase_add_test(tc_core, test_from_float_to_decimal_1821);
  tcase_add_test(tc_core, test_from_float_to_decimal_1822);
  tcase_add_test(tc_core, test_from_float_to_decimal_1823);
  tcase_add_test(tc_core, test_from_float_to_decimal_1824);
  tcase_add_test(tc_core, test_from_float_to_decimal_1825);
  tcase_add_test(tc_core, test_from_float_to_decimal_1826);
  tcase_add_test(tc_core, test_from_float_to_decimal_1827);
  tcase_add_test(tc_core, test_from_float_to_decimal_1828);
  tcase_add_test(tc_core, test_from_float_to_decimal_1829);
  tcase_add_test(tc_core, test_from_float_to_decimal_1830);
  tcase_add_test(tc_core, test_from_float_to_decimal_1831);
  tcase_add_test(tc_core, test_from_float_to_decimal_1832);
  tcase_add_test(tc_core, test_from_float_to_decimal_1833);
  tcase_add_test(tc_core, test_from_float_to_decimal_1834);
  tcase_add_test(tc_core, test_from_float_to_decimal_1835);
  tcase_add_test(tc_core, test_from_float_to_decimal_1836);
  tcase_add_test(tc_core, test_from_float_to_decimal_1837);
  tcase_add_test(tc_core, test_from_float_to_decimal_1838);
  tcase_add_test(tc_core, test_from_float_to_decimal_1839);
  tcase_add_test(tc_core, test_from_float_to_decimal_1840);
  tcase_add_test(tc_core, test_from_float_to_decimal_1841);
  tcase_add_test(tc_core, test_from_float_to_decimal_1842);
  tcase_add_test(tc_core, test_from_float_to_decimal_1843);
  tcase_add_test(tc_core, test_from_float_to_decimal_1844);
  tcase_add_test(tc_core, test_from_float_to_decimal_1845);
  tcase_add_test(tc_core, test_from_float_to_decimal_1846);
  tcase_add_test(tc_core, test_from_float_to_decimal_1847);
  tcase_add_test(tc_core, test_from_float_to_decimal_1848);
  tcase_add_test(tc_core, test_from_float_to_decimal_1849);
  tcase_add_test(tc_core, test_from_float_to_decimal_1850);
  tcase_add_test(tc_core, test_from_float_to_decimal_1851);
  tcase_add_test(tc_core, test_from_float_to_decimal_1852);
  tcase_add_test(tc_core, test_from_float_to_decimal_1853);
  tcase_add_test(tc_core, test_from_float_to_decimal_1854);
  tcase_add_test(tc_core, test_from_float_to_decimal_1855);
  tcase_add_test(tc_core, test_from_float_to_decimal_1856);
  tcase_add_test(tc_core, test_from_float_to_decimal_1857);
  tcase_add_test(tc_core, test_from_float_to_decimal_1858);
  tcase_add_test(tc_core, test_from_float_to_decimal_1859);
  tcase_add_test(tc_core, test_from_float_to_decimal_1860);
  tcase_add_test(tc_core, test_from_float_to_decimal_1861);
  tcase_add_test(tc_core, test_from_float_to_decimal_1862);
  tcase_add_test(tc_core, test_from_float_to_decimal_1863);
  tcase_add_test(tc_core, test_from_float_to_decimal_1864);
  tcase_add_test(tc_core, test_from_float_to_decimal_1865);
  tcase_add_test(tc_core, test_from_float_to_decimal_1866);
  tcase_add_test(tc_core, test_from_float_to_decimal_1867);
  tcase_add_test(tc_core, test_from_float_to_decimal_1868);
  tcase_add_test(tc_core, test_from_float_to_decimal_1869);
  tcase_add_test(tc_core, test_from_float_to_decimal_1870);
  tcase_add_test(tc_core, test_from_float_to_decimal_1871);
  tcase_add_test(tc_core, test_from_float_to_decimal_1872);
  tcase_add_test(tc_core, test_from_float_to_decimal_1873);
  tcase_add_test(tc_core, test_from_float_to_decimal_1874);
  tcase_add_test(tc_core, test_from_float_to_decimal_1875);
  tcase_add_test(tc_core, test_from_float_to_decimal_1876);
  tcase_add_test(tc_core, test_from_float_to_decimal_1877);
  tcase_add_test(tc_core, test_from_float_to_decimal_1878);
  tcase_add_test(tc_core, test_from_float_to_decimal_1879);
  tcase_add_test(tc_core, test_from_float_to_decimal_1880);
  tcase_add_test(tc_core, test_from_float_to_decimal_1881);
  tcase_add_test(tc_core, test_from_float_to_decimal_1882);
  tcase_add_test(tc_core, test_from_float_to_decimal_1883);
  tcase_add_test(tc_core, test_from_float_to_decimal_1884);
  tcase_add_test(tc_core, test_from_float_to_decimal_1885);
  tcase_add_test(tc_core, test_from_float_to_decimal_1886);
  tcase_add_test(tc_core, test_from_float_to_decimal_1887);
  tcase_add_test(tc_core, test_from_float_to_decimal_1888);
  tcase_add_test(tc_core, test_from_float_to_decimal_1889);
  tcase_add_test(tc_core, test_from_float_to_decimal_1890);
  tcase_add_test(tc_core, test_from_float_to_decimal_1891);
  tcase_add_test(tc_core, test_from_float_to_decimal_1892);
  tcase_add_test(tc_core, test_from_float_to_decimal_1893);
  tcase_add_test(tc_core, test_from_float_to_decimal_1894);
  tcase_add_test(tc_core, test_from_float_to_decimal_1895);
  tcase_add_test(tc_core, test_from_float_to_decimal_1896);
  tcase_add_test(tc_core, test_from_float_to_decimal_1897);
  tcase_add_test(tc_core, test_from_float_to_decimal_1898);
  tcase_add_test(tc_core, test_from_float_to_decimal_1899);
  tcase_add_test(tc_core, test_from_float_to_decimal_1900);
  tcase_add_test(tc_core, test_from_float_to_decimal_1901);
  tcase_add_test(tc_core, test_from_float_to_decimal_1902);
  tcase_add_test(tc_core, test_from_float_to_decimal_1903);
  tcase_add_test(tc_core, test_from_float_to_decimal_1904);
  tcase_add_test(tc_core, test_from_float_to_decimal_1905);
  tcase_add_test(tc_core, test_from_float_to_decimal_1906);
  tcase_add_test(tc_core, test_from_float_to_decimal_1907);
  tcase_add_test(tc_core, test_from_float_to_decimal_1908);
  tcase_add_test(tc_core, test_from_float_to_decimal_1909);
  tcase_add_test(tc_core, test_from_float_to_decimal_1910);
  tcase_add_test(tc_core, test_from_float_to_decimal_1911);
  tcase_add_test(tc_core, test_from_float_to_decimal_1912);
  tcase_add_test(tc_core, test_from_float_to_decimal_1913);
  tcase_add_test(tc_core, test_from_float_to_decimal_1914);
  tcase_add_test(tc_core, test_from_float_to_decimal_1915);
  tcase_add_test(tc_core, test_from_float_to_decimal_1916);
  tcase_add_test(tc_core, test_from_float_to_decimal_1917);
  tcase_add_test(tc_core, test_from_float_to_decimal_1918);
  tcase_add_test(tc_core, test_from_float_to_decimal_1919);
  tcase_add_test(tc_core, test_from_float_to_decimal_1920);
  tcase_add_test(tc_core, test_from_float_to_decimal_1921);
  tcase_add_test(tc_core, test_from_float_to_decimal_1922);
  tcase_add_test(tc_core, test_from_float_to_decimal_1923);
  tcase_add_test(tc_core, test_from_float_to_decimal_1924);
  tcase_add_test(tc_core, test_from_float_to_decimal_1925);
  tcase_add_test(tc_core, test_from_float_to_decimal_1926);
  tcase_add_test(tc_core, test_from_float_to_decimal_1927);
  tcase_add_test(tc_core, test_from_float_to_decimal_1928);
  tcase_add_test(tc_core, test_from_float_to_decimal_1929);
  tcase_add_test(tc_core, test_from_float_to_decimal_1930);
  tcase_add_test(tc_core, test_from_float_to_decimal_1931);
  tcase_add_test(tc_core, test_from_float_to_decimal_1932);
  tcase_add_test(tc_core, test_from_float_to_decimal_1933);
  tcase_add_test(tc_core, test_from_float_to_decimal_1934);
  tcase_add_test(tc_core, test_from_float_to_decimal_1935);
  tcase_add_test(tc_core, test_from_float_to_decimal_1936);
  tcase_add_test(tc_core, test_from_float_to_decimal_1937);
  tcase_add_test(tc_core, test_from_float_to_decimal_1938);
  tcase_add_test(tc_core, test_from_float_to_decimal_1939);
  tcase_add_test(tc_core, test_from_float_to_decimal_1940);
  tcase_add_test(tc_core, test_from_float_to_decimal_1941);
  tcase_add_test(tc_core, test_from_float_to_decimal_1942);
  tcase_add_test(tc_core, test_from_float_to_decimal_1943);
  tcase_add_test(tc_core, test_from_float_to_decimal_1944);
  tcase_add_test(tc_core, test_from_float_to_decimal_1945);
  tcase_add_test(tc_core, test_from_float_to_decimal_1946);
  tcase_add_test(tc_core, test_from_float_to_decimal_1947);
  tcase_add_test(tc_core, test_from_float_to_decimal_1948);
  tcase_add_test(tc_core, test_from_float_to_decimal_1949);
  tcase_add_test(tc_core, test_from_float_to_decimal_1950);
  tcase_add_test(tc_core, test_from_float_to_decimal_1951);
  tcase_add_test(tc_core, test_from_float_to_decimal_1952);
  tcase_add_test(tc_core, test_from_float_to_decimal_1953);
  tcase_add_test(tc_core, test_from_float_to_decimal_1954);
  tcase_add_test(tc_core, test_from_float_to_decimal_1955);
  tcase_add_test(tc_core, test_from_float_to_decimal_1956);
  tcase_add_test(tc_core, test_from_float_to_decimal_1957);
  tcase_add_test(tc_core, test_from_float_to_decimal_1958);
  tcase_add_test(tc_core, test_from_float_to_decimal_1959);
  tcase_add_test(tc_core, test_from_float_to_decimal_1960);
  tcase_add_test(tc_core, test_from_float_to_decimal_1961);
  tcase_add_test(tc_core, test_from_float_to_decimal_1962);
  tcase_add_test(tc_core, test_from_float_to_decimal_1963);
  tcase_add_test(tc_core, test_from_float_to_decimal_1964);
  tcase_add_test(tc_core, test_from_float_to_decimal_1965);
  tcase_add_test(tc_core, test_from_float_to_decimal_1966);
  tcase_add_test(tc_core, test_from_float_to_decimal_1967);
  tcase_add_test(tc_core, test_from_float_to_decimal_1968);
  tcase_add_test(tc_core, test_from_float_to_decimal_1969);
  tcase_add_test(tc_core, test_from_float_to_decimal_1970);
  tcase_add_test(tc_core, test_from_float_to_decimal_1971);
  tcase_add_test(tc_core, test_from_float_to_decimal_1972);
  tcase_add_test(tc_core, test_from_float_to_decimal_1973);
  tcase_add_test(tc_core, test_from_float_to_decimal_1974);
  tcase_add_test(tc_core, test_from_float_to_decimal_1975);
  tcase_add_test(tc_core, test_from_float_to_decimal_1976);
  tcase_add_test(tc_core, test_from_float_to_decimal_1977);
  tcase_add_test(tc_core, test_from_float_to_decimal_1978);
  tcase_add_test(tc_core, test_from_float_to_decimal_1979);
  tcase_add_test(tc_core, test_from_float_to_decimal_1980);
  tcase_add_test(tc_core, test_from_float_to_decimal_1981);
  tcase_add_test(tc_core, test_from_float_to_decimal_1982);
  tcase_add_test(tc_core, test_from_float_to_decimal_1983);
  tcase_add_test(tc_core, test_from_float_to_decimal_1984);
  tcase_add_test(tc_core, test_from_float_to_decimal_1985);
  tcase_add_test(tc_core, test_from_float_to_decimal_1986);
  tcase_add_test(tc_core, test_from_float_to_decimal_1987);
  tcase_add_test(tc_core, test_from_float_to_decimal_1988);
  tcase_add_test(tc_core, test_from_float_to_decimal_1989);
  tcase_add_test(tc_core, test_from_float_to_decimal_1990);
  tcase_add_test(tc_core, test_from_float_to_decimal_1991);
  tcase_add_test(tc_core, test_from_float_to_decimal_1992);
  tcase_add_test(tc_core, test_from_float_to_decimal_1993);
  tcase_add_test(tc_core, test_from_float_to_decimal_1994);
  tcase_add_test(tc_core, test_from_float_to_decimal_1995);
  tcase_add_test(tc_core, test_from_float_to_decimal_1996);
  tcase_add_test(tc_core, test_from_float_to_decimal_1997);
  tcase_add_test(tc_core, test_from_float_to_decimal_1998);
  tcase_add_test(tc_core, test_from_float_to_decimal_1999);
  tcase_add_test(tc_core, test_from_float_to_decimal_2000);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *test_from_float_to_decimal_suite_5(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_float_to_decimal_5" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_float_to_decimal_2039);
  tcase_add_test(tc_core, test_from_float_to_decimal_2040);
  tcase_add_test(tc_core, test_from_float_to_decimal_2041);
  tcase_add_test(tc_core, test_from_float_to_decimal_2042);
  tcase_add_test(tc_core, test_from_float_to_decimal_2043);
  tcase_add_test(tc_core, test_from_float_to_decimal_2044);
  tcase_add_test(tc_core, test_from_float_to_decimal_2045);
  tcase_add_test(tc_core, test_from_float_to_decimal_2046);
  tcase_add_test(tc_core, test_from_float_to_decimal_2047);
  tcase_add_test(tc_core, test_from_float_to_decimal_2048);
  tcase_add_test(tc_core, test_from_float_to_decimal_2049);
  tcase_add_test(tc_core, test_from_float_to_decimal_2050);
  tcase_add_test(tc_core, test_from_float_to_decimal_2051);
  tcase_add_test(tc_core, test_from_float_to_decimal_2052);
  tcase_add_test(tc_core, test_from_float_to_decimal_2053);
  tcase_add_test(tc_core, test_from_float_to_decimal_2054);
  tcase_add_test(tc_core, test_from_float_to_decimal_2055);
  tcase_add_test(tc_core, test_from_float_to_decimal_2056);
  tcase_add_test(tc_core, test_from_float_to_decimal_2057);
  tcase_add_test(tc_core, test_from_float_to_decimal_2058);
  tcase_add_test(tc_core, test_from_float_to_decimal_2059);
  tcase_add_test(tc_core, test_from_float_to_decimal_2060);
  tcase_add_test(tc_core, test_from_float_to_decimal_2061);
  tcase_add_test(tc_core, test_from_float_to_decimal_2062);
  tcase_add_test(tc_core, test_from_float_to_decimal_2063);
  tcase_add_test(tc_core, test_from_float_to_decimal_2064);
  tcase_add_test(tc_core, test_from_float_to_decimal_2065);
  tcase_add_test(tc_core, test_from_float_to_decimal_2066);
  tcase_add_test(tc_core, test_from_float_to_decimal_2067);
  tcase_add_test(tc_core, test_from_float_to_decimal_2068);
  tcase_add_test(tc_core, test_from_float_to_decimal_2069);
  tcase_add_test(tc_core, test_from_float_to_decimal_2070);
  tcase_add_test(tc_core, test_from_float_to_decimal_2071);
  tcase_add_test(tc_core, test_from_float_to_decimal_2072);
  tcase_add_test(tc_core, test_from_float_to_decimal_2073);
  tcase_add_test(tc_core, test_from_float_to_decimal_2074);
  tcase_add_test(tc_core, test_from_float_to_decimal_2075);
  tcase_add_test(tc_core, test_from_float_to_decimal_2076);
  tcase_add_test(tc_core, test_from_float_to_decimal_2077);
  tcase_add_test(tc_core, test_from_float_to_decimal_2078);
  tcase_add_test(tc_core, test_from_float_to_decimal_2079);
  tcase_add_test(tc_core, test_from_float_to_decimal_2080);
  tcase_add_test(tc_core, test_from_float_to_decimal_2081);
  tcase_add_test(tc_core, test_from_float_to_decimal_2082);
  tcase_add_test(tc_core, test_from_float_to_decimal_2083);
  tcase_add_test(tc_core, test_from_float_to_decimal_2084);
  tcase_add_test(tc_core, test_from_float_to_decimal_2085);
  tcase_add_test(tc_core, test_from_float_to_decimal_2086);
  tcase_add_test(tc_core, test_from_float_to_decimal_2087);
  tcase_add_test(tc_core, test_from_float_to_decimal_2088);
  tcase_add_test(tc_core, test_from_float_to_decimal_2089);
  tcase_add_test(tc_core, test_from_float_to_decimal_2090);
  tcase_add_test(tc_core, test_from_float_to_decimal_2091);
  tcase_add_test(tc_core, test_from_float_to_decimal_2092);
  tcase_add_test(tc_core, test_from_float_to_decimal_2093);
  tcase_add_test(tc_core, test_from_float_to_decimal_2094);
  tcase_add_test(tc_core, test_from_float_to_decimal_2095);
  tcase_add_test(tc_core, test_from_float_to_decimal_2096);
  tcase_add_test(tc_core, test_from_float_to_decimal_2097);
  tcase_add_test(tc_core, test_from_float_to_decimal_2098);
  tcase_add_test(tc_core, test_from_float_to_decimal_2099);
  tcase_add_test(tc_core, test_from_float_to_decimal_2100);
  tcase_add_test(tc_core, test_from_float_to_decimal_2101);
  tcase_add_test(tc_core, test_from_float_to_decimal_2102);
  tcase_add_test(tc_core, test_from_float_to_decimal_2103);
  tcase_add_test(tc_core, test_from_float_to_decimal_2104);
  tcase_add_test(tc_core, test_from_float_to_decimal_2105);
  tcase_add_test(tc_core, test_from_float_to_decimal_2106);
  tcase_add_test(tc_core, test_from_float_to_decimal_2107);
  tcase_add_test(tc_core, test_from_float_to_decimal_2108);
  tcase_add_test(tc_core, test_from_float_to_decimal_2109);
  tcase_add_test(tc_core, test_from_float_to_decimal_2110);
  tcase_add_test(tc_core, test_from_float_to_decimal_2111);
  tcase_add_test(tc_core, test_from_float_to_decimal_2112);
  tcase_add_test(tc_core, test_from_float_to_decimal_2113);
  tcase_add_test(tc_core, test_from_float_to_decimal_2114);
  tcase_add_test(tc_core, test_from_float_to_decimal_2115);
  tcase_add_test(tc_core, test_from_float_to_decimal_2116);
  tcase_add_test(tc_core, test_from_float_to_decimal_2117);
  tcase_add_test(tc_core, test_from_float_to_decimal_2118);
  tcase_add_test(tc_core, test_from_float_to_decimal_2119);
  tcase_add_test(tc_core, test_from_float_to_decimal_2120);
  tcase_add_test(tc_core, test_from_float_to_decimal_2121);
  tcase_add_test(tc_core, test_from_float_to_decimal_2122);
  tcase_add_test(tc_core, test_from_float_to_decimal_2123);
  tcase_add_test(tc_core, test_from_float_to_decimal_2124);
  tcase_add_test(tc_core, test_from_float_to_decimal_2125);
  tcase_add_test(tc_core, test_from_float_to_decimal_2126);
  tcase_add_test(tc_core, test_from_float_to_decimal_2127);
  tcase_add_test(tc_core, test_from_float_to_decimal_2128);
  tcase_add_test(tc_core, test_from_float_to_decimal_2129);
  tcase_add_test(tc_core, test_from_float_to_decimal_2130);
  tcase_add_test(tc_core, test_from_float_to_decimal_2131);
  tcase_add_test(tc_core, test_from_float_to_decimal_2132);
  tcase_add_test(tc_core, test_from_float_to_decimal_2133);
  tcase_add_test(tc_core, test_from_float_to_decimal_2134);
  tcase_add_test(tc_core, test_from_float_to_decimal_2135);
  tcase_add_test(tc_core, test_from_float_to_decimal_2136);
  tcase_add_test(tc_core, test_from_float_to_decimal_2137);
  tcase_add_test(tc_core, test_from_float_to_decimal_2138);
  tcase_add_test(tc_core, test_from_float_to_decimal_2139);
  tcase_add_test(tc_core, test_from_float_to_decimal_2140);
  tcase_add_test(tc_core, test_from_float_to_decimal_2141);
  tcase_add_test(tc_core, test_from_float_to_decimal_2142);
  tcase_add_test(tc_core, test_from_float_to_decimal_2143);
  tcase_add_test(tc_core, test_from_float_to_decimal_2144);
  tcase_add_test(tc_core, test_from_float_to_decimal_2145);
  tcase_add_test(tc_core, test_from_float_to_decimal_2146);
  tcase_add_test(tc_core, test_from_float_to_decimal_2147);
  tcase_add_test(tc_core, test_from_float_to_decimal_2148);
  tcase_add_test(tc_core, test_from_float_to_decimal_2149);
  tcase_add_test(tc_core, test_from_float_to_decimal_2150);
  tcase_add_test(tc_core, test_from_float_to_decimal_2151);
  tcase_add_test(tc_core, test_from_float_to_decimal_2152);
  tcase_add_test(tc_core, test_from_float_to_decimal_2153);
  tcase_add_test(tc_core, test_from_float_to_decimal_2154);
  tcase_add_test(tc_core, test_from_float_to_decimal_2155);
  tcase_add_test(tc_core, test_from_float_to_decimal_2156);
  tcase_add_test(tc_core, test_from_float_to_decimal_2157);
  tcase_add_test(tc_core, test_from_float_to_decimal_2158);
  tcase_add_test(tc_core, test_from_float_to_decimal_2159);
  tcase_add_test(tc_core, test_from_float_to_decimal_2160);
  tcase_add_test(tc_core, test_from_float_to_decimal_2161);
  tcase_add_test(tc_core, test_from_float_to_decimal_2162);
  tcase_add_test(tc_core, test_from_float_to_decimal_2163);
  tcase_add_test(tc_core, test_from_float_to_decimal_2164);
  tcase_add_test(tc_core, test_from_float_to_decimal_2165);
  tcase_add_test(tc_core, test_from_float_to_decimal_2166);
  tcase_add_test(tc_core, test_from_float_to_decimal_2167);
  tcase_add_test(tc_core, test_from_float_to_decimal_2168);
  tcase_add_test(tc_core, test_from_float_to_decimal_2169);
  tcase_add_test(tc_core, test_from_float_to_decimal_2170);
  tcase_add_test(tc_core, test_from_float_to_decimal_2171);
  tcase_add_test(tc_core, test_from_float_to_decimal_2172);
  tcase_add_test(tc_core, test_from_float_to_decimal_2173);
  tcase_add_test(tc_core, test_from_float_to_decimal_2174);
  tcase_add_test(tc_core, test_from_float_to_decimal_2175);
  tcase_add_test(tc_core, test_from_float_to_decimal_2176);
  tcase_add_test(tc_core, test_from_float_to_decimal_2177);
  tcase_add_test(tc_core, test_from_float_to_decimal_2178);
  tcase_add_test(tc_core, test_from_float_to_decimal_2179);
  tcase_add_test(tc_core, test_from_float_to_decimal_2180);
  tcase_add_test(tc_core, test_from_float_to_decimal_2181);
  tcase_add_test(tc_core, test_from_float_to_decimal_2182);
  tcase_add_test(tc_core, test_from_float_to_decimal_2183);
  tcase_add_test(tc_core, test_from_float_to_decimal_2184);
  tcase_add_test(tc_core, test_from_float_to_decimal_2185);
  tcase_add_test(tc_core, test_from_float_to_decimal_2186);
  tcase_add_test(tc_core, test_from_float_to_decimal_2187);
  tcase_add_test(tc_core, test_from_float_to_decimal_2188);
  tcase_add_test(tc_core, test_from_float_to_decimal_2189);
  tcase_add_test(tc_core, test_from_float_to_decimal_2190);
  tcase_add_test(tc_core, test_from_float_to_decimal_2191);
  tcase_add_test(tc_core, test_from_float_to_decimal_2192);
  tcase_add_test(tc_core, test_from_float_to_decimal_2193);
  tcase_add_test(tc_core, test_from_float_to_decimal_2194);
  tcase_add_test(tc_core, test_from_float_to_decimal_2195);
  tcase_add_test(tc_core, test_from_float_to_decimal_2196);
  tcase_add_test(tc_core, test_from_float_to_decimal_2197);
  tcase_add_test(tc_core, test_from_float_to_decimal_2198);
  tcase_add_test(tc_core, test_from_float_to_decimal_2199);
  tcase_add_test(tc_core, test_from_float_to_decimal_2200);
  tcase_add_test(tc_core, test_from_float_to_decimal_2201);
  tcase_add_test(tc_core, test_from_float_to_decimal_2202);
  tcase_add_test(tc_core, test_from_float_to_decimal_2203);
  tcase_add_test(tc_core, test_from_float_to_decimal_2204);
  tcase_add_test(tc_core, test_from_float_to_decimal_2205);
  tcase_add_test(tc_core, test_from_float_to_decimal_2206);
  tcase_add_test(tc_core, test_from_float_to_decimal_2207);
  tcase_add_test(tc_core, test_from_float_to_decimal_2208);
  tcase_add_test(tc_core, test_from_float_to_decimal_2209);
  tcase_add_test(tc_core, test_from_float_to_decimal_2210);
  tcase_add_test(tc_core, test_from_float_to_decimal_2211);
  tcase_add_test(tc_core, test_from_float_to_decimal_2212);
  tcase_add_test(tc_core, test_from_float_to_decimal_2213);
  tcase_add_test(tc_core, test_from_float_to_decimal_2214);
  tcase_add_test(tc_core, test_from_float_to_decimal_2215);
  tcase_add_test(tc_core, test_from_float_to_decimal_2216);
  tcase_add_test(tc_core, test_from_float_to_decimal_2217);
  tcase_add_test(tc_core, test_from_float_to_decimal_2218);
  tcase_add_test(tc_core, test_from_float_to_decimal_2219);
  tcase_add_test(tc_core, test_from_float_to_decimal_2220);
  tcase_add_test(tc_core, test_from_float_to_decimal_2221);
  tcase_add_test(tc_core, test_from_float_to_decimal_2222);
  tcase_add_test(tc_core, test_from_float_to_decimal_2223);
  tcase_add_test(tc_core, test_from_float_to_decimal_2224);
  tcase_add_test(tc_core, test_from_float_to_decimal_2225);
  tcase_add_test(tc_core, test_from_float_to_decimal_2226);
  tcase_add_test(tc_core, test_from_float_to_decimal_2227);
  tcase_add_test(tc_core, test_from_float_to_decimal_2228);
  tcase_add_test(tc_core, test_from_float_to_decimal_2229);
  tcase_add_test(tc_core, test_from_float_to_decimal_2230);
  tcase_add_test(tc_core, test_from_float_to_decimal_2231);
  tcase_add_test(tc_core, test_from_float_to_decimal_2232);
  tcase_add_test(tc_core, test_from_float_to_decimal_2233);
  tcase_add_test(tc_core, test_from_float_to_decimal_2234);
  tcase_add_test(tc_core, test_from_float_to_decimal_2235);
  tcase_add_test(tc_core, test_from_float_to_decimal_2236);
  tcase_add_test(tc_core, test_from_float_to_decimal_2237);
  tcase_add_test(tc_core, test_from_float_to_decimal_2238);
  tcase_add_test(tc_core, test_from_float_to_decimal_2239);
  tcase_add_test(tc_core, test_from_float_to_decimal_2240);
  tcase_add_test(tc_core, test_from_float_to_decimal_2241);
  tcase_add_test(tc_core, test_from_float_to_decimal_2242);
  tcase_add_test(tc_core, test_from_float_to_decimal_2243);
  tcase_add_test(tc_core, test_from_float_to_decimal_2244);
  tcase_add_test(tc_core, test_from_float_to_decimal_2245);
  tcase_add_test(tc_core, test_from_float_to_decimal_2246);
  tcase_add_test(tc_core, test_from_float_to_decimal_2247);
  tcase_add_test(tc_core, test_from_float_to_decimal_2248);
  tcase_add_test(tc_core, test_from_float_to_decimal_2249);
  tcase_add_test(tc_core, test_from_float_to_decimal_2250);
  tcase_add_test(tc_core, test_from_float_to_decimal_2251);
  tcase_add_test(tc_core, test_from_float_to_decimal_2252);
  tcase_add_test(tc_core, test_from_float_to_decimal_2253);
  tcase_add_test(tc_core, test_from_float_to_decimal_2254);
  tcase_add_test(tc_core, test_from_float_to_decimal_2255);
  tcase_add_test(tc_core, test_from_float_to_decimal_2256);
  tcase_add_test(tc_core, test_from_float_to_decimal_2257);
  tcase_add_test(tc_core, test_from_float_to_decimal_2258);
  tcase_add_test(tc_core, test_from_float_to_decimal_2259);
  tcase_add_test(tc_core, test_from_float_to_decimal_2260);
  tcase_add_test(tc_core, test_from_float_to_decimal_2261);
  tcase_add_test(tc_core, test_from_float_to_decimal_2262);
  tcase_add_test(tc_core, test_from_float_to_decimal_2263);
  tcase_add_test(tc_core, test_from_float_to_decimal_2264);
  tcase_add_test(tc_core, test_from_float_to_decimal_2265);
  tcase_add_test(tc_core, test_from_float_to_decimal_2266);
  tcase_add_test(tc_core, test_from_float_to_decimal_2267);
  tcase_add_test(tc_core, test_from_float_to_decimal_2268);
  tcase_add_test(tc_core, test_from_float_to_decimal_2269);
  tcase_add_test(tc_core, test_from_float_to_decimal_2270);
  tcase_add_test(tc_core, test_from_float_to_decimal_2271);
  tcase_add_test(tc_core, test_from_float_to_decimal_2272);
  tcase_add_test(tc_core, test_from_float_to_decimal_2273);
  tcase_add_test(tc_core, test_from_float_to_decimal_2274);
  tcase_add_test(tc_core, test_from_float_to_decimal_2275);
  tcase_add_test(tc_core, test_from_float_to_decimal_2276);
  tcase_add_test(tc_core, test_from_float_to_decimal_2277);
  tcase_add_test(tc_core, test_from_float_to_decimal_2278);
  tcase_add_test(tc_core, test_from_float_to_decimal_2279);
  tcase_add_test(tc_core, test_from_float_to_decimal_2280);
  tcase_add_test(tc_core, test_from_float_to_decimal_2281);
  tcase_add_test(tc_core, test_from_float_to_decimal_2282);
  tcase_add_test(tc_core, test_from_float_to_decimal_2283);
  tcase_add_test(tc_core, test_from_float_to_decimal_2284);
  tcase_add_test(tc_core, test_from_float_to_decimal_2285);
  tcase_add_test(tc_core, test_from_float_to_decimal_2286);
  tcase_add_test(tc_core, test_from_float_to_decimal_2287);
  tcase_add_test(tc_core, test_from_float_to_decimal_2288);
  tcase_add_test(tc_core, test_from_float_to_decimal_2289);
  tcase_add_test(tc_core, test_from_float_to_decimal_2290);
  tcase_add_test(tc_core, test_from_float_to_decimal_2291);
  tcase_add_test(tc_core, test_from_float_to_decimal_2292);
  tcase_add_test(tc_core, test_from_float_to_decimal_2293);
  tcase_add_test(tc_core, test_from_float_to_decimal_2294);
  tcase_add_test(tc_core, test_from_float_to_decimal_2295);
  tcase_add_test(tc_core, test_from_float_to_decimal_2296);
  tcase_add_test(tc_core, test_from_float_to_decimal_2297);
  tcase_add_test(tc_core, test_from_float_to_decimal_2298);
  tcase_add_test(tc_core, test_from_float_to_decimal_2299);
  tcase_add_test(tc_core, test_from_float_to_decimal_2300);
  tcase_add_test(tc_core, test_from_float_to_decimal_2301);
  tcase_add_test(tc_core, test_from_float_to_decimal_2302);
  tcase_add_test(tc_core, test_from_float_to_decimal_2303);
  tcase_add_test(tc_core, test_from_float_to_decimal_2304);
  tcase_add_test(tc_core, test_from_float_to_decimal_2305);
  tcase_add_test(tc_core, test_from_float_to_decimal_2306);
  tcase_add_test(tc_core, test_from_float_to_decimal_2307);
  tcase_add_test(tc_core, test_from_float_to_decimal_2308);
  tcase_add_test(tc_core, test_from_float_to_decimal_2309);
  tcase_add_test(tc_core, test_from_float_to_decimal_2310);
  tcase_add_test(tc_core, test_from_float_to_decimal_2311);
  tcase_add_test(tc_core, test_from_float_to_decimal_2312);
  tcase_add_test(tc_core, test_from_float_to_decimal_2313);
  tcase_add_test(tc_core, test_from_float_to_decimal_2314);
  tcase_add_test(tc_core, test_from_float_to_decimal_2315);
  tcase_add_test(tc_core, test_from_float_to_decimal_2316);
  tcase_add_test(tc_core, test_from_float_to_decimal_2317);
  tcase_add_test(tc_core, test_from_float_to_decimal_2318);
  tcase_add_test(tc_core, test_from_float_to_decimal_2319);
  tcase_add_test(tc_core, test_from_float_to_decimal_2320);
  tcase_add_test(tc_core, test_from_float_to_decimal_2321);
  tcase_add_test(tc_core, test_from_float_to_decimal_2322);
  tcase_add_test(tc_core, test_from_float_to_decimal_2323);
  tcase_add_test(tc_core, test_from_float_to_decimal_2324);
  tcase_add_test(tc_core, test_from_float_to_decimal_2325);
  tcase_add_test(tc_core, test_from_float_to_decimal_2326);
  tcase_add_test(tc_core, test_from_float_to_decimal_2327);
  tcase_add_test(tc_core, test_from_float_to_decimal_2328);
  tcase_add_test(tc_core, test_from_float_to_decimal_2329);
  tcase_add_test(tc_core, test_from_float_to_decimal_2330);
  tcase_add_test(tc_core, test_from_float_to_decimal_2331);
  tcase_add_test(tc_core, test_from_float_to_decimal_2332);
  tcase_add_test(tc_core, test_from_float_to_decimal_2333);
  tcase_add_test(tc_core, test_from_float_to_decimal_2334);
  tcase_add_test(tc_core, test_from_float_to_decimal_2335);
  tcase_add_test(tc_core, test_from_float_to_decimal_2336);
  tcase_add_test(tc_core, test_from_float_to_decimal_2337);
  tcase_add_test(tc_core, test_from_float_to_decimal_2338);
  tcase_add_test(tc_core, test_from_float_to_decimal_2339);
  tcase_add_test(tc_core, test_from_float_to_decimal_2340);
  tcase_add_test(tc_core, test_from_float_to_decimal_2341);
  tcase_add_test(tc_core, test_from_float_to_decimal_2342);
  tcase_add_test(tc_core, test_from_float_to_decimal_2343);
  tcase_add_test(tc_core, test_from_float_to_decimal_2344);
  tcase_add_test(tc_core, test_from_float_to_decimal_2345);
  tcase_add_test(tc_core, test_from_float_to_decimal_2346);
  tcase_add_test(tc_core, test_from_float_to_decimal_2347);
  tcase_add_test(tc_core, test_from_float_to_decimal_2348);
  tcase_add_test(tc_core, test_from_float_to_decimal_2349);
  tcase_add_test(tc_core, test_from_float_to_decimal_2350);
  tcase_add_test(tc_core, test_from_float_to_decimal_2351);
  tcase_add_test(tc_core, test_from_float_to_decimal_2352);
  tcase_add_test(tc_core, test_from_float_to_decimal_2353);
  tcase_add_test(tc_core, test_from_float_to_decimal_2354);
  tcase_add_test(tc_core, test_from_float_to_decimal_2355);
  tcase_add_test(tc_core, test_from_float_to_decimal_2356);
  tcase_add_test(tc_core, test_from_float_to_decimal_2357);
  tcase_add_test(tc_core, test_from_float_to_decimal_2358);
  tcase_add_test(tc_core, test_from_float_to_decimal_2359);
  tcase_add_test(tc_core, test_from_float_to_decimal_2360);
  tcase_add_test(tc_core, test_from_float_to_decimal_2361);
  tcase_add_test(tc_core, test_from_float_to_decimal_2362);
  tcase_add_test(tc_core, test_from_float_to_decimal_2363);
  tcase_add_test(tc_core, test_from_float_to_decimal_2364);
  tcase_add_test(tc_core, test_from_float_to_decimal_2365);
  tcase_add_test(tc_core, test_from_float_to_decimal_2366);
  tcase_add_test(tc_core, test_from_float_to_decimal_2367);
  tcase_add_test(tc_core, test_from_float_to_decimal_2368);
  tcase_add_test(tc_core, test_from_float_to_decimal_2369);
  tcase_add_test(tc_core, test_from_float_to_decimal_2370);
  tcase_add_test(tc_core, test_from_float_to_decimal_2371);
  tcase_add_test(tc_core, test_from_float_to_decimal_2372);
  tcase_add_test(tc_core, test_from_float_to_decimal_2373);
  tcase_add_test(tc_core, test_from_float_to_decimal_2374);
  tcase_add_test(tc_core, test_from_float_to_decimal_2375);
  tcase_add_test(tc_core, test_from_float_to_decimal_2376);
  tcase_add_test(tc_core, test_from_float_to_decimal_2377);
  tcase_add_test(tc_core, test_from_float_to_decimal_2378);
  tcase_add_test(tc_core, test_from_float_to_decimal_2379);
  tcase_add_test(tc_core, test_from_float_to_decimal_2380);
  tcase_add_test(tc_core, test_from_float_to_decimal_2381);
  tcase_add_test(tc_core, test_from_float_to_decimal_2382);
  tcase_add_test(tc_core, test_from_float_to_decimal_2383);
  tcase_add_test(tc_core, test_from_float_to_decimal_2384);
  tcase_add_test(tc_core, test_from_float_to_decimal_2385);
  tcase_add_test(tc_core, test_from_float_to_decimal_2386);
  tcase_add_test(tc_core, test_from_float_to_decimal_2387);
  tcase_add_test(tc_core, test_from_float_to_decimal_2388);
  tcase_add_test(tc_core, test_from_float_to_decimal_2389);
  tcase_add_test(tc_core, test_from_float_to_decimal_2390);
  tcase_add_test(tc_core, test_from_float_to_decimal_2391);
  tcase_add_test(tc_core, test_from_float_to_decimal_2392);
  tcase_add_test(tc_core, test_from_float_to_decimal_2393);
  tcase_add_test(tc_core, test_from_float_to_decimal_2394);
  tcase_add_test(tc_core, test_from_float_to_decimal_2395);
  tcase_add_test(tc_core, test_from_float_to_decimal_2396);
  tcase_add_test(tc_core, test_from_float_to_decimal_2397);
  tcase_add_test(tc_core, test_from_float_to_decimal_2398);
  tcase_add_test(tc_core, test_from_float_to_decimal_2399);
  tcase_add_test(tc_core, test_from_float_to_decimal_2400);
  tcase_add_test(tc_core, test_from_float_to_decimal_2401);
  tcase_add_test(tc_core, test_from_float_to_decimal_2402);
  tcase_add_test(tc_core, test_from_float_to_decimal_2403);
  tcase_add_test(tc_core, test_from_float_to_decimal_2404);
  tcase_add_test(tc_core, test_from_float_to_decimal_2405);
  tcase_add_test(tc_core, test_from_float_to_decimal_2406);
  tcase_add_test(tc_core, test_from_float_to_decimal_2407);
  tcase_add_test(tc_core, test_from_float_to_decimal_2408);
  tcase_add_test(tc_core, test_from_float_to_decimal_2409);
  tcase_add_test(tc_core, test_from_float_to_decimal_2410);
  tcase_add_test(tc_core, test_from_float_to_decimal_2411);
  tcase_add_test(tc_core, test_from_float_to_decimal_2412);
  tcase_add_test(tc_core, test_from_float_to_decimal_2413);
  tcase_add_test(tc_core, test_from_float_to_decimal_2414);
  tcase_add_test(tc_core, test_from_float_to_decimal_2415);
  tcase_add_test(tc_core, test_from_float_to_decimal_2416);
  tcase_add_test(tc_core, test_from_float_to_decimal_2417);
  tcase_add_test(tc_core, test_from_float_to_decimal_2418);
  tcase_add_test(tc_core, test_from_float_to_decimal_2419);
  tcase_add_test(tc_core, test_from_float_to_decimal_2420);
  tcase_add_test(tc_core, test_from_float_to_decimal_2421);
  tcase_add_test(tc_core, test_from_float_to_decimal_2422);
  tcase_add_test(tc_core, test_from_float_to_decimal_2423);
  tcase_add_test(tc_core, test_from_float_to_decimal_2424);
  tcase_add_test(tc_core, test_from_float_to_decimal_2425);
  tcase_add_test(tc_core, test_from_float_to_decimal_2426);
  tcase_add_test(tc_core, test_from_float_to_decimal_2427);
  tcase_add_test(tc_core, test_from_float_to_decimal_2428);
  tcase_add_test(tc_core, test_from_float_to_decimal_2429);
  tcase_add_test(tc_core, test_from_float_to_decimal_2430);
  tcase_add_test(tc_core, test_from_float_to_decimal_2431);
  tcase_add_test(tc_core, test_from_float_to_decimal_2432);
  tcase_add_test(tc_core, test_from_float_to_decimal_2433);
  tcase_add_test(tc_core, test_from_float_to_decimal_2434);
  tcase_add_test(tc_core, test_from_float_to_decimal_2435);
  tcase_add_test(tc_core, test_from_float_to_decimal_2436);
  tcase_add_test(tc_core, test_from_float_to_decimal_2437);
  tcase_add_test(tc_core, test_from_float_to_decimal_2438);
  tcase_add_test(tc_core, test_from_float_to_decimal_2439);
  tcase_add_test(tc_core, test_from_float_to_decimal_2440);
  tcase_add_test(tc_core, test_from_float_to_decimal_2441);
  tcase_add_test(tc_core, test_from_float_to_decimal_2442);
  tcase_add_test(tc_core, test_from_float_to_decimal_2443);
  tcase_add_test(tc_core, test_from_float_to_decimal_2444);
  tcase_add_test(tc_core, test_from_float_to_decimal_2445);
  tcase_add_test(tc_core, test_from_float_to_decimal_2446);
  tcase_add_test(tc_core, test_from_float_to_decimal_2447);
  tcase_add_test(tc_core, test_from_float_to_decimal_2448);
  tcase_add_test(tc_core, test_from_float_to_decimal_2449);
  tcase_add_test(tc_core, test_from_float_to_decimal_2450);
  tcase_add_test(tc_core, test_from_float_to_decimal_2451);
  tcase_add_test(tc_core, test_from_float_to_decimal_2452);
  tcase_add_test(tc_core, test_from_float_to_decimal_2453);
  tcase_add_test(tc_core, test_from_float_to_decimal_2454);
  tcase_add_test(tc_core, test_from_float_to_decimal_2455);
  tcase_add_test(tc_core, test_from_float_to_decimal_2456);
  tcase_add_test(tc_core, test_from_float_to_decimal_2457);
  tcase_add_test(tc_core, test_from_float_to_decimal_2458);
  tcase_add_test(tc_core, test_from_float_to_decimal_2459);
  tcase_add_test(tc_core, test_from_float_to_decimal_2460);
  tcase_add_test(tc_core, test_from_float_to_decimal_2461);
  tcase_add_test(tc_core, test_from_float_to_decimal_2462);
  tcase_add_test(tc_core, test_from_float_to_decimal_2463);
  tcase_add_test(tc_core, test_from_float_to_decimal_2464);
  tcase_add_test(tc_core, test_from_float_to_decimal_2465);
  tcase_add_test(tc_core, test_from_float_to_decimal_2466);
  tcase_add_test(tc_core, test_from_float_to_decimal_2467);
  tcase_add_test(tc_core, test_from_float_to_decimal_2468);
  tcase_add_test(tc_core, test_from_float_to_decimal_2469);
  tcase_add_test(tc_core, test_from_float_to_decimal_2470);
  tcase_add_test(tc_core, test_from_float_to_decimal_2471);
  tcase_add_test(tc_core, test_from_float_to_decimal_2472);
  tcase_add_test(tc_core, test_from_float_to_decimal_2473);
  tcase_add_test(tc_core, test_from_float_to_decimal_2474);
  tcase_add_test(tc_core, test_from_float_to_decimal_2475);
  tcase_add_test(tc_core, test_from_float_to_decimal_2476);
  tcase_add_test(tc_core, test_from_float_to_decimal_2477);
  tcase_add_test(tc_core, test_from_float_to_decimal_2478);
  tcase_add_test(tc_core, test_from_float_to_decimal_2479);
  tcase_add_test(tc_core, test_from_float_to_decimal_2480);
  tcase_add_test(tc_core, test_from_float_to_decimal_2481);
  tcase_add_test(tc_core, test_from_float_to_decimal_2482);
  tcase_add_test(tc_core, test_from_float_to_decimal_2483);
  tcase_add_test(tc_core, test_from_float_to_decimal_2484);
  tcase_add_test(tc_core, test_from_float_to_decimal_2485);
  tcase_add_test(tc_core, test_from_float_to_decimal_2486);
  tcase_add_test(tc_core, test_from_float_to_decimal_2487);
  tcase_add_test(tc_core, test_from_float_to_decimal_2488);
  tcase_add_test(tc_core, test_from_float_to_decimal_2489);
  tcase_add_test(tc_core, test_from_float_to_decimal_2490);
  tcase_add_test(tc_core, test_from_float_to_decimal_2491);
  tcase_add_test(tc_core, test_from_float_to_decimal_2492);
  tcase_add_test(tc_core, test_from_float_to_decimal_2493);
  tcase_add_test(tc_core, test_from_float_to_decimal_2494);
  tcase_add_test(tc_core, test_from_float_to_decimal_2495);
  tcase_add_test(tc_core, test_from_float_to_decimal_2496);
  tcase_add_test(tc_core, test_from_float_to_decimal_2497);
  tcase_add_test(tc_core, test_from_float_to_decimal_2498);
  tcase_add_test(tc_core, test_from_float_to_decimal_2499);
  tcase_add_test(tc_core, test_from_float_to_decimal_2500);
  suite_add_tcase(s, tc_core);
  return s;
}
Suite *test_from_float_to_decimal_suite_6(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_float_to_decimal_6" NOCOLOR);
  tc_core = tcase_create(YELLOW "Core" NOCOLOR);

  tcase_add_test(tc_core, test_from_float_to_decimal_2501);
  tcase_add_test(tc_core, test_from_float_to_decimal_2502);
  tcase_add_test(tc_core, test_from_float_to_decimal_2503);
  tcase_add_test(tc_core, test_from_float_to_decimal_2504);
  tcase_add_test(tc_core, test_from_float_to_decimal_2505);
  tcase_add_test(tc_core, test_from_float_to_decimal_2506);
  tcase_add_test(tc_core, test_from_float_to_decimal_2507);
  tcase_add_test(tc_core, test_from_float_to_decimal_2508);
  tcase_add_test(tc_core, test_from_float_to_decimal_2509);
  tcase_add_test(tc_core, test_from_float_to_decimal_2510);
  tcase_add_test(tc_core, test_from_float_to_decimal_2511);
  tcase_add_test(tc_core, test_from_float_to_decimal_2512);
  tcase_add_test(tc_core, test_from_float_to_decimal_2513);
  tcase_add_test(tc_core, test_from_float_to_decimal_2514);
  tcase_add_test(tc_core, test_from_float_to_decimal_2515);
  tcase_add_test(tc_core, test_from_float_to_decimal_2516);
  tcase_add_test(tc_core, test_from_float_to_decimal_2517);
  tcase_add_test(tc_core, test_from_float_to_decimal_2518);
  tcase_add_test(tc_core, test_from_float_to_decimal_2519);
  tcase_add_test(tc_core, test_from_float_to_decimal_2520);
  tcase_add_test(tc_core, test_from_float_to_decimal_2521);
  tcase_add_test(tc_core, test_from_float_to_decimal_2522);
  tcase_add_test(tc_core, test_from_float_to_decimal_2523);
  tcase_add_test(tc_core, test_from_float_to_decimal_2524);
  tcase_add_test(tc_core, test_from_float_to_decimal_2525);
  tcase_add_test(tc_core, test_from_float_to_decimal_2526);
  tcase_add_test(tc_core, test_from_float_to_decimal_2527);
  tcase_add_test(tc_core, test_from_float_to_decimal_2528);
  tcase_add_test(tc_core, test_from_float_to_decimal_2529);
  tcase_add_test(tc_core, test_from_float_to_decimal_2530);
  tcase_add_test(tc_core, test_from_float_to_decimal_2531);
  tcase_add_test(tc_core, test_from_float_to_decimal_2532);
  tcase_add_test(tc_core, test_from_float_to_decimal_2533);
  tcase_add_test(tc_core, test_from_float_to_decimal_2534);
  tcase_add_test(tc_core, test_from_float_to_decimal_2535);
  tcase_add_test(tc_core, test_from_float_to_decimal_2536);
  tcase_add_test(tc_core, test_from_float_to_decimal_2537);
  tcase_add_test(tc_core, test_from_float_to_decimal_2538);
  tcase_add_test(tc_core, test_from_float_to_decimal_2539);
  tcase_add_test(tc_core, test_from_float_to_decimal_2540);
  tcase_add_test(tc_core, test_from_float_to_decimal_2541);
  tcase_add_test(tc_core, test_from_float_to_decimal_2542);
  tcase_add_test(tc_core, test_from_float_to_decimal_2543);
  tcase_add_test(tc_core, test_from_float_to_decimal_2544);
  tcase_add_test(tc_core, test_from_float_to_decimal_2545);
  tcase_add_test(tc_core, test_from_float_to_decimal_2546);
  tcase_add_test(tc_core, test_from_float_to_decimal_2547);
  tcase_add_test(tc_core, test_from_float_to_decimal_2548);
  tcase_add_test(tc_core, test_from_float_to_decimal_2549);
  tcase_add_test(tc_core, test_from_float_to_decimal_2550);
  tcase_add_test(tc_core, test_from_float_to_decimal_2551);
  tcase_add_test(tc_core, test_from_float_to_decimal_2552);
  tcase_add_test(tc_core, test_from_float_to_decimal_2553);
  tcase_add_test(tc_core, test_from_float_to_decimal_2554);
  tcase_add_test(tc_core, test_from_float_to_decimal_2555);
  tcase_add_test(tc_core, test_from_float_to_decimal_2556);
  tcase_add_test(tc_core, test_from_float_to_decimal_2557);
  tcase_add_test(tc_core, test_from_float_to_decimal_2558);
  tcase_add_test(tc_core, test_from_float_to_decimal_2559);
  tcase_add_test(tc_core, test_from_float_to_decimal_2560);
  tcase_add_test(tc_core, test_from_float_to_decimal_2561);
  tcase_add_test(tc_core, test_from_float_to_decimal_2562);
  tcase_add_test(tc_core, test_from_float_to_decimal_2563);
  tcase_add_test(tc_core, test_from_float_to_decimal_2564);
  tcase_add_test(tc_core, test_from_float_to_decimal_2565);
  tcase_add_test(tc_core, test_from_float_to_decimal_2566);
  tcase_add_test(tc_core, test_from_float_to_decimal_2567);
  tcase_add_test(tc_core, test_from_float_to_decimal_2568);
  tcase_add_test(tc_core, test_from_float_to_decimal_2569);
  tcase_add_test(tc_core, test_from_float_to_decimal_2570);
  tcase_add_test(tc_core, test_from_float_to_decimal_2571);
  tcase_add_test(tc_core, test_from_float_to_decimal_2572);
  tcase_add_test(tc_core, test_from_float_to_decimal_2573);
  tcase_add_test(tc_core, test_from_float_to_decimal_2574);
  tcase_add_test(tc_core, test_from_float_to_decimal_2575);
  tcase_add_test(tc_core, test_from_float_to_decimal_2576);
  tcase_add_test(tc_core, test_from_float_to_decimal_2577);
  tcase_add_test(tc_core, test_from_float_to_decimal_2578);
  tcase_add_test(tc_core, test_from_float_to_decimal_2579);
  tcase_add_test(tc_core, test_from_float_to_decimal_2580);
  tcase_add_test(tc_core, test_from_float_to_decimal_2581);
  tcase_add_test(tc_core, test_from_float_to_decimal_2582);
  tcase_add_test(tc_core, test_from_float_to_decimal_2583);
  tcase_add_test(tc_core, test_from_float_to_decimal_2584);
  tcase_add_test(tc_core, test_from_float_to_decimal_2585);
  tcase_add_test(tc_core, test_from_float_to_decimal_2586);
  tcase_add_test(tc_core, test_from_float_to_decimal_2587);
  tcase_add_test(tc_core, test_from_float_to_decimal_2588);
  tcase_add_test(tc_core, test_from_float_to_decimal_2589);
  tcase_add_test(tc_core, test_from_float_to_decimal_2590);
  tcase_add_test(tc_core, test_from_float_to_decimal_2591);
  tcase_add_test(tc_core, test_from_float_to_decimal_2592);
  tcase_add_test(tc_core, test_from_float_to_decimal_2593);
  tcase_add_test(tc_core, test_from_float_to_decimal_2594);
  tcase_add_test(tc_core, test_from_float_to_decimal_2595);
  tcase_add_test(tc_core, test_from_float_to_decimal_2596);
  tcase_add_test(tc_core, test_from_float_to_decimal_2597);
  tcase_add_test(tc_core, test_from_float_to_decimal_2598);
  tcase_add_test(tc_core, test_from_float_to_decimal_2599);
  tcase_add_test(tc_core, test_from_float_to_decimal_2600);
  tcase_add_test(tc_core, test_from_float_to_decimal_2601);
  tcase_add_test(tc_core, test_from_float_to_decimal_2602);
  tcase_add_test(tc_core, test_from_float_to_decimal_2603);
  tcase_add_test(tc_core, test_from_float_to_decimal_2604);
  tcase_add_test(tc_core, test_from_float_to_decimal_2605);
  tcase_add_test(tc_core, test_from_float_to_decimal_2606);
  tcase_add_test(tc_core, test_from_float_to_decimal_2607);
  tcase_add_test(tc_core, test_from_float_to_decimal_2608);
  tcase_add_test(tc_core, test_from_float_to_decimal_2609);
  tcase_add_test(tc_core, test_from_float_to_decimal_2610);
  tcase_add_test(tc_core, test_from_float_to_decimal_2611);
  tcase_add_test(tc_core, test_from_float_to_decimal_2612);
  tcase_add_test(tc_core, test_from_float_to_decimal_2613);
  tcase_add_test(tc_core, test_from_float_to_decimal_2614);
  tcase_add_test(tc_core, test_from_float_to_decimal_2615);
  tcase_add_test(tc_core, test_from_float_to_decimal_2616);
  tcase_add_test(tc_core, test_from_float_to_decimal_2617);
  tcase_add_test(tc_core, test_from_float_to_decimal_2618);
  tcase_add_test(tc_core, test_from_float_to_decimal_2619);
  tcase_add_test(tc_core, test_from_float_to_decimal_2620);
  tcase_add_test(tc_core, test_from_float_to_decimal_2621);
  tcase_add_test(tc_core, test_from_float_to_decimal_2622);
  tcase_add_test(tc_core, test_from_float_to_decimal_2623);
  tcase_add_test(tc_core, test_from_float_to_decimal_2624);
  tcase_add_test(tc_core, test_from_float_to_decimal_2625);
  tcase_add_test(tc_core, test_from_float_to_decimal_2626);
  tcase_add_test(tc_core, test_from_float_to_decimal_2627);
  tcase_add_test(tc_core, test_from_float_to_decimal_2628);
  tcase_add_test(tc_core, test_from_float_to_decimal_2629);
  tcase_add_test(tc_core, test_from_float_to_decimal_2630);
  tcase_add_test(tc_core, test_from_float_to_decimal_2631);
  tcase_add_test(tc_core, test_from_float_to_decimal_2632);
  tcase_add_test(tc_core, test_from_float_to_decimal_2633);
  tcase_add_test(tc_core, test_from_float_to_decimal_2634);
  tcase_add_test(tc_core, test_from_float_to_decimal_2635);
  tcase_add_test(tc_core, test_from_float_to_decimal_2636);
  tcase_add_test(tc_core, test_from_float_to_decimal_2637);
  tcase_add_test(tc_core, test_from_float_to_decimal_2638);
  tcase_add_test(tc_core, test_from_float_to_decimal_2639);
  tcase_add_test(tc_core, test_from_float_to_decimal_2640);
  tcase_add_test(tc_core, test_from_float_to_decimal_2641);
  tcase_add_test(tc_core, test_from_float_to_decimal_2642);
  tcase_add_test(tc_core, test_from_float_to_decimal_2643);
  tcase_add_test(tc_core, test_from_float_to_decimal_2644);
  tcase_add_test(tc_core, test_from_float_to_decimal_2645);
  tcase_add_test(tc_core, test_from_float_to_decimal_2646);
  tcase_add_test(tc_core, test_from_float_to_decimal_2647);
  tcase_add_test(tc_core, test_from_float_to_decimal_2648);
  tcase_add_test(tc_core, test_from_float_to_decimal_2649);
  tcase_add_test(tc_core, test_from_float_to_decimal_2650);
  tcase_add_test(tc_core, test_from_float_to_decimal_2651);
  tcase_add_test(tc_core, test_from_float_to_decimal_2652);
  tcase_add_test(tc_core, test_from_float_to_decimal_2653);
  tcase_add_test(tc_core, test_from_float_to_decimal_2654);
  tcase_add_test(tc_core, test_from_float_to_decimal_2655);
  tcase_add_test(tc_core, test_from_float_to_decimal_2656);
  tcase_add_test(tc_core, test_from_float_to_decimal_2657);
  tcase_add_test(tc_core, test_from_float_to_decimal_2658);
  tcase_add_test(tc_core, test_from_float_to_decimal_2659);
  tcase_add_test(tc_core, test_from_float_to_decimal_2660);
  tcase_add_test(tc_core, test_from_float_to_decimal_2661);
  tcase_add_test(tc_core, test_from_float_to_decimal_2662);
  tcase_add_test(tc_core, test_from_float_to_decimal_2663);
  tcase_add_test(tc_core, test_from_float_to_decimal_2664);
  tcase_add_test(tc_core, test_from_float_to_decimal_2665);
  tcase_add_test(tc_core, test_from_float_to_decimal_2666);
  tcase_add_test(tc_core, test_from_float_to_decimal_2667);
  tcase_add_test(tc_core, test_from_float_to_decimal_2668);
  tcase_add_test(tc_core, test_from_float_to_decimal_2669);
  tcase_add_test(tc_core, test_from_float_to_decimal_2670);
  tcase_add_test(tc_core, test_from_float_to_decimal_2671);
  tcase_add_test(tc_core, test_from_float_to_decimal_2672);
  tcase_add_test(tc_core, test_from_float_to_decimal_2673);
  tcase_add_test(tc_core, test_from_float_to_decimal_2674);
  tcase_add_test(tc_core, test_from_float_to_decimal_2675);
  tcase_add_test(tc_core, test_from_float_to_decimal_2676);
  tcase_add_test(tc_core, test_from_float_to_decimal_2677);
  tcase_add_test(tc_core, test_from_float_to_decimal_2678);
  tcase_add_test(tc_core, test_from_float_to_decimal_2679);
  tcase_add_test(tc_core, test_from_float_to_decimal_2680);
  tcase_add_test(tc_core, test_from_float_to_decimal_2681);
  tcase_add_test(tc_core, test_from_float_to_decimal_2682);
  tcase_add_test(tc_core, test_from_float_to_decimal_2683);
  tcase_add_test(tc_core, test_from_float_to_decimal_2684);
  tcase_add_test(tc_core, test_from_float_to_decimal_2685);
  tcase_add_test(tc_core, test_from_float_to_decimal_2686);
  tcase_add_test(tc_core, test_from_float_to_decimal_2687);
  tcase_add_test(tc_core, test_from_float_to_decimal_2688);
  tcase_add_test(tc_core, test_from_float_to_decimal_2689);
  tcase_add_test(tc_core, test_from_float_to_decimal_2690);
  tcase_add_test(tc_core, test_from_float_to_decimal_2691);
  tcase_add_test(tc_core, test_from_float_to_decimal_2692);
  tcase_add_test(tc_core, test_from_float_to_decimal_2693);
  tcase_add_test(tc_core, test_from_float_to_decimal_2694);
  tcase_add_test(tc_core, test_from_float_to_decimal_2695);
  tcase_add_test(tc_core, test_from_float_to_decimal_2696);
  tcase_add_test(tc_core, test_from_float_to_decimal_2697);
  tcase_add_test(tc_core, test_from_float_to_decimal_2698);
  tcase_add_test(tc_core, test_from_float_to_decimal_2699);
  tcase_add_test(tc_core, test_from_float_to_decimal_2700);
  tcase_add_test(tc_core, test_from_float_to_decimal_2701);
  tcase_add_test(tc_core, test_from_float_to_decimal_2702);
  tcase_add_test(tc_core, test_from_float_to_decimal_2703);
  tcase_add_test(tc_core, test_from_float_to_decimal_2704);
  tcase_add_test(tc_core, test_from_float_to_decimal_2705);
  tcase_add_test(tc_core, test_from_float_to_decimal_2706);
  tcase_add_test(tc_core, test_from_float_to_decimal_2707);
  tcase_add_test(tc_core, test_from_float_to_decimal_2708);
  tcase_add_test(tc_core, test_from_float_to_decimal_2709);
  tcase_add_test(tc_core, test_from_float_to_decimal_2710);
  tcase_add_test(tc_core, test_from_float_to_decimal_2711);
  tcase_add_test(tc_core, test_from_float_to_decimal_2712);
  tcase_add_test(tc_core, test_from_float_to_decimal_2713);
  tcase_add_test(tc_core, test_from_float_to_decimal_2714);
  tcase_add_test(tc_core, test_from_float_to_decimal_2715);
  tcase_add_test(tc_core, test_from_float_to_decimal_2716);
  tcase_add_test(tc_core, test_from_float_to_decimal_2717);
  tcase_add_test(tc_core, test_from_float_to_decimal_2718);
  tcase_add_test(tc_core, test_from_float_to_decimal_2719);
  tcase_add_test(tc_core, test_from_float_to_decimal_2720);
  tcase_add_test(tc_core, test_from_float_to_decimal_2721);
  tcase_add_test(tc_core, test_from_float_to_decimal_2722);
  tcase_add_test(tc_core, test_from_float_to_decimal_2723);
  tcase_add_test(tc_core, test_from_float_to_decimal_2724);
  tcase_add_test(tc_core, test_from_float_to_decimal_2725);
  tcase_add_test(tc_core, test_from_float_to_decimal_2726);
  tcase_add_test(tc_core, test_from_float_to_decimal_2727);
  tcase_add_test(tc_core, test_from_float_to_decimal_2728);
  tcase_add_test(tc_core, test_from_float_to_decimal_2729);
  tcase_add_test(tc_core, test_from_float_to_decimal_2730);
  tcase_add_test(tc_core, test_from_float_to_decimal_2731);
  tcase_add_test(tc_core, test_from_float_to_decimal_2732);
  tcase_add_test(tc_core, test_from_float_to_decimal_2733);
  tcase_add_test(tc_core, test_from_float_to_decimal_2734);
  tcase_add_test(tc_core, test_from_float_to_decimal_2735);
  tcase_add_test(tc_core, test_from_float_to_decimal_2736);
  tcase_add_test(tc_core, test_from_float_to_decimal_2737);
  tcase_add_test(tc_core, test_from_float_to_decimal_2738);
  tcase_add_test(tc_core, test_from_float_to_decimal_2739);
  tcase_add_test(tc_core, test_from_float_to_decimal_2740);
  tcase_add_test(tc_core, test_from_float_to_decimal_2741);
  tcase_add_test(tc_core, test_from_float_to_decimal_2742);
  tcase_add_test(tc_core, test_from_float_to_decimal_2743);
  tcase_add_test(tc_core, test_from_float_to_decimal_2744);
  tcase_add_test(tc_core, test_from_float_to_decimal_2745);
  tcase_add_test(tc_core, test_from_float_to_decimal_2746);
  tcase_add_test(tc_core, test_from_float_to_decimal_2747);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *from_float_to_decimal_edge_cases(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_float_to_decimal_edge_cases" NOCOLOR);
  tc_core = tcase_create(YELLOW "EDGE" NOCOLOR);

  tcase_add_test(tc_core, test_from_float_to_decimal_edge_case_3);
  tcase_add_test(tc_core, test_from_float_to_decimal_edge_case_4);
  tcase_add_test(tc_core, test_from_float_to_decimal_edge_case_5);
  tcase_add_test(tc_core, test_from_float_to_decimal_edge_case_6);
  tcase_add_loop_test(tc_core, test_from_float_to_decimal_edge_case_big, 0,
                      BIG_MAX);
  tcase_add_loop_test(tc_core, test_from_float_to_decimal_edge_case_big_negate,
                      0, BIG_MAX);

  suite_add_tcase(s, tc_core);
  return s;
}
