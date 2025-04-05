#include "test.h"

START_TEST(s21_div_1) {
  // d
  s21_decimal dec_1 = {{0x1f910006, 0x193, 0x0, 0x80000000}};

  s21_decimal dec_2 = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80020000}};

  s21_decimal dec_check = {{0x21a76b6d, 0x13e0, 0, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2) {
  // 798243387310708881159424
  s21_decimal dec_1 = {{0xfffffffa, 0xffffffff, 0xffffffff, 0x80020000}};

  s21_decimal dec_2 = {{0xffffffff, 0xffffffff, 0xffffffff, 0x80020000}};

  s21_decimal dec_check = {{0xfffffff, 0x3e250261, 0x204fce5e, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3) {
  // -4230106379113924981702098936
  s21_decimal dec_1 = {{0xfffffffa, 0xfffffffa, 0xffffffff, 0x80000000}};

  s21_decimal dec_2 = {{0xffffffff, 0xffffffff, 0xffffffff, 0x801a0000}};

  s21_decimal dec_check = {{0x6e70f828, 0x3e250260, 0x204fce5e, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_5) {
  // -974575980968204075686.4766546
  s21_decimal dec_1 = {{0x23a75252, 0xe8b18d85, 0x1f7d80e9, 0x80070000}};
  // -48229
  s21_decimal dec_2 = {{0xbc65, 0x0, 0x0, 0x80000000}};
  // 20207260796786250.506675996902
  s21_decimal dec_check = {{0x6f54c8e6, 0xcaf79f25, 0x414b0dea, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_6) {
  // 1458447670
  s21_decimal dec_1 = {{0x56ee2536, 0x0, 0x0, 0x0}};
  // 195095.7107410
  s21_decimal dec_2 = {{0x3e1af8d2, 0x1c6, 0x0, 0x70000}};
  // 7475.5496389983035377982277442
  s21_decimal dec_check = {{0x5e3a8742, 0x90063241, 0xf18c4c1b, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_7) {
  // -56738372272616382
  s21_decimal dec_1 = {{0xbc7173be, 0xc9933f, 0x0, 0x80000000}};
  // -18739
  s21_decimal dec_2 = {{0x4933, 0x0, 0x0, 0x80000000}};
  // 3027822843941.3192806446448583
  s21_decimal dec_check = {{0x6cf8bfc7, 0xa6b59829, 0x61d59044, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_8) {
  // 616663890812718.9318957
  s21_decimal dec_1 = {{0x3fd2bd2d, 0x4b4e66b0, 0x14e, 0x70000}};
  // 1445199
  s21_decimal dec_2 = {{0x160d4f, 0x0, 0x0, 0x0}};
  // 426698254.57443503067446074900
  s21_decimal dec_check = {{0xb80f5e14, 0x6e1600c, 0x89dfa701, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_9) {
  // -123470894966
  s21_decimal dec_1 = {{0xbf705776, 0x1c, 0x0, 0x80000000}};
  // 0.7102
  s21_decimal dec_2 = {{0x1bbe, 0x0, 0x0, 0x40000}};
  // -173853696094.05801182765418192
  s21_decimal dec_check = {{0x36ae86d0, 0xffc28308, 0x382cd736, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_11) {
  // -3315685948076
  s21_decimal dec_1 = {{0xfe487aac, 0x303, 0x0, 0x80000000}};
  // -938867753
  s21_decimal dec_2 = {{0x37f5fc29, 0x0, 0x0, 0x80000000}};
  // 3531.5793278459740644644336826
  s21_decimal dec_check = {{0x6c0db4ba, 0xc71ab56d, 0x721c8a1d, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_13) {
  // -83557216388853435.03397
  s21_decimal dec_1 = {{0x3dae2425, 0xf6ee900e, 0x1c4, 0x80050000}};
  // 47700272310
  s21_decimal dec_2 = {{0x1b2864b6, 0xb, 0x0, 0x0}};
  // -1751713.6138305923024188706146
  s21_decimal dec_check = {{0xaf498d62, 0xd8020946, 0x3899d5dc, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_14) {
  // -6049709474714
  s21_decimal dec_1 = {{0x8ec8c39a, 0x580, 0x0, 0x80000000}};
  // 8553468037
  s21_decimal dec_2 = {{0xfdd39085, 0x1, 0x0, 0x0}};
  // -707.28147326260944558200843371
  s21_decimal dec_check = {{0xb8d9ec6b, 0x59b05580, 0xe488f3c5, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_15) {
  // 38500830230248551095951
  s21_decimal dec_1 = {{0x21bc1e8f, 0x225a3445, 0x827, 0x0}};
  // 193668158
  s21_decimal dec_2 = {{0xb8b243e, 0x0, 0x0, 0x0}};
  // 198797936779305.51234938166758
  s21_decimal dec_check = {{0x4bde5de6, 0xb57396e4, 0x403c2e0e, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_16) {
  // -6300684633227354002502577761
  s21_decimal dec_1 = {{0x9331ee61, 0x5fe2f010, 0x145bcdde, 0x80000000}};
  // 3126622727002673952365980033
  s21_decimal dec_2 = {{0x48a7a981, 0xa86eec91, 0xa1a481d, 0x0}};
  // -2.0151726586045395705985488665
  s21_decimal dec_check = {{0xd3fd719, 0x323b3276, 0x411d1e17, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_17) {
  // 4240947600085077418556
  s21_decimal dec_1 = {{0x246b623c, 0xe6f88cc6, 0xe5, 0x0}};
  // -7431913348300256797.83
  s21_decimal dec_2 = {{0x741323a7, 0x49da056e, 0x28, 0x80020000}};
  // -570.64007629408367753946416728
  s21_decimal dec_check = {{0x46c74658, 0x206f411a, 0xb8623da4, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_19) {
  // 1159765415265532
  s21_decimal dec_1 = {{0xed9984fc, 0x41ecc, 0x0, 0x0}};
  // 98.6785163
  s21_decimal dec_2 = {{0x3ad1258b, 0x0, 0x0, 0x70000}};
  // 11752967705145.076243915921140
  s21_decimal dec_check = {{0x10b8d6f4, 0xf41971e6, 0x25f9d3b7, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_20) {
  // -15094538510.7012
  s21_decimal dec_1 = {{0xb60f4e44, 0x8948, 0x0, 0x80040000}};
  // -39
  s21_decimal dec_2 = {{0x27, 0x0, 0x0, 0x80000000}};
  // 387039448.99233846153846153846
  s21_decimal dec_check = {{0xd5436276, 0x2ce8f5f7, 0x7d0f2721, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_21) {
  // 638273186963847343
  s21_decimal dec_1 = {{0xf2a2f8af, 0x8db9a14, 0x0, 0x0}};
  // -483
  s21_decimal dec_2 = {{0x1e3, 0x0, 0x0, 0x80000000}};
  // -1321476577564901.3312629399586
  s21_decimal dec_check = {{0xb3a26022, 0x246cf611, 0x2ab2ff80, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_22) {
  // 50428141045686565805118230428
  s21_decimal dec_1 = {{0xd7b48f9c, 0xce93a8b4, 0xa2f12e3b, 0x0}};
  // -14879153
  s21_decimal dec_2 = {{0xe309b1, 0x0, 0x0, 0x80000000}};
  // -3389180892600981104577.5408337
  s21_decimal dec_check = {{0x82097cd1, 0x5a27f85f, 0x6d82a5b3, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_24) {
  // -88820889570709
  s21_decimal dec_1 = {{0x39924d95, 0x50c8, 0x0, 0x80000000}};
  // 80.80307200006864574
  s21_decimal dec_2 = {{0x4c70bebe, 0x70230496, 0x0, 0x110000}};
  // -1099226642900.8236564776937839
  s21_decimal dec_check = {{0x7286e96f, 0x24bd18f6, 0x238496f5, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_25) {
  // 81688912365148192397.3326824
  s21_decimal dec_1 = {{0x66b0a7e8, 0x208bf940, 0x2a3b700, 0x70000}};
  // -5.63320
  s21_decimal dec_2 = {{0x89878, 0x0, 0x0, 0x80050000}};
  // -14501333587507667470.945942342
  s21_decimal dec_check = {{0x332cfb46, 0xf9c3a194, 0x2edb38d4, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_27) {
  // 94973133110600.01441849475
  s21_decimal dec_1 = {{0xe0aa2083, 0x62e00e93, 0x7db22, 0xb0000}};
  // -62.024915083
  s21_decimal dec_2 = {{0x70f9188b, 0xe, 0x0, 0x80090000}};
  // -1531209401633.3538559936177253
  s21_decimal dec_check = {{0x9ce42465, 0xe3fb769d, 0x3179de07, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_28) {
  // 6123370731622725945825470405
  s21_decimal dec_1 = {{0x5224a7c5, 0x820ab087, 0x13c92230, 0x0}};
  // -628726173418175384467
  s21_decimal dec_2 = {{0xfcfccb93, 0x15541396, 0x22, 0x80000000}};
  // -9739328.4875226253879927007922
  s21_decimal dec_check = {{0x1123d778, 0x3c71066a, 0x1f782f07, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_29) {
  // -993082816648
  s21_decimal dec_1 = {{0x38593888, 0xe7, 0x0, 0x80000000}};
  // -52.860534
  s21_decimal dec_2 = {{0x3269676, 0x0, 0x0, 0x80060000}};
  // 18786847984.698754651248888254
  s21_decimal dec_check = {{0xd29789be, 0xf550e3be, 0x3cb41dcd, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_30) {
  // 8500554126185025
  s21_decimal dec_1 = {{0x7d15d241, 0x1e3335, 0x0, 0x0}};
  // -21122833
  s21_decimal dec_2 = {{0x1424f11, 0x0, 0x0, 0x80000000}};
  // -402434376.40135795231633938497
  s21_decimal dec_check = {{0xc3db9841, 0xe2d16406, 0x82089765, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_31) {
  // 9.88409575141
  s21_decimal dec_1 = {{0x21cd36e5, 0xe6, 0x0, 0xb0000}};
  // -3.36
  s21_decimal dec_2 = {{0x150, 0x0, 0x0, 0x80020000}};
  // -2.9416951641101190476190476190
  s21_decimal dec_check = {{0xc1c0679e, 0xdbf10b23, 0x5f0d21cf, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_32) {
  // 245687422190605948818
  s21_decimal dec_1 = {{0x4c7dd792, 0x519910c6, 0xd, 0x0}};
  // 532394044283678598
  s21_decimal dec_2 = {{0x20fef86, 0x7637190, 0x0, 0x0}};
  // 461.47665404704433280287304947
  s21_decimal dec_check = {{0xa9ececf3, 0x5882183e, 0x951c7442, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_33) {
  // -71741442791755280
  s21_decimal dec_1 = {{0x4d46ce10, 0xfee076, 0x0, 0x80000000}};
  // 66299
  s21_decimal dec_2 = {{0x102fb, 0x0, 0x0, 0x0}};
  // -1082089364722.7753058115507021
  s21_decimal dec_check = {{0x8357d34d, 0x7277b01, 0x22f6d55c, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_36) {
  // 7013345718385808242703807
  s21_decimal dec_1 = {{0x6ae0fdbf, 0x3bb3ddbe, 0x5cd22, 0x0}};
  // 92445
  s21_decimal dec_2 = {{0x1691d, 0x0, 0x0, 0x0}};
  // 75865062668460254667.140537617
  s21_decimal dec_check = {{0x11d09d11, 0xb6ffaa8, 0xf5221be8, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_37) {
  // 3349837991828157308075.0158208
  s21_decimal dec_1 = {{0x91e4f180, 0x1b76f381, 0x6c3d35de, 0x70000}};
  // -32191997780
  s21_decimal dec_2 = {{0x7ecae754, 0x7, 0x0, 0x80000000}};
  // -104058095888.33033611357983328
  s21_decimal dec_check = {{0xb1441260, 0x225888e9, 0x219f7be4, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_38) {
  // -202957506696606751469.381
  s21_decimal dec_1 = {{0x81652f45, 0x5936419b, 0x2afa, 0x80030000}};
  // 42.2204
  s21_decimal dec_2 = {{0x6713c, 0x0, 0x0, 0x40000}};
  // -4807095780632271401.2510776781
  s21_decimal dec_check = {{0x6b6edcd, 0x5a8c6d67, 0x9b535d44, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_39) {
  // 8237
  s21_decimal dec_1 = {{0x202d, 0x0, 0x0, 0x0}};
  // -0.529703
  s21_decimal dec_2 = {{0x81527, 0x0, 0x0, 0x80060000}};
  // -15550.223427090275116433171041
  s21_decimal dec_check = {{0x163a6261, 0x1d439fdc, 0x323ed7e5, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_40) {
  // 77099966810370815385.6561
  s21_decimal dec_1 = {{0x3a1dc231, 0xf9cb3902, 0xa343, 0x40000}};
  // -341215700389
  s21_decimal dec_2 = {{0x720a65a5, 0x4f, 0x0, 0x80000000}};
  // -225956679.96072181579257728662
  s21_decimal dec_check = {{0xfdebce96, 0x815057ce, 0x4902b2d0, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_41) {
  // 7298870216976
  s21_decimal dec_1 = {{0x66910910, 0x6a3, 0x0, 0x0}};
  // -8813621.3608311098051
  s21_decimal dec_2 = {{0xa3550ac3, 0xc722bb4f, 0x4, 0x800d0000}};
  // -828135.21459103488230685670422
  s21_decimal dec_check = {{0x51566602, 0x62bb93ff, 0x1ac22c87, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_42) {
  // 45084380706132560925912808580
  s21_decimal dec_1 = {{0x67693c84, 0x566e894d, 0x91acecf7, 0x0}};
  // -749
  s21_decimal dec_2 = {{0x2ed, 0x0, 0x0, 0x80000000}};
  // -60192764627680321663434991.429
  s21_decimal dec_check = {{0x4977a745, 0xdcaad1f9, 0xc27e49b4, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_43) {
  // 3434350675804728620.7799
  s21_decimal dec_1 = {{0x2bcca537, 0xc3e63cbf, 0x745, 0x40000}};
  // 89570.5492
  s21_decimal dec_2 = {{0x35636194, 0x0, 0x0, 0x40000}};
  // 38342409491497.553760448529214
  s21_decimal dec_check = {{0x8c9dc33e, 0x735584b4, 0x7be41907, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_44) {
  // -4144454306685005
  s21_decimal dec_1 = {{0xf6bce04d, 0xeb95b, 0x0, 0x80000000}};
  // -7.4500
  s21_decimal dec_2 = {{0x12304, 0x0, 0x0, 0x80040000}};
  // 556302591501342.95302013422819
  s21_decimal dec_check = {{0xf9fb8ce3, 0x534ad731, 0xb3c04597, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_45) {
  // -3010254.777813558253801637
  s21_decimal dec_1 = {{0x13ab50a5, 0x3d0dd013, 0x27d72, 0x80120000}};
  // -6957
  s21_decimal dec_2 = {{0x1b2d, 0x0, 0x0, 0x80000000}};
  // 432.69437657230965269536251258
  s21_decimal dec_check = {{0x21ed1d7a, 0x8281f373, 0x8bcfa3d3, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_47) {
  // -7446699651997155167344447367
  s21_decimal dec_1 = {{0xcfaecf87, 0x6f13921, 0x180fc3fd, 0x80000000}};
  // 1471
  s21_decimal dec_2 = {{0x5bf, 0x0, 0x0, 0x0}};
  // -5062338308631648652171616.1570
  s21_decimal dec_check = {{0xfb0f3c22, 0x99a8062, 0xa392ae58, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_48) {
  // -79228162514264337592598696079
  s21_decimal dec_1 = {{0xc7a8908f, 0xffffffff, 0xffffffff, 0x80000000}};
  // 60720709300875088909727
  s21_decimal dec_2 = {{0x414c559f, 0xad1e850a, 0xcdb, 0x0}};
  // -1304796.3936271496212427115404
  s21_decimal dec_check = {{0xb4150b8c, 0x4f975f46, 0x2a2905d6, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_49) {
  // 59575626062727286069633714
  s21_decimal dec_1 = {{0xdacfa2b2, 0x290427a4, 0x3147a1, 0x0}};
  // 5.83119477769107
  s21_decimal dec_2 = {{0x15558393, 0x21258, 0x0, 0xe0000}};
  // 10216710011240090031066719.928
  s21_decimal dec_check = {{0xe426b8, 0x7df6affd, 0x2103107f, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_50) {
  // 22220575567033504124
  s21_decimal dec_1 = {{0xa1c1917c, 0x345f57bf, 0x1, 0x0}};
  // -324.4
  s21_decimal dec_2 = {{0xcac, 0x0, 0x0, 0x80010000}};
  // -68497458591348656.362515413070
  s21_decimal dec_check = {{0x3785384e, 0xb94b4360, 0xdd53c50e, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_51) {
  // 90274558
  s21_decimal dec_1 = {{0x5617afe, 0x0, 0x0, 0x0}};
  // 2293768
  s21_decimal dec_2 = {{0x230008, 0x0, 0x0, 0x0}};
  // 39.356446685105032418274210818
  s21_decimal dec_check = {{0x8a767402, 0xdd734799, 0x7f2ae3c1, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_52) {
  // -52642904947
  s21_decimal dec_1 = {{0x41c2fb73, 0xc, 0x0, 0x80000000}};
  // -113533.55
  s21_decimal dec_2 = {{0xad3d0b, 0x0, 0x0, 0x80020000}};
  // 463677.08000850849814878509480
  s21_decimal dec_check = {{0x3e8a59a8, 0x62823e3d, 0x95d27817, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_53) {
  // -40689510311898
  s21_decimal dec_1 = {{0xc3cee7da, 0x2501, 0x0, 0x80000000}};
  // -9683096
  s21_decimal dec_2 = {{0x93c098, 0x0, 0x0, 0x80000000}};
  // 4202117.8259410006882096387354
  s21_decimal dec_check = {{0xad3e151a, 0xf67027e9, 0x87c71a9d, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_54) {
  // 5992855934641477281.0674708058
  s21_decimal dec_1 = {{0xef499e5a, 0xdd8f5efe, 0xc1a3be0f, 0xa0000}};
  // -18150
  s21_decimal dec_2 = {{0x46e6, 0x0, 0x0, 0x80000000}};
  // -330184899980246.68215247773035
  s21_decimal dec_check = {{0x788e1d6b, 0x6707c380, 0x6ab04139, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_55) {
  // 7590846
  s21_decimal dec_1 = {{0x73d3be, 0x0, 0x0, 0x0}};
  // -43894
  s21_decimal dec_2 = {{0xab76, 0x0, 0x0, 0x80000000}};
  // -172.93584544584681277623365380
  s21_decimal dec_check = {{0x720fef04, 0xaa3eedb2, 0x37e0eaf8, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_57) {
  // -2891251014873219566673.8692427
  s21_decimal dec_1 = {{0x969a414b, 0xc3632d59, 0x5d6bde2b, 0x80070000}};
  // -885861464386016733725.551
  s21_decimal dec_2 = {{0xc886836f, 0xa56e0be3, 0xbb96, 0x80030000}};
  // 3.2637733224766942216947211880
  s21_decimal dec_check = {{0x89039e68, 0x5d5f1989, 0x69754cd7, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_58) {
  // -915797030320.965740024
  s21_decimal dec_1 = {{0xeecce5f8, 0xa53ca2f9, 0x31, 0x80090000}};
  // 72065107
  s21_decimal dec_2 = {{0x44ba053, 0x0, 0x0, 0x0}};
  // -12707.911893074213294708630628
  s21_decimal dec_check = {{0xd2ec2464, 0x1c7c5389, 0x290fbd04, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_59) {
  // 886150441488.878
  s21_decimal dec_1 = {{0xfa4851ee, 0x325f2, 0x0, 0x30000}};
  // -73.2085173425173770
  s21_decimal dec_2 = {{0x2356750a, 0xa28e396, 0x0, 0x80100000}};
  // -12104471906.498065417936185997
  s21_decimal dec_check = {{0x1f462a8d, 0xe4080e1b, 0x271c95a0, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_60) {
  // -42948597004287839578136
  s21_decimal dec_1 = {{0xfea02818, 0x3f840ffa, 0x918, 0x80000000}};
  // -100846671929594934518
  s21_decimal dec_2 = {{0xb7dcf4f6, 0x778759cf, 0x5, 0x80000000}};
  // 425.88016225534899445376472869
  s21_decimal dec_check = {{0xd1bd725, 0xadbb8446, 0x899bfb39, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_61) {
  // 557684921
  s21_decimal dec_1 = {{0x213d98b9, 0x0, 0x0, 0x0}};
  // -4.16
  s21_decimal dec_2 = {{0x1a0, 0x0, 0x0, 0x80020000}};
  // -134058875.24038461538461538462
  s21_decimal dec_check = {{0x3b93d89e, 0xe2086be9, 0x2b51171a, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_62) {
  // 117076382237461963512
  s21_decimal dec_1 = {{0x3c5e2f8, 0x58c2dd59, 0x6, 0x0}};
  // 7947633815
  s21_decimal dec_2 = {{0xd9b74497, 0x1, 0x0, 0x0}};
  // 14730973389.400171239771695496
  s21_decimal dec_check = {{0x9eff6988, 0x94a82a9d, 0x2f992cf3, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_63) {
  // -66568
  s21_decimal dec_1 = {{0x10408, 0x0, 0x0, 0x80000000}};
  // 9.8813
  s21_decimal dec_2 = {{0x181fd, 0x0, 0x0, 0x40000}};
  // -6736.7654053616426988351735096
  s21_decimal dec_check = {{0x621f4538, 0x257185f, 0xd9ad37a4, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_64) {
  // 71690050.0
  s21_decimal dec_1 = {{0x2abb0894, 0x0, 0x0, 0x10000}};
  // -673.927659292518
  s21_decimal dec_2 = {{0x2bc8766, 0x264ef, 0x0, 0x800c0000}};
  // -106376.47677980666729887771722
  s21_decimal dec_check = {{0xecd52c4a, 0x214e4d0b, 0x225f4184, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_65) {
  // 68700972141667932891579
  s21_decimal dec_1 = {{0x1c6ee9bb, 0x4983797f, 0xe8c, 0x0}};
  // -488.008866109756
  s21_decimal dec_2 = {{0x6b1c993c, 0x1bbd7, 0x0, 0x800c0000}};
  // -140778122924956632308.04388678
  s21_decimal dec_check = {{0x3ee16b46, 0x917f2e6c, 0x2d7ce4b5, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_66) {
  // -52937.88866733426
  s21_decimal dec_1 = {{0x44eae572, 0x12ceac, 0x0, 0x800b0000}};
  // 0.17349938
  s21_decimal dec_2 = {{0x108bd32, 0x0, 0x0, 0x80000}};
  // -305118.60427013779530508985104
  s21_decimal dec_check = {{0x9974e310, 0x13bf8c40, 0x6296d1c4, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_67) {
  // -5.192
  s21_decimal dec_1 = {{0x1448, 0x0, 0x0, 0x80030000}};
  // 0.16133
  s21_decimal dec_2 = {{0x3f05, 0x0, 0x0, 0x50000}};
  // -32.182483109155147833632926300
  s21_decimal dec_check = {{0xbad0aa5c, 0x256d9180, 0x67fcb9e1, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_68) {
  // 192826546535648769387605429
  s21_decimal dec_1 = {{0xd3412db5, 0x8890f8b, 0x9f809c, 0x0}};
  // 1712152184091
  s21_decimal dec_2 = {{0xa439051b, 0x18e, 0x0, 0x0}};
  // 112622317295949.04895070592951
  s21_decimal dec_check = {{0xedf6dfb7, 0x69c0d7cd, 0x2463e655, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_69) {
  // 80904091010294
  s21_decimal dec_1 = {{0xf39b04f6, 0x4994, 0x0, 0x0}};
  // 3464
  s21_decimal dec_2 = {{0xd88, 0x0, 0x0, 0x0}};
  // 23355684471.793879907621247113
  s21_decimal dec_check = {{0xc7919889, 0x35d291c8, 0x4b775e90, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_70) {
  // 28016187948.8
  s21_decimal dec_1 = {{0x3af305c0, 0x41, 0x0, 0x10000}};
  // -788076.53861
  s21_decimal dec_2 = {{0x594d5de5, 0x12, 0x0, 0x80050000}};
  // -35550.085018664073131707564411
  s21_decimal dec_check = {{0xfe77817b, 0x76c89d2e, 0x72de5752, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_71) {
  // 201322483705735
  s21_decimal dec_1 = {{0xb206787, 0xb71a, 0x0, 0x0}};
  // -98565
  s21_decimal dec_2 = {{0x18105, 0x0, 0x0, 0x80000000}};
  // -2042535217.4274336732105717040
  s21_decimal dec_check = {{0x34f8b530, 0xe75fd3e, 0x41ff7490, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_73) {
  // 8200752063215397717190
  s21_decimal dec_1 = {{0x3d8b44c6, 0x904c080c, 0x1bc, 0x0}};
  // -65.5890
  s21_decimal dec_2 = {{0xa0212, 0x0, 0x0, 0x80040000}};
  // -125032430182125016652.03006602
  s21_decimal dec_check = {{0xca82ac8a, 0x2c4a6a59, 0x286670b2, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_74) {
  // 2159351138073344041219007
  s21_decimal dec_1 = {{0x9a02f3bf, 0xa8e5910c, 0x1c942, 0x0}};
  // 280
  s21_decimal dec_2 = {{0x118, 0x0, 0x0, 0x0}};
  // 7711968350261943004353.5964286
  s21_decimal dec_check = {{0x8e22787e, 0xbf296052, 0xf92fe833, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_75) {
  // 3501992940925052805942.248593
  s21_decimal dec_1 = {{0x54da8491, 0xba9f3acc, 0xb50c7d9, 0x60000}};
  // -80736414494354.87046157
  s21_decimal dec_2 = {{0xa0188a0d, 0xac486a46, 0x1b5, 0x80080000}};
  // -43375631.217434282556303429643
  s21_decimal dec_check = {{0x8bc1500b, 0xf190cd01, 0x8c277b2f, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_77) {
  // 533429.834710065551
  s21_decimal dec_1 = {{0xc27d218f, 0x7671f9b, 0x0, 0xc0000}};
  // 31
  s21_decimal dec_2 = {{0x1f, 0x0, 0x0, 0x0}};
  // 17207.414022905340354838709677
  s21_decimal dec_check = {{0x8b54c5ad, 0x53175be0, 0x3799a3a7, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_78) {
  // 285070841999806751816445687.1
  s21_decimal dec_1 = {{0xb73855a7, 0x1aaee5df, 0x9360cfd, 0x10000}};
  // 0.1381738
  s21_decimal dec_2 = {{0x15156a, 0x0, 0x0, 0x70000}};
  // 2063132388338503767113922372.4
  s21_decimal dec_check = {{0x631a8ac, 0xc7e97e85, 0x42a9d4c4, 0x10000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_79) {
  // -74813684080
  s21_decimal dec_1 = {{0x6b3e3970, 0x11, 0x0, 0x80000000}};
  // -62
  s21_decimal dec_2 = {{0x3e, 0x0, 0x0, 0x80000000}};
  // 1206672323.8709677419354838710
  s21_decimal dec_check = {{0x149ad6b6, 0x826fc0d2, 0x26fd5c09, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_80) {
  // -117823906835036677556289039
  s21_decimal dec_1 = {{0xcd723e0f, 0xc9be8cf6, 0x61762e, 0x80000000}};
  // -807665810938418.90
  s21_decimal dec_2 = {{0xfd23be2, 0x11ef0c7, 0x0, 0x80020000}};
  // 145882003719.01126791104179076
  s21_decimal dec_check = {{0xc8462b84, 0xcb1fb01e, 0x2f231396, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_81) {
  // 24519261120695509530.000
  s21_decimal dec_1 = {{0xd6153590, 0x311a60a8, 0x531, 0x30000}};
  // 1416
  s21_decimal dec_2 = {{0x588, 0x0, 0x0, 0x0}};
  // 17315862373372534.978813559322
  s21_decimal dec_check = {{0xed0b021a, 0x2efb830d, 0x37f3587c, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_82) {
  // -8357918936263933
  s21_decimal dec_1 = {{0xa541ecfd, 0x1db17b, 0x0, 0x80000000}};
  // -0.48293
  s21_decimal dec_2 = {{0xbca5, 0x0, 0x0, 0x80050000}};
  // 17306688207947182.821526929369
  s21_decimal dec_check = {{0x8052ffd9, 0xade548e2, 0x37ebc1c7, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_83) {
  // -158878413219709401254.4297850
  s21_decimal dec_1 = {{0x9a9f2b7a, 0x630dcc9c, 0x5223620, 0x80070000}};
  // -766429936.9506474
  s21_decimal dec_2 = {{0xc15f26aa, 0x1b3aa3, 0x0, 0x80070000}};
  // 207296721539.64940103049169650
  s21_decimal dec_check = {{0x4f8a4af2, 0x36491622, 0x42fb2ed3, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_85) {
  // -1303.748481636417328674084339
  s21_decimal dec_1 = {{0xb9e995f3, 0xcee91562, 0x4366f7a, 0x80180000}};
  // 134
  s21_decimal dec_2 = {{0x86, 0x0, 0x0, 0x0}};
  // -9.7294662808687860348812264104
  s21_decimal dec_check = {{0xa88a66aa, 0xf12ec5cd, 0x1f70069f, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_87) {
  // 171602304078074584
  s21_decimal dec_1 = {{0xe93652d8, 0x261a762, 0x0, 0x0}};
  // 36720275309959986.3
  s21_decimal dec_2 = {{0x5b0c0ff7, 0x51890f5, 0x0, 0x10000}};
  // 4.6732303238349978818883979782
  s21_decimal dec_check = {{0xd4d58a06, 0xd042ea83, 0x97000e22, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_88) {
  // 87751909386315456099
  s21_decimal dec_1 = {{0x45995e63, 0xc1cd68a8, 0x4, 0x0}};
  // -54125833858060731
  s21_decimal dec_2 = {{0xbc4811bb, 0xc04b28, 0x0, 0x80000000}};
  // -1621.2574131686460144889146469
  s21_decimal dec_check = {{0x780ac65, 0xc201a40d, 0x3462ba1c, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_89) {
  // -764
  s21_decimal dec_1 = {{0x2fc, 0x0, 0x0, 0x80000000}};
  // 48.545
  s21_decimal dec_2 = {{0xbda1, 0x0, 0x0, 0x30000}};
  // -15.737975074672983829436605212
  s21_decimal dec_check = {{0x8c6ea31c, 0x52fc0b71, 0x32da25da, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_90) {
  // -76566512571084148798.9087377
  s21_decimal dec_1 = {{0x55a71c91, 0xa2756963, 0x27957e5, 0x80070000}};
  // -7359424424703
  s21_decimal dec_2 = {{0x7fe0eaff, 0x6b1, 0x0, 0x80000000}};
  // 10403872.388997879939291734495
  s21_decimal dec_check = {{0x1588e1df, 0x52179d42, 0x219de1ac, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_91) {
  // 6986598775730003937795
  s21_decimal dec_1 = {{0x8dea8a03, 0xbe8909f0, 0x17a, 0x0}};
  // 691087671242416399186
  s21_decimal dec_2 = {{0xa02b2352, 0x76c49f74, 0x25, 0x0}};
  // 10.109569402634124731603661410
  s21_decimal dec_check = {{0xb42eb262, 0x7621438c, 0x20aa7097, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_93) {
  // -842815342.09
  s21_decimal dec_1 = {{0x9f922701, 0x13, 0x0, 0x80020000}};
  // 83
  s21_decimal dec_2 = {{0x53, 0x0, 0x0, 0x0}};
  // -10154401.711927710843373493976
  s21_decimal dec_check = {{0x52ea1ed8, 0xd170cd54, 0x20cf8633, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_94) {
  // 40875424075722298824998616146
  s21_decimal dec_1 = {{0xa4057c52, 0x354def08, 0x84135bbb, 0x0}};
  // 830066952730194854
  s21_decimal dec_2 = {{0xe14633a6, 0xb84fd7e, 0x0, 0x0}};
  // 49243526611.049718192850126123
  s21_decimal dec_check = {{0x320c52b, 0xa09cceff, 0x9f1d4a5e, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_95) {
  // 846636528793.9
  s21_decimal dec_1 = {{0x3ab20e03, 0x7b3, 0x0, 0x10000}};
  // 807174969
  s21_decimal dec_2 = {{0x301c8339, 0x0, 0x0, 0x0}};
  // 1048.8884830544094833049759748
  s21_decimal dec_check = {{0x9ec67004, 0x2e51477, 0x21e433c2, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_96) {
  // -197409.18423
  s21_decimal dec_1 = {{0x98a68297, 0x4, 0x0, 0x80050000}};
  // 3187.895
  s21_decimal dec_2 = {{0x30a4b7, 0x0, 0x0, 0x30000}};
  // -61.924619295804912018745912271
  s21_decimal dec_check = {{0xfde6ebcf, 0x8adf8de2, 0xc816d832, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_97) {
  // -481763641922231484857599209.2
  s21_decimal dec_1 = {{0xc8d6b11c, 0x992a951f, 0xf910e31, 0x80010000}};
  // 37450023514803815
  s21_decimal dec_2 = {{0x146e0e67, 0x850c99, 0x0, 0x0}};
  // -12864174617.454983004032023371
  s21_decimal dec_check = {{0xaeef3b4b, 0x5fb684f7, 0x2990feef, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_98) {
  // -30766185274439
  s21_decimal dec_1 = {{0x4f8b5c47, 0x1bfb, 0x0, 0x80000000}};
  // -1502252592149
  s21_decimal dec_2 = {{0xc53b6c15, 0x15d, 0x0, 0x80000000}};
  // 20.480034739315979708319197910
  s21_decimal dec_check = {{0xa584ead6, 0xd8e55512, 0x422cb00b, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_99) {
  // 4274194724
  s21_decimal dec_1 = {{0xfec30924, 0x0, 0x0, 0x0}};
  // 72.1
  s21_decimal dec_2 = {{0x2d1, 0x0, 0x0, 0x10000}};
  // 59281480.221914008321775312067
  s21_decimal dec_check = {{0xfb7f1cc3, 0x3cdf40b1, 0xbf8c7dba, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_101) {
  // 1034765255187589231626
  s21_decimal dec_1 = {{0xfcaff40a, 0x1840ad2b, 0x38, 0x0}};
  // -71141
  s21_decimal dec_2 = {{0x115e5, 0x0, 0x0, 0x80000000}};
  // -14545272841084455.259639307853
  s21_decimal dec_check = {{0x58bade4d, 0xaf562b42, 0x2eff9154, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_102) {
  // -7290672713377.35
  s21_decimal dec_1 = {{0x33b9b707, 0x29715, 0x0, 0x80020000}};
  // 69238880792
  s21_decimal dec_2 = {{0x1ef57a18, 0x10, 0x0, 0x0}};
  // -105.29737959339933520050767027
  s21_decimal dec_check = {{0x11bc4b3, 0x8f9bdacd, 0x2205febe, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_103) {
  // 2303067616857
  s21_decimal dec_1 = {{0x3986f659, 0x218, 0x0, 0x0}};
  // -63403
  s21_decimal dec_2 = {{0xf7ab, 0x0, 0x0, 0x80000000}};
  // -36324268.833604088134630853430
  s21_decimal dec_check = {{0x55974b36, 0x2ac3f5fe, 0x755ebb1f, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_104) {
  // -7843850705056428692462240272
  s21_decimal dec_1 = {{0x75fe0210, 0xc0f2ed81, 0x195847fe, 0x80000000}};
  // 44
  s21_decimal dec_2 = {{0x2c, 0x0, 0x0, 0x0}};
  // -178269334205827924828687278.91
  s21_decimal dec_check = {{0xc6589053, 0x2ae24a54, 0x399a17fd, 0x80020000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_105) {
  // -205270968434
  s21_decimal dec_1 = {{0xcb1a6872, 0x2f, 0x0, 0x80000000}};
  // -0.478
  s21_decimal dec_2 = {{0x1de, 0x0, 0x0, 0x80030000}};
  // 429437172456.06694560669456067
  s21_decimal dec_check = {{0xe7b156c3, 0x9d4fdfee, 0x8ac235d8, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_106) {
  // -35536280.982485444042
  s21_decimal dec_1 = {{0x3783a5ca, 0xed2a3b46, 0x1, 0x800c0000}};
  // -877
  s21_decimal dec_2 = {{0x36d, 0x0, 0x0, 0x80000000}};
  // 40520.274780485112932725199544
  s21_decimal dec_check = {{0xf2f892b8, 0x55e86d01, 0x82ed95f1, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_107) {
  // -5622436982637099530416524586
  s21_decimal dec_1 = {{0xb5238d2a, 0x8fd8a356, 0x122ac557, 0x80000000}};
  // 97909173
  s21_decimal dec_2 = {{0x5d5f9b5, 0x0, 0x0, 0x0}};
  // -57425027812635078946.244644371
  s21_decimal dec_check = {{0x304dce13, 0x7997dab5, 0xb98cdea3, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_109) {
  // -15400496396395201980358
  s21_decimal dec_1 = {{0xcb6c67c6, 0xdcd23531, 0x342, 0x80000000}};
  // 575876587.9
  s21_decimal dec_2 = {{0x573fcb37, 0x1, 0x0, 0x10000}};
  // -26742702724823.173837447820302
  s21_decimal dec_check = {{0x8108f40e, 0x9e8eb7dc, 0x56690b93, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_110) {
  // 5925468272728838494163691381
  s21_decimal dec_1 = {{0xd301e775, 0xb6de1f2b, 0x13256eb6, 0x0}};
  // 5713947647328635909756.271270
  s21_decimal dec_2 = {{0xee11baa6, 0xa29662a6, 0x1276777a, 0x60000}};
  // 1037018.2995112130473235192522
  s21_decimal dec_check = {{0xe31a1aca, 0x9e5f36d5, 0x218203aa, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_112) {
  // 41377836498206
  s21_decimal dec_1 = {{0x73efd1e, 0x25a2, 0x0, 0x0}};
  // -8949311668874
  s21_decimal dec_2 = {{0xac8b028a, 0x823, 0x0, 0x80000000}};
  // -4.6235775475469778022087699852
  s21_decimal dec_check = {{0x49bead8c, 0xda523710, 0x9565564a, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_113) {
  // 518408085724839199413298
  s21_decimal dec_1 = {{0xbc089432, 0xf5695afc, 0x6dc6, 0x0}};
  // -18889
  s21_decimal dec_2 = {{0x49c9, 0x0, 0x0, 0x80000000}};
  // -27444972509123786299.608131717
  s21_decimal dec_check = {{0x9d87e885, 0xe8ebc808, 0x58adf2fc, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_114) {
  // -79658958702
  s21_decimal dec_1 = {{0x8c0b3f6e, 0x12, 0x0, 0x80000000}};
  // 68
  s21_decimal dec_2 = {{0x44, 0x0, 0x0, 0x0}};
  // -1171455275.0294117647058823529
  s21_decimal dec_check = {{0x85156969, 0x1407f0ce, 0x25da0d09, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_115) {
  // -2330850644412.5138148
  s21_decimal dec_1 = {{0xfefb6ce4, 0x4378731d, 0x1, 0x80070000}};
  // -7161428258
  s21_decimal dec_2 = {{0xaadab922, 0x1, 0x0, 0x80000000}};
  // 325.47287502443815095187119865
  s21_decimal dec_check = {{0x1d0d9ef9, 0xeed8bbf5, 0x692a7c36, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_116) {
  // -435062
  s21_decimal dec_1 = {{0x6a376, 0x0, 0x0, 0x80000000}};
  // -59.1
  s21_decimal dec_2 = {{0x24f, 0x0, 0x0, 0x80010000}};
  // 7361.4551607445008460236886633
  s21_decimal dec_check = {{0x98f29269, 0xf7874900, 0xeddc87a6, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_117) {
  // -2855967189105798268146.455935
  s21_decimal dec_1 = {{0xe8ec957f, 0x8c7d9623, 0x93a6693, 0x80060000}};
  // -900.48576
  s21_decimal dec_2 = {{0x55e0840, 0x0, 0x0, 0x80050000}};
  // 3171585066604271752.3333805245
  s21_decimal dec_check = {{0xe066f4bd, 0xb7abf0cb, 0x667abc9d, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_118) {
  // 52081363594708.137
  s21_decimal dec_1 = {{0x687b04a9, 0xb907b9, 0x0, 0x30000}};
  // 0.3294
  s21_decimal dec_2 = {{0xcde, 0x0, 0x0, 0x40000}};
  // 158109786262016.20218579234973
  s21_decimal dec_check = {{0x17bbb09d, 0xc850d932, 0x331688f4, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_119) {
  // -1116747033490
  s21_decimal dec_1 = {{0x34f6b92, 0x104, 0x0, 0x80000000}};
  // -181833598250.355074
  s21_decimal dec_2 = {{0xb7f18982, 0x28600b1, 0x0, 0x80060000}};
  // 6.1415879366387629729754079036
  s21_decimal dec_check = {{0x79b75f3c, 0xb50ec62b, 0xc6720653, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_120) {
  // 5046665402910113745215
  s21_decimal dec_1 = {{0x46ef493f, 0x948d3591, 0x111, 0x0}};
  // 793407841487.7267218
  s21_decimal dec_2 = {{0x22da9512, 0x6e1b8248, 0x0, 0x70000}};
  // 6360745557.3505079165514862618
  s21_decimal dec_check = {{0x642ad01a, 0xf416a80d, 0xcd86daa3, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_121) {
  // 469755731863815051
  s21_decimal dec_1 = {{0x68f2438b, 0x684e859, 0x0, 0x0}};
  // -7246174.4
  s21_decimal dec_2 = {{0x451adb0, 0x0, 0x0, 0x80010000}};
  // -64828101827.609207280465123776
  s21_decimal dec_check = {{0x8be099c0, 0xfaf2fc08, 0xd1788c89, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_122) {
  // 26519516770843188332.527
  s21_decimal dec_1 = {{0x28107ef, 0xa039fca9, 0x59d, 0x30000}};
  // 0.4069492433182256
  s21_decimal dec_2 = {{0x8ae55e30, 0xe752e, 0x0, 0x100000}};
  // 65166644750597296741.454621372
  s21_decimal dec_check = {{0x835eaabc, 0x9c03dfde, 0xd29095ca, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_123) {
  // 12104697245837652098234
  s21_decimal dec_1 = {{0x9a7f7cba, 0x326b7ba7, 0x290, 0x0}};
  // 2599170350023166
  s21_decimal dec_2 = {{0x816c81fe, 0x93bee, 0x0, 0x0}};
  // 4657138.8619179057730320791767
  s21_decimal dec_check = {{0x8e5af8d7, 0xd43b6951, 0x967af323, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_124) {
  // 85176426155901
  s21_decimal dec_1 = {{0xae9fcf7d, 0x4d77, 0x0, 0x0}};
  // 6855111203273.76
  s21_decimal dec_2 = {{0xfed112d0, 0x26f77, 0x0, 0x20000}};
  // 12.425243534375304477468360136
  s21_decimal dec_check = {{0xb3957dc8, 0xae7aa05b, 0x2825eba9, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_125) {
  // -3396246095388715
  s21_decimal dec_1 = {{0x2a15e02b, 0xc10de, 0x0, 0x80000000}};
  // -7093854836
  s21_decimal dec_2 = {{0xa6d3a274, 0x1, 0x0, 0x80000000}};
  // 478758.89398714431206891981571
  s21_decimal dec_check = {{0xf9580b03, 0xc9c0a639, 0x9ab201ec, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_126) {
  // -384822364.3
  s21_decimal dec_1 = {{0xe55f3b9b, 0x0, 0x0, 0x80010000}};
  // -7938773.83
  s21_decimal dec_2 = {{0x2f519b87, 0x0, 0x0, 0x80020000}};
  // 48.473778512972197874038691439
  s21_decimal dec_check = {{0x18b7566f, 0x9e0621f0, 0x9ca091de, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_127) {
  // 17550461394415355500073643
  s21_decimal dec_1 = {{0x825e92ab, 0x6b293315, 0xe8474, 0x0}};
  // -281291593.68113447485479
  s21_decimal dec_2 = {{0x2173c027, 0xe28142a0, 0x5f4, 0x800e0000}};
  // -62392413384063461.060482552109
  s21_decimal dec_check = {{0x8541d12d, 0xe179b5d1, 0xc999cb72, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_128) {
  // 10531718142068335891072.4420
  s21_decimal dec_1 = {{0x499eb944, 0xd845f9ca, 0x571dc7, 0x40000}};
  // -5709807428458243541957
  s21_decimal dec_2 = {{0x9439cbc5, 0x877ef453, 0x135, 0x80000000}};
  // -1.8444962065755867058017696064
  s21_decimal dec_check = {{0x44347940, 0x27bf36ad, 0x3b9950a5, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_129) {
  // -10300063519296128.881981
  s21_decimal dec_1 = {{0x7595153d, 0x5e188eb9, 0x22e, 0x80060000}};
  // -52102699427
  s21_decimal dec_2 = {{0x219019a3, 0xc, 0x0, 0x80000000}};
  // 197687.71354596189341084367844
  s21_decimal dec_check = {{0x325d3be4, 0x804963cf, 0x3fe0582a, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_130) {
  // -9154154598390529526.046349
  s21_decimal dec_1 = {{0x6cc39e8d, 0xb7138e79, 0x79277, 0x80060000}};
  // 205299040482723112
  s21_decimal dec_2 = {{0xbcb38528, 0x2d95e63, 0x0, 0x0}};
  // -44.589368644228490946616949652
  s21_decimal dec_check = {{0x960efb94, 0xb104b4e2, 0x90137615, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_131) {
  // 227680164817036271
  s21_decimal dec_1 = {{0x525263ef, 0x328e1e7, 0x0, 0x0}};
  // -485549144844436.38
  s21_decimal dec_2 = {{0xfdf1d9f6, 0xac806f, 0x0, 0x80020000}};
  // -468.91270890814158361200852742
  s21_decimal dec_check = {{0xfb27f06, 0x857735fd, 0x97838cd8, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_132) {
  // -9339392609225964005
  s21_decimal dec_1 = {{0x8ad279e5, 0x819c3018, 0x0, 0x80000000}};
  // -0.85348037674
  s21_decimal dec_2 = {{0xdf23b42a, 0x13, 0x0, 0x800b0000}};
  // 10942715103655007561.996123042
  s21_decimal dec_check = {{0xe2153ba2, 0x69e3fc9c, 0x235b9a0e, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_133) {
  // -94354886168427
  s21_decimal dec_1 = {{0xb5790f6b, 0x55d0, 0x0, 0x80000000}};
  // 54788
  s21_decimal dec_2 = {{0xd604, 0x0, 0x0, 0x0}};
  // -1722181612.1856428414981382785
  s21_decimal dec_check = {{0x3bc82281, 0xac5253ea, 0x37a58d6a, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_134) {
  // 8813333455.3694139525833523
  s21_decimal dec_1 = {{0x4a3f2333, 0xa3bb35c3, 0x48e6f5, 0x100000}};
  // -808704286.890013
  s21_decimal dec_2 = {{0x23bf981d, 0x2df83, 0x0, 0x80060000}};
  // -10.898091673610804491121467065
  s21_decimal dec_check = {{0xd3461eb9, 0x6c7af303, 0x2336b0ad, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_135) {
  // 53377262692.700303227
  s21_decimal dec_1 = {{0x391caf7b, 0xe4c2219d, 0x2, 0x90000}};
  // -0.000144672
  s21_decimal dec_2 = {{0x23520, 0x0, 0x0, 0x80090000}};
  // -368953651658235.89379423800044
  s21_decimal dec_check = {{0x1deb0aec, 0x5f20fa6d, 0x77372179, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_136) {
  // 78963367833151832720758
  s21_decimal dec_1 = {{0x1860576, 0x9cdd0666, 0x10b8, 0x0}};
  // 662399708198631
  s21_decimal dec_2 = {{0xf34e76e7, 0x25a72, 0x0, 0x0}};
  // 119208035.35359260975163133123
  s21_decimal dec_check = {{0xc81e4cc3, 0x8a5c37a8, 0x2684a856, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_138) {
  // 7.326799741
  s21_decimal dec_1 = {{0xb4b6177d, 0x1, 0x0, 0x90000}};
  // -0.93662
  s21_decimal dec_2 = {{0x16dde, 0x0, 0x0, 0x80050000}};
  // -7.8225958670538745702632871389
  s21_decimal dec_check = {{0x192b55dd, 0xc499a66d, 0xfcc2ff14, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_139) {
  // 993846851271753721611476
  s21_decimal dec_1 = {{0xefe84d4, 0x8bb7255e, 0xd274, 0x0}};
  // 2529093510670228
  s21_decimal dec_2 = {{0x784ea794, 0x8fc32, 0x0, 0x0}};
  // 392965640.48688620703440547409
  s21_decimal dec_check = {{0xf8cdae51, 0xa3e40e88, 0x7ef95b1d, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_140) {
  // 4455827
  s21_decimal dec_1 = {{0x43fd93, 0x0, 0x0, 0x0}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // 1485275.6666666666666666666667
  s21_decimal dec_check = {{0x88eaaaab, 0x4519ffb4, 0x2ffde990, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_141) {
  // -330055753571532.2
  s21_decimal dec_1 = {{0xef7a1ffa, 0xbb9d6, 0x0, 0x80010000}};
  // 9332187.10842951
  s21_decimal dec_2 = {{0xe9c1ee47, 0x350c1, 0x0, 0x80000}};
  // -35367459.925166078473310215764
  s21_decimal dec_check = {{0x5ab29e54, 0x4ed61165, 0x724746f4, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_143) {
  // -922076601405483312
  s21_decimal dec_1 = {{0x9a792930, 0xccbdfc8, 0x0, 0x80000000}};
  // -689288179349
  s21_decimal dec_2 = {{0x7cc6ee95, 0xa0, 0x0, 0x80000000}};
  // 1337722.9278417931641088163587
  s21_decimal dec_check = {{0xcc2cbf03, 0x465df0be, 0x2b39627c, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_144) {
  // 211382949945358441063729
  s21_decimal dec_1 = {{0x83012531, 0x17b9bc6f, 0x2cc3, 0x0}};
  // 53463924251044521641
  s21_decimal dec_2 = {{0xa1e6a6a9, 0xe5f603d7, 0x2, 0x0}};
  // 3953.7492413162818742787443676
  s21_decimal dec_check = {{0xa7730bdc, 0x72f292a3, 0x7fc0a5ae, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_145) {
  // 24687587078811950095285576303
  s21_decimal dec_1 = {{0x952f626f, 0x36b1b72a, 0x4fc517e9, 0x0}};
  // -932418575697
  s21_decimal dec_2 = {{0x187a5d51, 0xd9, 0x0, 0x80000000}};
  // -26476936133921962.687135408376
  s21_decimal dec_check = {{0xbad2e0f8, 0xdb9fcf00, 0x558d354f, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_146) {
  // 3406074
  s21_decimal dec_1 = {{0x33f8fa, 0x0, 0x0, 0x0}};
  // -59733
  s21_decimal dec_2 = {{0xe955, 0x0, 0x0, 0x80000000}};
  // -57.021646326151373612575963036
  s21_decimal dec_check = {{0x740d379c, 0x469250a4, 0xb83f3349, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_147) {
  // -9400550923931255136762
  s21_decimal dec_1 = {{0xe49961fa, 0x9ad9db0f, 0x1fd, 0x80000000}};
  // -8638496131804.3430968
  s21_decimal dec_2 = {{0xb1d6b038, 0xaed508a1, 0x4, 0x80070000}};
  // 1088216140.9231006803797766253
  s21_decimal dec_check = {{0x474706d, 0xfb1ef04, 0x23298350, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_148) {
  // 91309821750312963470802
  s21_decimal dec_1 = {{0x78d4f5d2, 0xea54bdbd, 0x1355, 0x0}};
  // 43507234031214362929
  s21_decimal dec_2 = {{0x16518131, 0x5bc8bed7, 0x2, 0x0}};
  // 2098.7273446250921501159535030
  s21_decimal dec_check = {{0x82f731b6, 0x3fa62db4, 0x43d04405, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_149) {
  // 769014280008596191125190
  s21_decimal dec_1 = {{0x941f1ec6, 0x58ffc78a, 0xa2d8, 0x0}};
  // 735.731868355978584952315124
  s21_decimal dec_2 = {{0x90aa9cf4, 0x807dbc0a, 0x2609548, 0x180000}};
  // 1045237148320064545751.9046867
  s21_decimal dec_check = {{0xccc3f0d3, 0x7c4f36a2, 0x21c5ffc1, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_150) {
  // 434.4819585
  s21_decimal dec_1 = {{0x2f8af81, 0x1, 0x0, 0x70000}};
  // 239
  s21_decimal dec_2 = {{0xef, 0x0, 0x0, 0x0}};
  // 1.8179161443514644351464435146
  s21_decimal dec_check = {{0x2a5eedca, 0x8d192313, 0x3abd732c, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_151) {
  // 71702777322165890
  s21_decimal dec_1 = {{0xcbb25682, 0xfebd4b, 0x0, 0x0}};
  // -9423.12679
  s21_decimal dec_2 = {{0x382a8ce7, 0x0, 0x0, 0x80050000}};
  // -7609234059999.9387252222253077
  s21_decimal dec_check = {{0x453ed815, 0x66bc8a0c, 0xf5de1be1, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_153) {
  // 9722188010925
  s21_decimal dec_1 = {{0x9f9015ad, 0x8d7, 0x0, 0x0}};
  // -8140
  s21_decimal dec_2 = {{0x1fcc, 0x0, 0x0, 0x80000000}};
  // -1194371991.5141277641277641278
  s21_decimal dec_check = {{0xbbdb123e, 0xfa4c6011, 0x26979d11, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_154) {
  // -539336973774968593419201
  s21_decimal dec_1 = {{0x244d8bc1, 0x84143694, 0x7235, 0x80000000}};
  // 22898733.6
  s21_decimal dec_2 = {{0xda611c8, 0x0, 0x0, 0x10000}};
  // -23553135435182694.706715178345
  s21_decimal dec_check = {{0x9e663569, 0x622e5945, 0x4c1ab26e, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_155) {
  // -14331631235972390171
  s21_decimal dec_1 = {{0x4806dd1b, 0xc6e42ead, 0x0, 0x80000000}};
  // 822584731557327
  s21_decimal dec_2 = {{0xeeb8ddcf, 0x2ec22, 0x0, 0x0}};
  // -17422.680832939336106422839285
  s21_decimal dec_check = {{0x700827f5, 0x7acee270, 0x384bb42c, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_156) {
  // -8272916033605227
  s21_decimal dec_1 = {{0x5d708e6b, 0x1d642c, 0x0, 0x80000000}};
  // 7397166420054.6112
  s21_decimal dec_2 = {{0x301e3740, 0x106ccd6, 0x0, 0x40000}};
  // -1118.3898757741008599365979146
  s21_decimal dec_check = {{0x1bac0c0a, 0x80026936, 0x24231aae, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_157) {
  // 77632489761412
  s21_decimal dec_1 = {{0x38f9aa84, 0x469b, 0x0, 0x0}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // 12938748293568.666666666666667
  s21_decimal dec_check = {{0xe139aaab, 0x74de0aa1, 0x29ceae86, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_158) {
  // 9640108.4068498
  s21_decimal dec_1 = {{0x205f3292, 0x57ad, 0x0, 0x70000}};
  // -5249
  s21_decimal dec_2 = {{0x1481, 0x0, 0x0, 0x80000000}};
  // -1836.5609462468660697275671556
  s21_decimal dec_check = {{0x5b65a404, 0xe9545371, 0x3b57ad13, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_159) {
  // 5884098704208.62931582
  s21_decimal dec_1 = {{0x6129927e, 0xe5d3cb9e, 0x1f, 0x80000}};
  // -70
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x80000000}};
  // -84058552917.266133083142857143
  s21_decimal dec_check = {{0x730f692, 0x71c6b6dd, 0x1b292918, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_160) {
  // -644
  s21_decimal dec_1 = {{0x284, 0x0, 0x0, 0x80000000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 107.33333333333333333333333333
  s21_decimal dec_check = {{0xed555555, 0xe68ab5c0, 0x22ae67bd, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_161) {
  // -2077838427486
  s21_decimal dec_1 = {{0xc8d2455e, 0x1e3, 0x0, 0x80000000}};
  // -64.1945
  s21_decimal dec_2 = {{0x9cb99, 0x0, 0x0, 0x80040000}};
  // 32367857487.572922913956803153
  s21_decimal dec_check = {{0x55efb251, 0x561d89cb, 0x6896106e, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_162) {
  // 2839943152074115538721297
  s21_decimal dec_1 = {{0xadf39a11, 0xa07363b7, 0x25961, 0x0}};
  // -2991.082197854120361461
  s21_decimal dec_2 = {{0x180bdf5, 0x259aa384, 0xa2, 0x80120000}};
  // -949470112894779060697.00425274
  s21_decimal dec_check = {{0x3606b89f, 0x8e275fe0, 0x1eadd52b, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_163) {
  // -4805080.6
  s21_decimal dec_1 = {{0x2dd3276, 0x0, 0x0, 0x80010000}};
  // -389
  s21_decimal dec_2 = {{0x185, 0x0, 0x0, 0x80000000}};
  // 12352.392287917737789203084833
  s21_decimal dec_check = {{0xf882f621, 0xb29b29a5, 0x27e9a8cf, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_165) {
  // 922643007575185.80842115517
  s21_decimal dec_1 = {{0x5c0a31bd, 0xc426331e, 0x4c51b9, 0xb0000}};
  // -5198678.6567
  s21_decimal dec_2 = {{0x1aa76907, 0xc, 0x0, 0x80040000}};
  // -177476445.17056148984673118582
  s21_decimal dec_check = {{0x8864a976, 0x183a1739, 0x395881e9, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_166) {
  // 239898762199500.20550
  s21_decimal dec_1 = {{0x77b637c6, 0x4ced2951, 0x1, 0x50000}};
  // -440764956.984
  s21_decimal dec_2 = {{0x9fa38138, 0x66, 0x0, 0x80030000}};
  // -544278.21086558988144297832212
  s21_decimal dec_check = {{0x1c3eef14, 0x48f475e3, 0xafdda36d, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_167) {
  // 86401087151637933424.5067
  s21_decimal dec_1 = {{0x740efacb, 0x1f89de5b, 0xb6f6, 0x40000}};
  // 67.59
  s21_decimal dec_2 = {{0x1a67, 0x0, 0x0, 0x20000}};
  // 1278311690363040885.1088430241
  s21_decimal dec_check = {{0x319f54a1, 0xe711a889, 0x294df24b, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_168) {
  // 1043407964190708704
  s21_decimal dec_1 = {{0xe56693e0, 0xe7aee03, 0x0, 0x0}};
  // 7358440.6785
  s21_decimal dec_2 = {{0x21f8f101, 0x11, 0x0, 0x40000}};
  // 141797428256.68941132036605845
  s21_decimal dec_check = {{0x4eb48795, 0xd8035060, 0x2dd13556, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_169) {
  // -9298365300.9473
  s21_decimal dec_1 = {{0x719b8841, 0x5491, 0x0, 0x80040000}};
  // -79
  s21_decimal dec_2 = {{0x4f, 0x0, 0x0, 0x80000000}};
  // 117700826.59426962025316455696
  s21_decimal dec_check = {{0x9b3d9510, 0x7bf6bee8, 0x2607fbf3, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_170) {
  // 6909072591482.91096250
  s21_decimal dec_1 = {{0xa0a53eba, 0x7443ab9c, 0x25, 0x80000}};
  // -853
  s21_decimal dec_2 = {{0x355, 0x0, 0x0, 0x80000000}};
  // -8099733401.5039987837045720985
  s21_decimal dec_check = {{0x5cb4a0c2, 0x85f090fd, 0x1a2bf143, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_171) {
  // -3353.1417359
  s21_decimal dec_1 = {{0xcea0d30f, 0x7, 0x0, 0x80070000}};
  // 77.176
  s21_decimal dec_2 = {{0x12d78, 0x0, 0x0, 0x30000}};
  // -43.447985590079817559863169897
  s21_decimal dec_check = {{0x4b939369, 0x581b9f2e, 0x8c6354d2, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_173) {
  // -44126938313392334051460241
  s21_decimal dec_1 = {{0x6d9fc491, 0x1e859329, 0x24803e, 0x80000000}};
  // 24955941134690469245771070
  s21_decimal dec_2 = {{0x877a5d3e, 0x479c8e0f, 0x14a4a0, 0x0}};
  // -1.7681937168882348538313905370
  s21_decimal dec_check = {{0x7c8914da, 0x9cdb52a0, 0x392227d6, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_174) {
  // -892587929606578135585
  s21_decimal dec_1 = {{0xf9766221, 0x632558d7, 0x30, 0x80000000}};
  // 27307
  s21_decimal dec_2 = {{0x6aab, 0x0, 0x0, 0x0}};
  // -32687147237213100.508477679716
  s21_decimal dec_check = {{0x69b86864, 0x58d4fc09, 0x699e2caa, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_175) {
  // -469364398894701103327555
  s21_decimal dec_1 = {{0xdf5ca943, 0x4b884b90, 0x6364, 0x80000000}};
  // 3340005.901460
  s21_decimal dec_2 = {{0xa7dd8494, 0x309, 0x0, 0x60000}};
  // -140528014842587613.88935782530
  s21_decimal dec_check = {{0x2ccaa082, 0xefe2157c, 0x2d683476, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_176) {
  // 98851445334527443
  s21_decimal dec_1 = {{0xa4b2cdd3, 0x15f30dd, 0x0, 0x0}};
  // 413
  s21_decimal dec_2 = {{0x19d, 0x0, 0x0, 0x0}};
  // 239349746572705.67312348668281
  s21_decimal dec_check = {{0x56c3e179, 0x170479e1, 0x4d568c08, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_177) {
  // 73630233627.1
  s21_decimal dec_1 = {{0x6f0a090f, 0xab, 0x0, 0x10000}};
  // 647923448.63
  s21_decimal dec_2 = {{0x15ecb91f, 0xf, 0x0, 0x20000}};
  // 113.64032862645618123289868315
  s21_decimal dec_check = {{0x8df7381b, 0xe4d3806b, 0x24b81b8f, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_178) {
  // 458967645922831762184437
  s21_decimal dec_1 = {{0x407bd8f5, 0xaf99cc02, 0x6130, 0x0}};
  // 7.340333139799262086247
  s21_decimal dec_2 = {{0x4abfc467, 0xeb95f3e5, 0x18d, 0x150000}};
  // 62526814135221015923476.581824
  s21_decimal dec_check = {{0xdd02cdc0, 0x334037b7, 0xca08f7ea, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_180) {
  // 23859197461773760972677
  s21_decimal dec_1 = {{0x8ea9c785, 0x68e13009, 0x50d, 0x0}};
  // -6.1819776944756245
  s21_decimal dec_2 = {{0x74e2d615, 0xdba0c2, 0x0, 0x80100000}};
  // -3859476471921753816256.5637692
  s21_decimal dec_check = {{0xf22ce63c, 0xc1d31f4f, 0x7cb4d753, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_181) {
  // 782658533792080230
  s21_decimal dec_1 = {{0x2f1ae166, 0xadc8fca, 0x0, 0x0}};
  // -10125.9
  s21_decimal dec_2 = {{0x18b8b, 0x0, 0x0, 0x80010000}};
  // -77292737810177.883447397268391
  s21_decimal dec_check = {{0x86913ba7, 0x8eafa480, 0xf9bf0de0, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_182) {
  // -825
  s21_decimal dec_1 = {{0x339, 0x0, 0x0, 0x80000000}};
  // -47
  s21_decimal dec_2 = {{0x2f, 0x0, 0x0, 0x80000000}};
  // 17.553191489361702127659574468
  s21_decimal dec_check = {{0x3a0ae4c4, 0x574bdb53, 0x38b7a8e1, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_183) {
  // -50904986372600948868613268
  s21_decimal dec_1 = {{0xe718494, 0xd73d17ad, 0x2a1b8c, 0x80000000}};
  // -0.240
  s21_decimal dec_2 = {{0xf0, 0x0, 0x0, 0x80030000}};
  // 212104109885837286952555283.33
  s21_decimal dec_check = {{0x8218738d, 0xa819de55, 0x4488d73b, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_184) {
  // -8492861031733
  s21_decimal dec_1 = {{0x65f70535, 0x7b9, 0x0, 0x80000000}};
  // 86.77302
  s21_decimal dec_2 = {{0x8467b6, 0x0, 0x0, 0x50000}};
  // -97874443366.532592734469769521
  s21_decimal dec_check = {{0x7c96db8, 0xa4de877d, 0x1f9ffbf4, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_186) {
  // -8701874755624620684971.0
  s21_decimal dec_1 = {{0x6630a2ae, 0x4bb6c152, 0x126d, 0x80010000}};
  // 52497
  s21_decimal dec_2 = {{0xcd11, 0x0, 0x0, 0x0}};
  // -165759467314791715.43080556984
  s21_decimal dec_check = {{0x9096d9b8, 0xdd1a81b5, 0x358f4d40, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_187) {
  // 73202843885207626263385
  s21_decimal dec_1 = {{0xa04d2b59, 0x5588cc4e, 0xf80, 0x0}};
  // 15873548248089008902840
  s21_decimal dec_2 = {{0x518d92b8, 0x81bbfdf9, 0x35c, 0x0}};
  // 4.6116244925907098063075373727
  s21_decimal dec_check = {{0x8ae1729f, 0xc6f0573c, 0x950276b6, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_190) {
  // -509021360126082225
  s21_decimal dec_1 = {{0xe966bcb1, 0x710683a, 0x0, 0x80000000}};
  // 306259810.4832641935437485
  s21_decimal dec_2 = {{0x50c56ead, 0xc6a3b519, 0x28887, 0x100000}};
  // -1662057320.9487377209834522385
  s21_decimal dec_check = {{0xd892c711, 0x1582f2dc, 0x35b43747, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_191) {
  // -50207682455328999.35
  s21_decimal dec_1 = {{0x3e8cba5f, 0x45ad5a1e, 0x0, 0x80020000}};
  // -0.669
  s21_decimal dec_2 = {{0x29d, 0x0, 0x0, 0x80030000}};
  // 75048852698548578.998505231689
  s21_decimal dec_check = {{0xcc4cd549, 0xea616c76, 0xf27ef4b8, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_192) {
  // 10807591390444655186
  s21_decimal dec_1 = {{0xc9061252, 0x95fc471b, 0x0, 0x0}};
  // 391354735
  s21_decimal dec_2 = {{0x1753996f, 0x0, 0x0, 0x0}};
  // 27615844204.477697672419882693
  s21_decimal dec_check = {{0x24ce36c5, 0x1367744e, 0x593b4a7a, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_193) {
  // 301183830851016907657
  s21_decimal dec_1 = {{0x2e32db89, 0x53c3ea6b, 0x10, 0x0}};
  // 574507.55437028
  s21_decimal dec_2 = {{0x4bdeb1e4, 0x3440, 0x0, 0x80000}};
  // 524246946032146.94802814834369
  s21_decimal dec_check = {{0xb73296c1, 0x8e3a54f, 0xa964b0e5, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_194) {
  // 36288067683585983285
  s21_decimal dec_1 = {{0xb9798335, 0xf7991d4b, 0x1, 0x0}};
  // -3090.68
  s21_decimal dec_2 = {{0x4b74c, 0x0, 0x0, 0x80020000}};
  // -11741127416486334.167561831053
  s21_decimal dec_check = {{0xb488828d, 0x9e8295e3, 0x25f00870, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_195) {
  // -82866.4418
  s21_decimal dec_1 = {{0x31646a62, 0x0, 0x0, 0x80040000}};
  // -58
  s21_decimal dec_2 = {{0x3a, 0x0, 0x0, 0x80000000}};
  // 1428.7317551724137931034482759
  s21_decimal dec_check = {{0xb70e5847, 0x6db0d40a, 0x2e2a312c, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_197) {
  // 7646063452279164327956647
  s21_decimal dec_1 = {{0x517010a7, 0xee27e386, 0x6531d, 0x0}};
  // -1768600570.771807516503
  s21_decimal dec_2 = {{0x66b1b757, 0xe04370ab, 0x5f, 0x800c0000}};
  // -4323227968281421.7833713874673
  s21_decimal dec_check = {{0xbd15b6f1, 0xae2f0da4, 0x8bb0e751, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_198) {
  // 73099194646195225569499.8
  s21_decimal dec_1 = {{0x59fb9896, 0x271f49d3, 0x9acb, 0x10000}};
  // -5553662861.1639016324616390
  s21_decimal dec_2 = {{0x321c50c6, 0xab6f0880, 0x2df056, 0x80100000}};
  // -13162339247736.683359285726034
  s21_decimal dec_check = {{0xaf86cb52, 0x5e8ecf70, 0x2a87a1c0, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_199) {
  // -4146852185.91
  s21_decimal dec_1 = {{0x8d2a471f, 0x60, 0x0, 0x80020000}};
  // 478
  s21_decimal dec_2 = {{0x1de, 0x0, 0x0, 0x0}};
  // -8675422.9830753138075313807531
  s21_decimal dec_check = {{0xc8531011, 0x4627e9fd, 0x1c082446, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_201) {
  // -86034.104562
  s21_decimal dec_1 = {{0x80840f2, 0x14, 0x0, 0x80060000}};
  // -4652.808079
  s21_decimal dec_2 = {{0x1554378f, 0x1, 0x0, 0x80060000}};
  // 18.490791603957752670502960584
  s21_decimal dec_check = {{0x5eeebdc8, 0x663e29a7, 0x3bbf396d, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_202) {
  // -55125723578514471604026709
  s21_decimal dec_1 = {{0xd3ed7d55, 0x769329e5, 0x2d9953, 0x80000000}};
  // -50945615375281
  s21_decimal dec_2 = {{0xb34eabb1, 0x2e55, 0x0, 0x80000000}};
  // 1082050401637.9332122488166091
  s21_decimal dec_check = {{0xc20d56cb, 0x18ea9cdf, 0x22f682da, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_203) {
  // 90186457923434
  s21_decimal dec_1 = {{0x2bc9bf6a, 0x5206, 0x0, 0x0}};
  // -3738
  s21_decimal dec_2 = {{0xe9a, 0x0, 0x0, 0x80000000}};
  // -24126928283.422685928303905832
  s21_decimal dec_check = {{0xcda84c28, 0x3b27728, 0x4df553cb, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_204) {
  // -922.68074055985619160770
  s21_decimal dec_1 = {{0xa824ec2, 0xdcc0d0b6, 0x1389, 0x80140000}};
  // 253
  s21_decimal dec_2 = {{0xfd, 0x0, 0x0, 0x0}};
  // -3.6469594488531865280936758893
  s21_decimal dec_check = {{0xed794e6d, 0xb4e28425, 0x75d6f106, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_205) {
  // 971745428840781654501258623
  s21_decimal dec_1 = {{0x3006757f, 0x40aa80f8, 0x323cf19, 0x0}};
  // -6177.114782502746994
  s21_decimal dec_2 = {{0xbbe3fb72, 0x55b9852a, 0x0, 0x800f0000}};
  // -157313804754501421541858.94572
  s21_decimal dec_check = {{0xddb9eaac, 0x624ad911, 0x32d4b164, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_207) {
  // 3576624
  s21_decimal dec_1 = {{0x369330, 0x0, 0x0, 0x0}};
  // 5435
  s21_decimal dec_2 = {{0x153b, 0x0, 0x0, 0x0}};
  // 658.07249310027598896044158234
  s21_decimal dec_check = {{0x669fad1a, 0x5c81e09c, 0xd4a27b15, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_208) {
  // -379365650030438326078506979
  s21_decimal dec_1 = {{0xd67f87e3, 0x18b22e91, 0x139cdcd, 0x80000000}};
  // 1.5
  s21_decimal dec_2 = {{0xf, 0x0, 0x0, 0x10000}};
  // -252910433353625550719004652.67
  s21_decimal dec_check = {{0xdbe0b873, 0x6e66cb4f, 0x51b842be, 0x80020000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_209) {
  // 59156307151334547164750195504
  s21_decimal dec_1 = {{0xfd68ab30, 0x7c1e23f8, 0xbf24f34c, 0x0}};
  // 23471885116246389043279300
  s21_decimal dec_2 = {{0x516cb5c4, 0x7117b8f1, 0x136a5d, 0x0}};
  // 2520.3049034348201200023614500
  s21_decimal dec_check = {{0xb0adb424, 0xd0a09c42, 0x516f7939, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_210) {
  // 612608146867779853165
  s21_decimal dec_1 = {{0xd458db6d, 0x35a557d6, 0x21, 0x0}};
  // -6306066539954418075
  s21_decimal dec_2 = {{0x6bf5b19b, 0x5783a61b, 0x0, 0x80000000}};
  // -97.145842497280079076325895107
  s21_decimal dec_check = {{0x9761aac7, 0x6adc985e, 0x1f63b73b, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_212) {
  // 55746321.0074815403053492
  s21_decimal dec_1 = {{0x9c56d1b4, 0x2423dc5f, 0x760c, 0x100000}};
  // 8.4536951689
  s21_decimal dec_2 = {{0xaecb8389, 0x13, 0x0, 0xa0000}};
  // 6594314.0713855767978765828243
  s21_decimal dec_check = {{0x3c81c093, 0x1fbd9dcf, 0xd512e335, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_213) {
  // 79228162514264337592784393213
  s21_decimal dec_1 = {{0xd2ba13fd, 0xffffffff, 0xffffffff, 0x0}};
  // 577162416583902274747130
  s21_decimal dec_2 = {{0xce237afa, 0x98c4984, 0x7a38, 0x0}};
  // 137271.86704775139440960541929
  s21_decimal dec_check = {{0x81914e9, 0x5f1f02f3, 0x2c5adcda, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_214) {
  // -9008.26040596
  s21_decimal dec_1 = {{0xbd6a8914, 0xd1, 0x0, 0x80080000}};
  // 1109.8588403
  s21_decimal dec_2 = {{0x958704f3, 0x2, 0x0, 0x70000}};
  // -8.1165821083382327859807200024
  s21_decimal dec_check = {{0x35b58382, 0xc038a624, 0x1a39e11d, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_215) {
  // 1172659906325387270723088215
  s21_decimal dec_1 = {{0x3faa2f57, 0xe6b71e0f, 0x3ca0064, 0x0}};
  // -985181196081
  s21_decimal dec_2 = {{0x61600f31, 0xe5, 0x0, 0x80000000}};
  // -1190298709506604.3822998964954
  s21_decimal dec_check = {{0x80724ada, 0x607af8f1, 0x2675eb8f, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_216) {
  // 343355650580
  s21_decimal dec_1 = {{0xf1977214, 0x4f, 0x0, 0x0}};
  // -112885272
  s21_decimal dec_2 = {{0x6ba7e18, 0x0, 0x0, 0x80000000}};
  // -3041.6337268514532170325992571
  s21_decimal dec_check = {{0x831aa47b, 0x475d0b1e, 0x6247cdf3, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_217) {
  // 2724
  s21_decimal dec_1 = {{0xaa4, 0x0, 0x0, 0x0}};
  // -1.29
  s21_decimal dec_2 = {{0x81, 0x0, 0x0, 0x80020000}};
  // -2111.6279069767441860465116279
  s21_decimal dec_check = {{0x111dc477, 0x1cd3820c, 0x443afa06, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_218) {
  // 61846593095371866095251685496
  s21_decimal dec_1 = {{0x74390078, 0xbdd03e0f, 0xc7d64d81, 0x0}};
  // 59806252
  s21_decimal dec_2 = {{0x390922c, 0x0, 0x0, 0x0}};
  // 1034115849549840810877.9611452
  s21_decimal dec_check = {{0x5b17a53c, 0x578133f1, 0x216a017d, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_219) {
  // -498016648491576042519055
  s21_decimal dec_1 = {{0x9758fa0f, 0x895f5dcc, 0x6975, 0x80000000}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // -711452354987965775027221.42857
  s21_decimal dec_check = {{0x343a3289, 0x7d4994a0, 0xe5e1f5a0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_220) {
  // 6298632167998.1565186738
  s21_decimal dec_1 = {{0xca7412b2, 0x7ece9c1b, 0xd56, 0xa0000}};
  // 19701091530.01
  s21_decimal dec_2 = {{0xb3a7fee9, 0x1ca, 0x0, 0x20000}};
  // 319.70980686037954875717468455
  s21_decimal dec_check = {{0x111a4127, 0xd091aa69, 0x674dc67f, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_221) {
  // -69.080447
  s21_decimal dec_1 = {{0x41e157f, 0x0, 0x0, 0x80060000}};
  // -29
  s21_decimal dec_2 = {{0x1d, 0x0, 0x0, 0x80000000}};
  // 2.3820843793103448275862068966
  s21_decimal dec_check = {{0xd1069ee6, 0x8bc8a15e, 0x4cf823e1, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_222) {
  // -40600545372696068347.1949611
  s21_decimal dec_1 = {{0xbb194f2b, 0xbfa36085, 0x14fd6ff, 0x80070000}};
  // -6340615445
  s21_decimal dec_2 = {{0x79ee1d15, 0x1, 0x0, 0x80000000}};
  // 6403249925.0072511450337548582
  s21_decimal dec_check = {{0x310c9926, 0xd48b6dd8, 0xcee67123, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_224) {
  // 359733944915
  s21_decimal dec_1 = {{0xc1d06253, 0x53, 0x0, 0x0}};
  // 5398302
  s21_decimal dec_2 = {{0x525f1e, 0x0, 0x0, 0x0}};
  // 66638.351265823957236923758619
  s21_decimal dec_check = {{0x62d7f81b, 0xa9b572ed, 0xd751f3c4, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_225) {
  // 11091559793527359
  s21_decimal dec_1 = {{0x17f8a3f, 0x2767b7, 0x0, 0x0}};
  // -385691201
  s21_decimal dec_2 = {{0x16fd2e41, 0x0, 0x0, 0x80000000}};
  // -28757616.883065369697142766812
  s21_decimal dec_check = {{0x2d30fcdc, 0x19a9085, 0x5cebbe3f, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_226) {
  // -79228162514264337592997563132
  s21_decimal dec_1 = {{0xdf6ecafc, 0xffffffff, 0xffffffff, 0x80000000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 15845632502852867518599512626
  s21_decimal dec_check = {{0x2cafc232, 0x33333333, 0x33333333, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_229) {
  // -17023166331209932233
  s21_decimal dec_1 = {{0xec285dc9, 0xec3e6f95, 0x0, 0x80000000}};
  // 9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  // -1891462925689992470.3333333333
  s21_decimal dec_check = {{0x6fe83955, 0x9abc8444, 0x3d1dd08a, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_231) {
  // -718907883799247094867712
  s21_decimal dec_1 = {{0x3e4e700, 0x13109234, 0x983c, 0x80000000}};
  // -646001
  s21_decimal dec_2 = {{0x9db71, 0x0, 0x0, 0x80000000}};
  // 1112858778545616949.3045862158
  s21_decimal dec_check = {{0xe8e25f0e, 0xaf324ec4, 0x23f55a20, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_233) {
  // -7115752440345518287111425
  s21_decimal dec_1 = {{0x92904501, 0xb675c608, 0x5e2d1, 0x80000000}};
  // 4.553454722001045
  s21_decimal dec_2 = {{0xcb34a895, 0x102d57, 0x0, 0xf0000}};
  // -1562715097608010265800645.5586
  s21_decimal dec_check = {{0xf60a1522, 0xe6b86162, 0x327e79ef, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_234) {
  // -435087045513542
  s21_decimal dec_1 = {{0x98cb5146, 0x18bb5, 0x0, 0x80000000}};
  // -1524437510.08789095623
  s21_decimal dec_2 = {{0x62f864c7, 0x4394ffdc, 0x8, 0x800b0000}};
  // 285408.25231232810309708029580
  s21_decimal dec_check = {{0xbb0e1e8c, 0x2f7466d, 0x5c386ad4, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_235) {
  // 401876529367575261776.6
  s21_decimal dec_1 = {{0x5b9e7726, 0xdb926e44, 0xd9, 0x10000}};
  // -447
  s21_decimal dec_2 = {{0x1bf, 0x0, 0x0, 0x80000000}};
  // -899052638406208639.32125279642
  s21_decimal dec_check = {{0x4591655c, 0xde922e25, 0x1d0cca03, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_236) {
  // 62510.353
  s21_decimal dec_1 = {{0x3b9d511, 0x0, 0x0, 0x30000}};
  // 4.63463887229
  s21_decimal dec_2 = {{0xe899b17d, 0x6b, 0x0, 0xb0000}};
  // 13487.642666992368769519139582
  s21_decimal dec_check = {{0x2fc93afe, 0x10250ee2, 0x2b94b76e, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_237) {
  // 8560720161.19
  s21_decimal dec_1 = {{0x51de50f7, 0xc7, 0x0, 0x20000}};
  // -54931
  s21_decimal dec_2 = {{0xd693, 0x0, 0x0, 0x80000000}};
  // -155844.97207751542844659663942
  s21_decimal dec_check = {{0xafe90446, 0x7ca71e4e, 0x325b31a6, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_238) {
  // -2843065479
  s21_decimal dec_1 = {{0xa975bc87, 0x0, 0x0, 0x80000000}};
  // -70
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x80000000}};
  // 40615221.128571428571428571429
  s21_decimal dec_check = {{0xffa24925, 0x2dc6d548, 0x833c1f9d, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_239) {
  // 64262822073592952727910
  s21_decimal dec_1 = {{0xbf852966, 0xb1cf04e8, 0xd9b, 0x0}};
  // 52130166
  s21_decimal dec_2 = {{0x31b7176, 0x0, 0x0, 0x0}};
  // 1232737721832555.6977491688785
  s21_decimal dec_check = {{0x8952bd51, 0xecee01d, 0x27d4f7aa, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_240) {
  // 43916198280566282
  s21_decimal dec_1 = {{0xb666160a, 0x9c058c, 0x0, 0x0}};
  // -522.994317542
  s21_decimal dec_2 = {{0xc4e3f8e6, 0x79, 0x0, 0x80090000}};
  // -83970698739072.844042820676632
  s21_decimal dec_check = {{0x95a00acf, 0xfd7a01c0, 0x1b21e4b5, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_241) {
  // -2338790830559148049.15
  s21_decimal dec_1 = {{0x15e1e6b3, 0xadb96ae5, 0xc, 0x80020000}};
  // 18.582182629751073143
  s21_decimal dec_2 = {{0x2dbf2977, 0x1e12ca6, 0x1, 0x120000}};
  // -125862008632646749.70932796300
  s21_decimal dec_check = {{0x787edb8c, 0xf6eb1580, 0x28ab0fb3, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_242) {
  // 4969175200013115163489
  s21_decimal dec_1 = {{0xe6638361, 0x6128b497, 0x10d, 0x0}};
  // -38792665
  s21_decimal dec_2 = {{0x24fedd9, 0x0, 0x0, 0x80000000}};
  // -128095741811322.19618036038514
  s21_decimal dec_check = {{0xf2d43b72, 0xca362985, 0x2963d4d7, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_243) {
  // -726274104931400737
  s21_decimal dec_1 = {{0x52003c21, 0xa143e73, 0x0, 0x80000000}};
  // 3965
  s21_decimal dec_2 = {{0xf7d, 0x0, 0x0, 0x0}};
  // -183171274888121.24514501891551
  s21_decimal dec_check = {{0xa54595df, 0xda6b811a, 0x3b2f929e, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_245) {
  // -53900830098644832.666909390948
  s21_decimal dec_1 = {{0xcdbbb864, 0x960d4038, 0xae29b8be, 0x800c0000}};
  // -0.21459408
  s21_decimal dec_2 = {{0x14771d0, 0x0, 0x0, 0x80080000}};
  // 251175755168291840.42220265791
  s21_decimal dec_check = {{0xede6213f, 0x254f9a97, 0x5128c581, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_246) {
  // 5836263212992329845088490980
  s21_decimal dec_1 = {{0x2db495e4, 0xbc7602fd, 0x12dba4ce, 0x0}};
  // 3124043725877856493941
  s21_decimal dec_2 = {{0xf970e175, 0x5ad0e0ca, 0xa9, 0x0}};
  // 1868175.9044049037743806051801
  s21_decimal dec_check = {{0xdeb575d9, 0x1207fc82, 0x3c5d305b, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_247) {
  // 61603432378320733712342018775
  s21_decimal dec_1 = {{0xa4b6ad7, 0xdb61bf07, 0xc70d2a38, 0x0}};
  // 2.07
  s21_decimal dec_2 = {{0xcf, 0x0, 0x0, 0x20000}};
  // 29760112260058325464899525978
  s21_decimal dec_check = {{0x30421d5a, 0x49d3b417, 0x6028fce6, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_248) {
  // 5431467158337798270
  s21_decimal dec_1 = {{0x75ecc07e, 0x4b60729a, 0x0, 0x0}};
  // 272128816
  s21_decimal dec_2 = {{0x10385b30, 0x0, 0x0, 0x0}};
  // 19959176827.263299708767336128
  s21_decimal dec_check = {{0xcf9676c0, 0xdb684eca, 0x407dd817, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_249) {
  // 57031665760345500403802722771
  s21_decimal dec_1 = {{0xcbea51d3, 0xe445a177, 0xb8477cfb, 0x0}};
  // -827350752611293199738
  s21_decimal dec_2 = {{0x37fd7a, 0xd9cc5602, 0x2c, 0x80000000}};
  // -68932874.697148160521699031492
  s21_decimal dec_check = {{0x331f79c4, 0x1daf352e, 0xdebbf001, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_250) {
  // -842629127769321875.299088
  s21_decimal dec_1 = {{0xf685db10, 0x43c61bd, 0xb26f, 0x80060000}};
  // -45193977568130387
  s21_decimal dec_2 = {{0xe2ef7553, 0xa08fae, 0x0, 0x80000000}};
  // 18.644721556075691283786848625
  s21_decimal dec_check = {{0x34855971, 0xd300ab5b, 0x3c3e8d5c, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_251) {
  // 6755211062893245072127.14
  s21_decimal dec_1 = {{0x810f2baa, 0x1292a1ed, 0x8f0c, 0x20000}};
  // -92978469.228064
  s21_decimal dec_2 = {{0x3ca14e20, 0x5490, 0x0, 0x80060000}};
  // -72653498374162.276418233931029
  s21_decimal dec_check = {{0x74999515, 0xcc044631, 0xeac190b6, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_252) {
  // 796545763368.04011152
  s21_decimal dec_1 = {{0x79705c90, 0x516de726, 0x4, 0x80000}};
  // -9477
  s21_decimal dec_2 = {{0x2505, 0x0, 0x0, 0x80000000}};
  // -84050412.933210943496887200591
  s21_decimal dec_check = {{0x4ea8cabb, 0x80a0e7c2, 0x1b287cb9, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_253) {
  // 79355295664278659555929446
  s21_decimal dec_1 = {{0x29d02d66, 0x32a7bdaa, 0x41a423, 0x0}};
  // -8412.983742583496
  s21_decimal dec_2 = {{0x6b7a52c8, 0x1de390, 0x0, 0x800c0000}};
  // -9432479378583689835025.8784223
  s21_decimal dec_check = {{0x8ac14d96, 0xb591ec74, 0x1e7a5d33, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_254) {
  // -2388760440737891175129378663
  s21_decimal dec_1 = {{0xb35b6f67, 0xf84304f3, 0x7b7efb2, 0x80000000}};
  // 3567.70
  s21_decimal dec_2 = {{0x571a2, 0x0, 0x0, 0x20000}};
  // -669551935627404539375333.87420
  s21_decimal dec_check = {{0x9a5f829c, 0xfedb41ac, 0xd85809bb, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_255) {
  // -10041536551989544169.615359196
  s21_decimal dec_1 = {{0x2fb77cdc, 0x3cec7895, 0x20722a13, 0x80090000}};
  // 44733
  s21_decimal dec_2 = {{0xaebd, 0x0, 0x0, 0x0}};
  // -224477154494211.07838989916160
  s21_decimal dec_check = {{0xa1645800, 0xe143b43e, 0x488850a4, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_256) {
  // -7806106976.8279480474854592362
  s21_decimal dec_1 = {{0x137d8f6a, 0x772ec27c, 0xfc3a9a7f, 0x80130000}};
  // 5677525
  s21_decimal dec_2 = {{0x56a1d5, 0x0, 0x0, 0x0}};
  // -1374.9137127230523947469115920
  s21_decimal dec_check = {{0x145a1210, 0x283fb4ab, 0x2c6d0509, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_257) {
  // -3188123470204910795615453884
  s21_decimal dec_1 = {{0xabc542bc, 0xa09de868, 0xa4d2767, 0x80000000}};
  // 1997892196678450057928
  s21_decimal dec_2 = {{0xafe092c8, 0x4e52ef97, 0x6c, 0x0}};
  // -1595743.4918186539285890774519
  s21_decimal dec_check = {{0x2104b5f7, 0x479a1210, 0x338fae48, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_258) {
  // 78478467137042992881233.68993
  s21_decimal dec_1 = {{0x856b6621, 0xd10ad29d, 0x195b962e, 0x50000}};
  // 50769
  s21_decimal dec_2 = {{0xc651, 0x0, 0x0, 0x0}};
  // 1545795015403947150.4507413959
  s21_decimal dec_check = {{0xa5d225c7, 0xf5885740, 0x31f28444, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_259) {
  // 79228162514264337592953620617
  s21_decimal dec_1 = {{0xdcd04889, 0xffffffff, 0xffffffff, 0x0}};
  // 74481861649439808525393272.9
  s21_decimal dec_2 = {{0x7511a6b9, 0x1b04e998, 0x268197a, 0x10000}};
  // 1063.7242512433928516048657804
  s21_decimal dec_check = {{0x993e1d8c, 0xfd239b5, 0x225eebb8, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_260) {
  // -350187529963020
  s21_decimal dec_1 = {{0x6354060c, 0x13e7e, 0x0, 0x80000000}};
  // 0.51345874688
  s21_decimal dec_2 = {{0xf473df00, 0xb, 0x0, 0xb0000}};
  // -682016874950349.27313068427048
  s21_decimal dec_check = {{0xeb230728, 0x76f7a856, 0xdc5f1d17, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_261) {
  // 51735103
  s21_decimal dec_1 = {{0x3156a3f, 0x0, 0x0, 0x0}};
  // -7449
  s21_decimal dec_2 = {{0x1d19, 0x0, 0x0, 0x80000000}};
  // -6945.2413746811652570814874480
  s21_decimal dec_check = {{0x39fc0370, 0x6ec9b56f, 0xe069b0ad, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_262) {
  // 83876444902667006
  s21_decimal dec_1 = {{0xa77232fe, 0x129fd2e, 0x0, 0x0}};
  // 44770527801.91323156915
  s21_decimal dec_2 = {{0x4ad271b3, 0xb396a724, 0xf2, 0xb0000}};
  // 1873474.5606256313852661709398
  s21_decimal dec_check = {{0x5741ba56, 0x5d0263ce, 0x3c8904b2, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_263) {
  // 766225851257.9
  s21_decimal dec_1 = {{0x23262c3, 0x6f8, 0x0, 0x10000}};
  // -0.9836052072980768
  s21_decimal dec_2 = {{0x55cd6120, 0x22f1d6, 0x0, 0x80100000}};
  // -778997351348.60765565419718803
  s21_decimal dec_check = {{0x98730893, 0x768bd3aa, 0xfbb5268f, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_264) {
  // -6356862134529223763
  s21_decimal dec_1 = {{0x66beec53, 0x58381c6e, 0x0, 0x80000000}};
  // -5384209744.986743022
  s21_decimal dec_2 = {{0x7e21a0ee, 0x4ab88e3c, 0x0, 0x80090000}};
  // 1180649052.6206043263116437515
  s21_decimal dec_check = {{0x7e22e80b, 0xe5a8bbe6, 0x2626199d, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_265) {
  // -86559204951889588720353820
  s21_decimal dec_1 = {{0x3a21c21c, 0xe722ac98, 0x47999f, 0x80000000}};
  // 3530735
  s21_decimal dec_2 = {{0x35dfef, 0x0, 0x0, 0x0}};
  // -24515916643953621192.288240267
  s21_decimal dec_check = {{0xa84c028b, 0x4adae66a, 0x4f371748, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_266) {
  // -73789674417363881113
  s21_decimal dec_1 = {{0x9ab40c99, 0x995ed, 0x4, 0x80000000}};
  // 479650540809
  s21_decimal dec_2 = {{0xad666d09, 0x6f, 0x0, 0x0}};
  // -153840490.39725239208867108708
  s21_decimal dec_check = {{0x2919764, 0x86519179, 0x31b56319, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_267) {
  // -64892018608365061463307593950
  s21_decimal dec_1 = {{0xaa6228de, 0x9ba33345, 0xd1ad6b71, 0x80000000}};
  // 943589217.2800293852892950147
  s21_decimal dec_2 = {{0xc94cee83, 0xa78a2f19, 0x1e7d2fe3, 0x130000}};
  // -68771471123230341746.506942531
  s21_decimal dec_check = {{0xa1e94843, 0xd76e15d0, 0xde366d77, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_270) {
  // 4093041457686102.451800
  s21_decimal dec_1 = {{0x72ca658, 0xe25c5fe7, 0xdd, 0x60000}};
  // -383.87
  s21_decimal dec_2 = {{0x95f3, 0x0, 0x0, 0x80020000}};
  // -10662571854237.378414046421966
  s21_decimal dec_check = {{0x4b0d23ce, 0x6eae5af0, 0x2273df6a, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_272) {
  // 123211703431867.6516665673974
  s21_decimal dec_1 = {{0x4885c8f6, 0x44ab117c, 0x3fb2eee, 0xd0000}};
  // 334
  s21_decimal dec_2 = {{0x14e, 0x0, 0x0, 0x0}};
  // 368897315664.27440618732753713
  s21_decimal dec_check = {{0xe51b9331, 0x561d65f5, 0x77327883, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_273) {
  // 1389485345980.16953355182
  s21_decimal dec_1 = {{0x42b20bae, 0x6a478402, 0x1d6c, 0xb0000}};
  // 9302
  s21_decimal dec_2 = {{0x2456, 0x0, 0x0, 0x0}};
  // 149374902.81446673119241238443
  s21_decimal dec_check = {{0xaf1af7ab, 0xbb3523db, 0x3044009a, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_274) {
  // -79228162514264337592562969848
  s21_decimal dec_1 = {{0xc5876cf8, 0xffffffff, 0xffffffff, 0x80000000}};
  // -24500525222586936865328
  s21_decimal dec_2 = {{0xc8b23230, 0x2d171898, 0x530, 0x80000000}};
  // 3233733.2279401181707633843794
  s21_decimal dec_check = {{0x4c625e52, 0x7c518f79, 0x687cd077, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_276) {
  // -1530538574587633963581758895
  s21_decimal dec_1 = {{0x61b6ddaf, 0x61cd4ed5, 0x4f20826, 0x80000000}};
  // 4144703322210
  s21_decimal dec_2 = {{0x391b862, 0x3c5, 0x0, 0x0}};
  // -369275785406887.57376065637359
  s21_decimal dec_check = {{0x8c028bef, 0xec14c9ef, 0x7751c6eb, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_277) {
  // -31794252344991782677410089598
  s21_decimal dec_1 = {{0xab4a0a7e, 0x3fe735ac, 0x66bb96d1, 0x80000000}};
  // 3665584719
  s21_decimal dec_2 = {{0xda7c624f, 0x0, 0x0, 0x0}};
  // -8673719142321583504.3451602729
  s21_decimal dec_check = {{0xebf65a51, 0xe1b7a37c, 0x1c06bb78, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_279) {
  // 6987101848
  s21_decimal dec_1 = {{0xa076b698, 0x1, 0x0, 0x0}};
  // -59
  s21_decimal dec_2 = {{0x3b, 0x0, 0x0, 0x80000000}};
  // -118425455.05084745762711864407
  s21_decimal dec_check = {{0x238d0457, 0x37f3f6a8, 0x2643ec8e, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_280) {
  // 18
  s21_decimal dec_1 = {{0x12, 0x0, 0x0, 0x0}};
  // 7.6
  s21_decimal dec_2 = {{0x4c, 0x0, 0x0, 0x10000}};
  // 2.3684210526315789473684210526
  s21_decimal dec_check = {{0xfd79435e, 0x4fd0eaaf, 0x4c871ea9, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_282) {
  // 42378001182742809281629842
  s21_decimal dec_1 = {{0xb2210e92, 0xc222778, 0x230de4, 0x0}};
  // 2582412
  s21_decimal dec_2 = {{0x27678c, 0x0, 0x0, 0x0}};
  // 16410240187368556714.277133935
  s21_decimal dec_check = {{0x581ede6f, 0x1b91f77f, 0x35063b87, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_284) {
  // 21845684482862456525
  s21_decimal dec_1 = {{0x34479ecd, 0x2f2b764b, 0x1, 0x0}};
  // 339992220092
  s21_decimal dec_2 = {{0x291d91bc, 0x4f, 0x0, 0x0}};
  // 64253483.438389078575586831872
  s21_decimal dec_check = {{0xb9896e00, 0xaee252ac, 0xcf9d3c5c, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_285) {
  // -65646
  s21_decimal dec_1 = {{0x1006e, 0x0, 0x0, 0x80000000}};
  // 76.55047063
  s21_decimal dec_2 = {{0xc846bf97, 0x1, 0x0, 0x80000}};
  // -857.55187995243289335737948029
  s21_decimal dec_check = {{0xdefc1bf3, 0xa1b8ef1e, 0x1bb580bd, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_286) {
  // -38176068311236654395
  s21_decimal dec_1 = {{0x144eb53b, 0x11cca3dd, 0x2, 0x80000000}};
  // -360009.875
  s21_decimal dec_2 = {{0x15755093, 0x0, 0x0, 0x80030000}};
  // 106041725414439.40779402231675
  s21_decimal dec_check = {{0xa7687f7b, 0x579c8f6c, 0x224390e1, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_287) {
  // -29.569359739
  s21_decimal dec_1 = {{0xe2789f7b, 0x6, 0x0, 0x80090000}};
  // -0.12874792
  s21_decimal dec_2 = {{0xc47428, 0x0, 0x0, 0x80080000}};
  // 229.66864038657867249428184937
  s21_decimal dec_check = {{0xca5fbf69, 0x4b6b1f2a, 0x4a35bea2, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_288) {
  // 1640600133789785734218581009
  s21_decimal dec_1 = {{0xfeb90411, 0x7634e757, 0x54d1297, 0x0}};
  // 397987180943960785
  s21_decimal dec_2 = {{0x8152ead1, 0x585ef3b, 0x0, 0x0}};
  // 4122243660.9605097632969593614
  s21_decimal dec_check = {{0x7ef9130e, 0x5d2e934a, 0x8532667e, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_289) {
  // 8950039186934598802343260
  s21_decimal dec_1 = {{0xa3d4055c, 0x98b5391a, 0x7673e, 0x0}};
  // -834989288858.1
  s21_decimal dec_2 = {{0x1c664805, 0x798, 0x0, 0x80010000}};
  // -10718747301746.033588295552575
  s21_decimal dec_check = {{0x9851ce3f, 0x8b37180f, 0x22a25707, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_291) {
  // -19036968189133260873156
  s21_decimal dec_1 = {{0x23585dc4, 0xff0149d6, 0x407, 0x80000000}};
  // 1090863461.13
  s21_decimal dec_2 = {{0x660d8b81, 0x19, 0x0, 0x20000}};
  // -17451284113424.525031745299008
  s21_decimal dec_check = {{0x4b14a240, 0x6bfd2ec2, 0x38635d27, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_292) {
  // 9949787201010361218
  s21_decimal dec_1 = {{0x3af36382, 0x8a14bebe, 0x0, 0x0}};
  // 4021601171.37726
  s21_decimal dec_2 = {{0x32ecc13e, 0x16dc3, 0x0, 0x50000}};
  // 2474086011.2697106456527807098
  s21_decimal dec_check = {{0x3938a27a, 0x2ad4b68d, 0x4ff128ea, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_294) {
  // -4699012817468107444.3
  s21_decimal dec_1 = {{0x49f0ab0b, 0x8c1e789c, 0x2, 0x80010000}};
  // -40821265
  s21_decimal dec_2 = {{0x26ee211, 0x0, 0x0, 0x80000000}};
  // 115111886353.05905988704661651
  s21_decimal dec_check = {{0x48f3f093, 0x508029c2, 0x2531d502, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_295) {
  // 995171381788259581427579188
  s21_decimal dec_1 = {{0x4d7df934, 0xb4ddf20e, 0x3372fbc, 0x0}};
  // -96810532841053470
  s21_decimal dec_2 = {{0xac81dd1e, 0x157f0aa, 0x0, 0x80000000}};
  // -10279577568.508612237553328813
  s21_decimal dec_check = {{0x574862ad, 0x99bb5714, 0x21371138, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_299) {
  // 631540417668437787
  s21_decimal dec_1 = {{0xf06dd71b, 0x8c3aea9, 0x0, 0x0}};
  // -45661038672903
  s21_decimal dec_2 = {{0x49fd7c07, 0x2987, 0x0, 0x80000000}};
  // -13831.056761378884971862973544
  s21_decimal dec_check = {{0x90e45c68, 0x6c40ebaa, 0x2cb0c831, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_301) {
  // -4845422
  s21_decimal dec_1 = {{0x49ef6e, 0x0, 0x0, 0x80000000}};
  // 16884.808724
  s21_decimal dec_2 = {{0xee69bc14, 0x3, 0x0, 0x60000}};
  // -286.96931538897070422033878884
  s21_decimal dec_check = {{0x43decf64, 0xe83121a9, 0x5cb98b9f, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_302) {
  // 79228162514264337592975517559
  s21_decimal dec_1 = {{0xde1e6777, 0xffffffff, 0xffffffff, 0x0}};
  // 622251315674719187721573
  s21_decimal dec_2 = {{0x158d5d65, 0x4fb8d964, 0x83c4, 0x0}};
  // 127325.02209072182050959965013
  s21_decimal dec_check = {{0xd504bb55, 0xd0085632, 0x29241437, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_303) {
  // -162090031301785012.756996149
  s21_decimal dec_1 = {{0x2f46e035, 0x342b0d90, 0x8613e6, 0x80090000}};
  // 583897369.01458757
  s21_decimal dec_2 = {{0x68a3b45, 0xcf7128, 0x0, 0x80000}};
  // -277600208.36424680016920595733
  s21_decimal dec_check = {{0x26d24d15, 0xf468e240, 0x59b28d10, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_304) {
  // -2402485626
  s21_decimal dec_1 = {{0x8f33057a, 0x0, 0x0, 0x80000000}};
  // -647565.820
  s21_decimal dec_2 = {{0x269911fc, 0x0, 0x0, 0x80030000}};
  // 3710.0253778063826778257073544
  s21_decimal dec_check = {{0x333a588, 0x4c095246, 0x77e09c53, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_306) {
  // -933114601952906006731
  s21_decimal dec_1 = {{0x84fb50cb, 0x9591029f, 0x32, 0x80000000}};
  // 522222029666.69561968741611
  s21_decimal dec_2 = {{0x27fc4ceb, 0x4ba0c876, 0x2b327b, 0xe0000}};
  // -1786815854.0696943744491204453
  s21_decimal dec_check = {{0x68842f65, 0x682e077a, 0x39bc31bf, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_307) {
  // 56236
  s21_decimal dec_1 = {{0xdbac, 0x0, 0x0, 0x0}};
  // 48161
  s21_decimal dec_2 = {{0xbc21, 0x0, 0x0, 0x0}};
  // 1.1676667843275679491704906460
  s21_decimal dec_check = {{0xdc1a62dc, 0x274f7347, 0x25bab698, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_308) {
  // 58050536591094516
  s21_decimal dec_1 = {{0xcc8872f4, 0xce3ca7, 0x0, 0x0}};
  // 1.09296323
  s21_decimal dec_2 = {{0x683bac3, 0x0, 0x0, 0x80000}};
  // 53112982209927150.065240529638
  s21_decimal dec_check = {{0x8e885ae6, 0xf597d854, 0xab9e0776, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_311) {
  // 8239401141157775265993284
  s21_decimal dec_1 = {{0xbf079244, 0xd4b350d0, 0x6d0c2, 0x0}};
  // 429724901.15
  s21_decimal dec_2 = {{0x15c2983, 0xa, 0x0, 0x20000}};
  // 19173664637790504.884716253079
  s21_decimal dec_check = {{0x168d2f97, 0xbd73c75d, 0x3df4156a, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_312) {
  // 81437
  s21_decimal dec_1 = {{0x13e1d, 0x0, 0x0, 0x0}};
  // -0.289
  s21_decimal dec_2 = {{0x121, 0x0, 0x0, 0x80030000}};
  // -281788.92733564013840830449827
  s21_decimal dec_check = {{0xe7ee48a3, 0xff90e956, 0x5b0d08a3, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_313) {
  // 6905228801830463548443731
  s21_decimal dec_1 = {{0xcc944c53, 0x341382a1, 0x5b63d, 0x0}};
  // 0.17
  s21_decimal dec_2 = {{0x11, 0x0, 0x0, 0x20000}};
  // 40618992951943903226139594.118
  s21_decimal dec_check = {{0x1ae14d86, 0x22303e48, 0x833f3e54, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_314) {
  // 73493
  s21_decimal dec_1 = {{0x11f15, 0x0, 0x0, 0x0}};
  // 63
  s21_decimal dec_2 = {{0x3f, 0x0, 0x0, 0x0}};
  // 1166.5555555555555555555555556
  s21_decimal dec_check = {{0x518e38e4, 0xd4456630, 0x25b18579, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_315) {
  // -6473810.01517810
  s21_decimal dec_1 = {{0x22a13af2, 0x24cca, 0x0, 0x80080000}};
  // 7076
  s21_decimal dec_2 = {{0x1ba4, 0x0, 0x0, 0x0}};
  // -914.89683651471170152628603731
  s21_decimal dec_check = {{0xdbc9455, 0xdfeb3802, 0x1d8fd968, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_316) {
  // -13923443037994265206
  s21_decimal dec_1 = {{0x6a08aa76, 0xc13a01ac, 0x0, 0x80000000}};
  // -3585
  s21_decimal dec_2 = {{0xe01, 0x0, 0x0, 0x80000000}};
  // 3883805589398679.2764295676430
  s21_decimal dec_check = {{0xa8f9020e, 0xc4c94be3, 0x7d7e163c, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_317) {
  // 4861506900855549782514
  s21_decimal dec_1 = {{0xed36e9f2, 0x8af610f5, 0x107, 0x0}};
  // -3.4399173
  s21_decimal dec_2 = {{0x20ce3c5, 0x0, 0x0, 0x80070000}};
  // -1413262726070638321018.3570402
  s21_decimal dec_check = {{0x75bab3e2, 0xf3046bbb, 0x2daa3c3a, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_319) {
  // 3699043470.714202922812851
  s21_decimal dec_1 = {{0xb79e05b3, 0x8c60e24f, 0x30f4d, 0xf0000}};
  // 920074
  s21_decimal dec_2 = {{0xe0a0a, 0x0, 0x0, 0x0}};
  // 4020.3760466160362349255070788
  s21_decimal dec_check = {{0x88ba1444, 0xf992b91b, 0x81e7c56d, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_320) {
  // 8592692285497205402608
  s21_decimal dec_1 = {{0xf4552bf0, 0xcf8f6b9f, 0x1d1, 0x0}};
  // -82166936
  s21_decimal dec_2 = {{0x4e5c498, 0x0, 0x0, 0x80000000}};
  // -104576033910978.56445088812853
  s21_decimal dec_check = {{0x9e1c4f35, 0xc7efdbf8, 0x21ca53a7, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_325) {
  // -193963403520529390078706
  s21_decimal dec_1 = {{0x19ab8af2, 0xc6f4dfc4, 0x2912, 0x80000000}};
  // -537529
  s21_decimal dec_2 = {{0x833b9, 0x0, 0x0, 0x80000000}};
  // 360842677363508555.03369306586
  s21_decimal dec_check = {{0x923181da, 0x9d7145a2, 0x749834e9, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_326) {
  // 841715
  s21_decimal dec_1 = {{0xcd7f3, 0x0, 0x0, 0x0}};
  // -767537
  s21_decimal dec_2 = {{0xbb631, 0x0, 0x0, 0x80000000}};
  // -1.0966442008658865956950609547
  s21_decimal dec_check = {{0x8038e8b, 0x82decb67, 0x236f3a6c, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_327) {
  // 9504525.93776
  s21_decimal dec_1 = {{0x4b63a470, 0xdd, 0x0, 0x50000}};
  // 3741.4
  s21_decimal dec_2 = {{0x9226, 0x0, 0x0, 0x10000}};
  // 2540.3661564548030149142032394
  s21_decimal dec_check = {{0x1440b00a, 0xde545240, 0x52156a94, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_328) {
  // -9372426406073
  s21_decimal dec_1 = {{0x302588b9, 0x886, 0x0, 0x80000000}};
  // 88810296
  s21_decimal dec_2 = {{0x54b2338, 0x0, 0x0, 0x0}};
  // -105533.10627489632508374929862
  s21_decimal dec_check = {{0x7cd7d1c6, 0x76411d7c, 0x22197e73, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_329) {
  // 4997800648.0948628434847849873
  s21_decimal dec_1 = {{0xa030dd91, 0x282e477f, 0xa17cd688, 0x130000}};
  // -949543
  s21_decimal dec_2 = {{0xe7d27, 0x0, 0x0, 0x80000000}};
  // -5263.3747477416639830790022014
  s21_decimal dec_check = {{0xb4b8a37e, 0xdad74c9, 0xaa119d90, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_330) {
  // -39105837422262965100904600
  s21_decimal dec_1 = {{0x15388098, 0xb1cb05ac, 0x2058fb, 0x80000000}};
  // 8970057335856752629.5
  s21_decimal dec_2 = {{0x32490f97, 0xdcd87437, 0x4, 0x10000}};
  // -4359597.2643276163274524831298
  s21_decimal dec_check = {{0xd8bbae42, 0x92aba817, 0x8cddbe4c, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_331) {
  // -840795194060545610602309671.5
  s21_decimal dec_1 = {{0xbd29118b, 0x2063889, 0x1b2ae514, 0x80010000}};
  // 954814043572555411
  s21_decimal dec_2 = {{0x55b24e93, 0xd402e50, 0x0, 0x0}};
  // -880585282.25517703492777993986
  s21_decimal dec_check = {{0x7ee3e3e7, 0xa37acbc, 0x1c7407de, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_332) {
  // -9567.7
  s21_decimal dec_1 = {{0x175bd, 0x0, 0x0, 0x80010000}};
  // -42
  s21_decimal dec_2 = {{0x2a, 0x0, 0x0, 0x80000000}};
  // 227.80238095238095238095238095
  s21_decimal dec_check = {{0x1c3cf3cf, 0xa134a63e, 0x499b5f0d, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_333) {
  // 431427533513633.561459
  s21_decimal dec_1 = {{0xfb0ffb73, 0x63427fed, 0x17, 0x60000}};
  // 83488.441508
  s21_decimal dec_2 = {{0x704c84a4, 0x13, 0x0, 0x60000}};
  // 5167512121.6904433949156477288
  s21_decimal dec_check = {{0xb7468968, 0x574a5eaf, 0xa6f8a88e, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_334) {
  // 86413
  s21_decimal dec_1 = {{0x1518d, 0x0, 0x0, 0x0}};
  // -0.77
  s21_decimal dec_2 = {{0x4d, 0x0, 0x0, 0x80020000}};
  // -112224.67532467532467532467532
  s21_decimal dec_check = {{0xe7ec0d4c, 0xf7abe849, 0x244301ef, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_336) {
  // -79979136.5
  s21_decimal dec_1 = {{0x2fabd905, 0x0, 0x0, 0x80010000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 11425590.928571428571428571429
  s21_decimal dec_check = {{0x36c24925, 0x559aa1a6, 0x24eb06fd, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_337) {
  // 183821.8931
  s21_decimal dec_1 = {{0x6d90feb3, 0x0, 0x0, 0x40000}};
  // 5.597
  s21_decimal dec_2 = {{0x15dd, 0x0, 0x0, 0x30000}};
  // 32842.932481686617830980882616
  s21_decimal dec_check = {{0x137490b8, 0x5f395464, 0x6a1f0979, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_338) {
  // 140256795.99477381138
  s21_decimal dec_1 = {{0xd44ad812, 0xc2a53948, 0x0, 0xb0000}};
  // -0.88511
  s21_decimal dec_2 = {{0x159bf, 0x0, 0x0, 0x80050000}};
  // -158462559.44998227494887641084
  s21_decimal dec_check = {{0xcdee4ffc, 0x1100f60b, 0x3333b738, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_339) {
  // -6507018697743709516067774
  s21_decimal dec_1 = {{0x6fdff3be, 0x30bfaf48, 0x561ea, 0x80000000}};
  // -0.497867472690548848239
  s21_decimal dec_2 = {{0xdda8366f, 0xfd4c9498, 0x1a, 0x80150000}};
  // 13069780724132922446239872.069
  s21_decimal dec_check = {{0x9a1db445, 0xc02e265e, 0x2a3b11b8, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_340) {
  // 86929.1
  s21_decimal dec_1 = {{0xd43ab, 0x0, 0x0, 0x10000}};
  // 71.79209055
  s21_decimal dec_2 = {{0xabea095f, 0x1, 0x0, 0x80000}};
  // 1210.8450852180957976017596273
  s21_decimal dec_check = {{0x41dd6f71, 0xf7eadf27, 0x271fe033, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_342) {
  // -30751042.00381
  s21_decimal dec_1 = {{0xfa7e56bd, 0x2cb, 0x0, 0x80050000}};
  // -93
  s21_decimal dec_2 = {{0x5d, 0x0, 0x0, 0x80000000}};
  // 330656.36563236559139784946237
  s21_decimal dec_check = {{0xc6acf23d, 0xd2e88226, 0x6ad740e5, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_343) {
  // 48343654190007044315238671
  s21_decimal dec_1 = {{0x8713510f, 0xbeb40a07, 0x27fd2a, 0x0}};
  // 2195387557463391885151643
  s21_decimal dec_2 = {{0x3aa54d9b, 0x32adab2a, 0x1d0e4, 0x0}};
  // 22.020555790096835943567648962
  s21_decimal dec_check = {{0xc94ee8c2, 0x591a99f3, 0x4726fa11, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_344) {
  // -5903264971727497.978458
  s21_decimal dec_1 = {{0xa7e5e25a, 0x44236f2, 0x140, 0x80060000}};
  // 0.26496481981753
  s21_decimal dec_2 = {{0x31657539, 0x1819, 0x0, 0xe0000}};
  // -22279429306097411.135340890198
  s21_decimal dec_check = {{0xe5d14856, 0xc5390673, 0x47fd1caa, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_345) {
  // 550762553015688958337740
  s21_decimal dec_1 = {{0x5afc62cc, 0xe5d7deb3, 0x74a0, 0x0}};
  // -996659
  s21_decimal dec_2 = {{0xf3533, 0x0, 0x0, 0x80000000}};
  // -552608819080236026.90362501116
  s21_decimal dec_check = {{0xce1ce7fc, 0xe83e941b, 0xb28ebaea, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_346) {
  // 7334
  s21_decimal dec_1 = {{0x1ca6, 0x0, 0x0, 0x0}};
  // 346
  s21_decimal dec_2 = {{0x15a, 0x0, 0x0, 0x0}};
  // 21.196531791907514450867052023
  s21_decimal dec_check = {{0x52ddf7, 0xe5af850b, 0x447d5c32, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_348) {
  // 8236234729166.87166675936752
  s21_decimal dec_1 = {{0xaa0e5f0, 0xeeac49d5, 0x2a9490d, 0xe0000}};
  // -8500196145.256936
  s21_decimal dec_2 = {{0x23c259e8, 0x1e32e2, 0x0, 0x80060000}};
  // -968.94643234352263834951213204
  s21_decimal dec_check = {{0x2f46c9a8, 0x7c05c519, 0x1f4eefe1, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_349) {
  // 224291169.30304
  s21_decimal dec_1 = {{0x2f8c1900, 0x1466, 0x0, 0x50000}};
  // -0.3063397258
  s21_decimal dec_2 = {{0xb697bb8a, 0x0, 0x0, 0x800a0000}};
  // -732164817.07459960127704730093
  s21_decimal dec_check = {{0x2a7b09ed, 0x72dba819, 0xec934112, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_350) {
  // 7281253606724
  s21_decimal dec_1 = {{0x4c88e544, 0x69f, 0x0, 0x0}};
  // -631342752
  s21_decimal dec_2 = {{0x25a186a0, 0x0, 0x0, 0x80000000}};
  // -11532.964595947400691787778693
  s21_decimal dec_check = {{0xc9e44a85, 0x81983901, 0x2543d83f, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_351) {
  // -1488706758847
  s21_decimal dec_1 = {{0x9dd668bf, 0x15a, 0x0, 0x80000000}};
  // 617131443
  s21_decimal dec_2 = {{0x24c8adb3, 0x0, 0x0, 0x0}};
  // -2412.3009380466780072977095092
  s21_decimal dec_check = {{0x3d17d9b4, 0xdc092084, 0x4df215ee, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_353) {
  // 65301573772148143938.717034
  s21_decimal dec_1 = {{0xa765c56a, 0x685382bf, 0x360425, 0x60000}};
  // -832927.59239976255002253931
  s21_decimal dec_2 = {{0x54ec1a6b, 0x86a8e684, 0x44e5ed, 0x80140000}};
  // -78400060663144.337000300356902
  s21_decimal dec_check = {{0xa0552526, 0xb2e5f53d, 0xfd53029c, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_354) {
  // 9293329242688167676809786
  s21_decimal dec_1 = {{0xdf35123a, 0x6342184e, 0x7aff0, 0x0}};
  // -31.9968364
  s21_decimal dec_2 = {{0x1312546c, 0x0, 0x0, 0x80070000}};
  // -290445252977827760397268.08742
  s21_decimal dec_check = {{0xdfbe7ea6, 0x55540f9d, 0x5dd91177, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_356) {
  // -2536746968563535.489794201813
  s21_decimal dec_1 = {{0x67e258d5, 0xb7d76079, 0x8325910, 0x800c0000}};
  // 382920841596.876
  s21_decimal dec_2 = {{0xb4bd8fcc, 0x15c43, 0x0, 0x30000}};
  // -6624.7294296770686522290171825
  s21_decimal dec_check = {{0x68a96fb1, 0xe46ba140, 0xd60e7a3b, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_359) {
  // 382099400265699828091668715
  s21_decimal dec_1 = {{0xe06948eb, 0xfe616b66, 0x13c10b1, 0x0}};
  // 756
  s21_decimal dec_2 = {{0x2f4, 0x0, 0x0, 0x0}};
  // 505422487123941571549826.34259
  s21_decimal dec_check = {{0x7f8b2313, 0xd063ba31, 0xa34f9178, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_360) {
  // 5799196057381950734
  s21_decimal dec_1 = {{0xb718d50e, 0x507ae216, 0x0, 0x0}};
  // 9407.569109
  s21_decimal dec_2 = {{0x30bc1cd5, 0x2, 0x0, 0x60000}};
  // 616439378780007.72005808923790
  s21_decimal dec_check = {{0x3799648e, 0x64fdaae5, 0xc72eab98, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_361) {
  // -84264276
  s21_decimal dec_1 = {{0x505c554, 0x0, 0x0, 0x80000000}};
  // -0.7852
  s21_decimal dec_2 = {{0x1eac, 0x0, 0x0, 0x80040000}};
  // 107315685.17575140091696383087
  s21_decimal dec_check = {{0x889a046f, 0xbee03a0, 0x22acf207, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_362) {
  // 166573.05526529127443116771630
  s21_decimal dec_1 = {{0x4fac92e, 0xfb1b3624, 0x35d299a5, 0x170000}};
  // -88611
  s21_decimal dec_2 = {{0x15a23, 0x0, 0x0, 0x80000000}};
  // -1.8798236704843786260302639210
  s21_decimal dec_check = {{0xd431b06a, 0xb6e42c9b, 0x3cbd8975, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_363) {
  // 93360372361720007146
  s21_decimal dec_1 = {{0xbe8489ea, 0xfa2ac04, 0x5, 0x0}};
  // 23.231776
  s21_decimal dec_2 = {{0x1627d20, 0x0, 0x0, 0x60000}};
  // 4018649816601193432.0475541775
  s21_decimal dec_check = {{0x5cac910f, 0xcf09d7c8, 0x81d97dfe, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_364) {
  // -4945818779165985465637137384
  s21_decimal dec_1 = {{0x76b9ebe8, 0x412b63f9, 0xffb15dd, 0x80000000}};
  // -718487565940321617406312444
  s21_decimal dec_2 = {{0xec33bffc, 0xfeac41eb, 0x25251a8, 0x80000000}};
  // 6.8836525691201602747000225511
  s21_decimal dec_check = {{0x1dbcfee7, 0x9aa0a87, 0xde6c3d4f, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_365) {
  // 966602505
  s21_decimal dec_1 = {{0x399d2f09, 0x0, 0x0, 0x0}};
  // -3472
  s21_decimal dec_2 = {{0xd90, 0x0, 0x0, 0x80000000}};
  // -278399.33899769585253456221198
  s21_decimal dec_check = {{0x38ef140e, 0xcc952df6, 0x59f4a750, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_366) {
  // 423853385.11941
  s21_decimal dec_1 = {{0x9b0bb245, 0x268c, 0x0, 0x50000}};
  // -2275
  s21_decimal dec_2 = {{0x8e3, 0x0, 0x0, 0x80000000}};
  // -186309.18027226813186813186813
  s21_decimal dec_check = {{0xc5abd2fd, 0x6a38af5, 0x3c33225a, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_367) {
  // 696541863440923849476104
  s21_decimal dec_1 = {{0xfe94808, 0x9c2e1a90, 0x937f, 0x0}};
  // 98555793489319537.34664082633
  s21_decimal dec_2 = {{0xd49054c9, 0xf8e4982, 0x1fd8581b, 0xb0000}};
  // 7067487.7526749139153511231629
  s21_decimal dec_check = {{0x37f7b08d, 0xbb7fc85e, 0xe45ce373, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_368) {
  // 50226270602633351
  s21_decimal dec_1 = {{0xe9a9a087, 0xb27086, 0x0, 0x0}};
  // -24527
  s21_decimal dec_2 = {{0x5fcf, 0x0, 0x0, 0x80000000}};
  // -2047795107539.9906633505932238
  s21_decimal dec_check = {{0xd1d83ce, 0x3334ad2e, 0x422af6d0, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_369) {
  // 1061268210476092277741
  s21_decimal dec_1 = {{0x89f8c3ed, 0x880e1696, 0x39, 0x0}};
  // 86.5
  s21_decimal dec_2 = {{0x361, 0x0, 0x0, 0x10000}};
  // 12268996652902800898.739884393
  s21_decimal dec_check = {{0x3d7b5169, 0x43c557a6, 0x27a4ad19, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_370) {
  // -788483063948526.0974311
  s21_decimal dec_1 = {{0x1b14c8e7, 0x7001aafd, 0x1ab, 0x80070000}};
  // 33751.905836
  s21_decimal dec_2 = {{0xdbc5362c, 0x7, 0x0, 0x60000}};
  // -23361141968.686253756918072009
  s21_decimal dec_check = {{0x602102c9, 0xb5a81e05, 0x4b7be23b, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_371) {
  // -48219467753
  s21_decimal dec_1 = {{0x3a1aafe9, 0xb, 0x0, 0x80000000}};
  // -289
  s21_decimal dec_2 = {{0x121, 0x0, 0x0, 0x80000000}};
  // 166849369.38754325259515570934
  s21_decimal dec_check = {{0xabefaaf6, 0xd6cc3f45, 0x35e974d3, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_372) {
  // -142648325575528260758620
  s21_decimal dec_1 = {{0xff6aec5c, 0xfb3187b8, 0x1e34, 0x80000000}};
  // 72769.7168069
  s21_decimal dec_2 = {{0x6e2196c5, 0xa9, 0x0, 0x70000}};
  // -1960270450880776200.1286590718
  s21_decimal dec_check = {{0xe22ef0fe, 0xc0859738, 0x3f56fa24, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_373) {
  // 8869529.09
  s21_decimal dec_1 = {{0x34ddd3cd, 0x0, 0x0, 0x20000}};
  // -60
  s21_decimal dec_2 = {{0x3c, 0x0, 0x0, 0x80000000}};
  // -147825.48483333333333333333333
  s21_decimal dec_check = {{0x6b4d5555, 0x66deea2, 0x2fc3d667, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_374) {
  // 12153836239.28
  s21_decimal dec_1 = {{0xfa8258f8, 0x11a, 0x0, 0x20000}};
  // 27512
  s21_decimal dec_2 = {{0x6b78, 0x0, 0x0, 0x0}};
  // 441764.91128525734225065425996
  s21_decimal dec_check = {{0x422a3c4c, 0xb77a5aaa, 0x8ebdefde, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_379) {
  // 6930153075059797105056
  s21_decimal dec_1 = {{0x43599a0, 0xaf31a03e, 0x177, 0x0}};
  // 89123648678474652
  s21_decimal dec_2 = {{0x7c91339c, 0x13ca17c, 0x0, 0x0}};
  // 77758.857248554092999263049120
  s21_decimal dec_check = {{0x961ad5a0, 0xf1919c02, 0xfb409e81, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_380) {
  // 15275
  s21_decimal dec_1 = {{0x3bab, 0x0, 0x0, 0x0}};
  // 290
  s21_decimal dec_2 = {{0x122, 0x0, 0x0, 0x0}};
  // 52.672413793103448275862068966
  s21_decimal dec_check = {{0x14469ee6, 0x3a16cc88, 0xaa319979, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_381) {
  // 45904976283022663542266
  s21_decimal dec_1 = {{0xc95ae5fa, 0x83852a6b, 0x9b8, 0x0}};
  // -9345282516083687051.79
  s21_decimal dec_2 = {{0xb3b06e9b, 0xa92f4d7e, 0x32, 0x80020000}};
  // -4912.1015019094350779579972115
  s21_decimal dec_check = {{0xb5f13a13, 0xeb75596f, 0x9eb7f387, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_382) {
  // -695012238306.64190686281818
  s21_decimal dec_1 = {{0x11ba405a, 0xe4b49376, 0x397d74, 0x800e0000}};
  // -566809137.990714
  s21_decimal dec_2 = {{0x89534c3a, 0x20382, 0x0, 0x80060000}};
  // 1226.1838981114454977976749960
  s21_decimal dec_check = {{0x68084f88, 0x197e8579, 0x279ec167, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_383) {
  // 45852679949605.62
  s21_decimal dec_1 = {{0xe60a22b2, 0x104a46, 0x0, 0x20000}};
  // -71911.72583241
  s21_decimal dec_2 = {{0x53498f49, 0x68a, 0x0, 0x80080000}};
  // -637624523.94015843768137553215
  s21_decimal dec_check = {{0xc026153f, 0x6e05d5fd, 0xce07107e, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_385) {
  // 1000580840
  s21_decimal dec_1 = {{0x3ba3a6e8, 0x0, 0x0, 0x0}};
  // 905.600
  s21_decimal dec_2 = {{0xdd180, 0x0, 0x0, 0x30000}};
  // 1104881.6696113074204946996466
  s21_decimal dec_check = {{0xc9001cf2, 0x441846b4, 0x23b35df1, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_387) {
  // 7295122954.4144
  s21_decimal dec_1 = {{0x481f76d0, 0x4259, 0x0, 0x40000}};
  // -4577060
  s21_decimal dec_2 = {{0x45d724, 0x0, 0x0, 0x80000000}};
  // -1593.8447288028559817874356028
  s21_decimal dec_check = {{0x5320373c, 0xc94bcfde, 0x337ff97e, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_388) {
  // 55021.55801415399605
  s21_decimal dec_1 = {{0xba3838b5, 0x4c5b958c, 0x0, 0xe0000}};
  // -41
  s21_decimal dec_2 = {{0x29, 0x0, 0x0, 0x80000000}};
  // -1341.9892198574145378048780488
  s21_decimal dec_check = {{0x63dfa8c8, 0xcf8e7e9b, 0x2b5cacb5, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_390) {
  // -57127046197356100809755113674
  s21_decimal dec_1 = {{0x1562b8ca, 0xbe1f290d, 0xb8966293, 0x80000000}};
  // 8224
  s21_decimal dec_2 = {{0x2020, 0x0, 0x0, 0x0}};
  // -6946382076526763230758160.7094
  s21_decimal dec_check = {{0x7525dcb6, 0x24709903, 0xe0732035, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_392) {
  // -4362996140
  s21_decimal dec_1 = {{0x40e09ac, 0x1, 0x0, 0x80000000}};
  // 927309
  s21_decimal dec_2 = {{0xe264d, 0x0, 0x0, 0x0}};
  // -4705.0078668491301173610953846
  s21_decimal dec_check = {{0x22803c76, 0x664cb47b, 0x9806e9b3, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_393) {
  // -17702964796730631607218535050
  s21_decimal dec_1 = {{0x155efa8a, 0x9a3ca4f5, 0x39338c9c, 0x80000000}};
  // 4527752799391855153030348
  s21_decimal dec_2 = {{0xafdca4cc, 0xf898a06f, 0x3bec9, 0x0}};
  // -3909.8788253432043081342163278
  s21_decimal dec_check = {{0x6364994e, 0x4bcc5dc1, 0x7e55c276, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_394) {
  // -97079509101108.4607
  s21_decimal dec_1 = {{0xe568a13f, 0xd78f4fd, 0x0, 0x80040000}};
  // 0.7944900
  s21_decimal dec_2 = {{0x793ac4, 0x0, 0x0, 0x70000}};
  // -122190976728603.83478709612456
  s21_decimal dec_check = {{0x7f39efa8, 0x22ea73eb, 0x277b6694, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_395) {
  // 43315530341
  s21_decimal dec_1 = {{0x15ce8a65, 0xa, 0x0, 0x0}};
  // -906849.97482508
  s21_decimal dec_2 = {{0x3f0fb80c, 0x527a, 0x0, 0x80080000}};
  // -47764.824991427080523986809312
  s21_decimal dec_check = {{0xedd4b1e0, 0x346b022d, 0x9a56231f, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_396) {
  // -78567650260386
  s21_decimal dec_1 = {{0xf4e275a2, 0x4774, 0x0, 0x80000000}};
  // 5929156613831
  s21_decimal dec_2 = {{0x7d4616c7, 0x564, 0x0, 0x0}};
  // -13.251066783614805403490882070
  s21_decimal dec_check = {{0xd42c9216, 0xba2f46d6, 0x2ad10689, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_397) {
  // -676073013403851072452828
  s21_decimal dec_1 = {{0xdfcfb8dc, 0xfdd29675, 0x8f29, 0x80000000}};
  // 20692
  s21_decimal dec_2 = {{0x50d4, 0x0, 0x0, 0x0}};
  // -32673159356459069807.308525034
  s21_decimal dec_check = {{0x52b4dea, 0xcfd8b59a, 0x69929a9d, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_398) {
  // -321111907099742326.54435368
  s21_decimal dec_1 = {{0x74a45428, 0x22ede5a3, 0x1a8fcf, 0x80080000}};
  // -86.670
  s21_decimal dec_2 = {{0x1528e, 0x0, 0x0, 0x80030000}};
  // 3704994889808957.2694629477328
  s21_decimal dec_check = {{0x133eebd0, 0x4a0e5f1b, 0x77b6ffda, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_399) {
  // 84655383528.91
  s21_decimal dec_1 = {{0x96806fb, 0x7b3, 0x0, 0x20000}};
  // 61612864482
  s21_decimal dec_2 = {{0x5869b3e2, 0xe, 0x0, 0x0}};
  // 1.3739887642075430165357069918
  s21_decimal dec_check = {{0xa39d065e, 0x8fef5785, 0x2c655e61, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_400) {
  // -6698342496699852408457
  s21_decimal dec_1 = {{0xb1da4689, 0x1e2d0368, 0x16b, 0x80000000}};
  // 1579805.9573856827
  s21_decimal dec_2 = {{0x610a4a3b, 0x382040, 0x0, 0xa0000}};
  // -4239977995642262.4422077071502
  s21_decimal dec_check = {{0xc09f008e, 0x1541f709, 0x890046a5, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_401) {
  // 985601234860
  s21_decimal dec_1 = {{0x7a6957ac, 0xe5, 0x0, 0x0}};
  // 6.6236037
  s21_decimal dec_2 = {{0x3f2ae85, 0x0, 0x0, 0x70000}};
  // 148801359426.13837237877018518
  s21_decimal dec_check = {{0xa9e90f96, 0xcb072a4f, 0x30148f59, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_402) {
  // -49824371174437054621
  s21_decimal dec_1 = {{0x3188689d, 0xb373b99a, 0x2, 0x80000000}};
  // 918632160.004
  s21_decimal dec_2 = {{0xe2be5b04, 0xd5, 0x0, 0x30000}};
  // -54237564657.240069150606527561
  s21_decimal dec_check = {{0xe8928c49, 0x95cb6574, 0xaf40430f, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_404) {
  // 572786620278698276
  s21_decimal dec_1 = {{0x79cef124, 0x7f2f265, 0x0, 0x0}};
  // -940477426023
  s21_decimal dec_2 = {{0xf8d2a967, 0xda, 0x0, 0x80000000}};
  // -609038.13789645430450595584098
  s21_decimal dec_check = {{0x6f4c5862, 0x2b57e523, 0xc4ca7439, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_405) {
  // 8124626217835
  s21_decimal dec_1 = {{0xa975ab6b, 0x763, 0x0, 0x0}};
  // -75908.99980
  s21_decimal dec_2 = {{0xc473f10c, 0x1, 0x0, 0x80050000}};
  // -107031132.53028266089734461236
  s21_decimal dec_check = {{0xbf43d734, 0x108872ad, 0x22956864, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_407) {
  // -95659205601226985
  s21_decimal dec_1 = {{0x695b70e9, 0x153d98a, 0x0, 0x80000000}};
  // -4642.1948101555466
  s21_decimal dec_2 = {{0xe5ff50a, 0xa4ec84, 0x0, 0x800d0000}};
  // 20606460847346.843696368287362
  s21_decimal dec_check = {{0x2bf97e82, 0xe58417b9, 0x429543d0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_408) {
  // 81080225018193
  s21_decimal dec_1 = {{0xf602b151, 0x49bd, 0x0, 0x0}};
  // -65813564
  s21_decimal dec_2 = {{0x3ec3c3c, 0x0, 0x0, 0x80000000}};
  // -1231968.3069920510610852194542
  s21_decimal dec_check = {{0x95a6a8ee, 0x6fe18bd1, 0x27ce9a5d, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_410) {
  // 8879692659427968453503
  s21_decimal dec_1 = {{0x27be8b7f, 0x5e7d931f, 0x1e1, 0x0}};
  // 19363756827104533
  s21_decimal dec_2 = {{0xf7325515, 0x44cb3b, 0x0, 0x0}};
  // 458572.82441176735917954960190
  s21_decimal dec_check = {{0xe1460b3e, 0x59aa9e08, 0x942c4146, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_413) {
  // 678027400586328731122453
  s21_decimal dec_1 = {{0x5317b15, 0xf064aa23, 0x8f93, 0x0}};
  // 601234850001
  s21_decimal dec_2 = {{0xfc63c0d1, 0x8b, 0x0, 0x0}};
  // 1127724716199.0044429497957338
  s21_decimal dec_check = {{0x3587bda, 0xa26028cd, 0x247051f9, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_414) {
  // 719519259100744342445804850
  s21_decimal dec_1 = {{0xf828cd32, 0x316f9dc1, 0x2532c21, 0x0}};
  // 0.4336753909234633396
  s21_decimal dec_2 = {{0xe378ab4, 0x3c2f3eb4, 0x0, 0x130000}};
  // 1659119410876896635712350009.8
  s21_decimal dec_check = {{0x63028842, 0xd7c1caf6, 0x359bea02, 0x10000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_415) {
  // -5506315802848253956
  s21_decimal dec_1 = {{0x89e3d804, 0x4c6a5d0c, 0x0, 0x80000000}};
  // 386679096062261.92849768
  s21_decimal dec_2 = {{0x4b015b68, 0x310b637f, 0x830, 0x80000}};
  // -14240.014158824978769054762559
  s21_decimal dec_check = {{0xe937863f, 0x5c724fa0, 0x2e03104a, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_416) {
  // -189443651820478904
  s21_decimal dec_1 = {{0x63b661b8, 0x2a109ff, 0x0, 0x80000000}};
  // 557
  s21_decimal dec_2 = {{0x22d, 0x0, 0x0, 0x0}};
  // -340114276158849.01974865350090
  s21_decimal dec_check = {{0x92000dca, 0x86176696, 0x6de597f1, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_417) {
  // 3236375864271258581
  s21_decimal dec_1 = {{0x958943d5, 0x2ce9eab3, 0x0, 0x0}};
  // -15600386
  s21_decimal dec_2 = {{0xee0b02, 0x0, 0x0, 0x80000000}};
  // -207454858121.53997862616989092
  s21_decimal dec_check = {{0xd8c47da4, 0x57193a3e, 0x4308437f, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_418) {
  // -1853225408.28605387
  s21_decimal dec_1 = {{0x76f63bcb, 0x29265de, 0x0, 0x80080000}};
  // -0.279573627048541
  s21_decimal dec_2 = {{0x4eba925d, 0xfe45, 0x0, 0x800f0000}};
  // 6628756180.7977238719584150387
  s21_decimal dec_check = {{0xed6e2373, 0xc7e667c, 0xd62fc936, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_419) {
  // 292315437480932413793785353
  s21_decimal dec_1 = {{0xc5ba5609, 0x9e4f0fac, 0xf1cc33, 0x0}};
  // 5273
  s21_decimal dec_2 = {{0x1499, 0x0, 0x0, 0x0}};
  // 55436267301523310031061.132752
  s21_decimal dec_check = {{0x6a4025d0, 0x23d2cc1a, 0xb31fce38, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_420) {
  // -4449180126587274500523683310
  s21_decimal dec_1 = {{0xe213edee, 0xf385f453, 0xe604689, 0x80000000}};
  // -11.369285904577
  s21_decimal dec_2 = {{0x1e3f68c1, 0xa57, 0x0, 0x800c0000}};
  // 391333296033671033338828341.93
  s21_decimal dec_check = {{0xe51ead11, 0xa0cae3bb, 0x7e7254e0, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_421) {
  // 4716789.34762
  s21_decimal dec_1 = {{0xd2415eea, 0x6d, 0x0, 0x50000}};
  // 2749.03
  s21_decimal dec_2 = {{0x431d7, 0x0, 0x0, 0x20000}};
  // 1715.8013363331793396216119868
  s21_decimal dec_check = {{0x6f34423c, 0x33f6a6d5, 0x3770c6a8, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_424) {
  // -275753704998922597488
  s21_decimal dec_1 = {{0xd6a3b470, 0xf2d9f5b0, 0xe, 0x80000000}};
  // -824922667
  s21_decimal dec_2 = {{0x312b522b, 0x0, 0x0, 0x80000000}};
  // 334278249380.34173024851552540
  s21_decimal dec_check = {{0xb995691c, 0xf6ce838c, 0x6c02d944, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_425) {
  // -896471906
  s21_decimal dec_1 = {{0x356f1362, 0x0, 0x0, 0x80000000}};
  // 199
  s21_decimal dec_2 = {{0xc7, 0x0, 0x0, 0x0}};
  // -4504883.9497487437185929648241
  s21_decimal dec_check = {{0x4d2b1871, 0x8e6be711, 0x918f86d2, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_426) {
  // -8870160675.263390088761
  s21_decimal dec_1 = {{0xd166fe39, 0xda352a06, 0x1e0, 0x800c0000}};
  // 2557.8547957110
  s21_decimal dec_2 = {{0x7843cd76, 0x1743, 0x0, 0xa0000}};
  // -3467812.4380386398928933442589
  s21_decimal dec_check = {{0xd89b541d, 0x8bffe7ba, 0x700d1279, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_427) {
  // 20631840836391761028102626149
  s21_decimal dec_1 = {{0x6b761b65, 0xdc0bc6ff, 0x42aa423c, 0x0}};
  // -943637152930958
  s21_decimal dec_2 = {{0xa54c1c8e, 0x35a3b, 0x0, 0x80000000}};
  // -21864167569397.627231225578004
  s21_decimal dec_check = {{0xdddd0214, 0xea99403d, 0x46a59d92, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_429) {
  // -2514720135877559408362135127
  s21_decimal dec_1 = {{0x5e761e57, 0xb9bf4278, 0x82020b3, 0x80000000}};
  // 627.6
  s21_decimal dec_2 = {{0x1884, 0x0, 0x0, 0x10000}};
  // -4006883581704205558257066.8053
  s21_decimal dec_check = {{0xb9f66015, 0x1710c1b5, 0x81782a06, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_430) {
  // -71310002844683117330895
  s21_decimal dec_1 = {{0xd82d01cf, 0xb9168aa6, 0xf19, 0x80000000}};
  // 5465.869
  s21_decimal dec_2 = {{0x53670d, 0x0, 0x0, 0x30000}};
  // -13046416378563613092.610708380
  s21_decimal dec_check = {{0xc37a139c, 0xa19d7b8, 0x2a27be21, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_431) {
  // -1664585593834461304504680772
  s21_decimal dec_1 = {{0x9c138144, 0xdb2df209, 0x560e9b5, 0x80000000}};
  // 68.482732
  s21_decimal dec_2 = {{0x414f6ac, 0x0, 0x0, 0x60000}};
  // -24306647022120281423712488.164
  s21_decimal dec_check = {{0x886e0ae4, 0x5c6e2f97, 0x4e89fcb7, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_432) {
  // 98169261107122
  s21_decimal dec_1 = {{0xcfefa7b2, 0x5948, 0x0, 0x0}};
  // -18927645
  s21_decimal dec_2 = {{0x120d01d, 0x0, 0x0, 0x80000000}};
  // -5186554.4343800826780088066952
  s21_decimal dec_check = {{0x3dc0e388, 0xbc0f25f4, 0xa7962c38, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_433) {
  // 84851909148804951182016
  s21_decimal dec_1 = {{0xed020ac0, 0xd4ca4e27, 0x11f7, 0x0}};
  // -18618.22266
  s21_decimal dec_2 = {{0x6ef9273a, 0x0, 0x0, 0x80050000}};
  // -4557465591552064464.4613998832
  s21_decimal dec_check = {{0x643948f0, 0xb1c05c73, 0x934278c7, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_434) {
  // -58793873383238378648591685368
  s21_decimal dec_1 = {{0x169456f8, 0x8c17ac8e, 0xbdf926f6, 0x80000000}};
  // 911676191746
  s21_decimal dec_2 = {{0x4422b402, 0xd4, 0x0, 0x0}};
  // -64489863742782485.691211772626
  s21_decimal dec_check = {{0x54b8f2d2, 0xa933ce7a, 0xd060c3d6, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_436) {
  // -27881.4
  s21_decimal dec_1 = {{0x4411e, 0x0, 0x0, 0x80010000}};
  // 1537
  s21_decimal dec_2 = {{0x601, 0x0, 0x0, 0x0}};
  // -18.140143135979180221210149642
  s21_decimal dec_check = {{0x256dc30a, 0xdc803fba, 0x3a9d2cb9, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_437) {
  // 17995811769327457940.08
  s21_decimal dec_1 = {{0xa3b2d1d8, 0x8e34a9d4, 0x61, 0x20000}};
  // 45.83
  s21_decimal dec_2 = {{0x11e7, 0x0, 0x0, 0x20000}};
  // 392664450563549158.63146410648
  s21_decimal dec_check = {{0x17fe3298, 0xcb4c6a8a, 0x7ee0712b, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_438) {
  // 840.66446
  s21_decimal dec_1 = {{0x502c08e, 0x0, 0x0, 0x50000}};
  // -662
  s21_decimal dec_2 = {{0x296, 0x0, 0x0, 0x80000000}};
  // -1.2698858912386706948640483384
  s21_decimal dec_check = {{0x14642838, 0xb79e7e0, 0x29083ff9, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_439) {
  // -415569040447505553.1849218
  s21_decimal dec_1 = {{0xffe37602, 0x6da0d6a8, 0x37000, 0x80070000}};
  // 0.27
  s21_decimal dec_2 = {{0x1b, 0x0, 0x0, 0x20000}};
  // -1539144594250020567.3515622222
  s21_decimal dec_check = {{0x59a09f4e, 0x6d76f2f1, 0x31bb8174, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_440) {
  // 451330720294369
  s21_decimal dec_1 = {{0x9f4265e1, 0x19a7b, 0x0, 0x0}};
  // -67.77
  s21_decimal dec_2 = {{0x1a79, 0x0, 0x0, 0x80020000}};
  // -6659742073105.6367124096207762
  s21_decimal dec_check = {{0x46cfcb92, 0xed580316, 0xd7301863, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_441) {
  // 68723424274343239
  s21_decimal dec_1 = {{0x1b9ee547, 0xf42797, 0x0, 0x0}};
  // -2221512115440576
  s21_decimal dec_2 = {{0x18814bc0, 0x7e474, 0x0, 0x80000000}};
  // -30.935426278651571806466067866
  s21_decimal dec_check = {{0x89e9cd9a, 0xe769ea81, 0x63f52f52, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_442) {
  // -45144315051630206534.364778
  s21_decimal dec_1 = {{0xb7352e6a, 0x39040187, 0x2557ae, 0x80060000}};
  // -3724731996943031
  s21_decimal dec_2 = {{0xbf8fb2b7, 0xd3b9f, 0x0, 0x80000000}};
  // 12120.151218579251630687462689
  s21_decimal dec_check = {{0x36392521, 0x1a11113b, 0x27298dda, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_443) {
  // 8694669612325.77984985734053
  s21_decimal dec_1 = {{0x144a9ba5, 0x69e415ac, 0x2cf34ca, 0xe0000}};
  // -981927601.09685
  s21_decimal dec_2 = {{0x4895fa75, 0x594e, 0x0, 0x80050000}};
  // -8854.6951960750542341842894458
  s21_decimal dec_check = {{0x8a618ca6, 0x6a00edc7, 0x1c9c6ea4, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_444) {
  // -95557916994
  s21_decimal dec_1 = {{0x3fb21942, 0x16, 0x0, 0x80000000}};
  // 2006
  s21_decimal dec_2 = {{0x7d6, 0x0, 0x0, 0x0}};
  // -47636050.345962113659022931206
  s21_decimal dec_check = {{0x24a0f506, 0xafa0ef93, 0x99eb9e07, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_447) {
  // -860140091600502626419876214.3
  s21_decimal dec_1 = {{0x58ed4e9f, 0xfa423721, 0x1bcae97d, 0x80010000}};
  // -84448188365586803
  s21_decimal dec_2 = {{0xd74c173, 0x12c052e, 0x0, 0x80000000}};
  // 10185417926.040618534287509357
  s21_decimal dec_check = {{0x2d9076d, 0x27805599, 0x20e92e24, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_448) {
  // 61002414238433267121752.1
  s21_decimal dec_1 = {{0xfd12ef71, 0x799b0c1f, 0x812d, 0x10000}};
  // -7.552
  s21_decimal dec_2 = {{0x1d80, 0x0, 0x0, 0x80030000}};
  // -8077650190470506769299.8013771
  s21_decimal dec_check = {{0x1c000521, 0x411a0a88, 0x1a19acf6, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_450) {
  // -561406207475808425042799
  s21_decimal dec_1 = {{0x59e1636f, 0xe438a9ae, 0x76e1, 0x80000000}};
  // -93760207697884063
  s21_decimal dec_2 = {{0x81e6339f, 0x14d1a69, 0x0, 0x80000000}};
  // 5987680.9284038945304448504478
  s21_decimal dec_check = {{0xebe2929e, 0x5cddfd52, 0xc178ef8f, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_451) {
  // 642420160030565089051479458
  s21_decimal dec_1 = {{0xfa710da2, 0xa85dcba0, 0x21365c2, 0x0}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -214140053343521696350493152.67
  s21_decimal dec_check = {{0xf1631bc3, 0x418bd8f5, 0x45314003, 0x80020000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_452) {
  // -5853327911516839168090809.5
  s21_decimal dec_1 = {{0x2e9a5b3f, 0x6b4181a5, 0x306ae7, 0x80010000}};
  // -109924974.26647031
  s21_decimal dec_2 = {{0x404f47f7, 0x270d9e, 0x0, 0x80080000}};
  // 53248390100394512.270139383368
  s21_decimal dec_check = {{0x5400de48, 0x6900c340, 0xac0e0933, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_453) {
  // -8587679955538442
  s21_decimal dec_1 = {{0xd31d20a, 0x1e8273, 0x0, 0x80000000}};
  // 306503.40765759857
  s21_decimal dec_2 = {{0x91967971, 0x6ce452, 0x0, 0xb0000}};
  // -28018220159.992219886952007001
  s21_decimal dec_check = {{0xe7764559, 0x550051b9, 0x5a8820e6, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_455) {
  // -43794054618848366
  s21_decimal dec_1 = {{0xecd49c6e, 0x9b9675, 0x0, 0x80000000}};
  // 3481516
  s21_decimal dec_2 = {{0x351fac, 0x0, 0x0, 0x0}};
  // -12579018628.335577374913687026
  s21_decimal dec_check = {{0x7df36df2, 0x3a961ec6, 0x28a51ece, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_456) {
  // 7124405479474592395977018
  s21_decimal dec_1 = {{0x44a613a, 0xcb804029, 0x5e4a6, 0x0}};
  // 3989544340852851
  s21_decimal dec_2 = {{0x2d409073, 0xe2c78, 0x0, 0x0}};
  // 1785769218.4345035584354310512
  s21_decimal dec_check = {{0xa9aed970, 0x179b6792, 0x39b38969, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_457) {
  // -318391720
  s21_decimal dec_1 = {{0x12fa45a8, 0x0, 0x0, 0x80000000}};
  // 70
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x0}};
  // -4548453.1428571428571428571429
  s21_decimal dec_check = {{0xe3924925, 0x77950103, 0x92f7ec2d, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_458) {
  // 37416288.98170848929131
  s21_decimal dec_1 = {{0x9abe56b, 0xd5882ae3, 0xca, 0xe0000}};
  // -5731
  s21_decimal dec_2 = {{0x1663, 0x0, 0x0, 0x80000000}};
  // -6528.7539664471277772308497644
  s21_decimal dec_check = {{0x5e3c44ec, 0x5cd6017, 0xd2f49649, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_459) {
  // -324268719791671696
  s21_decimal dec_1 = {{0xbef40990, 0x48008ae, 0x0, 0x80000000}};
  // -948061693869965.415
  s21_decimal dec_2 = {{0x68464067, 0xd283116, 0x0, 0x80030000}};
  // 342.03335277476980425730162447
  s21_decimal dec_check = {{0x7609ff0f, 0xb45c3203, 0x6e8455f8, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_460) {
  // -59527834949792707.597
  s21_decimal dec_1 = {{0xae7a340d, 0x3a1d5a7e, 0x3, 0x80030000}};
  // 30259
  s21_decimal dec_2 = {{0x7633, 0x0, 0x0, 0x0}};
  // -1967277006834.0892824283684193
  s21_decimal dec_check = {{0x9db89d61, 0x585bc163, 0x3f90ef1a, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_461) {
  // 0
  s21_decimal dec_1 = {{0x9db89d61, 0x585bc163, 0x3f90ef1a, 0x80100000}};
  // -8125595609.8
  s21_decimal dec_2 = {{0xeb3b7e82, 0x12, 0x0, 0x80010000}};
  // 0
  s21_decimal dec_check = {{0x25275c81, 0x14fc0a8b, 0x4e3ac225, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_462) {
  // 59069227418
  s21_decimal dec_1 = {{0xc0cce19a, 0xd, 0x0, 0x0}};
  // -5.562
  s21_decimal dec_2 = {{0x15ba, 0x0, 0x0, 0x80030000}};
  // -10620141571.017619561308881697
  s21_decimal dec_check = {{0xc3160321, 0x2b88237a, 0x2250c674, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_463) {
  // 75735633965045479958
  s21_decimal dec_1 = {{0x9d8b7a16, 0x1b0b05d3, 0x4, 0x0}};
  // -46101840417.195
  s21_decimal dec_2 = {{0xebd251ab, 0x29ed, 0x0, 0x80030000}};
  // -1642789816.6251451658127433211
  s21_decimal dec_check = {{0xebf65dfb, 0xf9f32b2, 0x3514d6c0, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_464) {
  // -87552408582762.514
  s21_decimal dec_1 = {{0xa4ce3012, 0x1370c73, 0x0, 0x80030000}};
  // 285044218
  s21_decimal dec_2 = {{0x10fd6dfa, 0x0, 0x0, 0x0}};
  // -307153.77844556915025724184309
  s21_decimal dec_check = {{0x78ae16f5, 0x639b32c8, 0x633f2a41, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_467) {
  // 79228162514264337591870772406
  s21_decimal dec_1 = {{0x9c4554b6, 0xffffffff, 0xffffffff, 0x0}};
  // 401451835.95
  s21_decimal dec_2 = {{0x58d6e36b, 0x9, 0x0, 0x20000}};
  // 197354091872012368092.57335371
  s21_decimal dec_check = {{0x3e303a4b, 0xc85ee8f2, 0x3fc4bf73, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_468) {
  // 593957748480073157765558811
  s21_decimal dec_1 = {{0x9820f21b, 0x1036b40e, 0x1eb4f72, 0x0}};
  // 39147.385027038632224171
  s21_decimal dec_2 = {{0x436425ab, 0x2f1a465b, 0x84a, 0x120000}};
  // 15172347988756685038360.193043
  s21_decimal dec_check = {{0x131fe813, 0x8e4924d1, 0x310645a8, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_469) {
  // 6728003.1884892
  s21_decimal dec_1 = {{0xda66a65c, 0x3d30, 0x0, 0x70000}};
  // 239
  s21_decimal dec_2 = {{0xef, 0x0, 0x0, 0x0}};
  // 28150.640956021757322175732218
  s21_decimal dec_check = {{0xb2fc59fa, 0x11a41ba2, 0x5af5aa18, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_470) {
  // 26531039439966952286147214
  s21_decimal dec_1 = {{0x5009528e, 0x87ab2a8a, 0x15f22a, 0x0}};
  // -6036228305398.0821
  s21_decimal dec_2 = {{0x37439c95, 0xd6732d, 0x0, 0x80040000}};
  // -4395300856370.9820931153887277
  s21_decimal dec_check = {{0xae7c802d, 0x9a37707f, 0x8e051398, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_471) {
  // 6905875636998
  s21_decimal dec_1 = {{0xe643a306, 0x647, 0x0, 0x0}};
  // -727836884172
  s21_decimal dec_2 = {{0x76757ccc, 0xa9, 0x0, 0x80000000}};
  // -9.4882188402065460033548864328
  s21_decimal dec_check = {{0xcc1ea121, 0xfa7e6b9a, 0x1ea8787d, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_472) {
  // -88370481664837323657565
  s21_decimal dec_1 = {{0x8f01115d, 0x92cb034a, 0x12b6, 0x80000000}};
  // -24629247868
  s21_decimal dec_2 = {{0xbc047f7c, 0x5, 0x0, 0x80000000}};
  // 3588030058345.9670128471906936
  s21_decimal dec_check = {{0x21a91a78, 0x19dac3bc, 0x73ef7d30, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_473) {
  // -6427522453084607275809290
  s21_decimal dec_1 = {{0x2aa73a0a, 0xb0bbdefc, 0x55114, 0x80000000}};
  // -422515327801
  s21_decimal dec_2 = {{0x5fe04339, 0x62, 0x0, 0x80000000}};
  // 15212519002652.368998402612818
  s21_decimal dec_check = {{0x5d6bde52, 0x9527a00e, 0x31278033, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_474) {
  // -16667449011361388
  s21_decimal dec_1 = {{0xe1a2566c, 0x3b36f4, 0x0, 0x80000000}};
  // 69
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x0}};
  // -241557232048715.76811594202899
  s21_decimal dec_check = {{0x661a3f13, 0xd581ed11, 0x4e0d255a, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_475) {
  // 91569595518871558660
  s21_decimal dec_1 = {{0xc88a5a04, 0xf6c88df7, 0x4, 0x0}};
  // -14.53125243314839481676785
  s21_decimal dec_2 = {{0xfdd6f3f1, 0x13c8ef57, 0x133b6, 0x80170000}};
  // -6301562507439818243.1160106163
  s21_decimal dec_check = {{0x2ba17cb3, 0x4f4a41bc, 0xcb9d4da8, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_476) {
  // -8016524
  s21_decimal dec_1 = {{0x7a528c, 0x0, 0x0, 0x80000000}};
  // -4.19847
  s21_decimal dec_2 = {{0x66807, 0x0, 0x0, 0x80050000}};
  // 1909391.7546153717901997632471
  s21_decimal dec_check = {{0x3b97ebd7, 0x3d6d3568, 0x3db21e50, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_477) {
  // 12753242634855300314784704
  s21_decimal dec_1 = {{0xd03163c0, 0xab25e983, 0xa8c9a, 0x0}};
  // -951878941
  s21_decimal dec_2 = {{0x38bc851d, 0x0, 0x0, 0x80000000}};
  // -13397966995106891.764700469406
  s21_decimal dec_check = {{0x7eced89e, 0x2631e602, 0x2b4a89de, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_478) {
  // -5947225201858267417628
  s21_decimal dec_1 = {{0x2cd58c1c, 0x66545357, 0x142, 0x80000000}};
  // 850525899203392366365
  s21_decimal dec_2 = {{0xcfe4e71d, 0x1b6aff0b, 0x2e, 0x0}};
  // -6.9924092933895064668135293644
  s21_decimal dec_check = {{0x802902cc, 0x667e728b, 0xe1efdaa1, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_479) {
  // -534869833886105413022662.8992
  s21_decimal dec_1 = {{0xc2d28980, 0xf2b92f16, 0x114856ed, 0x80040000}};
  // 9.6918910793262859274641125085
  s21_decimal dec_2 = {{0x526aaedd, 0xd96677f3, 0x392971a9, 0x1c0000}};
  // -55187355027857567579160.692315
  s21_decimal dec_check = {{0xe66098fe, 0xe859a6ac, 0x61b1574d, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_481) {
  // 71482782462552588696823.97169
  s21_decimal dec_1 = {{0xf507dff1, 0x34bf1d24, 0x1718eacc, 0x50000}};
  // -45802686914093
  s21_decimal dec_2 = {{0x44e21e2d, 0x29a8, 0x0, 0x80000000}};
  // -1560667883.8869187870549495039
  s21_decimal dec_check = {{0x9e464cff, 0x1e88e1f9, 0x326d8acb, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_484) {
  // -971738941182102476148085662
  s21_decimal dec_1 = {{0x7a5a939e, 0x8e50c558, 0x323cdb9, 0x80000000}};
  // 3744906989042304025020911
  s21_decimal dec_2 = {{0x8b26c9ef, 0xd08dce62, 0x31903, 0x0}};
  // -259.48279730990277724042869610
  s21_decimal dec_check = {{0xb216bb6a, 0xd47ef133, 0x53d7e9f6, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_485) {
  // -474701341904959853083203894
  s21_decimal dec_1 = {{0xc1579936, 0x4f0ab44d, 0x188a9eb, 0x80000000}};
  // 450356847314.8
  s21_decimal dec_2 = {{0x91995c3c, 0x418, 0x0, 0x10000}};
  // -1054056010773037.0998264223459
  s21_decimal dec_check = {{0x429556e3, 0x6698921c, 0x220ef26c, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_486) {
  // -8919456833044746986596
  s21_decimal dec_1 = {{0xb6c9e464, 0x86544c58, 0x1e3, 0x80000000}};
  // 12425768240370777659.9610
  s21_decimal dec_2 = {{0x6453063a, 0x5bff8c1, 0x1a50, 0x40000}};
  // -717.81934609610871103578136844
  s21_decimal dec_check = {{0x31f7610c, 0x7297a32c, 0xe7f09fe8, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_487) {
  // 36974453675276003
  s21_decimal dec_1 = {{0xd91436e3, 0x835c11, 0x0, 0x0}};
  // -9860.1
  s21_decimal dec_2 = {{0x18129, 0x0, 0x0, 0x80010000}};
  // -3749906560306.2852303729171104
  s21_decimal dec_check = {{0x7f439aa0, 0xa69ec03d, 0x792a8003, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_489) {
  // 382181176667435811394994
  s21_decimal dec_1 = {{0x575ed5b2, 0x15462060, 0x50ee, 0x0}};
  // 247692164212
  s21_decimal dec_2 = {{0xab9a7c74, 0x39, 0x0, 0x0}};
  // 1542968377232.6625376072435704
  s21_decimal dec_check = {{0xaedd07f8, 0x5606ea82, 0x31db22a1, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_490) {
  // 4871170.5157513
  s21_decimal dec_1 = {{0x93e1df89, 0x2c4d, 0x0, 0x70000}};
  // 175447.0
  s21_decimal dec_2 = {{0x1ac566, 0x0, 0x0, 0x10000}};
  // 27.764342027799278414563942387
  s21_decimal dec_check = {{0xbe049ff3, 0x3562225e, 0x59b6201d, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_491) {
  // 4349016.61009104611312323
  s21_decimal dec_1 = {{0xd7dc02c3, 0x10f80006, 0x5c18, 0x110000}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // 1449672.2033636820377077433333
  s21_decimal dec_check = {{0x5c9243f5, 0x23ae25b5, 0x2ed7684c, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_492) {
  // 829531726102
  s21_decimal dec_1 = {{0x23f1a116, 0xc1, 0x0, 0x0}};
  // -173
  s21_decimal dec_2 = {{0xad, 0x0, 0x0, 0x80000000}};
  // -4794981075.7341040462427745665
  s21_decimal dec_check = {{0x2efe6d81, 0xab3cebe3, 0x9aef2761, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_493) {
  // -30465229163.889690937730
  s21_decimal dec_1 = {{0x13c40982, 0x85fc60db, 0x673, 0x800c0000}};
  // -6946042
  s21_decimal dec_2 = {{0x69fcfa, 0x0, 0x0, 0x80000000}};
  // 4385.9840127499503944447787675
  s21_decimal dec_check = {{0x9f53829b, 0x8e1a9829, 0x8db80269, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_494) {
  // 414524099732.2
  s21_decimal dec_1 = {{0x239dfdca, 0x3c5, 0x0, 0x10000}};
  // -2.07969
  s21_decimal dec_2 = {{0x32c61, 0x0, 0x0, 0x80050000}};
  // -199320138930.41751414874332232
  s21_decimal dec_check = {{0x5e685c48, 0x3e0b0e0f, 0x4067601e, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_495) {
  // 6632026393488.4449472165295
  s21_decimal dec_1 = {{0xde8f35af, 0xb63f1f9e, 0x36dbdc, 0xd0000}};
  // -67.1704
  s21_decimal dec_2 = {{0xa3fd8, 0x0, 0x0, 0x80040000}};
  // -98734359085.079811155159556888
  s21_decimal dec_check = {{0x487f69e9, 0x18545b0f, 0x1fe71d61, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_496) {
  // 32008757372392754
  s21_decimal dec_1 = {{0x94e21532, 0x71b7cb, 0x0, 0x0}};
  // 833332691055
  s21_decimal dec_2 = {{0x67fc06f, 0xc2, 0x0, 0x0}};
  // 38410.538451179247431186089628
  s21_decimal dec_check = {{0xd22b869c, 0xc15d1e8a, 0x7c1c73e5, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_500) {
  // 81118940.72145
  s21_decimal dec_1 = {{0xb2908b51, 0x760, 0x0, 0x50000}};
  // -41.81855150426
  s21_decimal dec_2 = {{0xa9fda15a, 0x3cd, 0x0, 0x800b0000}};
  // -1939783.6080761076057260324189
  s21_decimal dec_check = {{0x7ece755d, 0x391c5fb, 0x3ead8391, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_div_1) {
  // 3.33
  s21_decimal dec_1 = {{0x14d, 0x0, 0x0, 0x20000}};
  // -71509985.8712938884791
  s21_decimal dec_2 = {{0, 0, 0, 0}};
  s21_decimal result;
  // overflow
  int check = 3;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_2) {
  // 0.2465430
  s21_decimal dec_1 = {{0x259e96, 0x259e96, 0x259e96, 0x70000}};
  // -4870924010790.2
  s21_decimal dec_2 = {{0, 0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_3) {
  // -3.8836
  s21_decimal dec_1 = {{0x2b3dbe5, 0x773c0ef, 0x773c0ef, 0x80000000}};
  // 536984916245624912
  s21_decimal dec_2 = {{0xae903850, 0x773c0ef, 0x0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_4) {
  // 897919
  s21_decimal dec_1 = {{0xdb37f, 0x0, 0x3b71e7bd, 0x0}};
  // -87107455469545319467968445
  s21_decimal dec_2 = {{0x3b71e7bd, 0x9f7c28bf, 0x0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_5) {
  // 265.6861139481802
  s21_decimal dec_1 = {{0xb06fb4ca, 0x97066, 0x80000000, 0x0000}};
  // -282182
  s21_decimal dec_2 = {{0x44e46, 0x44e46, 0x0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_6) {
  // -5158
  s21_decimal dec_1 = {{0x1426, 0x0, 0x3b71e7bd, 0x80000000}};
  // -113162603.179324432311223790
  s21_decimal dec_2 = {{0x3a4185ee, 0x2b3dbe5, 0x0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_7) {
  // -5.00086342184
  s21_decimal dec_1 = {{0x6f780228, 0x74, 0x4b2c645, 0x80000000}};
  // -549920595927
  s21_decimal dec_2 = {{0x9d25fd7, 0x80, 0x0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_8) {
  // -3.439
  s21_decimal dec_1 = {{0xd6f, 0x0, 0x4b2c645, 0x80030000}};
  // 788250.29
  s21_decimal dec_2 = {{0x4b2c645, 0x0, 0x0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_9) {
  // -4603748.86495503434173350264
  s21_decimal dec_1 = {{0x60bb8178, 0x9ad4cd95, 0xd967d638, 0x80000000}};
  // 6728377811.4265257818849899782
  s21_decimal dec_2 = {{0x82397506, 0x39d7f48d, 0x0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_10) {
  // 767278211
  s21_decimal dec_1 = {{0x2dbbbc83, 0x0, 0x4b2c645, 0x0}};
  // -592482058875904076933.9403
  s21_decimal dec_2 = {{0x462b300b, 0x2aee1f82, 0, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_11) {
  // -57315
  s21_decimal dec_1 = {{0xdfe3, 0x0, 0x4b2c645, 0x80000000}};
  // 793611
  s21_decimal dec_2 = {{0xc1c0b, 0x0, 0x0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_12) {
  // 2.8834165011
  s21_decimal dec_1 = {{0xb6a67113, 0x6, 0x4b2c645, 0xa0000}};
  // 368812172
  s21_decimal dec_2 = {{0x15fba08c, 0x0, 0x0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_13) {
  // 8365.291
  s21_decimal dec_1 = {{0x7fa4eb, 0x0, 0x4b2c645, 0x30000}};
  // 47569102883488391540032
  s21_decimal dec_2 = {{0xbf78ad40, 0xb9ea809f, 0xa12, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_14) {
  // 4054024215
  s21_decimal dec_1 = {{0xf1a38017, 0x0, 0x4b2c645, 0x0}};
  // -509685866188792073.45379
  s21_decimal dec_2 = {{0xa7110ce3, 0x33adeb9, 0xacb, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_15) {
  // 7722.229923
  s21_decimal dec_1 = {{0xcc47e0a3, 0x1, 0x7e644ac3, 0x60000}};
  // -4347973607901.891
  s21_decimal dec_2 = {{0x7e644ac3, 0xf7275, 0x0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_16) {
  // 65834
  s21_decimal dec_1 = {{0x1012a, 0x0, 0x7e644ac3, 0x0}};
  // -897730028570137129
  s21_decimal dec_2 = {{0x611fd229, 0xc7560b4, 0x0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_17) {
  // -6330017990811
  s21_decimal dec_1 = {{0xd279489b, 0x5c1, 0x7e644ac3, 0x80000000}};
  // -66136099.57127466
  s21_decimal dec_2 = {{0x102d752a, 0x177f0b, 0x0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_18) {
  // 631911143623
  s21_decimal dec_1 = {{0x20d6d8c7, 0x93, 0x20d6d8c7, 0x0}};
  // -657627516019562
  s21_decimal dec_2 = {{0xd67ca36a, 0x2561b, 0x0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_19) {
  // -8922.39
  s21_decimal dec_1 = {{0xd9d4f, 0x0, 0x20d6d8c7, 0x80020000}};
  // 595896.774623975356
  s21_decimal dec_2 = {{0x964357bc, 0x8450cf5, 0x0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_20) {
  // -566028457549527444415.250466
  s21_decimal dec_1 = {{0xb7b70022, 0x2b0e8e08, 0x2b0e8e08, 0x80010000}};
  // 996234176236955120401667406
  s21_decimal dec_2 = {{0x2a40554e, 0x33810ca, 0, 0x001c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(test_div6801) {
  // 3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x130000}};
  // 3656273013.5441854660747245473
  s21_decimal dec_2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6802) {
  // 3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x130000}};
  // -3656273013.5441854660747245473
  s21_decimal dec_2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6805) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000461486534
  s21_decimal decimal_check = {{0x1B81B9C6, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6806) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000461486534
  s21_decimal decimal_check = {{0x1B81B9C6, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6807) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0000000000000000004614865343
  s21_decimal decimal_check = {{0x131141BF, 0x1, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6808) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0000000000000000004614865343
  s21_decimal decimal_check = {{0x131141BF, 0x1, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6809) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000461486534
  s21_decimal decimal_check = {{0x1B81B9C6, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6810) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000461486534
  s21_decimal decimal_check = {{0x1B81B9C6, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6811) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -0.0000000000000000001384459603
  s21_decimal decimal_check = {{0x52852D53, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6812) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 0.0000000000000000001384459603
  s21_decimal decimal_check = {{0x52852D53, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6819) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 4294967297
  s21_decimal dec_2 = {{0x1, 0x1, 0x0, 0x0}};
  // -0.8512923989195593323454179836
  s21_decimal decimal_check = {
      {0xFD20A9FC, 0x2A1C1CB7, 0x1B81B9C6, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6820) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -4294967297
  s21_decimal dec_2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // 0.8512923989195593323454179836
  s21_decimal decimal_check = {{0xFD20A9FC, 0x2A1C1CB7, 0x1B81B9C6, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6821) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 79228162495817593524129366015
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000461486534
  s21_decimal decimal_check = {{0x1B81B9C6, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6822) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -79228162495817593524129366015
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000461486534
  s21_decimal decimal_check = {{0x1B81B9C6, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6823) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 4294967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x0}};
  // -0.8512923991177662895235057332
  s21_decimal decimal_check = {
      {0x273CC6B4, 0x459DD67E, 0x1B81B9C6, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6824) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -4294967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // 0.8512923991177662895235057332
  s21_decimal decimal_check = {{0x273CC6B4, 0x459DD67E, 0x1B81B9C6, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6825) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 2147483648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // -1.7025847982355325790470114664
  s21_decimal decimal_check = {
      {0x4E798D68, 0x8B3BACFC, 0x3703738C, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6826) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -2147483648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // 1.7025847982355325790470114664
  s21_decimal decimal_check = {{0x4E798D68, 0x8B3BACFC, 0x3703738C, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6827) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 8589934591
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // -0.425646199608434884073580549
  s21_decimal decimal_check = {{0xDDA56805, 0xB75E55C4, 0x1601616, 0x801B0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6828) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -8589934591
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // 0.425646199608434884073580549
  s21_decimal decimal_check = {{0xDDA56805, 0xB75E55C4, 0x1601616, 0x1B0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6829) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x0}};
  // -731254602.70883709321494490946
  s21_decimal decimal_check = {
      {0x78596F42, 0x7C17235E, 0xEC47F688, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6830) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 731254602.70883709321494490946
  s21_decimal decimal_check = {{0x78596F42, 0x7C17235E, 0xEC47F688, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6831) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // -1828136506.7720927330373622736
  s21_decimal decimal_check = {
      {0x9E165BD0, 0x1F05C8D7, 0x3B11FDA2, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6832) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 1828136506.7720927330373622736
  s21_decimal decimal_check = {{0x9E165BD0, 0x1F05C8D7, 0x3B11FDA2, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6839) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.0000000000000000000000000008
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6840) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.0000000000000000000000000008
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6841) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6842) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6843) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6844) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6851) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -7312546027.0883709321494490946
  s21_decimal decimal_check = {
      {0x78596F42, 0x7C17235E, 0xEC47F688, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6852) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 7312546027.0883709321494490946
  s21_decimal decimal_check = {{0x78596F42, 0x7C17235E, 0xEC47F688, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6853) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x30000}};
  // -3656273013544.1854660747245473
  s21_decimal decimal_check = {
      {0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80100000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6854) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // 3656273013544.1854660747245473
  s21_decimal decimal_check = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x100000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6855) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.019
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x30000}};
  // -192435421765.48344558288023933
  s21_decimal decimal_check = {
      {0xE9C6B17D, 0xB4DDAAFD, 0x3E2DE28F, 0x80110000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6856) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.019
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // 192435421765.48344558288023933
  s21_decimal decimal_check = {{0xE9C6B17D, 0xB4DDAAFD, 0x3E2DE28F, 0x110000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6859) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 42.94967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80000}};
  // -85129239.91177662895235057332
  s21_decimal decimal_check = {
      {0x273CC6B4, 0x459DD67E, 0x1B81B9C6, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6860) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -42.94967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // 85129239.91177662895235057332
  s21_decimal decimal_check = {{0x273CC6B4, 0x459DD67E, 0x1B81B9C6, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6861) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 214748.3648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x40000}};
  // -17025.847982355325790470114664
  s21_decimal decimal_check = {
      {0x4E798D68, 0x8B3BACFC, 0x3703738C, 0x80180000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6862) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -214748.3648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // 17025.847982355325790470114664
  s21_decimal decimal_check = {{0x4E798D68, 0x8B3BACFC, 0x3703738C, 0x180000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6863) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 42.94967295
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // -85129239.93159732467938907896
  s21_decimal decimal_check = {
      {0x885C56F8, 0x611F9044, 0x1B81B9C6, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6864) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -42.94967295
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // 85129239.93159732467938907896
  s21_decimal decimal_check = {{0x885C56F8, 0x611F9044, 0x1B81B9C6, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6865) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.9999
  s21_decimal dec_2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // -3656638677.4119266587405986072
  s21_decimal decimal_check = {{0xAB802918, 0x5B33DCC, 0x76270197, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6866) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.9999
  s21_decimal dec_2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // 3656638677.4119266587405986072
  s21_decimal decimal_check = {{0xAB802918, 0x5B33DCC, 0x76270197, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6867) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 1.431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // -2553877197.9479197403816723689
  s21_decimal decimal_check = {
      {0x991504E9, 0x235EB0CD, 0x52852D53, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6868) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -1.431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // 2553877197.9479197403816723689
  s21_decimal decimal_check = {{0x991504E9, 0x235EB0CD, 0x52852D53, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6869) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 8460.288
  s21_decimal dec_2 = {{0x811800, 0x0, 0x0, 0x30000}};
  // -432168.85920954292171551660503
  s21_decimal decimal_check = {
      {0x87C5D9D7, 0x2D871913, 0x8BA42B90, 0x80170000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6870) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -8460.288
  s21_decimal dec_2 = {{0x811800, 0x0, 0x0, 0x80030000}};
  // 432168.85920954292171551660503
  s21_decimal decimal_check = {{0x87C5D9D7, 0x2D871913, 0x8BA42B90, 0x170000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6871) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 8.000
  s21_decimal dec_2 = {{0x1F40, 0x0, 0x0, 0x30000}};
  // -457034126.69302318325934056841
  s21_decimal decimal_check = {{0xB37E589, 0x4D8E761B, 0x93ACFA15, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6872) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -8.000
  s21_decimal dec_2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
  // 457034126.69302318325934056841
  s21_decimal decimal_check = {{0xB37E589, 0x4D8E761B, 0x93ACFA15, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6873) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 1.001
  s21_decimal dec_2 = {{0x3E9, 0x0, 0x0, 0x30000}};
  // -3652620393.1510344316430814658
  s21_decimal decimal_check = {
      {0x658B8DC2, 0xC2756F86, 0x7605C48A, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6874) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -1.001
  s21_decimal dec_2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  // 3652620393.1510344316430814658
  s21_decimal decimal_check = {{0x658B8DC2, 0xC2756F86, 0x7605C48A, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6875) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 1.0
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x10000}};
  // -3656273013.5441854660747245473
  s21_decimal decimal_check = {
      {0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6876) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -1.0
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 3656273013.5441854660747245473
  s21_decimal decimal_check = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6877) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 10
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x0}};
  // -365627301.35441854660747245473
  s21_decimal decimal_check = {
      {0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6878) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -10
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x80000000}};
  // 365627301.35441854660747245473
  s21_decimal decimal_check = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6879) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6880) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6881) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6882) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6883) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -1429062841781896312709593009.2
  s21_decimal dec_2 = {{0xDF162CEC, 0xD6D0972E, 0x2E2CEE46, 0x80010000}};
  // 0.0000000000000000025585110092
  s21_decimal decimal_check = {{0xF4FDCC4C, 0x5, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6884) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 1429062841781896312709593009.2
  s21_decimal dec_2 = {{0xDF162CEC, 0xD6D0972E, 0x2E2CEE46, 0x10000}};
  // -0.0000000000000000025585110092
  s21_decimal decimal_check = {{0xF4FDCC4C, 0x5, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6885) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 3656273013.5441854660747245473
  s21_decimal dec_2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6886) {
  // -3656273013.5441854660747245473
  s21_decimal dec_1 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // -3656273013.5441854660747245473
  s21_decimal dec_2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6889) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6890) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6891) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.0000000000000000000790951527
  s21_decimal decimal_check = {{0x2F24F667, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6892) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.0000000000000000000790951527
  s21_decimal decimal_check = {{0x2F24F667, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6893) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6894) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6895) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 0.0000000000000000000237285458
  s21_decimal decimal_check = {{0xE24B052, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6896) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -0.0000000000000000000237285458
  s21_decimal decimal_check = {{0xE24B052, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6897) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 39614081257132168798919458816
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // 0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6898) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -39614081257132168798919458816
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // -0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6899) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 39614081257132168796771975168
  s21_decimal dec_2 = {{0x0, 0x0, 0x80000000, 0x0}};
  // 0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6900) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -39614081257132168796771975168
  s21_decimal dec_2 = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // -0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6903) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 4294967297
  s21_decimal dec_2 = {{0x1, 0x1, 0x0, 0x0}};
  // 0.145904803863597774522701572
  s21_decimal decimal_check = {{0x17EA5704, 0x4428E872, 0x78B08B, 0x1B0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6904) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -4294967297
  s21_decimal dec_2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // -0.145904803863597774522701572
  s21_decimal decimal_check = {{0x17EA5704, 0x4428E872, 0x78B08B, 0x801B0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6905) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 79228162495817593524129366015
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6906) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -79228162495817593524129366015
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6907) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 4294967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x0}};
  // 0.1459048038975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6908) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -4294967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // -0.1459048038975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6909) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 2147483648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // 0.2918096077951377678369092922
  s21_decimal decimal_check = {{0x3180F53A, 0x5C9FF3CB, 0x96DCAE1, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6910) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -2147483648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // -0.2918096077951377678369092922
  s21_decimal decimal_check = {{0x3180F53A, 0x5C9FF3CB, 0x96DCAE1, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6911) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 8589934591
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // 0.0729524019572772193111316598
  s21_decimal decimal_check = {{0xF88B1876, 0x5855B64E, 0x25B72B8, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6912) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -8589934591
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // -0.0729524019572772193111316598
  s21_decimal decimal_check = {{0xF88B1876, 0x5855B64E, 0x25B72B8, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6913) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x0}};
  // 125331272.21387033806739660717
  s21_decimal decimal_check = {{0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6914) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -125331272.21387033806739660717
  s21_decimal decimal_check = {
      {0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6915) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 313328180.53467584516849151794
  s21_decimal decimal_check = {{0xEC382F32, 0x2EE192A3, 0x653DE64E, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6916) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -313328180.53467584516849151794
  s21_decimal decimal_check = {
      {0xEC382F32, 0x2EE192A3, 0x653DE64E, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6923) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.0000000000000000000000000008
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6924) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.0000000000000000000000000008
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6925) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6926) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6927) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6928) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6935) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 1253312722.1387033806739660717
  s21_decimal decimal_check = {{0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6936) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -1253312722.1387033806739660717
  s21_decimal decimal_check = {
      {0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6937) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x30000}};
  // 626656361069.35169033698303587
  s21_decimal decimal_check = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x110000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6938) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // -626656361069.35169033698303587
  s21_decimal decimal_check = {
      {0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80110000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6939) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.019
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x30000}};
  // 32981913740.492194228262265046
  s21_decimal decimal_check = {{0xC2C1E0D6, 0x8230D040, 0x6A91FFE6, 0x120000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6940) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.019
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // -32981913740.492194228262265046
  s21_decimal decimal_check = {
      {0xC2C1E0D6, 0x8230D040, 0x6A91FFE6, 0x80120000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6943) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 42.94967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80000}};
  // 14590480.38975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6944) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -42.94967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // -14590480.38975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6947) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 42.94967295
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // 14590480.393153999333002675073
  s21_decimal decimal_check = {{0xF5C98381, 0xFE44B95E, 0x2F24F666, 0x150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6948) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -42.94967295
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // -14590480.393153999333002675073
  s21_decimal decimal_check = {
      {0xF5C98381, 0xFE44B95E, 0x2F24F666, 0x80150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6949) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.9999
  s21_decimal dec_2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // 626719032.9726489552325062865
  s21_decimal decimal_check = {{0xC8A230D1, 0x8B218567, 0x1440192C, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6950) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.9999
  s21_decimal dec_2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // -626719032.9726489552325062865
  s21_decimal decimal_check = {
      {0xC8A230D1, 0x8B218567, 0x1440192C, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6951) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 1.431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // 437714411.7946199799900802522
  s21_decimal decimal_check = {{0xE3560DDA, 0x19149E02, 0xE24B052, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6952) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -1.431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // -437714411.7946199799900802522
  s21_decimal decimal_check = {{0xE3560DDA, 0x19149E02, 0xE24B052, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6953) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 8460.288
  s21_decimal dec_2 = {{0x811800, 0x0, 0x0, 0x30000}};
  // 74070.334375065209403862260466
  s21_decimal decimal_check = {{0x37759AF2, 0x4F051F83, 0xEF558B68, 0x180000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6954) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -8460.288
  s21_decimal dec_2 = {{0x811800, 0x0, 0x0, 0x80030000}};
  // -74070.334375065209403862260466
  s21_decimal decimal_check = {
      {0x37759AF2, 0x4F051F83, 0xEF558B68, 0x80180000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6955) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 8.000
  s21_decimal dec_2 = {{0x1F40, 0x0, 0x0, 0x30000}};
  // 78332045.133668961292122879484
  s21_decimal decimal_check = {{0xCE8C75FC, 0x7533EE99, 0xFD1ABFC3, 0x150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6956) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -8.000
  s21_decimal dec_2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
  // -78332045.133668961292122879484
  s21_decimal decimal_check = {
      {0xCE8C75FC, 0x7533EE99, 0xFD1ABFC3, 0x80150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6957) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 1.001
  s21_decimal dec_2 = {{0x3E9, 0x0, 0x0, 0x30000}};
  // 626030330.73861307725972331256
  s21_decimal decimal_check = {{0x12055AF8, 0x24A33D07, 0xCA4803E7, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6958) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -1.001
  s21_decimal dec_2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  // -626030330.73861307725972331256
  s21_decimal decimal_check = {
      {0x12055AF8, 0x24A33D07, 0xCA4803E7, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6959) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 1.0
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x10000}};
  // 626656361.06935169033698303587
  s21_decimal decimal_check = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6960) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -1.0
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -626656361.06935169033698303587
  s21_decimal decimal_check = {
      {0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6961) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 10
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x0}};
  // 62665636.106935169033698303587
  s21_decimal decimal_check = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6962) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -10
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x80000000}};
  // -62665636.106935169033698303587
  s21_decimal decimal_check = {
      {0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6963) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6964) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6965) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6966) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div6967) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -1429062841781896312709593009.2
  s21_decimal dec_2 = {{0xDF162CEC, 0xD6D0972E, 0x2E2CEE46, 0x80010000}};
  // -0.0000000000000000004385086105
  s21_decimal decimal_check = {{0x55F1A99, 0x1, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6968) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 1429062841781896312709593009.2
  s21_decimal dec_2 = {{0xDF162CEC, 0xD6D0972E, 0x2E2CEE46, 0x10000}};
  // 0.0000000000000000004385086105
  s21_decimal decimal_check = {{0x55F1A99, 0x1, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6971) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 626656361.06935169033698303587
  s21_decimal dec_2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6972) {
  // 626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -626656361.06935169033698303587
  s21_decimal dec_2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6973) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6974) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6975) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0000000000000000000790951527
  s21_decimal decimal_check = {{0x2F24F667, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6976) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0000000000000000000790951527
  s21_decimal decimal_check = {{0x2F24F667, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6977) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6978) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6979) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -0.0000000000000000000237285458
  s21_decimal decimal_check = {{0xE24B052, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6980) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 0.0000000000000000000237285458
  s21_decimal decimal_check = {{0xE24B052, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6981) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 39614081257132168798919458816
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // -0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6982) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -39614081257132168798919458816
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // 0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6983) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 39614081257132168796771975168
  s21_decimal dec_2 = {{0x0, 0x0, 0x80000000, 0x0}};
  // -0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6984) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -39614081257132168796771975168
  s21_decimal dec_2 = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // 0.0000000000000000000158190305
  s21_decimal decimal_check = {{0x96DCAE1, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6987) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 4294967297
  s21_decimal dec_2 = {{0x1, 0x1, 0x0, 0x0}};
  // -0.145904803863597774522701572
  s21_decimal decimal_check = {{0x17EA5704, 0x4428E872, 0x78B08B, 0x801B0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6988) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -4294967297
  s21_decimal dec_2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // 0.145904803863597774522701572
  s21_decimal decimal_check = {{0x17EA5704, 0x4428E872, 0x78B08B, 0x1B0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6989) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 79228162495817593524129366015
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6990) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -79228162495817593524129366015
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000079095153
  s21_decimal decimal_check = {{0x4B6E571, 0x0, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6991) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 4294967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x0}};
  // -0.1459048038975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6992) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -4294967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // 0.1459048038975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6993) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 2147483648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // -0.2918096077951377678369092922
  s21_decimal decimal_check = {{0x3180F53A, 0x5C9FF3CB, 0x96DCAE1, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6994) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -2147483648
  s21_decimal dec_2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // 0.2918096077951377678369092922
  s21_decimal decimal_check = {{0x3180F53A, 0x5C9FF3CB, 0x96DCAE1, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6995) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 8589934591
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // -0.0729524019572772193111316598
  s21_decimal decimal_check = {{0xF88B1876, 0x5855B64E, 0x25B72B8, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6996) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -8589934591
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // 0.0729524019572772193111316598
  s21_decimal decimal_check = {{0xF88B1876, 0x5855B64E, 0x25B72B8, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6997) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x0}};
  // -125331272.21387033806739660717
  s21_decimal decimal_check = {
      {0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6998) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 125331272.21387033806739660717
  s21_decimal decimal_check = {{0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div6999) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // -313328180.53467584516849151794
  s21_decimal decimal_check = {
      {0xEC382F32, 0x2EE192A3, 0x653DE64E, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7000) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 313328180.53467584516849151794
  s21_decimal decimal_check = {{0xEC382F32, 0x2EE192A3, 0x653DE64E, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7007) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.0000000000000000000000000008
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7008) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.0000000000000000000000000008
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7009) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7010) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7011) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // overflow
  int code_check = 2;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7012) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // overflow
  int code_check = 1;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7019) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -1253312722.1387033806739660717
  s21_decimal decimal_check = {
      {0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7020) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 1253312722.1387033806739660717
  s21_decimal decimal_check = {{0x5E7CDFAD, 0x12C0A10E, 0x287F28EC, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7021) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x30000}};
  // -626656361069.35169033698303587
  s21_decimal decimal_check = {
      {0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80110000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7022) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // 626656361069.35169033698303587
  s21_decimal decimal_check = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x110000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7023) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.019
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x30000}};
  // -32981913740.492194228262265046
  s21_decimal decimal_check = {
      {0xC2C1E0D6, 0x8230D040, 0x6A91FFE6, 0x80120000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7024) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.019
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // 32981913740.492194228262265046
  s21_decimal decimal_check = {{0xC2C1E0D6, 0x8230D040, 0x6A91FFE6, 0x120000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7027) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 42.94967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80000}};
  // -14590480.38975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7028) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -42.94967296
  s21_decimal dec_2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // 14590480.38975688839184546461
  s21_decimal decimal_check = {{0x98C07A9D, 0xAE4FF9E5, 0x4B6E570, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7031) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 42.94967295
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // -14590480.393153999333002675073
  s21_decimal decimal_check = {
      {0xF5C98381, 0xFE44B95E, 0x2F24F666, 0x80150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7032) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -42.94967295
  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // 14590480.393153999333002675073
  s21_decimal decimal_check = {{0xF5C98381, 0xFE44B95E, 0x2F24F666, 0x150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7033) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.9999
  s21_decimal dec_2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // -626719032.9726489552325062865
  s21_decimal decimal_check = {
      {0xC8A230D1, 0x8B218567, 0x1440192C, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7034) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.9999
  s21_decimal dec_2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // 626719032.9726489552325062865
  s21_decimal decimal_check = {{0xC8A230D1, 0x8B218567, 0x1440192C, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7035) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 1.431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // -437714411.7946199799900802522
  s21_decimal decimal_check = {{0xE3560DDA, 0x19149E02, 0xE24B052, 0x80130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7036) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -1.431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // 437714411.7946199799900802522
  s21_decimal decimal_check = {{0xE3560DDA, 0x19149E02, 0xE24B052, 0x130000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7037) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 8460.288
  s21_decimal dec_2 = {{0x811800, 0x0, 0x0, 0x30000}};
  // -74070.334375065209403862260466
  s21_decimal decimal_check = {
      {0x37759AF2, 0x4F051F83, 0xEF558B68, 0x80180000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7038) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -8460.288
  s21_decimal dec_2 = {{0x811800, 0x0, 0x0, 0x80030000}};
  // 74070.334375065209403862260466
  s21_decimal decimal_check = {{0x37759AF2, 0x4F051F83, 0xEF558B68, 0x180000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7039) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 8.000
  s21_decimal dec_2 = {{0x1F40, 0x0, 0x0, 0x30000}};
  // -78332045.133668961292122879484
  s21_decimal decimal_check = {
      {0xCE8C75FC, 0x7533EE99, 0xFD1ABFC3, 0x80150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7040) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -8.000
  s21_decimal dec_2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
  // 78332045.133668961292122879484
  s21_decimal decimal_check = {{0xCE8C75FC, 0x7533EE99, 0xFD1ABFC3, 0x150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7041) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 1.001
  s21_decimal dec_2 = {{0x3E9, 0x0, 0x0, 0x30000}};
  // -626030330.73861307725972331256
  s21_decimal decimal_check = {
      {0x12055AF8, 0x24A33D07, 0xCA4803E7, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7042) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -1.001
  s21_decimal dec_2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  // 626030330.73861307725972331256
  s21_decimal decimal_check = {{0x12055AF8, 0x24A33D07, 0xCA4803E7, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7043) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 1.0
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x10000}};
  // -626656361.06935169033698303587
  s21_decimal decimal_check = {
      {0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7044) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -1.0
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 626656361.06935169033698303587
  s21_decimal decimal_check = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7045) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 10
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x0}};
  // -62665636.106935169033698303587
  s21_decimal decimal_check = {
      {0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7046) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -10
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x80000000}};
  // 62665636.106935169033698303587
  s21_decimal decimal_check = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x150000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7047) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7048) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7049) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7050) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // division by zero
  int code_check = 3;

  test_div_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_div7051) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -1429062841781896312709593009.2
  s21_decimal dec_2 = {{0xDF162CEC, 0xD6D0972E, 0x2E2CEE46, 0x80010000}};
  // 0.0000000000000000004385086105
  s21_decimal decimal_check = {{0x55F1A99, 0x1, 0x0, 0x1C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7052) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 1429062841781896312709593009.2
  s21_decimal dec_2 = {{0xDF162CEC, 0xD6D0972E, 0x2E2CEE46, 0x10000}};
  // -0.0000000000000000004385086105
  s21_decimal decimal_check = {{0x55F1A99, 0x1, 0x0, 0x801C0000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7055) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 626656361.06935169033698303587
  s21_decimal dec_2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_div(dec_1, dec_2, decimal_check);
}

START_TEST(test_div7056) {
  // -626656361.06935169033698303587
  s21_decimal dec_1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // -626656361.06935169033698303587
  s21_decimal dec_2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_div(dec_1, dec_2, decimal_check);
}

Suite *s21_div_cases(void) {
  Suite *c = suite_create(YELLOW "s21_div_cases" NOCOLOR);
  TCase *tc = tcase_create(YELLOW "s21_div_tc" NOCOLOR);

  tcase_add_test(tc, s21_div_1);
  tcase_add_test(tc, s21_div_2);
  tcase_add_test(tc, s21_div_3);
  tcase_add_test(tc, s21_div_5);
  tcase_add_test(tc, s21_div_6);
  tcase_add_test(tc, s21_div_7);
  tcase_add_test(tc, s21_div_8);
  tcase_add_test(tc, s21_div_9);
  tcase_add_test(tc, s21_div_11);
  tcase_add_test(tc, s21_div_13);
  tcase_add_test(tc, s21_div_14);
  tcase_add_test(tc, s21_div_15);
  tcase_add_test(tc, s21_div_16);
  tcase_add_test(tc, s21_div_17);
  tcase_add_test(tc, s21_div_19);
  tcase_add_test(tc, s21_div_20);
  tcase_add_test(tc, s21_div_21);
  tcase_add_test(tc, s21_div_22);
  tcase_add_test(tc, s21_div_24);
  tcase_add_test(tc, s21_div_25);
  tcase_add_test(tc, s21_div_27);
  tcase_add_test(tc, s21_div_28);
  tcase_add_test(tc, s21_div_29);
  tcase_add_test(tc, s21_div_30);
  tcase_add_test(tc, s21_div_31);
  tcase_add_test(tc, s21_div_32);
  tcase_add_test(tc, s21_div_33);
  tcase_add_test(tc, s21_div_36);
  tcase_add_test(tc, s21_div_37);
  tcase_add_test(tc, s21_div_38);
  tcase_add_test(tc, s21_div_39);
  tcase_add_test(tc, s21_div_40);
  tcase_add_test(tc, s21_div_41);
  tcase_add_test(tc, s21_div_42);
  tcase_add_test(tc, s21_div_43);
  tcase_add_test(tc, s21_div_44);
  tcase_add_test(tc, s21_div_45);
  tcase_add_test(tc, s21_div_47);
  tcase_add_test(tc, s21_div_48);
  tcase_add_test(tc, s21_div_49);
  tcase_add_test(tc, s21_div_50);
  tcase_add_test(tc, s21_div_51);
  tcase_add_test(tc, s21_div_52);
  tcase_add_test(tc, s21_div_53);
  tcase_add_test(tc, s21_div_54);
  tcase_add_test(tc, s21_div_55);
  tcase_add_test(tc, s21_div_57);
  tcase_add_test(tc, s21_div_58);
  tcase_add_test(tc, s21_div_59);
  tcase_add_test(tc, s21_div_60);
  tcase_add_test(tc, s21_div_61);
  tcase_add_test(tc, s21_div_62);
  tcase_add_test(tc, s21_div_63);
  tcase_add_test(tc, s21_div_64);
  tcase_add_test(tc, s21_div_65);
  tcase_add_test(tc, s21_div_66);
  tcase_add_test(tc, s21_div_67);
  tcase_add_test(tc, s21_div_68);
  tcase_add_test(tc, s21_div_69);
  tcase_add_test(tc, s21_div_70);
  tcase_add_test(tc, s21_div_71);
  tcase_add_test(tc, s21_div_73);
  tcase_add_test(tc, s21_div_74);
  tcase_add_test(tc, s21_div_75);
  tcase_add_test(tc, s21_div_77);
  tcase_add_test(tc, s21_div_78);
  tcase_add_test(tc, s21_div_79);
  tcase_add_test(tc, s21_div_80);
  tcase_add_test(tc, s21_div_81);
  tcase_add_test(tc, s21_div_82);
  tcase_add_test(tc, s21_div_83);
  tcase_add_test(tc, s21_div_85);
  tcase_add_test(tc, s21_div_87);
  tcase_add_test(tc, s21_div_88);
  tcase_add_test(tc, s21_div_89);
  tcase_add_test(tc, s21_div_90);
  tcase_add_test(tc, s21_div_91);
  tcase_add_test(tc, s21_div_93);
  tcase_add_test(tc, s21_div_94);
  tcase_add_test(tc, s21_div_95);
  tcase_add_test(tc, s21_div_96);
  tcase_add_test(tc, s21_div_97);
  tcase_add_test(tc, s21_div_98);
  tcase_add_test(tc, s21_div_99);
  tcase_add_test(tc, s21_div_101);
  tcase_add_test(tc, s21_div_102);
  tcase_add_test(tc, s21_div_103);
  tcase_add_test(tc, s21_div_104);
  tcase_add_test(tc, s21_div_105);
  tcase_add_test(tc, s21_div_106);
  tcase_add_test(tc, s21_div_107);
  tcase_add_test(tc, s21_div_109);
  tcase_add_test(tc, s21_div_110);
  tcase_add_test(tc, s21_div_112);
  tcase_add_test(tc, s21_div_113);
  tcase_add_test(tc, s21_div_114);
  tcase_add_test(tc, s21_div_115);
  tcase_add_test(tc, s21_div_116);
  tcase_add_test(tc, s21_div_117);
  tcase_add_test(tc, s21_div_118);
  tcase_add_test(tc, s21_div_119);
  tcase_add_test(tc, s21_div_120);
  tcase_add_test(tc, s21_div_121);
  tcase_add_test(tc, s21_div_122);
  tcase_add_test(tc, s21_div_123);
  tcase_add_test(tc, s21_div_124);
  tcase_add_test(tc, s21_div_125);
  tcase_add_test(tc, s21_div_126);
  tcase_add_test(tc, s21_div_127);
  tcase_add_test(tc, s21_div_128);
  tcase_add_test(tc, s21_div_129);
  tcase_add_test(tc, s21_div_130);
  tcase_add_test(tc, s21_div_131);
  tcase_add_test(tc, s21_div_132);
  tcase_add_test(tc, s21_div_133);
  tcase_add_test(tc, s21_div_134);
  tcase_add_test(tc, s21_div_135);
  tcase_add_test(tc, s21_div_136);
  tcase_add_test(tc, s21_div_138);
  tcase_add_test(tc, s21_div_139);
  tcase_add_test(tc, s21_div_140);
  tcase_add_test(tc, s21_div_141);
  tcase_add_test(tc, s21_div_143);
  tcase_add_test(tc, s21_div_144);
  tcase_add_test(tc, s21_div_145);
  tcase_add_test(tc, s21_div_146);
  tcase_add_test(tc, s21_div_147);
  tcase_add_test(tc, s21_div_148);
  tcase_add_test(tc, s21_div_149);
  tcase_add_test(tc, s21_div_150);
  tcase_add_test(tc, s21_div_151);
  tcase_add_test(tc, s21_div_153);
  tcase_add_test(tc, s21_div_154);
  tcase_add_test(tc, s21_div_155);
  tcase_add_test(tc, s21_div_156);
  tcase_add_test(tc, s21_div_157);
  tcase_add_test(tc, s21_div_158);
  tcase_add_test(tc, s21_div_159);
  tcase_add_test(tc, s21_div_160);
  tcase_add_test(tc, s21_div_161);
  tcase_add_test(tc, s21_div_162);
  tcase_add_test(tc, s21_div_163);
  tcase_add_test(tc, s21_div_165);
  tcase_add_test(tc, s21_div_166);
  tcase_add_test(tc, s21_div_167);
  tcase_add_test(tc, s21_div_168);
  tcase_add_test(tc, s21_div_169);
  tcase_add_test(tc, s21_div_170);
  tcase_add_test(tc, s21_div_171);
  tcase_add_test(tc, s21_div_173);
  tcase_add_test(tc, s21_div_174);
  tcase_add_test(tc, s21_div_175);
  tcase_add_test(tc, s21_div_176);
  tcase_add_test(tc, s21_div_177);
  tcase_add_test(tc, s21_div_178);
  tcase_add_test(tc, s21_div_180);
  tcase_add_test(tc, s21_div_181);
  tcase_add_test(tc, s21_div_182);
  tcase_add_test(tc, s21_div_183);
  tcase_add_test(tc, s21_div_184);
  tcase_add_test(tc, s21_div_186);
  tcase_add_test(tc, s21_div_187);
  tcase_add_test(tc, s21_div_190);
  tcase_add_test(tc, s21_div_191);
  tcase_add_test(tc, s21_div_192);
  tcase_add_test(tc, s21_div_193);
  tcase_add_test(tc, s21_div_194);
  tcase_add_test(tc, s21_div_195);
  tcase_add_test(tc, s21_div_197);
  tcase_add_test(tc, s21_div_198);
  tcase_add_test(tc, s21_div_199);
  tcase_add_test(tc, s21_div_201);
  tcase_add_test(tc, s21_div_202);
  tcase_add_test(tc, s21_div_203);
  tcase_add_test(tc, s21_div_204);
  tcase_add_test(tc, s21_div_205);
  tcase_add_test(tc, s21_div_207);
  tcase_add_test(tc, s21_div_208);
  tcase_add_test(tc, s21_div_209);
  tcase_add_test(tc, s21_div_210);
  tcase_add_test(tc, s21_div_212);
  tcase_add_test(tc, s21_div_213);
  tcase_add_test(tc, s21_div_214);
  tcase_add_test(tc, s21_div_215);
  tcase_add_test(tc, s21_div_216);
  tcase_add_test(tc, s21_div_217);
  tcase_add_test(tc, s21_div_218);
  tcase_add_test(tc, s21_div_219);
  tcase_add_test(tc, s21_div_220);
  tcase_add_test(tc, s21_div_221);
  tcase_add_test(tc, s21_div_222);
  tcase_add_test(tc, s21_div_224);
  tcase_add_test(tc, s21_div_225);
  tcase_add_test(tc, s21_div_226);
  tcase_add_test(tc, s21_div_229);
  tcase_add_test(tc, s21_div_231);
  tcase_add_test(tc, s21_div_233);
  tcase_add_test(tc, s21_div_234);
  tcase_add_test(tc, s21_div_235);
  tcase_add_test(tc, s21_div_236);
  tcase_add_test(tc, s21_div_237);
  tcase_add_test(tc, s21_div_238);
  tcase_add_test(tc, s21_div_239);
  tcase_add_test(tc, s21_div_240);
  tcase_add_test(tc, s21_div_241);
  tcase_add_test(tc, s21_div_242);
  tcase_add_test(tc, s21_div_243);
  tcase_add_test(tc, s21_div_245);
  tcase_add_test(tc, s21_div_246);
  tcase_add_test(tc, s21_div_247);
  tcase_add_test(tc, s21_div_248);
  tcase_add_test(tc, s21_div_249);
  tcase_add_test(tc, s21_div_250);
  tcase_add_test(tc, s21_div_251);
  tcase_add_test(tc, s21_div_252);
  tcase_add_test(tc, s21_div_253);
  tcase_add_test(tc, s21_div_254);
  tcase_add_test(tc, s21_div_255);
  tcase_add_test(tc, s21_div_256);
  tcase_add_test(tc, s21_div_257);
  tcase_add_test(tc, s21_div_258);
  tcase_add_test(tc, s21_div_259);
  tcase_add_test(tc, s21_div_260);
  tcase_add_test(tc, s21_div_261);
  tcase_add_test(tc, s21_div_262);
  tcase_add_test(tc, s21_div_263);
  tcase_add_test(tc, s21_div_264);
  tcase_add_test(tc, s21_div_265);
  tcase_add_test(tc, s21_div_266);
  tcase_add_test(tc, s21_div_267);
  tcase_add_test(tc, s21_div_270);
  tcase_add_test(tc, s21_div_272);
  tcase_add_test(tc, s21_div_273);
  tcase_add_test(tc, s21_div_274);
  tcase_add_test(tc, s21_div_276);
  tcase_add_test(tc, s21_div_277);
  tcase_add_test(tc, s21_div_279);
  tcase_add_test(tc, s21_div_280);
  tcase_add_test(tc, s21_div_282);
  tcase_add_test(tc, s21_div_284);
  tcase_add_test(tc, s21_div_285);
  tcase_add_test(tc, s21_div_286);
  tcase_add_test(tc, s21_div_287);
  tcase_add_test(tc, s21_div_288);
  tcase_add_test(tc, s21_div_289);
  tcase_add_test(tc, s21_div_291);
  tcase_add_test(tc, s21_div_292);
  tcase_add_test(tc, s21_div_294);
  tcase_add_test(tc, s21_div_295);
  tcase_add_test(tc, s21_div_299);
  tcase_add_test(tc, s21_div_301);
  tcase_add_test(tc, s21_div_302);
  tcase_add_test(tc, s21_div_303);
  tcase_add_test(tc, s21_div_304);
  tcase_add_test(tc, s21_div_306);
  tcase_add_test(tc, s21_div_307);
  tcase_add_test(tc, s21_div_308);
  tcase_add_test(tc, s21_div_311);
  tcase_add_test(tc, s21_div_312);
  tcase_add_test(tc, s21_div_313);
  tcase_add_test(tc, s21_div_314);
  tcase_add_test(tc, s21_div_315);
  tcase_add_test(tc, s21_div_316);
  tcase_add_test(tc, s21_div_317);
  tcase_add_test(tc, s21_div_319);
  tcase_add_test(tc, s21_div_320);
  tcase_add_test(tc, s21_div_325);
  tcase_add_test(tc, s21_div_326);
  tcase_add_test(tc, s21_div_327);
  tcase_add_test(tc, s21_div_328);
  tcase_add_test(tc, s21_div_329);
  tcase_add_test(tc, s21_div_330);
  tcase_add_test(tc, s21_div_331);
  tcase_add_test(tc, s21_div_332);
  tcase_add_test(tc, s21_div_333);
  tcase_add_test(tc, s21_div_334);
  tcase_add_test(tc, s21_div_336);
  tcase_add_test(tc, s21_div_337);
  tcase_add_test(tc, s21_div_338);
  tcase_add_test(tc, s21_div_339);
  tcase_add_test(tc, s21_div_340);
  tcase_add_test(tc, s21_div_342);
  tcase_add_test(tc, s21_div_343);
  tcase_add_test(tc, s21_div_344);
  tcase_add_test(tc, s21_div_345);
  tcase_add_test(tc, s21_div_346);
  tcase_add_test(tc, s21_div_348);
  tcase_add_test(tc, s21_div_349);
  tcase_add_test(tc, s21_div_350);
  tcase_add_test(tc, s21_div_351);
  tcase_add_test(tc, s21_div_353);
  tcase_add_test(tc, s21_div_354);
  tcase_add_test(tc, s21_div_356);
  tcase_add_test(tc, s21_div_359);
  tcase_add_test(tc, s21_div_360);
  tcase_add_test(tc, s21_div_361);
  tcase_add_test(tc, s21_div_362);
  tcase_add_test(tc, s21_div_363);
  tcase_add_test(tc, s21_div_364);
  tcase_add_test(tc, s21_div_365);
  tcase_add_test(tc, s21_div_366);
  tcase_add_test(tc, s21_div_367);
  tcase_add_test(tc, s21_div_368);
  tcase_add_test(tc, s21_div_369);
  tcase_add_test(tc, s21_div_370);
  tcase_add_test(tc, s21_div_371);
  tcase_add_test(tc, s21_div_372);
  tcase_add_test(tc, s21_div_373);
  tcase_add_test(tc, s21_div_374);
  tcase_add_test(tc, s21_div_379);
  tcase_add_test(tc, s21_div_380);
  tcase_add_test(tc, s21_div_381);
  tcase_add_test(tc, s21_div_382);
  tcase_add_test(tc, s21_div_383);
  tcase_add_test(tc, s21_div_385);
  tcase_add_test(tc, s21_div_387);
  tcase_add_test(tc, s21_div_388);
  tcase_add_test(tc, s21_div_390);
  tcase_add_test(tc, s21_div_392);
  tcase_add_test(tc, s21_div_393);
  tcase_add_test(tc, s21_div_394);
  tcase_add_test(tc, s21_div_395);
  tcase_add_test(tc, s21_div_396);
  tcase_add_test(tc, s21_div_397);
  tcase_add_test(tc, s21_div_398);
  tcase_add_test(tc, s21_div_399);
  tcase_add_test(tc, s21_div_400);
  tcase_add_test(tc, s21_div_401);
  tcase_add_test(tc, s21_div_402);
  tcase_add_test(tc, s21_div_404);
  tcase_add_test(tc, s21_div_405);
  tcase_add_test(tc, s21_div_407);
  tcase_add_test(tc, s21_div_408);
  tcase_add_test(tc, s21_div_410);
  tcase_add_test(tc, s21_div_413);
  tcase_add_test(tc, s21_div_414);
  tcase_add_test(tc, s21_div_415);
  tcase_add_test(tc, s21_div_416);
  tcase_add_test(tc, s21_div_417);
  tcase_add_test(tc, s21_div_418);
  tcase_add_test(tc, s21_div_419);
  tcase_add_test(tc, s21_div_420);
  tcase_add_test(tc, s21_div_421);
  tcase_add_test(tc, s21_div_424);
  tcase_add_test(tc, s21_div_425);
  tcase_add_test(tc, s21_div_426);
  tcase_add_test(tc, s21_div_427);
  tcase_add_test(tc, s21_div_429);
  tcase_add_test(tc, s21_div_430);
  tcase_add_test(tc, s21_div_431);
  tcase_add_test(tc, s21_div_432);
  tcase_add_test(tc, s21_div_433);
  tcase_add_test(tc, s21_div_434);
  tcase_add_test(tc, s21_div_436);
  tcase_add_test(tc, s21_div_437);
  tcase_add_test(tc, s21_div_438);
  tcase_add_test(tc, s21_div_439);
  tcase_add_test(tc, s21_div_440);
  tcase_add_test(tc, s21_div_441);
  tcase_add_test(tc, s21_div_442);
  tcase_add_test(tc, s21_div_443);
  tcase_add_test(tc, s21_div_444);
  tcase_add_test(tc, s21_div_447);
  tcase_add_test(tc, s21_div_448);
  tcase_add_test(tc, s21_div_450);
  tcase_add_test(tc, s21_div_451);
  tcase_add_test(tc, s21_div_452);
  tcase_add_test(tc, s21_div_453);
  tcase_add_test(tc, s21_div_455);
  tcase_add_test(tc, s21_div_456);
  tcase_add_test(tc, s21_div_457);
  tcase_add_test(tc, s21_div_458);
  tcase_add_test(tc, s21_div_459);
  tcase_add_test(tc, s21_div_460);
  tcase_add_test(tc, s21_div_461);
  tcase_add_test(tc, s21_div_462);
  tcase_add_test(tc, s21_div_463);
  tcase_add_test(tc, s21_div_464);
  tcase_add_test(tc, s21_div_467);
  tcase_add_test(tc, s21_div_468);
  tcase_add_test(tc, s21_div_469);
  tcase_add_test(tc, s21_div_470);
  tcase_add_test(tc, s21_div_471);
  tcase_add_test(tc, s21_div_472);
  tcase_add_test(tc, s21_div_473);
  tcase_add_test(tc, s21_div_474);
  tcase_add_test(tc, s21_div_475);
  tcase_add_test(tc, s21_div_476);
  tcase_add_test(tc, s21_div_477);
  tcase_add_test(tc, s21_div_478);
  tcase_add_test(tc, s21_div_479);
  tcase_add_test(tc, s21_div_481);
  tcase_add_test(tc, s21_div_484);
  tcase_add_test(tc, s21_div_485);
  tcase_add_test(tc, s21_div_486);
  tcase_add_test(tc, s21_div_487);
  tcase_add_test(tc, s21_div_489);
  tcase_add_test(tc, s21_div_490);
  tcase_add_test(tc, s21_div_491);
  tcase_add_test(tc, s21_div_492);
  tcase_add_test(tc, s21_div_493);
  tcase_add_test(tc, s21_div_494);
  tcase_add_test(tc, s21_div_495);
  tcase_add_test(tc, s21_div_496);
  tcase_add_test(tc, s21_div_500);
  tcase_add_test(tc, fail_s21_div_1);
  tcase_add_test(tc, fail_s21_div_2);
  tcase_add_test(tc, fail_s21_div_3);
  tcase_add_test(tc, fail_s21_div_4);
  tcase_add_test(tc, fail_s21_div_5);
  tcase_add_test(tc, fail_s21_div_6);
  tcase_add_test(tc, fail_s21_div_7);
  tcase_add_test(tc, fail_s21_div_8);
  tcase_add_test(tc, fail_s21_div_9);
  tcase_add_test(tc, fail_s21_div_10);
  tcase_add_test(tc, fail_s21_div_11);
  tcase_add_test(tc, fail_s21_div_12);
  tcase_add_test(tc, fail_s21_div_13);
  tcase_add_test(tc, fail_s21_div_14);
  tcase_add_test(tc, fail_s21_div_15);
  tcase_add_test(tc, fail_s21_div_16);
  tcase_add_test(tc, fail_s21_div_17);
  tcase_add_test(tc, fail_s21_div_18);
  tcase_add_test(tc, fail_s21_div_19);
  tcase_add_test(tc, fail_s21_div_20);

  suite_add_tcase(c, tc);
  return c;
}

Suite *s21_div_cases_4(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_div_cases_4");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_div6801);
  tcase_add_test(tc_core, test_div6802);
  tcase_add_test(tc_core, test_div6805);
  tcase_add_test(tc_core, test_div6806);
  tcase_add_test(tc_core, test_div6807);
  tcase_add_test(tc_core, test_div6808);
  tcase_add_test(tc_core, test_div6809);
  tcase_add_test(tc_core, test_div6810);
  tcase_add_test(tc_core, test_div6811);
  tcase_add_test(tc_core, test_div6812);
  tcase_add_test(tc_core, test_div6819);
  tcase_add_test(tc_core, test_div6820);
  tcase_add_test(tc_core, test_div6821);
  tcase_add_test(tc_core, test_div6822);
  tcase_add_test(tc_core, test_div6823);
  tcase_add_test(tc_core, test_div6824);
  tcase_add_test(tc_core, test_div6825);
  tcase_add_test(tc_core, test_div6826);
  tcase_add_test(tc_core, test_div6827);
  tcase_add_test(tc_core, test_div6828);
  tcase_add_test(tc_core, test_div6829);
  tcase_add_test(tc_core, test_div6830);
  tcase_add_test(tc_core, test_div6831);
  tcase_add_test(tc_core, test_div6832);
  tcase_add_test(tc_core, test_div6839);
  tcase_add_test(tc_core, test_div6840);
  tcase_add_test(tc_core, test_div6841);
  tcase_add_test(tc_core, test_div6842);
  tcase_add_test(tc_core, test_div6843);
  tcase_add_test(tc_core, test_div6844);
  tcase_add_test(tc_core, test_div6851);
  tcase_add_test(tc_core, test_div6852);
  tcase_add_test(tc_core, test_div6853);
  tcase_add_test(tc_core, test_div6854);
  tcase_add_test(tc_core, test_div6855);
  tcase_add_test(tc_core, test_div6856);
  tcase_add_test(tc_core, test_div6859);
  tcase_add_test(tc_core, test_div6860);
  tcase_add_test(tc_core, test_div6861);
  tcase_add_test(tc_core, test_div6862);
  tcase_add_test(tc_core, test_div6863);
  tcase_add_test(tc_core, test_div6864);
  tcase_add_test(tc_core, test_div6865);
  tcase_add_test(tc_core, test_div6866);
  tcase_add_test(tc_core, test_div6867);
  tcase_add_test(tc_core, test_div6868);
  tcase_add_test(tc_core, test_div6869);
  tcase_add_test(tc_core, test_div6870);
  tcase_add_test(tc_core, test_div6871);
  tcase_add_test(tc_core, test_div6872);
  tcase_add_test(tc_core, test_div6873);
  tcase_add_test(tc_core, test_div6874);
  tcase_add_test(tc_core, test_div6875);
  tcase_add_test(tc_core, test_div6876);
  tcase_add_test(tc_core, test_div6877);
  tcase_add_test(tc_core, test_div6878);
  tcase_add_test(tc_core, test_div6879);
  tcase_add_test(tc_core, test_div6880);
  tcase_add_test(tc_core, test_div6881);
  tcase_add_test(tc_core, test_div6882);
  tcase_add_test(tc_core, test_div6883);
  tcase_add_test(tc_core, test_div6884);
  tcase_add_test(tc_core, test_div6885);
  tcase_add_test(tc_core, test_div6886);
  tcase_add_test(tc_core, test_div6889);
  tcase_add_test(tc_core, test_div6890);
  tcase_add_test(tc_core, test_div6891);
  tcase_add_test(tc_core, test_div6892);
  tcase_add_test(tc_core, test_div6893);
  tcase_add_test(tc_core, test_div6894);
  tcase_add_test(tc_core, test_div6895);
  tcase_add_test(tc_core, test_div6896);
  tcase_add_test(tc_core, test_div6897);
  tcase_add_test(tc_core, test_div6898);
  tcase_add_test(tc_core, test_div6899);
  tcase_add_test(tc_core, test_div6900);
  tcase_add_test(tc_core, test_div6903);
  tcase_add_test(tc_core, test_div6904);
  tcase_add_test(tc_core, test_div6905);
  tcase_add_test(tc_core, test_div6906);
  tcase_add_test(tc_core, test_div6907);
  tcase_add_test(tc_core, test_div6908);
  tcase_add_test(tc_core, test_div6909);
  tcase_add_test(tc_core, test_div6910);
  tcase_add_test(tc_core, test_div6911);
  tcase_add_test(tc_core, test_div6912);
  tcase_add_test(tc_core, test_div6913);
  tcase_add_test(tc_core, test_div6914);
  tcase_add_test(tc_core, test_div6915);
  tcase_add_test(tc_core, test_div6916);
  tcase_add_test(tc_core, test_div6923);
  tcase_add_test(tc_core, test_div6924);
  tcase_add_test(tc_core, test_div6925);
  tcase_add_test(tc_core, test_div6926);
  tcase_add_test(tc_core, test_div6927);
  tcase_add_test(tc_core, test_div6928);
  tcase_add_test(tc_core, test_div6935);
  tcase_add_test(tc_core, test_div6936);
  tcase_add_test(tc_core, test_div6937);
  tcase_add_test(tc_core, test_div6938);
  tcase_add_test(tc_core, test_div6939);
  tcase_add_test(tc_core, test_div6940);
  tcase_add_test(tc_core, test_div6943);
  tcase_add_test(tc_core, test_div6944);
  tcase_add_test(tc_core, test_div6947);
  tcase_add_test(tc_core, test_div6948);
  tcase_add_test(tc_core, test_div6949);
  tcase_add_test(tc_core, test_div6950);
  tcase_add_test(tc_core, test_div6951);
  tcase_add_test(tc_core, test_div6952);
  tcase_add_test(tc_core, test_div6953);
  tcase_add_test(tc_core, test_div6954);
  tcase_add_test(tc_core, test_div6955);
  tcase_add_test(tc_core, test_div6956);
  tcase_add_test(tc_core, test_div6957);
  tcase_add_test(tc_core, test_div6958);
  tcase_add_test(tc_core, test_div6959);
  tcase_add_test(tc_core, test_div6960);
  tcase_add_test(tc_core, test_div6961);
  tcase_add_test(tc_core, test_div6962);
  tcase_add_test(tc_core, test_div6963);
  tcase_add_test(tc_core, test_div6964);
  tcase_add_test(tc_core, test_div6965);
  tcase_add_test(tc_core, test_div6966);
  tcase_add_test(tc_core, test_div6967);
  tcase_add_test(tc_core, test_div6968);
  tcase_add_test(tc_core, test_div6971);
  tcase_add_test(tc_core, test_div6972);
  tcase_add_test(tc_core, test_div6973);
  tcase_add_test(tc_core, test_div6974);
  tcase_add_test(tc_core, test_div6975);
  tcase_add_test(tc_core, test_div6976);
  tcase_add_test(tc_core, test_div6977);
  tcase_add_test(tc_core, test_div6978);
  tcase_add_test(tc_core, test_div6979);
  tcase_add_test(tc_core, test_div6980);
  tcase_add_test(tc_core, test_div6981);
  tcase_add_test(tc_core, test_div6982);
  tcase_add_test(tc_core, test_div6983);
  tcase_add_test(tc_core, test_div6984);
  tcase_add_test(tc_core, test_div6987);
  tcase_add_test(tc_core, test_div6988);
  tcase_add_test(tc_core, test_div6989);
  tcase_add_test(tc_core, test_div6990);
  tcase_add_test(tc_core, test_div6991);
  tcase_add_test(tc_core, test_div6992);
  tcase_add_test(tc_core, test_div6993);
  tcase_add_test(tc_core, test_div6994);
  tcase_add_test(tc_core, test_div6995);
  tcase_add_test(tc_core, test_div6996);
  tcase_add_test(tc_core, test_div6997);
  tcase_add_test(tc_core, test_div6998);
  tcase_add_test(tc_core, test_div6999);
  tcase_add_test(tc_core, test_div7000);
  tcase_add_test(tc_core, test_div7007);
  tcase_add_test(tc_core, test_div7008);
  tcase_add_test(tc_core, test_div7009);
  tcase_add_test(tc_core, test_div7010);
  tcase_add_test(tc_core, test_div7011);
  tcase_add_test(tc_core, test_div7012);
  tcase_add_test(tc_core, test_div7019);
  tcase_add_test(tc_core, test_div7020);
  tcase_add_test(tc_core, test_div7021);
  tcase_add_test(tc_core, test_div7022);
  tcase_add_test(tc_core, test_div7023);
  tcase_add_test(tc_core, test_div7024);
  tcase_add_test(tc_core, test_div7027);
  tcase_add_test(tc_core, test_div7028);
  tcase_add_test(tc_core, test_div7031);
  tcase_add_test(tc_core, test_div7032);
  tcase_add_test(tc_core, test_div7033);
  tcase_add_test(tc_core, test_div7034);
  tcase_add_test(tc_core, test_div7035);
  tcase_add_test(tc_core, test_div7036);
  tcase_add_test(tc_core, test_div7037);
  tcase_add_test(tc_core, test_div7038);
  tcase_add_test(tc_core, test_div7039);
  tcase_add_test(tc_core, test_div7040);
  tcase_add_test(tc_core, test_div7041);
  tcase_add_test(tc_core, test_div7042);
  tcase_add_test(tc_core, test_div7043);
  tcase_add_test(tc_core, test_div7044);
  tcase_add_test(tc_core, test_div7045);
  tcase_add_test(tc_core, test_div7046);
  tcase_add_test(tc_core, test_div7047);
  tcase_add_test(tc_core, test_div7048);
  tcase_add_test(tc_core, test_div7049);
  tcase_add_test(tc_core, test_div7050);
  tcase_add_test(tc_core, test_div7051);
  tcase_add_test(tc_core, test_div7052);
  tcase_add_test(tc_core, test_div7055);
  tcase_add_test(tc_core, test_div7056);

  suite_add_tcase(s, tc_core);
  return s;
}

START_TEST(s21_div_2_1) {
  // -30979193270988233338679646780
  s21_decimal dec_1 = {{0x984ada3c, 0x500c5485, 0x64196358, 0x80000000}};

  s21_decimal dec_2 = {{0x177a8, 0x0, 0x0, 0x80000000}};
  // 322136191570878393422756.49676
  s21_decimal dec_check = {{0x83d8e08c, 0xafcfd45d, 0x68167b31, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_2) {
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // 0.2489
  s21_decimal dec_2 = {{0x9b9, 0x0, 0x0, 0x40000}};
  // 28.123744475693049417436721575
  s21_decimal dec_check = {{0x44a771a7, 0xf2dcb802, 0x5adf6a8a, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_3) {
  // 705862468141717168747
  s21_decimal dec_1 = {{0x8b88a26b, 0x43cf3ef4, 0x26, 0x0}};
  // 64559634253.17
  s21_decimal dec_2 = {{0x25681a25, 0x5df, 0x0, 0x20000}};
  // 10933495462.097633989184975909
  s21_decimal dec_check = {{0xee37f425, 0xa4b177d6, 0x2353f9b8, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_4) {
  // 254666804429145290712444
  s21_decimal dec_1 = {{0x8ee257c, 0x83dfa1c0, 0x35ed, 0x0}};
  // -95019798.145059
  s21_decimal dec_2 = {{0x8550a823, 0x566b, 0x0, 0x80060000}};
  // -2680144658278122.0680692027037
  s21_decimal dec_check = {{0xa4ee4e9d, 0x8a4fc8ee, 0x5699a312, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_6) {
  // 3775674403670375096
  s21_decimal dec_1 = {{0xa24ebab8, 0x3465e3dd, 0x0, 0x0}};
  // -138167136977854
  s21_decimal dec_2 = {{0x8b1e83be, 0x7da9, 0x0, 0x80000000}};
  // -27326.862857956995959555242377
  s21_decimal dec_check = {{0xb74a3989, 0xe3f92b77, 0x584c404b, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_7) {
  // -8700031042.8319472
  s21_decimal dec_1 = {{0x466dbef0, 0x1351652, 0x0, 0x80070000}};
  // -0.8614765914374
  s21_decimal dec_2 = {{0xc80fe906, 0x7d5, 0x0, 0x800d0000}};
  // 10098975560.456819528200258593
  s21_decimal dec_check = {{0x88f68421, 0x2052e5e2, 0x20a1ad42, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_8) {
  // 692537130436
  s21_decimal dec_1 = {{0x3e6dfdc4, 0xa1, 0x0, 0x0}};
  // 9184
  s21_decimal dec_2 = {{0x23e0, 0x0, 0x0, 0x0}};
  // 75406917.512630662020905923345
  s21_decimal dec_check = {{0xca8d7311, 0x61a7ff8e, 0xf3a723e5, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_9) {
  // 8602990953768964.085
  s21_decimal dec_1 = {{0x1d4c4ff5, 0x7763f6b1, 0x0, 0x30000}};
  // -41
  s21_decimal dec_2 = {{0x29, 0x0, 0x0, 0x80000000}};
  // -209829047652901.56304878048780
  s21_decimal dec_check = {{0x4a6c960c, 0x94468d7e, 0x43cca6ea, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_10) {
  // 5954312408701041108
  s21_decimal dec_1 = {{0xa25379d4, 0x52a1f796, 0x0, 0x0}};
  // 0.1583892460072344669344574
  s21_decimal dec_2 = {{0x2cf533e, 0xfb78a5e3, 0x14f66, 0x190000}};
  // 37592908349529465249.018494431
  s21_decimal dec_check = {{0x637d3ddf, 0x2162e4e5, 0x79781ffd, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_11) {
  // 150674859081.73400736185000557
  s21_decimal dec_1 = {{0x3ae9226d, 0xc6dd6de4, 0x30af883f, 0x110000}};
  // 65415
  s21_decimal dec_2 = {{0xff87, 0x0, 0x0, 0x0}};
  // 2303368.6322973936767079416888
  s21_decimal dec_check = {{0x10fe0438, 0x95fd84a2, 0x4a6d04cd, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_12) {
  // 718315640823256902
  s21_decimal dec_1 = {{0xffe09746, 0x9f7f844, 0x0, 0x0}};
  // -8281
  s21_decimal dec_2 = {{0x2059, 0x0, 0x0, 0x80000000}};
  // -86742620555881.765728776717788
  s21_decimal dec_check = {{0xfbd08d63, 0x44d4441d, 0x1c072e70, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_13) {
  // -4856804750.52675789608716331
  s21_decimal dec_1 = {{0xf470082b, 0x4f2df77a, 0x191bed7, 0x80110000}};
  // -248913753
  s21_decimal dec_2 = {{0xed61f59, 0x0, 0x0, 0x80000000}};
  // 19.511998401015462958718730620
  s21_decimal dec_check = {{0x4fff417c, 0xcbb5231f, 0x3f0bf260, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_14) {
  // 1581792773917707.06533584
  s21_decimal dec_1 = {{0xf6405cd0, 0xea727e15, 0x217e, 0x80000}};
  // -4849133013656.615
  s21_decimal dec_2 = {{0xc2bf6427, 0x113a42, 0x0, 0x80030000}};
  // -326.20115172400994645526322027
  s21_decimal dec_check = {{0xd07e1b6b, 0xd50cc637, 0x6966ba12, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_16) {
  // -463905496183022388566917419
  s21_decimal dec_1 = {{0xcd9812b, 0x56e8283f, 0x17fbbcf, 0x80000000}};
  // 18713774224192.878357236720
  s21_decimal dec_2 = {{0xa19fcbf0, 0xbbc44636, 0xf7acb, 0xc0000}};
  // -24789520843063.956936943636216
  s21_decimal dec_check = {{0x2bbe8ef8, 0xa56f721a, 0x50196939, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_17) {
  // 16746022898395101451034965
  s21_decimal dec_1 = {{0xeac8a155, 0xb868a27a, 0xdda1b, 0x0}};
  // -0.70499
  s21_decimal dec_2 = {{0x11363, 0x0, 0x0, 0x80050000}};
  // -23753560899296587825408821.402
  s21_decimal dec_check = {{0x855ec89a, 0x906fb739, 0x4cc07c2c, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_18) {
  // -79228162514264337592119106042
  s21_decimal dec_1 = {{0xab1299fa, 0xffffffff, 0xffffffff, 0x80000000}};
  // -11222666274387408808684976
  s21_decimal dec_2 = {{0x74c9adb0, 0xf531a113, 0x9487d, 0x80000000}};
  // 7059.6559299887958780584087336
  s21_decimal dec_check = {{0x51134f28, 0x25a2aa96, 0xe41c1aec, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_21) {
  // 170757672
  s21_decimal dec_1 = {{0xa2d8e28, 0x0, 0x0, 0x0}};
  // -955060.85
  s21_decimal dec_2 = {{0x5b14ea5, 0x0, 0x0, 0x80020000}};
  // -178.79245285784670160021741023
  s21_decimal dec_check = {{0xa65dddf, 0xffc91b1, 0x39c55d75, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_22) {
  // 595224523356024135594632112
  s21_decimal dec_1 = {{0x9de163b0, 0x11247487, 0x1ec5bb2, 0x0}};
  // -350
  s21_decimal dec_2 = {{0x15e, 0x0, 0x0, 0x80000000}};
  // -1700641495302926101698948.8914
  s21_decimal dec_check = {{0xc370d712, 0xe9c86f22, 0x36f36071, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_24) {
  // -8453558417677888817
  s21_decimal dec_1 = {{0x8db42d31, 0x75511297, 0x0, 0x80000000}};
  // 606766853633
  s21_decimal dec_2 = {{0x461f6e01, 0x8d, 0x0, 0x0}};
  // -13932136.152564099661566260466
  s21_decimal dec_check = {{0xddf334f2, 0x32dd75a6, 0x2d046496, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_25) {
  // -651408582127746667653
  s21_decimal dec_1 = {{0x7535d485, 0x501c2e22, 0x23, 0x80000000}};
  // -186124204645029172494
  s21_decimal dec_2 = {{0x1112d50e, 0x16fe01ff, 0xa, 0x80000000}};
  // 3.4998595876882038080403871987
  s21_decimal dec_check = {{0xaae718f3, 0x2ed1a113, 0x711628f4, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_26) {
  // 5535945360026
  s21_decimal dec_1 = {{0xf00e829a, 0x508, 0x0, 0x0}};
  // -5222879559
  s21_decimal dec_2 = {{0x374ed147, 0x1, 0x0, 0x80000000}};
  // -1059.9412254273658237348605113
  s21_decimal dec_check = {{0xb0bdecb9, 0xa85badce, 0x223fa0d9, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_27) {
  // 27579588407068419018702221206
  s21_decimal dec_1 = {{0x3c1c6f96, 0x5c27b0b6, 0x591d4d03, 0x0}};
  // 66054
  s21_decimal dec_2 = {{0x10206, 0x0, 0x0, 0x0}};
  // 417530935402374103289766.27011
  s21_decimal dec_check = {{0x64b91543, 0x373e47fe, 0x86e95978, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_28) {
  // 4292
  s21_decimal dec_1 = {{0x10c4, 0x0, 0x0, 0x0}};
  // -3067.927
  s21_decimal dec_2 = {{0x2ed017, 0x0, 0x0, 0x80030000}};
  // -1.3989902628061228314754555764
  s21_decimal dec_check = {{0xbd341f74, 0x1c3833d7, 0x2d342d1d, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_29) {
  // 684.68
  s21_decimal dec_1 = {{0x10b74, 0x0, 0x0, 0x20000}};
  // 39
  s21_decimal dec_2 = {{0x27, 0x0, 0x0, 0x0}};
  // 17.555897435897435897435897436
  s21_decimal dec_check = {{0x93e5be5c, 0xff2375ff, 0x38b9e5e2, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_31) {
  // -60556780114442000273921860
  s21_decimal dec_1 = {{0xd9e65744, 0xa0c0b137, 0x321765, 0x80000000}};
  // 7707335012.089784844234093518
  s21_decimal dec_2 = {{0x39d973ce, 0x3585671f, 0x18e75bac, 0x120000}};
  // -7857032297084812.1027525224901
  s21_decimal dec_check = {{0x2c5629c5, 0xe4e154d6, 0xfddfd90e, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_32) {
  // 5676025213
  s21_decimal dec_1 = {{0x5251457d, 0x1, 0x0, 0x0}};
  // -437988
  s21_decimal dec_2 = {{0x6aee4, 0x0, 0x0, 0x80000000}};
  // -12959.316723289222535777235906
  s21_decimal dec_check = {{0xb5f633c2, 0x4411b506, 0x29dfb20f, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_33) {
  // -24735295715543110918
  s21_decimal dec_1 = {{0x6b305506, 0x57456c66, 0x1, 0x80000000}};
  // -691289792
  s21_decimal dec_2 = {{0x29343ec0, 0x0, 0x0, 0x80000000}};
  // 35781369841.988222094273308754
  s21_decimal dec_check = {{0xf97e6852, 0xdc0b4670, 0x739da7c9, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_35) {
  // 65
  s21_decimal dec_1 = {{0x41, 0x0, 0x0, 0x0}};
  // -27.753
  s21_decimal dec_2 = {{0x6c69, 0x0, 0x0, 0x80030000}};
  // -2.3420891435160162865275826037
  s21_decimal dec_check = {{0x44c56f75, 0xc703018f, 0x4bad4eac, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_36) {
  // 11540679415642
  s21_decimal dec_1 = {{0x618d75a, 0xa7f, 0x0, 0x0}};
  // 619659.221466
  s21_decimal dec_2 = {{0x469159da, 0x90, 0x0, 0x60000}};
  // 18624235.734503991424862763393
  s21_decimal dec_check = {{0xe661b981, 0x36296cc5, 0x3c2d9b52, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_37) {
  // 369927602256432019209460
  s21_decimal dec_1 = {{0xbdeefcf4, 0xd0c4b3c9, 0x4e55, 0x0}};
  // -5795437614620015
  s21_decimal dec_2 = {{0x78565d6f, 0x1496eb, 0x0, 0x80000000}};
  // -63830831.570548581902696385576
  s21_decimal dec_check = {{0xf4750c28, 0x46acf12, 0xce3fa059, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_39) {
  // 9700299807297542823938390169
  s21_decimal dec_1 = {{0x4b6c7899, 0x3ddbd7f7, 0x1f57e662, 0x0}};
  // 2141415023
  s21_decimal dec_2 = {{0x7fa3666f, 0x0, 0x0, 0x0}};
  // 4529855120614581970.2407075945
  s21_decimal dec_check = {{0x3a121869, 0x684f2f04, 0x925e1555, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_40) {
  // 21326402187697777852963
  s21_decimal dec_1 = {{0xf78cc223, 0x1b48c596, 0x484, 0x0}};
  // -18.356
  s21_decimal dec_2 = {{0x47b4, 0x0, 0x0, 0x80030000}};
  // -1161821866839059591030.8890826
  s21_decimal dec_check = {{0x33de88ca, 0x8b69c76, 0x258a5d80, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_41) {
  // -84792.70426813
  s21_decimal dec_1 = {{0x3be6d8bd, 0x7b6, 0x0, 0x80080000}};
  // 86
  s21_decimal dec_2 = {{0x56, 0x0, 0x0, 0x0}};
  // -985.96167753639534883720930233
  s21_decimal dec_check = {{0xc8ead05f, 0x62de6743, 0x1fdbaf10, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_43) {
  // -998958640
  s21_decimal dec_1 = {{0x3b8ae630, 0x0, 0x0, 0x80000000}};
  // 38.901
  s21_decimal dec_2 = {{0x97f5, 0x0, 0x0, 0x30000}};
  // -25679510.552427958150176088018
  s21_decimal dec_check = {{0xb15a9fd2, 0x77209d76, 0x52f997e0, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_44) {
  // -5894244
  s21_decimal dec_1 = {{0x59f064, 0x0, 0x0, 0x80000000}};
  // 678
  s21_decimal dec_2 = {{0x2a6, 0x0, 0x0, 0x0}};
  // -8693.5752212389380530973451327
  s21_decimal dec_check = {{0x51e4d06d, 0x13a0aa97, 0x1c172829, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_45) {
  // 10546678181644261617
  s21_decimal dec_1 = {{0x7144d8f1, 0x925d53ed, 0x0, 0x0}};
  // -6422310541
  s21_decimal dec_2 = {{0x7eccae8d, 0x1, 0x0, 0x80000000}};
  // -1642193742.3166192575115467310
  s21_decimal dec_check = {{0xeeec9a2e, 0x87e861f1, 0x350fe883, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_46) {
  // 545874254372861212920281
  s21_decimal dec_1 = {{0x6f2089d9, 0xe7126a5d, 0x7397, 0x0}};
  // 9459191645270
  s21_decimal dec_2 = {{0x63c20456, 0x89a, 0x0, 0x0}};
  // 57708340717.023284385172715593
  s21_decimal dec_check = {{0xce9c7849, 0xcbe887be, 0xba77387a, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_49) {
  // 75689928088722
  s21_decimal dec_1 = {{0xef46dc92, 0x44d6, 0x0, 0x0}};
  // 28.25614944236
  s21_decimal dec_2 = {{0xe3c667ec, 0x291, 0x0, 0xb0000}};
  // 2678706390731.7816378972617486
  s21_decimal dec_check = {{0x7022bb0e, 0x241f3339, 0x568dbd6c, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_50) {
  // -301276668075194040514
  s21_decimal dec_1 = {{0xd735c0c2, 0x550dbd61, 0x10, 0x80000000}};
  // -7.62
  s21_decimal dec_2 = {{0x2fa, 0x0, 0x0, 0x80020000}};
  // 39537620482308929201.312335958
  s21_decimal dec_check = {{0x2fbf8856, 0x1761caaf, 0x7fc0c0cd, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_51) {
  // 113545718705948996
  s21_decimal dec_1 = {{0xc53c0944, 0x193653a, 0x0, 0x0}};
  // -27.3570107968
  s21_decimal dec_2 = {{0xb20c9240, 0x3f, 0x0, 0x800a0000}};
  // -4150516280793026.1188674050449
  s21_decimal dec_check = {{0xa1bbd991, 0x493fa5ae, 0x861c4418, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_53) {
  // 4296258582490883605
  s21_decimal dec_1 = {{0x1097a615, 0x3b9f606b, 0x0, 0x0}};
  // 6.4713140292664800314226
  s21_decimal dec_2 = {{0x4f880372, 0x1b3ab744, 0xdb4, 0x160000}};
  // 663892767846078736.37824662757
  s21_decimal dec_check = {{0x769d0ce5, 0xfb0cee28, 0xd683ec31, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_54) {
  // 77596393.16566
  s21_decimal dec_1 = {{0xae8b8856, 0x70e, 0x0, 0x50000}};
  // -62
  s21_decimal dec_2 = {{0x3e, 0x0, 0x0, 0x80000000}};
  // -1251554.7284783870967741935484
  s21_decimal dec_check = {{0x1bcfef7c, 0xcce6207c, 0x28709e39, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_55) {
  // 42718752132242017624504
  s21_decimal dec_1 = {{0x64c21b8, 0xc9c70aa0, 0x90b, 0x0}};
  // -94.5587
  s21_decimal dec_2 = {{0xe6db3, 0x0, 0x0, 0x80040000}};
  // -451769664052509368513.99183787
  s21_decimal dec_check = {{0xf9a80dab, 0x24d5b2ad, 0x91f982c0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_56) {
  // 564820406600925712208450894
  s21_decimal dec_1 = {{0xa1ad554e, 0x9854c4ff, 0x1d3355f, 0x0}};
  // -97477961588740926
  s21_decimal dec_2 = {{0x89ed133e, 0x15a4fb0, 0x0, 0x80000000}};
  // -5794339534.7545368635547852529
  s21_decimal dec_check = {{0x8de41ef1, 0xd989bc98, 0xbb39a73b, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_60) {
  // 83985
  s21_decimal dec_1 = {{0x14811, 0x0, 0x0, 0x0}};
  // 44.024048
  s21_decimal dec_2 = {{0x29fc0f0, 0x0, 0x0, 0x60000}};
  // 1907.7073512185885314317302216
  s21_decimal dec_check = {{0x497839c8, 0x5431826f, 0x3da42f73, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_61) {
  // -504918890274129
  s21_decimal dec_1 = {{0x97185d51, 0x1cb38, 0x0, 0x80000000}};
  // 3523196
  s21_decimal dec_2 = {{0x35c27c, 0x0, 0x0, 0x0}};
  // -143312745.09681805951187501348
  s21_decimal dec_check = {{0x6a5b4124, 0xe4e77e76, 0x2e4e8d6b, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_62) {
  // 2215854218508111201526
  s21_decimal dec_1 = {{0x62c444f6, 0x1f2797a2, 0x78, 0x0}};
  // 19.60728
  s21_decimal dec_2 = {{0x1deb18, 0x0, 0x0, 0x50000}};
  // 113011810843121085715.40774651
  s21_decimal dec_check = {{0x32fadefb, 0x29c51af5, 0x24841e2e, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_63) {
  // 8033548094756017
  s21_decimal dec_1 = {{0x2c7954b1, 0x1c8a78, 0x0, 0x0}};
  // -888.3218777786709581644
  s21_decimal dec_2 = {{0x387e1f4c, 0x8f6cdd16, 0x1e1, 0x80130000}};
  // -9043510348799.0515081404162146
  s21_decimal dec_check = {{0x35a31cd7, 0x5a684794, 0x1d389dce, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_65) {
  // 484920259002881793
  s21_decimal dec_1 = {{0x641d701, 0x6bac868, 0x0, 0x0}};
  // -797808139108
  s21_decimal dec_2 = {{0xc1121b64, 0xb9, 0x0, 0x80000000}};
  // -607815.63289772066946417322486
  s21_decimal dec_check = {{0x32ca69f6, 0x4ab398ff, 0xc46554ac, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_66) {
  // -68654744713931862265.0
  s21_decimal dec_1 = {{0x5e5be9ba, 0x37c281b0, 0x25, 0x80010000}};
  // -48520
  s21_decimal dec_2 = {{0xbd88, 0x0, 0x0, 0x80000000}};
  // 1414978250493237.0623454245672
  s21_decimal dec_check = {{0x609ff328, 0x9a2d3fe7, 0x2db86cfe, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_68) {
  // -945552823939350244949989
  s21_decimal dec_1 = {{0xfc10ffe5, 0x8573a344, 0xc83a, 0x80000000}};
  // 5406362802
  s21_decimal dec_2 = {{0x423e8cb2, 0x1, 0x0, 0x0}};
  // -174896295082075.81903046487408
  s21_decimal dec_check = {{0x3372ad70, 0x7031f444, 0x3883151b, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_70) {
  // 1836833729225568644689
  s21_decimal dec_1 = {{0xba116e51, 0x933050c4, 0x63, 0x0}};
  // 50847804.1
  s21_decimal dec_2 = {{0x1e4ec259, 0x0, 0x0, 0x10000}};
  // 36124150526011.970784181808945
  s21_decimal dec_check = {{0x600eef31, 0xf98b0a1a, 0x74b9326b, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_71) {
  // -6329389322434632713255754178
  s21_decimal dec_1 = {{0x8f4799c2, 0xb1cb5a9b, 0x14738c52, 0x80000000}};
  // -3273791.5880463
  s21_decimal dec_2 = {{0x63d8c40f, 0x1dc6, 0x0, 0x80070000}};
  // 1933351330471168205181.0987456
  s21_decimal dec_check = {{0xbd970dc0, 0x5658ab87, 0x3e784eb0, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_72) {
  // -81509445899556206.1
  s21_decimal dec_1 = {{0x86d1d64d, 0xb4fcc17, 0x0, 0x80010000}};
  // 54865151486120.4545
  s21_decimal dec_2 = {{0x58c83441, 0x79d33a5, 0x0, 0x40000}};
  // -1485.6323857991371516575995959
  s21_decimal dec_check = {{0x9797d837, 0x19602d1e, 0x3000dcf2, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_73) {
  // -36133095928964384
  s21_decimal dec_1 = {{0xfb7b2520, 0x805edb, 0x0, 0x80000000}};
  // 21633.638311
  s21_decimal dec_2 = {{0x9771fa7, 0x5, 0x0, 0x60000}};
  // -1670227421274.3901873399495608
  s21_decimal dec_check = {{0xe3c97bb8, 0x586420cc, 0x35f7cc23, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_77) {
  // -23754855164870010094
  s21_decimal dec_1 = {{0xf0ee24ee, 0x49aa32e9, 0x1, 0x80000000}};
  // -8011681995371
  s21_decimal dec_2 = {{0x5d759a6b, 0x749, 0x0, 0x80000000}};
  // 2965027.2163317417089694314341
  s21_decimal dec_check = {{0x7d8a2f65, 0xb677820a, 0x5fce215a, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_81) {
  // 40462203467763802039610618
  s21_decimal dec_1 = {{0xc4676cfa, 0x71f65561, 0x217834, 0x0}};
  // 0.315414493592294415804374
  s21_decimal dec_2 = {{0x3f1e27d6, 0xa769e095, 0x42ca, 0x180000}};
  // 128282638527275002532158817.92
  s21_decimal dec_check = {{0xa2207a40, 0xeacf0140, 0x29734a88, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_83) {
  // 7442188150743708218118.3381102
  s21_decimal dec_1 = {{0xfc29e6e, 0x8a85c412, 0xf0785668, 0x70000}};
  // 53.16428488
  s21_decimal dec_2 = {{0x3ce242c8, 0x1, 0x0, 0x80000}};
  // 139984731620896923801.87129323
  s21_decimal dec_check = {{0x4d04f5eb, 0xb0ddc080, 0x2d3b43fe, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_84) {
  // 4710381311005985844470563360
  s21_decimal dec_1 = {{0xd9f54220, 0x880933d4, 0xf38560a, 0x0}};
  // -3490453460494
  s21_decimal dec_2 = {{0xaf3d160e, 0x32c, 0x0, 0x80000000}};
  // -1349504115817470.5504472570472
  s21_decimal dec_check = {{0x1cbc9a68, 0x12df07df, 0x2b9ad61f, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_85) {
  // 639894354171541
  s21_decimal dec_1 = {{0x3ac9695, 0x245fb, 0x0, 0x0}};
  // -52850935817585.587410
  s21_decimal dec_2 = {{0x1e2874d2, 0xdd743e1c, 0x2, 0x80060000}};
  // -12.107531196422504061432535231
  s21_decimal dec_check = {{0xab4898bf, 0x5472065a, 0x271f1d75, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_86) {
  // -9854442715798055819713.507265
  s21_decimal dec_1 = {{0x4f80efc1, 0xe1bb5cc, 0x1fd7676a, 0x80060000}};
  // 773728
  s21_decimal dec_2 = {{0xbce60, 0x0, 0x0, 0x0}};
  // -12736313944691229.759958935524
  s21_decimal dec_check = {{0x1ee7e7e4, 0x6a22193e, 0x29273b62, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_88) {
  // -1085287090
  s21_decimal dec_1 = {{0x40b02ab2, 0x0, 0x0, 0x80000000}};
  // -73640
  s21_decimal dec_2 = {{0x11fa8, 0x0, 0x0, 0x80000000}};
  // 14737.738864747419880499728408
  s21_decimal dec_check = {{0xc7005018, 0xbbf1ec9d, 0x2f9ec598, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_89) {
  // 185408227261819160442.184422
  s21_decimal dec_1 = {{0x3b3822e6, 0x23c33785, 0x995db8, 0x60000}};
  // -94611235242.534
  s21_decimal dec_2 = {{0x65118226, 0x560c, 0x0, 0x80030000}};
  // -1959685092.2253461365809496315
  s21_decimal dec_check = {{0xac440fb, 0x3068158b, 0x3f522299, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_90) {
  // 26710422969565901873772619065
  s21_decimal dec_1 = {{0x2f35e539, 0x949be02f, 0x564e5812, 0x0}};
  // -272224459965506
  s21_decimal dec_2 = {{0x323c4442, 0xf796, 0x0, 0x80000000}};
  // -98119114545953.815505486722160
  s21_decimal dec_check = {{0xebfe5ed8, 0xc3f0550c, 0x1fb43911, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_91) {
  // 753833970.1171117997
  s21_decimal dec_1 = {{0xb4875fad, 0x689d9004, 0x0, 0xa0000}};
  // -5743
  s21_decimal dec_2 = {{0x166f, 0x0, 0x0, 0x80000000}};
  // -131261.35645431164891171861396
  s21_decimal dec_check = {{0x4d3f3394, 0x27e22439, 0x2a69af57, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_92) {
  // -2953
  s21_decimal dec_1 = {{0xb89, 0x0, 0x0, 0x80000000}};
  // -515
  s21_decimal dec_2 = {{0x203, 0x0, 0x0, 0x80000000}};
  // 5.7339805825242718446601941748
  s21_decimal dec_check = {{0x7f88b2f4, 0x4800738b, 0xb946602e, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_93) {
  // -9686083614
  s21_decimal dec_1 = {{0x4155e81e, 0x2, 0x0, 0x80000000}};
  // 38744213
  s21_decimal dec_2 = {{0x24f3095, 0x0, 0x0, 0x0}};
  // -250.00078370413666681008593464
  s21_decimal dec_check = {{0x4369a38, 0x13552b8c, 0x50c79484, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_94) {
  // -845281685
  s21_decimal dec_1 = {{0x3261f995, 0x0, 0x0, 0x80000000}};
  // 89.0162
  s21_decimal dec_2 = {{0xd9532, 0x0, 0x0, 0x40000}};
  // -9495818.5701029700211871546977
  s21_decimal dec_check = {{0xd647f30a, 0x2964a292, 0x1eaec1cc, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_95) {
  // 939087738186857109
  s21_decimal dec_1 = {{0x878d7a95, 0xd084f52, 0x0, 0x0}};
  // 52624682115053368
  s21_decimal dec_2 = {{0x9be2b738, 0xbaf5de, 0x0, 0x0}};
  // 17.845005431742639928916153203
  s21_decimal dec_check = {{0xa68d9373, 0xdb0550d0, 0x39a90ae2, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_96) {
  // -4544872715
  s21_decimal dec_1 = {{0xee5410b, 0x1, 0x0, 0x80000000}};
  // 0.337920199756045
  s21_decimal dec_2 = {{0x2d78090d, 0x13356, 0x0, 0xf0000}};
  // -13449544354.794663334935088503
  s21_decimal dec_check = {{0x781d4d77, 0x6ba10edd, 0x2b7533cc, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_97) {
  // 2572643495.56269408797342
  s21_decimal dec_1 = {{0x50df429e, 0x540dbc7c, 0x367a, 0xe0000}};
  // 7043.0443
  s21_decimal dec_2 = {{0x432aeeb, 0x0, 0x0, 0x40000}};
  // 365274.35949291048587802010560
  s21_decimal dec_check = {{0xe6e563c0, 0x93cb7819, 0x7606c96e, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_100) {
  // -958.39
  s21_decimal dec_1 = {{0x1765f, 0x0, 0x0, 0x80020000}};
  // -52.166
  s21_decimal dec_2 = {{0xcbc6, 0x0, 0x0, 0x80030000}};
  // 18.371928075758156653759153472
  s21_decimal dec_check = {{0x60b5c540, 0x9fccf807, 0x3b5ce718, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_101) {
  // -45821862535068341061686943898
  s21_decimal dec_1 = {{0xef28609a, 0x64857e55, 0x940ef4d1, 0x80000000}};
  // -8252384.9
  s21_decimal dec_2 = {{0x4eb36c9, 0x0, 0x0, 0x80010000}};
  // 5552560028443212950681.3168516
  s21_decimal dec_check = {{0xb5804b84, 0xd8df02f7, 0xb369b336, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_102) {
  // 9916941910701775379
  s21_decimal dec_1 = {{0x25901a13, 0x89a00e20, 0x0, 0x0}};
  // 885025232223131570.801
  s21_decimal dec_2 = {{0x6d5a9271, 0xfa313fa4, 0x2f, 0x30000}};
  // 11.205264606740078893092210353
  s21_decimal dec_check = {{0xc13e86b1, 0x7ec09810, 0x2434c713, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_104) {
  // -1820250792291597883.49606015
  s21_decimal dec_1 = {{0xe0ddc87f, 0x513e2e50, 0x96914f, 0x80080000}};
  // 97262519106
  s21_decimal dec_2 = {{0xa54c4342, 0x16, 0x0, 0x0}};
  // -18714822.616385523452864660682
  s21_decimal dec_check = {{0xa4f484ca, 0xeb15d438, 0x3c7889d6, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_105) {
  // -57698267032447052565
  s21_decimal dec_1 = {{0xe0a36b15, 0x20b96c2a, 0x3, 0x80000000}};
  // -26510.3
  s21_decimal dec_2 = {{0x40b8f, 0x0, 0x0, 0x80010000}};
  // 2176447155726153.7049750474344
  s21_decimal dec_check = {{0xf2ef0e68, 0x44e380aa, 0x4653261f, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_106) {
  // -1225381929552441455465317496
  s21_decimal dec_1 = {{0xd739c478, 0x81dbe919, 0x3f59cb7, 0x80000000}};
  // -289666035
  s21_decimal dec_2 = {{0x1143f3f3, 0x0, 0x0, 0x80000000}};
  // 4230326588177455653.2501903304
  s21_decimal dec_check = {{0x23fff7c8, 0x9cd30066, 0x88b070fe, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_107) {
  // 6361563917782769.89
  s21_decimal dec_1 = {{0x2989d67d, 0x8d414de, 0x0, 0x20000}};
  // -2010788.15896728199922
  s21_decimal dec_2 = {{0x64a762f2, 0xe68775b2, 0xa, 0x800e0000}};
  // -3163716619.9794994778662749364
  s21_decimal dec_check = {{0x33f7c4b4, 0x41508a29, 0x6639a688, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_108) {
  // -8790669471678265324524665966
  s21_decimal dec_1 = {{0xeaddfc6e, 0xf095588d, 0x1c6778aa, 0x80000000}};
  // -59069.722208932480
  s21_decimal dec_2 = {{0x713e9280, 0xd1db99, 0x0, 0x800c0000}};
  // 148818534148260252773222.18765
  s21_decimal dec_check = {{0x3e20cd0d, 0x25f45d90, 0x3015fb0a, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_109) {
  // -483293519091968901122410401
  s21_decimal dec_1 = {{0x5da4c7a1, 0x2ad9ab41, 0x18fc562, 0x80000000}};
  // -7666503648504696.58
  s21_decimal dec_2 = {{0xe7d5fb1a, 0xaa3b071, 0x0, 0x80020000}};
  // 63039625525.546090200619518005
  s21_decimal dec_check = {{0x52f38835, 0x5f9ccfd8, 0xcbb127f3, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_110) {
  // 52777358265.6993730674
  s21_decimal dec_1 = {{0x895fa072, 0x9c546d29, 0x1c, 0xa0000}};
  // -274
  s21_decimal dec_2 = {{0x112, 0x0, 0x0, 0x80000000}};
  // -192618095.86021669002700729927
  s21_decimal dec_check = {{0xe8252e47, 0xf555cc2b, 0x3e3cfed5, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_111) {
  // -5991666337
  s21_decimal dec_1 = {{0x652192a1, 0x1, 0x0, 0x80000000}};
  // -56101.4
  s21_decimal dec_2 = {{0x88f76, 0x0, 0x0, 0x80010000}};
  // 106800.65625813259562149964172
  s21_decimal dec_check = {{0x39e7698c, 0xb091ccb1, 0x228257dd, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_112) {
  // 434631992032898214752366714
  s21_decimal dec_1 = {{0xd5ef307a, 0x7feb967b, 0x16784e7, 0x0}};
  // 120477315.2827243
  s21_decimal dec_2 = {{0x1bcf276b, 0x447bc, 0x0, 0x70000}};
  // 3607583643551042405.2689814319
  s21_decimal dec_check = {{0xf5d0432f, 0xe16f6397, 0x74913b83, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_113) {
  // 5083016577958337
  s21_decimal dec_1 = {{0x58441c1, 0x120efa, 0x0, 0x0}};
  // -507346529.0280124
  s21_decimal dec_2 = {{0x30684cbc, 0x12064a, 0x0, 0x80070000}};
  // -10018825.964368991749928203521
  s21_decimal dec_check = {{0xcbb53501, 0xd0ef564d, 0x205f60eb, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_114) {
  // 753254121672.90651288088
  s21_decimal dec_1 = {{0x4e222218, 0x66162b03, 0xff3, 0xb0000}};
  // -8503.6559
  s21_decimal dec_2 = {{0x5118e0f, 0x0, 0x0, 0x80040000}};
  // -88580033.168193754509854990722
  s21_decimal dec_check = {{0xbafa89c0, 0xffbc670a, 0x1c9f2b29, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_115) {
  // -52345463.4351704933115
  s21_decimal dec_1 = {{0xb55c02fb, 0x6064708f, 0x1c, 0x800d0000}};
  // 197.456
  s21_decimal dec_2 = {{0x30350, 0x0, 0x0, 0x30000}};
  // -265099.38130606562125992626205
  s21_decimal dec_check = {{0x9a07081d, 0xaed8e9ef, 0x55a881c1, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_116) {
  // -839767119076.282535940173359
  s21_decimal dec_1 = {{0x6923ae2f, 0xbe8532b3, 0x2b6a39a, 0x800f0000}};
  // 940.955608688
  s21_decimal dec_2 = {{0x15532670, 0xdb, 0x0, 0x90000}};
  // -892461994.29874558318444752578
  s21_decimal dec_check = {{0x8352517a, 0x8a2b47f4, 0x1cd645c8, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_117) {
  // -1834077489446.302423
  s21_decimal dec_1 = {{0x60fcb2d7, 0x1973f3c2, 0x0, 0x80060000}};
  // -836657559.54
  s21_decimal dec_2 = {{0x7ade1f32, 0x13, 0x0, 0x80020000}};
  // 2192.1483509390516526641601855
  s21_decimal dec_check = {{0x5c185d3f, 0x3fd34c24, 0x46d506b2, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_119) {
  // 3308027875996457
  s21_decimal dec_1 = {{0x4274b329, 0xbc0a2, 0x0, 0x0}};
  // -2.0843
  s21_decimal dec_2 = {{0x516b, 0x0, 0x0, 0x80040000}};
  // -1587116958209690.0638103919781
  s21_decimal dec_check = {{0xd4a95ca5, 0xa2e16bc, 0x334852e3, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_120) {
  // -7308370.9885694461
  s21_decimal dec_1 = {{0x369ac1fd, 0x103a53f, 0x0, 0x800a0000}};
  // 70.0186
  s21_decimal dec_2 = {{0xaaf1a, 0x0, 0x0, 0x40000}};
  // -104377.56522651761246297412402
  s21_decimal dec_check = {{0x23545332, 0xe2fe1014, 0x21b9e8ea, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_122) {
  // -530507422
  s21_decimal dec_1 = {{0x1f9ee69e, 0x0, 0x0, 0x80000000}};
  // -1022733
  s21_decimal dec_2 = {{0xf9b0d, 0x0, 0x0, 0x80000000}};
  // 518.71546337118289915354251794
  s21_decimal dec_check = {{0x4c178212, 0x71be2b32, 0xa79b2331, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_124) {
  // -3672266976040571856813860
  s21_decimal dec_1 = {{0xc8ccff24, 0xfdddfc97, 0x309a1, 0x80000000}};
  // -0.3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80010000}};
  // 12240889920135239522712866.667
  s21_decimal dec_check = {{0x97e4cf6b, 0x3a73a306, 0x278d6d44, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_126) {
  // 272069.47587
  s21_decimal dec_1 = {{0x55a91303, 0x6, 0x0, 0x50000}};
  // 129.260
  s21_decimal dec_2 = {{0x1f8ec, 0x0, 0x0, 0x30000}};
  // 2104.8234246479962865542317809
  s21_decimal dec_check = {{0x7a5f46f1, 0xd9d284bc, 0x4402b0f8, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_127) {
  // -4926920374546560642565388083
  s21_decimal dec_1 = {{0xcd69b733, 0xaff47410, 0xfeb73f8, 0x80000000}};
  // 82411124181512.8563160608
  s21_decimal dec_2 = {{0x2eae9620, 0x28f1a65e, 0xae83, 0xa0000}};
  // -59784651932363.860326192372362
  s21_decimal dec_check = {{0x37dda8a, 0x5163e30b, 0xc12cb47b, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_129) {
  // 6696315595780530
  s21_decimal dec_1 = {{0x7863f1b2, 0x17ca43, 0x0, 0x0}};
  // 39688.99158637734996229
  s21_decimal dec_2 = {{0xeceb2905, 0x278a54a6, 0xd7, 0x110000}};
  // 168719721215.56597362830580200
  s21_decimal dec_check = {{0xeb3399e8, 0x6a52d4da, 0x36842b11, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_130) {
  // -3003363047248937037261
  s21_decimal dec_1 = {{0x379f2dcd, 0xd008faf9, 0xa2, 0x80000000}};
  // -110326.8774312186136054917746
  s21_decimal dec_2 = {{0xd632ea72, 0x18e45dcc, 0x3909a40, 0x80160000}};
  // 27222405973751335.989090777816
  s21_decimal dec_check = {{0x70ecfad8, 0xd9e6d774, 0x57f5d8b0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_131) {
  // -8319204454149364747223582
  s21_decimal dec_1 = {{0xbdca421e, 0xfa24fe97, 0x6e1a8, 0x80000000}};
  // 51052157669129834063957
  s21_decimal dec_2 = {{0x55fde855, 0x8b02e226, 0xacf, 0x0}};
  // -162.95500198182245876966444502
  s21_decimal dec_check = {{0x25354dd6, 0xd49256b6, 0x34a75263, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_132) {
  // -1010619311
  s21_decimal dec_1 = {{0x3c3cd3af, 0x0, 0x0, 0x80000000}};
  // -140959311
  s21_decimal dec_2 = {{0x866de4f, 0x0, 0x0, 0x80000000}};
  // 7.1695818022266014055644752690
  s21_decimal dec_check = {{0xf8cf6b32, 0xe4aff215, 0xe7a96402, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_133) {
  // -6439100347
  s21_decimal dec_1 = {{0x7fccdfbb, 0x1, 0x0, 0x80000000}};
  // 31402479
  s21_decimal dec_2 = {{0x1df29ef, 0x0, 0x0, 0x0}};
  // -205.05070147487400596621687097
  s21_decimal dec_check = {{0x581ef939, 0xb2e4b0b, 0x42416580, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_134) {
  // -91106854450409411
  s21_decimal dec_1 = {{0x901eafc3, 0x143ad33, 0x0, 0x80000000}};
  // 30
  s21_decimal dec_2 = {{0x1e, 0x0, 0x0, 0x0}};
  // -3036895148346980.3666666666667
  s21_decimal dec_check = {{0x8fe3baab, 0xb967efaf, 0x62209b9e, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_136) {
  // -80508848352005
  s21_decimal dec_1 = {{0xed4eab05, 0x4938, 0x0, 0x80000000}};
  // 87386155
  s21_decimal dec_2 = {{0x535682b, 0x0, 0x0, 0x0}};
  // -921299.81404954823793311423303
  s21_decimal dec_check = {{0x36ef82ba, 0xf395e128, 0x1dc4d03d, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_137) {
  // -43454593453750849836
  s21_decimal dec_1 = {{0x8dd5912c, 0x5b0dba83, 0x2, 0x80000000}};
  // 597626745
  s21_decimal dec_2 = {{0x239f0f79, 0x0, 0x0, 0x0}};
  // -72711929004.701504508470416598
  s21_decimal dec_check = {{0x22e6d4d6, 0xa01ded99, 0xeaf1e5e1, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_138) {
  // -5781371908466437025403
  s21_decimal dec_1 = {{0xa4246e7b, 0x68a70fba, 0x139, 0x80000000}};
  // 9092660887.85327042443437799
  s21_decimal dec_2 = {{0x4ef966e7, 0x71010fe8, 0x2f02095, 0x110000}};
  // -635828387286.46226125508141146
  s21_decimal dec_check = {{0xa19d605a, 0x1ea3b310, 0xcd727dd2, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_141) {
  // 54431972764427698244875210
  s21_decimal dec_1 = {{0x576af3ca, 0x27fc4752, 0x2d066b, 0x0}};
  // -3.892
  s21_decimal dec_2 = {{0xf34, 0x0, 0x0, 0x80030000}};
  // -13985604512956757000224874.101
  s21_decimal dec_check = {{0x79459e75, 0xd2d37cfc, 0x2d309ef3, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_142) {
  // -3937854181250107
  s21_decimal dec_1 = {{0x1fa6943b, 0xdfd75, 0x0, 0x80000000}};
  // 7809264039
  s21_decimal dec_2 = {{0xd177e9a7, 0x1, 0x0, 0x0}};
  // -504254.19880595575288115828043
  s21_decimal dec_check = {{0xdc5154b, 0x26da9f62, 0xa2eeee01, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_143) {
  // -950277186097596453
  s21_decimal dec_1 = {{0xe3814825, 0xd301010, 0x0, 0x80000000}};
  // -939691618997.3
  s21_decimal dec_2 = {{0xe3d9fb15, 0x88b, 0x0, 0x80010000}};
  // 1011264.9372265252355416736117
  s21_decimal dec_check = {{0xc5634175, 0xf3200fa4, 0x20acfccc, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_145) {
  // 62343237261711280762932952
  s21_decimal dec_1 = {{0x318a4ed8, 0xa9f86302, 0x3391b1, 0x0}};
  // 6.2
  s21_decimal dec_2 = {{0x3e, 0x0, 0x0, 0x10000}};
  // 10055360848663109800473056.774
  s21_decimal dec_check = {{0xdb86d606, 0xdcc071a3, 0x207d997b, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_146) {
  // -615349845269589
  s21_decimal dec_1 = {{0x4cf09c55, 0x22fa8, 0x0, 0x80000000}};
  // -273544644302
  s21_decimal dec_2 = {{0xb08806ce, 0x3f, 0x0, 0x80000000}};
  // 2249.5408266528796314170580189
  s21_decimal dec_check = {{0x2c945cdd, 0xad0ab82f, 0x48afc3fd, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_147) {
  // 30600302981189819
  s21_decimal dec_1 = {{0x3d3690bb, 0x6cb6d0, 0x0, 0x0}};
  // 4043387617
  s21_decimal dec_2 = {{0xf10132e1, 0x0, 0x0, 0x0}};
  // 7567986.5201481174244789205427
  s21_decimal dec_check = {{0xc6de39b3, 0x3e28322e, 0xf488ead1, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_150) {
  // 4720672806343025668408977
  s21_decimal dec_1 = {{0xb8944691, 0x2f843c85, 0x3e7a4, 0x0}};
  // 40665902683092752177
  s21_decimal dec_2 = {{0x78591731, 0x345a4f08, 0x2, 0x0}};
  // 116084.29900427838480107177823
  s21_decimal dec_check = {{0x99b8075f, 0xdc06b7ff, 0x258244a5, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_151) {
  // 69445956071
  s21_decimal dec_1 = {{0x2b4d31e7, 0x10, 0x0, 0x0}};
  // -226660974
  s21_decimal dec_2 = {{0xd82926e, 0x0, 0x0, 0x80000000}};
  // -306.38691277749472655138241840
  s21_decimal dec_check = {{0x29763d30, 0x45be263f, 0x62ffbb3e, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_152) {
  // 48108058165672948
  s21_decimal dec_1 = {{0x25cc7bf4, 0xaaea06, 0x0, 0x0}};
  // 90898274
  s21_decimal dec_2 = {{0x56aff62, 0x0, 0x0, 0x0}};
  // 529251613.35486907045121670847
  s21_decimal dec_check = {{0xa298bebf, 0xf43bb8e7, 0xab02aad8, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_153) {
  // -96444620833063684446750
  s21_decimal dec_1 = {{0x9f2a9a1e, 0x45fbae2b, 0x146c, 0x80000000}};
  // 381628.0706295508363
  s21_decimal dec_2 = {{0x35ebad8b, 0x34f62715, 0x0, 0xd0000}};
  // -252718885887938742.26074066493
  s21_decimal dec_check = {{0xd52b9e3d, 0x8a0248e7, 0x51a86a91, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_154) {
  // 12918897613435233
  s21_decimal dec_1 = {{0x3f237161, 0x2de5ab, 0x0, 0x0}};
  // 8394118427.8718901061526
  s21_decimal dec_2 = {{0x34370796, 0x75f19a0a, 0x11c6, 0xd0000}};
  // 1539041.6187766941829961292691
  s21_decimal dec_check = {{0xd2471b93, 0x4fc845e1, 0x31baa765, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_155) {
  // -69460753265303235365947
  s21_decimal dec_1 = {{0x2dc88c3b, 0x799843f3, 0xeb5, 0x80000000}};
  // 7693837203397
  s21_decimal dec_2 = {{0x5c6ef7c5, 0x6ff, 0x0, 0x0}};
  // -9028102808.6524588959270670727
  s21_decimal dec_check = {{0x7da6c1c1, 0xed9ccfe9, 0x1d2bdf21, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_156) {
  // 902851581100.47825938024854
  s21_decimal dec_1 = {{0xe72f0996, 0x3a723b9e, 0x4aaea0, 0xe0000}};
  // 0.32882
  s21_decimal dec_2 = {{0x8072, 0x0, 0x0, 0x50000}};
  // 2745731953958.0264563598580987
  s21_decimal dec_check = {{0x8ef65cfb, 0xc5a713fe, 0x58b82992, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_157) {
  // 9375670509.0873844861
  s21_decimal dec_1 = {{0x2c97e47d, 0x1522ba89, 0x5, 0xa0000}};
  // 26491
  s21_decimal dec_2 = {{0x677b, 0x0, 0x0, 0x0}};
  // 353919.08607026478751651504284
  s21_decimal dec_check = {{0xeee4a09c, 0x1e02758, 0x725b802a, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_158) {
  // 8395476891659975458
  s21_decimal dec_1 = {{0x7764bb22, 0x7482b9c0, 0x0, 0x0}};
  // 625852424411057
  s21_decimal dec_2 = {{0x9f7057b1, 0x23935, 0x0, 0x0}};
  // 13414.467315614111557144995808
  s21_decimal dec_check = {{0x5c02e7e0, 0x50f47d9b, 0x2b582ff2, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_159) {
  // 3279076
  s21_decimal dec_1 = {{0x3208e4, 0x0, 0x0, 0x0}};
  // -60
  s21_decimal dec_2 = {{0x3c, 0x0, 0x0, 0x80000000}};
  // -54651.266666666666666666666667
  s21_decimal dec_check = {{0x41aaaaab, 0x744885e9, 0xb09677de, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_160) {
  // -9955269129853798894869748
  s21_decimal dec_1 = {{0x9fd11cf4, 0x388dc59e, 0x83c1c, 0x80000000}};
  // -4711782455306991.691346
  s21_decimal dec_2 = {{0x2317e652, 0x6d1dfb02, 0xff, 0x80060000}};
  // 2112845663.8826659986281871199
  s21_decimal dec_check = {{0xf094375f, 0x743ebadf, 0x44450cb9, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_161) {
  // -2756762685.04767057551331
  s21_decimal dec_1 = {{0xe6e6dfe3, 0x70c2099d, 0x3a60, 0x800e0000}};
  // 83
  s21_decimal dec_2 = {{0x53, 0x0, 0x0, 0x0}};
  // -33214008.253586392476063975904
  s21_decimal dec_check = {{0x839549e0, 0x46451d13, 0x6b51fbd3, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_163) {
  // 656045931157159283075.1
  s21_decimal dec_1 = {{0x3c845f1f, 0xa4a98912, 0x163, 0x10000}};
  // 4282725444.0943
  s21_decimal dec_2 = {{0x7f49a3ef, 0x26f3, 0x0, 0x40000}};
  // 153184214052.71713039794123553
  s21_decimal dec_check = {{0x76193321, 0x550b34f0, 0x317f19e8, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_164) {
  // -33775339639638320790560649561
  s21_decimal dec_1 = {{0x75993159, 0xafc3d811, 0x6d224e5e, 0x80000000}};
  // -5877771958
  s21_decimal dec_2 = {{0x5e57aeb6, 0x1, 0x0, 0x80000000}};
  // 5746282754925198952.4974778821
  s21_decimal dec_check = {{0xa991b9c5, 0x4d8dcf07, 0xb9ac230b, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_165) {
  // -236102584391092522886072
  s21_decimal dec_1 = {{0x2512a3b8, 0x25912a98, 0x31ff, 0x80000000}};
  // 480726982619.28463
  s21_decimal dec_2 = {{0x474bfa0f, 0xaac9dd, 0x0, 0x50000}};
  // -491136534722.19542630364578253
  s21_decimal dec_check = {{0xe76f81cd, 0xa9fe165d, 0x9eb1dca9, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_166) {
  // -9.37564171695258653006949
  s21_decimal dec_1 = {{0x35919c65, 0x74a188f6, 0xc689, 0x80170000}};
  // -5.363
  s21_decimal dec_2 = {{0x14f3, 0x0, 0x0, 0x80030000}};
  // 1.7482084126333370371190546336
  s21_decimal dec_check = {{0x132bdfa0, 0x779dab64, 0x387cd74f, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_167) {
  // -774365861726014739557249.9228
  s21_decimal dec_1 = {{0xd49b831c, 0xca7d7f9a, 0x1905677e, 0x80040000}};
  // -542652
  s21_decimal dec_2 = {{0x847bc, 0x0, 0x0, 0x80000000}};
  // 1427002686299902588.6889754812
  s21_decimal dec_check = {{0x273c0bc, 0x50833dbb, 0x2e1be3ba, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_168) {
  // -873973336
  s21_decimal dec_1 = {{0x3417c658, 0x0, 0x0, 0x80000000}};
  // 33157
  s21_decimal dec_2 = {{0x8185, 0x0, 0x0, 0x0}};
  // -26358.637271164459993364900323
  s21_decimal dec_check = {{0xf94329e3, 0xa85eaf85, 0x552b5a8d, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_169) {
  // 334557892822895718683824
  s21_decimal dec_1 = {{0x23f9d4b0, 0x6b722ebd, 0x46d8, 0x0}};
  // -3963042
  s21_decimal dec_2 = {{0x3c78a2, 0x0, 0x0, 0x80000000}};
  // -84419466869868075.756911988316
  s21_decimal dec_check = {{0xd4f50170, 0xe6e29a1f, 0x1b4703be, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_170) {
  // -57761493823174288153351488
  s21_decimal dec_1 = {{0x57d19540, 0xdabd8abc, 0x2fc778, 0x80000000}};
  // -4921.64574142716953501825
  s21_decimal dec_2 = {{0x6df42081, 0x4b86c721, 0x6838, 0x80140000}};
  // 11736215253563682803193.574390
  s21_decimal dec_check = {{0x208d73f6, 0xbbcac90d, 0x25ebf83f, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_171) {
  // 48129779376608062087388379380
  s21_decimal dec_1 = {{0x1ceab8f4, 0x117db563, 0x9b840538, 0x0}};
  // 72548421747.46449435655
  s21_decimal dec_2 = {{0x74845c07, 0x49290821, 0x189, 0xb0000}};
  // 663415939551988351.09155396491
  s21_decimal dec_check = {{0xd9c15b8b, 0x9e6f873f, 0xd65c7af6, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_173) {
  // -105558216580845351624
  s21_decimal dec_1 = {{0x790932c8, 0xb8ea1eb5, 0x5, 0x80000000}};
  // -7510.3527
  s21_decimal dec_2 = {{0x479fd27, 0x0, 0x0, 0x80040000}};
  // 14055027879162765.767844697893
  s21_decimal dec_check = {{0x361725, 0xbeff3b7, 0x2d6a0bec, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_175) {
  // -56392785986.455019303702
  s21_decimal dec_1 = {{0x3dd1b316, 0xf1e28e5, 0xbf1, 0x800c0000}};
  // 33085248
  s21_decimal dec_2 = {{0x1f8d740, 0x0, 0x0, 0x0}};
  // -1704.4691938369335875524342450
  s21_decimal dec_check = {{0xf1b7b2b2, 0x72415d43, 0x371309e9, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_176) {
  // 274442349962402954784
  s21_decimal dec_1 = {{0xa0777e20, 0xe0a7173b, 0xe, 0x0}};
  // -4030
  s21_decimal dec_2 = {{0xfbe, 0x0, 0x0, 0x80000000}};
  // -68099838700348127.737965260546
  s21_decimal dec_check = {{0xa6112f02, 0x3dd2855c, 0xdc0addc5, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_178) {
  // -584.4982441
  s21_decimal dec_1 = {{0x5c635aa9, 0x1, 0x0, 0x80070000}};
  // -2.9792
  s21_decimal dec_2 = {{0x7460, 0x0, 0x0, 0x80040000}};
  // 196.19301963614393125671321160
  s21_decimal dec_check = {{0xda60be48, 0x947a61d9, 0x3f64b4ca, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_180) {
  // -9806843372801
  s21_decimal dec_1 = {{0x556a6501, 0x8eb, 0x0, 0x80000000}};
  // 8041.4
  s21_decimal dec_2 = {{0x13a1e, 0x0, 0x0, 0x10000}};
  // -1219544279.9513766259606536175
  s21_decimal dec_check = {{0x3dc9bfef, 0xe1fda1e7, 0x2767d576, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_181) {
  // 671750413426620032075
  s21_decimal dec_1 = {{0xdf7ae44b, 0x6a68e1ec, 0x24, 0x0}};
  // 206555118239
  s21_decimal dec_2 = {{0x17a4fa9f, 0x30, 0x0, 0x0}};
  // 3252160581.4161121542219505553
  s21_decimal dec_check = {{0x6ac01f91, 0xd2501e47, 0x69153de7, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_182) {
  // -73437284196.493674510195181972
  s21_decimal dec_1 = {{0x15e94994, 0x5d1aee6b, 0xed49e5d1, 0x80120000}};
  // 18.51984917
  s21_decimal dec_2 = {{0x6e630c15, 0x0, 0x0, 0x80000}};
  // -3965328417.2234797153153694919
  s21_decimal dec_check = {{0xc1afbcc7, 0x493df666, 0x80206d8a, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_183) {
  // -88890938
  s21_decimal dec_1 = {{0x54c5e3a, 0x0, 0x0, 0x80000000}};
  // -4.39070218193
  s21_decimal dec_2 = {{0x3a9fd7d1, 0x66, 0x0, 0x800b0000}};
  // 20245267.002128264296416581347
  s21_decimal dec_check = {{0x65ee96e3, 0x50157ea6, 0x416a7e0b, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_184) {
  // 578933849045301504723268525
  s21_decimal dec_1 = {{0x829633ad, 0xd7cfddf2, 0x1dee202, 0x0}};
  // 42114
  s21_decimal dec_2 = {{0xa482, 0x0, 0x0, 0x0}};
  // 13746826448337880626947.535855
  s21_decimal dec_check = {{0xaf1b3ef, 0xe27f08, 0x2c6b1bbb, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_185) {
  // 558055298
  s21_decimal dec_1 = {{0x21433f82, 0x0, 0x0, 0x0}};
  // -4069030
  s21_decimal dec_2 = {{0x3e16a6, 0x0, 0x0, 0x80000000}};
  // -137.14700997535039063363995842
  s21_decimal dec_check = {{0xf8b8c8c2, 0xd3699bc3, 0x2c5088e6, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_186) {
  // -3304467070971877629348463805
  s21_decimal dec_1 = {{0xc9aec4bd, 0xdcdb9d88, 0xaad641e, 0x80000000}};
  // 17280550528
  s21_decimal dec_2 = {{0x6004680, 0x4, 0x0, 0x0}};
  // -191224640998421183.47981279112
  s21_decimal dec_check = {{0x2def4f88, 0x4289a0e, 0x3dc9bb48, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_187) {
  // 8919317.36804
  s21_decimal dec_1 = {{0xab463ae4, 0xcf, 0x0, 0x50000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -1274188.1954342857142857142857
  s21_decimal dec_check = {{0x14fc9249, 0xd29720e0, 0x292bd674, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_188) {
  // 321047988219862939338587
  s21_decimal dec_1 = {{0xa478075b, 0xbdb4cd2, 0x43fc, 0x0}};
  // -8173197
  s21_decimal dec_2 = {{0x7cb68d, 0x0, 0x0, 0x80000000}};
  // -39280588516325122.144809063088
  s21_decimal dec_check = {{0x6b0512b0, 0x4ba222a6, 0x7eec242a, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_189) {
  // 115430549885.23589586
  s21_decimal dec_1 = {{0xb5bfcfd2, 0xa0312b5a, 0x0, 0x80000}};
  // -7608671
  s21_decimal dec_2 = {{0x74195f, 0x0, 0x0, 0x80000000}};
  // -15170.921424416418565081865151
  s21_decimal dec_check = {{0x36d51bbf, 0x5913ca44, 0x31051792, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_190) {
  // -182244302969930803016541
  s21_decimal dec_1 = {{0xd033735d, 0x7bc40b73, 0x2697, 0x80000000}};
  // -16052
  s21_decimal dec_2 = {{0x3eb4, 0x0, 0x0, 0x80000000}};
  // 11353370481555619425.401258410
  s21_decimal dec_check = {{0xb07d41aa, 0xe887abe, 0x24af49b7, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_191) {
  // -280247180553108146944
  s21_decimal dec_1 = {{0x5cc54b00, 0x3135fde6, 0xf, 0x80000000}};
  // 935.00349640
  s21_decimal dec_2 = {{0xc50e1cc8, 0x15, 0x0, 0x80000}};
  // -299728484045386663.80114297934
  s21_decimal dec_check = {{0x2ef8844e, 0xc9fa4a53, 0x60d8f587, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_193) {
  // 5349121878
  s21_decimal dec_1 = {{0x3ed51f56, 0x1, 0x0, 0x0}};
  // 408181091.131
  s21_decimal dec_2 = {{0x97d2b3b, 0x5f, 0x0, 0x30000}};
  // 13.104776272655105202514589826
  s21_decimal dec_check = {{0xd5a47882, 0x3cca0903, 0x2a580451, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_194) {
  // 330910160.14495
  s21_decimal dec_1 = {{0x9a413a9f, 0x1e18, 0x0, 0x50000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // 47272880.020707142857142857143
  s21_decimal dec_check = {{0x97446db7, 0xe7a52c8e, 0x98bf35b8, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_195) {
  // -5096429245297793595275906
  s21_decimal dec_1 = {{0x4f02fa82, 0xfba4cef2, 0x43735, 0x80000000}};
  // 362875435523628018
  s21_decimal dec_2 = {{0x3819dbf2, 0x5093149, 0x0, 0x0}};
  // -14044569.420753608041346987720
  s21_decimal dec_check = {{0x220d76c8, 0xe156923c, 0x2d616541, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_196) {
  // 64026856655.627
  s21_decimal dec_1 = {{0x6a0c0b0b, 0x3a3b, 0x0, 0x30000}};
  // -6776.55813
  s21_decimal dec_2 = {{0x28643505, 0x0, 0x0, 0x80050000}};
  // -9448285.6086157413365241803069
  s21_decimal dec_check = {{0x2ac4b53, 0x27ff0f70, 0x1e87704d, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_197) {
  // 8059.6187859092643454345
  s21_decimal dec_1 = {{0xbba71d89, 0x20cb10f0, 0x1111, 0x130000}};
  // -3983
  s21_decimal dec_2 = {{0xf8f, 0x0, 0x0, 0x80000000}};
  // -2.0235045909890194188889028371
  s21_decimal dec_check = {{0x650cf713, 0xcad7057c, 0x416209a4, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_199) {
  // 16784404425706152
  s21_decimal dec_1 = {{0xaf8f8aa8, 0x3ba153, 0x0, 0x0}};
  // -8516
  s21_decimal dec_2 = {{0x2144, 0x0, 0x0, 0x80000000}};
  // -1970925836743.3245655237200564
  s21_decimal dec_check = {{0x37810ab4, 0xa1523c, 0x3faf1dcd, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_200) {
  // 168256068976684618891
  s21_decimal dec_1 = {{0x82e8d48b, 0x1f05a346, 0x9, 0x0}};
  // -7894.97
  s21_decimal dec_2 = {{0xc0bf9, 0x0, 0x0, 0x80020000}};
  // -21311805995042998.122982101262
  s21_decimal dec_check = {{0xec27510e, 0xf883c7b6, 0x44dcb675, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_201) {
  // -15752431411812791
  s21_decimal dec_1 = {{0xbea659b7, 0x37f6c0, 0x0, 0x80000000}};
  // 531120
  s21_decimal dec_2 = {{0x81ab0, 0x0, 0x0, 0x0}};
  // -29658893304.362085780991113119
  s21_decimal dec_check = {{0xe711f79f, 0xb48bc557, 0x5fd542f3, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_202) {
  // 693587400658795499881
  s21_decimal dec_1 = {{0x9a0a1169, 0x9975721d, 0x25, 0x0}};
  // -2096295226
  s21_decimal dec_2 = {{0x7cf2ed3a, 0x0, 0x0, 0x80000000}};
  // -330863416591.49277663860882160
  s21_decimal dec_check = {{0xfedffaf0, 0x52867ff5, 0x6ae8615f, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_203) {
  // -8815299665461752808024
  s21_decimal dec_1 = {{0x3396c258, 0xe0dbb447, 0x1dd, 0x80000000}};
  // 892865384
  s21_decimal dec_2 = {{0x35380b68, 0x0, 0x0, 0x0}};
  // -9873044496326.6184905920823558
  s21_decimal dec_check = {{0x2b10b9b4, 0x9921945e, 0x1fe6ca7e, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_204) {
  // -0.3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80010000}};
  // -0.07
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80020000}};
  // 4.2857142857142857142857142857
  s21_decimal dec_check = {{0x69249249, 0x9c9e9c7b, 0x8a7a9901, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_205) {
  // 7530.94
  s21_decimal dec_1 = {{0xb7dc6, 0x0, 0x0, 0x20000}};
  // 131
  s21_decimal dec_2 = {{0x83, 0x0, 0x0, 0x0}};
  // 57.488091603053435114503816794
  s21_decimal dec_check = {{0x15f4465a, 0x67602800, 0xb9c108ea, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_206) {
  // 77729554935992155847699418
  s21_decimal dec_1 = {{0xbae2abda, 0x9dcc2ca0, 0x404bdf, 0x0}};
  // 261272930668324.4577
  s21_decimal dec_2 = {{0x2b1b8021, 0x24424776, 0x0, 0x40000}};
  // 297503284160.22063517009191150
  s21_decimal dec_check = {{0x135420ee, 0xa58d330, 0x6020e517, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_208) {
  // 544011826912
  s21_decimal dec_1 = {{0xa9a1b6e0, 0x7e, 0x0, 0x0}};
  // 4.03618
  s21_decimal dec_2 = {{0x628a2, 0x0, 0x0, 0x50000}};
  // 134783836923.03118295021530259
  s21_decimal dec_check = {{0xad5e2c93, 0xa16e3ee, 0x2b8d0ec4, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_209) {
  // -12472044588467292955402
  s21_decimal dec_1 = {{0x99f3630a, 0x1c63697c, 0x2a4, 0x80000000}};
  // -11
  s21_decimal dec_2 = {{0xb, 0x0, 0x0, 0x80000000}};
  // 1133822235315208450491.0909091
  s21_decimal dec_check = {{0x94b24ea3, 0x5edd03ba, 0x24a2c1f9, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_210) {
  // 19888470744
  s21_decimal dec_1 = {{0xa171fad8, 0x4, 0x0, 0x0}};
  // 595067178
  s21_decimal dec_2 = {{0x2378012a, 0x0, 0x0, 0x0}};
  // 33.422227740478739696175950071
  s21_decimal dec_check = {{0x2d6228f7, 0x46d0608d, 0x6bfe3804, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_211) {
  // -9522886363678038533168
  s21_decimal dec_1 = {{0xd0d3a430, 0x3c98a559, 0x204, 0x80000000}};
  // 558109212094109.5652703
  s21_decimal dec_2 = {{0x41758d5f, 0x8d36521a, 0x12e, 0x70000}};
  // -17062765.059811034136952964682
  s21_decimal dec_check = {{0x5ff8064a, 0x52a5e88a, 0x3721fd0b, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_212) {
  // -32130274759794854165129162779
  s21_decimal dec_1 = {{0x337f701b, 0xdb35a85d, 0x67d18a54, 0x80000000}};
  // 680655578.6149989173120179
  s21_decimal dec_2 = {{0x94634cb3, 0x20e6f948, 0x5a158, 0x100000}};
  // -47204894471259141247.317789913
  s21_decimal dec_check = {{0xb8c34cd9, 0xe2687daa, 0x9886f938, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_213) {
  // 5991123.1
  s21_decimal dec_1 = {{0x3922c3f, 0x0, 0x0, 0x10000}};
  // 4.947562463767
  s21_decimal dec_2 = {{0xf1b40217, 0x47f, 0x0, 0xc0000}};
  // 1210924.1962836076156580042674
  s21_decimal dec_check = {{0xb58897b2, 0x29b8c13f, 0x272087ba, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_214) {
  // 5529140677325.65896
  s21_decimal dec_1 = {{0x46840f88, 0x7ac586a, 0x0, 0x50000}};
  // -7772.555236
  s21_decimal dec_2 = {{0xcf47c7e4, 0x1, 0x0, 0x80060000}};
  // -711367177.13068677637635510784
  s21_decimal dec_check = {{0x2eeb1200, 0x665cfaa2, 0xe5dae9ea, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_215) {
  // -7607813524967637612.7435646116
  s21_decimal dec_1 = {{0x3eff24a4, 0xd137d313, 0xf5d25bc7, 0x800a0000}};
  // -2.832002356647535
  s21_decimal dec_2 = {{0xee78966f, 0xa0fb0, 0x0, 0x800f0000}};
  // 2686372596798827427.6970396324
  s21_decimal dec_check = {{0x1855faa4, 0xc7042b76, 0x56cd273e, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_216) {
  // -4605
  s21_decimal dec_1 = {{0x11fd, 0x0, 0x0, 0x80000000}};
  // 0.5948
  s21_decimal dec_2 = {{0x173c, 0x0, 0x0, 0x40000}};
  // -7742.0981842636180228648285138
  s21_decimal dec_check = {{0xb3bd33d2, 0x7cc2c4dc, 0xfa29229b, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_218) {
  // 34276268308514372300003280048
  s21_decimal dec_1 = {{0x87cf04b0, 0x3d471e74, 0x6ec0aa24, 0x0}};
  // -9049802997420826820931198598
  s21_decimal dec_2 = {{0xe8439e86, 0x84babef1, 0x1d3dd253, 0x80000000}};
  // -3.7875154098142280511858563972
  s21_decimal dec_check = {{0xfb525b84, 0xd24aee2f, 0x7a6197d9, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_219) {
  // -145768630
  s21_decimal dec_1 = {{0x8b040b6, 0x0, 0x0, 0x80000000}};
  // -0.87
  s21_decimal dec_2 = {{0x57, 0x0, 0x0, 0x80020000}};
  // 167550149.42528735632183908046
  s21_decimal dec_check = {{0x221d6ce, 0x92ca0c6, 0x36236c6c, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_222) {
  // -640540449804744936746149950
  s21_decimal dec_1 = {{0x4970683e, 0x5cb657ce, 0x211d7b7, 0x80000000}};
  // -848974279888
  s21_decimal dec_2 = {{0xaacf74d0, 0xc5, 0x0, 0x80000000}};
  // 754487462081003.83500336709791
  s21_decimal dec_check = {{0x7661409f, 0x81a9a887, 0xf3c9bd77, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_224) {
  // 491661909457927706111
  s21_decimal dec_1 = {{0x2e0c95ff, 0xa72dfdb7, 0x1a, 0x0}};
  // 3.38
  s21_decimal dec_2 = {{0x152, 0x0, 0x0, 0x20000}};
  // 145462103389919439677.81065089
  s21_decimal dec_check = {{0x2ff69181, 0x8c5df372, 0x2f0057da, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_225) {
  // -938614054842203
  s21_decimal dec_1 = {{0x1d51ef5b, 0x355aa, 0x0, 0x80000000}};
  // -7559390.111507917
  s21_decimal dec_2 = {{0xaa50a5cd, 0x1adb39, 0x0, 0x80090000}};
  // 124165315.05806518174434941622
  s21_decimal dec_check = {{0x263b5ab6, 0xaaa032d4, 0x281eb6d1, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_226) {
  // 2149128566.1679579808973
  s21_decimal dec_1 = {{0x937c4cd, 0xb808b96, 0x48d, 0xd0000}};
  // -0.84073
  s21_decimal dec_2 = {{0x14869, 0x0, 0x0, 0x80050000}};
  // -2556264872.3941788456428342036
  s21_decimal dec_check = {{0xdd658b14, 0xc902977, 0x5298ed6c, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_227) {
  // -4875546515194970484053695.669
  s21_decimal dec_1 = {{0xc620dcb5, 0x31014936, 0xfc0f522, 0x80030000}};
  // 3245750068648362
  s21_decimal dec_2 = {{0x13df19aa, 0xb87fe, 0x0, 0x0}};
  // -1502132453.8476586367931395573
  s21_decimal dec_check = {{0x25002df5, 0xe94b63d2, 0x30895932, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_228) {
  // 811340274129925247
  s21_decimal dec_1 = {{0x3f7b747f, 0xb4275ae, 0x0, 0x0}};
  // 8031530004473.6811935794
  s21_decimal dec_2 = {{0xbc72a832, 0xe6b115fd, 0x1101, 0xa0000}};
  // 101019.39153287066037387178407
  s21_decimal dec_check = {{0x762eb1a7, 0xd0c54f52, 0x20a420d2, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_229) {
  // -779840891045.4123353
  s21_decimal dec_1 = {{0x18dbeb59, 0x6c398396, 0x0, 0x80070000}};
  // 8836
  s21_decimal dec_2 = {{0x2284, 0x0, 0x0, 0x0}};
  // -88257230.765664592043911272069
  s21_decimal dec_check = {{0xb20bc8a7, 0xab1ee681, 0x1c84778e, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_231) {
  // -331071602106793192
  s21_decimal dec_1 = {{0x36cb7ce8, 0x49833de, 0x0, 0x80000000}};
  // -30417416
  s21_decimal dec_2 = {{0x1d02208, 0x0, 0x0, 0x80000000}};
  // 10884277681.798913885387239994
  s21_decimal dec_check = {{0x58c6323a, 0x6d5601e5, 0x232b4373, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_232) {
  // 35460934665
  s21_decimal dec_1 = {{0x41a2ec09, 0x8, 0x0, 0x0}};
  // 334598
  s21_decimal dec_2 = {{0x51b06, 0x0, 0x0, 0x0}};
  // 105980.71316923591892360384700
  s21_decimal dec_check = {{0x496250bc, 0x4c59af09, 0x223e84e5, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_234) {
  // 71080365169259.982326126759
  s21_decimal dec_1 = {{0x83d0d8a7, 0x511ef6f1, 0x3acbda, 0xc0000}};
  // -191183935.14679820909
  s21_decimal dec_2 = {{0xa69f626d, 0x9522d9b, 0x1, 0x800b0000}};
  // -371790.47033780221713612404828
  s21_decimal dec_check = {{0x542df85c, 0x3f8e2ef5, 0x7821c972, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_235) {
  // -16119594317078646309057
  s21_decimal dec_1 = {{0xae2540c1, 0xd84f3a1c, 0x369, 0x80000000}};
  // -679097
  s21_decimal dec_2 = {{0xa5cb9, 0x0, 0x0, 0x80000000}};
  // 23736806843615339.648175444745
  s21_decimal dec_check = {{0x33c21309, 0x62c58f61, 0x4cb2a05d, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_236) {
  // -7944293250783733029909515
  s21_decimal dec_1 = {{0xe525b40b, 0x4763c, 0x69245, 0x80000000}};
  // 3233539534385903457195102
  s21_decimal dec_2 = {{0xceb6d45e, 0x8786c147, 0x2acba, 0x0}};
  // -2.4568412311966585360484581557
  s21_decimal dec_check = {{0x3cc2c0b5, 0x285e53e9, 0x4f6283ac, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_237) {
  // -967.56417530
  s21_decimal dec_1 = {{0x8721c3fa, 0x16, 0x0, 0x80080000}};
  // 89
  s21_decimal dec_2 = {{0x59, 0x0, 0x0, 0x0}};
  // -10.871507587640449438202247191
  s21_decimal dec_check = {{0x7cd0b817, 0x3c51a90f, 0x2320b347, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_239) {
  // 9582969934.19938
  s21_decimal dec_1 = {{0xe7e1d2a2, 0x36790, 0x0, 0x50000}};
  // 4642362296
  s21_decimal dec_2 = {{0x14b4d3b8, 0x1, 0x0, 0x0}};
  // 2.0642443056321470692902594606
  s21_decimal dec_check = {{0x16e8682e, 0x5a85b549, 0x42b30758, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_240) {
  // 4627584915796244245904129
  s21_decimal dec_1 = {{0xa2e9fb01, 0xe1862901, 0x3d3ed, 0x0}};
  // 8737042842
  s21_decimal dec_2 = {{0x8c4b19a, 0x2, 0x0, 0x0}};
  // 529651164527990.56171826529313
  s21_decimal dec_check = {{0x3f5dc421, 0x3420ac56, 0xab23b7ac, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_241) {
  // -14479569251144
  s21_decimal dec_1 = {{0x4994eb48, 0xd2b, 0x0, 0x80000000}};
  // -7970127.3607
  s21_decimal dec_2 = {{0x8e90ec07, 0x12, 0x0, 0x80040000}};
  // 1816729.9712852128149807070372
  s21_decimal dec_check = {{0x825c7ca4, 0xd7ee2b1a, 0x3ab3a35a, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_242) {
  // 3635660249961017821
  s21_decimal dec_1 = {{0x1aef31dd, 0x327475bc, 0x0, 0x0}};
  // -3008094848216.7664276781592
  s21_decimal dec_2 = {{0xedb5ba18, 0x7c17e3e5, 0x18e1e3, 0x800d0000}};
  // -1208625.5365638751232083658039
  s21_decimal dec_check = {{0xe1248537, 0x3b64bdc9, 0x270d8420, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_245) {
  // -5253499
  s21_decimal dec_1 = {{0x50297b, 0x0, 0x0, 0x80000000}};
  // 3.11
  s21_decimal dec_2 = {{0x137, 0x0, 0x0, 0x20000}};
  // -1689227.9742765273311897106109
  s21_decimal dec_check = {{0xfeeb6bd, 0xc456cb2e, 0x3694f75f, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_246) {
  // -7380081072736
  s21_decimal dec_1 = {{0x4f1c5a60, 0x6b6, 0x0, 0x80000000}};
  // 7.61166
  s21_decimal dec_2 = {{0xb9d4e, 0x0, 0x0, 0x50000}};
  // -969575765698.41532596043438619
  s21_decimal dec_check = {{0x61a27c36, 0xc79e4be9, 0x1f54248b, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_247) {
  // -75698749963728372238912
  s21_decimal dec_1 = {{0x37960a40, 0xa33076d8, 0x1007, 0x80000000}};
  // -27840824388214472
  s21_decimal dec_2 = {{0xfe9dec8, 0x62e915, 0x0, 0x80000000}};
  // 2718983.7810899389790516887983
  s21_decimal dec_check = {{0xaae741af, 0x348d547c, 0x57dae81d, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_248) {
  // 8647474960592703154825
  s21_decimal dec_1 = {{0x851d6a89, 0xc7d2945f, 0x1d4, 0x0}};
  // 810401532193463
  s21_decimal dec_2 = {{0x4f73aab7, 0x2e10e, 0x0, 0x0}};
  // 10670605.393831283901766141186
  s21_decimal dec_check = {{0x6ee98502, 0x7c82cf05, 0x227a8495, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_250) {
  // 36116753732404954249
  s21_decimal dec_1 = {{0x3442c489, 0xf5387c2a, 0x1, 0x0}};
  // 10573206146.367553
  s21_decimal dec_2 = {{0x647dc041, 0x259046, 0x0, 0x60000}};
  // 3415875301.4394730438588780887
  s21_decimal dec_check = {{0x40365157, 0x615000d5, 0x6e5f754f, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_251) {
  // 16818387003297.32118173101
  s21_decimal dec_1 = {{0x168455ad, 0xa89c328f, 0x16424, 0xb0000}};
  // -61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x80000000}};
  // -275711262349.13641281526245902
  s21_decimal dec_check = {{0xcca92a0e, 0x16990bf4, 0x59164d14, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_252) {
  // 8717
  s21_decimal dec_1 = {{0x220d, 0x0, 0x0, 0x0}};
  // -826.782
  s21_decimal dec_2 = {{0xc9d9e, 0x0, 0x0, 0x80030000}};
  // -10.543287105911836493779496893
  s21_decimal dec_check = {{0x8d5aefbd, 0x44b5ed63, 0x221133e3, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_253) {
  // -2636868775036662628324697
  s21_decimal dec_1 = {{0xea6d9559, 0xf1564650, 0x22e60, 0x80000000}};
  // -930612774658937390.72083830914
  s21_decimal dec_2 = {{0xfe35a882, 0x23d1811f, 0x2cb27c08, 0x800b0000}};
  // 2833475.7987854349813624838547
  s21_decimal dec_check = {{0x4cc95160, 0x8265b607, 0x3d97b820, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_255) {
  // -4096975784854509267990318
  s21_decimal dec_1 = {{0x1724372e, 0x80989129, 0x36391, 0x80000000}};
  // -84681317105754750.24
  s21_decimal dec_2 = {{0xb8127950, 0x7584d8ec, 0x0, 0x80020000}};
  // 48381106.067799789644924898130
  s21_decimal dec_check = {{0xeb34cb52, 0x4c4a3a78, 0x9c53e9b7, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_259) {
  // 44841189825252599805757570.5
  s21_decimal dec_1 = {{0x26dd519, 0xb672a5c6, 0x172eae9, 0x10000}};
  // 1309.0179148
  s21_decimal dec_2 = {{0xc3c484c, 0x3, 0x0, 0x70000}};
  // 34255596747966370769914.821719
  s21_decimal dec_check = {{0x4a63fc57, 0xb25614c6, 0x6eaf90c4, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_260) {
  // 93631785571448583
  s21_decimal dec_1 = {{0xe6abf707, 0x14ca59c, 0x0, 0x0}};
  // 0.92211013935
  s21_decimal dec_2 = {{0x7834692f, 0x15, 0x0, 0xb0000}};
  // 101540783010422260.35685332474
  s21_decimal dec_check = {{0xa0a015fa, 0xadcc1134, 0x20cf41b7, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_261) {
  // 148348457.43
  s21_decimal dec_1 = {{0x7439c82f, 0x3, 0x0, 0x20000}};
  // -68314304.476
  s21_decimal dec_2 = {{0xe7d98fdc, 0xf, 0x0, 0x80030000}};
  // -2.1715577515997017292094782506
  s21_decimal dec_check = {{0x12073c2a, 0xfb273506, 0x462ab467, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_262) {
  // -44175121759176519282
  s21_decimal dec_1 = {{0xad586e72, 0x650d8f30, 0x2, 0x80000000}};
  // 281890696900644
  s21_decimal dec_2 = {{0xcadab024, 0x10060, 0x0, 0x0}};
  // -156710.10872255429147503262296
  s21_decimal dec_check = {{0x48167a58, 0xa31d3b8c, 0x32a2c1a1, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_263) {
  // 1813710902271952
  s21_decimal dec_1 = {{0x7a0e1fd0, 0x6718f, 0x0, 0x0}};
  // -243237176382
  s21_decimal dec_2 = {{0xa210c43e, 0x38, 0x0, 0x80000000}};
  // -7456.5530205939767452862587226
  s21_decimal dec_check = {{0x46ad215a, 0x17362518, 0xf0ef2934, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_264) {
  // -225619135016254456
  s21_decimal dec_1 = {{0x6d2cbbf8, 0x3218f68, 0x0, 0x80000000}};
  // -8910438.611079756
  s21_decimal dec_2 = {{0x2834d24c, 0x1fa7ff, 0x0, 0x80090000}};
  // 25320766447.535651278526085409
  s21_decimal dec_check = {{0x4663f921, 0x9220acbd, 0x51d0d8db, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_265) {
  // 11769310259221015031269
  s21_decimal dec_1 = {{0x8527ede5, 0x3fd8c48, 0x27e, 0x0}};
  // 9814494
  s21_decimal dec_2 = {{0x95c1de, 0x0, 0x0, 0x0}};
  // 1199176468926570.7464153526407
  s21_decimal dec_check = {{0x7ae7087, 0x66df1e12, 0x26bf5af2, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_266) {
  // 628576.8538066
  s21_decimal dec_1 = {{0x850037d2, 0x5b7, 0x0, 0x70000}};
  // -0.9003307941
  s21_decimal dec_2 = {{0x18a393a5, 0x2, 0x0, 0x800a0000}};
  // -698162.11766359264196581588412
  s21_decimal dec_check = {{0x34dafdbc, 0x96f90a63, 0xe1969de7, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_267) {
  // -63120051294252231855
  s21_decimal dec_1 = {{0x4e56ecaf, 0x6bf7783a, 0x3, 0x80000000}};
  // 5682926096953904059
  s21_decimal dec_2 = {{0xfdbc0bbb, 0x4eddcf2c, 0x0, 0x0}};
  // -11.106963246994379799960052403
  s21_decimal dec_check = {{0xcc6962b3, 0x1afb5c22, 0x23e376f4, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_268) {
  // 90836929572975936347334226
  s21_decimal dec_1 = {{0x1d386652, 0xd1ba263c, 0x4b2377, 0x0}};
  // 9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  // 10092992174775104038592691.778
  s21_decimal dec_check = {{0x9241be42, 0x2375eda5, 0x209cba3a, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_269) {
  // -9076.2
  s21_decimal dec_1 = {{0x1628a, 0x0, 0x0, 0x80010000}};
  // 4510.399
  s21_decimal dec_2 = {{0x44d2bf, 0x0, 0x0, 0x30000}};
  // -2.0122831705132960520787628766
  s21_decimal dec_check = {{0x207692de, 0x903246f2, 0x4105375c, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_272) {
  // 39632724234316784833815
  s21_decimal dec_1 = {{0x4b5b9517, 0x7e8983f0, 0x864, 0x0}};
  // 654347.91643257853914222
  s21_decimal dec_2 = {{0x935f2c6e, 0x3a275728, 0xddb, 0x110000}};
  // 60568274520364253.935258021487
  s21_decimal dec_check = {{0x1577ae6f, 0xef11ef3e, 0xc3b4e704, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_273) {
  // -6092981987666983864645198319
  s21_decimal dec_1 = {{0x48c421ef, 0x65ad8f02, 0x13afff1f, 0x80000000}};
  // -2998045000
  s21_decimal dec_2 = {{0xb2b28948, 0x0, 0x0, 0x80000000}};
  // 2032318390039837248.8222152499
  s21_decimal dec_check = {{0xbbb51733, 0xd4eb6a49, 0x41aaf196, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_274) {
  // -747835030479
  s21_decimal dec_1 = {{0x1e70fbcf, 0xae, 0x0, 0x80000000}};
  // 76233581
  s21_decimal dec_2 = {{0x48b3b6d, 0x0, 0x0, 0x0}};
  // -9809.7848831081410172768874651
  s21_decimal dec_check = {{0xc15c31a9, 0x1814aa68, 0x1fb276c0, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_275) {
  // 8.7842325840712547
  s21_decimal dec_1 = {{0x43fad363, 0x1381421, 0x0, 0x100000}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -2.9280775280237515666666666667
  s21_decimal dec_check = {{0xf801baab, 0x8b6f648f, 0x5e9c7d58, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_276) {
  // -16277095371.923796
  s21_decimal dec_1 = {{0x979e6154, 0x39d3ee, 0x0, 0x80060000}};
  // 406449
  s21_decimal dec_2 = {{0x633b1, 0x0, 0x0, 0x0}};
  // -40047.079392307020068938538414
  s21_decimal dec_check = {{0x177f5dae, 0xf122cd6d, 0x81662aeb, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_277) {
  // -1419039392697517554658082
  s21_decimal dec_1 = {{0x4721eb22, 0x47953177, 0x12c7e, 0x80000000}};
  // 59943270727172
  s21_decimal dec_2 = {{0xa15bbe04, 0x3684, 0x0, 0x0}};
  // -23673039116.537125088563698228
  s21_decimal dec_check = {{0xf47a1a34, 0xf964c525, 0x4c7de105, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_278) {
  // 81333378
  s21_decimal dec_1 = {{0x4d90c82, 0x0, 0x0, 0x0}};
  // 54
  s21_decimal dec_2 = {{0x36, 0x0, 0x0, 0x0}};
  // 1506173.6666666666666666666667
  s21_decimal dec_check = {{0x956aaaab, 0xc52dba3f, 0x30aac6cc, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_279) {
  // -404079642814251721.1082746261
  s21_decimal dec_1 = {{0xd9a76995, 0x4c562056, 0xd0e77ed, 0x800a0000}};
  // -1860919905882
  s21_decimal dec_2 = {{0x47784e5a, 0x1b1, 0x0, 0x80000000}};
  // 217139.72833383953766555479661
  s21_decimal dec_check = {{0xfe9a6e6d, 0xf659a49b, 0x46296099, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_280) {
  // 14292738
  s21_decimal dec_1 = {{0xda1702, 0x0, 0x0, 0x0}};
  // -193725
  s21_decimal dec_2 = {{0x2f4bd, 0x0, 0x0, 0x80000000}};
  // -73.778490127758420441347270616
  s21_decimal dec_check = {{0x1fc227d8, 0xf5f70ec5, 0xee6422fb, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_281) {
  // 62307108001210980
  s21_decimal dec_1 = {{0xf64e264, 0xdd5bfc, 0x0, 0x0}};
  // -3907086669427872.23
  s21_decimal dec_2 = {{0x67ca8e97, 0x56c1376, 0x0, 0x80020000}};
  // -15.947203958578891273624322604
  s21_decimal dec_check = {{0xf40b822c, 0xd918b95b, 0x338737ca, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_282) {
  // -42406046109175588709657724
  s21_decimal dec_1 = {{0x26e6ec7c, 0x5dabe9b2, 0x2313d4, 0x80000000}};
  // -325290839655336166
  s21_decimal dec_2 = {{0x925848e6, 0x483aa4b, 0x0, 0x80000000}};
  // 130363480.73652232504884752481
  s21_decimal dec_check = {{0xb5a27061, 0x22f4d8b9, 0x2a1f6a15, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_284) {
  // -25450423625155402.19088766550
  s21_decimal dec_1 = {{0xd4de8656, 0xece3b3f7, 0x83935ae, 0x800b0000}};
  // -21543933131
  s21_decimal dec_2 = {{0x41e54cb, 0x5, 0x0, 0x80000000}};
  // 1181326.7090276229186318516289
  s21_decimal dec_check = {{0x8e244041, 0x2be426c9, 0x262bb49c, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_288) {
  // 3771442722287743796587.4
  s21_decimal dec_1 = {{0x93a43632, 0x80d17b9b, 0x7fc, 0x10000}};
  // -3960127265713.225185379909
  s21_decimal dec_2 = {{0x4e84645, 0xede2b0b1, 0x34696, 0x800c0000}};
  // -952353919.26438530655978196213
  s21_decimal dec_check = {{0x7611ae5, 0x1eea7ee9, 0x1ec5afde, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_289) {
  // 16571650340315097
  s21_decimal dec_1 = {{0x3e05fd9, 0x3adfd4, 0x0, 0x0}};
  // -563608
  s21_decimal dec_2 = {{0x89998, 0x0, 0x0, 0x80000000}};
  // -29402794744.423601155412982073
  s21_decimal dec_check = {{0xbbb5f939, 0xf3d534e1, 0x5f016bf8, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_291) {
  // -472082291179880615770000588
  s21_decimal dec_1 = {{0xfadf0ccc, 0x48d23e30, 0x1867f50, 0x80000000}};
  // -628013007808.5
  s21_decimal dec_2 = {{0x34ec2585, 0x5b6, 0x0, 0x80010000}};
  // 751707823421123.57003144392140
  s21_decimal dec_check = {{0xeacaedcc, 0x233dba2d, 0xf2e3d054, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_292) {
  // -49410135041951562461027926
  s21_decimal dec_1 = {{0xed3f1e56, 0xc9aaebd8, 0x28df00, 0x80000000}};
  // 0.38072
  s21_decimal dec_2 = {{0x94b8, 0x0, 0x0, 0x50000}};
  // -129780770755283574440607076.07
  s21_decimal dec_check = {{0xba17fb17, 0xffa4cc1d, 0x29ef36b7, 0x80020000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_293) {
  // -927452826639438
  s21_decimal dec_1 = {{0x70471c4e, 0x34b83, 0x0, 0x80000000}};
  // 9140530.77427
  s21_decimal dec_2 = {{0xd1cf19b3, 0xd4, 0x0, 0x50000}};
  // -101465970.58128806076081947050
  s21_decimal dec_check = {{0x938ec1aa, 0xb01b217c, 0x20c91180, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_299) {
  // 985880505448709330.367
  s21_decimal dec_1 = {{0x6ce195bf, 0x71d72849, 0x35, 0x30000}};
  // 3787132985.7
  s21_decimal dec_2 = {{0xd14ea241, 0x8, 0x0, 0x10000}};
  // 260323709.03565794218922561561
  s21_decimal dec_check = {{0xfd55019, 0x6e025a6b, 0x541d78f6, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_301) {
  // -884147
  s21_decimal dec_1 = {{0xd7db3, 0x0, 0x0, 0x80000000}};
  // -20154.27
  s21_decimal dec_2 = {{0x1ec0c3, 0x0, 0x0, 0x80020000}};
  // 43.868966725165436406280158001
  s21_decimal dec_check = {{0xef32fb31, 0x67eb42e8, 0x8dbf8f0b, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_303) {
  // -9291.89
  s21_decimal dec_1 = {{0xe2da5, 0x0, 0x0, 0x80020000}};
  // -434
  s21_decimal dec_2 = {{0x1b2, 0x0, 0x0, 0x80000000}};
  // 21.409884792626728110599078341
  s21_decimal dec_check = {{0x41e281c5, 0x3dd3cd9d, 0x452dd774, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_304) {
  // 604699579607576286413782670
  s21_decimal dec_1 = {{0x27b0fe8e, 0xe544bfac, 0x1f4321d, 0x0}};
  // -42973206240184410339490474
  s21_decimal dec_2 = {{0x1d773aaa, 0x2d9f6b0f, 0x238bee, 0x80000000}};
  // -14.071549053794347444427865343
  s21_decimal dec_check = {{0x3130bcff, 0xb7cf6c8f, 0x2d77b66a, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_305) {
  // 2478481592416962581
  s21_decimal dec_1 = {{0x725b8815, 0x226555e0, 0x0, 0x0}};
  // -604769.8038564917
  s21_decimal dec_2 = {{0x6d4c2835, 0x157c59, 0x0, 0x800a0000}};
  // -4098223119957.7080967584597872
  s21_decimal dec_check = {{0xf6a0c770, 0xfe862853, 0x846bb504, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_306) {
  // 3406827162
  s21_decimal dec_1 = {{0xcb100e9a, 0x0, 0x0, 0x0}};
  // 1310.9561
  s21_decimal dec_2 = {{0xc80939, 0x0, 0x0, 0x40000}};
  // 2598734.7417659523457726769035
  s21_decimal dec_check = {{0xfa9b678b, 0x5e3bdd0d, 0x53f83ade, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_307) {
  // -5162213547181403
  s21_decimal dec_1 = {{0x80bc055b, 0x125701, 0x0, 0x80000000}};
  // -0.40980
  s21_decimal dec_2 = {{0xa014, 0x0, 0x0, 0x80050000}};
  // 12596909583165941.922889214251
  s21_decimal dec_check = {{0x1e04292b, 0xd566c21c, 0x28b3eb5c, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_309) {
  // 35993484757287412.1
  s21_decimal dec_1 = {{0x3bdd9389, 0x4febed6, 0x0, 0x10000}};
  // -183313
  s21_decimal dec_2 = {{0x2cc11, 0x0, 0x0, 0x80000000}};
  // -196349875662.32297818485322918
  s21_decimal dec_check = {{0xf4e274a6, 0xcd3f3dbd, 0x3f71ae58, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_310) {
  // -496011740213256
  s21_decimal dec_1 = {{0xbb947008, 0x1c31e, 0x0, 0x80000000}};
  // -4198.4485
  s21_decimal dec_2 = {{0x280a1e5, 0x0, 0x0, 0x80040000}};
  // 118141675481.61088554498167597
  s21_decimal dec_check = {{0x46ae932d, 0x1758e00a, 0x262c734a, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_311) {
  // -70272086.696653
  s21_decimal dec_1 = {{0x7ec3e2cd, 0x3fe9, 0x0, 0x80060000}};
  // 0.525
  s21_decimal dec_2 = {{0x20d, 0x0, 0x0, 0x30000}};
  // -133851593.70791047619047619048
  s21_decimal dec_check = {{0x6aa879e8, 0x719e0fa2, 0x2b3ff1bf, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_313) {
  // 9748434803138514
  s21_decimal dec_1 = {{0x598e9fd2, 0x22a226, 0x0, 0x0}};
  // -950.5498863061
  s21_decimal dec_2 = {{0x2be215d5, 0x8a5, 0x0, 0x800a0000}};
  // -10255574108815.665846380970146
  s21_decimal dec_check = {{0x3ce4c0a2, 0x7175ac4c, 0x2123364a, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_314) {
  // 6344138036071
  s21_decimal dec_1 = {{0x1c181367, 0x5c5, 0x0, 0x0}};
  // -1181055.254887
  s21_decimal dec_2 = {{0xfc610167, 0x112, 0x0, 0x80060000}};
  // -5371584.4451985347987020593988
  s21_decimal dec_check = {{0x9a2e3b44, 0x963857ec, 0xad90b482, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_315) {
  // -13563116171317634277571757801
  s21_decimal dec_1 = {{0xd67306e9, 0xee48700b, 0x2bd32590, 0x80000000}};
  // 3090342269756997
  s21_decimal dec_2 = {{0x61392645, 0xafaa6, 0x0, 0x0}};
  // -4388871842465.5736601973281093
  s21_decimal dec_check = {{0x2d36d145, 0x2e4a01fc, 0x8dcfe5a1, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_317) {
  // -598657680462
  s21_decimal dec_1 = {{0x62c7444e, 0x8b, 0x0, 0x80000000}};
  // -1795.831796
  s21_decimal dec_2 = {{0x6b0a37f4, 0x0, 0x0, 0x80060000}};
  // 333359550.59679765242334533206
  s21_decimal dec_check = {{0x91edd656, 0xe113123f, 0x6bb6db10, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_318) {
  // -944409.52593358433
  s21_decimal dec_1 = {{0xc7939e61, 0x14f858b, 0x0, 0x800b0000}};
  // 0.047717
  s21_decimal dec_2 = {{0xba65, 0x0, 0x0, 0x60000}};
  // -19791888.130720379110170379529
  s21_decimal dec_check = {{0xd0194509, 0x72239154, 0x3ff37755, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_319) {
  // -3910763940744340210863.96
  s21_decimal dec_1 = {{0xd6f3d4bc, 0x4b36af28, 0x52d0, 0x80020000}};
  // 504.70
  s21_decimal dec_2 = {{0xc526, 0x0, 0x0, 0x20000}};
  // -7748690193668199347.8580542897
  s21_decimal dec_check = {{0x92ad1db1, 0xf233252a, 0xfa5fa9ba, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_320) {
  // 75501064948632591.0693
  s21_decimal dec_1 = {{0x6d6b0ca5, 0xede0a97d, 0x28, 0x40000}};
  // -756290293
  s21_decimal dec_2 = {{0x2d1412f5, 0x0, 0x0, 0x80000000}};
  // -99830799.955318996893828967867
  s21_decimal dec_check = {{0xb5dae493, 0xf66dd2df, 0x2041cf6a, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_321) {
  // 8977863191959560765054466978
  s21_decimal dec_1 = {{0x9f753ba2, 0xd99a424c, 0x1d02507a, 0x0}};
  // -247.785
  s21_decimal dec_2 = {{0x3c7e9, 0x0, 0x0, 0x80030000}};
  // -36232472473957506568414016.095
  s21_decimal dec_check = {{0xe72fb25f, 0x8a0f75d3, 0x7512cc7c, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_322) {
  // -71004269959729278827613067
  s21_decimal dec_1 = {{0xbea3cb8b, 0x2ff32c77, 0x3abbbd, 0x80000000}};
  // -9.473623854677090322
  s21_decimal dec_2 = {{0xd1b1e012, 0x837912b3, 0x0, 0x80120000}};
  // 7494942911911660274581045.5849
  s21_decimal dec_check = {{0x227a0d29, 0xdfee222e, 0xf22cb6f5, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_323) {
  // -94828517257844232444167680
  s21_decimal dec_1 = {{0xd2abc600, 0x38a25004, 0x4e70b8, 0x80000000}};
  // 943542530120
  s21_decimal dec_2 = {{0xaf847048, 0xdb, 0x0, 0x0}};
  // -100502642149881.59080246429284
  s21_decimal dec_check = {{0xb4424664, 0xcc139c78, 0x2079623a, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_324) {
  // -9485590928604802600.05558
  s21_decimal dec_1 = {{0x4f6ddeb6, 0x7dd05b24, 0xc8dd, 0x80050000}};
  // -557037943.58
  s21_decimal dec_2 = {{0xf83472b6, 0xc, 0x0, 0x80020000}};
  // 17028626214.656618814124015764
  s21_decimal dec_check = {{0x758b4094, 0xd1975d66, 0x3705bfdc, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_325) {
  // 9718224007614781273484759821
  s21_decimal dec_1 = {{0xb25b130d, 0x167c74f9, 0x1f66b9fb, 0x0}};
  // 8599
  s21_decimal dec_2 = {{0x2197, 0x0, 0x0, 0x0}};
  // 1130157461055329837595622.7260
  s21_decimal dec_check = {{0x4db3e4bc, 0x437125b3, 0x24847183, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_328) {
  // -5380.553343936810354426067217
  s21_decimal dec_1 = {{0x80153911, 0x3bc8151c, 0x1162b07d, 0x80180000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 2690.2766719684051772130336085
  s21_decimal dec_check = {{0x806a1d55, 0x2ae8698e, 0x56ed7272, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_329) {
  // 3619965468209616471349
  s21_decimal dec_1 = {{0x6cb4535, 0x3d1cd5f0, 0xc4, 0x0}};
  // -475170216
  s21_decimal dec_2 = {{0x1c5285a8, 0x0, 0x0, 0x80000000}};
  // -7618249937217.4801278979993982
  s21_decimal dec_check = {{0xd112f17e, 0x3bfffd9b, 0xf628afbe, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_330) {
  // 62017083170.13052408322
  s21_decimal dec_1 = {{0xb49ec202, 0x31fdf843, 0x150, 0xb0000}};
  // -44465004.87
  s21_decimal dec_2 = {{0x9083687, 0x1, 0x0, 0x80020000}};
  // -1394.7391516417599367558553469
  s21_decimal dec_check = {{0x50b15f7d, 0x215adde0, 0x2d110309, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_331) {
  // 413846211805898759290
  s21_decimal dec_1 = {{0x7baa5c7a, 0x6f4518fc, 0x16, 0x0}};
  // -18480435012902
  s21_decimal dec_2 = {{0xcfc3a526, 0x10ce, 0x0, 0x80000000}};
  // -22393748.389416949198963256083
  s21_decimal dec_check = {{0x4d0aab13, 0xb1ea4842, 0x485bacac, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_332) {
  // 688214545
  s21_decimal dec_1 = {{0x29055211, 0x0, 0x0, 0x0}};
  // -95
  s21_decimal dec_2 = {{0x5f, 0x0, 0x0, 0x80000000}};
  // -7244363.6315789473684210526316
  s21_decimal dec_check = {{0xf36f286c, 0xd101fd1c, 0xea13f8b1, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_333) {
  // 76939765829587
  s21_decimal dec_1 = {{0xef694fd3, 0x45f9, 0x0, 0x0}};
  // -8801690.373594357036
  s21_decimal dec_2 = {{0xed111d2c, 0x7a25e2c2, 0x0, 0x800c0000}};
  // -8741476.0760514021536773250036
  s21_decimal dec_check = {{0x6ed082cc, 0x9e8724f6, 0x1c3ec78f, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_334) {
  // 873059589133
  s21_decimal dec_1 = {{0x46681c0d, 0xcb, 0x0, 0x0}};
  // 7974752.1
  s21_decimal dec_2 = {{0x4c0d9c1, 0x0, 0x0, 0x10000}};
  // 109477.95971400791254689910674
  s21_decimal dec_check = {{0xb30c0f92, 0xce589bd7, 0x235fcdf8, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_338) {
  // -4843224050117270087378922234
  s21_decimal dec_1 = {{0x3587eafa, 0xd93b3034, 0xfa63895, 0x80000000}};
  // 1501034402283
  s21_decimal dec_2 = {{0x7c9f51eb, 0x15d, 0x0, 0x0}};
  // -3226590971366787.3965770182266
  s21_decimal dec_check = {{0xb11a8e7a, 0x7061cf62, 0x6841bc26, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_339) {
  // -7287153103
  s21_decimal dec_1 = {{0xb25921cf, 0x1, 0x0, 0x80000000}};
  // 9254928
  s21_decimal dec_2 = {{0x8d3810, 0x0, 0x0, 0x0}};
  // -787.38085298988819794168036748
  s21_decimal dec_check = {{0xb9cabd8c, 0xecf635c9, 0xfe6a9e1c, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_340) {
  // 1423557067.0980
  s21_decimal dec_1 = {{0x7a220d84, 0xcf2, 0x0, 0x40000}};
  // -33993.043172
  s21_decimal dec_2 = {{0xea24ace4, 0x7, 0x0, 0x80060000}};
  // -41877.894247214119356103878983
  s21_decimal dec_check = {{0x29576947, 0x18ee6893, 0x8750950c, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_341) {
  // -0.904
  s21_decimal dec_1 = {{0x388, 0x0, 0x0, 0x80030000}};
  // 0.348
  s21_decimal dec_2 = {{0x15c, 0x0, 0x0, 0x30000}};
  // -2.5977011494252873563218390805
  s21_decimal dec_check = {{0x29902f15, 0xd666062e, 0x53efae26, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_342) {
  // 338564707.75396380888231
  s21_decimal dec_1 = {{0xf746cca7, 0x5cead6f3, 0x72b, 0xe0000}};
  // -67999
  s21_decimal dec_2 = {{0x1099f, 0x0, 0x0, 0x80000000}};
  // -4978.9659811756615374095207282
  s21_decimal dec_check = {{0x89374b72, 0xc2d34d35, 0xa0e10a92, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_343) {
  // -37334886087660897989314122
  s21_decimal dec_1 = {{0x5b30464a, 0x3af41765, 0x1ee1f8, 0x80000000}};
  // -96376664984713019
  s21_decimal dec_2 = {{0xf10cf73b, 0x1566610, 0x0, 0x80000000}};
  // 387385121.63274011383768580390
  s21_decimal dec_check = {{0x409c8126, 0x505b2a1c, 0x7d2bbf08, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_346) {
  // 8224237527568.124564550052811
  s21_decimal dec_1 = {{0xdb29ebcb, 0xb8a7b020, 0x1a92ee09, 0xf0000}};
  // -3316331.3
  s21_decimal dec_2 = {{0x1fa0831, 0x0, 0x0, 0x80010000}};
  // -2479920.3648827620342244011661
  s21_decimal dec_check = {{0x79576e8d, 0x99352e57, 0x50216ba3, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_347) {
  // 3414099779715196
  s21_decimal dec_1 = {{0xc99007c, 0xc211b, 0x0, 0x0}};
  // -76545
  s21_decimal dec_2 = {{0x12b01, 0x0, 0x0, 0x80000000}};
  // -44602518514.797779084198837285
  s21_decimal dec_check = {{0xb3707c25, 0x9a7aac34, 0x901e56ad, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_348) {
  // -9513335820785772208203767
  s21_decimal dec_1 = {{0x78a627f7, 0xf7dd8745, 0x7de86, 0x80000000}};
  // -92522822634606.56
  s21_decimal dec_2 = {{0xd5acdb30, 0x20dee6, 0x0, 0x80020000}};
  // 102821504466.59064251883761633
  s21_decimal dec_check = {{0x75a8afe1, 0x9ac25684, 0x2139320c, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_349) {
  // -68120244000692800301116622126
  s21_decimal dec_1 = {{0x50d7052e, 0xca29125d, 0xdc1bbec2, 0x80000000}};
  // 26434932.1694296772089661728
  s21_decimal dec_2 = {{0xc19ec920, 0x719cf64f, 0xdaaa25, 0x130000}};
  // -2576902545619903005529.6994330
  s21_decimal dec_check = {{0x125a8c1a, 0x1f4c9ce0, 0x5343a365, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_350) {
  // 14.4747695750
  s21_decimal dec_1 = {{0xb3a28e86, 0x21, 0x0, 0xa0000}};
  // 0.6420
  s21_decimal dec_2 = {{0x1914, 0x0, 0x0, 0x40000}};
  // 22.546370054517133956386292835
  s21_decimal dec_check = {{0x500a8463, 0xbd0d0486, 0x48d9eb91, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_351) {
  // -73539418736025264133632594329
  s21_decimal dec_1 = {{0x627a9199, 0xd892ccdf, 0xed9e61a5, 0x80000000}};
  // -239214
  s21_decimal dec_2 = {{0x3a66e, 0x0, 0x0, 0x80000000}};
  // 307421048667825729821969.42624
  s21_decimal dec_check = {{0xadf2b720, 0x2ac9e5fd, 0x635545ec, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_352) {
  // -5142103623092892
  s21_decimal dec_1 = {{0x4bda4a9c, 0x1244b7, 0x0, 0x80000000}};
  // 580226.96
  s21_decimal dec_2 = {{0x3755b28, 0x0, 0x0, 0x20000}};
  // -8862228020.3817002918995697821
  s21_decimal dec_check = {{0x5da63676, 0xa35326b3, 0x1ca2a9c7, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_353) {
  // -497171041042153.1
  s21_decimal dec_1 = {{0x88f0751b, 0x11a9be, 0x0, 0x80010000}};
  // 8797.003349
  s21_decimal dec_2 = {{0xc579e55, 0x2, 0x0, 0x60000}};
  // -56515954503.833291651961607091
  s21_decimal dec_check = {{0xd63453b3, 0xa84b5012, 0xb69ce6e0, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_354) {
  // 50635444996709241909
  s21_decimal dec_1 = {{0x48af5435, 0xbeb53cf2, 0x2, 0x0}};
  // 1.02881325983
  s21_decimal dec_2 = {{0xf434739f, 0x17, 0x0, 0xb0000}};
  // 49217333187439855266.702895524
  s21_decimal dec_check = {{0x999529a4, 0x49cb6ebc, 0x9f079fb2, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_356) {
  // 11209852555490669817067654778
  s21_decimal dec_1 = {{0x8f9ece7a, 0xb1fc743c, 0x2438929c, 0x0}};
  // 5645
  s21_decimal dec_2 = {{0x160d, 0x0, 0x0, 0x0}};
  // 1985802047031119542438911.3867
  s21_decimal dec_check = {{0x7e88a80b, 0xc236f0d4, 0x402a2b66, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_357) {
  // 173073
  s21_decimal dec_1 = {{0x2a411, 0x0, 0x0, 0x0}};
  // 3831.7035
  s21_decimal dec_2 = {{0x248abeb, 0x0, 0x0, 0x40000}};
  // 45.168682806485418300241654919
  s21_decimal dec_check = {{0xd478b487, 0x5ae1bec9, 0x91f2a8a1, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_358) {
  // 1353716801125665018576280913
  s21_decimal dec_1 = {{0x79529d51, 0xd5e5351c, 0x45fc4ae, 0x0}};
  // 83367911766791854110500453
  s21_decimal dec_2 = {{0xf8276665, 0x8d7aea26, 0x44f5d7, 0x0}};
  // 16.237863854770251908832421099
  s21_decimal dec_check = {{0x277de4eb, 0x64ae812e, 0x3477a56b, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_360) {
  // -7974664.00228
  s21_decimal dec_1 = {{0xacb395e4, 0xb9, 0x0, 0x80050000}};
  // 532
  s21_decimal dec_2 = {{0x214, 0x0, 0x0, 0x0}};
  // -14989.969929097744360902255639
  s21_decimal dec_check = {{0x40e46417, 0x2189bb40, 0x306f699a, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_361) {
  // 564047622090
  s21_decimal dec_1 = {{0x53dbafca, 0x83, 0x0, 0x0}};
  // 716793974.08147
  s21_decimal dec_2 = {{0x29052d93, 0x4131, 0x0, 0x50000}};
  // 786.90340946684769315699620884
  s21_decimal dec_check = {{0x6564fc14, 0x66aa23c7, 0xfe431fda, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_363) {
  // -8705.2336920318
  s21_decimal dec_1 = {{0x739e76fe, 0x4f2c, 0x0, 0x800a0000}};
  // 7.9
  s21_decimal dec_2 = {{0x4f, 0x0, 0x0, 0x10000}};
  // -1101.9283154470632911392405063
  s21_decimal dec_check = {{0x672ef647, 0xc3f7c034, 0x239aeff8, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_365) {
  // -44843722436206307334
  s21_decimal dec_1 = {{0xa84aa806, 0x6e54e7f6, 0x2, 0x80000000}};
  // -680889
  s21_decimal dec_2 = {{0xa63b9, 0x0, 0x0, 0x80000000}};
  // 65860547660788.039363244229236
  s21_decimal dec_check = {{0x2ce28274, 0xbede0056, 0xd4ce9172, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_366) {
  // -79065802.953
  s21_decimal dec_1 = {{0x68b068c9, 0x12, 0x0, 0x80030000}};
  // 446.37
  s21_decimal dec_2 = {{0xae5d, 0x0, 0x0, 0x20000}};
  // -177130.63815444586329726460112
  s21_decimal dec_check = {{0xd11320d0, 0x81042c6d, 0x393be729, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_370) {
  // 9392838719121440310.10632825
  s21_decimal dec_1 = {{0x37db479, 0xb9b2f8c3, 0x308f518, 0x80000}};
  // -337285.411
  s21_decimal dec_2 = {{0x141a9123, 0x0, 0x0, 0x80030000}};
  // -27848339752594.399376812441645
  s21_decimal dec_check = {{0xc93e802d, 0xfe6de168, 0x59fb9b52, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_371) {
  // 39247951288006664686645688877
  s21_decimal dec_1 = {{0x4bee3a2d, 0x9a650437, 0x7ed124f6, 0x0}};
  // 3.758068867671204741
  s21_decimal dec_2 = {{0x5aff2385, 0x342757b9, 0x0, 0x120000}};
  // 10443648764831652597374259237
  s21_decimal dec_check = {{0x49761025, 0xf9ad5e3b, 0x21bec8a5, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_373) {
  // 16967257368034314181637418157
  s21_decimal dec_1 = {{0xc4a1acad, 0xfa2817df, 0x36d2fc80, 0x0}};
  // -224475916859724574399665
  s21_decimal dec_2 = {{0x32aa9cb1, 0xdd24638a, 0x2f88, 0x80000000}};
  // -75586.092287295057343295900823
  s21_decimal dec_check = {{0x5421cc97, 0x60f63166, 0xf43b59a1, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_374) {
  // 502185146537.3
  s21_decimal dec_1 = {{0x3dac369d, 0x491, 0x0, 0x10000}};
  // 8578397470.000
  s21_decimal dec_2 = {{0x50557d30, 0x7cd, 0x0, 0x30000}};
  // 58.540671295952436207178914968
  s21_decimal dec_check = {{0xbdba9c98, 0xe43e1163, 0xbd27b555, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_377) {
  // -7485275951154740286551830371
  s21_decimal dec_1 = {{0xdbb92f63, 0x650fe045, 0x182facd6, 0x80000000}};
  // -126112610
  s21_decimal dec_2 = {{0x7845362, 0x0, 0x0, 0x80000000}};
  // 59353905617802536055.290825961
  s21_decimal dec_check = {{0x3bb18ce9, 0xd0e8f77d, 0xbfc86666, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_378) {
  // 701443243289699308856670860
  s21_decimal dec_1 = {{0x8bdffa8c, 0x6999809e, 0x2443862, 0x0}};
  // -9872.362
  s21_decimal dec_2 = {{0x96a3ea, 0x0, 0x0, 0x80030000}};
  // -71051207734248329716502.581652
  s21_decimal dec_check = {{0x1a675194, 0x28d7fce4, 0xe5942e79, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_379) {
  // -6900170610202.3
  s21_decimal dec_1 = {{0xb62e5d07, 0x3ec1, 0x0, 0x80010000}};
  // 1321080.74116
  s21_decimal dec_2 = {{0xc2413c84, 0x1e, 0x0, 0x50000}};
  // -5223125.5783378344681098840461
  s21_decimal dec_check = {{0xc2ca098d, 0x996804dc, 0xa8c4aea1, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_380) {
  // 631873737.596145691821
  s21_decimal dec_1 = {{0x7ca6ecad, 0x41027888, 0x22, 0xc0000}};
  // -22003589
  s21_decimal dec_2 = {{0x14fbf85, 0x0, 0x0, 0x80000000}};
  // -28.716848764814944135749854262
  s21_decimal dec_check = {{0x57986436, 0xe3335240, 0x5cca0542, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_381) {
  // 62402495606378348926127
  s21_decimal dec_1 = {{0xd7afd4af, 0xd897bb68, 0xd36, 0x0}};
  // 6028653329.9
  s21_decimal dec_2 = {{0x95b7eb3, 0xe, 0x0, 0x10000}};
  // 10350984240026.528005737834124
  s21_decimal dec_check = {{0x795a668c, 0x51ea754, 0x2172222c, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_382) {
  // 13475429690334558387310419
  s21_decimal dec_1 = {{0x534e0f53, 0x81dc90e4, 0xb2588, 0x0}};
  // -430873748842443.362010109289
  s21_decimal dec_2 = {{0xedcf9569, 0xba64999b, 0x1646910, 0x800c0000}};
  // -31274659286.013009250869782259
  s21_decimal dec_check = {{0xc27b26f3, 0x14fb869f, 0x650dcab5, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_383) {
  // 6819979100921443.94
  s21_decimal dec_1 = {{0x6099df0a, 0x976f17c, 0x0, 0x20000}};
  // -586036
  s21_decimal dec_2 = {{0x8f134, 0x0, 0x0, 0x80000000}};
  // -11637474661.832112600591089967
  s21_decimal dec_check = {{0x61cfc12f, 0x87b92e25, 0x259a4b1d, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_384) {
  // 5.23
  s21_decimal dec_1 = {{0x20b, 0x0, 0x0, 0x20000}};
  // -0.854
  s21_decimal dec_2 = {{0x356, 0x0, 0x0, 0x80030000}};
  // -6.1241217798594847775175644028
  s21_decimal dec_check = {{0xb71e937c, 0x250c9ddb, 0xc5e18c4d, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_385) {
  // 3121543182137432809514
  s21_decimal dec_1 = {{0x6829202a, 0x381d2982, 0xa9, 0x0}};
  // 62601584712366776655
  s21_decimal dec_2 = {{0x5525614f, 0x64c5819e, 0x3, 0x0}};
  // 49.863644770014588008328337877
  s21_decimal dec_check = {{0xaac19d5, 0x627fe293, 0xa11e3d7f, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_387) {
  // 86863465156431978383388959
  s21_decimal dec_1 = {{0xd711b11f, 0xe1b1443e, 0x47da0d, 0x0}};
  // -3910192400546602793922
  s21_decimal dec_2 = {{0xbc31bbc2, 0xf8d20735, 0xd3, 0x80000000}};
  // -22214.626867028180319704122502
  s21_decimal dec_check = {{0xca8b0486, 0x82642204, 0x47c78237, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_388) {
  // 3866414.5084
  s21_decimal dec_1 = {{0x9008bc, 0x9, 0x0, 0x40000}};
  // -8.74988836
  s21_decimal dec_2 = {{0x34274524, 0x0, 0x0, 0x80080000}};
  // -441881.58172111809664277819426
  s21_decimal dec_check = {{0x13ac3022, 0x6ab5c41a, 0x8ec79676, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_390) {
  // -58092
  s21_decimal dec_1 = {{0xe2ec, 0x0, 0x0, 0x80000000}};
  // 5940
  s21_decimal dec_2 = {{0x1734, 0x0, 0x0, 0x0}};
  // -9.7797979797979797979797979798
  s21_decimal dec_check = {{0x4b1219dc, 0xceedc9b2, 0x1f99a8c6, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_392) {
  // 37.3314304351864
  s21_decimal dec_1 = {{0x2801e78, 0x15387, 0x0, 0xd0000}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // 12.443810145062133333333333333
  s21_decimal dec_check = {{0xaeef5555, 0xa9e6afd4, 0x2835474b, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_393) {
  // 2566054009.4153
  s21_decimal dec_1 = {{0x8f6086c9, 0x1756, 0x0, 0x40000}};
  // -0.97376
  s21_decimal dec_2 = {{0x17c60, 0x0, 0x0, 0x80050000}};
  // -2635201702.0778220506079526783
  s21_decimal dec_check = {{0x223b7f7f, 0x2a466887, 0x5525e0a9, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_394) {
  // -451477103455466924320
  s21_decimal dec_1 = {{0x8563a920, 0x7980e190, 0x18, 0x80000000}};
  // 7510762668536
  s21_decimal dec_2 = {{0xbc5741f8, 0x6d4, 0x0, 0x0}};
  // -60110686.940860157681086636019
  s21_decimal dec_check = {{0x49ee1ff3, 0x8b388521, 0xc23a6514, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_395) {
  // -28336899
  s21_decimal dec_1 = {{0x1b06303, 0x0, 0x0, 0x80000000}};
  // -522341
  s21_decimal dec_2 = {{0x7f865, 0x0, 0x0, 0x80000000}};
  // 54.249808075567493265893353193
  s21_decimal dec_check = {{0x9a4be6e9, 0x9f628341, 0xaf4a63b4, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_396) {
  // -76475207587152.15435905
  s21_decimal dec_1 = {{0xfe36d881, 0x92ab9bbf, 0x19e, 0x80080000}};
  // -4334758026.9
  s21_decimal dec_2 = {{0x17b7956d, 0xa, 0x0, 0x80010000}};
  // 17642.324464842933851157337827
  s21_decimal dec_check = {{0x712296e3, 0x9fb437e5, 0x39016385, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_397) {
  // -668928517660478048872071073
  s21_decimal dec_1 = {{0x69ea7fa1, 0x9ab01f71, 0x229531f, 0x80000000}};
  // -4999855
  s21_decimal dec_2 = {{0x4c4aaf, 0x0, 0x0, 0x80000000}};
  // 133789583430015080211.74035507
  s21_decimal dec_check = {{0x6e206433, 0xdc38aad, 0x2b3ad0a1, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_398) {
  // 4041453749379568.09
  s21_decimal dec_1 = {{0xc6cb41c9, 0x59bd013, 0x0, 0x20000}};
  // 3.97687
  s21_decimal dec_2 = {{0x61177, 0x0, 0x0, 0x50000}};
  // 1016239844244234.3073824389532
  s21_decimal dec_check = {{0xa990399c, 0x72add13e, 0x20d62393, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_399) {
  // 9865660717.5576
  s21_decimal dec_1 = {{0x48068398, 0x59ba, 0x0, 0x40000}};
  // -4456774967.3876
  s21_decimal dec_2 = {{0xbce34394, 0x2888, 0x0, 0x80040000}};
  // -2.2136322317706098682109456425
  s21_decimal dec_check = {{0x67957029, 0x628343d4, 0x4786bc95, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_401) {
  // 72566234285990805859.9508
  s21_decimal dec_1 = {{0x6b465054, 0x3c03ab37, 0x99aa, 0x40000}};
  // 988269069487.72633
  s21_decimal dec_2 = {{0x5aeea319, 0x15f1a8c, 0x0, 0x50000}};
  // 73427608.458499906634040049302
  s21_decimal dec_check = {{0x46b97e96, 0x8e57fb83, 0xed41e4e6, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_402) {
  // 729280989201148392293.602
  s21_decimal dec_1 = {{0x2054c4e2, 0x66d2062a, 0x9a6e, 0x30000}};
  // -83
  s21_decimal dec_2 = {{0x53, 0x0, 0x0, 0x80000000}};
  // -8786517942182510750.5253253012
  s21_decimal dec_check = {{0xa1d87ff5, 0x1329d5bb, 0x1c64098c, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_405) {
  // -18461
  s21_decimal dec_1 = {{0x481d, 0x0, 0x0, 0x80000000}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // -3076.8333333333333333333333333
  s21_decimal dec_check = {{0x10555555, 0x301abf00, 0x636af804, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_406) {
  // 2016299802165.666428455199473
  s21_decimal dec_1 = {{0x776fa2f1, 0x4b64b4fe, 0x683d817, 0xf0000}};
  // -755889150650
  s21_decimal dec_2 = {{0xfe811aba, 0xaf, 0x0, 0x80000000}};
  // -2.6674543488708907935629456478
  s21_decimal dec_check = {{0xafa6345e, 0x69ef8fe, 0x5630aa4c, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_407) {
  // -5441491220.722042
  s21_decimal dec_1 = {{0xe742717a, 0x135501, 0x0, 0x80060000}};
  // 1.2012
  s21_decimal dec_2 = {{0x2eec, 0x0, 0x0, 0x40000}};
  // -4530045971.2970712620712620713
  s21_decimal dec_check = {{0x739072a9, 0xc50e1099, 0x925fa979, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_409) {
  // -7810632374556.19
  s21_decimal dec_1 = {{0x74d0cf03, 0x2c65f, 0x0, 0x80020000}};
  // 813.573
  s21_decimal dec_2 = {{0xc6a05, 0x0, 0x0, 0x30000}};
  // -9600407553.5399896505906661111
  s21_decimal dec_check = {{0xf13c0d7f, 0x50912c78, 0x1f054560, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_410) {
  // 8093480315.426
  s21_decimal dec_1 = {{0x6904ea22, 0x75c, 0x0, 0x30000}};
  // -261583445
  s21_decimal dec_2 = {{0xf977255, 0x0, 0x0, 0x80000000}};
  // -30.940338427861900817156070408
  s21_decimal dec_check = {{0x8540dc08, 0xbd5c2d0, 0x63f93f83, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_411) {
  // 649288037522975521228.98
  s21_decimal dec_1 = {{0x397f9412, 0xcc293d2b, 0xdbf, 0x20000}};
  // 1659.7138104996130
  s21_decimal dec_2 = {{0x59095122, 0x3af702, 0x0, 0xd0000}};
  // 391204817008496488.31259290660
  s21_decimal dec_check = {{0x13192c24, 0x6fe13bcc, 0x7e67b43a, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_412) {
  // -5910191352463592794113239917
  s21_decimal dec_1 = {{0xbe6ceb6d, 0x3511d6ba, 0x1318cbb3, 0x80000000}};
  // -808
  s21_decimal dec_2 = {{0x328, 0x0, 0x0, 0x80000000}};
  // 7314593257999496032318366.2339
  s21_decimal dec_check = {{0xe3a45503, 0x95df4fcc, 0xec58e5b6, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_413) {
  // -3373.9736222270425508
  s21_decimal dec_1 = {{0x57cf09a4, 0xd43b9f55, 0x1, 0x80100000}};
  // 14.82150
  s21_decimal dec_2 = {{0x169da6, 0x0, 0x0, 0x50000}};
  // -227.64049672617768449886988496
  s21_decimal dec_check = {{0x401528d0, 0x7b233601, 0x498dfb05, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_414) {
  // -7618842150.42057113
  s21_decimal dec_1 = {{0x2d8f2399, 0xa92c1a8, 0x0, 0x80080000}};
  // -7.5
  s21_decimal dec_2 = {{0x4b, 0x0, 0x0, 0x80010000}};
  // 1015845620.0560761506666666667
  s21_decimal dec_check = {{0x49b45aab, 0x165bfb78, 0x20d2e0c6, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_415) {
  // -7490425452435717267739517448
  s21_decimal dec_1 = {{0x8c4e2208, 0x6b27cdbe, 0x1833ef49, 0x80000000}};
  // 20813
  s21_decimal dec_2 = {{0x514d, 0x0, 0x0, 0x0}};
  // -359891675992683287740331.40095
  s21_decimal dec_check = {{0xc59ee97f, 0xda846064, 0x74498aac, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_416) {
  // 415694104846083450320.08
  s21_decimal dec_1 = {{0x470fc548, 0x7b753f93, 0x8cd, 0x20000}};
  // -900514708933250
  s21_decimal dec_2 = {{0x6b574a82, 0x33303, 0x0, 0x80000000}};
  // -461618.33973652114381786604038
  s21_decimal dec_check = {{0xce046206, 0x1e78ca3, 0x95282c92, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_417) {
  // -36094518
  s21_decimal dec_1 = {{0x226c236, 0x0, 0x0, 0x80000000}};
  // -0.61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x80020000}};
  // 59171340.983606557377049180328
  s21_decimal dec_check = {{0xf364b8a8, 0x2a53b41f, 0xbf3162d6, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_418) {
  // -8041637646347729621
  s21_decimal dec_1 = {{0x3af6fad5, 0x6f99a2d5, 0x0, 0x80000000}};
  // -353436738313231554.647
  s21_decimal dec_2 = {{0x64dc5857, 0x28eb88e8, 0x13, 0x80030000}};
  // 22.752693126148273190237699346
  s21_decimal dec_check = {{0x3c2cfd12, 0xdd011a03, 0x4984962d, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_419) {
  // -4903417893874068365964.7
  s21_decimal dec_1 = {{0x2e9597f, 0x25ee3e92, 0xa62, 0x80010000}};
  // -21003169236540.33123480018180
  s21_decimal dec_2 = {{0x23699d04, 0x93a1def1, 0x6c95768, 0x800e0000}};
  // 233460857.19974732734741516193
  s21_decimal dec_check = {{0x84328fa1, 0xd4db462c, 0x4b6f6df2, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_420) {
  // 597653284898
  s21_decimal dec_1 = {{0x26e96822, 0x8b, 0x0, 0x0}};
  // 442.0252710
  s21_decimal dec_2 = {{0x777b426, 0x1, 0x0, 0x70000}};
  // 1352079449.0910452945573783722
  s21_decimal dec_check = {{0x74a28aa, 0x9ec057b, 0x2bb0239a, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_421) {
  // -14565577357.2871
  s21_decimal dec_1 = {{0x20a4af07, 0x8479, 0x0, 0x80040000}};
  // -708
  s21_decimal dec_2 = {{0x2c4, 0x0, 0x0, 0x80000000}};
  // 20572849.374699293785310734463
  s21_decimal dec_check = {{0xdbcda87f, 0x50348361, 0x4279764f, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_422) {
  // 565865840.228133596
  s21_decimal dec_1 = {{0xcd536adc, 0x7da5bfb, 0x0, 0x90000}};
  // -5039
  s21_decimal dec_2 = {{0x13af, 0x0, 0x0, 0x80000000}};
  // -112297.24949953038221869418535
  s21_decimal dec_check = {{0xbf198827, 0x5b916dfa, 0x244902c1, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_423) {
  // -174252178643333372756423395
  s21_decimal dec_1 = {{0x3a54f2e3, 0x8842f580, 0x902355, 0x80000000}};
  // 55496211269934824
  s21_decimal dec_2 = {{0x971fdee8, 0xc52982, 0x0, 0x0}};
  // -3139893240.5631592305683237944
  s21_decimal dec_check = {{0xc4d28c38, 0x6543ad41, 0x65749690, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_424) {
  // 982104584103
  s21_decimal dec_1 = {{0xa9feafa7, 0xe4, 0x0, 0x0}};
  // 703
  s21_decimal dec_2 = {{0x2bf, 0x0, 0x0, 0x0}};
  // 1397019323.0483641536273115220
  s21_decimal dec_check = {{0x3ca6e854, 0x86d1647b, 0x2d23df7c, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_426) {
  // -834
  s21_decimal dec_1 = {{0x342, 0x0, 0x0, 0x80000000}};
  // -43
  s21_decimal dec_2 = {{0x2b, 0x0, 0x0, 0x80000000}};
  // 19.395348837209302325581395349
  s21_decimal dec_check = {{0xbd653595, 0x4554e0e4, 0x3eab74df, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_427) {
  // -10230846511073
  s21_decimal dec_1 = {{0xdf8d7e1, 0x94e, 0x0, 0x80000000}};
  // -1431
  s21_decimal dec_2 = {{0x597, 0x0, 0x0, 0x80000000}};
  // 7149438512.2802236198462613557
  s21_decimal dec_check = {{0xd9ae835, 0x886a8935, 0xe702c4ef, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_428) {
  // -382443275939348150750733440
  s21_decimal dec_1 = {{0xdb36e480, 0x8802ff25, 0x13c5983, 0x80000000}};
  // 912583094195.53
  s21_decimal dec_2 = {{0xbb1da221, 0x52ff, 0x0, 0x20000}};
  // -419077756723604.03925975768975
  s21_decimal dec_check = {{0xff511f8f, 0x6681aabc, 0x87694caf, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_429) {
  // 770847671228188817619
  s21_decimal dec_1 = {{0x254b78d3, 0xc9a910db, 0x29, 0x0}};
  // -1355861736.05
  s21_decimal dec_2 = {{0x9190d2a5, 0x1f, 0x0, 0x80020000}};
  // -568529703827.97374881268963885
  s21_decimal dec_check = {{0xbc531a2d, 0x106bfc3a, 0xb7b3acc4, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_430) {
  // 62963272312773092
  s21_decimal dec_1 = {{0x381959e4, 0xdfb0c3, 0x0, 0x0}};
  // -428635
  s21_decimal dec_2 = {{0x68a5b, 0x0, 0x0, 0x80000000}};
  // -146892513007.04117022641641490
  s21_decimal dec_check = {{0x7ec5812, 0x9ed59120, 0x2f76a9f4, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_431) {
  // -116972811921474671103576010
  s21_decimal dec_1 = {{0x4df207ca, 0xd7212e6e, 0x60c1f4, 0x80000000}};
  // -868174661
  s21_decimal dec_2 = {{0x33bf4b45, 0x0, 0x0, 0x80000000}};
  // 134734192526121965.57021607199
  s21_decimal dec_check = {{0xd14d751f, 0x39795f60, 0x2b88f381, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_432) {
  // -3113291512685031950635.392
  s21_decimal dec_1 = {{0x695fd180, 0xdeff35a9, 0x29343, 0x80030000}};
  // -26623554275.19670
  s21_decimal dec_2 = {{0xed85ecb6, 0x97565, 0x0, 0x80050000}};
  // 116937486276.40853738281803626
  s21_decimal dec_check = {{0xa1b09f6a, 0x54523f20, 0x25c8d797, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_433) {
  // 17555052370334842983568
  s21_decimal dec_1 = {{0x73819490, 0xa94ab02a, 0x3b7, 0x0}};
  // -70140139697546932619.1
  s21_decimal dec_2 = {{0x8597ef6f, 0x5e6565d, 0x26, 0x80010000}};
  // -250.28539215967386952596361273
  s21_decimal dec_check = {{0x69b69039, 0x9ac219bc, 0x50df1f55, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_434) {
  // 55913103937641344487
  s21_decimal dec_1 = {{0x7c9b6de7, 0x7f33fca, 0x3, 0x0}};
  // -558446.31932736
  s21_decimal dec_2 = {{0x5772ef40, 0x32ca, 0x0, 0x80080000}};
  // -100122611614645.10673734027757
  s21_decimal dec_check = {{0x14f49ed, 0x2339f53c, 0x2059f2c5, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_435) {
  // -159860346693838998241
  s21_decimal dec_1 = {{0x75108ae1, 0xaa820a57, 0x8, 0x80000000}};
  // 444259456865.7936998496596
  s21_decimal dec_2 = {{0xc7c87954, 0x88bd6f94, 0x3acc1, 0xd0000}};
  // -359835551.55277470272839902278
  s21_decimal dec_check = {{0x25c66446, 0xa7ba8d47, 0x7444e631, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_436) {
  // -641786479315100899
  s21_decimal dec_1 = {{0x1139a4e3, 0x8e81567, 0x0, 0x80000000}};
  // -371.72
  s21_decimal dec_2 = {{0x9134, 0x0, 0x0, 0x80020000}};
  // 1726532011500863.2815022059615
  s21_decimal dec_check = {{0x6bb9305f, 0xde149b91, 0x37c989be, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_437) {
  // -57.4673
  s21_decimal dec_1 = {{0x8c4d1, 0x0, 0x0, 0x80040000}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // -82.096142857142857142857142857
  s21_decimal dec_check = {{0x9b36db6e, 0x3125258f, 0x1a86d572, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_438) {
  // -66
  s21_decimal dec_1 = {{0x42, 0x0, 0x0, 0x80000000}};
  // 0.111152
  s21_decimal dec_2 = {{0x1b230, 0x0, 0x0, 0x60000}};
  // -593.78148841226428674247876781
  s21_decimal dec_check = {{0xc585e0ad, 0x975d3f2c, 0xbfdc741a, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_439) {
  // 7955012
  s21_decimal dec_1 = {{0x796244, 0x0, 0x0, 0x0}};
  // -827
  s21_decimal dec_2 = {{0x33b, 0x0, 0x0, 0x80000000}};
  // -9619.1197097944377267230955260
  s21_decimal dec_check = {{0xc8d3bbe6, 0x567e3428, 0x1f14bfd4, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_440) {
  // -2409840491929000.207139376932
  s21_decimal dec_1 = {{0xc19a8f24, 0xd5ab7cb8, 0x7c95f92, 0x800c0000}};
  // 101543.719352137
  s21_decimal dec_2 = {{0x7d523749, 0x5c5a, 0x0, 0x90000}};
  // -23732048690.988634927195368870
  s21_decimal dec_check = {{0x8d8e2da6, 0x6a42d87e, 0x4caeb0c9, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_441) {
  // -84731045029387423377124
  s21_decimal dec_1 = {{0x48dee6e4, 0x4776b1e9, 0x11f1, 0x80000000}};
  // 151194240927033658134.76977
  s21_decimal dec_2 = {{0x7dcb9e71, 0x9f55bbac, 0xc81a9, 0x50000}};
  // -560.41185504068654557649839051
  s21_decimal dec_check = {{0xd06e23cb, 0x9bd50e05, 0xb5142ea1, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_443) {
  // -79228162514264337591548542761
  s21_decimal dec_1 = {{0x89107f29, 0xffffffff, 0xffffffff, 0x80000000}};
  // -69203982849645786
  s21_decimal dec_2 = {{0xdecb9cda, 0xf5dca7, 0x0, 0x80000000}};
  // 1144849750720.2341519733811069
  s21_decimal dec_check = {{0xb6b7e77d, 0x733f31f3, 0x24fdf9a5, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_444) {
  // -67132716957518597895
  s21_decimal dec_1 = {{0x73bd0f07, 0xa3a75263, 0x3, 0x80000000}};
  // -87988.7662109606
  s21_decimal dec_2 = {{0xcf8ad3a6, 0x32040, 0x0, 0x800a0000}};
  // 762969181731246.93594938139767
  s21_decimal dec_check = {{0x7061e477, 0xdcce9ff5, 0xf68754dd, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_445) {
  // 24521165439611303157279618310
  s21_decimal dec_1 = {{0x8655f506, 0x133d2cea, 0x4f3b6ec2, 0x0}};
  // -400.8348555225
  s21_decimal dec_2 = {{0x443117d9, 0x3a5, 0x0, 0x800a0000}};
  // -61175232397510052436883553.731
  s21_decimal dec_check = {{0xdb583dc3, 0x626186dd, 0xc5aaf759, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_446) {
  // 62426689160657864
  s21_decimal dec_1 = {{0x37ecbbc8, 0xddc8be, 0x0, 0x0}};
  // 7960544625503767
  s21_decimal dec_2 = {{0xba9f2e17, 0x1c4812, 0x0, 0x0}};
  // 7.8420123367761809351253116879
  s21_decimal dec_check = {{0x5b3f47cf, 0x186e2f9b, 0xfd639b0e, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_447) {
  // 2854824295119210
  s21_decimal dec_1 = {{0x9401b96a, 0xa2472, 0x0, 0x0}};
  // 4628731
  s21_decimal dec_2 = {{0x46a0fb, 0x0, 0x0, 0x0}};
  // 616761763.67112498004312629099
  s21_decimal dec_check = {{0x335a9f6b, 0x6420c1ed, 0xc749565c, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_449) {
  // -1743938087623
  s21_decimal dec_1 = {{0xacf6ac7, 0x196, 0x0, 0x80000000}};
  // -0.6705726
  s21_decimal dec_2 = {{0x66523e, 0x0, 0x0, 0x80070000}};
  // 2600670065587.2309724554805848
  s21_decimal dec_check = {{0xfe914258, 0x838b8389, 0x54083d13, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_452) {
  // -1427609771045444851464900141
  s21_decimal dec_1 = {{0x343b8e2d, 0xc2ee673a, 0x49ce420, 0x80000000}};
  // 830106737575738.0
  s21_decimal dec_2 = {{0xdc304844, 0x1d7dc6, 0x0, 0x10000}};
  // -1719790608150.7877779208794535
  s21_decimal dec_check = {{0x60f1f1a7, 0xc9e35c2c, 0x3791c644, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_453) {
  // 611334848734207
  s21_decimal dec_1 = {{0x7c7f63ff, 0x22c01, 0x0, 0x0}};
  // -4201
  s21_decimal dec_2 = {{0x1069, 0x0, 0x0, 0x80000000}};
  // -145521268444.22923113544394192
  s21_decimal dec_check = {{0x68da5d0, 0xf34d49bc, 0x2f053cb8, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_454) {
  // -6880838542969.2573185
  s21_decimal dec_1 = {{0x60fd6601, 0xbae87dfc, 0x3, 0x80070000}};
  // 31.524
  s21_decimal dec_2 = {{0x7b24, 0x0, 0x0, 0x30000}};
  // -218273015574.45937439728460855
  s21_decimal dec_check = {{0x38c3e437, 0x6769a8ed, 0x46871ee4, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_455) {
  // 8121703383952845156967
  s21_decimal dec_1 = {{0x8d4fb267, 0x4746b513, 0x1b8, 0x0}};
  // -30209280.15
  s21_decimal dec_2 = {{0xb40fb40f, 0x0, 0x0, 0x80020000}};
  // -268847961408734.36724267658526
  s21_decimal dec_check = {{0xfbf12d1e, 0x2363fa51, 0x56de9507, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_456) {
  // -29476345428055445692
  s21_decimal dec_1 = {{0x93f450bc, 0x991103fe, 0x1, 0x80000000}};
  // -87577.46215432749
  s21_decimal dec_2 = {{0xb034322d, 0x1f1d1f, 0x0, 0x800b0000}};
  // 336574555861332.67127626672701
  s21_decimal dec_check = {{0xcb4aa3d, 0x574bfd5f, 0x6cc0cb73, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_457) {
  // 386500885171315561035252
  s21_decimal dec_1 = {{0xc1f175f4, 0x41459ddb, 0x51d8, 0x0}};
  // -3561719401930
  s21_decimal dec_2 = {{0x47050dca, 0x33d, 0x0, 0x80000000}};
  // -108515253886.05321380318991366
  s21_decimal dec_check = {{0x1d8cd406, 0xe2d0bf9, 0x23102be2, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_458) {
  // 58740327249291897.518118067
  s21_decimal dec_1 = {{0xc62f54b3, 0x8553c6f1, 0x3096bf, 0x90000}};
  // -739880348281
  s21_decimal dec_2 = {{0x444e2a79, 0xac, 0x0, 0x80000000}};
  // -79391.657564315847651822364405
  s21_decimal dec_check = {{0x5e985718, 0xad30469, 0x19a71fbe, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_459) {
  // 8472407.49153
  s21_decimal dec_1 = {{0x437be061, 0xc5, 0x0, 0x50000}};
  // 73814
  s21_decimal dec_2 = {{0x12056, 0x0, 0x0, 0x0}};
  // 114.78049545519820088330127076
  s21_decimal dec_check = {{0x4e8b86e4, 0xa84e2345, 0x25166b88, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_460) {
  // 21291426896454141938288030233
  s21_decimal dec_1 = {{0x2c83f219, 0xd29586db, 0x44cbdb04, 0x0}};
  // -72124739509286054813196629
  s21_decimal dec_2 = {{0x455f6155, 0xf69a9041, 0x3ba901, 0x80000000}};
  // -295.20282556740287871762231930
  s21_decimal dec_check = {{0xc55af27a, 0x52b0ba1, 0x5f629afc, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_461) {
  // 47828924221510217
  s21_decimal dec_1 = {{0x36365249, 0xa9ec27, 0x0, 0x0}};
  // -61281471
  s21_decimal dec_2 = {{0x3a714bf, 0x0, 0x0, 0x80000000}};
  // -780479375.59315795471032345160
  s21_decimal dec_check = {{0x628b6248, 0xfdbc9c04, 0xfc2fbda4, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_462) {
  // -6579935
  s21_decimal dec_1 = {{0x6466df, 0x0, 0x0, 0x80000000}};
  // 719730
  s21_decimal dec_2 = {{0xafb72, 0x0, 0x0, 0x0}};
  // -9.1422269462159420893946340989
  s21_decimal dec_check = {{0x39343d73, 0xd277e8b2, 0x1d8a45db, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_463) {
  // -0.909692619661378332350734
  s21_decimal dec_1 = {{0x88f7590e, 0x89255ff5, 0xc0a2, 0x80180000}};
  // -0.3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80010000}};
  // 3.0323087322045944411691133333
  s21_decimal dec_check = {{0x796ba995, 0x8d2ead5f, 0x61faab81, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_465) {
  // 9373817
  s21_decimal dec_1 = {{0x8f0879, 0x0, 0x0, 0x0}};
  // -699.195744
  s21_decimal dec_2 = {{0x29ace160, 0x0, 0x0, 0x80060000}};
  // -13406.570449605025055758920638
  s21_decimal dec_check = {{0x8d5cabbe, 0x5a225ab4, 0x2b51a7b8, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_466) {
  // 816473
  s21_decimal dec_1 = {{0xc7559, 0x0, 0x0, 0x0}};
  // 0.76594
  s21_decimal dec_2 = {{0x12b32, 0x0, 0x0, 0x50000}};
  // 1065975.1416560043867665874612
  s21_decimal dec_check = {{0xcbbc3eb4, 0x3311e26c, 0x22718a2a, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_467) {
  // 50229592974900113
  s21_decimal dec_1 = {{0x767b3b91, 0xb2738c, 0x0, 0x0}};
  // 91127237348098
  s21_decimal dec_2 = {{0x369c8b02, 0x52e1, 0x0, 0x0}};
  // 551.20285039507456133203440975
  s21_decimal dec_check = {{0xc70b354f, 0x6488bfca, 0xb21a6e5f, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_468) {
  // 7567799411998837484396776381
  s21_decimal dec_1 = {{0xe7bc8bbd, 0x2bd2a85f, 0x1873efdc, 0x0}};
  // -9781120247876706840
  s21_decimal dec_2 = {{0xf8126218, 0x87bd850a, 0x0, 0x80000000}};
  // -773714995.85046623293231669616
  s21_decimal dec_check = {{0xefb92170, 0xedae6b8f, 0xfa003454, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_469) {
  // 846246040127185
  s21_decimal dec_1 = {{0x29d46d1, 0x301a8, 0x0, 0x0}};
  // -5343745283
  s21_decimal dec_2 = {{0x3e831503, 0x1, 0x0, 0x80000000}};
  // -158361.97185882690209805795491
  s21_decimal dec_check = {{0x569480a3, 0xa4636ebd, 0x332b6531, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_471) {
  // 108295.3575521
  s21_decimal dec_1 = {{0x25102c61, 0xfc, 0x0, 0x70000}};
  // -24.91980447
  s21_decimal dec_2 = {{0x94889a9f, 0x0, 0x0, 0x80080000}};
  // -4345.7547061604211696288642669
  s21_decimal dec_check = {{0x1a1fb66d, 0xc10dcc5f, 0x8c6b3d8a, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_472) {
  // -832280794852
  s21_decimal dec_1 = {{0xc7cd16e4, 0xc1, 0x0, 0x80000000}};
  // 9837943.7492
  s21_decimal dec_2 = {{0xe7df15b4, 0x16, 0x0, 0x40000}};
  // -84599.060135882485413550569277
  s21_decimal dec_check = {{0xd0701f20, 0xf2a1964a, 0x1b55dec7, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_475) {
  // 1165804294559800260762
  s21_decimal dec_1 = {{0xcdc0789a, 0x32c8dd34, 0x3f, 0x0}};
  // 9835.306
  s21_decimal dec_2 = {{0x96132a, 0x0, 0x0, 0x30000}};
  // 118532590095295485.54584880226
  s21_decimal dec_check = {{0x5abe7462, 0x7550e783, 0x264cc93a, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_476) {
  // 563085050106738.6
  s21_decimal dec_1 = {{0x8be6427a, 0x14013a, 0x0, 0x10000}};
  // 483460.61263220963
  s21_decimal dec_2 = {{0x8fe230e3, 0xabc27c, 0x0, 0xb0000}};
  // 1164696844.7771005566453505102
  s21_decimal dec_check = {{0x9eeb5c4e, 0xb279e39f, 0x25a22580, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_477) {
  // -614956530749722898
  s21_decimal dec_1 = {{0xdfa4d112, 0x888c3b4, 0x0, 0x80000000}};
  // -42084151954.5169719062
  s21_decimal dec_2 = {{0xf973af16, 0xd0596c4f, 0x16, 0x800a0000}};
  // 14612544.204629468513017833706
  s21_decimal dec_check = {{0x1768a8ea, 0x9c281953, 0x2f373698, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_478) {
  // 2586473732262003101134024580
  s21_decimal dec_1 = {{0xfeb4ef84, 0xfad16725, 0x85b7b1d, 0x0}};
  // 5.7
  s21_decimal dec_2 = {{0x39, 0x0, 0x0, 0x10000}};
  // 453767321449474228269127119.30
  s21_decimal dec_check = {{0x93fa84fa, 0x979d1a9a, 0x929ec0ca, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_480) {
  // -8138726242098743439729005
  s21_decimal dec_1 = {{0x323216d, 0x3bd0511a, 0x6bb71, 0x80000000}};
  // 0.5924828858453048397
  s21_decimal dec_2 = {{0xa713bc4d, 0x52393874, 0x0, 0x130000}};
  // -13736643600240186048938685.630
  s21_decimal dec_check = {{0x853eb4be, 0xb3b4ab45, 0x2c62af6d, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_481) {
  // -159863.068279733
  s21_decimal dec_1 = {{0x565c3b5, 0x9165, 0x0, 0x80090000}};
  // -495.9481
  s21_decimal dec_2 = {{0x4bacf9, 0x0, 0x0, 0x80040000}};
  // 322.33830168869081260720627824
  s21_decimal dec_check = {{0x7f93a070, 0xd4b1721f, 0x6827330a, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_482) {
  // 34608153.40101596169
  s21_decimal dec_1 = {{0x33fa7409, 0x30074937, 0x0, 0xb0000}};
  // -482.8230276467
  s21_decimal dec_2 = {{0x28f35573, 0x464, 0x0, 0x800a0000}};
  // -71678.754780395573331920191798
  s21_decimal dec_check = {{0xf1a88136, 0xb2b22641, 0xe79b46ba, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_483) {
  // -958227077940410776021338926
  s21_decimal dec_1 = {{0x86a78b2e, 0xfb5bee5c, 0x318a079, 0x80000000}};
  // -70131220.72950
  s21_decimal dec_2 = {{0xdea66176, 0x660, 0x0, 0x80050000}};
  // 13663345197374299984.183749941
  s21_decimal dec_check = {{0xd148ed35, 0x5214ce46, 0x2c260de3, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_484) {
  // -76321153210190.0689555
  s21_decimal dec_1 = {{0x576de093, 0x5fb00cc7, 0x29, 0x80070000}};
  // -3143
  s21_decimal dec_2 = {{0xc47, 0x0, 0x0, 0x80000000}};
  // 24282899525.991113253420299077
  s21_decimal dec_check = {{0xe8407345, 0x42ed404, 0x4e7657fd, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_485) {
  // -6050468635904001853899355
  s21_decimal dec_1 = {{0x51d0425b, 0x8fddedf7, 0x5013c, 0x80000000}};
  // 6863616985102978752547
  s21_decimal dec_2 = {{0x289da023, 0x13d1f2f3, 0x174, 0x0}};
  // -881.52772059340418292543255524
  s21_decimal dec_check = {{0xb436530, 0xe304217a, 0x1c7bd38e, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_486) {
  // 376428552111
  s21_decimal dec_1 = {{0xa4e3dfaf, 0x57, 0x0, 0x0}};
  // 1892978.16139117
  s21_decimal dec_2 = {{0x5516756d, 0xac2a, 0x0, 0x80000}};
  // 198855.20065078754554180587602
  s21_decimal dec_check = {{0xcc4d052, 0xc7331e66, 0x4040eaaa, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_487) {
  // 828531723532087292059002984
  s21_decimal dec_1 = {{0xf1f92868, 0xbb3899f5, 0x2ad586a, 0x0}};
  // 49537696073884687910
  s21_decimal dec_2 = {{0x328de26, 0xaf79401e, 0x2, 0x0}};
  // 16725277.701577912886175343638
  s21_decimal dec_check = {{0xf88e2416, 0xf944da87, 0x360ad350, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_488) {
  // 37486133.98056401836772417037
  s21_decimal dec_1 = {{0x6c17de0d, 0x7fc1ce51, 0xc1cc7c3, 0x140000}};
  // -9.756009855572
  s21_decimal dec_2 = {{0x7f807a54, 0x8df, 0x0, 0x800c0000}};
  // -3842363.2751000523230167381213
  s21_decimal dec_check = {{0x249f34dd, 0x2bc67b15, 0x7c2748b9, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_490) {
  // 827783864.1946555731
  s21_decimal dec_1 = {{0x1139f553, 0x72e0ca63, 0x0, 0xa0000}};
  // 1066191
  s21_decimal dec_2 = {{0x1044cf, 0x0, 0x0, 0x0}};
  // 776.39359570157276988832207362
  s21_decimal dec_check = {{0x18b7d202, 0xd140568b, 0xfaddc5e3, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_491) {
  // 219563
  s21_decimal dec_1 = {{0x359ab, 0x0, 0x0, 0x0}};
  // -952.2
  s21_decimal dec_2 = {{0x2532, 0x0, 0x0, 0x80010000}};
  // -230.58496114261709724847721067
  s21_decimal dec_check = {{0xe2584a6b, 0x1109c64a, 0x4a818a7b, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_492) {
  // -3279413942.67166710
  s21_decimal dec_1 = {{0xe870d7f6, 0x48d14f5, 0x0, 0x80080000}};
  // 86502.113
  s21_decimal dec_2 = {{0x527eae1, 0x0, 0x0, 0x30000}};
  // -37911.373825881768922800764416
  s21_decimal dec_check = {{0x20e8b600, 0x325170db, 0x7a7f8dad, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_493) {
  // -38259823992
  s21_decimal dec_1 = {{0xe8769578, 0x8, 0x0, 0x80000000}};
  // 8842263805
  s21_decimal dec_2 = {{0xf0a3cfd, 0x2, 0x0, 0x0}};
  // -4.3269263206516603131362919114
  s21_decimal dec_check = {{0x2495c2ca, 0x8482c295, 0x8bcf7ee2, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_494) {
  // -692697038472869768513999
  s21_decimal dec_1 = {{0x8fcec9cf, 0x2e83d8df, 0x92af, 0x80000000}};
  // 524681179843891.47
  s21_decimal dec_2 = {{0xae7e281b, 0xba6779, 0x0, 0x20000}};
  // -1320224671.8263614892810615150
  s21_decimal dec_check = {{0x65b2b96e, 0xae7a2af5, 0x2aa8a47c, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_495) {
  // -446088130.15647537539
  s21_decimal dec_1 = {{0x117e4983, 0x6b125717, 0x2, 0x800b0000}};
  // 13.9021
  s21_decimal dec_2 = {{0x21f0d, 0x0, 0x0, 0x40000}};
  // -32087823.433616171325914789852
  s21_decimal dec_check = {{0xf572b7dc, 0xda576de9, 0x67ae6ce9, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_496) {
  // -4253011289775351364678279186
  s21_decimal dec_1 = {{0x91876012, 0xffbdda11, 0xdbe022b, 0x80000000}};
  // 66060858756.37362770762471
  s21_decimal dec_2 = {{0x20f6dae7, 0xa205b528, 0x576e4, 0xe0000}};
  // -64380199861767857.188458045087
  s21_decimal dec_check = {{0x71f99e9f, 0xc24cc90a, 0xd0060d9b, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_497) {
  // -281803514314419363
  s21_decimal dec_1 = {{0x9f2aeca3, 0x3e92acd, 0x0, 0x80000000}};
  // 97516327422379
  s21_decimal dec_2 = {{0xca0e49ab, 0x58b0, 0x0, 0x0}};
  // -2889.8085250260187507681172822
  s21_decimal dec_check = {{0x671c9d56, 0x733e5d85, 0x5d5fef94, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_498) {
  // -6893.08413695
  s21_decimal dec_1 = {{0x7dfbaeff, 0xa0, 0x0, 0x80080000}};
  // 0.7820
  s21_decimal dec_2 = {{0x1e8c, 0x0, 0x0, 0x40000}};
  // -8814.6855971227621483375959079
  s21_decimal dec_check = {{0x3fdab604, 0xb577cc6d, 0x1c7b5647, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_499) {
  // 670069154522227032735920
  s21_decimal dec_1 = {{0x58e440b0, 0x858b036e, 0x8de4, 0x0}};
  // -8134737213118.01808
  s21_decimal dec_2 = {{0x20e7b1d0, 0xb4a0a0a, 0x0, 0x80050000}};
  // -82371333820.308096296878886463
  s21_decimal dec_check = {{0xa68d3b06, 0x647d16f7, 0x1a9d98d7, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2_500) {
  // 206178458481142232449603
  s21_decimal dec_1 = {{0xfb430243, 0xf4e5b84e, 0x2ba8, 0x0}};
  // 99.894542727
  s21_decimal dec_2 = {{0x422dc187, 0x17, 0x0, 0x90000}};
  // 2063961181989727258002.4570655
  s21_decimal dec_check = {{0x32dc131f, 0xb8318a92, 0x42b0afce, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

Suite *s21_div_cases_2(void) {
  Suite *c = suite_create("s21_div_2_cases2");
  TCase *tc = tcase_create("s21_div_2_tc");

  tcase_add_test(tc, s21_div_2_1);
  tcase_add_test(tc, s21_div_2_2);
  tcase_add_test(tc, s21_div_2_3);
  tcase_add_test(tc, s21_div_2_4);
  tcase_add_test(tc, s21_div_2_6);
  tcase_add_test(tc, s21_div_2_7);
  tcase_add_test(tc, s21_div_2_8);
  tcase_add_test(tc, s21_div_2_9);
  tcase_add_test(tc, s21_div_2_10);
  tcase_add_test(tc, s21_div_2_11);
  tcase_add_test(tc, s21_div_2_12);
  tcase_add_test(tc, s21_div_2_13);
  tcase_add_test(tc, s21_div_2_14);
  tcase_add_test(tc, s21_div_2_16);
  tcase_add_test(tc, s21_div_2_17);
  tcase_add_test(tc, s21_div_2_18);
  tcase_add_test(tc, s21_div_2_21);
  tcase_add_test(tc, s21_div_2_22);
  tcase_add_test(tc, s21_div_2_24);
  tcase_add_test(tc, s21_div_2_25);
  tcase_add_test(tc, s21_div_2_26);
  tcase_add_test(tc, s21_div_2_27);
  tcase_add_test(tc, s21_div_2_28);
  tcase_add_test(tc, s21_div_2_29);
  tcase_add_test(tc, s21_div_2_31);
  tcase_add_test(tc, s21_div_2_32);
  tcase_add_test(tc, s21_div_2_33);
  tcase_add_test(tc, s21_div_2_35);
  tcase_add_test(tc, s21_div_2_36);
  tcase_add_test(tc, s21_div_2_37);
  tcase_add_test(tc, s21_div_2_39);
  tcase_add_test(tc, s21_div_2_40);
  tcase_add_test(tc, s21_div_2_41);
  tcase_add_test(tc, s21_div_2_43);
  tcase_add_test(tc, s21_div_2_44);
  tcase_add_test(tc, s21_div_2_45);
  tcase_add_test(tc, s21_div_2_46);
  tcase_add_test(tc, s21_div_2_49);
  tcase_add_test(tc, s21_div_2_50);
  tcase_add_test(tc, s21_div_2_51);
  tcase_add_test(tc, s21_div_2_53);
  tcase_add_test(tc, s21_div_2_54);
  tcase_add_test(tc, s21_div_2_55);
  tcase_add_test(tc, s21_div_2_56);
  tcase_add_test(tc, s21_div_2_60);
  tcase_add_test(tc, s21_div_2_61);
  tcase_add_test(tc, s21_div_2_62);
  tcase_add_test(tc, s21_div_2_63);
  tcase_add_test(tc, s21_div_2_65);
  tcase_add_test(tc, s21_div_2_66);
  tcase_add_test(tc, s21_div_2_68);
  tcase_add_test(tc, s21_div_2_70);
  tcase_add_test(tc, s21_div_2_71);
  tcase_add_test(tc, s21_div_2_72);
  tcase_add_test(tc, s21_div_2_73);
  tcase_add_test(tc, s21_div_2_77);
  tcase_add_test(tc, s21_div_2_81);
  tcase_add_test(tc, s21_div_2_83);
  tcase_add_test(tc, s21_div_2_84);
  tcase_add_test(tc, s21_div_2_85);
  tcase_add_test(tc, s21_div_2_86);
  tcase_add_test(tc, s21_div_2_88);
  tcase_add_test(tc, s21_div_2_89);
  tcase_add_test(tc, s21_div_2_90);
  tcase_add_test(tc, s21_div_2_91);
  tcase_add_test(tc, s21_div_2_92);
  tcase_add_test(tc, s21_div_2_93);
  tcase_add_test(tc, s21_div_2_94);
  tcase_add_test(tc, s21_div_2_95);
  tcase_add_test(tc, s21_div_2_96);
  tcase_add_test(tc, s21_div_2_97);
  tcase_add_test(tc, s21_div_2_100);
  tcase_add_test(tc, s21_div_2_101);
  tcase_add_test(tc, s21_div_2_102);
  tcase_add_test(tc, s21_div_2_104);
  tcase_add_test(tc, s21_div_2_105);
  tcase_add_test(tc, s21_div_2_106);
  tcase_add_test(tc, s21_div_2_107);
  tcase_add_test(tc, s21_div_2_108);
  tcase_add_test(tc, s21_div_2_109);
  tcase_add_test(tc, s21_div_2_110);
  tcase_add_test(tc, s21_div_2_111);
  tcase_add_test(tc, s21_div_2_112);
  tcase_add_test(tc, s21_div_2_113);
  tcase_add_test(tc, s21_div_2_114);
  tcase_add_test(tc, s21_div_2_115);
  tcase_add_test(tc, s21_div_2_116);
  tcase_add_test(tc, s21_div_2_117);
  tcase_add_test(tc, s21_div_2_119);
  tcase_add_test(tc, s21_div_2_120);
  tcase_add_test(tc, s21_div_2_122);
  tcase_add_test(tc, s21_div_2_124);
  tcase_add_test(tc, s21_div_2_126);
  tcase_add_test(tc, s21_div_2_127);
  tcase_add_test(tc, s21_div_2_129);
  tcase_add_test(tc, s21_div_2_130);
  tcase_add_test(tc, s21_div_2_131);
  tcase_add_test(tc, s21_div_2_132);
  tcase_add_test(tc, s21_div_2_133);
  tcase_add_test(tc, s21_div_2_134);
  tcase_add_test(tc, s21_div_2_136);
  tcase_add_test(tc, s21_div_2_137);
  tcase_add_test(tc, s21_div_2_138);
  tcase_add_test(tc, s21_div_2_141);
  tcase_add_test(tc, s21_div_2_142);
  tcase_add_test(tc, s21_div_2_143);
  tcase_add_test(tc, s21_div_2_145);
  tcase_add_test(tc, s21_div_2_146);
  tcase_add_test(tc, s21_div_2_147);
  tcase_add_test(tc, s21_div_2_150);
  tcase_add_test(tc, s21_div_2_151);
  tcase_add_test(tc, s21_div_2_152);
  tcase_add_test(tc, s21_div_2_153);
  tcase_add_test(tc, s21_div_2_154);
  tcase_add_test(tc, s21_div_2_155);
  tcase_add_test(tc, s21_div_2_156);
  tcase_add_test(tc, s21_div_2_157);
  tcase_add_test(tc, s21_div_2_158);
  tcase_add_test(tc, s21_div_2_159);
  tcase_add_test(tc, s21_div_2_160);
  tcase_add_test(tc, s21_div_2_161);
  tcase_add_test(tc, s21_div_2_163);
  tcase_add_test(tc, s21_div_2_164);
  tcase_add_test(tc, s21_div_2_165);
  tcase_add_test(tc, s21_div_2_166);
  tcase_add_test(tc, s21_div_2_167);
  tcase_add_test(tc, s21_div_2_168);
  tcase_add_test(tc, s21_div_2_169);
  tcase_add_test(tc, s21_div_2_170);
  tcase_add_test(tc, s21_div_2_171);
  tcase_add_test(tc, s21_div_2_173);
  tcase_add_test(tc, s21_div_2_175);
  tcase_add_test(tc, s21_div_2_176);
  tcase_add_test(tc, s21_div_2_178);
  tcase_add_test(tc, s21_div_2_180);
  tcase_add_test(tc, s21_div_2_181);
  tcase_add_test(tc, s21_div_2_182);
  tcase_add_test(tc, s21_div_2_183);
  tcase_add_test(tc, s21_div_2_184);
  tcase_add_test(tc, s21_div_2_185);
  tcase_add_test(tc, s21_div_2_186);
  tcase_add_test(tc, s21_div_2_187);
  tcase_add_test(tc, s21_div_2_188);
  tcase_add_test(tc, s21_div_2_189);
  tcase_add_test(tc, s21_div_2_190);
  tcase_add_test(tc, s21_div_2_191);
  tcase_add_test(tc, s21_div_2_193);
  tcase_add_test(tc, s21_div_2_194);
  tcase_add_test(tc, s21_div_2_195);
  tcase_add_test(tc, s21_div_2_196);
  tcase_add_test(tc, s21_div_2_197);
  tcase_add_test(tc, s21_div_2_199);
  tcase_add_test(tc, s21_div_2_200);
  tcase_add_test(tc, s21_div_2_201);
  tcase_add_test(tc, s21_div_2_202);
  tcase_add_test(tc, s21_div_2_203);
  tcase_add_test(tc, s21_div_2_204);
  tcase_add_test(tc, s21_div_2_205);
  tcase_add_test(tc, s21_div_2_206);
  tcase_add_test(tc, s21_div_2_208);
  tcase_add_test(tc, s21_div_2_209);
  tcase_add_test(tc, s21_div_2_210);
  tcase_add_test(tc, s21_div_2_211);
  tcase_add_test(tc, s21_div_2_212);
  tcase_add_test(tc, s21_div_2_213);
  tcase_add_test(tc, s21_div_2_214);
  tcase_add_test(tc, s21_div_2_215);
  tcase_add_test(tc, s21_div_2_216);
  tcase_add_test(tc, s21_div_2_218);
  tcase_add_test(tc, s21_div_2_219);
  tcase_add_test(tc, s21_div_2_222);
  tcase_add_test(tc, s21_div_2_224);
  tcase_add_test(tc, s21_div_2_225);
  tcase_add_test(tc, s21_div_2_226);
  tcase_add_test(tc, s21_div_2_227);
  tcase_add_test(tc, s21_div_2_228);
  tcase_add_test(tc, s21_div_2_229);
  tcase_add_test(tc, s21_div_2_231);
  tcase_add_test(tc, s21_div_2_232);
  tcase_add_test(tc, s21_div_2_234);
  tcase_add_test(tc, s21_div_2_235);
  tcase_add_test(tc, s21_div_2_236);
  tcase_add_test(tc, s21_div_2_237);
  tcase_add_test(tc, s21_div_2_239);
  tcase_add_test(tc, s21_div_2_240);
  tcase_add_test(tc, s21_div_2_241);
  tcase_add_test(tc, s21_div_2_242);
  tcase_add_test(tc, s21_div_2_245);
  tcase_add_test(tc, s21_div_2_246);
  tcase_add_test(tc, s21_div_2_247);
  tcase_add_test(tc, s21_div_2_248);
  tcase_add_test(tc, s21_div_2_250);
  tcase_add_test(tc, s21_div_2_251);
  tcase_add_test(tc, s21_div_2_252);
  tcase_add_test(tc, s21_div_2_253);
  tcase_add_test(tc, s21_div_2_255);
  tcase_add_test(tc, s21_div_2_259);
  tcase_add_test(tc, s21_div_2_260);
  tcase_add_test(tc, s21_div_2_261);
  tcase_add_test(tc, s21_div_2_262);
  tcase_add_test(tc, s21_div_2_263);
  tcase_add_test(tc, s21_div_2_264);
  tcase_add_test(tc, s21_div_2_265);
  tcase_add_test(tc, s21_div_2_266);
  tcase_add_test(tc, s21_div_2_267);
  tcase_add_test(tc, s21_div_2_268);
  tcase_add_test(tc, s21_div_2_269);
  tcase_add_test(tc, s21_div_2_272);
  tcase_add_test(tc, s21_div_2_273);
  tcase_add_test(tc, s21_div_2_274);
  tcase_add_test(tc, s21_div_2_275);
  tcase_add_test(tc, s21_div_2_276);
  tcase_add_test(tc, s21_div_2_277);
  tcase_add_test(tc, s21_div_2_278);
  tcase_add_test(tc, s21_div_2_279);
  tcase_add_test(tc, s21_div_2_280);
  tcase_add_test(tc, s21_div_2_281);
  tcase_add_test(tc, s21_div_2_282);
  tcase_add_test(tc, s21_div_2_284);
  tcase_add_test(tc, s21_div_2_288);
  tcase_add_test(tc, s21_div_2_289);
  tcase_add_test(tc, s21_div_2_291);
  tcase_add_test(tc, s21_div_2_292);
  tcase_add_test(tc, s21_div_2_293);
  tcase_add_test(tc, s21_div_2_299);
  tcase_add_test(tc, s21_div_2_301);
  tcase_add_test(tc, s21_div_2_303);
  tcase_add_test(tc, s21_div_2_304);
  tcase_add_test(tc, s21_div_2_305);
  tcase_add_test(tc, s21_div_2_306);
  tcase_add_test(tc, s21_div_2_307);
  tcase_add_test(tc, s21_div_2_309);
  tcase_add_test(tc, s21_div_2_310);
  tcase_add_test(tc, s21_div_2_311);
  tcase_add_test(tc, s21_div_2_313);
  tcase_add_test(tc, s21_div_2_314);
  tcase_add_test(tc, s21_div_2_315);
  tcase_add_test(tc, s21_div_2_317);
  tcase_add_test(tc, s21_div_2_318);
  tcase_add_test(tc, s21_div_2_319);
  tcase_add_test(tc, s21_div_2_320);
  tcase_add_test(tc, s21_div_2_321);
  tcase_add_test(tc, s21_div_2_322);
  tcase_add_test(tc, s21_div_2_323);
  tcase_add_test(tc, s21_div_2_324);
  tcase_add_test(tc, s21_div_2_325);
  tcase_add_test(tc, s21_div_2_328);
  tcase_add_test(tc, s21_div_2_329);
  tcase_add_test(tc, s21_div_2_330);
  tcase_add_test(tc, s21_div_2_331);
  tcase_add_test(tc, s21_div_2_332);
  tcase_add_test(tc, s21_div_2_333);
  tcase_add_test(tc, s21_div_2_334);
  tcase_add_test(tc, s21_div_2_338);
  tcase_add_test(tc, s21_div_2_339);
  tcase_add_test(tc, s21_div_2_340);
  tcase_add_test(tc, s21_div_2_341);
  tcase_add_test(tc, s21_div_2_342);
  tcase_add_test(tc, s21_div_2_343);
  tcase_add_test(tc, s21_div_2_346);
  tcase_add_test(tc, s21_div_2_347);
  tcase_add_test(tc, s21_div_2_348);
  tcase_add_test(tc, s21_div_2_349);
  tcase_add_test(tc, s21_div_2_350);
  tcase_add_test(tc, s21_div_2_351);
  tcase_add_test(tc, s21_div_2_352);
  tcase_add_test(tc, s21_div_2_353);
  tcase_add_test(tc, s21_div_2_354);
  tcase_add_test(tc, s21_div_2_356);
  tcase_add_test(tc, s21_div_2_357);
  tcase_add_test(tc, s21_div_2_358);
  tcase_add_test(tc, s21_div_2_360);
  tcase_add_test(tc, s21_div_2_361);
  tcase_add_test(tc, s21_div_2_363);
  tcase_add_test(tc, s21_div_2_365);
  tcase_add_test(tc, s21_div_2_366);
  tcase_add_test(tc, s21_div_2_370);
  tcase_add_test(tc, s21_div_2_371);
  tcase_add_test(tc, s21_div_2_373);
  tcase_add_test(tc, s21_div_2_374);
  tcase_add_test(tc, s21_div_2_377);
  tcase_add_test(tc, s21_div_2_378);
  tcase_add_test(tc, s21_div_2_379);
  tcase_add_test(tc, s21_div_2_380);
  tcase_add_test(tc, s21_div_2_381);
  tcase_add_test(tc, s21_div_2_382);
  tcase_add_test(tc, s21_div_2_383);
  tcase_add_test(tc, s21_div_2_384);
  tcase_add_test(tc, s21_div_2_385);
  tcase_add_test(tc, s21_div_2_387);
  tcase_add_test(tc, s21_div_2_388);
  tcase_add_test(tc, s21_div_2_390);
  tcase_add_test(tc, s21_div_2_392);
  tcase_add_test(tc, s21_div_2_393);
  tcase_add_test(tc, s21_div_2_394);
  tcase_add_test(tc, s21_div_2_395);
  tcase_add_test(tc, s21_div_2_396);
  tcase_add_test(tc, s21_div_2_397);
  tcase_add_test(tc, s21_div_2_398);
  tcase_add_test(tc, s21_div_2_399);
  tcase_add_test(tc, s21_div_2_401);
  tcase_add_test(tc, s21_div_2_402);
  tcase_add_test(tc, s21_div_2_405);
  tcase_add_test(tc, s21_div_2_406);
  tcase_add_test(tc, s21_div_2_407);
  tcase_add_test(tc, s21_div_2_409);
  tcase_add_test(tc, s21_div_2_410);
  tcase_add_test(tc, s21_div_2_411);
  tcase_add_test(tc, s21_div_2_412);
  tcase_add_test(tc, s21_div_2_413);
  tcase_add_test(tc, s21_div_2_414);
  tcase_add_test(tc, s21_div_2_415);
  tcase_add_test(tc, s21_div_2_416);
  tcase_add_test(tc, s21_div_2_417);
  tcase_add_test(tc, s21_div_2_418);
  tcase_add_test(tc, s21_div_2_419);
  tcase_add_test(tc, s21_div_2_420);
  tcase_add_test(tc, s21_div_2_421);
  tcase_add_test(tc, s21_div_2_422);
  tcase_add_test(tc, s21_div_2_423);
  tcase_add_test(tc, s21_div_2_424);
  tcase_add_test(tc, s21_div_2_426);
  tcase_add_test(tc, s21_div_2_427);
  tcase_add_test(tc, s21_div_2_428);
  tcase_add_test(tc, s21_div_2_429);
  tcase_add_test(tc, s21_div_2_430);
  tcase_add_test(tc, s21_div_2_431);
  tcase_add_test(tc, s21_div_2_432);
  tcase_add_test(tc, s21_div_2_433);
  tcase_add_test(tc, s21_div_2_434);
  tcase_add_test(tc, s21_div_2_435);
  tcase_add_test(tc, s21_div_2_436);
  tcase_add_test(tc, s21_div_2_437);
  tcase_add_test(tc, s21_div_2_438);
  tcase_add_test(tc, s21_div_2_439);
  tcase_add_test(tc, s21_div_2_440);
  tcase_add_test(tc, s21_div_2_441);
  tcase_add_test(tc, s21_div_2_443);
  tcase_add_test(tc, s21_div_2_444);
  tcase_add_test(tc, s21_div_2_445);
  tcase_add_test(tc, s21_div_2_446);
  tcase_add_test(tc, s21_div_2_447);
  tcase_add_test(tc, s21_div_2_449);
  tcase_add_test(tc, s21_div_2_452);
  tcase_add_test(tc, s21_div_2_453);
  tcase_add_test(tc, s21_div_2_454);
  tcase_add_test(tc, s21_div_2_455);
  tcase_add_test(tc, s21_div_2_456);
  tcase_add_test(tc, s21_div_2_457);
  tcase_add_test(tc, s21_div_2_458);
  tcase_add_test(tc, s21_div_2_459);
  tcase_add_test(tc, s21_div_2_460);
  tcase_add_test(tc, s21_div_2_461);
  tcase_add_test(tc, s21_div_2_462);
  tcase_add_test(tc, s21_div_2_463);
  tcase_add_test(tc, s21_div_2_465);
  tcase_add_test(tc, s21_div_2_466);
  tcase_add_test(tc, s21_div_2_467);
  tcase_add_test(tc, s21_div_2_468);
  tcase_add_test(tc, s21_div_2_469);
  tcase_add_test(tc, s21_div_2_471);
  tcase_add_test(tc, s21_div_2_472);
  tcase_add_test(tc, s21_div_2_475);
  tcase_add_test(tc, s21_div_2_476);
  tcase_add_test(tc, s21_div_2_477);
  tcase_add_test(tc, s21_div_2_478);
  tcase_add_test(tc, s21_div_2_480);
  tcase_add_test(tc, s21_div_2_481);
  tcase_add_test(tc, s21_div_2_482);
  tcase_add_test(tc, s21_div_2_483);
  tcase_add_test(tc, s21_div_2_484);
  tcase_add_test(tc, s21_div_2_485);
  tcase_add_test(tc, s21_div_2_486);
  tcase_add_test(tc, s21_div_2_487);
  tcase_add_test(tc, s21_div_2_488);
  tcase_add_test(tc, s21_div_2_490);
  tcase_add_test(tc, s21_div_2_491);
  tcase_add_test(tc, s21_div_2_492);
  tcase_add_test(tc, s21_div_2_493);
  tcase_add_test(tc, s21_div_2_494);
  tcase_add_test(tc, s21_div_2_495);
  tcase_add_test(tc, s21_div_2_496);
  tcase_add_test(tc, s21_div_2_497);
  tcase_add_test(tc, s21_div_2_498);
  tcase_add_test(tc, s21_div_2_499);
  tcase_add_test(tc, s21_div_2_500);

  suite_add_tcase(c, tc);
  return c;
}

START_TEST(s21_div_3_0) {
  // -5210563158327.0
  s21_decimal dec_1 = {{0xc9a94c26, 0x2f63, 0x0, 0x80010000}};
  // 7060441223.83345
  s21_decimal dec_2 = {{0xb51c43f1, 0x28224, 0x0, 0x50000}};
  // -737.99398552289582777622146807
  int return_value = s21_div(dec_1, dec_2, NULL);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

START_TEST(s21_div_3_1) {
  // -5210563158327.0
  s21_decimal dec_1 = {{0xc9a94c26, 0x2f63, 0x0, 0x80010000}};
  // 7060441223.83345
  s21_decimal dec_2 = {{0xb51c43f1, 0x28224, 0x0, 0x50000}};
  // -737.99398552289582777622146807
  s21_decimal dec_check = {{0x349d2ef7, 0xed011609, 0xee756e83, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_3) {
  // -103036557672.25158026723
  s21_decimal dec_1 = {{0xf07f45e3, 0x8ff2c92e, 0x22e, 0x800b0000}};
  // -0.81185
  s21_decimal dec_2 = {{0x13d21, 0x0, 0x0, 0x80050000}};
  // 126915757433.33322691042680298
  s21_decimal dec_check = {{0x2c91dea, 0xa8c8ee57, 0x290239b3, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_5) {
  // 225861429.95817
  s21_decimal dec_1 = {{0xbf07b569, 0x148a, 0x0, 0x50000}};
  // -612118
  s21_decimal dec_2 = {{0x95716, 0x0, 0x0, 0x80000000}};
  // -368.98348024101562117108139280
  s21_decimal dec_check = {{0xcdbe0510, 0x715f0e26, 0x7739991e, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_6) {
  // 8264432876689862100
  s21_decimal dec_1 = {{0x1d28add4, 0x72b129ea, 0x0, 0x0}};
  // -99.5768317
  s21_decimal dec_2 = {{0x3b5a37fd, 0x0, 0x0, 0x80070000}};
  // -82995539580818598.188036143351
  s21_decimal dec_check = {{0xe802d27f, 0x99c4433e, 0x1ad13ae9, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_7) {
  // 3427153549838026074339
  s21_decimal dec_1 = {{0x6e88e8e3, 0xc94f4bbd, 0xb9, 0x0}};
  // 9474955649.35506582069
  s21_decimal dec_2 = {{0x1eee5a35, 0x5d247443, 0x33, 0xb0000}};
  // 361706553219.72963465964246176
  s21_decimal dec_check = {{0x11ff54a0, 0x3ef7c05, 0x74dfaa32, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_9) {
  // 71196835253022630371.83262685
  s21_decimal dec_1 = {{0xebfdffdd, 0x46efec18, 0x170143a1, 0x80000}};
  // -8040637306993
  s21_decimal dec_2 = {{0x1b549871, 0x750, 0x0, 0x80000000}};
  // -8854625.8878139213589885312681
  s21_decimal dec_check = {{0xbbb95644, 0x34a98c55, 0x1c9c5ff7, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_10) {
  // -701523943453190100
  s21_decimal dec_1 = {{0x4af567d4, 0x9bc504f, 0x0, 0x80000000}};
  // 8612159.2
  s21_decimal dec_2 = {{0x5221c78, 0x0, 0x0, 0x10000}};
  // -81457382192.051222183630790290
  s21_decimal dec_check = {{0x8dde4975, 0xb022122d, 0x1a51ff29, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_11) {
  // -72335391321718478402
  s21_decimal dec_1 = {{0x63e75642, 0xebdaef28, 0x3, 0x80000000}};
  // 843889024227471.49
  s21_decimal dec_2 = {{0x77e4980d, 0x12bcf42, 0x0, 0x20000}};
  // -85716.710663392122172570531638
  s21_decimal dec_check = {{0xe93c4bec, 0x9909cb97, 0x1bb251f3, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_12) {
  // -480379
  s21_decimal dec_1 = {{0x7547b, 0x0, 0x0, 0x80000000}};
  // -6903.7
  s21_decimal dec_2 = {{0x10dad, 0x0, 0x0, 0x80010000}};
  // 69.582832394223387458898851341
  s21_decimal dec_check = {{0x8cd9760d, 0x79c009ef, 0xe0d591e6, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_15) {
  // 33699521228
  s21_decimal dec_1 = {{0xd8a5e2cc, 0x7, 0x0, 0x0}};
  // 16389.3
  s21_decimal dec_2 = {{0x28035, 0x0, 0x0, 0x10000}};
  // 2056190.3942206195505604266198
  s21_decimal dec_check = {{0x732b08d6, 0x3a99e53e, 0x42706886, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_16) {
  // -949478646453875.4
  s21_decimal dec_1 = {{0x3e6fe082, 0x21bb75, 0x0, 0x80010000}};
  // -417767
  s21_decimal dec_2 = {{0x65fe7, 0x0, 0x0, 0x80000000}};
  // 2272746881.5245708732379532132
  s21_decimal dec_check = {{0x5a8d8b64, 0x3ab33e87, 0x496fb8b9, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_17) {
  // -26088567505916
  s21_decimal dec_1 = {{0x37cc83fc, 0x17ba, 0x0, 0x80000000}};
  // -5311283463.5820589
  s21_decimal dec_2 = {{0x797b6e2d, 0xbcb1d7, 0x0, 0x80070000}};
  // 4911.9139817706575211792553183
  s21_decimal dec_check = {{0xb001d4df, 0xc807e50, 0x9eb66671, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_18) {
  // -4774624918134509418
  s21_decimal dec_1 = {{0xe522cf6a, 0x4242e010, 0x0, 0x80000000}};
  // -4.4
  s21_decimal dec_2 = {{0x2c, 0x0, 0x0, 0x80010000}};
  // 1085142026848752140.4545454545
  s21_decimal dec_check = {{0x2884d1d1, 0x7b7c9f26, 0x2310159f, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_19) {
  // 618315667454069915.8613180302
  s21_decimal dec_1 = {{0x545bf8e, 0xf7bf5be3, 0x13fa965a, 0xa0000}};
  // 96
  s21_decimal dec_2 = {{0x60, 0x0, 0x0, 0x0}};
  // 6440788202646561.6235553961479
  s21_decimal dec_check = {{0xcc413607, 0xea09527c, 0xd01cf388, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_22) {
  // -6818391267060082004.7288889
  s21_decimal dec_1 = {{0xcda11a39, 0x4ff2fb79, 0x386681, 0x80070000}};
  // -2207.134269492
  s21_decimal dec_2 = {{0xe3744034, 0x201, 0x0, 0x80090000}};
  // 3089250781570901.6206643861877
  s21_decimal dec_check = {{0xbb3c9975, 0x5da8ce6d, 0x63d1aefc, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_23) {
  // 14186982851210609
  s21_decimal dec_1 = {{0x5947ed71, 0x3266fc, 0x0, 0x0}};
  // -793871940360.0247
  s21_decimal dec_2 = {{0x2605e977, 0x1c3439, 0x0, 0x80040000}};
  // -17870.618836555357800597925497
  s21_decimal dec_check = {{0xcab1ae79, 0x500c1cf0, 0x39be3abc, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_24) {
  // -399178590319.31006
  s21_decimal dec_1 = {{0xcfcad87e, 0x8dd114, 0x0, 0x80050000}};
  // -99
  s21_decimal dec_2 = {{0x63, 0x0, 0x0, 0x80000000}};
  // 4032106972.9223238383838383838
  s21_decimal dec_check = {{0x66cf4ede, 0xde403588, 0x8248cea1, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_25) {
  // 282381202310019457412228
  s21_decimal dec_1 = {{0x6856ec84, 0xea68153b, 0x3bcb, 0x0}};
  // 16980447137
  s21_decimal dec_2 = {{0xf41d0fa1, 0x3, 0x0, 0x0}};
  // 16629786013980.596240893205874
  s21_decimal dec_check = {{0xad9dd72, 0x37621f66, 0x35bbd62a, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_26) {
  // 8244210620639276753487548447
  s21_decimal dec_1 = {{0xb63a501f, 0x442986a0, 0x1aa37381, 0x0}};
  // 80938959240815956
  s21_decimal dec_2 = {{0xfa09e554, 0x11f8d8d, 0x0, 0x0}};
  // 101857136513.33782348999069450
  s21_decimal dec_check = {{0x484e8f0a, 0x745e8655, 0x20e96cc3, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_27) {
  // -2065579627946580887
  s21_decimal dec_1 = {{0x4b0a1b97, 0x1caa69ba, 0x0, 0x80000000}};
  // -9878433898725
  s21_decimal dec_2 = {{0x8b20e5, 0x8fc, 0x0, 0x80000000}};
  // 209099.90886441860696179115233
  s21_decimal dec_check = {{0x5bce84e1, 0x495fcf75, 0x439056cd, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_28) {
  // -404
  s21_decimal dec_1 = {{0x194, 0x0, 0x0, 0x80000000}};
  // -19.588
  s21_decimal dec_2 = {{0x4c84, 0x0, 0x0, 0x80030000}};
  // 20.624872370839289360833163161
  s21_decimal dec_check = {{0xe7c1af99, 0x95c342da, 0x42a47e9b, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_29) {
  // 42120490163619654392.8220747
  s21_decimal dec_1 = {{0x1fa03c4b, 0x7884bc26, 0x15c699b, 0x70000}};
  // -15605130294907143
  s21_decimal dec_2 = {{0x87e6d107, 0x3770c8, 0x0, 0x80000000}};
  // -2699.1437666730669732971964064
  s21_decimal dec_check = {{0x8a3466a0, 0xd6bd2078, 0x5736cb3f, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_30) {
  // -2223631439279.8
  s21_decimal dec_1 = {{0x4b9ed8de, 0x1439, 0x0, 0x80010000}};
  // 6.824103072124366
  s21_decimal dec_2 = {{0x4f864dce, 0x183e7c, 0x0, 0xf0000}};
  // -325849626797.55892545722890668
  s21_decimal dec_check = {{0xcba9b9ac, 0x63349607, 0x6949a63e, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_31) {
  // 732673029440148.617659710
  s21_decimal dec_1 = {{0x5fe1853e, 0x48d5c7bc, 0x9b26, 0x90000}};
  // -1126326666051.20824
  s21_decimal dec_2 = {{0x431a6d38, 0x19026d0, 0x0, 0x80050000}};
  // -650.49780984838884183313772363
  s21_decimal dec_check = {{0xcafc6f4b, 0x2c65d318, 0xd22feaed, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_32) {
  // 6208950865491654.5293881189791
  s21_decimal dec_1 = {{0x4650259f, 0x9c641a0f, 0xc89f3ce0, 0xd0000}};
  // 29618266543678.4025
  s21_decimal dec_2 = {{0xa1fce599, 0x41c4090, 0x0, 0x40000}};
  // 209.63248663912327214992884378
  s21_decimal dec_check = {{0xa28e829a, 0x3039a661, 0x43bc6493, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_33) {
  // -4969214931862490579858722620
  s21_decimal dec_1 = {{0xbe058f3c, 0x3bcf91c8, 0x100e7031, 0x80000000}};
  // -9724810924
  s21_decimal dec_2 = {{0x43a4d6ac, 0x2, 0x0, 0x80000000}};
  // 510983192444276110.41733428153
  s21_decimal dec_check = {{0xe33e43b9, 0xc220d9df, 0xa51b89fc, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_34) {
  // 9381
  s21_decimal dec_1 = {{0x24a5, 0x0, 0x0, 0x0}};
  // 233.523
  s21_decimal dec_2 = {{0x39033, 0x0, 0x0, 0x30000}};
  // 40.171631916342287483459873332
  s21_decimal dec_check = {{0x8fe02a34, 0xcca00670, 0x81cd31f1, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_35) {
  // -12954647550972699172
  s21_decimal dec_1 = {{0x9a1ca224, 0xb3c8274f, 0x0, 0x80000000}};
  // -0.461626190413600093
  s21_decimal dec_2 = {{0xa9e955d, 0x6680693, 0x0, 0x80120000}};
  // 28063068820609617703.732237985
  s21_decimal dec_check = {{0xa58fd6a1, 0x1883a139, 0x5aad39f9, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_36) {
  // 69950567371398140
  s21_decimal dec_1 = {{0xa0025bfc, 0xf883ab, 0x0, 0x0}};
  // 52.6124
  s21_decimal dec_2 = {{0x8072c, 0x0, 0x0, 0x40000}};
  // 1329545266351623.1914909793129
  s21_decimal dec_check = {{0xeb66fb69, 0x191eabc0, 0x2af5bd9d, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_38) {
  // 4377342111590413095
  s21_decimal dec_1 = {{0x55b47327, 0x3cbf7175, 0x0, 0x0}};
  // -9597705120708893.6098
  s21_decimal dec_2 = {{0x8c0314a2, 0x33f2fb90, 0x5, 0x80040000}};
  // -456.08216303139550552093664755
  s21_decimal dec_check = {{0xfc1ca5f3, 0xf3dfe526, 0x935e3b77, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_39) {
  // -29210539020.7810757
  s21_decimal dec_1 = {{0x4503cc5, 0x40dc44e, 0x0, 0x80070000}};
  // 1.0361083043120
  s21_decimal dec_2 = {{0x60ac9d30, 0x96c, 0x0, 0xd0000}};
  // -28192553712.015224753812271228
  s21_decimal dec_check = {{0xd085f07c, 0x1fc253ce, 0x5b185577, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_40) {
  // 31223896154805367939915221770
  s21_decimal dec_1 = {{0xd4a8b0a, 0x399f64dd, 0x64e3cd32, 0x0}};
  // -970.61350420077
  s21_decimal dec_2 = {{0xdb502e6d, 0x5846, 0x0, 0x800b0000}};
  // -32169237311937038704952555.976
  s21_decimal dec_check = {{0x8b1939c8, 0xa4a2ca8, 0x67f1c4f9, 0x80030000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_41) {
  // 6455349794
  s21_decimal dec_1 = {{0x80c4d222, 0x1, 0x0, 0x0}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -922192827.71428571428571428571
  s21_decimal dec_check = {{0xcdd49249, 0xa11290c3, 0x1dcc3345, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_42) {
  // -6147687777580
  s21_decimal dec_1 = {{0x5ebf052c, 0x597, 0x0, 0x80000000}};
  // 1167383.05
  s21_decimal dec_2 = {{0x6f54901, 0x0, 0x0, 0x20000}};
  // -5266212.9860288788671379115878
  s21_decimal dec_check = {{0x35458f66, 0x1ca84add, 0xaa2917c4, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_45) {
  // 1788927286815536990554419
  s21_decimal dec_1 = {{0x1efe8933, 0xf14a3fc0, 0x17ad1, 0x0}};
  // -44078746.62675482920
  s21_decimal dec_2 = {{0xdb378928, 0x3d2beaa6, 0x0, 0x800b0000}};
  // -40584803873023410.670578803616
  s21_decimal dec_check = {{0x2bb1a3a0, 0x7395d1cc, 0x8322f682, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_46) {
  // 606175917050930839688889
  s21_decimal dec_1 = {{0xe9c016b9, 0xdcc0442a, 0x805c, 0x0}};
  // 894905262864835414
  s21_decimal dec_2 = {{0x5cafa356, 0xc6b5798, 0x0, 0x0}};
  // 677363.22737716021219661407437
  s21_decimal dec_check = {{0xf5b364cd, 0x6ba91ab7, 0xdade2c45, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_49) {
  // 237194026
  s21_decimal dec_1 = {{0xe234b2a, 0x0, 0x0, 0x0}};
  // -41.865
  s21_decimal dec_2 = {{0xa389, 0x0, 0x0, 0x80030000}};
  // -5665687.9493610414427325928580
  s21_decimal dec_check = {{0x157d1484, 0xa93d5150, 0xb71178e7, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_51) {
  // 482095041257051532428
  s21_decimal dec_1 = {{0x37d82c8c, 0x2269a5c6, 0x1a, 0x0}};
  // -9448.2093
  s21_decimal dec_2 = {{0x5a1aead, 0x0, 0x0, 0x80040000}};
  // -51025017116952683.555390755368
  s21_decimal dec_check = {{0xf95c1228, 0x772b7f87, 0xa4dee7a8, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_52) {
  // -27450.020377
  s21_decimal dec_1 = {{0x64261219, 0x6, 0x0, 0x80060000}};
  // -0.96
  s21_decimal dec_2 = {{0x60, 0x0, 0x0, 0x80020000}};
  // 28593.771226041666666666666667
  s21_decimal dec_check = {{0x64cc2aab, 0x2432663f, 0x5c643694, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_53) {
  // 41375430929147115927808
  s21_decimal dec_1 = {{0x8c50f900, 0xf7736da1, 0x8c2, 0x0}};
  // 1803.3
  s21_decimal dec_2 = {{0x4671, 0x0, 0x0, 0x10000}};
  // 22944285991874405771.534409139
  s21_decimal dec_check = {{0xe181db3, 0xed0aeba6, 0x4a23118b, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_54) {
  // -389646029147778523842.557862
  s21_decimal dec_1 = {{0x362537a6, 0x90ab9c88, 0x1424ec1, 0x80060000}};
  // 863899251
  s21_decimal dec_2 = {{0x337e0e73, 0x0, 0x0, 0x0}};
  // -451031794155.10168539613407073
  s21_decimal dec_check = {{0x738a761, 0x6a3c287d, 0x91bc79bf, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_56) {
  // 2974635.2471976857974855607492
  s21_decimal dec_1 = {{0x9242a4c4, 0xae8d471f, 0x601d9b26, 0x160000}};
  // 563
  s21_decimal dec_2 = {{0x233, 0x0, 0x0, 0x0}};
  // 5283.5439559461559458002855226
  s21_decimal dec_check = {{0x3bb7653a, 0xbad031f0, 0xaab87385, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_58) {
  // -25110878391918863608128249
  s21_decimal dec_1 = {{0xc0db22f9, 0x71fdaa83, 0x14c56f, 0x80000000}};
  // 516641931
  s21_decimal dec_2 = {{0x1ecb548b, 0x0, 0x0, 0x0}};
  // -48604027054704670.512173834764
  s21_decimal dec_check = {{0xfc8620c, 0x3676e7f0, 0x9d0c4f12, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_59) {
  // 58065952409570.024935197112
  s21_decimal dec_1 = {{0x36909b8, 0x96660eef, 0x3007f1, 0xc0000}};
  // -93
  s21_decimal dec_2 = {{0x5d, 0x0, 0x0, 0x80000000}};
  // -624365079672.79596704513023656
  s21_decimal dec_check = {{0x427a5ea8, 0x6d2aeac, 0xc9be44d7, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_60) {
  // 16564573.5
  s21_decimal dec_1 = {{0x9df8da7, 0x0, 0x0, 0x10000}};
  // -38
  s21_decimal dec_2 = {{0x26, 0x0, 0x0, 0x80000000}};
  // -435909.82894736842105263157895
  s21_decimal dec_check = {{0x32baf287, 0xc33a3c48, 0x8cd99dad, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_61) {
  // -60922401777786120245713128
  s21_decimal dec_1 = {{0xbc5d98e8, 0x49d5219, 0x3264d2, 0x80000000}};
  // 50.4
  s21_decimal dec_2 = {{0x1f8, 0x0, 0x0, 0x10000}};
  // -1208777813051311909637165.2381
  s21_decimal dec_check = {{0xa4bba71d, 0x7b338147, 0x270ec695, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_62) {
  // 634730186697735418905
  s21_decimal dec_1 = {{0x5fe43419, 0x68a69ddb, 0x22, 0x0}};
  // 4523.38
  s21_decimal dec_2 = {{0x6e6f2, 0x0, 0x0, 0x20000}};
  // 140322101326383239.72449805234
  s21_decimal dec_check = {{0x1c4ca3b2, 0x876b2a41, 0x2d572c13, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_63) {
  // -9542356249
  s21_decimal dec_1 = {{0x38c4cd19, 0x2, 0x0, 0x80000000}};
  // -83300.128177
  s21_decimal dec_2 = {{0x651315b1, 0x13, 0x0, 0x80060000}};
  // 114553.92035800900686049853112
  s21_decimal dec_check = {{0x230a3eb8, 0x982c2d72, 0x2503ad9e, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_64) {
  // 4690962941950280523752529652
  s21_decimal dec_1 = {{0x7111def4, 0xa2b50076, 0xf28460a, 0x0}};
  // -5211633678138350260952
  s21_decimal dec_2 = {{0x22d852d8, 0x85f241d9, 0x11a, 0x80000000}};
  // -900094.52537461175936577128120
  s21_decimal dec_check = {{0xf51720ac, 0xed3e471a, 0x1d15684b, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_65) {
  // -740240
  s21_decimal dec_1 = {{0xb4b90, 0x0, 0x0, 0x80000000}};
  // -238.7552
  s21_decimal dec_2 = {{0x246e60, 0x0, 0x0, 0x80040000}};
  // 3100.4141480478749782203696506
  s21_decimal dec_check = {{0x62c057a, 0x758ade50, 0x642e0655, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_66) {
  // -899262241944764933782116
  s21_decimal dec_1 = {{0x755cba64, 0x1a93c935, 0xbe6d, 0x80000000}};
  // -520976697431
  s21_decimal dec_2 = {{0x4ca18857, 0x79, 0x0, 0x80000000}};
  // 1726108377551.5053853885084209
  s21_decimal dec_check = {{0xcba03231, 0x7181ba17, 0x37c608aa, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_67) {
  // 785720
  s21_decimal dec_1 = {{0xbfd38, 0x0, 0x0, 0x0}};
  // -8.1
  s21_decimal dec_2 = {{0x51, 0x0, 0x0, 0x80010000}};
  // -97002.469135802469135802469136
  s21_decimal dec_check = {{0xab5ba782, 0xde12e242, 0x1f57db2e, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_68) {
  // 412032495992576139315
  s21_decimal dec_1 = {{0x430fe033, 0x56197c10, 0x16, 0x0}};
  // 3495443.69
  s21_decimal dec_2 = {{0x14d59fb1, 0x0, 0x0, 0x20000}};
  // 117877022928833.43210572503887
  s21_decimal dec_check = {{0x9cbd5b4f, 0xba52ae9f, 0x26168f0d, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_69) {
  // -2889517509893785208840485
  s21_decimal dec_1 = {{0x9d216125, 0xede8880, 0x263e1, 0x80000000}};
  // -168328470274392827.3597
  s21_decimal dec_2 = {{0x94d87abd, 0x404496b8, 0x5b, 0x80040000}};
  // 17165946.468732072613621650248
  s21_decimal dec_check = {{0xafc5d348, 0xb55d96fc, 0x3777568e, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_70) {
  // -52270383910.408015200879402
  s21_decimal dec_1 = {{0x1a13832a, 0x308aa901, 0x2b3caf, 0x800f0000}};
  // 290475452
  s21_decimal dec_2 = {{0x11504dbc, 0x0, 0x0, 0x0}};
  // -179.94768077822980786988981775
  s21_decimal dec_check = {{0x1c871e0f, 0x2adc4d06, 0x3a24ec5c, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_72) {
  // -7781040091.5292009515
  s21_decimal dec_1 = {{0x12b5b42b, 0x37d61360, 0x4, 0x800a0000}};
  // -0.69
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x80020000}};
  // 11276869697.868407176086956522
  s21_decimal dec_check = {{0xc37429ea, 0x4363f658, 0x2470020b, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_73) {
  // 2085466501356409866166573763
  s21_decimal dec_1 = {{0xa6419ac3, 0x92212408, 0x6bd0eb5, 0x0}};
  // -5649.3542875384670532190746
  s21_decimal dec_2 = {{0xa0bcc21a, 0x1889481d, 0x2ebaf9, 0x80160000}};
  // -369151303885578746916944.25355
  s21_decimal dec_check = {{0x5f70750b, 0x3e359cbf, 0x77477aec, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_74) {
  // 957563394468935143107890
  s21_decimal dec_1 = {{0x6f2dad32, 0x9d99d932, 0xcac5, 0x0}};
  // 85973076193.7626929
  s21_decimal dec_2 = {{0xabc4a731, 0xbee6092, 0x0, 0x70000}};
  // 11137945003977.953816204278376
  s21_decimal dec_check = {{0x6163fa68, 0x84502d1f, 0x23fd1798, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_75) {
  // -213684911.270
  s21_decimal dec_1 = {{0xc09cfca6, 0x31, 0x0, 0x80030000}};
  // 3421
  s21_decimal dec_2 = {{0xd5d, 0x0, 0x0, 0x0}};
  // -62462.704258988599824612686349
  s21_decimal dec_check = {{0x23d57a0d, 0xd8831b19, 0xc9d3f01e, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_76) {
  // 3180472881
  s21_decimal dec_1 = {{0xbd922a31, 0x0, 0x0, 0x0}};
  // 552
  s21_decimal dec_2 = {{0x228, 0x0, 0x0, 0x0}};
  // 5761726.2336956521739130434783
  s21_decimal dec_check = {{0x6ccef4df, 0xeb765a0a, 0xba2be1e1, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_77) {
  // -340698.9531673471959657
  s21_decimal dec_1 = {{0x87c34269, 0xb17a500d, 0xb8, 0x80100000}};
  // 59.1
  s21_decimal dec_2 = {{0x24f, 0x0, 0x0, 0x10000}};
  // -5764.7877016471606762385786802
  s21_decimal dec_check = {{0xb90d47b2, 0x593b011, 0xba4534cb, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_78) {
  // 735926914860487223
  s21_decimal dec_1 = {{0x44e89237, 0xa3689a1, 0x0, 0x0}};
  // 64038.1281718296331224
  s21_decimal dec_2 = {{0x5c6743d8, 0xb71356d6, 0x22, 0x100000}};
  // 11492011647901.685659872910515
  s21_decimal dec_check = {{0x9265dcb3, 0xbe830130, 0x2521f81f, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_79) {
  // 61.26028679
  s21_decimal dec_1 = {{0x6d23c787, 0x1, 0x0, 0x80000}};
  // -0.553
  s21_decimal dec_2 = {{0x229, 0x0, 0x0, 0x80030000}};
  // -110.77809546112115732368896926
  s21_decimal dec_check = {{0x117cb39e, 0xd0534839, 0x23cb596a, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_81) {
  // 975398610921868490.437
  s21_decimal dec_1 = {{0x76bf6c5, 0xe05ffcc0, 0x34, 0x30000}};
  // 449.922454872386259793
  s21_decimal dec_2 = {{0x444d4b51, 0x63eda8ea, 0x18, 0x120000}};
  // 2167926051164807.1495305409669
  s21_decimal dec_check = {{0xacd83485, 0x3afba66d, 0x460ca9fb, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_82) {
  // -659796394434149469566516346
  s21_decimal dec_1 = {{0xbd57bc7a, 0x36517419, 0x221c552, 0x80000000}};
  // 271096530
  s21_decimal dec_2 = {{0x10289ad2, 0x0, 0x0, 0x0}};
  // -2433806122247855660.7364776893
  s21_decimal dec_check = {{0x71bcc3bd, 0x93279c18, 0x4ea3f8ee, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_83) {
  // 789751813101420418
  s21_decimal dec_1 = {{0xf8a17f82, 0xaf5c316, 0x0, 0x0}};
  // -0.044054543
  s21_decimal dec_2 = {{0x2a0380f, 0x0, 0x0, 0x80090000}};
  // -17926682682905606761.146063869
  s21_decimal dec_check = {{0xe4f59bfd, 0x8362cfe3, 0x39ec9ab7, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_84) {
  // 81394939825055
  s21_decimal dec_1 = {{0x3c798b9f, 0x4a07, 0x0, 0x0}};
  // 66044994621919.8492727
  s21_decimal dec_2 = {{0x612b3037, 0xcd958edf, 0x23, 0x70000}};
  // 1.2324164804767902351642759588
  s21_decimal dec_check = {{0xc46a91a4, 0xc51aa1b5, 0x27d24f68, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_85) {
  // 902844349562331370405710408
  s21_decimal dec_1 = {{0x5beb4a48, 0x42b5d5f1, 0x2ead0ba, 0x0}};
  // -9.91385372894
  s21_decimal dec_2 = {{0xd32c48de, 0xe6, 0x0, 0x800b0000}};
  // -91068960088325255944575569.132
  s21_decimal dec_check = {{0x413047b1, 0xde69004f, 0x1d6d0c3d, 0x80020000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_87) {
  // -7537929426056
  s21_decimal dec_1 = {{0xf9b1488, 0x6db, 0x0, 0x80000000}};
  // 86040.0858512
  s21_decimal dec_2 = {{0x53e33590, 0xc8, 0x0, 0x70000}};
  // -87609506.098033125017882118373
  s21_decimal dec_check = {{0x6b5b7a7d, 0x3597d17d, 0x1c4ee374, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_89) {
  // 305643574744566
  s21_decimal dec_1 = {{0x30b355f6, 0x115fb, 0x0, 0x0}};
  // 6189982409
  s21_decimal dec_2 = {{0x70f3a2c9, 0x1, 0x0, 0x0}};
  // 49377.131395425585934003580785
  s21_decimal dec_check = {{0xa5dbaf71, 0x804a2535, 0x9f8bce48, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_90) {
  // -25034999788076617456782701
  s21_decimal dec_1 = {{0x98c98d6d, 0xed3de10, 0x14b55e, 0x80000000}};
  // -127915707817382323153358
  s21_decimal dec_2 = {{0x7303e9ce, 0x530ce571, 0x1b16, 0x80000000}};
  // 195.71482044892878434932900736
  s21_decimal dec_check = {{0xf7384380, 0x9779542d, 0x3f3d2687, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_91) {
  // -928177916738673657727551
  s21_decimal dec_1 = {{0x335f4a3f, 0xa02d2875, 0xc48c, 0x80000000}};
  // 7777071413.831908
  s21_decimal dec_2 = {{0x8b03a8e4, 0x1ba134, 0x0, 0x60000}};
  // -119347999696629.13290724692633
  s21_decimal dec_check = {{0xf76bd299, 0xc3b13c4d, 0x26903c32, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_93) {
  // 591849262527607729709772
  s21_decimal dec_1 = {{0xf87a62cc, 0x367ac512, 0x7d54, 0x0}};
  // 4563753425863.20355776516209
  s21_decimal dec_2 = {{0x569bd071, 0xe521af63, 0x179813c, 0xe0000}};
  // 129684758859.57037314615079786
  s21_decimal dec_check = {{0x5e00f36a, 0x781202f7, 0x29e74596, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_94) {
  // -65409463001173038
  s21_decimal dec_1 = {{0x5f224c2e, 0xe8618f, 0x0, 0x80000000}};
  // 411712144979971
  s21_decimal dec_2 = {{0x3426b803, 0x17673, 0x0, 0x0}};
  // -158.87183265957598102027970859
  s21_decimal dec_check = {{0x4edb292b, 0x94d1f9bb, 0x335591ea, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_95) {
  // 222560920367310.950358
  s21_decimal dec_1 = {{0x5191cfd6, 0x10a739e5, 0xc, 0x60000}};
  // -25479.27415754
  s21_decimal dec_2 = {{0x3c4efbca, 0x251, 0x0, 0x80080000}};
  // -8734978829.8992500922778310113
  s21_decimal dec_check = {{0x36891563, 0x3317dc1e, 0x1c3967b7, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_97) {
  // 27912792859826319810270327
  s21_decimal dec_1 = {{0x6b329477, 0x886ea142, 0x1716c3, 0x0}};
  // -25729134567
  s21_decimal dec_2 = {{0xfd936fe7, 0x5, 0x0, 0x80000000}};
  // -1084871035484693.8373615264787
  s21_decimal dec_check = {{0xf2042413, 0xc5015ab1, 0x230dd7c6, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_98) {
  // -62600991511630015083005518
  s21_decimal dec_1 = {{0x7a8f464e, 0x8cc1d78d, 0x33c846, 0x80000000}};
  // -15573.85244
  s21_decimal dec_2 = {{0x5cd3d01c, 0x0, 0x0, 0x80050000}};
  // 4019621461857771081013.6273514
  s21_decimal dec_check = {{0x7a3b626a, 0xc1fdb179, 0x81e18788, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_99) {
  // -346186262364890855577414019
  s21_decimal dec_1 = {{0x6f12e983, 0xe3149119, 0x11e5bca, 0x80000000}};
  // -2620.95748136191885
  s21_decimal dec_2 = {{0xbccc478d, 0x3a326b1, 0x0, 0x800e0000}};
  // 132083891030923292430159.39890
  s21_decimal dec_check = {{0x4eb48732, 0x7c39913, 0x2aadb930, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_100) {
  // -6594707359039321921453520.307
  s21_decimal dec_1 = {{0xdb3b75b3, 0x47615346, 0x154f039a, 0x80030000}};
  // -21.2867150123739772280882237
  s21_decimal dec_2 = {{0x33dbc43d, 0x54abe3d9, 0xb0145f, 0x80190000}};
  // 309803901410143157374518.32013
  s21_decimal dec_check = {{0x3b57a2cd, 0xc44dbd4a, 0x641a60ca, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_101) {
  // -59781934.376994
  s21_decimal dec_1 = {{0x10f66822, 0x365f, 0x0, 0x80060000}};
  // -2678773
  s21_decimal dec_2 = {{0x28dff5, 0x0, 0x0, 0x80000000}};
  // 22.316909412254789786219287711
  s21_decimal dec_check = {{0x7b0f949f, 0x657d3d3d, 0x481c1d63, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_102) {
  // 705697083141188
  s21_decimal dec_1 = {{0xe7f5ac44, 0x281d3, 0x0, 0x0}};
  // 37
  s21_decimal dec_2 = {{0x25, 0x0, 0x0, 0x0}};
  // 19072894138951.027027027027027
  s21_decimal dec_check = {{0x465e453, 0xd45373d, 0x3da0ba6f, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_103) {
  // -841492227070421579789
  s21_decimal dec_1 = {{0x88d3380d, 0x9e0cf21a, 0x2d, 0x80000000}};
  // -425998626403067772
  s21_decimal dec_2 = {{0x618f277c, 0x5e9737e, 0x0, 0x80000000}};
  // 1975.3402356612896494625056240
  s21_decimal dec_check = {{0x7d8565f0, 0x7374b025, 0x3fd3a1a7, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_104) {
  // 5348793927903943
  s21_decimal dec_1 = {{0x220caac7, 0x1300b3, 0x0, 0x0}};
  // 2773
  s21_decimal dec_2 = {{0xad5, 0x0, 0x0, 0x0}};
  // 1928883493654.5052289938694555
  s21_decimal dec_check = {{0x20af219b, 0x25549981, 0x3e5359ad, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_105) {
  // -681112187683822385872
  s21_decimal dec_1 = {{0xeb6c3ad0, 0xec549602, 0x24, 0x80000000}};
  // 5.40738652
  s21_decimal dec_2 = {{0x203b045c, 0x0, 0x0, 0x80000}};
  // -125959589750913974958.83094371
  s21_decimal dec_check = {{0x7f14d963, 0x44412563, 0x28b32210, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_107) {
  // -29675074088676879617415493
  s21_decimal dec_1 = {{0x952ad945, 0xfd6242ba, 0x188bf0, 0x80000000}};
  // 56480174058782
  s21_decimal dec_2 = {{0x50b62d1e, 0x335e, 0x0, 0x0}};
  // -525406916377.28329694816496562
  s21_decimal dec_check = {{0xcc9bebb2, 0xe03487bd, 0xa9c4a438, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_108) {
  // -9019008849946662635951617
  s21_decimal dec_1 = {{0xf271d601, 0x730e6da3, 0x775d9, 0x80000000}};
  // 99173552650419
  s21_decimal dec_2 = {{0xa46078b3, 0x5a32, 0x0, 0x0}};
  // -90941673550.186750063290071637
  s21_decimal dec_check = {{0x5e772c3c, 0x29b3d16c, 0x1d6284d8, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_109) {
  // -4520752563157518383276612
  s21_decimal dec_1 = {{0xea936244, 0x7ccd9a25, 0x3bd4e, 0x80000000}};
  // 77588898577784
  s21_decimal dec_2 = {{0x12bcfd78, 0x4691, 0x0, 0x0}};
  // -58265456090.028113323065995495
  s21_decimal dec_check = {{0xb9f5f0e7, 0xaef0d450, 0xbc440e3f, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_110) {
  // -722.6495310052137
  s21_decimal dec_1 = {{0x8ded3b29, 0x19ac75, 0x0, 0x800d0000}};
  // 0.4766
  s21_decimal dec_2 = {{0x129e, 0x0, 0x0, 0x40000}};
  // -1516.2600314838726395300041964
  s21_decimal dec_check = {{0x94254ec, 0x18085345, 0x30fe3582, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_111) {
  // 6129502
  s21_decimal dec_1 = {{0x5d875e, 0x0, 0x0, 0x0}};
  // -7125
  s21_decimal dec_2 = {{0x1bd5, 0x0, 0x0, 0x80000000}};
  // -860.28098245614035087719298246
  s21_decimal dec_check = {{0x77823ee1, 0x103ea2c7, 0x1bcc13d7, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_112) {
  // 820405549923859.8
  s21_decimal dec_1 = {{0x85bfecc6, 0x1d258b, 0x0, 0x10000}};
  // 61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x0}};
  // 13449271310227.209836065573770
  s21_decimal dec_check = {{0xe7a1cb8a, 0xa50f5806, 0x2b74f9fa, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_113) {
  // 726109313184538
  s21_decimal dec_1 = {{0x7fae331a, 0x29464, 0x0, 0x0}};
  // 6510171.922854
  s21_decimal dec_2 = {{0xc47c21a6, 0x5eb, 0x0, 0x60000}};
  // 111534583.38565939116049151858
  s21_decimal dec_check = {{0x25e3b772, 0x11eab877, 0x2409ecac, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_116) {
  // 38844223699720332.0
  s21_decimal dec_1 = {{0xff9f578, 0x5640628, 0x0, 0x10000}};
  // -698849.04624336
  s21_decimal dec_2 = {{0x58ea50d0, 0x3f8f, 0x0, 0x80080000}};
  // -55583139031.992925243507024424
  s21_decimal dec_check = {{0x30bd2228, 0x9a3f4cb0, 0xb3994b84, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_117) {
  // 4853475.454040779
  s21_decimal dec_1 = {{0xd05d3acb, 0x113e35, 0x0, 0x90000}};
  // 4.561212
  s21_decimal dec_2 = {{0x45993c, 0x0, 0x0, 0x60000}};
  // 1064075.8320465654742642964195
  s21_decimal dec_check = {{0x6df5b6e3, 0x65a8936b, 0x2261d438, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_119) {
  // -171.468701613348906
  s21_decimal dec_1 = {{0x29c2d82a, 0x2612de0, 0x0, 0x800f0000}};
  // 8.1
  s21_decimal dec_2 = {{0x51, 0x0, 0x0, 0x10000}};
  // -21.168975507820852592592592593
  s21_decimal dec_check = {{0x90dc9ed1, 0xbe5bec6d, 0x446690ed, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_120) {
  // -834927941032444017031078419
  s21_decimal dec_1 = {{0x502d6213, 0x6076b3af, 0x2b2a2de, 0x80000000}};
  // -3170.610519543
  s21_decimal dec_2 = {{0x371d1df7, 0x2e2, 0x0, 0x80090000}};
  // 263333492362470122328594.07308
  s21_decimal dec_check = {{0xf812d3cc, 0x89b57bf9, 0x55166f9a, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_121) {
  // 74018630275.82997753919
  s21_decimal dec_1 = {{0xedf5f03f, 0x417c06d5, 0x191, 0xb0000}};
  // -57445597137
  s21_decimal dec_2 = {{0x60063fd1, 0xd, 0x0, 0x80000000}};
  // -1.2884996233794128579812729330
  s21_decimal dec_check = {{0xb63d21f2, 0x75155680, 0x29a23815, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_122) {
  // -32930509
  s21_decimal dec_1 = {{0x1f67acd, 0x0, 0x0, 0x80000000}};
  // -0.218
  s21_decimal dec_2 = {{0xda, 0x0, 0x0, 0x80030000}};
  // 151057380.73394495412844036697
  s21_decimal dec_check = {{0x9db0259, 0xcefe262c, 0x30cf2c75, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_123) {
  // -9816144705964723961827746251
  s21_decimal dec_1 = {{0x8770e1cb, 0xc82dfef7, 0x1fb7b97e, 0x80000000}};
  // 8958.20
  s21_decimal dec_2 = {{0xdab4c, 0x0, 0x0, 0x20000}};
  // -1095771997272300681144398.0098
  s21_decimal dec_check = {{0x65e6742, 0xfee67a6d, 0x23680375, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_124) {
  // 4035872694836.3858
  s21_decimal dec_1 = {{0x5f581e52, 0x8f620c, 0x0, 0x40000}};
  // -10797
  s21_decimal dec_2 = {{0x2a2d, 0x0, 0x0, 0x80000000}};
  // -373795748.34087114939335000463
  s21_decimal dec_check = {{0xc739418f, 0x15c8421e, 0x78c7a8dc, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_125) {
  // -8968756
  s21_decimal dec_1 = {{0x88da34, 0x0, 0x0, 0x80000000}};
  // 638
  s21_decimal dec_2 = {{0x27e, 0x0, 0x0, 0x0}};
  // -14057.611285266457680250783699
  s21_decimal dec_check = {{0x6e39c7d3, 0xc5aa6f5a, 0x2d6c2efa, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_126) {
  // 9388716364733080769
  s21_decimal dec_1 = {{0x48cfe4c1, 0x824b6bca, 0x0, 0x0}};
  // 27632425973886
  s21_decimal dec_2 = {{0xacef387e, 0x1921, 0x0, 0x0}};
  // 339771.70059573773791548723546
  s21_decimal dec_check = {{0xf5fcd15a, 0xacca93c3, 0x6dc9419f, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_127) {
  // 382564590672736239786051
  s21_decimal dec_1 = {{0x59249843, 0xde364ec8, 0x5102, 0x0}};
  // 8189
  s21_decimal dec_2 = {{0x1ffd, 0x0, 0x0, 0x0}};
  // 46716887369976338965.203443644
  s21_decimal dec_check = {{0x50d6dfbc, 0xea194c38, 0x96f34db2, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_128) {
  // 2861.16388
  s21_decimal dec_1 = {{0x110dca24, 0x0, 0x0, 0x50000}};
  // -0.27123
  s21_decimal dec_2 = {{0x69f3, 0x0, 0x0, 0x80050000}};
  // -10548.847398886553847288279320
  s21_decimal dec_check = {{0x6ab7b118, 0x5ac3580e, 0x2215cd53, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_129) {
  // 6960
  s21_decimal dec_1 = {{0x1b30, 0x0, 0x0, 0x0}};
  // 38
  s21_decimal dec_2 = {{0x26, 0x0, 0x0, 0x0}};
  // 183.15789473684210526315789474
  s21_decimal dec_check = {{0x1286bca2, 0xe8641f4e, 0x3b2e7748, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_130) {
  // -38117278297594563208
  s21_decimal dec_1 = {{0x5cd48a88, 0x10fbc6a8, 0x2, 0x80000000}};
  // -172524593305604037
  s21_decimal dec_2 = {{0x1affcfc5, 0x264ee34, 0x0, 0x80000000}};
  // 220.93823012279152662507601890
  s21_decimal dec_check = {{0x10eebfe2, 0x6bd16ef8, 0x47639501, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_131) {
  // -7927
  s21_decimal dec_1 = {{0x1ef7, 0x0, 0x0, 0x80000000}};
  // -2674
  s21_decimal dec_2 = {{0xa72, 0x0, 0x0, 0x80000000}};
  // 2.9644727000747943156320119671
  s21_decimal dec_check = {{0x5052b77, 0xd8f7c3f1, 0x5fc98b1e, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_132) {
  // 33522856191376184448558908.4
  s21_decimal dec_1 = {{0x2d82885c, 0xc15ba470, 0x1154b68, 0x10000}};
  // -95557865984513885716s21_div_cases
  s21_decimal dec_2 = {{0x5d554614, 0x2e21bcd3, 0x5, 0x80000000}};
  // -350812.10579575836081482524043
  s21_decimal dec_check = {{0x5d0a658b, 0x309bec05, 0x715a7f4c, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_133) {
  // -6984815182275775559099
  s21_decimal dec_1 = {{0x96ebf5bb, 0xa5c87124, 0x17a, 0x80000000}};
  // 858.8
  s21_decimal dec_2 = {{0x218c, 0x0, 0x0, 0x10000}};
  // -8133226807493916580.2270610154
  s21_decimal dec_check = {{0x63981517, 0xb33a90e2, 0x1a47a5c4, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_134) {
  // -1380710722798.386069200965
  s21_decimal dec_1 = {{0xcbb96045, 0x7a6f5a33, 0x12460, 0x800c0000}};
  // 7.437914086
  s21_decimal dec_2 = {{0xbb558fe6, 0x1, 0x0, 0x90000}};
  // -185631442745.11401894686593184
  s21_decimal dec_check = {{0x144990a0, 0x8783dbc8, 0x3bfb12b3, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_135) {
  // -8647388065.6967215269990
  s21_decimal dec_1 = {{0x955ac866, 0xc22aab41, 0x124f, 0x800d0000}};
  // -73.9
  s21_decimal dec_2 = {{0x2e3, 0x0, 0x0, 0x80010000}};
  // 117014723.48710042661703653586
  s21_decimal dec_check = {{0xca2818d2, 0x1667fe63, 0x25cf3b27, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_136) {
  // 77305697129668
  s21_decimal dec_1 = {{0x229dd4c4, 0x464f, 0x0, 0x0}};
  // -957436730
  s21_decimal dec_2 = {{0x3911533a, 0x0, 0x0, 0x80000000}};
  // -80742.355820909440146504511060
  s21_decimal dec_check = {{0x2be824a2, 0xf69038c3, 0x1a16d9e3, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_137) {
  // -17458212841235072818704951
  s21_decimal dec_1 = {{0x12057237, 0x9d507766, 0xe70eb, 0x80000000}};
  // 6241022549651460125
  s21_decimal dec_2 = {{0x4b2d901d, 0x569c90f1, 0x0, 0x0}};
  // -2797332.1202324536715901235405
  s21_decimal dec_check = {{0x146570cd, 0xf5b274e4, 0x5a62fd2c, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_141) {
  // 5825655747066650715984
  s21_decimal dec_1 = {{0x649c6750, 0xcf36dc4f, 0x13b, 0x0}};
  // 98059.915739
  s21_decimal dec_2 = {{0xd4d391db, 0x16, 0x0, 0x60000}};
  // 59409144941266700.102563913340
  s21_decimal dec_check = {{0xc075de7c, 0x8a97c9af, 0xbff617c8, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_142) {
  // 2409150.4031839
  s21_decimal dec_1 = {{0x3d8a385f, 0x15e9, 0x0, 0x70000}};
  // 766455
  s21_decimal dec_2 = {{0xbb1f7, 0x0, 0x0, 0x0}};
  // 3.1432378980943434382970950676
  s21_decimal dec_check = {{0xecef9414, 0xe05716d9, 0x65904126, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_145) {
  // 157473211.3
  s21_decimal dec_1 = {{0x5ddc8151, 0x0, 0x0, 0x10000}};
  // -0.021
  s21_decimal dec_2 = {{0x15, 0x0, 0x0, 0x80030000}};
  // -7498724347.6190476190476190476
  s21_decimal dec_check = {{0x6250c30c, 0x477d87ba, 0xf24bfe76, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_146) {
  // -6047617754868911716496167049
  s21_decimal dec_1 = {{0xce15d089, 0x68d78eb0, 0x138a78df, 0x80000000}};
  // -0.6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80010000}};
  // 10079362924781519527493611748
  s21_decimal dec_check = {{0x5779b0e4, 0x411edd1, 0x2091741f, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_148) {
  // 279395147584692236464
  s21_decimal dec_1 = {{0xe96b30b0, 0x2562f66d, 0xf, 0x0}};
  // -9202102497
  s21_decimal dec_2 = {{0x247cf0e1, 0x2, 0x0, 0x80000000}};
  // -30362099061.141574292116907291
  s21_decimal dec_check = {{0x63a8a51b, 0x2a5d848e, 0x621af090, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_149) {
  // -525
  s21_decimal dec_1 = {{0x20d, 0x0, 0x0, 0x80000000}};
  // 37.6
  s21_decimal dec_2 = {{0x178, 0x0, 0x0, 0x10000}};
  // -13.962765957446808510638297872
  s21_decimal dec_check = {{0xee2b9310, 0x3f9f3fea, 0x2d1dbab3, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_150) {
  // -68337395392875114452
  s21_decimal dec_1 = {{0xf3bcafd4, 0xb45f330a, 0x3, 0x80000000}};
  // -90003327774765500
  s21_decimal dec_2 = {{0xbc9e31bc, 0x13fc18c, 0x0, 0x80000000}};
  // 759.27631880334843262143353796
  s21_decimal dec_check = {{0x5a9cd3c4, 0xd12298c5, 0xf555dd73, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_151) {
  // -59721.7801285120347818
  s21_decimal dec_1 = {{0xc36cceaa, 0x600fda12, 0x20, 0x80100000}};
  // -195.2226
  s21_decimal dec_2 = {{0x1dc9e2, 0x0, 0x0, 0x80040000}};
  // 305.91632387086349009694574296
  s21_decimal dec_check = {{0x7b946d8, 0xb2a617c5, 0x62d8ce22, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_152) {
  // -859256606739.976032579
  s21_decimal dec_1 = {{0x1bca1143, 0x9494b34b, 0x2e, 0x80090000}};
  // 8646161
  s21_decimal dec_2 = {{0x83ee11, 0x0, 0x0, 0x0}};
  // -99380.130295974830052204672108
  s21_decimal dec_check = {{0x3f3b20b, 0xd80c95db, 0x201c881d, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_153) {
  // 345342224625212620272033230.8
  s21_decimal dec_1 = {{0x828eaa14, 0x1845e176, 0xb289a9b, 0x10000}};
  // 4764011641.9266252491937
  s21_decimal dec_2 = {{0xb5dcca1, 0x936d432b, 0xa16, 0xd0000}};
  // 72489794438359506.610741353697
  s21_decimal dec_check = {{0x3dfc9ce1, 0xa7a44b7a, 0xea3a270e, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_154) {
  // 40013042028185
  s21_decimal dec_1 = {{0x43280e99, 0x2464, 0x0, 0x0}};
  // -4381365
  s21_decimal dec_2 = {{0x42dab5, 0x0, 0x0, 0x80000000}};
  // -9132551.6199141135239816815079
  s21_decimal dec_check = {{0x3e7b0364, 0x55148b5b, 0x1d824507, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_155) {
  // -3189201213873951099586242118
  s21_decimal dec_1 = {{0xb0ba6646, 0x3a9125e1, 0xa4e0ba0, 0x80000000}};
  // 676227320523122013.888230992
  s21_decimal dec_2 = {{0xfcdeb650, 0x80111b35, 0x22f5cb4, 0x90000}};
  // -4716167355.3899303192907517563
  s21_decimal dec_check = {{0xf1448e7b, 0x426de360, 0x986338d6, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_157) {
  // 79228162514264337593521991310
  s21_decimal dec_1 = {{0xfeb0ee8e, 0xffffffff, 0xffffffff, 0x0}};
  // -30.9617956
  s21_decimal dec_2 = {{0x12746524, 0x0, 0x0, 0x80070000}};
  // -2558900767184973522450422459.0
  s21_decimal dec_check = {{0x2c320b4e, 0x7a7783aa, 0x52aebb25, 0x80010000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_158) {
  // -7284.6935002128743251211788642
  s21_decimal dec_1 = {{0xc2dd2162, 0x6931c8d0, 0xeb619283, 0x80190000}};
  // 723.23483
  s21_decimal dec_2 = {{0x44f919b, 0x0, 0x0, 0x50000}};
  // -10.072376492449726633217013158
  s21_decimal dec_check = {{0x821eb5a6, 0xc2a2c118, 0x208bacaf, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_161) {
  // 88526596117
  s21_decimal dec_1 = {{0x9c98a815, 0x14, 0x0, 0x0}};
  // 0.1125251944659052
  s21_decimal dec_2 = {{0x2271b86c, 0x3ff69, 0x0, 0x100000}};
  // 786726888473.17029891572457320
  s21_decimal dec_check = {{0x28375f68, 0x2d46d384, 0xfe3485e0, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_163) {
  // 1828
  s21_decimal dec_1 = {{0x724, 0x0, 0x0, 0x0}};
  // 91
  s21_decimal dec_2 = {{0x5b, 0x0, 0x0, 0x0}};
  // 20.087912087912087912087912088
  s21_decimal dec_check = {{0x77e97e98, 0x5213349a, 0x40e854d8, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_164) {
  // -2918517887053340970872
  s21_decimal dec_1 = {{0xf6018f78, 0x36926b4d, 0x9e, 0x80000000}};
  // -98883.85403
  s21_decimal dec_2 = {{0x4d64c97b, 0x2, 0x0, 0x80050000}};
  // 29514604944179287.576580716329
  s21_decimal dec_check = {{0xe6fbf729, 0x6caa66f, 0x5f5de8b4, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_165) {
  // 649887666027
  s21_decimal dec_1 = {{0x5052cf6b, 0x97, 0x0, 0x0}};
  // -689920.18001
  s21_decimal dec_2 = {{0x103ea651, 0x10, 0x0, 0x80050000}};
  // -941975.15141183469729191230937
  s21_decimal dec_check = {{0xba3e4c96, 0xcb45fb32, 0x1e6fd5f8, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_166) {
  // -9054163826751.46963
  s21_decimal dec_1 = {{0x272bd8d3, 0xc90af67, 0x0, 0x80050000}};
  // -2580
  s21_decimal dec_2 = {{0xa14, 0x0, 0x0, 0x80000000}};
  // 3509365824.3222750503875968992
  s21_decimal dec_check = {{0x813cffe0, 0x63676c2c, 0x7164cb31, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_167) {
  // -1955866328565237
  s21_decimal dec_1 = {{0x9dbe05f5, 0x6f2d9, 0x0, 0x80000000}};
  // -87.53677
  s21_decimal dec_2 = {{0x85920d, 0x0, 0x0, 0x80050000}};
  // 22343368718827.950814269249368
  s21_decimal dec_check = {{0x277b9758, 0x47a748cf, 0x4832005d, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_168) {
  // -37213684827410680136843226
  s21_decimal dec_1 = {{0xf83bbfda, 0xe594e99e, 0x1ec84d, 0x80000000}};
  // 2407535061
  s21_decimal dec_2 = {{0x8f8011d5, 0x0, 0x0, 0x0}};
  // -15457172537272835.229062205545
  s21_decimal dec_check = {{0xb3bb1069, 0x450ca5c3, 0x31f1df9a, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_169) {
  // 416091701
  s21_decimal dec_1 = {{0x18cd0e35, 0x0, 0x0, 0x0}};
  // 22
  s21_decimal dec_2 = {{0x16, 0x0, 0x0, 0x0}};
  // 18913259.136363636363636363636
  s21_decimal dec_check = {{0x43f5d174, 0x38a9a3bd, 0x3d1cae68, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_170) {
  // 254373.6277640600056875708
  s21_decimal dec_1 = {{0x547dcabc, 0x384cd5b7, 0x21aa8, 0x130000}};
  // 23
  s21_decimal dec_2 = {{0x17, 0x0, 0x0, 0x0}};
  // 11059.722946263478508155252174
  s21_decimal dec_check = {{0x26532dce, 0x4576099f, 0x23bc636e, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_171) {
  // 103892469474158981208324103
  s21_decimal dec_1 = {{0xf0afb807, 0xe313545, 0x55f016, 0x0}};
  // -5065962616553710479952
  s21_decimal dec_2 = {{0xa456ea50, 0xa05aaf22, 0x112, 0x80000000}};
  // -20507.942386838078985634588393
  s21_decimal dec_check = {{0x390026e9, 0x736c3cc1, 0x4243c5b8, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_172) {
  // 843665620165804203448966395
  s21_decimal dec_1 = {{0x47a79cfb, 0xe968c2a5, 0x2b9dd24, 0x0}};
  // -812379171.3304991906819
  s21_decimal dec_2 = {{0xc60a3c03, 0x6441f18e, 0x1b8, 0x800d0000}};
  // -1038512125789813961.5917027886
  s21_decimal dec_check = {{0x5374b22e, 0x778895da, 0x218e5ef7, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_173) {
  // -93398122454750180617359842
  s21_decimal dec_1 = {{0xa0a611e2, 0x5d134672, 0x4d41d2, 0x80000000}};
  // -429848698364730579243382.422
  s21_decimal dec_2 = {{0x2c2e3696, 0xa15ef806, 0x1639000, 0x80030000}};
  // 217.28138949836021968552276199
  s21_decimal dec_check = {{0x73ef30e7, 0xac8862f3, 0x46351864, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_174) {
  // -357016025920.5659973
  s21_decimal dec_1 = {{0x192b7d45, 0x318bc1d7, 0x0, 0x80070000}};
  // 9.20240524
  s21_decimal dec_2 = {{0x36d9c18c, 0x0, 0x0, 0x80000}};
  // -38795946995.327712529642956693
  s21_decimal dec_check = {{0xe5bc2795, 0xcc5ff540, 0x7d5b4154, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_175) {
  // -4257864661896769
  s21_decimal dec_1 = {{0x5eac8e41, 0xf2081, 0x0, 0x80000000}};
  // 34763.502685449
  s21_decimal dec_2 = {{0x23a8d09, 0x1f9e, 0x0, 0x90000}};
  // -122480887510.76825161721085227
  s21_decimal dec_check = {{0x478e7d2b, 0xa2b92e2f, 0x279361ad, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_177) {
  // 4132906622296168235127127
  s21_decimal dec_1 = {{0x1b25d157, 0x51223c9d, 0x36b2d, 0x0}};
  // 5379520189.6924531151
  s21_decimal dec_2 = {{0x269b49cf, 0xea8ef31b, 0x2, 0xa0000}};
  // 768266774091695.76669461297440
  s21_decimal dec_check = {{0x9f533920, 0x97de2f2f, 0xf83d89bf, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_179) {
  // -5167070993872.5
  s21_decimal dec_1 = {{0x864faa25, 0x2efe, 0x0, 0x80010000}};
  // 86.50125988
  s21_decimal dec_2 = {{0x39672a4, 0x2, 0x0, 0x80000}};
  // -59734054752.966448932142420490
  s21_decimal dec_check = {{0xaf67920a, 0xba09fb04, 0xc102da1c, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_180) {
  // -2223597092731579572603973212
  s21_decimal dec_1 = {{0x280dee5c, 0xef008238, 0x72f50ff, 0x80000000}};
  // 51481834912577886629
  s21_decimal dec_2 = {{0x2d8219a5, 0xca743817, 0x2, 0x0}};
  // -43191877.222470892108898918049
  s21_decimal dec_check = {{0xb84c5ea1, 0xeaa0200d, 0x8b8f7bc3, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_181) {
  // -262271742184987390183.52
  s21_decimal dec_1 = {{0x3c901a70, 0xc7289a33, 0x58d, 0x80020000}};
  // 28827.0
  s21_decimal dec_2 = {{0x4660e, 0x0, 0x0, 0x10000}};
  // -9098128219550677.8431165227044
  s21_decimal dec_check = {{0xf52f7cd0, 0xf368a4f, 0x1d65cb97, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_182) {
  // -45884421334072232468278
  s21_decimal dec_1 = {{0x629f5f36, 0x66435141, 0x9b7, 0x80000000}};
  // 161619447
  s21_decimal dec_2 = {{0x9a21df7, 0x0, 0x0, 0x0}};
  // -283904085713597.52560147047156
  s21_decimal dec_check = {{0xf3a622f4, 0x8a7cc7c9, 0x5bbbfedc, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_183) {
  // 706269348661614
  s21_decimal dec_1 = {{0x25a4896e, 0x28259, 0x0, 0x0}};
  // 628665.33204972
  s21_decimal dec_2 = {{0x416143ec, 0x392d, 0x0, 0x80000}};
  // 1123442494.2105069652351270321
  s21_decimal dec_check = {{0x960a3db1, 0x715a34e8, 0x244ce604, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_184) {
  // -48652199874112.61
  s21_decimal dec_1 = {{0x4d1a913d, 0x1148e4, 0x0, 0x80020000}};
  // -2066
  s21_decimal dec_2 = {{0x812, 0x0, 0x0, 0x80000000}};
  // 23548983482.145503388189738625
  s21_decimal dec_check = {{0x5524681, 0x8ef161c0, 0x4c174338, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_185) {
  // 3961792055604425562665055548
  s21_decimal dec_1 = {{0x9a4cf53c, 0xae5cff5a, 0xccd1e19, 0x0}};
  // 875848
  s21_decimal dec_2 = {{0xd5d48, 0x0, 0x0, 0x0}};
  // 4523378549251040777241.0915456
  s21_decimal dec_check = {{0xdaf6aa80, 0x941612b, 0x922882a9, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_186) {
  // -47315647093378463522265578231
  s21_decimal dec_1 = {{0xa5c93af7, 0x8f56d47e, 0x98e29600, 0x80000000}};
  // 8156.60880975194763057848959
  s21_decimal dec_2 = {{0x4a22627f, 0xf54f0aad, 0x2a2b2e8, 0x170000}};
  // -5800896940994451069334688.7973
  s21_decimal dec_check = {{0x5de3c925, 0xe535afb0, 0xbb6fe514, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_187) {
  // 495066687522554909
  s21_decimal dec_1 = {{0x81e9441d, 0x6ded487, 0x0, 0x0}};
  // 16428.15363827230814220
  s21_decimal dec_2 = {{0x5c33b00c, 0xea49d64, 0x59, 0x110000}};
  // 30135260384295.952627737356390
  s21_decimal dec_check = {{0x1620e866, 0xda7f123d, 0x615f4d9a, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_188) {
  // -611619218555932815834.0
  s21_decimal dec_1 = {{0x8bc6f284, 0x8f37a3ca, 0x14b, 0x80010000}};
  // -1762304961897230116.078605822
  s21_decimal dec_2 = {{0x4d09d5fe, 0x69de48f7, 0x5b1be97, 0x80090000}};
  // 347.05640157619879750310929094
  s21_decimal dec_check = {{0xaa11a2c6, 0xd1d01eb2, 0x7023d52a, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_189) {
  // -537319880434742921818.59834057
  s21_decimal dec_1 = {{0xdcc18c9, 0x6f5c1535, 0xad9e0f0c, 0x80080000}};
  // 88512792581883376
  s21_decimal dec_2 = {{0x77ebc5f0, 0x13a75ea, 0x0, 0x0}};
  // -6070.5335891155748749020455504
  s21_decimal dec_check = {{0x28ff6250, 0xbb90068e, 0xc42646e4, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_190) {
  // 49998219247269
  s21_decimal dec_1 = {{0x1e18fea5, 0x2d79, 0x0, 0x0}};
  // -4359445197
  s21_decimal dec_2 = {{0x3d7dacd, 0x1, 0x0, 0x80000000}};
  // -11468.940883045352341884251011
  s21_decimal dec_check = {{0x112a2b83, 0x134584f7, 0x250ee2b3, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_194) {
  // 877595417708133533618867035
  s21_decimal dec_1 = {{0x11a90b5b, 0xec10534b, 0x2d5ee0e, 0x0}};
  // 787898.773127283566
  s21_decimal dec_2 = {{0x7b37c36e, 0xaef2dc2, 0x0, 0xc0000}};
  // 1113842853473208344830.3346849
  s21_decimal dec_check = {{0x9a2864a1, 0xc5847e4a, 0x23fd7dfc, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_195) {
  // -8975270978013
  s21_decimal dec_1 = {{0xb7d6a1dd, 0x829, 0x0, 0x80000000}};
  // 4932.80037
  s21_decimal dec_2 = {{0x1d66db25, 0x0, 0x0, 0x50000}};
  // -1819508251.8640420877198401605
  s21_decimal dec_check = {{0x2bfa045, 0xc35db195, 0x3aca9e97, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_198) {
  // 812175070938611743.8188
  s21_decimal dec_1 = {{0xa458daec, 0x47eed74e, 0x1b8, 0x40000}};
  // 228358
  s21_decimal dec_2 = {{0x37c06, 0x0, 0x0, 0x0}};
  // 3556586898372.7819643664771981
  s21_decimal dec_check = {{0xbdacab8d, 0xecb44ba2, 0x72eb65b4, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_199) {
  // 45236818988073748038
  s21_decimal dec_1 = {{0xd8c80646, 0x73c97731, 0x2, 0x0}};
  // 381568630182763946.055
  s21_decimal dec_2 = {{0x9409e047, 0xaf541783, 0x14, 0x30000}};
  // 118.55486905830333155236231360
  s21_decimal dec_check = {{0xe59b8c0, 0xf56fa69d, 0x264ea100, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_200) {
  // -9152388837981116
  s21_decimal dec_1 = {{0x9588bbbc, 0x20840c, 0x0, 0x80000000}};
  // -0.3530131720
  s21_decimal dec_2 = {{0xd2698908, 0x0, 0x0, 0x800a0000}};
  // 25926479700822936.997942954944
  s21_decimal dec_check = {{0x33ba8bc0, 0xd3a12acf, 0x53c5e1a0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_201) {
  // -731961430528158460877539
  s21_decimal dec_1 = {{0x50211ae3, 0xb56a977e, 0x9aff, 0x80000000}};
  // -190868
  s21_decimal dec_2 = {{0x2e994, 0x0, 0x0, 0x80000000}};
  // 3834909102249504688.4629115410
  s21_decimal dec_check = {{0x3bf37212, 0xf8bfa44a, 0x7be99fe5, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_202) {
  // 9691176228
  s21_decimal dec_1 = {{0x41a39d24, 0x2, 0x0, 0x0}};
  // 36.858173980762
  s21_decimal dec_2 = {{0xb65e005a, 0x2185, 0x0, 0xc0000}};
  // 262931534.07594952621779681721
  s21_decimal dec_check = {{0xe1f981b9, 0x4cea974b, 0x54f52fce, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_203) {
  // -52833000098768491154566117
  s21_decimal dec_1 = {{0x78e4ebe5, 0xac9ef689, 0x2bb3d2, 0x80000000}};
  // -2476611447.60412707
  s21_decimal dec_2 = {{0xbe1c6a23, 0x36fde7f, 0x0, 0x80080000}};
  // 21332777149955886.075657114136
  s21_decimal dec_check = {{0x361cd218, 0x8e7b0a9f, 0x44ee0f46, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_204) {
  // -6007164699103545851859
  s21_decimal dec_1 = {{0x1528ffd3, 0xa6283283, 0x145, 0x80000000}};
  // -325239.38004348700502098
  s21_decimal dec_2 = {{0xf5ca852, 0x204f6fbf, 0x6e3, 0x80110000}};
  // 18469979552600124.124937393707
  s21_decimal dec_check = {{0xda89162b, 0xd5a80469, 0x3bae024d, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_205) {
  // -6574157699796082947451138133
  s21_decimal dec_1 = {{0x12be3055, 0x4e12e59, 0x153e040b, 0x80000000}};
  // -331.058
  s21_decimal dec_2 = {{0x50d32, 0x0, 0x0, 0x80030000}};
  // 19858023971014393089582907.324
  s21_decimal dec_check = {{0xa7b3fbc, 0x883b1396, 0x402a2c24, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_206) {
  // 763350595585790610353060
  s21_decimal dec_1 = {{0x5c31aba4, 0x5196a87c, 0xa1a5, 0x0}};
  // -43.019
  s21_decimal dec_2 = {{0xa80b, 0x0, 0x0, 0x80030000}};
  // -17744498839717115933728.352588
  s21_decimal dec_check = {{0x68a2a94c, 0x959a9d80, 0x3955e7c9, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_207) {
  // 72356356151196586778833
  s21_decimal dec_1 = {{0xbaf2a0d1, 0x72283f1b, 0xf52, 0x0}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -24118785383732195592944.333333
  s21_decimal dec_check = {{0x3cc9b215, 0x89a6f5c8, 0x4dee9777, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_208) {
  // -7578487228654888824189939351
  s21_decimal dec_1 = {{0xe6a6ee97, 0xdf811f85, 0x187cc717, 0x80000000}};
  // -419616763365344367484
  s21_decimal dec_2 = {{0x4e7f537c, 0xbf5a370e, 0x16, 0x80000000}};
  // 18060496.839723698144619412945
  s21_decimal dec_check = {{0xcd623dd1, 0x7d6399c3, 0x3a5b4af7, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_209) {
  // -542826645912930301
  s21_decimal dec_1 = {{0x5c41c7fd, 0x78881f5, 0x0, 0x80000000}};
  // -438758879098292
  s21_decimal dec_2 = {{0x832175b4, 0x18f0c, 0x0, 0x80000000}};
  // 1237.1866913064219647122153675
  s21_decimal dec_check = {{0xe3520cb, 0x3e0694bc, 0x27f9c4b9, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_211) {
  // 8208
  s21_decimal dec_1 = {{0x2010, 0x0, 0x0, 0x0}};
  // -0.13
  s21_decimal dec_2 = {{0xd, 0x0, 0x0, 0x80020000}};
  // -63138.461538461538461538461538
  s21_decimal dec_check = {{0xa2762762, 0x5e9fa0be, 0xcc02e94a, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_212) {
  // 4969797182815967712
  s21_decimal dec_1 = {{0xe77b99e0, 0x44f84434, 0x0, 0x0}};
  // -40468.82790158236532142149
  s21_decimal dec_2 = {{0x820f045, 0xf4a518f6, 0x358f5, 0x80140000}};
  // -122805562713657.05771489015876
  s21_decimal dec_check = {{0xd845b844, 0x6ff03826, 0x27ae3cf1, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_213) {
  // -803701290775
  s21_decimal dec_1 = {{0x20547717, 0xbb, 0x0, 0x80000000}};
  // -691603.677
  s21_decimal dec_2 = {{0x293908dd, 0x0, 0x0, 0x80030000}};
  // 1162083.6000485867862151345965
  s21_decimal dec_check = {{0xf9cf372d, 0xe4277289, 0x258c87bd, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_214) {
  // 12276326995925074720642
  s21_decimal dec_1 = {{0x9c643782, 0x8042d806, 0x299, 0x0}};
  // -11672699865.05508538961
  s21_decimal dec_2 = {{0xebd84a51, 0x47200c43, 0x3f, 0x800b0000}};
  // -1051712726091.5091399351639208
  s21_decimal dec_check = {{0x2b4e9ca8, 0x3ac2b0ae, 0x21fb9053, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_216) {
  // -18595701415658882143
  s21_decimal dec_1 = {{0xcd93845f, 0x21133e9, 0x1, 0x80000000}};
  // 215095435124600.09485636
  s21_decimal dec_2 = {{0xfad13544, 0x8e17622, 0x48e, 0x80000}};
  // -86453.259246932868845825027581
  s21_decimal dec_check = {{0x460a3166, 0x784a6e01, 0x1bef3ef9, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_217) {
  // 94760415660818378327908.95
  s21_decimal dec_1 = {{0x1356e36f, 0x3e1cb379, 0x7d6a1, 0x20000}};
  // 54334748.410
  s21_decimal dec_2 = {{0xa69a76fa, 0xc, 0x0, 0x30000}};
  // 1744011308302630.6098600181224
  s21_decimal dec_check = {{0x88897de8, 0xa6872250, 0x385a1f98, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_220) {
  // -102371003069592965623537909
  s21_decimal dec_1 = {{0xb8e760f5, 0x3245def9, 0x54ade7, 0x80000000}};
  // -2749558
  s21_decimal dec_2 = {{0x29f476, 0x0, 0x0, 0x80000000}};
  // 37231803464263334551.785381141
  s21_decimal dec_check = {{0xb4611d15, 0x134c39e3, 0x784d6d0e, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_221) {
  // -39764831347273782751794
  s21_decimal dec_1 = {{0x539f7232, 0xa7e4433d, 0x86b, 0x80000000}};
  // 534093216004604744.766
  s21_decimal dec_2 = {{0x8470d43e, 0xf4084635, 0x1c, 0x30000}};
  // -74452.979659136778444674132418
  s21_decimal dec_check = {{0xe80769c2, 0xb906b09a, 0xf0920fb2, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_223) {
  // 6573408
  s21_decimal dec_1 = {{0x644d60, 0x0, 0x0, 0x0}};
  // -92
  s21_decimal dec_2 = {{0x5c, 0x0, 0x0, 0x80000000}};
  // -71450.086956521739130434782609
  s21_decimal dec_check = {{0xcc2c8591, 0x208008f0, 0xe6de206f, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_224) {
  // 154636957.518
  s21_decimal dec_1 = {{0x114b74e, 0x24, 0x0, 0x30000}};
  // 9386075.236
  s21_decimal dec_2 = {{0x2f742464, 0x2, 0x0, 0x30000}};
  // 16.475145748341623457236050649
  s21_decimal dec_check = {{0xdb4ee2d9, 0x9e4d3371, 0x353bebd0, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_225) {
  // 10663694041571402294
  s21_decimal dec_1 = {{0x6d502236, 0x93fd0d3b, 0x0, 0x0}};
  // 7670618.2419497551
  s21_decimal dec_2 = {{0xd330c24f, 0x11083dd, 0x0, 0xa0000}};
  // 1390200073216.1131005819043446
  s21_decimal dec_check = {{0x7c153e76, 0xc9036ddb, 0x2ceb7729, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_227) {
  // 66426511458654268
  s21_decimal dec_1 = {{0x6b29583c, 0xebfe8f, 0x0, 0x0}};
  // 0.565
  s21_decimal dec_2 = {{0x235, 0x0, 0x0, 0x30000}};
  // 117569046829476580.53097345133
  s21_decimal dec_check = {{0xf8cfd06d, 0xf2a5cfad, 0x25fd1567, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_229) {
  // 552971662475790637888
  s21_decimal dec_1 = {{0x96b3db40, 0xfa05fd40, 0x1d, 0x0}};
  // 9098114852
  s21_decimal dec_2 = {{0x1e4a3724, 0x2, 0x0, 0x0}};
  // 60778707619.219955510845204265
  s21_decimal dec_check = {{0x66fd6729, 0x14baf6ac, 0xc462f7f6, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_230) {
  // 83093944.9133
  s21_decimal dec_1 = {{0x77d9c72d, 0xc1, 0x0, 0x40000}};
  // -554411.363
  s21_decimal dec_2 = {{0x210ba563, 0x0, 0x0, 0x80030000}};
  // -149.87778111845806450399177695
  s21_decimal dec_check = {{0xd262ebdf, 0x7acd5738, 0x306d9977, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_231) {
  // -1213598743033795862562753146
  s21_decimal dec_1 = {{0x28ea4a7a, 0xafa742bd, 0x3ebdd87, 0x80000000}};
  // 6787.456981213
  s21_decimal dec_2 = {{0x53f658dd, 0x62c, 0x0, 0x90000}};
  // -178800211388877370998533.37044
  s21_decimal dec_check = {{0xb1b991d4, 0x24b89328, 0x39c601c0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_232) {
  // -61057758569441205163332530.16
  s21_decimal dec_1 = {{0xa6f3b198, 0x70bf3a3c, 0x13ba9454, 0x80020000}};
  // 464589
  s21_decimal dec_2 = {{0x716cd, 0x0, 0x0, 0x0}};
  // -131423168799608267013.06430019
  s21_decimal dec_check = {{0xf1f08243, 0xa3278ccc, 0x2a7711d9, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_233) {
  // -519727577194176273.7559684543
  s21_decimal dec_1 = {{0xffdc5bf, 0x25b3eee5, 0x10cb15f4, 0x800a0000}};
  // 70175082962899
  s21_decimal dec_2 = {{0xe8e45fd3, 0x3fd2, 0x0, 0x0}};
  // -7406.1555077740634699341072828
  s21_decimal dec_check = {{0x2d8189bc, 0xa5a5d993, 0xef4e4851, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_234) {
  // -3301705955616792423982283100
  s21_decimal dec_1 = {{0xa149b95c, 0x7fd8dba9, 0xaab1b6e, 0x80000000}};
  // -82555201211562318314
  s21_decimal dec_2 = {{0x1011d9ea, 0x79aefe1b, 0x4, 0x80000000}};
  // 39993918.095549018083399700882
  s21_decimal dec_check = {{0x52a1192, 0x4523e046, 0x813a3194, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_235) {
  // 672693634238028
  s21_decimal dec_1 = {{0xb11c864c, 0x263cf, 0x0, 0x0}};
  // -8261.1685410
  s21_decimal dec_2 = {{0x3c0a4822, 0x13, 0x0, 0x80070000}};
  // -81428387630.571160380832617612
  s21_decimal dec_check = {{0x1dba3541, 0xdaf3f79d, 0x1a4f992d, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_236) {
  // 82630281758854.257
  s21_decimal dec_1 = {{0xafed4c71, 0x1258fcd, 0x0, 0x30000}};
  // 6283
  s21_decimal dec_2 = {{0x188b, 0x0, 0x0, 0x0}};
  // 13151405659.534339805825242718
  s21_decimal dec_check = {{0xc41c965e, 0x5d81f8fb, 0x2a7e9679, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_237) {
  // 6506.776160598
  s21_decimal dec_1 = {{0xfa14e956, 0x5ea, 0x0, 0x90000}};
  // 908
  s21_decimal dec_2 = {{0x38c, 0x0, 0x0, 0x0}};
  // 7.1660530403061674008810572687
  s21_decimal dec_check = {{0xb34b8f, 0x3920622e, 0xe78c3391, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_238) {
  // -380864712.90293858613940828
  s21_decimal dec_1 = {{0x9be5525c, 0xbeea4501, 0x1f811f, 0x80110000}};
  // -198673
  s21_decimal dec_2 = {{0x30811, 0x0, 0x0, 0x80000000}};
  // 1917.0431457869896067377463470
  s21_decimal dec_check = {{0xa6f00ae, 0xb491cf07, 0x3df168c3, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_239) {
  // -55105384159913406704447669
  s21_decimal dec_1 = {{0x6610f0b5, 0xdc707b16, 0x2d9504, 0x80000000}};
  // 107.1218724555792216173966
  s21_decimal dec_2 = {{0x61872d8e, 0xe227b772, 0xe2d6, 0x160000}};
  // -514417671169482591630035.27209
  s21_decimal dec_check = {{0xb185a029, 0x3c03e369, 0xa637a1e7, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_240) {
  // -329385765066250484
  s21_decimal dec_1 = {{0xb0d818f4, 0x492369b, 0x0, 0x80000000}};
  // -562559.219887186325823166
  s21_decimal dec_2 = {{0x5e385ebe, 0x657ba0e8, 0x7720, 0x80120000}};
  // 585513050754.55764912022726329
  s21_decimal dec_check = {{0x301fa6b9, 0x3bc8e468, 0xbd308120, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_241) {
  // -765474870009
  s21_decimal dec_1 = {{0x39db92f9, 0xb2, 0x0, 0x80000000}};
  // 96903019.830
  s21_decimal dec_2 = {{0x8fdebd36, 0x16, 0x0, 0x30000}};
  // -7899.3912816328791185000163065
  s21_decimal dec_check = {{0x14f6e6f9, 0x6e017fb2, 0xff3e3bb2, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_242) {
  // 7773564
  s21_decimal dec_1 = {{0x769d7c, 0x0, 0x0, 0x0}};
  // -743845
  s21_decimal dec_2 = {{0xb59a5, 0x0, 0x0, 0x80000000}};
  // -10.450515900490021442639259523
  s21_decimal dec_check = {{0x4e466783, 0x253108a5, 0x21c476d2, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_243) {
  // -485522
  s21_decimal dec_1 = {{0x76892, 0x0, 0x0, 0x80000000}};
  // -9.3
  s21_decimal dec_2 = {{0x5d, 0x0, 0x0, 0x80010000}};
  // 52206.666666666666666666666667
  s21_decimal dec_check = {{0x6eaaaaab, 0xe94cd18a, 0xa8b057ae, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_244) {
  // 2141728245358773035753
  s21_decimal dec_1 = {{0x8e5262e9, 0x1a733bca, 0x74, 0x0}};
  // 421851.563638387831
  s21_decimal dec_2 = {{0x169bf477, 0x5dab7c3, 0x0, 0xc0000}};
  // 5076971214440412.9992922388832
  s21_decimal dec_check = {{0xa5785960, 0x2bdc772d, 0xa40bb8ba, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_245) {
  // 5888467602766613
  s21_decimal dec_1 = {{0xb3bbfb15, 0x14eb87, 0x0, 0x0}};
  // 7633.9355594
  s21_decimal dec_2 = {{0xc62e1fca, 0x11, 0x0, 0x70000}};
  // 771354114394.62366494442536255
  s21_decimal dec_check = {{0xa7a63d3f, 0xe9529642, 0xf93ceab8, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_246) {
  // -755960159702
  s21_decimal dec_1 = {{0x2bc9dd6, 0xb0, 0x0, 0x80000000}};
  // 949325
  s21_decimal dec_2 = {{0xe7c4d, 0x0, 0x0, 0x0}};
  // -796313.33811076291048903168040
  s21_decimal dec_check = {{0x886f0804, 0x9455f4d5, 0x19baf315, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_247) {
  // -15101331299552462368354422522
  s21_decimal dec_1 = {{0x49354efa, 0x1eb22d96, 0x30cb874a, 0x80000000}};
  // -46945534411.875
  s21_decimal dec_2 = {{0x5be70463, 0x2ab2, 0x0, 0x80030000}};
  // 321677694987162394.30819790795
  s21_decimal dec_check = {{0x164c3fcb, 0xb9deb776, 0x67f08e26, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_248) {
  // -355095247421331
  s21_decimal dec_1 = {{0xe157f93, 0x142f5, 0x0, 0x80000000}};
  // -6610
  s21_decimal dec_2 = {{0x19d2, 0x0, 0x0, 0x80000000}};
  // 53720914889.762632375189107413
  s21_decimal dec_check = {{0xc2dff2d5, 0x91c93560, 0xad94e637, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_249) {
  // 528942349552716946826994
  s21_decimal dec_1 = {{0x2fdb66f2, 0x5b08d85, 0x7002, 0x0}};
  // 97365691799675
  s21_decimal dec_2 = {{0xb779187b, 0x588d, 0x0, 0x0}};
  // 5432533162.1017920000510598991
  s21_decimal dec_check = {{0x7c431f4f, 0x39a3c14f, 0xaf88dc70, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_250) {
  // -4705705752258119568
  s21_decimal dec_1 = {{0x24db8790, 0x414e0673, 0x0, 0x80000000}};
  // 2336123296.858943931381
  s21_decimal dec_2 = {{0x77c643f5, 0xa439312e, 0x7e, 0xc0000}};
  // -2014322513.9637190916428170640
  s21_decimal dec_check = {{0xd0ba8590, 0xdceb2db6, 0x411615d6, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_251) {
  // 3223630622668434085138167.376
  s21_decimal dec_1 = {{0xd2247650, 0x382a526a, 0xa6a8656, 0x30000}};
  // -2726296744481785250
  s21_decimal dec_2 = {{0xcf2405a2, 0x25d5c071, 0x0, 0x80000000}};
  // -1182421.0365923252081682693113
  s21_decimal dec_check = {{0xe7aa3bf9, 0x553e36d2, 0x2634c1f0, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_252) {
  // -9661339538330.05
  s21_decimal dec_1 = {{0x971fa82d, 0x36eb1, 0x0, 0x80020000}};
  // 6.224807688
  s21_decimal dec_2 = {{0x73070708, 0x1, 0x0, 0x90000}};
  // -1552070364672.4531548290942157
  s21_decimal dec_check = {{0x1c2a04cd, 0x9d370f92, 0x32266cd6, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_254) {
  // 595911088044133532356431681
  s21_decimal dec_1 = {{0xb789cf41, 0xd0334868, 0x1eced14, 0x0}};
  // -787897135398652390643.035947
  s21_decimal dec_2 = {{0xfc7f6f2b, 0x4b7285d0, 0x28bbbb5, 0x80060000}};
  // -756331.07581057562909773297958
  s21_decimal dec_check = {{0x591a7926, 0x8f851203, 0xf4623d81, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_255) {
  // -8623591370
  s21_decimal dec_1 = {{0x2018fca, 0x2, 0x0, 0x80000000}};
  // -6.806135177239144
  s21_decimal dec_2 = {{0xd5885a68, 0x182e24, 0x0, 0x800f0000}};
  // 1267032044.6820882894589836146
  s21_decimal dec_check = {{0xdc70bb72, 0xb9fe39be, 0x28f0a4b7, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_256) {
  // -36970413356901595625591254241
  s21_decimal dec_1 = {{0x6b99ace1, 0xf6450b73, 0x7775358b, 0x80000000}};
  // 2083659
  s21_decimal dec_2 = {{0x1fcb4b, 0x0, 0x0, 0x0}};
  // -17743024821672642032881.222043
  s21_decimal dec_check = {{0xd895c19b, 0xe7f536cb, 0x3954afa6, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_257) {
  // 73464915778887935078181890122
  s21_decimal dec_1 = {{0x2a6be84a, 0x725dec87, 0xed60c108, 0x0}};
  // 35026095607232272
  s21_decimal dec_2 = {{0x6289b710, 0x7c700c, 0x0, 0x0}};
  // 2097433770600.4183791245650883
  s21_decimal dec_check = {{0x2f6aebc3, 0x5d5e2eed, 0x43c590c5, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_258) {
  // -771015.744103315234
  s21_decimal dec_1 = {{0xf782f722, 0xab332bb, 0x0, 0x800c0000}};
  // -4047.83
  s21_decimal dec_2 = {{0x62d2f, 0x0, 0x0, 0x80020000}};
  // 190.47631548343562699026391919
  s21_decimal dec_check = {{0x2efae36f, 0x455823e4, 0x3d8bd4df, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_260) {
  // -38012.83073
  s21_decimal dec_1 = {{0xe292fa01, 0x0, 0x0, 0x80050000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 6335.4717883333333333333333333
  s21_decimal dec_check = {{0x2b2d5555, 0x50d90d57, 0xccb5cb5a, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_261) {
  // 48648005115725003221
  s21_decimal dec_1 = {{0x922cb9d5, 0xa3206ee7, 0x2, 0x0}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -6949715016532143317.2857142857
  s21_decimal dec_check = {{0xf5613e49, 0x8a25f33f, 0xe08eb1fb, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_263) {
  // -536772331377404421
  s21_decimal dec_1 = {{0x69022a05, 0x772ff97, 0x0, 0x80000000}};
  // -2474901727749991.2
  s21_decimal dec_2 = {{0x9f5d8a08, 0x57ed19, 0x0, 0x80010000}};
  // 216.88632132694842497251865969
  s21_decimal dec_check = {{0x821af571, 0xd3490c51, 0x46146a7f, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_264) {
  // 4780551969763313.21773
  s21_decimal dec_1 = {{0x139f71ad, 0xea593cce, 0x19, 0x50000}};
  // 835131455331
  s21_decimal dec_2 = {{0x71b6b763, 0xc2, 0x0, 0x0}};
  // 5724.3107528126411650355281785
  s21_decimal dec_check = {{0xb105bf79, 0x173ea216, 0xb8f66385, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_265) {
  // -82084844269.1370949955929955
  s21_decimal dec_1 = {{0x70cdc763, 0x3e0bb8ff, 0x2a6fd6b, 0x80100000}};
  // -1469776317
  s21_decimal dec_2 = {{0x579b01bd, 0x0, 0x0, 0x80000000}};
  // 55.848528323468077078556570251
  s21_decimal dec_check = {{0x9f28b, 0xebce3ea2, 0xb474d1e2, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_267) {
  // -630668430107218
  s21_decimal dec_1 = {{0xefbf6252, 0x23d96, 0x0, 0x80000000}};
  // 0.3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x10000}};
  // -2102228100357393.3333333333333
  s21_decimal dec_check = {{0x9be2d555, 0xbbd9090a, 0x43ed3928, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_268) {
  // 0.82
  s21_decimal dec_1 = {{0x52, 0x0, 0x0, 0x20000}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // 1.1714285714285714285714285714
  s21_decimal dec_check = {{0xc2492492, 0x6f8275b, 0x25d9d47d, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_269) {
  // -696582565
  s21_decimal dec_1 = {{0x298501a5, 0x0, 0x0, 0x80000000}};
  // 70.3983168
  s21_decimal dec_2 = {{0x29f5ee40, 0x0, 0x0, 0x70000}};
  // -9894875.2848590834489951896123
  s21_decimal dec_check = {{0x6796936c, 0x40fde72, 0x1ff8d958, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_272) {
  // -640276803967236.45070
  s21_decimal dec_1 = {{0x6ef46a8e, 0x78900416, 0x3, 0x80050000}};
  // 63064663907
  s21_decimal dec_2 = {{0xaef26763, 0xe, 0x0, 0x0}};
  // -10152.703024175913027117054196
  s21_decimal dec_check = {{0x76cf8f4, 0xc544faa6, 0x20ce1e7d, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_273) {
  // -26645550862
  s21_decimal dec_1 = {{0x3432d70e, 0x6, 0x0, 0x80000000}};
  // -9204179346
  s21_decimal dec_2 = {{0x249ca192, 0x2, 0x0, 0x80000000}};
  // 2.8949404243822956033042948488
  s21_decimal dec_check = {{0x4cb62188, 0xaa6b1681, 0x5d8a62cc, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_274) {
  // -96506138096737815
  s21_decimal dec_1 = {{0x3fe69e17, 0x156dbd2, 0x0, 0x80000000}};
  // -154480
  s21_decimal dec_2 = {{0x25b70, 0x0, 0x0, 0x80000000}};
  // 624716067430.98015924391506991
  s21_decimal dec_check = {{0xfcabf42f, 0x79f1eeb9, 0xc9db4d4b, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_277) {
  // -19157979.44
  s21_decimal dec_1 = {{0x7230c1b8, 0x0, 0x0, 0x80020000}};
  // 8420.384652
  s21_decimal dec_2 = {{0xf5e4df8c, 0x1, 0x0, 0x60000}};
  // -2275.1905324716512724934362060
  s21_decimal dec_check = {{0xbf283cc, 0xfe64ebe, 0x4983ef5b, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_278) {
  // 69031413603361905740202742679
  s21_decimal dec_1 = {{0xe6a19397, 0xeceed1ee, 0xdf0d726d, 0x0}};
  // 1084472070201
  s21_decimal dec_2 = {{0x7f929039, 0xfc, 0x0, 0x0}};
  // 63654395074063431.002253467946
  s21_decimal dec_check = {{0x5ed8a12a, 0x60a46074, 0xcdadae77, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_281) {
  // -164235.3
  s21_decimal dec_1 = {{0x190f71, 0x0, 0x0, 0x80010000}};
  // 7403
  s21_decimal dec_2 = {{0x1ceb, 0x0, 0x0, 0x0}};
  // -22.184965554504930433607996758
  s21_decimal dec_check = {{0xf3051556, 0x89179b3d, 0x47aef930, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_282) {
  // 724632.2282013010367669041104
  s21_decimal dec_1 = {{0xbeb777d0, 0x8d07ba7, 0x176a046e, 0x160000}};
  // -731.06
  s21_decimal dec_2 = {{0x11d92, 0x0, 0x0, 0x80020000}};
  // -991.20760019875391454450265423
  s21_decimal dec_check = {{0x54ef2aee, 0xc2834fc2, 0x200713bc, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_283) {
  // -90624913528829
  s21_decimal dec_1 = {{0x41c757fd, 0x526c, 0x0, 0x80000000}};
  // -0.15
  s21_decimal dec_2 = {{0xf, 0x0, 0x0, 0x80020000}};
  // 604166090192193.33333333333333
  s21_decimal dec_check = {{0x33c85555, 0xa46a3df9, 0xc3377299, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_284) {
  // -91006765105477792151
  s21_decimal dec_1 = {{0x5d6b3197, 0xeef8fab0, 0x4, 0x80000000}};
  // -0.6315
  s21_decimal dec_2 = {{0x18ab, 0x0, 0x0, 0x80040000}};
  // 144112058757684548140.93428345
  s21_decimal dec_check = {{0x8fe64679, 0xeea4bdeb, 0x2e90ab8b, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_288) {
  // -99000.719
  s21_decimal dec_1 = {{0x5e6a18f, 0x0, 0x0, 0x80030000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 16500.119833333333333333333333
  s21_decimal dec_check = {{0xa9e55555, 0x7a82c661, 0x35509448, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_289) {
  // 169385453108505
  s21_decimal dec_1 = {{0x1fc33d19, 0x9a0e, 0x0, 0x0}};
  // -88.4
  s21_decimal dec_2 = {{0x374, 0x0, 0x0, 0x80010000}};
  // -1916125035164.0837104072398190
  s21_decimal dec_check = {{0xce7c156e, 0xf07b4f78, 0x3de9d096, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_291) {
  // 533991589082539770.57
  s21_decimal dec_1 = {{0x2f1d39e1, 0xe50fec1b, 0x2, 0x20000}};
  // -528452
  s21_decimal dec_2 = {{0x81044, 0x0, 0x0, 0x80000000}};
  // -1010482672186.9531586028627009
  s21_decimal dec_check = {{0x131be441, 0x38d6b5b4, 0x20a6844a, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_292) {
  // -3381746756667086862603005
  s21_decimal dec_1 = {{0xde34d2fd, 0xdbe8a67f, 0x2cc1c, 0x80000000}};
  // -1093614525.8304822698743387412
  s21_decimal dec_2 = {{0xa97b5514, 0x6230c7f8, 0x23562ad6, 0x80130000}};
  // 3092265763477323.0286929964523
  s21_decimal dec_check = {{0x5650adeb, 0x5513998f, 0x63ea9f75, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_293) {
  // 276266554067530591625669
  s21_decimal dec_1 = {{0xb8e5e1c5, 0x709da17b, 0x3a80, 0x0}};
  // 7801003.794
  s21_decimal dec_2 = {{0xd0f9df12, 0x1, 0x0, 0x30000}};
  // 35414231471085295.516992412323
  s21_decimal dec_check = {{0x10a01aa3, 0xe48bea85, 0x726df736, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_295) {
  // 3607504924702329434678
  s21_decimal dec_1 = {{0xf2a67236, 0x903017a2, 0xc3, 0x0}};
  // -74923133109203
  s21_decimal dec_2 = {{0x66bc03d3, 0x4424, 0x0, 0x80000000}};
  // -48149413.605598540849937796162
  s21_decimal dec_check = {{0x4c8e4c42, 0xc130e240, 0x9b9442ed, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_296) {
  // -98.339040
  s21_decimal dec_1 = {{0x5dc88e0, 0x0, 0x0, 0x80060000}};
  // 1.237
  s21_decimal dec_2 = {{0x4d5, 0x0, 0x0, 0x30000}};
  // -79.498011317704122877930476960
  s21_decimal dec_check = {{0x404c2890, 0xe5087281, 0x19afebde, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_297) {
  // -2750371229268986313554977984
  s21_decimal dec_1 = {{0x6136e4c0, 0x188346be, 0x8e30dc3, 0x80000000}};
  // 0.482262
  s21_decimal dec_2 = {{0x75bd6, 0x0, 0x0, 0x60000}};
  // -5703064370132803981145058047.3
  s21_decimal dec_check = {{0x8066adf9, 0xf619c1d0, 0xb846a48d, 0x80010000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_298) {
  // 2135.7846620188455212747049
  s21_decimal dec_1 = {{0xd590929, 0x2f6d443e, 0x11aab3, 0x160000}};
  // 2121
  s21_decimal dec_2 = {{0x849, 0x0, 0x0, 0x0}};
  // 1.0069706091555141543020768034
  s21_decimal dec_check = {{0xb29cab22, 0x9a8ae44, 0x20897735, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_299) {
  // -8153233715368
  s21_decimal dec_1 = {{0x529970a8, 0x76a, 0x0, 0x80000000}};
  // 8.32100253711
  s21_decimal dec_2 = {{0xbd0a400f, 0xc1, 0x0, 0xb0000}};
  // -979837907632.66989136845233868
  s21_decimal dec_check = {{0xa93c097b, 0x11ca7b14, 0x1fa9077a, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_300) {
  // -7913805372151391341
  s21_decimal dec_1 = {{0x8ca9646d, 0x6dd37c0e, 0x0, 0x80000000}};
  // 78.140
  s21_decimal dec_2 = {{0x1313c, 0x0, 0x0, 0x30000}};
  // -101277263528940252.63629383158
  s21_decimal dec_check = {{0x51ab5f6, 0xb512e9ad, 0x20b97579, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_303) {
  // -425336720505737099991.8179
  s21_decimal dec_1 = {{0x2d828e63, 0x7f8a5e68, 0x384af, 0x80040000}};
  // -2276086.58
  s21_decimal dec_2 = {{0xd910852, 0x0, 0x0, 0x80020000}};
  // 186871942501298.47872123471683
  s21_decimal dec_check = {{0x30aa8743, 0x2eb66153, 0x3c61af4e, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_305) {
  // 2420434798195934505.4
  s21_decimal dec_1 = {{0xdca1339e, 0x4fe71e3f, 0x1, 0x10000}};
  // 152512.028956165575
  s21_decimal dec_2 = {{0xdde805c7, 0x21dd4e1, 0x0, 0xc0000}};
  // 15870451758868.191523045213871
  s21_decimal dec_check = {{0xb41586af, 0xc3ba7e42, 0x3347bae1, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_306) {
  // 502525224
  s21_decimal dec_1 = {{0x1df3ed28, 0x0, 0x0, 0x0}};
  // 869966.0
  s21_decimal dec_2 = {{0x84bf0c, 0x0, 0x0, 0x10000}};
  // 577.63777434980217617700002069
  s21_decimal dec_check = {{0xd7be9915, 0x4c79eeab, 0xbaa513a9, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_307) {
  // 909.23209204699530
  s21_decimal dec_1 = {{0x527c118a, 0x143062d, 0x0, 0xe0000}};
  // -29
  s21_decimal dec_2 = {{0x1d, 0x0, 0x0, 0x80000000}};
  // -31.352830760241217241379310345
  s21_decimal dec_check = {{0xc5bd0b09, 0x30f214cb, 0x654e7429, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_308) {
  // 806585146713291568875
  s21_decimal dec_1 = {{0xe81336eb, 0xb99e1576, 0x2b, 0x0}};
  // 568892057665415811236
  s21_decimal dec_2 = {{0xd02610a4, 0xd6f69853, 0x1e, 0x0}};
  // 1.4178175558001389880499031439
  s21_decimal dec_check = {{0x72c4cd8f, 0x17e2767f, 0x2dcfe975, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_309) {
  // -27392093971982802
  s21_decimal dec_1 = {{0xdedaa9d2, 0x6150f6, 0x0, 0x80000000}};
  // 47683609627
  s21_decimal dec_2 = {{0x1a2a241b, 0xb, 0x0, 0x0}};
  // -574455.12590708975187374608275
  s21_decimal dec_check = {{0xc37f8f93, 0x84fe2d96, 0xb99dd075, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_310) {
  // 6499370521958934993357369993
  s21_decimal dec_1 = {{0x6a85f289, 0xfc1c4285, 0x1500273d, 0x0}};
  // 621.0693106937610029460823
  s21_decimal dec_2 = {{0x19e36d57, 0x5913d967, 0x5232a, 0x160000}};
  // 10464807083606916489557291.247
  s21_decimal dec_check = {{0xd82fb0ef, 0xbc02ab69, 0x21d04918, 0x30000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_311) {
  // 106434175889019337926608035
  s21_decimal dec_1 = {{0x2e2d84a3, 0x3c7cc708, 0x580a50, 0x0}};
  // 61.81
  s21_decimal dec_2 = {{0x1825, 0x0, 0x0, 0x20000}};
  // 1721957221954689175321275.4409
  s21_decimal dec_check = {{0xabe239e9, 0x7c355848, 0x37a3b240, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_312) {
  // -757324616324
  s21_decimal dec_1 = {{0x54109284, 0xb0, 0x0, 0x80000000}};
  // 60642494752.1470908
  s21_decimal dec_2 = {{0xdbf3c1bc, 0x86a7446, 0x0, 0x70000}};
  // -12.488348631092331199764651202
  s21_decimal dec_check = {{0xaca45cc2, 0xd44f3c5e, 0x285a1eaf, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_313) {
  // -36285557.61068086
  s21_decimal dec_1 = {{0xf92fa836, 0xce426, 0x0, 0x80080000}};
  // 61.9747811025
  s21_decimal dec_2 = {{0x4bd91ed1, 0x90, 0x0, 0xa0000}};
  // -585489.08064182153760597060271
  s21_decimal dec_check = {{0xff63aaaf, 0xfdf4e515, 0xbd2e8589, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_314) {
  // -5000592707298700
  s21_decimal dec_1 = {{0x37fc258c, 0x11c403, 0x0, 0x80000000}};
  // 46
  s21_decimal dec_2 = {{0x2e, 0x0, 0x0, 0x0}};
  // -108708537115189.13043478260870
  s21_decimal dec_check = {{0xd1b2ac86, 0x8a406fe0, 0x232028d0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_315) {
  // -6337276735206461428866600040
  s21_decimal dec_1 = {{0x5d05cc68, 0x32982cf3, 0x147a128c, 0x80000000}};
  // -814820819217247701390
  s21_decimal dec_2 = {{0xecd5098e, 0x2be911f8, 0x2c, 0x80000000}};
  // 7777509.5895246330813298611609
  s21_decimal dec_check = {{0xd2e19599, 0xbea654c9, 0xfb4e0d2c, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_316) {
  // 404184777821275223144723426
  s21_decimal dec_1 = {{0xf7e2f3e2, 0xb5c095f7, 0x14e5574, 0x0}};
  // -5609.3569722036177
  s21_decimal dec_2 = {{0xf1772fd1, 0xc748cd, 0x0, 0x800d0000}};
  // -72055456592289676229390.017219
  s21_decimal dec_check = {{0x6beaa2c3, 0xd6fb4315, 0xe8d2e070, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_317) {
  // -65862359593689943122539
  s21_decimal dec_1 = {{0x71e0226b, 0x67d9d8b9, 0xdf2, 0x80000000}};
  // 3.58
  s21_decimal dec_2 = {{0x166, 0x0, 0x0, 0x20000}};
  // -18397307149075403106854.469274
  s21_decimal dec_check = {{0x4b197e9a, 0xf20e6e5f, 0x3b71e552, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_318) {
  // -603173011119941345.6983212855
  s21_decimal dec_1 = {{0xe286c337, 0x853b05d1, 0x137d5488, 0x800a0000}};
  // -0.114196589172507
  s21_decimal dec_2 = {{0x7721d71b, 0x67dc, 0x0, 0x800f0000}};
  // 5281882895896124997.0081720273
  s21_decimal dec_check = {{0x46cb67d1, 0x45b5a7b5, 0xaaaab617, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_319) {
  // 91826438984224519291270045
  s21_decimal dec_1 = {{0x43edf39d, 0x3b5ecb45, 0x4bf501, 0x0}};
  // 89263840388.68559
  s21_decimal dec_2 = {{0xbdc3f64f, 0x1fb67f, 0x0, 0x50000}};
  // 1028708137409061.6084254034151
  s21_decimal dec_check = {{0xc49e08e7, 0xb75995b3, 0x213d4636, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_320) {
  // 524323955546184211071
  s21_decimal dec_1 = {{0xf603da7f, 0x6c74e394, 0x1c, 0x0}};
  // 88.6
  s21_decimal dec_2 = {{0x376, 0x0, 0x0, 0x10000}};
  // 5917877602101401930.8239277652
  s21_decimal dec_check = {{0x89cd4e54, 0x59cf9647, 0xbf378944, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_321) {
  // 331241762664210831298
  s21_decimal dec_1 = {{0x268917c2, 0xf4e72426, 0x11, 0x0}};
  // 18.98677359155
  s21_decimal dec_2 = {{0x11fd5233, 0x1ba, 0x0, 0xb0000}};
  // 17445921555183491967.234523043
  s21_decimal dec_check = {{0xee92bfa3, 0x8e9ce66e, 0x385eed96, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_322) {
  // -543676598492496319065.88312
  s21_decimal dec_1 = {{0x6f386698, 0xbefecd4c, 0x2cf8cc, 0x80050000}};
  // 402036
  s21_decimal dec_2 = {{0x62274, 0x0, 0x0, 0x0}};
  // -1352308247252724.4303144074660
  s21_decimal dec_check = {{0x19603da4, 0xc54ed714, 0x2bb20819, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_323) {
  // -27298127869662089
  s21_decimal dec_1 = {{0xaeb45389, 0x60fb80, 0x0, 0x80000000}};
  // -26949070796346988.429
  s21_decimal dec_2 = {{0x631d978d, 0x75fe551b, 0x1, 0x80030000}};
  // 1.0129524715695361229121326138
  s21_decimal dec_check = {{0xf1270c3a, 0x266eaa41, 0x20baf24b, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_324) {
  // -54546432581486038930649233
  s21_decimal dec_1 = {{0xf84f7091, 0x90a03c7, 0x2d1ea8, 0x80000000}};
  // -71970406155509359609052
  s21_decimal dec_2 = {{0xaa3a84dc, 0x86066ae1, 0xf3d, 0x80000000}};
  // 757.90085807804616030346235958
  s21_decimal dec_check = {{0xa2bb5036, 0x48c32c32, 0xf4e416f0, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_325) {
  // -68333092305686247
  s21_decimal dec_1 = {{0xdd48cee7, 0xf2c495, 0x0, 0x80000000}};
  // 43465538663
  s21_decimal dec_2 = {{0x1ebf7c67, 0xa, 0x0, 0x0}};
  // -1572121.1425789766934470810472
  s21_decimal dec_check = {{0x1c5f5b68, 0x18e60803, 0x32cc4803, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_326) {
  // -278643629089111768544616658
  s21_decimal dec_1 = {{0xb7fca0d2, 0x667f8023, 0xe67d15, 0x80000000}};
  // 77590
  s21_decimal dec_2 = {{0x12f16, 0x0, 0x0, 0x0}};
  // -3591231203623041223670.7907978
  s21_decimal dec_check = {{0x85f0c98a, 0x6ed3a801, 0x7409f7e0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_328) {
  // -330340398
  s21_decimal dec_1 = {{0x13b0982e, 0x0, 0x0, 0x80000000}};
  // -308.64042
  s21_decimal dec_2 = {{0x1d6f2aa, 0x0, 0x0, 0x80050000}};
  // 1070308.2830174997817849003705
  s21_decimal dec_check = {{0xc5d3beb9, 0xd6a17e5e, 0x229561f2, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_329) {
  // -4229647707073.730040
  s21_decimal dec_1 = {{0x112cd5f8, 0x3ab2ba2e, 0x0, 0x80060000}};
  // -386017.748
  s21_decimal dec_2 = {{0x170229d4, 0x0, 0x0, 0x80030000}};
  // 10957132.745807661776214496749
  s21_decimal dec_check = {{0xf7115ed, 0x5c5fc5a8, 0x2367871c, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_330) {
  // 925221626105065600854057
  s21_decimal dec_1 = {{0x54aa2829, 0x5d66fc4a, 0xc3ec, 0x0}};
  // -86340586402
  s21_decimal dec_2 = {{0x1a4ccba2, 0x14, 0x0, 0x80000000}};
  // -10715952539368.364722796465401
  s21_decimal dec_check = {{0x8f9d8cf9, 0x2bf6f3ea, 0x22a00737, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_331) {
  // 8965.54
  s21_decimal dec_1 = {{0xdae2a, 0x0, 0x0, 0x20000}};
  // 439.5586018
  s21_decimal dec_2 = {{0x5ff51e2, 0x1, 0x0, 0x70000}};
  // 20.396688776618089606453926071
  s21_decimal dec_check = {{0xc92c18b7, 0x27efbde9, 0x41e7beda, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_332) {
  // -501361213268022
  s21_decimal dec_1 = {{0x41056036, 0x1c7fc, 0x0, 0x80000000}};
  // -72875791.0459896764044
  s21_decimal dec_2 = {{0x3a13168c, 0x818c3270, 0x27, 0x800d0000}};
  // 6879667.5284338020646317390517
  s21_decimal dec_check = {{0x954efab5, 0x27280712, 0xde4b46a8, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_333) {
  // 3327207877
  s21_decimal dec_1 = {{0xc65129c5, 0x0, 0x0, 0x0}};
  // -5394633
  s21_decimal dec_2 = {{0x5250c9, 0x0, 0x0, 0x80000000}};
  // -616.76260034741937032602588536
  s21_decimal dec_check = {{0x9bc41578, 0x5bc569f, 0xc7496814, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_335) {
  // 78695468777285313
  s21_decimal dec_1 = {{0xa5e726c1, 0x117951c, 0x0, 0x0}};
  // -86031347
  s21_decimal dec_2 = {{0x520bbf3, 0x0, 0x0, 0x80000000}};
  // -914730171.28611636174893321152
  s21_decimal dec_check = {{0x45312793, 0x79251ba7, 0x1d8e787b, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_336) {
  // -8379586.9
  s21_decimal dec_1 = {{0x4fe9f9d, 0x0, 0x0, 0x80010000}};
  // -58350
  s21_decimal dec_2 = {{0xe3ee, 0x0, 0x0, 0x80000000}};
  // 143.60902999143101970865467009
  s21_decimal dec_check = {{0xb3142e81, 0x86b6d63b, 0x2e670f7f, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_337) {
  // -38628532079.43138
  s21_decimal dec_1 = {{0x994767e2, 0xdb93e, 0x0, 0x80050000}};
  // 71148.341
  s21_decimal dec_2 = {{0x43da335, 0x0, 0x0, 0x30000}};
  // -542929.48418054301505076555474
  s21_decimal dec_check = {{0xaea36ed2, 0x465f88e6, 0xaf6e1307, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_338) {
  // -155618019646551973.632824
  s21_decimal dec_1 = {{0x39bb1b38, 0x11db10ef, 0x20f4, 0x80060000}};
  // 62013721623845648.777672
  s21_decimal dec_2 = {{0xe02cc1c8, 0xc545161b, 0xd21, 0x60000}};
  // -2.5094126843487716132103270160
  s21_decimal dec_check = {{0x844a2f10, 0x44da56c, 0x5115600e, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_339) {
  // 4839507277
  s21_decimal dec_1 = {{0x2075054d, 0x1, 0x0, 0x0}};
  // -3579
  s21_decimal dec_2 = {{0xdfb, 0x0, 0x0, 0x80000000}};
  // -1352195.3833473037161218217379
  s21_decimal dec_check = {{0x96fc95a3, 0x200087ac, 0x2bb1191a, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_340) {
  // -6229882627648.911648917
  s21_decimal dec_1 = {{0x8e852895, 0xb8fd3a83, 0x151, 0x80090000}};
  // -59130
  s21_decimal dec_2 = {{0xe6fa, 0x0, 0x0, 0x80000000}};
  // 105359083.84320838235949602571
  s21_decimal dec_check = {{0x38a3970b, 0xf82d86f6, 0x220b1961, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_341) {
  // -649602030109998202429
  s21_decimal dec_1 = {{0x5f0c3e3d, 0x370a04a5, 0x23, 0x80000000}};
  // 0.772526
  s21_decimal dec_2 = {{0xbc9ae, 0x0, 0x0, 0x60000}};
  // -840880475362639189398.15617856
  s21_decimal dec_check = {{0x3e9883ba, 0x182b289a, 0x1b2b99ab, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_342) {
  // -83430258359445635
  s21_decimal dec_1 = {{0xc108a883, 0x1286760, 0x0, 0x80000000}};
  // 0.6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x10000}};
  // -139050430599076058.33333333333
  s21_decimal dec_check = {{0x45d3dd55, 0xb3ebb97c, 0x2cedfb66, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_343) {
  // 3237512226200789139687225518
  s21_decimal dec_1 = {{0x6d1838ae, 0x746b67b4, 0xa7601e1, 0x0}};
  // 910733670717300050003580419
  s21_decimal dec_2 = {{0x2bad5603, 0x37a58b09, 0x2f1575b, 0x0}};
  // 3.5548397191144831961814840446
  s21_decimal dec_check = {{0x61d4b47e, 0x269d8ccb, 0x72dcf1e9, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_345) {
  // -77539385086494995383325
  s21_decimal dec_1 = {{0xe3ac041d, 0x6b220ae5, 0x106b, 0x80000000}};
  // 431809.82095581078334
  s21_decimal dec_2 = {{0xeb9ce33e, 0x5741aa6e, 0x2, 0xe0000}};
  // -179568368581477865.29351462400
  s21_decimal dec_check = {{0x6c3cee00, 0xa0eaa6cb, 0x3a058c1c, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_346) {
  // -47178172400407019556071444866
  s21_decimal dec_1 = {{0xe2069182, 0x85564830, 0x9870de9a, 0x80000000}};
  // 8.259
  s21_decimal dec_2 = {{0x2043, 0x0, 0x0, 0x30000}};
  // -5712334713695001762449624030.3
  s21_decimal dec_check = {{0xb17576af, 0x46b7c260, 0xb8935345, 0x80010000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_347) {
  // -5458556094075.6
  s21_decimal dec_1 = {{0x30f840d4, 0x31a5, 0x0, 0x80010000}};
  // 19392979239.212
  s21_decimal dec_2 = {{0x47a3812c, 0x11a3, 0x0, 0x30000}};
  // -281.47073364769914218267305916
  s21_decimal dec_check = {{0x502867bc, 0x8f4350e2, 0x5af2b6a0, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_348) {
  // 50702179759291
  s21_decimal dec_1 = {{0x569f4bb, 0x2e1d, 0x0, 0x0}};
  // -68089114970
  s21_decimal dec_2 = {{0xda6d715a, 0xf, 0x0, 0x80000000}};
  // -744.64442343875864303953369479
  s21_decimal dec_check = {{0x2bd1d987, 0x1b8b0498, 0xf09b8b04, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_349) {
  // -382518280042408148388
  s21_decimal dec_1 = {{0xa5217da4, 0xbc81ed07, 0x14, 0x80000000}};
  // 241984359903
  s21_decimal dec_2 = {{0x57644ddf, 0x38, 0x0, 0x0}};
  // -1580756211.6648427233871219783
  s21_decimal dec_check = {{0xed254c47, 0x6db17794, 0x3313b57b, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_350) {
  // 3177291453336
  s21_decimal dec_1 = {{0xc5541398, 0x2e3, 0x0, 0x0}};
  // 5.17
  s21_decimal dec_2 = {{0x205, 0x0, 0x0, 0x20000}};
  // 614563143778.72340425531914894
  s21_decimal dec_check = {{0x658efa8e, 0x1272f60d, 0xc69378c6, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_354) {
  // 97507049880100457413
  s21_decimal dec_1 = {{0x5faecbc5, 0x492ea140, 0x5, 0x0}};
  // 94501032.3
  s21_decimal dec_2 = {{0x3853b693, 0x0, 0x0, 0x10000}};
  // 1031809362362.9173563324133127
  s21_decimal dec_check = {{0x27c6f07, 0x21e397ab, 0x2156ed50, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_355) {
  // 52652129027642514472
  s21_decimal dec_1 = {{0x40aa5c28, 0xdab1f063, 0x2, 0x0}};
  // 9813432513859999
  s21_decimal dec_2 = {{0xcf04119f, 0x22dd43, 0x0, 0x0}};
  // 5365.3121834056832790473071637
  s21_decimal dec_check = {{0x7225dc15, 0xa7db87ac, 0xad5cd27a, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_356) {
  // 34486310743347254313491422
  s21_decimal dec_1 = {{0x66f61bde, 0xa6c54124, 0x1c86c2, 0x0}};
  // 7526
  s21_decimal dec_2 = {{0x1d66, 0x0, 0x0, 0x0}};
  // 4582289495528468550822.6710072
  s21_decimal dec_check = {{0xc159fa38, 0x1365ede, 0x940fcf71, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_357) {
  // -7773158656737
  s21_decimal dec_1 = {{0xd45c4ae1, 0x711, 0x0, 0x80000000}};
  // -38710454
  s21_decimal dec_2 = {{0x24eacb6, 0x0, 0x0, 0x80000000}};
  // 200802.57019814337491366027379
  s21_decimal dec_check = {{0x9f33a073, 0x3f5c2da0, 0x40e1ffd2, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_358) {
  // -97341.919
  s21_decimal dec_1 = {{0x5cd51df, 0x0, 0x0, 0x80030000}};
  // -64609
  s21_decimal dec_2 = {{0xfc61, 0x0, 0x0, 0x80000000}};
  // 1.5066309492485567026265690538
  s21_decimal dec_check = {{0xc88591aa, 0x27934e93, 0x30ae8f22, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_359) {
  // 8713842096768027
  s21_decimal dec_1 = {{0x76ce841b, 0x1ef531, 0x0, 0x0}};
  // 0.232594102438021834676
  s21_decimal dec_2 = {{0xbd1c27b4, 0x9be43fd4, 0xc, 0x150000}};
  // 37463727607151862.774720872709
  s21_decimal dec_check = {{0x6b53c105, 0xdd061dc, 0x790d44e7, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_360) {
  // 465888192235576601
  s21_decimal dec_1 = {{0xab401d19, 0x6772ad7, 0x0, 0x0}};
  // -30325916113822619
  s21_decimal dec_2 = {{0x9173e39b, 0x6bbd42, 0x0, 0x80000000}};
  // -15.362707938878184206036617384
  s21_decimal dec_check = {{0x5a73c8a8, 0x212d9332, 0x31a3bbf2, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_362) {
  // 79228162514264337591680633284
  s21_decimal dec_1 = {{0x90f009c4, 0xffffffff, 0xffffffff, 0x0}};
  // 73488803049200166233026312247
  s21_decimal dec_2 = {{0x4993b837, 0xf7116486, 0xed74835b, 0x0}};
  // 1.0780984208059793282040979400
  s21_decimal dec_check = {{0xac41dfc8, 0xfeda369b, 0x22d5d234, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_363) {
  // -49022075671981114965772566
  s21_decimal dec_1 = {{0x825a4916, 0xc130a62, 0x288cd4, 0x80000000}};
  // 1540
  s21_decimal dec_2 = {{0x604, 0x0, 0x0, 0x0}};
  // -31832516670117607120631.536364
  s21_decimal dec_check = {{0xc2849aec, 0x789bcbbd, 0x66db3d9a, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_364) {
  // 540056231091430022194362
  s21_decimal dec_1 = {{0x9c7c24ba, 0x81c7851c, 0x725c, 0x0}};
  // -68054665846512
  s21_decimal dec_2 = {{0x362edef0, 0x3de5, 0x0, 0x80000000}};
  // -7935623874.9221553671046417741
  s21_decimal dec_check = {{0x4dc5faee, 0x42cbc6df, 0x19a431b8, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_365) {
  // 1815176663391096946
  s21_decimal dec_1 = {{0xe2015072, 0x1930cd8e, 0x0, 0x0}};
  // 41752400895
  s21_decimal dec_2 = {{0xb8a313ff, 0x9, 0x0, 0x0}};
  // 43474785.269377667628854568173
  s21_decimal dec_check = {{0xbbbe64ed, 0xdeb88f72, 0x8c797fdf, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_366) {
  // 306306462731310881599892
  s21_decimal dec_1 = {{0x24547194, 0xe8180cef, 0x40dc, 0x0}};
  // -21642250932067
  s21_decimal dec_2 = {{0xfaadcf63, 0x13ae, 0x0, 0x80000000}};
  // -14153170282.184519455925955216
  s21_decimal dec_check = {{0xd4056a90, 0x6005b01d, 0x2dbb3a62, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_367) {
  // 79876091406.203591672603224
  s21_decimal dec_1 = {{0xaf2e2258, 0x9773f04a, 0x42126b, 0xf0000}};
  // -316001768.479447
  s21_decimal dec_2 = {{0xe5289ad7, 0x11f66, 0x0, 0x80060000}};
  // -252.77102653746317429558216103
  s21_decimal dec_check = {{0x95405a7, 0x9108fbea, 0x51acbab0, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_369) {
  // 26788093279672950
  s21_decimal dec_1 = {{0x251a76, 0x5f2ba1, 0x0, 0x0}};
  // -88886393
  s21_decimal dec_2 = {{0x54c4c79, 0x0, 0x0, 0x80000000}};
  // -301374511.61588872213545666095
  s21_decimal dec_check = {{0x5540c62f, 0x20e6d50a, 0x61611d85, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_370) {
  // 15953259867891.6384243812837
  s21_decimal dec_1 = {{0x622389e5, 0x80e52d4d, 0x83f657, 0xd0000}};
  // 785
  s21_decimal dec_2 = {{0x311, 0x0, 0x0, 0x0}};
  // 20322624035.530749585199087516
  s21_decimal dec_check = {{0xb5263f9c, 0x7f15ee74, 0x41aa7b08, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_371) {
  // 9833793013013199506217
  s21_decimal dec_1 = {{0xca08cb29, 0x174af3aa, 0x215, 0x0}};
  // -0.3930045187
  s21_decimal dec_2 = {{0xea3fbb03, 0x0, 0x0, 0x800a0000}};
  // -25022086375856216093469.054558
  s21_decimal dec_check = {{0xa16e165e, 0x70f00801, 0x50d9c8e4, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_372) {
  // -3954123133106
  s21_decimal dec_1 = {{0xa41ad0b2, 0x398, 0x0, 0x80000000}};
  // 71554704
  s21_decimal dec_2 = {{0x443d690, 0x0, 0x0, 0x0}};
  // -55260.142409449419286256847628
  s21_decimal dec_check = {{0xf8108b0c, 0x9bf29faa, 0xb28e1e52, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_374) {
  // 86120611074
  s21_decimal dec_1 = {{0xd303d02, 0x14, 0x0, 0x0}};
  // 68153.069187970
  s21_decimal dec_2 = {{0x1f7ab382, 0x3dfc, 0x0, 0x90000}};
  // 1263635.1099093499133595802822
  s21_decimal dec_check = {{0x49d4dcc6, 0xb24337f4, 0x28d48b6d, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_375) {
  // -97658236442453100857151787
  s21_decimal dec_1 = {{0xcacc512b, 0x9b08a2fe, 0x50c7ef, 0x80000000}};
  // -77837986288
  s21_decimal dec_2 = {{0x1f8169f0, 0x12, 0x0, 0x80000000}};
  // 1254634672602118.9082120077135
  s21_decimal dec_check = {{0x7cba3f4f, 0xdafd5bf3, 0x288a1842, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_376) {
  // 9686830920318486775
  s21_decimal dec_1 = {{0x24da88f7, 0x866e8966, 0x0, 0x0}};
  // -7.0
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x80010000}};
  // -1383832988616926682.1428571429
  s21_decimal dec_check = {{0x393a6d25, 0x4ecb554c, 0x2cb6cc56, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_377) {
  // 70809415550906984252097
  s21_decimal dec_1 = {{0xffa742c1, 0x960b372f, 0xefe, 0x0}};
  // -243.5124896037954417973187
  s21_decimal dec_2 = {{0x4aa9d7c3, 0x6297bddf, 0x203a8, 0x80160000}};
  // -290783506283873713795.64878325
  s21_decimal dec_check = {{0xf92e19f5, 0x2dfcf4c1, 0x5df50c42, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_378) {
  // -7706774769009364921
  s21_decimal dec_1 = {{0xf6bf0fb9, 0x6af3f6d1, 0x0, 0x80000000}};
  // -758068
  s21_decimal dec_2 = {{0xb9134, 0x0, 0x0, 0x80000000}};
  // 10166337015952.876154909585947
  s21_decimal dec_check = {{0xcdcf721b, 0xf21fa648, 0x20d96599, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_379) {
  // 56672420182212940377752029
  s21_decimal dec_1 = {{0x6cc201dd, 0xdd813d6, 0x2ee0da, 0x0}};
  // 8.10501362061859042015091342
  s21_decimal dec_2 = {{0x5dfc9a8e, 0xe0a39a9f, 0x29e6e56, 0x1a0000}};
  // 6992267112055462644256262.9964
  s21_decimal dec_check = {{0xfa3bf14c, 0xbea72be8, 0xe1eead8c, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_380) {
  // 6637934487542351932313
  s21_decimal dec_1 = {{0xb47e2b99, 0xd7d8a722, 0x167, 0x0}};
  // 88796572307204
  s21_decimal dec_2 = {{0x90264f04, 0x50c2, 0x0, 0x0}};
  // 74754400.029964008357303892053
  s21_decimal dec_check = {{0x63ef3855, 0xc451b583, 0xf18b63f1, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_381) {
  // 6575325741442163745398
  s21_decimal dec_1 = {{0xd6272276, 0x72f9b445, 0x164, 0x0}};
  // -634448
  s21_decimal dec_2 = {{0x9ae50, 0x0, 0x0, 0x80000000}};
  // -10363852894866346.407267419867
  s21_decimal dec_check = {{0x785446db, 0x325bd6b7, 0x217cc737, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_382) {
  // 4928885
  s21_decimal dec_1 = {{0x4b3575, 0x0, 0x0, 0x0}};
  // -0.3848403143
  s21_decimal dec_2 = {{0xe561f8c7, 0x0, 0x0, 0x800a0000}};
  // -12807610.889117289134279246170
  s21_decimal dec_check = {{0xcb3e415a, 0x84393d26, 0x29623519, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_383) {
  // 96790062.07040235110
  s21_decimal dec_1 = {{0x1d6f2666, 0x8652bcdd, 0x0, 0xb0000}};
  // 5.735
  s21_decimal dec_2 = {{0x1667, 0x0, 0x0, 0x30000}};
  // 16877081.442092824952048823017
  s21_decimal dec_check = {{0xd571aae9, 0x3c914376, 0x36886502, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_384) {
  // 5212.624
  s21_decimal dec_1 = {{0x4f89d0, 0x0, 0x0, 0x30000}};
  // 80.99149989
  s21_decimal dec_2 = {{0xe2bf38a5, 0x1, 0x0, 0x80000}};
  // 64.360136644951816313374857787
  s21_decimal dec_check = {{0xa6b15a3b, 0x9895b258, 0xcff5750e, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_385) {
  // -859651072002456076
  s21_decimal dec_1 = {{0x697d7a0c, 0xbee1818, 0x0, 0x80000000}};
  // 18
  s21_decimal dec_2 = {{0x12, 0x0, 0x0, 0x0}};
  // -47758392889025337.555555555556
  s21_decimal dec_check = {{0xdba198e4, 0x3c20e405, 0x9a50d112, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_386) {
  // 8097898723207784811175.0
  s21_decimal dec_1 = {{0x2d09ea86, 0xe133a283, 0x1125, 0x10000}};
  // -818748547897.3791
  s21_decimal dec_2 = {{0x8393f15f, 0x1d1679, 0x0, 0x80040000}};
  // -9890580867.5983937394790079116
  s21_decimal dec_check = {{0xb1a2c2a8, 0x308f56f1, 0x1ff54bf7, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_387) {
  // 3630702918299083046714
  s21_decimal dec_1 = {{0x8eef7f3a, 0xd21febe7, 0xc4, 0x0}};
  // 6097
  s21_decimal dec_2 = {{0x17d1, 0x0, 0x0, 0x0}};
  // 595490063686908815.27210103330
  s21_decimal dec_check = {{0x3fbcd222, 0xb6e23d9e, 0xc069c897, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_388) {
  // 146453350250
  s21_decimal dec_1 = {{0x194cc76a, 0x22, 0x0, 0x0}};
  // 374.5441
  s21_decimal dec_2 = {{0x3926a1, 0x0, 0x0, 0x40000}};
  // 391017640.51282612648283606657
  s21_decimal dec_check = {{0x69660e81, 0x9eed6e0b, 0x7e58389c, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_389) {
  // -367154177312146443769215032
  s21_decimal dec_1 = {{0xe227f838, 0xd57d9b71, 0x12fb3eb, 0x80000000}};
  // -5229070366
  s21_decimal dec_2 = {{0x37ad481e, 0x1, 0x0, 0x80000000}};
  // 70214044106085078.406308642893
  s21_decimal dec_check = {{0xb2fd404d, 0xf0c6260d, 0xe2dfb22d, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_390) {
  // 5428500693075.258270
  s21_decimal dec_1 = {{0x71b66b9e, 0x4b55e89e, 0x0, 0x60000}};
  // 51
  s21_decimal dec_2 = {{0x33, 0x0, 0x0, 0x0}};
  // 106441190060.29918176470588235
  s21_decimal dec_check = {{0xc5935b4b, 0x86cee1c6, 0x22649bdf, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_391) {
  // -7538.08
  s21_decimal dec_1 = {{0xb8090, 0x0, 0x0, 0x80020000}};
  // 0.637781
  s21_decimal dec_2 = {{0x9bb55, 0x0, 0x0, 0x60000}};
  // -11819.229484729084121352000138
  s21_decimal dec_check = {{0xe9c0528a, 0x38ef36a5, 0x2630a332, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_392) {
  // -7190249
  s21_decimal dec_1 = {{0x6db6e9, 0x0, 0x0, 0x80000000}};
  // 89.5243595838
  s21_decimal dec_2 = {{0x70ad303e, 0xd0, 0x0, 0xa0000}};
  // -80316.117684924730882920279949
  s21_decimal dec_check = {{0x63f5fe5b, 0x65e24a90, 0x19f397f2, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_393) {
  // 16650803967814566.851487814
  s21_decimal dec_1 = {{0xea8da846, 0xe44b7aff, 0xdc5f1, 0x90000}};
  // -710.5946107403718
  s21_decimal dec_2 = {{0x1865dc6, 0x193ed2, 0x0, 0x800d0000}};
  // -23432212566974.040874437005376
  s21_decimal dec_check = {{0xb91f5040, 0x9011ac8c, 0x4bb6ac04, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_394) {
  // -8766335382658679
  s21_decimal dec_1 = {{0x82771e77, 0x1f24ef, 0x0, 0x80000000}};
  // 371895.341
  s21_decimal dec_2 = {{0x162aac2d, 0x0, 0x0, 0x30000}};
  // -23572049488.672349353255275118
  s21_decimal dec_check = {{0xf4fe8a6e, 0x47189bef, 0x4c2a57a3, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_395) {
  // 2752548381464766166724
  s21_decimal dec_1 = {{0xdbcbb6c4, 0x37484950, 0x95, 0x0}};
  // -9958353489
  s21_decimal dec_2 = {{0x51906a51, 0x2, 0x0, 0x80000000}};
  // -276405972584.24616731578245746
  s21_decimal dec_check = {{0xc150a272, 0xd1acc2a8, 0x594fc423, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_396) {
  // -4391074974663487700690519
  s21_decimal dec_1 = {{0x1d396657, 0xa6bf2023, 0x3a1d8, 0x80000000}};
  // 37.2344433064938102
  s21_decimal dec_2 = {{0x2ee0a76, 0x52ad54a, 0x0, 0x100000}};
  // -117930458594977024559832.20056
  s21_decimal dec_check = {{0xac642558, 0xdef190f, 0x261afa99, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_397) {
  // -8845781.876649238908217308
  s21_decimal dec_1 = {{0x17f1a7dc, 0xcbe0db79, 0x7512a, 0x80120000}};
  // 98.80199
  s21_decimal dec_2 = {{0x96c287, 0x0, 0x0, 0x50000}};
  // -89530.401934710413304603561123
  s21_decimal dec_check = {{0xbd01ee10, 0x67d34077, 0x1cedc801, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_398) {
  // -387162811376210088
  s21_decimal dec_1 = {{0x925210a8, 0x55f7a86, 0x0, 0x80000000}};
  // 456721506749.6
  s21_decimal dec_2 = {{0x633b5168, 0x427, 0x0, 0x10000}};
  // -847699.97833378615685549499134
  s21_decimal dec_check = {{0xd2355d19, 0x100d4db1, 0x1b640287, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_399) {
  // -908934606118968897789
  s21_decimal dec_1 = {{0xf4bc30fd, 0x46006885, 0x31, 0x80000000}};
  // 796145809299
  s21_decimal dec_2 = {{0x5dfcf793, 0xb9, 0x0, 0x0}};
  // -1141668517.8802593068009260440
  s21_decimal dec_check = {{0x4b8a0598, 0xac0aea47, 0x24e3a91f, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_400) {
  // 2420245442672078067
  s21_decimal dec_1 = {{0x37ba2cf3, 0x21967068, 0x0, 0x0}};
  // 0.812
  s21_decimal dec_2 = {{0x32c, 0x0, 0x0, 0x30000}};
  // 2980597835803051806.6502463054
  s21_decimal dec_check = {{0x33346e4e, 0x710eb74f, 0x604eed6c, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_401) {
  // -7300717729639157124
  s21_decimal dec_1 = {{0x2089cd84, 0x65515c18, 0x0, 0x80000000}};
  // 0.283582926851350211
  s21_decimal dec_2 = {{0x63571ec3, 0x3ef7d2b, 0x0, 0x120000}};
  // -25744560191615768760.231054373
  s21_decimal dec_check = {{0x3af6cc25, 0x78c02fdc, 0x532f66ac, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_403) {
  // 1387188.3
  s21_decimal dec_1 = {{0xd3ab0b, 0x0, 0x0, 0x10000}};
  // 624.995955
  s21_decimal dec_2 = {{0x2540ae73, 0x0, 0x0, 0x60000}};
  // 2219.5156447052525323943896565
  s21_decimal dec_check = {{0x7f7f65f5, 0xed70a203, 0x47b76731, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_405) {
  // 961886608122841.4297905
  s21_decimal dec_1 = {{0xc94ca731, 0x709519f0, 0x209, 0x70000}};
  // -8435239
  s21_decimal dec_2 = {{0x80b627, 0x0, 0x0, 0x80000000}};
  // -114031932.95683043833025952199
  s21_decimal dec_check = {{0x6f6479c7, 0x38fb50a4, 0x24d8801b, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_406) {
  // -7107115150894795690038706211
  s21_decimal dec_1 = {{0x2cc6c023, 0x55d23a14, 0x16f6de2c, 0x80000000}};
  // 22147.6740075302409
  s21_decimal dec_2 = {{0xf2332e09, 0x312d7eb, 0x0, 0xd0000}};
  // -320896684160980803415081.25779
  s21_decimal dec_check = {{0xf00a7453, 0x8dbc0e07, 0x67aff39a, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_407) {
  // 4938766209938287406728832
  s21_decimal dec_1 = {{0xad19c680, 0xd7e7209, 0x415d3, 0x0}};
  // 28243724422731516.3
  s21_decimal dec_2 = {{0x5d8265db, 0x3eb6b2d, 0x0, 0x10000}};
  // 174862427.34911403147613494639
  s21_decimal dec_check = {{0xeea4dd6f, 0x17099fa6, 0x388047ee, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_408) {
  // 39782045269649170119125
  s21_decimal dec_1 = {{0xcbbc39d5, 0x96c8666f, 0x86c, 0x0}};
  // 252598956.64518
  s21_decimal dec_2 = {{0x471baf86, 0x16f9, 0x0, 0x50000}};
  // 157490932654682.74615108379877
  s21_decimal dec_check = {{0xd68224e5, 0xa7a5fcf3, 0x32e35838, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_410) {
  // 3816158063
  s21_decimal dec_1 = {{0xe375f36f, 0x0, 0x0, 0x0}};
  // -8095853
  s21_decimal dec_2 = {{0x7b886d, 0x0, 0x0, 0x80000000}};
  // -471.37195586431720042347606855
  s21_decimal dec_check = {{0xd653b347, 0xfbf29266, 0x984ef96c, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_411) {
  // 29012563209870593740
  s21_decimal dec_1 = {{0x33e74ecc, 0x92a15486, 0x1, 0x0}};
  // 53.771140634
  s21_decimal dec_2 = {{0x85027e1a, 0xc, 0x0, 0x90000}};
  // 539556402705835033.89551697268
  s21_decimal dec_check = {{0x81ef1d74, 0xf5ed2c78, 0xae570f3f, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_413) {
  // -15285174343229327
  s21_decimal dec_1 = {{0xfb0edf8f, 0x364dc8, 0x0, 0x80000000}};
  // -81864
  s21_decimal dec_2 = {{0x13fc8, 0x0, 0x0, 0x80000000}};
  // 186714237555.32745773477963452
  s21_decimal dec_check = {{0x2d0aa6bc, 0xf511ce60, 0x3c54a3c5, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_414) {
  // -10467051960611062147814
  s21_decimal dec_1 = {{0x9257eae6, 0x6b86ad5b, 0x237, 0x80000000}};
  // -1.81120143637
  s21_decimal dec_2 = {{0x2b9a1115, 0x2a, 0x0, 0x800b0000}};
  // 5779065624853451069491.2142861
  s21_decimal dec_check = {{0x43c2ae0d, 0xb3823298, 0xbabb4f78, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_415) {
  // 79228162514264337593287966797
  s21_decimal dec_1 = {{0xf0be004d, 0xffffffff, 0xffffffff, 0x0}};
  // 351192
  s21_decimal dec_2 = {{0x55bd8, 0x0, 0x0, 0x0}};
  // 225597856768560609561971.70436
  s21_decimal dec_check = {{0x9be6ad04, 0x152e252b, 0x48e50470, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_416) {
  // 79228162514264337592702960046
  s21_decimal dec_1 = {{0xcddf81ae, 0xffffffff, 0xffffffff, 0x0}};
  // 287008.6683077213915
  s21_decimal dec_2 = {{0xc3657edb, 0x27d498a1, 0x0, 0xd0000}};
  // 276047977858698224839896.30557
  s21_decimal dec_check = {{0x859d8e5d, 0x85ed7fef, 0x5932274e, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_417) {
  // 8343799748236466482486794
  s21_decimal dec_1 = {{0xda2a9e0a, 0x4a6abb5b, 0x6e6de, 0x0}};
  // 54
  s21_decimal dec_2 = {{0x36, 0x0, 0x0, 0x0}};
  // 154514810152527157083088.77778
  s21_decimal dec_check = {{0x5b6571d2, 0x3e26931b, 0x31ed2a60, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_418) {
  // -711494856277422542589814
  s21_decimal dec_1 = {{0xc12e8f76, 0x36a44b01, 0x96aa, 0x80000000}};
  // 8803174234195.2348800892559623
  s21_decimal dec_2 = {{0xc66c6107, 0xbdcf5ab7, 0x1c72268a, 0x100000}};
  // -80822534843.588234344961204045
  s21_decimal dec_check = {{0xce1c2b70, 0x9688f498, 0x1a1d2ce5, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_419) {
  // -3699062
  s21_decimal dec_1 = {{0x387176, 0x0, 0x0, 0x80000000}};
  // 0.922279269671
  s21_decimal dec_2 = {{0xbc20d527, 0xd6, 0x0, 0xc0000}};
  // -4010782.9825986955136430322499
  s21_decimal dec_check = {{0x94913343, 0x8cfa9206, 0x81986b53, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_420) {
  // -6370538949844262879283
  s21_decimal dec_1 = {{0x49528033, 0x58fcde52, 0x159, 0x80000000}};
  // 69555920933843925066.05
  s21_decimal dec_2 = {{0x745efced, 0x103b2ca0, 0x179, 0x20000}};
  // -91.588737009224767909709848544
  s21_decimal dec_check = {{0x6a6e2996, 0x33f97390, 0x1d980af2, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_421) {
  // -80439
  s21_decimal dec_1 = {{0x13a37, 0x0, 0x0, 0x80000000}};
  // 679.7008
  s21_decimal dec_2 = {{0x67b6d0, 0x0, 0x0, 0x40000}};
  // -118.34471873506695887366912030
  s21_decimal dec_check = {{0x7e0bf81e, 0xc61307b0, 0x263d3ee5, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_422) {
  // -73953435129808091974243588
  s21_decimal dec_1 = {{0xb4a49504, 0xc063f467, 0x3d2c3f, 0x80000000}};
  // 27440306472758249
  s21_decimal dec_2 = {{0x37d62be9, 0x617cd0, 0x0, 0x0}};
  // -2695065931.6879863209206763432
  s21_decimal dec_check = {{0xf044fa8, 0x105b410f, 0x57151019, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_423) {
  // 114769950106993356276746
  s21_decimal dec_1 = {{0xc441840a, 0xb103a90d, 0x184d, 0x0}};
  // 0.978748
  s21_decimal dec_2 = {{0xeef3c, 0x0, 0x0, 0x60000}};
  // 117262002177264583198888.78445
  s21_decimal dec_check = {{0x93de8b6d, 0x8d8e3361, 0x25e3af7b, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_424) {
  // -2289587314528725163295086927
  s21_decimal dec_1 = {{0x708b994f, 0x67e4e89, 0x765e6f9, 0x80000000}};
  // 145958
  s21_decimal dec_2 = {{0x23a26, 0x0, 0x0, 0x0}};
  // -15686617482623255753676.310493
  s21_decimal dec_check = {{0xa0047dd, 0xae32b84c, 0x32afaa75, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_425) {
  // 23.762820965504
  s21_decimal dec_1 = {{0xb680a480, 0x159c, 0x0, 0xc0000}};
  // -5.100287
  s21_decimal dec_2 = {{0x4dd2ff, 0x0, 0x0, 0x80060000}};
  // -4.6591144705197962389175354250
  s21_decimal dec_check = {{0x1113438a, 0x65ea5554, 0x968b4aa7, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_427) {
  // 257671902973880.906330110297
  s21_decimal dec_1 = {{0x340f7959, 0xd981dcb7, 0xd52425, 0xc0000}};
  // -866069.417311
  s21_decimal dec_2 = {{0xa5c28d5f, 0xc9, 0x0, 0x80060000}};
  // -297518764.45875304540795036511
  s21_decimal dec_check = {{0xfbb3e35f, 0xe82ba038, 0x60222ce5, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_428) {
  // 7626688
  s21_decimal dec_1 = {{0x745fc0, 0x0, 0x0, 0x0}};
  // -44487
  s21_decimal dec_2 = {{0xadc7, 0x0, 0x0, 0x80000000}};
  // -171.43632971429855912963337604
  s21_decimal dec_check = {{0xbf13ed84, 0x988e205e, 0x3764e17d, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_429) {
  // 46368669750352191601618943
  s21_decimal dec_1 = {{0x212dafff, 0x9fb9dbf7, 0x265af2, 0x0}};
  // -6.3481976594625852279
  s21_decimal dec_2 = {{0xf255f377, 0x70fd495e, 0x3, 0x80130000}};
  // -7304225898076020288568076.0721
  s21_decimal dec_check = {{0xe84a8791, 0x826b8200, 0xec0323f9, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_430) {
  // 33480621335004590344441
  s21_decimal dec_1 = {{0x993f88f9, 0xfcf56440, 0x716, 0x0}};
  // 9790824333972899644084
  s21_decimal dec_2 = {{0xe13042b4, 0xc2fb89bc, 0x212, 0x0}};
  // 3.4195916700120076422347252616
  s21_decimal dec_check = {{0x70d86388, 0xd1f71535, 0x6e7e3306, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_431) {
  // -88395213289367023786623
  s21_decimal dec_1 = {{0x6a1e1a7f, 0xea0364c4, 0x12b7, 0x80000000}};
  // -814936
  s21_decimal dec_2 = {{0xc6f58, 0x0, 0x0, 0x80000000}};
  // 108468902207494850.86758101250
  s21_decimal dec_check = {{0x18db6102, 0x1a3814ae, 0x230c5659, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_432) {
  // -72086406308842061.6611889404
  s21_decimal dec_1 = {{0x719500fc, 0x29d1f06f, 0x25448e7, 0x800a0000}};
  // 9529.311959770337
  s21_decimal dec_2 = {{0xd650e4e1, 0x21dadb, 0x0, 0xc0000}};
  // -7564702112090.3039302281311684
  s21_decimal dec_check = {{0x97b1b5c4, 0x1126a151, 0xf46dbfd0, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_433) {
  // 5828530209997089409
  s21_decimal dec_1 = {{0x59826a81, 0x50e31958, 0x0, 0x0}};
  // -2876880076541
  s21_decimal dec_2 = {{0xd36a3efd, 0x29d, 0x0, 0x80000000}};
  // -2025989.9804391529421480196098
  s21_decimal dec_check = {{0xbb60f802, 0x1ced6131, 0x417698a9, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_434) {
  // 1.84274489720120305
  s21_decimal dec_1 = {{0xcef23f1, 0x28eacac, 0x0, 0x110000}};
  // -0.402
  s21_decimal dec_2 = {{0x192, 0x0, 0x0, 0x80030000}};
  // -4.5839425303512513681592039801
  s21_decimal dec_check = {{0x83ce3979, 0xfa4eb61b, 0x941d7be0, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_435) {
  // 352868488671851514
  s21_decimal dec_1 = {{0x57b6f3fa, 0x4e5a405, 0x0, 0x0}};
  // -4284001585172
  s21_decimal dec_2 = {{0x72648814, 0x3e5, 0x0, 0x80000000}};
  // -82368.897783142174906851614976
  s21_decimal dec_check = {{0x1608f01a, 0x9bccf239, 0x1a9d6541, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_436) {
  // -76054381
  s21_decimal dec_1 = {{0x4887f6d, 0x0, 0x0, 0x80000000}};
  // 155021
  s21_decimal dec_2 = {{0x25d8d, 0x0, 0x0, 0x0}};
  // -490.60695647686442481986311532
  s21_decimal dec_check = {{0x7fa4156c, 0x3e5bd362, 0x9e860e68, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_437) {
  // -754580332064057829
  s21_decimal dec_1 = {{0x672ca9e5, 0xa78ced0, 0x0, 0x80000000}};
  // -3.86781082
  s21_decimal dec_2 = {{0x170dcf9a, 0x0, 0x0, 0x80080000}};
  // 195092357713622050.67723555311
  s21_decimal dec_check = {{0xe18e41ef, 0x57968c49, 0x3f09a95e, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_438) {
  // -53058788526486371523568.9
  s21_decimal dec_1 = {{0xbf6d9769, 0x3a15c94b, 0x705b, 0x80010000}};
  // 974085168728150.00225942
  s21_decimal dec_2 = {{0x56250896, 0x86ba5362, 0x14a0, 0x80000}};
  // -54470379.213107744164392237091
  s21_decimal dec_check = {{0x884c7823, 0xf2b25948, 0xb000d775, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_439) {
  // -41415029996860568108260
  s21_decimal dec_1 = {{0x5d45fce4, 0x1cff93e9, 0x8c5, 0x80000000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 6902504999476761351376.6666667
  s21_decimal dec_check = {{0x4cc201ab, 0x32b587b, 0xdf082ee2, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_440) {
  // 477125227761548716.7573537
  s21_decimal dec_1 = {{0x57152e21, 0x1aafb14d, 0x3f25a, 0x70000}};
  // -38
  s21_decimal dec_2 = {{0x26, 0x0, 0x0, 0x80000000}};
  // -12555927046356545.177825097368
  s21_decimal dec_check = {{0x62fcb698, 0xfbc11c3, 0x289204f9, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_441) {
  // -98596261813.293956452358886
  s21_decimal dec_1 = {{0xf3c49ae6, 0x1016af56, 0x518e92, 0x800f0000}};
  // 60064
  s21_decimal dec_2 = {{0xeaa0, 0x0, 0x0, 0x0}};
  // -1641520.0754743932547342648841
  s21_decimal dec_check = {{0x45bdc609, 0x1031375, 0x350a55f8, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_442) {
  // -69509438000799830816.041362717
  s21_decimal dec_1 = {{0x414e651d, 0x6f88e752, 0xe098dc08, 0x80090000}};
  // -3656377304
  s21_decimal dec_2 = {{0xd9efe3d8, 0x0, 0x0, 0x80000000}};
  // 19010466432.104248401176861346
  s21_decimal dec_check = {{0x928c9aa2, 0x48528485, 0x3d6d16da, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_444) {
  // 7384815740972050070932036100
  s21_decimal dec_1 = {{0x223c1a04, 0x7d04a8bf, 0x17dc938f, 0x0}};
  // -2153560221809
  s21_decimal dec_2 = {{0x6a312871, 0x1f5, 0x0, 0x80000000}};
  // -3429119681068761.8328493483894
  s21_decimal dec_check = {{0xeacee776, 0xf6ba035c, 0x6ecd035f, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_445) {
  // 764763112810483175
  s21_decimal dec_1 = {{0xcc640de7, 0xa9cfbff, 0x0, 0x0}};
  // 7556
  s21_decimal dec_2 = {{0x1d84, 0x0, 0x0, 0x0}};
  // 101212693595881.83893594494442
  s21_decimal dec_check = {{0x5caa55ea, 0x661953af, 0x20b41e27, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_446) {
  // -232870507192947135850953
  s21_decimal dec_1 = {{0xf575a9c9, 0xef7c4b28, 0x314f, 0x80000000}};
  // -33735213033623655723
  s21_decimal dec_2 = {{0x6b44152b, 0xd42b8d84, 0x1, 0x80000000}};
  // 6902.8912596712134778121105638
  s21_decimal dec_check = {{0xb4ec30e6, 0x15576861, 0xdf0b60d2, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_447) {
  // 7049950679445
  s21_decimal dec_1 = {{0x71ce5195, 0x669, 0x0, 0x0}};
  // -0.092
  s21_decimal dec_2 = {{0x5c, 0x0, 0x0, 0x80030000}};
  // -76629898689619.565217391304348
  s21_decimal dec_check = {{0x402fde9c, 0xd4dc02d6, 0xf79ac43b, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_448) {
  // 14541405324900691983.2786750
  s21_decimal dec_1 = {{0x4ab3573e, 0x9f439241, 0x78489f, 0x70000}};
  // 34468.592213024743617516
  s21_decimal dec_2 = {{0x4f43f3ec, 0x8bcf0b51, 0x74c, 0x120000}};
  // 421874071184314.00187052868823
  s21_decimal dec_check = {{0xfccac4d7, 0x7778dc25, 0x88509af2, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_449) {
  // 6447158066891836
  s21_decimal dec_1 = {{0xf6634c3c, 0x16e7a7, 0x0, 0x0}};
  // -2371683168456.4918
  s21_decimal dec_2 = {{0x2fc197b6, 0x544255, 0x0, 0x80040000}};
  // -2718.3892657498986774346203071
  s21_decimal dec_check = {{0xb4a9ffbf, 0xcb2d26a2, 0x57d5fd2d, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_450) {
  // 24094495276287009.35041421
  s21_decimal dec_1 = {{0x928cb18d, 0x85472f96, 0x1fe38, 0x80000}};
  // 7.873718
  s21_decimal dec_2 = {{0x7824b6, 0x0, 0x0, 0x60000}};
  // 3060116615338142.5840262770396
  s21_decimal dec_check = {{0x74886edc, 0x344d1977, 0x62e0b0fd, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_452) {
  // -19971.186639931465725797646
  s21_decimal dec_1 = {{0x9b6650e, 0x32758ff5, 0x108510, 0x80150000}};
  // 188.763745
  s21_decimal dec_2 = {{0xb404e61, 0x0, 0x0, 0x60000}};
  // -105.79990686204846023688312605
  s21_decimal dec_check = {{0x3b4fd71d, 0x57cddad1, 0x222f902c, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_453) {
  // 6934571674790440
  s21_decimal dec_1 = {{0xc9586a28, 0x18a2f4, 0x0, 0x0}};
  // 619924.812
  s21_decimal dec_2 = {{0x24f34d4c, 0x0, 0x0, 0x30000}};
  // 11186149579.040304649074120298
  s21_decimal dec_check = {{0x7f28166a, 0xc464f4a0, 0x2424f74f, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_454) {
  // 337328634695
  s21_decimal dec_1 = {{0x8a5a7b47, 0x4e, 0x0, 0x0}};
  // -59384757045
  s21_decimal dec_2 = {{0xd39b7b35, 0xd, 0x0, 0x80000000}};
  // -5.6803909198345698140592603312
  s21_decimal dec_check = {{0x4e0100b0, 0xed005bde, 0xb78b17a7, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_455) {
  // -503216993336316882668
  s21_decimal dec_1 = {{0xf476eec, 0x4789e548, 0x1b, 0x80000000}};
  // 3.11774538561078
  s21_decimal dec_2 = {{0xaa9ef636, 0x11b8e, 0x0, 0xe0000}};
  // -161404133788088171873.89133330
  s21_decimal dec_check = {{0x34575212, 0x8184b232, 0x3427097a, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_458) {
  // -406.06496727493261048629
  s21_decimal dec_1 = {{0x1b6bb35, 0x48585f37, 0x899, 0x80140000}};
  // 3.522488
  s21_decimal dec_2 = {{0x35bfb8, 0x0, 0x0, 0x60000}};
  // -115.27788519788644006346934326
  s21_decimal dec_check = {{0xa3c8c836, 0xdafc7ea1, 0x253f902b, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_459) {
  // -36481.795
  s21_decimal dec_1 = {{0x22cab03, 0x0, 0x0, 0x80030000}};
  // 40.54
  s21_decimal dec_2 = {{0xfd6, 0x0, 0x0, 0x20000}};
  // -899.89627528367044893931919092
  s21_decimal dec_check = {{0x1417be5, 0x564b2be0, 0x1d13c47c, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_460) {
  // -4451054699802530079
  s21_decimal dec_1 = {{0xb190111f, 0x3dc552aa, 0x0, 0x80000000}};
  // -64126664304338158.2571
  s21_decimal dec_2 = {{0x8bfa9aeb, 0xc35cc645, 0x22, 0x80040000}};
  // 69.410357580402275237857870186
  s21_decimal dec_check = {{0xa424416a, 0x15593427, 0xe046e6f0, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_461) {
  // -1798243852064487712866000326
  s21_decimal dec_1 = {{0xe2715dc6, 0x8da868ef, 0x5cf78f2, 0x80000000}};
  // -6796964518399925742532
  s21_decimal dec_2 = {{0x9196ebc4, 0x76d4d19f, 0x170, 0x80000000}};
  // 264565.72594964972987182350287
  s21_decimal dec_check = {{0xe261ffcf, 0x32f6863f, 0x557c5d2a, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_462) {
  // 912
  s21_decimal dec_1 = {{0x390, 0x0, 0x0, 0x0}};
  // 0.39
  s21_decimal dec_2 = {{0x27, 0x0, 0x0, 0x20000}};
  // 2338.4615384615384615384615385
  s21_decimal dec_check = {{0x589d89d9, 0x230bb6cb, 0x4b8f4cec, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_463) {
  // 9879154384.9491
  s21_decimal dec_1 = {{0xb2e0c213, 0x59d9, 0x0, 0x40000}};
  // 46146.549001652
  s21_decimal dec_2 = {{0x54a92db4, 0x29f8, 0x0, 0x90000}};
  // 214082.19246460740147759410076
  s21_decimal dec_check = {{0x15edeb9c, 0xcd8d3959, 0x452c76c2, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_464) {
  // -554759288611331808114985
  s21_decimal dec_1 = {{0x364f3929, 0x8fb11753, 0x7579, 0x80000000}};
  // 9338468344
  s21_decimal dec_2 = {{0x2c9db7f8, 0x2, 0x0, 0x0}};
  // -59405811336049.200844727412399
  s21_decimal dec_check = {{0x7dc066af, 0x70bfdb85, 0xbff355dd, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_466) {
  // 778312112526627961
  s21_decimal dec_1 = {{0x1f889479, 0xacd1ebe, 0x0, 0x0}};
  // 4678989073.29029689873027
  s21_decimal dec_2 = {{0x47b89283, 0xd9c05d18, 0x6314, 0xe0000}};
  // 166341938.46905344378726921401
  s21_decimal dec_check = {{0xaa8234b9, 0x5167be19, 0x35bf7b8f, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_467) {
  // 24565456806677
  s21_decimal dec_1 = {{0x9753a315, 0x1657, 0x0, 0x0}};
  // -221852
  s21_decimal dec_2 = {{0x3629c, 0x0, 0x0, 0x80000000}};
  // -110729030.19435028757910679192
  s21_decimal dec_check = {{0xa9246e98, 0x783a3216, 0x23c74a6b, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_468) {
  // 61893966339028599
  s21_decimal dec_1 = {{0x560b677, 0xdbe43c, 0x0, 0x0}};
  // 37323916.77
  s21_decimal dec_2 = {{0xde77c6fd, 0x0, 0x0, 0x20000}};
  // 1658292368.4144899297502104038
  s21_decimal dec_check = {{0x23e109e6, 0x39be619c, 0x359512ae, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_470) {
  // -862992466252607279103.7332851
  s21_decimal dec_1 = {{0xc6df4d73, 0x5ff62cf0, 0x1be281a1, 0x80070000}};
  // 8431.82
  s21_decimal dec_2 = {{0xcddae, 0x0, 0x0, 0x20000}};
  // -102349488752441024.48863155109
  s21_decimal dec_check = {{0xe9693a5, 0x4a778642, 0x211226ba, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_472) {
  // -14683135632877132865674141
  s21_decimal dec_1 = {{0x3b891b9d, 0x60aa9b0b, 0xc2546, 0x80000000}};
  // -75850545517619692.86948
  s21_decimal dec_2 = {{0x73f10f24, 0x2fc70f7c, 0x19b, 0x80050000}};
  // 193579829.02662599483214713900
  s21_decimal dec_check = {{0xaa76d42c, 0xe673a4a2, 0x3e8c8c53, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_473) {
  // -916785566366911062244.0
  s21_decimal dec_1 = {{0xda67c8e8, 0xfd8e38b9, 0x1f0, 0x80010000}};
  // 11017.5879
  s21_decimal dec_2 = {{0x6912687, 0x0, 0x0, 0x40000}};
  // -83211096175317200.078249432437
  s21_decimal dec_check = {{0x583a88c, 0x3dab58a4, 0x1ae30f80, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_475) {
  // -76811613813248667.736550
  s21_decimal dec_1 = {{0x2690d9e6, 0xf74715c7, 0x1043, 0x80060000}};
  // 0.132
  s21_decimal dec_2 = {{0x84, 0x0, 0x0, 0x30000}};
  // -581906165251883846.48901515152
  s21_decimal dec_check = {{0x15fd5790, 0xbe773f8f, 0xbc06265a, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_477) {
  // 326.182124170081
  s21_decimal dec_1 = {{0x31a4ab61, 0x128a9, 0x0, 0xc0000}};
  // 0.834
  s21_decimal dec_2 = {{0x342, 0x0, 0x0, 0x30000}};
  // 391.10566447251918465227817746
  s21_decimal dec_check = {{0x6ba00312, 0x7663cd10, 0x7e5f8097, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_478) {
  // 96951010732781474.74559789397
  s21_decimal dec_1 = {{0x57f2e955, 0x4e44b137, 0x1f539982, 0xb0000}};
  // -0.921167358526486384455
  s21_decimal dec_2 = {{0xa81e8f47, 0xefc3e006, 0x31, 0x80150000}};
  // -105247987605494204.10532675166
  s21_decimal dec_check = {{0x55c63e5e, 0xeda7bdf, 0x2201e8d4, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_479) {
  // 25938473854
  s21_decimal dec_1 = {{0xa0db37e, 0x6, 0x0, 0x0}};
  // -13313385.43788732
  s21_decimal dec_2 = {{0x68fa72bc, 0x4bad8, 0x0, 0x80080000}};
  // -1948.3003759647880545621225871
  s21_decimal dec_check = {{0x52ffb18f, 0x233e9cbf, 0x3ef3f686, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_481) {
  // 136325313066364629
  s21_decimal dec_1 = {{0x6336eed5, 0x1e45326, 0x0, 0x0}};
  // -36
  s21_decimal dec_2 = {{0x24, 0x0, 0x0, 0x80000000}};
  // -3786814251843461.9166666666667
  s21_decimal dec_check = {{0xeed632ab, 0x52e9859d, 0x7a5bcb17, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_482) {
  // 99278.024009
  s21_decimal dec_1 = {{0x1d6e6d49, 0x17, 0x0, 0x60000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -14182.574858428571428571428571
  s21_decimal dec_check = {{0xe6c9b6db, 0xa5b7437e, 0x2dd38d0b, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_483) {
  // -78665515124421032957701
  s21_decimal dec_1 = {{0x2a505705, 0x7753a1e6, 0x10a8, 0x80000000}};
  // 3529236834
  s21_decimal dec_2 = {{0xd25be162, 0x0, 0x0, 0x0}};
  // -22289667376972.931411295873379
  s21_decimal dec_check = {{0x4fdc2963, 0xb46503de, 0x480594a9, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_485) {
  // 759965209367076418628.6
  s21_decimal dec_1 = {{0xd78a0aae, 0xfa5bf282, 0x19b, 0x10000}};
  // -63065835891561.4663792027011
  s21_decimal dec_2 = {{0x58e6583, 0x2441614c, 0x209ab1a, 0x800d0000}};
  // -12050347.048024518094679378998
  s21_decimal dec_check = {{0x3b8f0c36, 0x6f01f13c, 0x26efd03e, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_486) {
  // 56103971229
  s21_decimal dec_1 = {{0x100ea99d, 0xd, 0x0, 0x0}};
  // -67743
  s21_decimal dec_2 = {{0x1089f, 0x0, 0x0, 0x80000000}};
  // -828188.46565696824764182277136
  s21_decimal dec_check = {{0x536c5e02, 0xd8ab1990, 0x1ac29d4a, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_487) {
  // 23
  s21_decimal dec_1 = {{0x17, 0x0, 0x0, 0x0}};
  // 9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  // 2.5555555555555555555555555556
  s21_decimal dec_check = {{0xd38e38e4, 0x9ed05b69, 0x52930f62, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_488) {
  // 866398044515.6705356839993927
  s21_decimal dec_1 = {{0x852d4247, 0xcf047c6, 0x1bfead39, 0x100000}};
  // 0.11
  s21_decimal dec_2 = {{0xb, 0x0, 0x0, 0x20000}};
  // 7876345859233.3685062181762973
  s21_decimal dec_check = {{0xbab2b79d, 0xe9fcbb0c, 0xfe7f9b1d, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_489) {
  // 5961871
  s21_decimal dec_1 = {{0x5af88f, 0x0, 0x0, 0x0}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -1987290.3333333333333333333333
  s21_decimal dec_check = {{0x30955555, 0x6135677d, 0x40367af8, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_490) {
  // -52017317
  s21_decimal dec_1 = {{0x319b8a5, 0x0, 0x0, 0x80000000}};
  // 6.169
  s21_decimal dec_2 = {{0x1819, 0x0, 0x0, 0x30000}};
  // -8432050.0891554546928189333766
  s21_decimal dec_check = {{0xcd27d681, 0x42299139, 0x1b3ed40f, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_491) {
  // -924207889311616797746556864
  s21_decimal dec_1 = {{0x15e6fc0, 0x122cb864, 0x2fc7ca2, 0x80000000}};
  // 35264528323587662485452
  s21_decimal dec_2 = {{0x81517cc, 0xb1a426d3, 0x777, 0x0}};
  // -26207.861929445816409501275247
  s21_decimal dec_check = {{0x8461146f, 0x1590a6e, 0x54aea2a2, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_492) {
  // -88367373212098
  s21_decimal dec_1 = {{0xa1e3d9c2, 0x505e, 0x0, 0x80000000}};
  // -14390
  s21_decimal dec_2 = {{0x3836, 0x0, 0x0, 0x80000000}};
  // 6140887645.0380820013898540653
  s21_decimal dec_check = {{0xdd10266d, 0xdeade3e6, 0xc66c3b66, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_495) {
  // 87843097669073638425
  s21_decimal dec_1 = {{0xd7141419, 0xc3115fea, 0x4, 0x0}};
  // 46530381165338
  s21_decimal dec_2 = {{0xb2d7331a, 0x2a51, 0x0, 0x0}};
  // 1887865.4218829144188981108022
  s21_decimal dec_check = {{0xf9b45d36, 0xe2031600, 0x3d000e87, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_498) {
  // -777245626454397799246791
  s21_decimal dec_1 = {{0x8f222bc7, 0x91e0e474, 0xa496, 0x80000000}};
  // -6979799031001.79784886543
  s21_decimal dec_2 = {{0x69b7690f, 0x90fd4598, 0x93cd, 0x800b0000}};
  // 111356447800.59536318524331802
  s21_decimal dec_check = {{0x4b10971a, 0x20dce90b, 0x23fb3081, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_500) {
  // -1386.4689352156321644702148
  s21_decimal dec_1 = {{0x162e69c4, 0x50d9b9b5, 0xb77f6, 0x80160000}};
  // -865
  s21_decimal dec_2 = {{0x361, 0x0, 0x0, 0x80000000}};
  // 1.6028542603648926756881095954
  s21_decimal dec_check = {{0x3870dd12, 0xa1f42357, 0x33ca7feb, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3_501) {
  //  0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x1e241, 0x0, 0x0, 0x20000}};
  
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);

  ck_assert_int_eq(return_value, 0);

}
END_TEST


Suite *s21_div_cases_3(void) {
  Suite *c = suite_create("s21_div_3_cases3");
  TCase *tc = tcase_create("s21_div_3_tc");
  
  tcase_add_test(tc, s21_div_3_0);
  tcase_add_test(tc, s21_div_3_1);
  tcase_add_test(tc, s21_div_3_3);
  tcase_add_test(tc, s21_div_3_5);
  tcase_add_test(tc, s21_div_3_6);
  tcase_add_test(tc, s21_div_3_7);
  tcase_add_test(tc, s21_div_3_9);
  tcase_add_test(tc, s21_div_3_10);
  tcase_add_test(tc, s21_div_3_11);
  tcase_add_test(tc, s21_div_3_12);
  tcase_add_test(tc, s21_div_3_15);
  tcase_add_test(tc, s21_div_3_16);
  tcase_add_test(tc, s21_div_3_17);
  tcase_add_test(tc, s21_div_3_18);
  tcase_add_test(tc, s21_div_3_19);
  tcase_add_test(tc, s21_div_3_22);
  tcase_add_test(tc, s21_div_3_23);
  tcase_add_test(tc, s21_div_3_24);
  tcase_add_test(tc, s21_div_3_25);
  tcase_add_test(tc, s21_div_3_26);
  tcase_add_test(tc, s21_div_3_27);
  tcase_add_test(tc, s21_div_3_28);
  tcase_add_test(tc, s21_div_3_29);
  tcase_add_test(tc, s21_div_3_30);
  tcase_add_test(tc, s21_div_3_31);
  tcase_add_test(tc, s21_div_3_32);
  tcase_add_test(tc, s21_div_3_33);
  tcase_add_test(tc, s21_div_3_34);
  tcase_add_test(tc, s21_div_3_35);
  tcase_add_test(tc, s21_div_3_36);
  tcase_add_test(tc, s21_div_3_38);
  tcase_add_test(tc, s21_div_3_39);
  tcase_add_test(tc, s21_div_3_40);
  tcase_add_test(tc, s21_div_3_41);
  tcase_add_test(tc, s21_div_3_42);
  tcase_add_test(tc, s21_div_3_45);
  tcase_add_test(tc, s21_div_3_46);
  tcase_add_test(tc, s21_div_3_49);
  tcase_add_test(tc, s21_div_3_51);
  tcase_add_test(tc, s21_div_3_52);
  tcase_add_test(tc, s21_div_3_53);
  tcase_add_test(tc, s21_div_3_54);
  tcase_add_test(tc, s21_div_3_56);
  tcase_add_test(tc, s21_div_3_58);
  tcase_add_test(tc, s21_div_3_59);
  tcase_add_test(tc, s21_div_3_60);
  tcase_add_test(tc, s21_div_3_61);
  tcase_add_test(tc, s21_div_3_62);
  tcase_add_test(tc, s21_div_3_63);
  tcase_add_test(tc, s21_div_3_64);
  tcase_add_test(tc, s21_div_3_65);
  tcase_add_test(tc, s21_div_3_66);
  tcase_add_test(tc, s21_div_3_67);
  tcase_add_test(tc, s21_div_3_68);
  tcase_add_test(tc, s21_div_3_69);
  tcase_add_test(tc, s21_div_3_70);
  tcase_add_test(tc, s21_div_3_72);
  tcase_add_test(tc, s21_div_3_73);
  tcase_add_test(tc, s21_div_3_74);
  tcase_add_test(tc, s21_div_3_75);
  tcase_add_test(tc, s21_div_3_76);
  tcase_add_test(tc, s21_div_3_77);
  tcase_add_test(tc, s21_div_3_78);
  tcase_add_test(tc, s21_div_3_79);
  tcase_add_test(tc, s21_div_3_81);
  tcase_add_test(tc, s21_div_3_82);
  tcase_add_test(tc, s21_div_3_83);
  tcase_add_test(tc, s21_div_3_84);
  tcase_add_test(tc, s21_div_3_85);
  tcase_add_test(tc, s21_div_3_87);
  tcase_add_test(tc, s21_div_3_89);
  tcase_add_test(tc, s21_div_3_90);
  tcase_add_test(tc, s21_div_3_91);
  tcase_add_test(tc, s21_div_3_93);
  tcase_add_test(tc, s21_div_3_94);
  tcase_add_test(tc, s21_div_3_95);
  tcase_add_test(tc, s21_div_3_97);
  tcase_add_test(tc, s21_div_3_98);
  tcase_add_test(tc, s21_div_3_99);
  tcase_add_test(tc, s21_div_3_100);
  tcase_add_test(tc, s21_div_3_101);
  tcase_add_test(tc, s21_div_3_102);
  tcase_add_test(tc, s21_div_3_103);
  tcase_add_test(tc, s21_div_3_104);
  tcase_add_test(tc, s21_div_3_105);
  tcase_add_test(tc, s21_div_3_107);
  tcase_add_test(tc, s21_div_3_108);
  tcase_add_test(tc, s21_div_3_109);
  tcase_add_test(tc, s21_div_3_110);
  tcase_add_test(tc, s21_div_3_111);
  tcase_add_test(tc, s21_div_3_112);
  tcase_add_test(tc, s21_div_3_113);
  tcase_add_test(tc, s21_div_3_116);
  tcase_add_test(tc, s21_div_3_117);
  tcase_add_test(tc, s21_div_3_119);
  tcase_add_test(tc, s21_div_3_120);
  tcase_add_test(tc, s21_div_3_121);
  tcase_add_test(tc, s21_div_3_122);
  tcase_add_test(tc, s21_div_3_123);
  tcase_add_test(tc, s21_div_3_124);
  tcase_add_test(tc, s21_div_3_125);
  tcase_add_test(tc, s21_div_3_126);
  tcase_add_test(tc, s21_div_3_127);
  tcase_add_test(tc, s21_div_3_128);
  tcase_add_test(tc, s21_div_3_129);
  tcase_add_test(tc, s21_div_3_130);
  tcase_add_test(tc, s21_div_3_131);
  tcase_add_test(tc, s21_div_3_132);
  tcase_add_test(tc, s21_div_3_133);
  tcase_add_test(tc, s21_div_3_134);
  tcase_add_test(tc, s21_div_3_135);
  tcase_add_test(tc, s21_div_3_136);
  tcase_add_test(tc, s21_div_3_137);
  tcase_add_test(tc, s21_div_3_141);
  tcase_add_test(tc, s21_div_3_142);
  tcase_add_test(tc, s21_div_3_145);
  tcase_add_test(tc, s21_div_3_146);
  tcase_add_test(tc, s21_div_3_148);
  tcase_add_test(tc, s21_div_3_149);
  tcase_add_test(tc, s21_div_3_150);
  tcase_add_test(tc, s21_div_3_151);
  tcase_add_test(tc, s21_div_3_152);
  tcase_add_test(tc, s21_div_3_153);
  tcase_add_test(tc, s21_div_3_154);
  tcase_add_test(tc, s21_div_3_155);
  tcase_add_test(tc, s21_div_3_157);
  tcase_add_test(tc, s21_div_3_158);
  tcase_add_test(tc, s21_div_3_161);
  tcase_add_test(tc, s21_div_3_163);
  tcase_add_test(tc, s21_div_3_164);
  tcase_add_test(tc, s21_div_3_165);
  tcase_add_test(tc, s21_div_3_166);
  tcase_add_test(tc, s21_div_3_167);
  tcase_add_test(tc, s21_div_3_168);
  tcase_add_test(tc, s21_div_3_169);
  tcase_add_test(tc, s21_div_3_170);
  tcase_add_test(tc, s21_div_3_171);
  tcase_add_test(tc, s21_div_3_172);
  tcase_add_test(tc, s21_div_3_173);
  tcase_add_test(tc, s21_div_3_174);
  tcase_add_test(tc, s21_div_3_175);
  tcase_add_test(tc, s21_div_3_177);
  tcase_add_test(tc, s21_div_3_179);
  tcase_add_test(tc, s21_div_3_180);
  tcase_add_test(tc, s21_div_3_181);
  tcase_add_test(tc, s21_div_3_182);
  tcase_add_test(tc, s21_div_3_183);
  tcase_add_test(tc, s21_div_3_184);
  tcase_add_test(tc, s21_div_3_185);
  tcase_add_test(tc, s21_div_3_186);
  tcase_add_test(tc, s21_div_3_187);
  tcase_add_test(tc, s21_div_3_188);
  tcase_add_test(tc, s21_div_3_189);
  tcase_add_test(tc, s21_div_3_190);
  tcase_add_test(tc, s21_div_3_194);
  tcase_add_test(tc, s21_div_3_195);
  tcase_add_test(tc, s21_div_3_198);
  tcase_add_test(tc, s21_div_3_199);
  tcase_add_test(tc, s21_div_3_200);
  tcase_add_test(tc, s21_div_3_201);
  tcase_add_test(tc, s21_div_3_202);
  tcase_add_test(tc, s21_div_3_203);
  tcase_add_test(tc, s21_div_3_204);
  tcase_add_test(tc, s21_div_3_205);
  tcase_add_test(tc, s21_div_3_206);
  tcase_add_test(tc, s21_div_3_207);
  tcase_add_test(tc, s21_div_3_208);
  tcase_add_test(tc, s21_div_3_209);
  tcase_add_test(tc, s21_div_3_211);
  tcase_add_test(tc, s21_div_3_212);
  tcase_add_test(tc, s21_div_3_213);
  tcase_add_test(tc, s21_div_3_214);
  tcase_add_test(tc, s21_div_3_216);
  tcase_add_test(tc, s21_div_3_217);
  tcase_add_test(tc, s21_div_3_220);
  tcase_add_test(tc, s21_div_3_221);
  tcase_add_test(tc, s21_div_3_223);
  tcase_add_test(tc, s21_div_3_224);
  tcase_add_test(tc, s21_div_3_225);
  tcase_add_test(tc, s21_div_3_227);
  tcase_add_test(tc, s21_div_3_229);
  tcase_add_test(tc, s21_div_3_230);
  tcase_add_test(tc, s21_div_3_231);
  tcase_add_test(tc, s21_div_3_232);
  tcase_add_test(tc, s21_div_3_233);
  tcase_add_test(tc, s21_div_3_234);
  tcase_add_test(tc, s21_div_3_235);
  tcase_add_test(tc, s21_div_3_236);
  tcase_add_test(tc, s21_div_3_237);
  tcase_add_test(tc, s21_div_3_238);
  tcase_add_test(tc, s21_div_3_239);
  tcase_add_test(tc, s21_div_3_240);
  tcase_add_test(tc, s21_div_3_241);
  tcase_add_test(tc, s21_div_3_242);
  tcase_add_test(tc, s21_div_3_243);
  tcase_add_test(tc, s21_div_3_244);
  tcase_add_test(tc, s21_div_3_245);
  tcase_add_test(tc, s21_div_3_246);
  tcase_add_test(tc, s21_div_3_247);
  tcase_add_test(tc, s21_div_3_248);
  tcase_add_test(tc, s21_div_3_249);
  tcase_add_test(tc, s21_div_3_250);
  tcase_add_test(tc, s21_div_3_251);
  tcase_add_test(tc, s21_div_3_252);
  tcase_add_test(tc, s21_div_3_254);
  tcase_add_test(tc, s21_div_3_255);
  tcase_add_test(tc, s21_div_3_256);
  tcase_add_test(tc, s21_div_3_257);
  tcase_add_test(tc, s21_div_3_258);
  tcase_add_test(tc, s21_div_3_260);
  tcase_add_test(tc, s21_div_3_261);
  tcase_add_test(tc, s21_div_3_263);
  tcase_add_test(tc, s21_div_3_264);
  tcase_add_test(tc, s21_div_3_265);
  tcase_add_test(tc, s21_div_3_267);
  tcase_add_test(tc, s21_div_3_268);
  tcase_add_test(tc, s21_div_3_269);
  tcase_add_test(tc, s21_div_3_272);
  tcase_add_test(tc, s21_div_3_273);
  tcase_add_test(tc, s21_div_3_274);
  tcase_add_test(tc, s21_div_3_277);
  tcase_add_test(tc, s21_div_3_278);
  tcase_add_test(tc, s21_div_3_281);
  tcase_add_test(tc, s21_div_3_282);
  tcase_add_test(tc, s21_div_3_283);
  tcase_add_test(tc, s21_div_3_284);
  tcase_add_test(tc, s21_div_3_288);
  tcase_add_test(tc, s21_div_3_289);
  tcase_add_test(tc, s21_div_3_291);
  tcase_add_test(tc, s21_div_3_292);
  tcase_add_test(tc, s21_div_3_293);
  tcase_add_test(tc, s21_div_3_295);
  tcase_add_test(tc, s21_div_3_296);
  tcase_add_test(tc, s21_div_3_297);
  tcase_add_test(tc, s21_div_3_298);
  tcase_add_test(tc, s21_div_3_299);
  tcase_add_test(tc, s21_div_3_300);
  tcase_add_test(tc, s21_div_3_303);
  tcase_add_test(tc, s21_div_3_305);
  tcase_add_test(tc, s21_div_3_306);
  tcase_add_test(tc, s21_div_3_307);
  tcase_add_test(tc, s21_div_3_308);
  tcase_add_test(tc, s21_div_3_309);
  tcase_add_test(tc, s21_div_3_310);
  tcase_add_test(tc, s21_div_3_311);
  tcase_add_test(tc, s21_div_3_312);
  tcase_add_test(tc, s21_div_3_313);
  tcase_add_test(tc, s21_div_3_314);
  tcase_add_test(tc, s21_div_3_315);
  tcase_add_test(tc, s21_div_3_316);
  tcase_add_test(tc, s21_div_3_317);
  tcase_add_test(tc, s21_div_3_318);
  tcase_add_test(tc, s21_div_3_319);
  tcase_add_test(tc, s21_div_3_320);
  tcase_add_test(tc, s21_div_3_321);
  tcase_add_test(tc, s21_div_3_322);
  tcase_add_test(tc, s21_div_3_323);
  tcase_add_test(tc, s21_div_3_324);
  tcase_add_test(tc, s21_div_3_325);
  tcase_add_test(tc, s21_div_3_326);
  tcase_add_test(tc, s21_div_3_328);
  tcase_add_test(tc, s21_div_3_329);
  tcase_add_test(tc, s21_div_3_330);
  tcase_add_test(tc, s21_div_3_331);
  tcase_add_test(tc, s21_div_3_332);
  tcase_add_test(tc, s21_div_3_333);
  tcase_add_test(tc, s21_div_3_335);
  tcase_add_test(tc, s21_div_3_336);
  tcase_add_test(tc, s21_div_3_337);
  tcase_add_test(tc, s21_div_3_338);
  tcase_add_test(tc, s21_div_3_339);
  tcase_add_test(tc, s21_div_3_340);
  tcase_add_test(tc, s21_div_3_341);
  tcase_add_test(tc, s21_div_3_342);
  tcase_add_test(tc, s21_div_3_343);
  tcase_add_test(tc, s21_div_3_345);
  tcase_add_test(tc, s21_div_3_346);
  tcase_add_test(tc, s21_div_3_347);
  tcase_add_test(tc, s21_div_3_348);
  tcase_add_test(tc, s21_div_3_349);
  tcase_add_test(tc, s21_div_3_350);
  tcase_add_test(tc, s21_div_3_354);
  tcase_add_test(tc, s21_div_3_355);
  tcase_add_test(tc, s21_div_3_356);
  tcase_add_test(tc, s21_div_3_357);
  tcase_add_test(tc, s21_div_3_358);
  tcase_add_test(tc, s21_div_3_359);
  tcase_add_test(tc, s21_div_3_360);
  tcase_add_test(tc, s21_div_3_362);
  tcase_add_test(tc, s21_div_3_363);
  tcase_add_test(tc, s21_div_3_364);
  tcase_add_test(tc, s21_div_3_365);
  tcase_add_test(tc, s21_div_3_366);
  tcase_add_test(tc, s21_div_3_367);
  tcase_add_test(tc, s21_div_3_369);
  tcase_add_test(tc, s21_div_3_370);
  tcase_add_test(tc, s21_div_3_371);
  tcase_add_test(tc, s21_div_3_372);
  tcase_add_test(tc, s21_div_3_374);
  tcase_add_test(tc, s21_div_3_375);
  tcase_add_test(tc, s21_div_3_376);
  tcase_add_test(tc, s21_div_3_377);
  tcase_add_test(tc, s21_div_3_378);
  tcase_add_test(tc, s21_div_3_379);
  tcase_add_test(tc, s21_div_3_380);
  tcase_add_test(tc, s21_div_3_381);
  tcase_add_test(tc, s21_div_3_382);
  tcase_add_test(tc, s21_div_3_383);
  tcase_add_test(tc, s21_div_3_384);
  tcase_add_test(tc, s21_div_3_385);
  tcase_add_test(tc, s21_div_3_386);
  tcase_add_test(tc, s21_div_3_387);
  tcase_add_test(tc, s21_div_3_388);
  tcase_add_test(tc, s21_div_3_389);
  tcase_add_test(tc, s21_div_3_390);
  tcase_add_test(tc, s21_div_3_391);
  tcase_add_test(tc, s21_div_3_392);
  tcase_add_test(tc, s21_div_3_393);
  tcase_add_test(tc, s21_div_3_394);
  tcase_add_test(tc, s21_div_3_395);
  tcase_add_test(tc, s21_div_3_396);
  tcase_add_test(tc, s21_div_3_397);
  tcase_add_test(tc, s21_div_3_398);
  tcase_add_test(tc, s21_div_3_399);
  tcase_add_test(tc, s21_div_3_400);
  tcase_add_test(tc, s21_div_3_401);
  tcase_add_test(tc, s21_div_3_403);
  tcase_add_test(tc, s21_div_3_405);
  tcase_add_test(tc, s21_div_3_406);
  tcase_add_test(tc, s21_div_3_407);
  tcase_add_test(tc, s21_div_3_408);
  tcase_add_test(tc, s21_div_3_410);
  tcase_add_test(tc, s21_div_3_411);
  tcase_add_test(tc, s21_div_3_413);
  tcase_add_test(tc, s21_div_3_414);
  tcase_add_test(tc, s21_div_3_415);
  tcase_add_test(tc, s21_div_3_416);
  tcase_add_test(tc, s21_div_3_417);
  tcase_add_test(tc, s21_div_3_418);
  tcase_add_test(tc, s21_div_3_419);
  tcase_add_test(tc, s21_div_3_420);
  tcase_add_test(tc, s21_div_3_421);
  tcase_add_test(tc, s21_div_3_422);
  tcase_add_test(tc, s21_div_3_423);
  tcase_add_test(tc, s21_div_3_424);
  tcase_add_test(tc, s21_div_3_425);
  tcase_add_test(tc, s21_div_3_427);
  tcase_add_test(tc, s21_div_3_428);
  tcase_add_test(tc, s21_div_3_429);
  tcase_add_test(tc, s21_div_3_430);
  tcase_add_test(tc, s21_div_3_431);
  tcase_add_test(tc, s21_div_3_432);
  tcase_add_test(tc, s21_div_3_433);
  tcase_add_test(tc, s21_div_3_434);
  tcase_add_test(tc, s21_div_3_435);
  tcase_add_test(tc, s21_div_3_436);
  tcase_add_test(tc, s21_div_3_437);
  tcase_add_test(tc, s21_div_3_438);
  tcase_add_test(tc, s21_div_3_439);
  tcase_add_test(tc, s21_div_3_440);
  tcase_add_test(tc, s21_div_3_441);
  tcase_add_test(tc, s21_div_3_442);
  tcase_add_test(tc, s21_div_3_444);
  tcase_add_test(tc, s21_div_3_445);
  tcase_add_test(tc, s21_div_3_446);
  tcase_add_test(tc, s21_div_3_447);
  tcase_add_test(tc, s21_div_3_448);
  tcase_add_test(tc, s21_div_3_449);
  tcase_add_test(tc, s21_div_3_450);
  tcase_add_test(tc, s21_div_3_452);
  tcase_add_test(tc, s21_div_3_453);
  tcase_add_test(tc, s21_div_3_454);
  tcase_add_test(tc, s21_div_3_455);
  tcase_add_test(tc, s21_div_3_458);
  tcase_add_test(tc, s21_div_3_459);
  tcase_add_test(tc, s21_div_3_460);
  tcase_add_test(tc, s21_div_3_461);
  tcase_add_test(tc, s21_div_3_462);
  tcase_add_test(tc, s21_div_3_463);
  tcase_add_test(tc, s21_div_3_464);
  tcase_add_test(tc, s21_div_3_466);
  tcase_add_test(tc, s21_div_3_467);
  tcase_add_test(tc, s21_div_3_468);
  tcase_add_test(tc, s21_div_3_470);
  tcase_add_test(tc, s21_div_3_472);
  tcase_add_test(tc, s21_div_3_473);
  tcase_add_test(tc, s21_div_3_475);
  tcase_add_test(tc, s21_div_3_477);
  tcase_add_test(tc, s21_div_3_478);
  tcase_add_test(tc, s21_div_3_479);
  tcase_add_test(tc, s21_div_3_481);
  tcase_add_test(tc, s21_div_3_482);
  tcase_add_test(tc, s21_div_3_483);
  tcase_add_test(tc, s21_div_3_485);
  tcase_add_test(tc, s21_div_3_486);
  tcase_add_test(tc, s21_div_3_487);
  tcase_add_test(tc, s21_div_3_488);
  tcase_add_test(tc, s21_div_3_489);
  tcase_add_test(tc, s21_div_3_490);
  tcase_add_test(tc, s21_div_3_491);
  tcase_add_test(tc, s21_div_3_492);
  tcase_add_test(tc, s21_div_3_495);
  tcase_add_test(tc, s21_div_3_498);
  tcase_add_test(tc, s21_div_3_500);
  tcase_add_test(tc, s21_div_3_501);

  

  suite_add_tcase(c, tc);
  return c;
}
