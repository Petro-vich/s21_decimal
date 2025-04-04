#include "test.h"

START_TEST(s21_add_1) {
  // -97482726996
  s21_decimal dec_1 = {{0xb26c5e54, 0x16, 0x0, 0x80000000}};
  // 579075277883151804
  s21_decimal dec_2 = {{0xac6f95bc, 0x80949e5, 0x0, 0x0}};
  // 579075180400424808
  s21_decimal dec_check = {{0xfa033768, 0x80949ce, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_2) {
  // -6.99799
  s21_decimal dec_1 = {{0xaad97, 0x0, 0x0, 0x80050000}};
  // -89556735
  s21_decimal dec_2 = {{0x55686ff, 0x0, 0x0, 0x80000000}};
  // -89556741.99799
  s21_decimal dec_check = {{0x27c786f7, 0x825, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_3) {
  // 3252716115602007648522
  s21_decimal dec_1 = {{0xee17e90a, 0x54810982, 0xb0, 0x0}};
  // 914.33875642097
  s21_decimal dec_2 = {{0x9bad96f1, 0x5328, 0x0, 0xb0000}};
  // 3252716115602007649436.3387564
  s21_decimal dec_check = {{0x8d6d66ac, 0x81d4d72d, 0x6919d64b, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_4) {
  // 0.0257
  s21_decimal dec_1 = {{0x101, 0x0, 0x0, 0x40000}};
  // 56152
  s21_decimal dec_2 = {{0xdb58, 0x0, 0x0, 0x0}};
  // 56152.0257
  s21_decimal dec_check = {{0x21781e81, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_5) {
  // -3455405.03621897198677
  s21_decimal dec_1 = {{0xc4c29c55, 0xbb56794a, 0x12, 0x800e0000}};
  // -34037484208902220719334
  s21_decimal dec_2 = {{0x20a6a4e6, 0x2cfbbdad, 0x735, 0x80000000}};
  // -34037484208902224174739.036219
  s21_decimal dec_check = {{0x4fd7183b, 0x42fafa9b, 0x6dfb25a4, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_6) {
  // -3625012739037.651
  s21_decimal dec_1 = {{0xc9dd9d3, 0xce0ee, 0x0, 0x80030000}};
  // -9106931610318844660522383.8905
  s21_decimal dec_2 = {{0x673ac4b9, 0x4ad4536a, 0x2642c5ce, 0x80040000}};
  // -9106931610322469673261421.5415
  s21_decimal dec_check = {{0xe56546f7, 0x4b551cb6, 0x2642c5ce, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_7) {
  // -615901792286548494.4
  s21_decimal dec_1 = {{0x41a95490, 0x55793a2b, 0x0, 0x80010000}};
  // 62979492789397004651
  s21_decimal dec_2 = {{0x2648a16b, 0x6a041b03, 0x3, 0x0}};
  // 62363590997110456156.6
  s21_decimal dec_check = {{0x3d2cf99e, 0xceafd3f4, 0x21, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_8) {
  // 79228162514264337591713914499
  s21_decimal dec_1 = {{0x92ebde83, 0xffffffff, 0xffffffff, 0x0}};
  // -63800452476.731
  s21_decimal dec_2 = {{0xb34e6f3b, 0x3a06, 0x0, 0x80030000}};
  // 79228162514264337527913462022
  s21_decimal dec_check = {{0xb81e3906, 0xfffffff0, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_9) {
  // 7591715876059445646531670459
  s21_decimal dec_1 = {{0xbf06b1bb, 0x492b5226, 0x1887b85e, 0x0}};
  // 520.3939799485
  s21_decimal dec_2 = {{0xa2fbb1bd, 0x4bb, 0x0, 0xa0000}};
  // 7591715876059445646531670979.4
  s21_decimal dec_check = {{0x764305a2, 0xdbb13583, 0xf54d33ae, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_10) {
  // -9216983728191533866520313091
  s21_decimal dec_1 = {{0x49267d03, 0x17ebb35b, 0x1dc81c39, 0x80000000}};
  // -5829311860869130.303178357278
  s21_decimal dec_2 = {{0x95c93a1e, 0x2eb7c302, 0x12d5e4cd, 0x800c0000}};
  // -9216983728197363178381182221.3
  s21_decimal dec_check = {{0xb7e7050d, 0x18006915, 0x1dc81c39, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_11) {
  // -899.226564313
  s21_decimal dec_1 = {{0x5e1476d9, 0xd1, 0x0, 0x80090000}};
  // 9987810174
  s21_decimal dec_2 = {{0x5351e37e, 0x2, 0x0, 0x0}};
  // 9987809274.773435687
  s21_decimal dec_check = {{0x2338f527, 0x8a9bd39e, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_12) {
  // -4638056
  s21_decimal dec_1 = {{0x46c568, 0x0, 0x0, 0x80000000}};
  // 23914139
  s21_decimal dec_2 = {{0x16ce69b, 0x0, 0x0, 0x0}};
  // 19276083
  s21_decimal dec_check = {{0x1262133, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_13) {
  // -7291978912666992406
  s21_decimal dec_1 = {{0xbf27bf16, 0x6532502f, 0x0, 0x80000000}};
  // -6624.553342098420693624626388
  s21_decimal dec_2 = {{0xd9431cd4, 0x4330a22e, 0x1567b3bc, 0x80180000}};
  // -7291978912666999030.5533420984
  s21_decimal dec_check = {{0xd19e65b8, 0x6a808213, 0xeb9dd5f9, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_14) {
  // 860704.00182031587
  s21_decimal dec_1 = {{0xac8694e3, 0x131c892, 0x0, 0xb0000}};
  // -4050216995589230
  s21_decimal dec_2 = {{0xa1490c6e, 0xe63a6, 0x0, 0x80000000}};
  // -4050216994728525.99817968413
  s21_decimal dec_check = {{0x31711b1d, 0x52d83aa4, 0x14f06ae, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_15) {
  // 4195653667605422
  s21_decimal dec_1 = {{0xbe754bae, 0xee7ec, 0x0, 0x0}};
  // -7296846657
  s21_decimal dec_2 = {{0xb2ed0b41, 0x1, 0x0, 0x80000000}};
  // 4195646370758765
  s21_decimal dec_check = {{0xb88406d, 0xee7eb, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_16) {
  // 392458.2508028254631174937681
  s21_decimal dec_1 = {{0x14a11c51, 0x10ad2830, 0xcae56ac, 0x160000}};
  // -447281370817
  s21_decimal dec_2 = {{0x240c16c1, 0x68, 0x0, 0x80000000}};
  // -447280978358.74919717453688251
  s21_decimal dec_check = {{0x39bedbb, 0x3d6fe907, 0x90863722, 0x80110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_17) {
  // -9.0459
  s21_decimal dec_1 = {{0x1615b, 0x0, 0x0, 0x80040000}};
  // 63143191765951.02577
  s21_decimal dec_2 = {{0x1f635b71, 0x57a0f7d6, 0x0, 0x50000}};
  // 63143191765941.97987
  s21_decimal dec_check = {{0x1f558de3, 0x57a0f7d6, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_18) {
  // 258190612
  s21_decimal dec_1 = {{0xf63ad14, 0x0, 0x0, 0x0}};
  // -2973367432680.37518412
  s21_decimal dec_2 = {{0xae5644c, 0x1e6050a5, 0x10, 0x80080000}};
  // -2973109242068.37518412
  s21_decimal dec_check = {{0x67a2d04c, 0x1e049658, 0x10, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_19) {
  // -858420584562
  s21_decimal dec_1 = {{0xdddaa072, 0xc7, 0x0, 0x80000000}};
  // 3190
  s21_decimal dec_2 = {{0xc76, 0x0, 0x0, 0x0}};
  // -858420581372
  s21_decimal dec_check = {{0xddda93fc, 0xc7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_20) {
  // 13906.96538372
  s21_decimal dec_1 = {{0xcbf92104, 0x143, 0x0, 0x80000}};
  // -1.4703549
  s21_decimal dec_2 = {{0xe05bbd, 0x0, 0x0, 0x80070000}};
  // 13905.49502882
  s21_decimal dec_check = {{0xc3358ba2, 0x143, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_21) {
  // -61121011.81058
  s21_decimal dec_1 = {{0x159ea682, 0x58f, 0x0, 0x80050000}};
  // 57
  s21_decimal dec_2 = {{0x39, 0x0, 0x0, 0x0}};
  // -61120954.81058
  s21_decimal dec_check = {{0x1547ace2, 0x58f, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_22) {
  // 20853.25437647139
  s21_decimal dec_1 = {{0xa9f3b923, 0x76897, 0x0, 0xb0000}};
  // -8593269224567193410301
  s21_decimal dec_2 = {{0xf8031afd, 0xd7911ea6, 0x1d1, 0x80000000}};
  // -8593269224567193389447.7456235
  s21_decimal dec_check = {{0x879b9058, 0x19f73dd8, 0x1bc42f8a, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_23) {
  // 91.495828
  s21_decimal dec_1 = {{0x5741d94, 0x0, 0x0, 0x60000}};
  // -55.50336
  s21_decimal dec_2 = {{0x54b100, 0x0, 0x0, 0x80050000}};
  // 35.992468
  s21_decimal dec_check = {{0x2253394, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_24) {
  // 9.21627
  s21_decimal dec_1 = {{0xe101b, 0x0, 0x0, 0x50000}};
  // -87863196982612.0348687321
  s21_decimal dec_2 = {{0xf5835bd9, 0xbc09d52a, 0xba0e, 0x800a0000}};
  // -87863196982602.8185987321
  s21_decimal dec_check = {{0x803028f9, 0xbc09d515, 0xba0e, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_25) {
  // -364727638977391215326196019
  s21_decimal dec_1 = {{0x13b2f133, 0xed5f96a9, 0x12db214, 0x80000000}};
  // 8832.400
  s21_decimal dec_2 = {{0x86c590, 0x0, 0x0, 0x30000}};
  // -364727638977391215326187186.60
  s21_decimal dec_check = {{0xb1d8bdc4, 0xb956da0b, 0x75d9902c, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_26) {
  // 45
  s21_decimal dec_1 = {{0x2d, 0x0, 0x0, 0x0}};
  // 8520295332
  s21_decimal dec_2 = {{0xfbd963a4, 0x1, 0x0, 0x0}};
  // 8520295377
  s21_decimal dec_check = {{0xfbd963d1, 0x1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_27) {
  // 7776851327.5897110106250153219
  s21_decimal dec_1 = {{0x2e800d03, 0x3c1a0498, 0xfb489b40, 0x130000}};
  // -813223976090854
  s21_decimal dec_2 = {{0x7637bce6, 0x2e39f, 0x0, 0x80000000}};
  // -813216199239526.41028898937498
  s21_decimal dec_check = {{0x67572f76, 0xf53c30a3, 0x1a46c448, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_28) {
  // -58563117.9818
  s21_decimal dec_1 = {{0x5a56a42a, 0x88, 0x0, 0x80040000}};
  // -87717966444.438696154838565
  s21_decimal dec_2 = {{0x91373625, 0x7d3fb87f, 0x488f00, 0x800f0000}};
  // -87776529562.420496154838565
  s21_decimal dec_check = {{0x91594625, 0x33c60c3f, 0x489b67, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_29) {
  // -987525
  s21_decimal dec_1 = {{0xf1185, 0x0, 0x0, 0x80000000}};
  // 5490847.298506687
  s21_decimal dec_2 = {{0x82be4fbf, 0x1381e5, 0x0, 0x90000}};
  // 4503322.298506687
  s21_decimal dec_check = {{0x6de95dbf, 0xfffbf, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_30) {
  // 0.7391094500728636
  s21_decimal dec_1 = {{0x4a379f3c, 0x1a4229, 0x0, 0x100000}};
  // -9740548225200.0311241563
  s21_decimal dec_2 = {{0xce99eb5b, 0x5c9d2fd4, 0x14a0, 0x800a0000}};
  // -9740548225199.2920147062271364
  s21_decimal dec_check = {{0x4886f7c0, 0x59197788, 0x1f793151, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_31) {
  // -251558
  s21_decimal dec_1 = {{0x3d6a6, 0x0, 0x0, 0x80000000}};
  // 8597754.5342953172620815391
  s21_decimal dec_2 = {{0x5e2c2c1f, 0x1281999c, 0x471e74, 0x130000}};
  // 8346196.5342953172620815391
  s21_decimal dec_check = {{0x1bc2c1f, 0x350d7bab, 0x4509c2, 0x130000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_32) {
  // 666839.7350
  s21_decimal dec_1 = {{0x8d77ab26, 0x1, 0x0, 0x40000}};
  // 737449556506786907.58137800
  s21_decimal dec_2 = {{0xbd9a17c8, 0xe6ab3d5, 0x3d001a, 0x80000}};
  // 737449556507453747.31637800
  s21_decimal dec_check = {{0xd0279428, 0xe6af07b, 0x3d001a, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_33) {
  // -45108
  s21_decimal dec_1 = {{0xb034, 0x0, 0x0, 0x80000000}};
  // 4537939835588497660238163873
  s21_decimal dec_2 = {{0xeeb0efa1, 0x6aecf3ad, 0xea9b223, 0x0}};
  // 4537939835588497660238118765
  s21_decimal dec_check = {{0xeeb03f6d, 0x6aecf3ad, 0xea9b223, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_34) {
  // -756506188131
  s21_decimal dec_1 = {{0x23485963, 0xb0, 0x0, 0x80000000}};
  // -73010450220728.64
  s21_decimal dec_2 = {{0x307a020, 0x19f043, 0x0, 0x80020000}};
  // -73766956408859.64
  s21_decimal dec_check = {{0xcb4a8acc, 0x1a3510, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_35) {
  // 26704035327733697.73935
  s21_decimal dec_1 = {{0x30e6ff6f, 0xc34b28a7, 0x90, 0x50000}};
  // 754499848565
  s21_decimal dec_2 = {{0xabb20975, 0xaf, 0x0, 0x0}};
  // 26704789827582262.73935
  s21_decimal dec_check = {{0xba95268f, 0xc4573603, 0x90, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_36) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // 0.2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x10000}};
  // 8.2
  s21_decimal dec_check = {{0x52, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_37) {
  // -5270032167.049394
  s21_decimal dec_1 = {{0xfb4598b2, 0x12b910, 0x0, 0x80060000}};
  // 6161323
  s21_decimal dec_2 = {{0x5e03ab, 0x0, 0x0, 0x0}};
  // -5263870844.049394
  s21_decimal dec_check = {{0x6fcd97f2, 0x12b376, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_38) {
  // -220657053878
  s21_decimal dec_1 = {{0x602f70b6, 0x33, 0x0, 0x80000000}};
  // 33381105068443769996.3
  s21_decimal dec_2 = {{0xa1d31d7b, 0x188f15fd, 0x12, 0x10000}};
  // 33381104847786716118.3
  s21_decimal dec_check = {{0xdff8b65f, 0x188f13fb, 0x12, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_39) {
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // -285.04062162595592
  s21_decimal dec_2 = {{0x23db6f08, 0x65444b, 0x0, 0x800e0000}};
  // -278.04062162595592
  s21_decimal dec_check = {{0xb083af08, 0x62c7a5, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_40) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // 85633206376774845085459112
  s21_decimal dec_2 = {{0x52b722a8, 0x6b665074, 0x46d589, 0x0}};
  // 85633206376774845085459112
  s21_decimal dec_check = {{0x52b722a8, 0x6b665074, 0x46d589, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_41) {
  // -191688426552006337
  s21_decimal dec_1 = {{0xbc2f96c1, 0x2a9039b, 0x0, 0x80000000}};
  // -399943916244950020567063
  s21_decimal dec_2 = {{0x9f4b017, 0xcdff19, 0x54b1, 0x80000000}};
  // -399944107933376572573400
  s21_decimal dec_check = {{0xc62446d8, 0x37702b4, 0x54b1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_42) {
  // 9.9420
  s21_decimal dec_1 = {{0x1845c, 0x0, 0x0, 0x40000}};
  // 197
  s21_decimal dec_2 = {{0xc5, 0x0, 0x0, 0x0}};
  // 206.9420
  s21_decimal dec_check = {{0x1f93ac, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_43) {
  // -5364980370
  s21_decimal dec_1 = {{0x3fc71a92, 0x1, 0x0, 0x80000000}};
  // 51488668348301492782516
  s21_decimal dec_2 = {{0xa93685b4, 0x34d0581f, 0xae7, 0x0}};
  // 51488668348296127802146
  s21_decimal dec_check = {{0x696f6b22, 0x34d0581e, 0xae7, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_44) {
  // -18.6936183819
  s21_decimal dec_1 = {{0x8643cc0b, 0x2b, 0x0, 0x800a0000}};
  // -51724664180161759877240
  s21_decimal dec_2 = {{0x513f1878, 0xffe9f6d7, 0xaf3, 0x80000000}};
  // -51724664180161759877258.693618
  s21_decimal dec_check = {{0x43a4bf2, 0xc2befb79, 0xa721a3af, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_45) {
  // -9637793680550120739
  s21_decimal dec_1 = {{0xbb1cd23, 0x85c0524a, 0x0, 0x80000000}};
  // -282261519728853722
  s21_decimal dec_2 = {{0x513342da, 0x3eacb5b, 0x0, 0x80000000}};
  // -9920055200278974461
  s21_decimal dec_check = {{0x5ce50ffd, 0x89ab1da5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_46) {
  // -775676412976808485118462779
  s21_decimal dec_1 = {{0xfb82cb3b, 0x9ad19d27, 0x2819fde, 0x80000000}};
  // 8191.3003372952612830858
  s21_decimal dec_2 = {{0x2698fe8a, 0x83478e02, 0x1158, 0x130000}};
  // -775676412976808485118454587.70
  s21_decimal dec_check = {{0x3f0ae352, 0x79e1639e, 0xfaa272f4, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_47) {
  // 3197806546012567250
  s21_decimal dec_1 = {{0x637f76d2, 0x2c60e41c, 0x0, 0x0}};
  // -2.3492060843776515091489393
  s21_decimal dec_2 = {{0xa9c86271, 0x2b8ee601, 0x136ea3, 0x80190000}};
  // 3197806546012567247.6507939156
  s21_decimal dec_check = {{0x109ca154, 0x30064fb3, 0x6753a2c2, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_48) {
  // -5482417478
  s21_decimal dec_1 = {{0x46c70d46, 0x1, 0x0, 0x80000000}};
  // -808149498371099.1662541996
  s21_decimal dec_2 = {{0xd7496cac, 0xb88dc9a4, 0x6af52, 0x800a0000}};
  // -808154980788577.1662541996
  s21_decimal dec_check = {{0xa91dc4ac, 0xb1646222, 0x6af55, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_49) {
  // -98956283658676093
  s21_decimal dec_1 = {{0x37c4a77d, 0x15f9037, 0x0, 0x80000000}};
  // -327652907810239412768
  s21_decimal dec_2 = {{0x8521fa20, 0xc318f7ac, 0x11, 0x80000000}};
  // -327751864093898088861
  s21_decimal dec_check = {{0xbce6a19d, 0xc47887e3, 0x11, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_50) {
  // 48689
  s21_decimal dec_1 = {{0xbe31, 0x0, 0x0, 0x0}};
  // 0.2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x10000}};
  // 48689.2
  s21_decimal dec_check = {{0x76dec, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_51) {
  // -739
  s21_decimal dec_1 = {{0x2e3, 0x0, 0x0, 0x80000000}};
  // -4.1516207611490227796602704
  s21_decimal dec_2 = {{0x30cc6f50, 0x1fd14347, 0x225766, 0x80190000}};
  // -743.1516207611490227796602704
  s21_decimal dec_check = {{0xcecc6f50, 0xdb90f6f4, 0x180334c4, 0x80190000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_52) {
  // -264
  s21_decimal dec_1 = {{0x108, 0x0, 0x0, 0x80000000}};
  // 3770
  s21_decimal dec_2 = {{0xeba, 0x0, 0x0, 0x0}};
  // 3506
  s21_decimal dec_check = {{0xdb2, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_53) {
  // 81576547025739698965059
  s21_decimal dec_1 = {{0x23608a43, 0x46027cd7, 0x1146, 0x0}};
  // -331634301
  s21_decimal dec_2 = {{0x13c4567d, 0x0, 0x0, 0x80000000}};
  // 81576547025739367330758
  s21_decimal dec_check = {{0xf9c33c6, 0x46027cd7, 0x1146, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_54) {
  // 7421766466822324
  s21_decimal dec_1 = {{0xa9dc60b4, 0x1a5e0e, 0x0, 0x0}};
  // -51812837.5903118460
  s21_decimal dec_2 = {{0x41c1647c, 0x730c303, 0x0, 0x800a0000}};
  // 7421766415009486.4096881540
  s21_decimal dec_check = {{0x3c1aeb84, 0xa2aaa9e0, 0x3d6433, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_55) {
  // -0.81773589
  s21_decimal dec_1 = {{0x4dfc415, 0x0, 0x0, 0x80080000}};
  // 64740646012263670400574502818
  s21_decimal dec_2 = {{0x187737a2, 0xbb063eb0, 0xd130350c, 0x0}};
  // 64740646012263670400574502817
  s21_decimal dec_check = {{0x187737a1, 0xbb063eb0, 0xd130350c, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_56) {
  // -768928404287533541332785
  s21_decimal dec_1 = {{0x52599731, 0xb13bee39, 0xa2d3, 0x80000000}};
  // 0.69736350703697141
  s21_decimal dec_2 = {{0x6ba03cf5, 0xf7c0d7, 0x0, 0x110000}};
  // -768928404287533541332784.30264
  s21_decimal dec_check = {{0xf4521438, 0x12603747, 0xf8744450, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_57) {
  // -0.54198535777209
  s21_decimal dec_1 = {{0x1478ebb9, 0x314b, 0x0, 0x800e0000}};
  // -60920155555313
  s21_decimal dec_2 = {{0x143b45f1, 0x3768, 0x0, 0x80000000}};
  // -60920155555313.54198535777209
  s21_decimal dec_check = {{0x4acf2bb9, 0x191acbb, 0x13af3279, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_58) {
  // -64727.3
  s21_decimal dec_1 = {{0x9e069, 0x0, 0x0, 0x80010000}};
  // -4082425125
  s21_decimal dec_2 = {{0xf354dd25, 0x0, 0x0, 0x80000000}};
  // -4082489852.3
  s21_decimal dec_check = {{0x815a83db, 0x9, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_59) {
  // 44485.44567682136
  s21_decimal dec_1 = {{0x7eb96458, 0xfcded, 0x0, 0xb0000}};
  // 51.766827994664
  s21_decimal dec_2 = {{0xe764ce28, 0x2f14, 0x0, 0xc0000}};
  // 44537.212504816024
  s21_decimal dec_check = {{0xdaa2b998, 0x9e3a5b, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_60) {
  // 84918549697286473.6024011545
  s21_decimal dec_1 = {{0xd1972319, 0x8767f77, 0x2be6e06, 0xa0000}};
  // -0.612
  s21_decimal dec_2 = {{0x264, 0x0, 0x0, 0x80030000}};
  // 84918549697286472.9904011545
  s21_decimal dec_check = {{0x64cf5919, 0x8767f76, 0x2be6e06, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_61) {
  // -68470990473114905279
  s21_decimal dec_1 = {{0x792b6abf, 0xb639d30f, 0x3, 0x80000000}};
  // 3037454459272617904
  s21_decimal dec_2 = {{0xd25edfb0, 0x2a2734bc, 0x0, 0x0}};
  // -65433536013842287375
  s21_decimal dec_check = {{0xa6cc8b0f, 0x8c129e52, 0x3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_62) {
  // 39101588020838823
  s21_decimal dec_1 = {{0xe822c1a7, 0x8aeaaf, 0x0, 0x0}};
  // 467633006756.3413177757056712
  s21_decimal dec_2 = {{0x5f67bec8, 0xecf29bd3, 0xf1c2b68, 0x100000}};
  // 39102055653845579.341317775706
  s21_decimal dec_check = {{0x991ba15a, 0x6d6ba7a8, 0x7e58765c, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_63) {
  // -9.4116325298667750090828
  s21_decimal dec_1 = {{0xc936e84c, 0xe644979, 0x13ee, 0x80160000}};
  // -19608088328153088
  s21_decimal dec_2 = {{0xd3862800, 0x45a973, 0x0, 0x80000000}};
  // -19608088328153097.411632529867
  s21_decimal dec_check = {{0x7b8381cb, 0x2efdf45f, 0x3f5b6e36, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_64) {
  // 79228162514264337592181032013
  s21_decimal dec_1 = {{0xaec3844d, 0xffffffff, 0xffffffff, 0x0}};
  // 3.829114555744237826
  s21_decimal dec_2 = {{0xa369b902, 0x3523bf66, 0x0, 0x120000}};
  // 79228162514264337592181032017
  s21_decimal dec_check = {{0xaec38451, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_65) {
  // 92998966214247.2497
  s21_decimal dec_1 = {{0xa0c9a131, 0xce7fcab, 0x0, 0x40000}};
  // 0.48
  s21_decimal dec_2 = {{0x30, 0x0, 0x0, 0x20000}};
  // 92998966214247.7297
  s21_decimal dec_check = {{0xa0c9b3f1, 0xce7fcab, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_66) {
  // 119980174231337542845
  s21_decimal dec_1 = {{0xfc59a4bd, 0x810f34c7, 0x6, 0x0}};
  // 3566440790468159482994.0170
  s21_decimal dec_2 = {{0x98a825ca, 0x6d314873, 0x1d803b, 0x40000}};
  // 3686420964699497025839.0170
  s21_decimal dec_check = {{0x65b3c9a, 0xcf2f0c65, 0x1e7e4c, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_67) {
  // -0.2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x80010000}};
  // -685
  s21_decimal dec_2 = {{0x2ad, 0x0, 0x0, 0x80000000}};
  // -685.2
  s21_decimal dec_check = {{0x1ac4, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_68) {
  // -58338421523.676627
  s21_decimal dec_1 = {{0x3bacfdd3, 0xcf427c, 0x0, 0x80060000}};
  // 65633797162474909327
  s21_decimal dec_2 = {{0xc95bae8f, 0x8eda16c6, 0x3, 0x0}};
  // 65633797104136487803.323373
  s21_decimal dec_check = {{0xf8a083ed, 0x453b7b7e, 0x364a7f, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_69) {
  // 62167517140395761596926
  s21_decimal dec_1 = {{0x515bf9fe, 0x1b9c8591, 0xd2a, 0x0}};
  // 99958288458648876001
  s21_decimal dec_2 = {{0x5dcb73e1, 0x6b332dc0, 0x5, 0x0}};
  // 62267475428854410472927
  s21_decimal dec_check = {{0xaf276ddf, 0x86cfb351, 0xd2f, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_70) {
  // 2181106427367086851949947
  s21_decimal dec_1 = {{0xe109057b, 0x42f6d3e, 0x1cdde, 0x0}};
  // -595514854279
  s21_decimal dec_2 = {{0xa7738b87, 0x8a, 0x0, 0x80000000}};
  // 2181106427366491337095668
  s21_decimal dec_check = {{0x399579f4, 0x42f6cb4, 0x1cdde, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_71) {
  // -9141537
  s21_decimal dec_1 = {{0x8b7d21, 0x0, 0x0, 0x80000000}};
  // -31466205171404864292099544778
  s21_decimal dec_2 = {{0xf8c156ca, 0x55e91f50, 0x65ac3c20, 0x80000000}};
  // -31466205171404864292108686315
  s21_decimal dec_check = {{0xf94cd3eb, 0x55e91f50, 0x65ac3c20, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_72) {
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // -62.41
  s21_decimal dec_2 = {{0x1861, 0x0, 0x0, 0x80020000}};
  // -71.41
  s21_decimal dec_check = {{0x1be5, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_73) {
  // -3.4932
  s21_decimal dec_1 = {{0x8874, 0x0, 0x0, 0x80040000}};
  // -36142147128392111319697
  s21_decimal dec_2 = {{0x64236a91, 0x450c7bf8, 0x7a7, 0x80000000}};
  // -36142147128392111319700.4932
  s21_decimal dec_check = {{0xa7734884, 0x37aa96c7, 0x12af5f9, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_74) {
  // 5557012532920673971
  s21_decimal dec_1 = {{0xd52166b3, 0x4d1e7974, 0x0, 0x0}};
  // 141898697941845987610600
  s21_decimal dec_2 = {{0x6e0cfe8, 0x58052e96, 0x1e0c, 0x0}};
  // 141904254954378908284571
  s21_decimal dec_check = {{0xdc02369b, 0xa523a80a, 0x1e0c, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_75) {
  // -202171850076158
  s21_decimal dec_1 = {{0xcd4eaffe, 0xb7df, 0x0, 0x80000000}};
  // 0.3155
  s21_decimal dec_2 = {{0xc53, 0x0, 0x0, 0x40000}};
  // -202171850076157.6845
  s21_decimal dec_check = {{0xd1baa58d, 0x1c0e9643, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_76) {
  // 964590977.13777724198538836
  s21_decimal dec_1 = {{0xe934ce54, 0x2a347e03, 0x4fca02, 0x110000}};
  // 684360596.1961632927798
  s21_decimal dec_2 = {{0xfc939036, 0xfe1c836c, 0x172, 0xd0000}};
  // 1648951573.33394053476518836
  s21_decimal dec_check = {{0x2d660bb4, 0x64024f4e, 0x8865e8, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_77) {
  // -55470
  s21_decimal dec_1 = {{0xd8ae, 0x0, 0x0, 0x80000000}};
  // -0.520377412949167874
  s21_decimal dec_2 = {{0xfff8cf02, 0x738c07f, 0x0, 0x80120000}};
  // -55470.520377412949167874
  s21_decimal dec_check = {{0x25f0cf02, 0x101c83d8, 0xbbf, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_78) {
  // 3714.256151297343000468272
  s21_decimal dec_1 = {{0xf240db30, 0x3abb4870, 0x31286, 0x150000}};
  // -59535.2012356
  s21_decimal dec_2 = {{0x9dbec644, 0x8a, 0x0, 0x80070000}};
  // -55820.945084302656999531728
  s21_decimal dec_check = {{0x7bb824d0, 0x7f1c92d9, 0x2e2c8b, 0x80150000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_79) {
  // 51497.22081081676
  s21_decimal dec_1 = {{0x1b55b94c, 0x124ba5, 0x0, 0xb0000}};
  // -489.11427864
  s21_decimal dec_2 = {{0x63592918, 0xb, 0x0, 0x80080000}};
  // 51008.10653217676
  s21_decimal dec_check = {{0x70d338c, 0x121f29, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_80) {
  // 519.7
  s21_decimal dec_1 = {{0x144d, 0x0, 0x0, 0x10000}};
  // 35019651230478533
  s21_decimal dec_2 = {{0xefc030c5, 0x7c6a2f, 0x0, 0x0}};
  // 35019651230479052.7
  s21_decimal dec_check = {{0x5d81fbff, 0x4dc25df, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_81) {
  // -389861
  s21_decimal dec_1 = {{0x5f2e5, 0x0, 0x0, 0x80000000}};
  // -13737943660674380661708410
  s21_decimal dec_2 = {{0xfc86d67a, 0x6b09de55, 0xb5d1f, 0x80000000}};
  // -13737943660674380662098271
  s21_decimal dec_check = {{0xfc8cc95f, 0x6b09de55, 0xb5d1f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_82) {
  // 590.18556532
  s21_decimal dec_1 = {{0xbdc7b474, 0xd, 0x0, 0x80000}};
  // -733
  s21_decimal dec_2 = {{0x2dd, 0x0, 0x0, 0x80000000}};
  // -142.81443468
  s21_decimal dec_check = {{0x533d888c, 0x3, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_83) {
  // -164.7424
  s21_decimal dec_1 = {{0x192340, 0x0, 0x0, 0x80040000}};
  // 5184028715141735624
  s21_decimal dec_2 = {{0x7772a4c8, 0x47f15ea6, 0x0, 0x0}};
  // 5184028715141735459.2576
  s21_decimal dec_check = {{0xee2ba140, 0x44814699, 0xafa, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_84) {
  // 4266702466791340271653
  s21_decimal dec_1 = {{0x94c06825, 0x4c643796, 0xe7, 0x0}};
  // 687504563745824931.9
  s21_decimal dec_2 = {{0xeb4c4667, 0x5f691194, 0x0, 0x10000}};
  // 4267389971355086096584.9
  s21_decimal dec_check = {{0xbad057d9, 0x5b533d76, 0x909, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_85) {
  // 79228162514264337591628459243
  s21_decimal dec_1 = {{0x8dd3eceb, 0xffffffff, 0xffffffff, 0x0}};
  // -69991.4453
  s21_decimal dec_2 = {{0x29b7d8d5, 0x0, 0x0, 0x80040000}};
  // 79228162514264337591628389252
  s21_decimal dec_check = {{0x8dd2db84, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_86) {
  // -6029812167604785542581
  s21_decimal dec_1 = {{0x5b6675b5, 0xe0742b1f, 0x146, 0x80000000}};
  // 8566846913476
  s21_decimal dec_2 = {{0x9fddfbc4, 0x7ca, 0x0, 0x0}};
  // -6029812159037938629105
  s21_decimal dec_check = {{0xbb8879f1, 0xe0742354, 0x146, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_87) {
  // -4464.77735639
  s21_decimal dec_1 = {{0xf42596d7, 0x67, 0x0, 0x80080000}};
  // 58023
  s21_decimal dec_2 = {{0xe2a7, 0x0, 0x0, 0x0}};
  // 53558.22264361
  s21_decimal dec_check = {{0xffe23029, 0x4de, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_88) {
  // 64.837307354631912361368939
  s21_decimal dec_1 = {{0x485d1d6b, 0x797f64a3, 0x35a1d5, 0x180000}};
  // -262.00
  s21_decimal dec_2 = {{0x6658, 0x0, 0x0, 0x80020000}};
  // -197.162692645368087638631061
  s21_decimal dec_check = {{0x7da2e295, 0xfc26568f, 0xa316d2, 0x80180000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_89) {
  // -787954411506655879.2966644643
  s21_decimal dec_1 = {{0x860a3a3, 0x6334f3a2, 0x1975ce5e, 0x800a0000}};
  // 35582684811651623491314
  s21_decimal dec_2 = {{0x9e4916f2, 0xf0f30f0d, 0x788, 0x0}};
  // 35581896857240116835434.703336
  s21_decimal dec_check = {{0x37129e8, 0xb0518496, 0x72f8a7bd, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_90) {
  // -875738411036761286243
  s21_decimal dec_1 = {{0x1b2e6663, 0x794fd4fa, 0x2f, 0x80000000}};
  // -71883705952761245094405094
  s21_decimal dec_2 = {{0x74e063e6, 0x820d3f74, 0x3b75f7, 0x80000000}};
  // -71884581691172281855691337
  s21_decimal dec_check = {{0x900eca49, 0xfb5d146e, 0x3b7626, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_91) {
  // -536.2941622322
  s21_decimal dec_1 = {{0xa83af832, 0x4e0, 0x0, 0x800a0000}};
  // 6486221325283
  s21_decimal dec_2 = {{0x30eb03e3, 0x5e6, 0x0, 0x0}};
  // 6486221324746.7058377678
  s21_decimal dec_check = {{0x4dfc33ce, 0x30083dd6, 0xdbc, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_92) {
  // 5381472485471
  s21_decimal dec_1 = {{0xf8c1805f, 0x4e4, 0x0, 0x0}};
  // -0.40849
  s21_decimal dec_2 = {{0x9f91, 0x0, 0x0, 0x80050000}};
  // 5381472485470.59151
  s21_decimal dec_check = {{0x428055cf, 0x777e212, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_93) {
  // -90115190.783
  s21_decimal dec_1 = {{0xfb48afff, 0x14, 0x0, 0x80030000}};
  // -8333670
  s21_decimal dec_2 = {{0x7f2966, 0x0, 0x0, 0x80000000}};
  // -98448860.783
  s21_decimal dec_check = {{0xec02666f, 0x16, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_94) {
  // -8415746725878137839411325
  s21_decimal dec_1 = {{0xc2ebe07d, 0x8b4e5908, 0x6f61a, 0x80000000}};
  // 567837795379398119195200214
  s21_decimal dec_2 = {{0x96c0cad6, 0x91884ebd, 0x1d5b454, 0x0}};
  // 559422048653519981355788889
  s21_decimal dec_check = {{0xd3d4ea59, 0x639f5b4, 0x1cebe3a, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_95) {
  // -181.8867
  s21_decimal dec_1 = {{0x1bc0f3, 0x0, 0x0, 0x80040000}};
  // 56245416.945
  s21_decimal dec_2 = {{0x187cf3f1, 0xd, 0x0, 0x30000}};
  // 56245235.0583
  s21_decimal dec_check = {{0xf4c5c677, 0x82, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_96) {
  // 5.0939
  s21_decimal dec_1 = {{0xc6fb, 0x0, 0x0, 0x40000}};
  // -78.28339379366648507975054
  s21_decimal dec_2 = {{0x11dec58e, 0x20cb5e57, 0x679b7, 0x80170000}};
  // -73.18949379366648507975054
  s21_decimal dec_check = {{0x6b66c58e, 0xa76863a, 0x60dd9, 0x80170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_97) {
  // -9.7660266725674
  s21_decimal dec_1 = {{0x4d81c12a, 0x58d2, 0x0, 0x800d0000}};
  // 48789733
  s21_decimal dec_2 = {{0x2e878e5, 0x0, 0x0, 0x0}};
  // 48789723.2339733274326
  s21_decimal dec_check = {{0x9a075ed6, 0x72ef2bd2, 0x1a, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_98) {
  // -106174.07504080
  s21_decimal dec_1 = {{0xecd7ed0, 0x9a8, 0x0, 0x80080000}};
  // -368365391647510100202.894926
  s21_decimal dec_2 = {{0xeaee364e, 0xe506d01b, 0x130b467, 0x80060000}};
  // -368365391647510206376.96996680
  s21_decimal dec_check = {{0xd3dab548, 0x76a9548f, 0x77067895, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_99) {
  // 7693256.83
  s21_decimal dec_1 = {{0x2ddafa73, 0x0, 0x0, 0x20000}};
  // -1.0983114066265436
  s21_decimal dec_2 = {{0x8472855c, 0x270515, 0x0, 0x80100000}};
  // 7693255.7316885933734564
  s21_decimal dec_check = {{0xc4f83aa4, 0x85b4b98c, 0x104a, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_100) {
  // -4746.4064334
  s21_decimal dec_1 = {{0xd14254e, 0xb, 0x0, 0x80070000}};
  // 29495923
  s21_decimal dec_2 = {{0x1c21273, 0x0, 0x0, 0x0}};
  // 29491176.5935666
  s21_decimal dec_check = {{0x7f0c7632, 0x10c38, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_101) {
  // -635360.089575806874286
  s21_decimal dec_1 = {{0xea5632ae, 0x71647b2f, 0x22, 0x800f0000}};
  // 547084430
  s21_decimal dec_2 = {{0x209bd88e, 0x0, 0x0, 0x0}};
  // 546449069.910424193125714
  s21_decimal dec_check = {{0x77c4cd52, 0x103d7046, 0x73b7, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_102) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // 69063252570
  s21_decimal dec_2 = {{0x147d9a5a, 0x10, 0x0, 0x0}};
  // 69063252567
  s21_decimal dec_check = {{0x147d9a57, 0x10, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_103) {
  // 526727099.6160641
  s21_decimal dec_1 = {{0x18a97081, 0x12b68e, 0x0, 0x70000}};
  // -824
  s21_decimal dec_2 = {{0x338, 0x0, 0x0, 0x80000000}};
  // 526726275.6160641
  s21_decimal dec_check = {{0x2d850481, 0x12b68c, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_104) {
  // 77193943532
  s21_decimal dec_1 = {{0xf91e19ec, 0x11, 0x0, 0x0}};
  // -98609246370060261271089909
  s21_decimal dec_2 = {{0xe94532f5, 0xf5031f29, 0x519151, 0x80000000}};
  // -98609246370060184077146377
  s21_decimal dec_check = {{0xf0271909, 0xf5031f17, 0x519151, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_105) {
  // -6306204210831212822223121489
  s21_decimal dec_1 = {{0x2e3ec51, 0x46a95e2d, 0x14605eaf, 0x80000000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -6306204210831212822223121489
  s21_decimal dec_check = {{0x2e3ec51, 0x46a95e2d, 0x14605eaf, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_106) {
  // 7503708643899312046276026263
  s21_decimal dec_1 = {{0x662f1f97, 0xabb2a495, 0x183eec1c, 0x0}};
  // 8394362.729476570407276
  s21_decimal dec_2 = {{0x1572e16c, 0xf2f4b38, 0x1c7, 0xf0000}};
  // 7503708643899312046284420625.7
  s21_decimal dec_check = {{0x2d81cb1, 0xb4fa6dd6, 0xf275391e, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_107) {
  // -253.975736
  s21_decimal dec_1 = {{0xf235cb8, 0x0, 0x0, 0x80060000}};
  // -8971635869880079
  s21_decimal dec_2 = {{0xc1140f0f, 0x1fdfa7, 0x0, 0x80000000}};
  // -8971635869880332.975736
  s21_decimal dec_check = {{0x61e9fe78, 0x5a7579e4, 0x1e6, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_108) {
  // -4176700110428956
  s21_decimal dec_1 = {{0xc66a5b1c, 0xed6af, 0x0, 0x80000000}};
  // -61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x80000000}};
  // -4176700110429017
  s21_decimal dec_check = {{0xc66a5b59, 0xed6af, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_109) {
  // 22734705468450
  s21_decimal dec_1 = {{0x560b2422, 0x14ad, 0x0, 0x0}};
  // -795449.412
  s21_decimal dec_2 = {{0x2f699844, 0x0, 0x0, 0x80030000}};
  // 22734704673000.588
  s21_decimal dec_check = {{0xec1b8c8c, 0x50c517, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_110) {
  // 41.72
  s21_decimal dec_1 = {{0x104c, 0x0, 0x0, 0x20000}};
  // 3702141159212589377929509.8283
  s21_decimal dec_2 = {{0xe970d5ab, 0xd5491824, 0x779f64d7, 0x40000}};
  // 3702141159212589377929551.5483
  s21_decimal dec_check = {{0xe977335b, 0xd5491824, 0x779f64d7, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_111) {
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // 884885416190875.4061774
  s21_decimal dec_2 = {{0x703499ce, 0xb2853904, 0x1df, 0x70000}};
  // 884885416190871.4061774
  s21_decimal dec_check = {{0x6dd23fce, 0xb2853904, 0x1df, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_112) {
  // -174622953192213
  s21_decimal dec_1 = {{0x93183b15, 0x9ed1, 0x0, 0x80000000}};
  // 4320149069916401868
  s21_decimal dec_2 = {{0xa119f0cc, 0x3bf440b0, 0x0, 0x0}};
  // 4319974446963209655
  s21_decimal dec_check = {{0xe01b5b7, 0x3bf3a1df, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_113) {
  // 0.58
  s21_decimal dec_1 = {{0x3a, 0x0, 0x0, 0x20000}};
  // 13857106
  s21_decimal dec_2 = {{0xd37152, 0x0, 0x0, 0x0}};
  // 13857106.58
  s21_decimal dec_check = {{0x52984442, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_114) {
  // -15759558819914
  s21_decimal dec_1 = {{0x4ee7c04a, 0xe55, 0x0, 0x80000000}};
  // -70438436762.7
  s21_decimal dec_2 = {{0x947c0b, 0xa4, 0x0, 0x80010000}};
  // -15829997256676.7
  s21_decimal dec_check = {{0x15a1feef, 0x8ff9, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_115) {
  // -9972983.6
  s21_decimal dec_1 = {{0x5f1c1ac, 0x0, 0x0, 0x80010000}};
  // -75408
  s21_decimal dec_2 = {{0x12690, 0x0, 0x0, 0x80000000}};
  // -10048391.6
  s21_decimal dec_check = {{0x5fd434c, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_116) {
  // 4131748
  s21_decimal dec_1 = {{0x3f0ba4, 0x0, 0x0, 0x0}};
  // -37977445014991
  s21_decimal dec_2 = {{0x501e9dcf, 0x228a, 0x0, 0x80000000}};
  // -37977440883243
  s21_decimal dec_check = {{0x4fdf922b, 0x228a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_117) {
  // 10181775416664501
  s21_decimal dec_1 = {{0x52e4a1b5, 0x242c45, 0x0, 0x0}};
  // -707049418328395782667.48
  s21_decimal dec_2 = {{0x739c2c7c, 0xec2e0221, 0xef8, 0x80020000}};
  // -707039236552979118166.48
  s21_decimal dec_check = {{0x124d01c8, 0xde0cb70d, 0xef8, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_118) {
  // -876424818084755711
  s21_decimal dec_1 = {{0x824738ff, 0xc29afba, 0x0, 0x80000000}};
  // -705
  s21_decimal dec_2 = {{0x2c1, 0x0, 0x0, 0x80000000}};
  // -876424818084756416
  s21_decimal dec_check = {{0x82473bc0, 0xc29afba, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_119) {
  // 549
  s21_decimal dec_1 = {{0x225, 0x0, 0x0, 0x0}};
  // 710.67060228321381162084169
  s21_decimal dec_2 = {{0x491ae749, 0xdf94be2, 0x3ac909, 0x170000}};
  // 1259.67060228321381162084169
  s21_decimal dec_check = {{0xe99ae749, 0x49f71a4, 0x683290, 0x170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_120) {
  // 35.6860788714
  s21_decimal dec_1 = {{0x168f7fea, 0x53, 0x0, 0xa0000}};
  // -78349924528322012973176
  s21_decimal dec_2 = {{0x52730878, 0x5ba09ad1, 0x1097, 0x80000000}};
  // -78349924528322012973140.313921
  s21_decimal dec_check = {{0xc1d88741, 0x62548053, 0xfd2989df, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_121) {
  // -8270527223
  s21_decimal dec_1 = {{0xecf63af7, 0x1, 0x0, 0x80000000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -8270527230
  s21_decimal dec_check = {{0xecf63afe, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_122) {
  // -88773783.144779
  s21_decimal dec_1 = {{0x41cf494b, 0x50bd, 0x0, 0x80060000}};
  // 1000.394070671118506
  s21_decimal dec_2 = {{0x61c250aa, 0xde21d1b, 0x0, 0xf0000}};
  // -88772782.750708328881494
  s21_decimal dec_check = {{0x8e30dd56, 0x61d79568, 0x12cc, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_123) {
  // -366092
  s21_decimal dec_1 = {{0x5960c, 0x0, 0x0, 0x80000000}};
  // 13231
  s21_decimal dec_2 = {{0x33af, 0x0, 0x0, 0x0}};
  // -352861
  s21_decimal dec_check = {{0x5625d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_124) {
  // 7.02254479353
  s21_decimal dec_1 = {{0x81a0f7f9, 0xa3, 0x0, 0xb0000}};
  // 71175131201551278688
  s21_decimal dec_2 = {{0xce492260, 0xdbc0dcb9, 0x3, 0x0}};
  // 71175131201551278695.022544794
  s21_decimal dec_check = {{0x2573479a, 0xc87b8fb2, 0xe5fab049, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_125) {
  // -282923229277263008096734846
  s21_decimal dec_1 = {{0x644a4e7e, 0xfdcfbe1e, 0xea0752, 0x80000000}};
  // 4420355.479507
  s21_decimal dec_2 = {{0x31b7d7d3, 0x405, 0x0, 0x60000}};
  // -282923229277263008092314490.52
  s21_decimal dec_check = {{0x12adbbdc, 0x252643df, 0x5b6adc6b, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_126) {
  // 6877188446214.7107419
  s21_decimal dec_1 = {{0x9c7bfa5b, 0xba66d08c, 0x3, 0x70000}};
  // -30995888440106291960
  s21_decimal dec_2 = {{0x222c12f8, 0xae278450, 0x1, 0x80000000}};
  // -30995881562917845745.2892581
  s21_decimal dec_check = {{0x8fead1a5, 0x107695b5, 0x1006455, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_127) {
  // -256716559
  s21_decimal dec_1 = {{0xf4d2f0f, 0x0, 0x0, 0x80000000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // -256716557
  s21_decimal dec_check = {{0xf4d2f0d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_128) {
  // 4556765898
  s21_decimal dec_1 = {{0xf9abaca, 0x1, 0x0, 0x0}};
  // -56
  s21_decimal dec_2 = {{0x38, 0x0, 0x0, 0x80000000}};
  // 4556765842
  s21_decimal dec_check = {{0xf9aba92, 0x1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_129) {
  // 51631133831014709007
  s21_decimal dec_1 = {{0x7448f70f, 0xcc86a2aa, 0x2, 0x0}};
  // -428109729476378364
  s21_decimal dec_2 = {{0xde53fefc, 0x5f0f387, 0x0, 0x80000000}};
  // 51203024101538330643
  s21_decimal dec_check = {{0x95f4f813, 0xc695af22, 0x2, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_130) {
  // 0.38174
  s21_decimal dec_1 = {{0x951e, 0x0, 0x0, 0x50000}};
  // -6581567924793069492
  s21_decimal dec_2 = {{0x2e654fb4, 0x5b566d28, 0x0, 0x80000000}};
  // -6581567924793069491.61826
  s21_decimal dec_check = {{0x56bd7362, 0xc04f6fcb, 0x8b5e, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_131) {
  // 2116755104406598912077015536
  s21_decimal dec_1 = {{0xbee929f0, 0x24101b40, 0x6d6f054, 0x0}};
  // -3778688186337527154905459
  s21_decimal dec_2 = {{0xb4649173, 0x18d785ef, 0x3202b, 0x80000000}};
  // 2112976416220261384922110077
  s21_decimal dec_check = {{0xa84987d, 0xb389551, 0x6d3d029, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_132) {
  // -6260.674415728
  s21_decimal dec_1 = {{0xad464c70, 0x5b1, 0x0, 0x80090000}};
  // 66553165752526
  s21_decimal dec_2 = {{0x9dcda8ce, 0x3c87, 0x0, 0x0}};
  // 66553165746265.325584272
  s21_decimal dec_check = {{0x9fd83f90, 0xdab65071, 0xe17, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_133) {
  // 0.4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x10000}};
  // 469125950.8329702260
  s21_decimal dec_2 = {{0xdf2a6374, 0x411ab3aa, 0x0, 0xa0000}};
  // 469125951.2329702260
  s21_decimal dec_check = {{0xcd958b74, 0x411ab3ab, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_134) {
  // -2336302749968
  s21_decimal dec_1 = {{0xf67ed910, 0x21f, 0x0, 0x80000000}};
  // -59637
  s21_decimal dec_2 = {{0xe8f5, 0x0, 0x0, 0x80000000}};
  // -2336302809605
  s21_decimal dec_check = {{0xf67fc205, 0x21f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_135) {
  // 5590951978510420586
  s21_decimal dec_1 = {{0xcb618a6a, 0x4d970d33, 0x0, 0x0}};
  // 6114794.25114802
  s21_decimal dec_2 = {{0x25ebe2b2, 0x22c23, 0x0, 0x80000}};
  // 5590951978516535380.25114802
  s21_decimal dec_check = {{0x6a050cb2, 0x68273df1, 0x1ce7903, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_136) {
  // 154
  s21_decimal dec_1 = {{0x9a, 0x0, 0x0, 0x0}};
  // -95.254577426514242489371929839
  s21_decimal dec_2 = {{0xf4752cef, 0x40329120, 0x33c8bd5d, 0x801b0000}};
  // 58.745422573485757510628070161
  s21_decimal dec_check = {{0xa9277b82, 0x7d1f7526, 0x2c94e84f, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_137) {
  // -42226991784
  s21_decimal dec_1 = {{0xd4ecc2a8, 0x9, 0x0, 0x80000000}};
  // 36293897764705255
  s21_decimal dec_2 = {{0x93c793e7, 0x80f11b, 0x0, 0x0}};
  // 36293855537713471
  s21_decimal dec_check = {{0xbedad13f, 0x80f111, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_138) {
  // 981
  s21_decimal dec_1 = {{0x3d5, 0x0, 0x0, 0x0}};
  // 8.411992218
  s21_decimal dec_2 = {{0xf564d09a, 0x1, 0x0, 0x90000}};
  // 989.411992218
  s21_decimal dec_check = {{0x5d8ce29a, 0xe6, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_139) {
  // 53687036017651407.785105707
  s21_decimal dec_1 = {{0xf141192b, 0xde22a52, 0x2c68ac, 0x90000}};
  // -1284514764366625632592950784
  s21_decimal dec_2 = {{0x13f17600, 0xe7e2835e, 0x4268694, 0x80000000}};
  // -1284514764312938596575299376.2
  s21_decimal dec_check = {{0x42acc7e2, 0x765c8ed, 0x298141d1, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_140) {
  // -1975
  s21_decimal dec_1 = {{0x7b7, 0x0, 0x0, 0x80000000}};
  // -982269791609196644264
  s21_decimal dec_2 = {{0x1f2407a8, 0x3fbb532e, 0x35, 0x80000000}};
  // -982269791609196646239
  s21_decimal dec_check = {{0x1f240f5f, 0x3fbb532e, 0x35, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_141) {
  // 8168392196
  s21_decimal dec_1 = {{0xe6dfc604, 0x1, 0x0, 0x0}};
  // -47038.8934036
  s21_decimal dec_2 = {{0x855d8594, 0x6d, 0x0, 0x80070000}};
  // 8168345157.1065964
  s21_decimal dec_check = {{0x9aebd46c, 0x12232aa, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_142) {
  // -19041837584854
  s21_decimal dec_1 = {{0x85f711d6, 0x1151, 0x0, 0x80000000}};
  // -43263482.60796
  s21_decimal dec_2 = {{0x4e7385bc, 0x3ef, 0x0, 0x80050000}};
  // -19041880848336.60796
  s21_decimal dec_check = {{0x6e0aaf7c, 0x1a6d08f9, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_143) {
  // -94.046782
  s21_decimal dec_1 = {{0x59b0a3e, 0x0, 0x0, 0x80060000}};
  // 6454924
  s21_decimal dec_2 = {{0x627e8c, 0x0, 0x0, 0x0}};
  // 6454829.953218
  s21_decimal dec_check = {{0xe1d8b0c2, 0x5de, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_144) {
  // 24880
  s21_decimal dec_1 = {{0x6130, 0x0, 0x0, 0x0}};
  // -9256365
  s21_decimal dec_2 = {{0x8d3dad, 0x0, 0x0, 0x80000000}};
  // -9231485
  s21_decimal dec_check = {{0x8cdc7d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_145) {
  // -8.632632
  s21_decimal dec_1 = {{0x83b938, 0x0, 0x0, 0x80060000}};
  // 18604641.8
  s21_decimal dec_2 = {{0xb16d7d2, 0x0, 0x0, 0x10000}};
  // 18604633.167368
  s21_decimal dec_check = {{0xba8d1608, 0x10eb, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_146) {
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -728374541120
  s21_decimal dec_2 = {{0x96817b40, 0xa9, 0x0, 0x80000000}};
  // -728374541118
  s21_decimal dec_check = {{0x96817b3e, 0xa9, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_147) {
  // 792.4
  s21_decimal dec_1 = {{0x1ef4, 0x0, 0x0, 0x10000}};
  // -17796944530685302
  s21_decimal dec_2 = {{0xcd6bd76, 0x3f3a3a, 0x0, 0x80000000}};
  // -17796944530684509.6
  s21_decimal dec_check = {{0x806347a8, 0x2784644, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_148) {
  // -1620633243
  s21_decimal dec_1 = {{0x6098e69b, 0x0, 0x0, 0x80000000}};
  // 682329283425145420
  s21_decimal dec_2 = {{0x3e67124c, 0x9781ede, 0x0, 0x0}};
  // 682329281804512177
  s21_decimal dec_check = {{0xddce2bb1, 0x9781edd, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_149) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // -17444
  s21_decimal dec_2 = {{0x4424, 0x0, 0x0, 0x80000000}};
  // -17444
  s21_decimal dec_check = {{0x4424, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_150) {
  // 0.9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x10000}};
  // 521.878
  s21_decimal dec_2 = {{0x7f696, 0x0, 0x0, 0x30000}};
  // 522.778
  s21_decimal dec_check = {{0x7fa1a, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_151) {
  // -21881766764113601844066445
  s21_decimal dec_1 = {{0xf4cdb88d, 0xf4033045, 0x1219a4, 0x80000000}};
  // -4256454345
  s21_decimal dec_2 = {{0xfdb456c9, 0x0, 0x0, 0x80000000}};
  // -21881766764113606100520790
  s21_decimal dec_check = {{0xf2820f56, 0xf4033046, 0x1219a4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_152) {
  // 9652977442234262372822653535
  s21_decimal dec_1 = {{0xe39d9a5f, 0xb0f25612, 0x1f30c17b, 0x0}};
  // 8487993356502934463970902
  s21_decimal dec_2 = {{0x875ffe56, 0xab7373b, 0x70567, 0x0}};
  // 9661465435590765307286624437
  s21_decimal dec_check = {{0x6afd98b5, 0xbba98d4e, 0x1f37c6e2, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_153) {
  // 8.5
  s21_decimal dec_1 = {{0x55, 0x0, 0x0, 0x10000}};
  // -37956888.550966423293265020
  s21_decimal dec_2 = {{0x3cf0047c, 0xd27b97b, 0x1f65af, 0x80120000}};
  // -37956880.050966423293265020
  s21_decimal dec_check = {{0x2e1e047c, 0x9731a884, 0x1f65ae, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_154) {
  // -193.52
  s21_decimal dec_1 = {{0x4b98, 0x0, 0x0, 0x80020000}};
  // 6584887384.6754
  s21_decimal dec_2 = {{0xa2bc07e2, 0x3be3, 0x0, 0x40000}};
  // 6584887191.1554
  s21_decimal dec_check = {{0xa29e8082, 0x3be3, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_155) {
  // -2845469.576347
  s21_decimal dec_1 = {{0x83340c9b, 0x296, 0x0, 0x80060000}};
  // 6659627342716556107848867557
  s21_decimal dec_2 = {{0x926fdee5, 0xa556f0c0, 0x1584b6f1, 0x0}};
  // 6659627342716556107846022087.4
  s21_decimal dec_check = {{0xb6ac85ca, 0x75656785, 0xd72f2570, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_156) {
  // 47.3
  s21_decimal dec_1 = {{0x1d9, 0x0, 0x0, 0x10000}};
  // 5291.91054920219
  s21_decimal dec_2 = {{0xe4d8ca1b, 0x1e14b, 0x0, 0xb0000}};
  // 5339.21054920219
  s21_decimal dec_check = {{0x2ed10e1b, 0x1e599, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_157) {
  // -2.3846
  s21_decimal dec_1 = {{0x5d26, 0x0, 0x0, 0x80040000}};
  // 448618075603
  s21_decimal dec_2 = {{0x73b895d3, 0x68, 0x0, 0x0}};
  // 448618075600.6154
  s21_decimal dec_check = {{0x5a5c250a, 0xff028, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_158) {
  // -96503366107297982
  s21_decimal dec_1 = {{0xd87478be, 0x156d94c, 0x0, 0x80000000}};
  // 28933878318.061870568
  s21_decimal dec_2 = {{0x32745de8, 0x9189c908, 0x1, 0x90000}};
  // -96503337173419663.938129432
  s21_decimal dec_check = {{0x211d8e18, 0x6409e7a8, 0x4fd360, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_159) {
  // -887135687405859770
  s21_decimal dec_1 = {{0x1b65f3ba, 0xc4fbd35, 0x0, 0x80000000}};
  // -67783.986030415
  s21_decimal dec_2 = {{0x3068a74f, 0x3da6, 0x0, 0x80090000}};
  // -887135687405927553.986030415
  s21_decimal dec_check = {{0x1e9d6b4f, 0xfa8f1fc5, 0x2ddd249, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_160) {
  // -52468776129.14255170855874644
  s21_decimal dec_1 = {{0xf81db054, 0x5598981c, 0x10f41d8d, 0x80110000}};
  // -48601943256988382
  s21_decimal dec_2 = {{0xbb39fade, 0xacab35, 0x0, 0x80000000}};
  // -48601995725764511.142551708559
  s21_decimal dec_check = {{0x35b3638f, 0xa6770ef9, 0x9d0aa0eb, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_161) {
  // 4.56
  s21_decimal dec_1 = {{0x1c8, 0x0, 0x0, 0x20000}};
  // -7.7498002017
  s21_decimal dec_2 = {{0xb3daa61, 0x12, 0x0, 0x800a0000}};
  // -3.1898002017
  s21_decimal dec_check = {{0x6d44e261, 0x7, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_162) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // -5561497974736099
  s21_decimal dec_2 = {{0x273404e3, 0x13c227, 0x0, 0x80000000}};
  // -5561497974736099
  s21_decimal dec_check = {{0x273404e3, 0x13c227, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_163) {
  // 292126
  s21_decimal dec_1 = {{0x4751e, 0x0, 0x0, 0x0}};
  // -93239961856047.723
  s21_decimal dec_2 = {{0x554cfa6b, 0x14b4140, 0x0, 0x80030000}};
  // -93239961563921.723
  s21_decimal dec_check = {{0x43e37d3b, 0x14b4140, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_164) {
  // -38578037
  s21_decimal dec_1 = {{0x24ca775, 0x0, 0x0, 0x80000000}};
  // -7629.65
  s21_decimal dec_2 = {{0xba455, 0x0, 0x0, 0x80020000}};
  // -38585666.65
  s21_decimal dec_check = {{0xe5fd0e09, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_165) {
  // 64664063
  s21_decimal dec_1 = {{0x3dab1ff, 0x0, 0x0, 0x0}};
  // 879181887732240348.278116693
  s21_decimal dec_2 = {{0xcaef5155, 0xa26bfa02, 0x2d73e01, 0x90000}};
  // 879181887796904411.278116693
  s21_decimal dec_check = {{0x33c88755, 0xa351b5a2, 0x2d73e01, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_166) {
  // 549993179
  s21_decimal dec_1 = {{0x20c83adb, 0x0, 0x0, 0x0}};
  // -871787723551574354
  s21_decimal dec_2 = {{0xcdd68952, 0xc193650, 0x0, 0x80000000}};
  // -871787723001581175
  s21_decimal dec_check = {{0xad0e4e77, 0xc193650, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_167) {
  // 73419.70
  s21_decimal dec_1 = {{0x700792, 0x0, 0x0, 0x20000}};
  // -69861734535991
  s21_decimal dec_2 = {{0xf3ded337, 0x3f89, 0x0, 0x80000000}};
  // -69861734462571.30
  s21_decimal dec_check = {{0x429a79ea, 0x18d1e3, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_168) {
  // 0.732960745
  s21_decimal dec_1 = {{0x2bb017e9, 0x0, 0x0, 0x90000}};
  // -804552103887564485962331
  s21_decimal dec_2 = {{0x9fe42a5b, 0xdb60ca00, 0xaa5e, 0x80000000}};
  // -804552103887564485962330.26704
  s21_decimal dec_check = {{0xc0b6660e, 0x74d2b865, 0x19ff1959, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_169) {
  // -0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80010000}};
  // 162879409035.52743549101
  s21_decimal dec_2 = {{0x604aa8ad, 0xf8967292, 0x372, 0xb0000}};
  // 162879409034.82743549101
  s21_decimal dec_check = {{0x13f76cad, 0xf8967282, 0x372, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_170) {
  // 1047510361411072958
  s21_decimal dec_1 = {{0xae72b3be, 0xe89811f, 0x0, 0x0}};
  // -58673524
  s21_decimal dec_2 = {{0x37f4974, 0x0, 0x0, 0x80000000}};
  // 1047510361352399434
  s21_decimal dec_check = {{0xaaf36a4a, 0xe89811f, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_171) {
  // -491.47394934
  s21_decimal dec_1 = {{0x7169bb76, 0xb, 0x0, 0x80080000}};
  // -5529.284
  s21_decimal dec_2 = {{0x545ec4, 0x0, 0x0, 0x80030000}};
  // -6020.75794934
  s21_decimal dec_check = {{0x2e838df6, 0x8c, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_172) {
  // 15047449
  s21_decimal dec_1 = {{0xe59b19, 0x0, 0x0, 0x0}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // 15047455
  s21_decimal dec_check = {{0xe59b1f, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_173) {
  // 8.9951029773102
  s21_decimal dec_1 = {{0x5b2d432e, 0x51cf, 0x0, 0xd0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 0.9951029773102
  s21_decimal dec_check = {{0xe798432e, 0x90c, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_174) {
  // -788139724218324578963188136
  s21_decimal dec_1 = {{0x1a8669a8, 0xf9c7f05, 0x28bef14, 0x80000000}};
  // -388767043755055096552
  s21_decimal dec_2 = {{0xe6cda2e8, 0x1339fe84, 0x15, 0x80000000}};
  // -788140112985368334018284688
  s21_decimal dec_check = {{0x1540c90, 0x22d67d8a, 0x28bef29, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_175) {
  // 742
  s21_decimal dec_1 = {{0x2e6, 0x0, 0x0, 0x0}};
  // 857973088243
  s21_decimal dec_2 = {{0xc32e5ff3, 0xc7, 0x0, 0x0}};
  // 857973088985
  s21_decimal dec_check = {{0xc32e62d9, 0xc7, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_176) {
  // -0.68022014175
  s21_decimal dec_1 = {{0xd66d90df, 0xf, 0x0, 0x800b0000}};
  // 0.1778289419
  s21_decimal dec_2 = {{0x69fe8b0b, 0x0, 0x0, 0xa0000}};
  // -0.50239119985
  s21_decimal dec_check = {{0xb27c2271, 0xb, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_177) {
  // -1426665651156049517561671
  s21_decimal dec_1 = {{0xadb4747, 0xb32defda, 0x12e1b, 0x80000000}};
  // 769234106119120286.3766569665
  s21_decimal dec_2 = {{0xd0cc02c1, 0x808cbf5f, 0x18daf494, 0xa0000}};
  // -1426664881921943398441384.6233
  s21_decimal dec_check = {{0xd88ecad9, 0x31bbe5e5, 0x2e191866, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_178) {
  // 72248064389148292512
  s21_decimal dec_1 = {{0x78bbb5a0, 0xeaa4afc6, 0x3, 0x0}};
  // -6092.9953
  s21_decimal dec_2 = {{0x3a1b7a1, 0x0, 0x0, 0x80040000}};
  // 72248064389148286419.0047
  s21_decimal dec_check = {{0x20c5025f, 0xc11238cc, 0x98fd, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_179) {
  // 53040562967468838378
  s21_decimal dec_1 = {{0x7ab80dea, 0xe015eeff, 0x2, 0x0}};
  // -8484857586444189043175130499
  s21_decimal dec_2 = {{0xe81b0583, 0x6c327963, 0x1b6a827b, 0x80000000}};
  // -8484857533403626075706292121
  s21_decimal dec_check = {{0x6d62f799, 0x8c1c8a64, 0x1b6a8278, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_180) {
  // -858.00396984976
  s21_decimal dec_1 = {{0xf62f1290, 0x4e08, 0x0, 0x800b0000}};
  // -78302003337
  s21_decimal dec_2 = {{0x3b29c089, 0x12, 0x0, 0x80000000}};
  // -78302004195.00396984976
  s21_decimal dec_check = {{0x13d13a90, 0x79dc235b, 0x1a8, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_181) {
  // 674312642837202.420
  s21_decimal dec_1 = {{0xa7ddc5f4, 0x95ba3c6, 0x0, 0x30000}};
  // -46502883
  s21_decimal dec_2 = {{0x2c593e3, 0x0, 0x0, 0x80000000}};
  // 674312596334319.420
  s21_decimal dec_check = {{0xd414173c, 0x95ba3bb, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_182) {
  // -39502
  s21_decimal dec_1 = {{0x9a4e, 0x0, 0x0, 0x80000000}};
  // 0.24720
  s21_decimal dec_2 = {{0x6090, 0x0, 0x0, 0x50000}};
  // -39501.75280
  s21_decimal dec_check = {{0xeb72e430, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_183) {
  // -96
  s21_decimal dec_1 = {{0x60, 0x0, 0x0, 0x80000000}};
  // 26262298021093765604281913
  s21_decimal dec_2 = {{0x11f98e39, 0x7484670, 0x15b942, 0x0}};
  // 26262298021093765604281817
  s21_decimal dec_check = {{0x11f98dd9, 0x7484670, 0x15b942, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_184) {
  // 5234851275427342607440125
  s21_decimal dec_1 = {{0x8a37d8fd, 0xdb34b26c, 0x45485, 0x0}};
  // 48761263965570014614
  s21_decimal dec_2 = {{0x7adb1d96, 0xa4b2cf3a, 0x2, 0x0}};
  // 5234900036691308177454739
  s21_decimal dec_check = {{0x512f693, 0x7fe781a7, 0x45488, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_185) {
  // 42765826001215306877950460015
  s21_decimal dec_1 = {{0x1e93806f, 0xeec7bfb3, 0x8a2f0fe8, 0x0}};
  // 7449818334504
  s21_decimal dec_2 = {{0x8bc68528, 0x6c6, 0x0, 0x0}};
  // 42765826001215314327768794519
  s21_decimal dec_check = {{0xaa5a0597, 0xeec7c679, 0x8a2f0fe8, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_186) {
  // 74.429935539779
  s21_decimal dec_1 = {{0x91de5643, 0x43b1, 0x0, 0xc0000}};
  // -7773.21311607376072
  s21_decimal dec_2 = {{0x4eb2c8c8, 0xac9999d, 0x0, 0x800e0000}};
  // -7698.78318053398172
  s21_decimal dec_check = {{0x53d9169c, 0xaaf2840, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_187) {
  // -21075
  s21_decimal dec_1 = {{0x5253, 0x0, 0x0, 0x80000000}};
  // -13143539804687605213213140
  s21_decimal dec_2 = {{0x7d0b1d4, 0xb873f8f7, 0xadf40, 0x80000000}};
  // -13143539804687605213234215
  s21_decimal dec_check = {{0x7d10427, 0xb873f8f7, 0xadf40, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_188) {
  // 7389098
  s21_decimal dec_1 = {{0x70bfaa, 0x0, 0x0, 0x0}};
  // 6595357379426441
  s21_decimal dec_2 = {{0x4dc47889, 0x176e71, 0x0, 0x0}};
  // 6595357386815539
  s21_decimal dec_check = {{0x4e353833, 0x176e71, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_189) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 599497508140059914178611
  s21_decimal dec_2 = {{0x18d89033, 0xd3359375, 0x7ef2, 0x0}};
  // 599497508140059914178604
  s21_decimal dec_check = {{0x18d8902c, 0xd3359375, 0x7ef2, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_190) {
  // -17194668051541.229564196224
  s21_decimal dec_1 = {{0xd6a5f580, 0xd2a524fc, 0xe391c, 0x800c0000}};
  // 58.97927297376718863
  s21_decimal dec_2 = {{0xdf38100f, 0x51d9a5a0, 0x0, 0x110000}};
  // -17194668051482.250291222456811
  s21_decimal dec_check = {{0x6190a9eb, 0xd446f250, 0x378f1896, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_191) {
  // 6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x0}};
  // -7777690.4860132658703238
  s21_decimal dec_2 = {{0x77c8eb86, 0x4b61ca96, 0x1078, 0x80100000}};
  // -7777684.4860132658703238
  s21_decimal dec_check = {{0xd942eb86, 0x4a8ca0e7, 0x1078, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_192) {
  // 12203103638813921477117
  s21_decimal dec_1 = {{0xec8781fd, 0x881538af, 0x295, 0x0}};
  // 323.247478
  s21_decimal dec_2 = {{0x13445d76, 0x0, 0x0, 0x60000}};
  // 12203103638813921477440.247478
  s21_decimal dec_check = {{0xc27b16b6, 0xd03a62e6, 0x276e2bb5, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_193) {
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 47450463701489110
  s21_decimal dec_2 = {{0x15ad5d6, 0xa893f2, 0x0, 0x0}};
  // 47450463701489104
  s21_decimal dec_check = {{0x15ad5d0, 0xa893f2, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_194) {
  // -9283.31227915
  s21_decimal dec_1 = {{0x24da630b, 0xd8, 0x0, 0x80080000}};
  // -8686
  s21_decimal dec_2 = {{0x21ee, 0x0, 0x0, 0x80000000}};
  // -17969.31227915
  s21_decimal dec_check = {{0x6172910b, 0x1a2, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_195) {
  // 921367625070
  s21_decimal dec_1 = {{0x85ca3d6e, 0xd6, 0x0, 0x0}};
  // 0.9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x10000}};
  // 921367625070.9
  s21_decimal dec_check = {{0x39e66655, 0x861, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_196) {
  // -5843070989431481848
  s21_decimal dec_1 = {{0x627425f8, 0x5116c21b, 0x0, 0x80000000}};
  // 4920244239973563.199465277
  s21_decimal dec_2 = {{0x4c4d273d, 0xf98664b9, 0x411e6, 0x90000}};
  // -5838150745191508284.800534723
  s21_decimal dec_check = {{0x58d888c3, 0xfcd3595, 0x12dd3482, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_197) {
  // 286269856136266618135.788
  s21_decimal dec_1 = {{0x9dee64ec, 0xb851b93b, 0x3c9e, 0x30000}};
  // 4638668786368.71607
  s21_decimal dec_2 = {{0xec384fb7, 0x66ffc77, 0x0, 0x50000}};
  // 286269860774935404504.50407
  s21_decimal dec_check = {{0x9d57bbe7, 0x65c57c1, 0x17ae00, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_198) {
  // 0.2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x10000}};
  // -14304615554131587
  s21_decimal dec_2 = {{0xd8c0a683, 0x32d1f8, 0x0, 0x80000000}};
  // -14304615554131586.8
  s21_decimal dec_check = {{0x7786811c, 0x1fc33b8, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_199) {
  // 0.5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x10000}};
  // 46885.2939650
  s21_decimal dec_2 = {{0x29d01b82, 0x6d, 0x0, 0x70000}};
  // 46885.7939650
  s21_decimal dec_check = {{0x2a1c66c2, 0x6d, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_200) {
  // 1609313057535251658.2
  s21_decimal dec_1 = {{0x43dd4fe6, 0xdf5648fe, 0x0, 0x10000}};
  // -0.983
  s21_decimal dec_2 = {{0x3d7, 0x0, 0x0, 0x80030000}};
  // 1609313057535251657.217
  s21_decimal dec_check = {{0x82733201, 0x3db48352, 0x57, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_201) {
  // 4997851956595444878213297034
  s21_decimal dec_1 = {{0xd8ab38a, 0x74807c06, 0x10262051, 0x0}};
  // 27490
  s21_decimal dec_2 = {{0x6b62, 0x0, 0x0, 0x0}};
  // 4997851956595444878213324524
  s21_decimal dec_check = {{0xd8b1eec, 0x74807c06, 0x10262051, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_202) {
  // -11.3329
  s21_decimal dec_1 = {{0x1bab1, 0x0, 0x0, 0x80040000}};
  // -79228162514264337592218661526
  s21_decimal dec_2 = {{0xb101b296, 0xffffffff, 0xffffffff, 0x80000000}};
  // -79228162514264337592218661537
  s21_decimal dec_check = {{0xb101b2a1, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_203) {
  // 907859306.127910315
  s21_decimal dec_1 = {{0x97c965ab, 0xc995d3a, 0x0, 0x90000}};
  // 224764896717958371725663230
  s21_decimal dec_2 = {{0xf1b9dbfe, 0x774c1290, 0xb9ebd1, 0x0}};
  // 224764896717958372633522536.13
  s21_decimal dec_check = {{0x8fdd4cad, 0x99b740b3, 0x48a01dd2, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_204) {
  // -5198015234349617
  s21_decimal dec_1 = {{0x3b949a31, 0x127791, 0x0, 0x80000000}};
  // 75967504
  s21_decimal dec_2 = {{0x4872c10, 0x0, 0x0, 0x0}};
  // -5198015158382113
  s21_decimal dec_check = {{0x370d6e21, 0x127791, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_205) {
  // 41197165713183225190
  s21_decimal dec_1 = {{0xb7303566, 0x3bb9bbf1, 0x2, 0x0}};
  // -2522327805
  s21_decimal dec_2 = {{0x9657aafd, 0x0, 0x0, 0x80000000}};
  // 41197165710660897385
  s21_decimal dec_check = {{0x20d88a69, 0x3bb9bbf1, 0x2, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_206) {
  // -66505035268
  s21_decimal dec_1 = {{0x7c024e04, 0xf, 0x0, 0x80000000}};
  // 9629633457835345209.892
  s21_decimal dec_2 = {{0xa4446a24, 0x60281ea, 0x20a, 0x30000}};
  // 9629633391330309941.892
  s21_decimal dec_check = {{0x3b43aa84, 0x602456e, 0x20a, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_207) {
  // -93823279435.7952068383
  s21_decimal dec_1 = {{0x87dabb1f, 0xdc987b7f, 0x32, 0x800a0000}};
  // 0.4245162016835230274691
  s21_decimal dec_2 = {{0xb4bc9483, 0x21752a7a, 0xe6, 0x160000}};
  // -93823279435.370690636616476973
  s21_decimal dec_check = {{0x25237751, 0xf7bc51b7, 0x1e50e138, 0x80110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_208) {
  // 43275887827004205.863
  s21_decimal dec_1 = {{0x743cab27, 0x5892d6b1, 0x2, 0x30000}};
  // 15079730572586.28235
  s21_decimal dec_2 = {{0x88c2a48b, 0x14ed6581, 0x0, 0x50000}};
  // 43290967557576792.14535
  s21_decimal dec_check = {{0xf0757fc7, 0xae4942d2, 0xea, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_209) {
  // 198128521680558823
  s21_decimal dec_1 = {{0x3aa49ae7, 0x2bfe4d7, 0x0, 0x0}};
  // 4304615718
  s21_decimal dec_2 = {{0x933926, 0x1, 0x0, 0x0}};
  // 198128525985174541
  s21_decimal dec_check = {{0x3b37d40d, 0x2bfe4d8, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_210) {
  // -1649432312547907810550730
  s21_decimal dec_1 = {{0x9b6e3ca, 0xe7a30b64, 0x15d47, 0x80000000}};
  // -254757896708307488649526
  s21_decimal dec_2 = {{0x4474b136, 0x74086b05, 0x35f2, 0x80000000}};
  // -1904190209256215299200256
  s21_decimal dec_check = {{0x4e2b9500, 0x5bab7669, 0x1933a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_211) {
  // -286403
  s21_decimal dec_1 = {{0x45ec3, 0x0, 0x0, 0x80000000}};
  // 572878607387503984513060
  s21_decimal dec_2 = {{0x67a1024, 0xcfc0c1fd, 0x794f, 0x0}};
  // 572878607387503984226657
  s21_decimal dec_check = {{0x675b161, 0xcfc0c1fd, 0x794f, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_212) {
  // -8372362242334206555
  s21_decimal dec_1 = {{0xc9392a5b, 0x74309b19, 0x0, 0x80000000}};
  // 1733.6021481531650
  s21_decimal dec_2 = {{0xa39a902, 0x3d9705, 0x0, 0xd0000}};
  // -8372362242334204821.3978518468
  s21_decimal dec_check = {{0xec6c4ec7, 0x99459059, 0x1b0d74aa, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_213) {
  // -838929846991958784969774
  s21_decimal dec_1 = {{0x20a18c2e, 0x7a66f65c, 0xb1a6, 0x80000000}};
  // 77647232.589896
  s21_decimal dec_2 = {{0xa7b76048, 0x469e, 0x0, 0x60000}};
  // -838929846991958707322541.41010
  s21_decimal dec_check = {{0xdd1855d5, 0x55f76e05, 0x1b1b770d, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_214) {
  // 81
  s21_decimal dec_1 = {{0x51, 0x0, 0x0, 0x0}};
  // -8933892704939794
  s21_decimal dec_2 = {{0xfd23af12, 0x1fbd53, 0x0, 0x80000000}};
  // -8933892704939713
  s21_decimal dec_check = {{0xfd23aec1, 0x1fbd53, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_215) {
  // -0.9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80010000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -0.9
  s21_decimal dec_check = {{0x9, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_216) {
  // -57151987629
  s21_decimal dec_1 = {{0x4e861fad, 0xd, 0x0, 0x80000000}};
  // 29.26932854541133123808526677
  s21_decimal dec_2 = {{0x98e60155, 0xfb0ae16a, 0x9751a23, 0x1a0000}};
  // -57151987599.730671454588668762
  s21_decimal dec_check = {{0xaf228b5a, 0xdfe7c3c8, 0xb8ab041f, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_217) {
  // 7637.495660647447977359
  s21_decimal dec_1 = {{0x2e7add8f, 0x78b4e2c, 0x19e, 0x120000}};
  // -1231259035106741290025.22342
  s21_decimal dec_2 = {{0xa80966e6, 0x9a910ae7, 0x65d8ec, 0x80050000}};
  // -1231259035106741282387.7277594
  s21_decimal dec_check = {{0xdb5ed79a, 0x60a8426b, 0x27c8bc6c, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_218) {
  // 420296863252688285
  s21_decimal dec_1 = {{0x32632d9d, 0x5d531c5, 0x0, 0x0}};
  // -7.820023967477
  s21_decimal dec_2 = {{0xbdc02ef5, 0x71c, 0x0, 0x800c0000}};
  // 420296863252688277.17997603252
  s21_decimal dec_check = {{0xfcbaa9b4, 0x2314ec99, 0x87ce2445, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_219) {
  // 94.56
  s21_decimal dec_1 = {{0x24f0, 0x0, 0x0, 0x20000}};
  // -8029170
  s21_decimal dec_2 = {{0x7a83f2, 0x0, 0x0, 0x80000000}};
  // -8029075.44
  s21_decimal dec_check = {{0x2fdb6598, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_220) {
  // -1541.872637862124820851382177
  s21_decimal dec_1 = {{0xecb8d7a1, 0x2eecfb64, 0x4fb683b, 0x80180000}};
  // 743485842688.672528436547
  s21_decimal dec_2 = {{0x49218d43, 0x72c35087, 0x9d70, 0xc0000}};
  // 743485841146.79989057442217915
  s21_decimal dec_check = {{0x3f86ffbb, 0xeaf93a78, 0xf03bb514, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_221) {
  // -67903382.676691429377
  s21_decimal dec_1 = {{0xe39b2801, 0xae5946c6, 0x3, 0x800c0000}};
  // -3636.1
  s21_decimal dec_2 = {{0x8e09, 0x0, 0x0, 0x80010000}};
  // -67907018.776691429377
  s21_decimal dec_check = {{0x64795001, 0xae6631ca, 0x3, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_222) {
  // 17.8501
  s21_decimal dec_1 = {{0x2b945, 0x0, 0x0, 0x40000}};
  // -64804619816094854714009266322
  s21_decimal dec_2 = {{0x9d6b2892, 0x95da317a, 0xd1652007, 0x80000000}};
  // -64804619816094854714009266304
  s21_decimal dec_check = {{0x9d6b2880, 0x95da317a, 0xd1652007, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_223) {
  // -3651675646
  s21_decimal dec_1 = {{0xd9a825fe, 0x0, 0x0, 0x80000000}};
  // -32175076.56364039
  s21_decimal dec_2 = {{0x60eb7007, 0xb6e4e, 0x0, 0x80080000}};
  // -3683850722.56364039
  s21_decimal dec_check = {{0x7c65ae07, 0x51cc445, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_224) {
  // 1512859723.54363
  s21_decimal dec_1 = {{0x2a4453b, 0x8998, 0x0, 0x50000}};
  // -3.4138886
  s21_decimal dec_2 = {{0x208eb06, 0x0, 0x0, 0x80070000}};
  // 1512859720.1297414
  s21_decimal dec_check = {{0x6222006, 0x35bf61, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_225) {
  // 30249938742326294
  s21_decimal dec_1 = {{0xb536b416, 0x6b7828, 0x0, 0x0}};
  // -9819.28123073810465123
  s21_decimal dec_2 = {{0x1c850163, 0x3afd7975, 0x35, 0x80110000}};
  // 30249938742316474.718769261895
  s21_decimal dec_check = {{0x23ba2d47, 0x1940f612, 0x61be29b1, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_226) {
  // 97283
  s21_decimal dec_1 = {{0x17c03, 0x0, 0x0, 0x0}};
  // -0.185357365
  s21_decimal dec_2 = {{0xb0c5435, 0x0, 0x0, 0x80090000}};
  // 97282.814642635
  s21_decimal dec_check = {{0x6b9c09cb, 0x587a, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_227) {
  // -6034314957940.87189269942781
  s21_decimal dec_1 = {{0x19db91fd, 0xef2eb354, 0x1f32596, 0x800e0000}};
  // 89.53229883679347627815982
  s21_decimal dec_2 = {{0xd0c8742e, 0x9085316a, 0x767eb, 0x170000}};
  // -6034314957851.3395938626343337
  s21_decimal dec_check = {{0x70db91a9, 0x61d13956, 0xc2faaef5, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_228) {
  // 51267343.064966608
  s21_decimal dec_1 = {{0x7bf725d0, 0xb62360, 0x0, 0x90000}};
  // -45316132.422324
  s21_decimal dec_2 = {{0xfbf9c2b4, 0x2936, 0x0, 0x80060000}};
  // 5951210.642642608
  s21_decimal dec_check = {{0x345696b0, 0x152498, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_229) {
  // -833807230.5805467752330
  s21_decimal dec_1 = {{0x3122978a, 0x1ff8921, 0x1c4, 0x800d0000}};
  // -698983
  s21_decimal dec_2 = {{0xaaa67, 0x0, 0x0, 0x80000000}};
  // -834506213.5805467752330
  s21_decimal dec_check = {{0x1f80f78a, 0x6300667b, 0x1c4, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_230) {
  // -2687.413531635
  s21_decimal dec_1 = {{0xb65433f3, 0x271, 0x0, 0x80090000}};
  // 406447204312293835
  s21_decimal dec_2 = {{0x30fc21cb, 0x5a3fd94, 0x0, 0x0}};
  // 406447204312291147.586468365
  s21_decimal dec_check = {{0x5973fa0d, 0x18867fab, 0x150348b, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_231) {
  // -79439007855909718
  s21_decimal dec_1 = {{0x548f9b56, 0x11a395b, 0x0, 0x80000000}};
  // -25834806596.861302478
  s21_decimal dec_2 = {{0x9ed616ce, 0x6687abb8, 0x1, 0x80090000}};
  // -79439033690716314.861302478
  s21_decimal dec_check = {{0x3323f2ce, 0xa537b3a2, 0x41b5de, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_232) {
  // 4722620827683168420583
  s21_decimal dec_1 = {{0xa48382e7, 0x3879d42, 0x100, 0x0}};
  // -7716269
  s21_decimal dec_2 = {{0x75bdad, 0x0, 0x0, 0x80000000}};
  // 4722620827683160704314
  s21_decimal dec_check = {{0xa40dc53a, 0x3879d42, 0x100, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_233) {
  // 443628823.843
  s21_decimal dec_1 = {{0x4a56a523, 0x67, 0x0, 0x30000}};
  // 77
  s21_decimal dec_2 = {{0x4d, 0x0, 0x0, 0x0}};
  // 443628900.843
  s21_decimal dec_check = {{0x4a57d1eb, 0x67, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_234) {
  // 4061.38
  s21_decimal dec_1 = {{0x6327a, 0x0, 0x0, 0x20000}};
  // -0.094
  s21_decimal dec_2 = {{0x5e, 0x0, 0x0, 0x80030000}};
  // 4061.286
  s21_decimal dec_check = {{0x3df866, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_235) {
  // -5615153557814579383939560099
  s21_decimal dec_1 = {{0xd646f2a3, 0x4fa527d5, 0x1224bf04, 0x80000000}};
  // 5516751846352264098897069
  s21_decimal dec_2 = {{0x56525cad, 0xb7831567, 0x49037, 0x0}};
  // -5609636805968227119840663030
  s21_decimal dec_check = {{0x7ff495f6, 0x9822126e, 0x12202ecc, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_236) {
  // -0.013
  s21_decimal dec_1 = {{0xd, 0x0, 0x0, 0x80030000}};
  // -935242438096428195183443087
  s21_decimal dec_2 = {{0x9f95bc8f, 0x28c3e942, 0x3059d4a, 0x80000000}};
  // -935242438096428195183443087.01
  s21_decimal dec_check = {{0x3bd95d96, 0x97a71c9a, 0x1e3824e5, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_237) {
  // -7427064
  s21_decimal dec_1 = {{0x7153f8, 0x0, 0x0, 0x80000000}};
  // 8326.3099712902381072628689745
  s21_decimal dec_2 = {{0x3b11ab51, 0xd48e59dc, 0xd099f2f, 0x190000}};
  // -7418737.6900287097618927371310
  s21_decimal dec_check = {{0x2748f13d, 0x9c50ef1a, 0xeff7e557, 0x80160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_238) {
  // -82176
  s21_decimal dec_1 = {{0x14100, 0x0, 0x0, 0x80000000}};
  // 87903272
  s21_decimal dec_2 = {{0x53d4c28, 0x0, 0x0, 0x0}};
  // 87821096
  s21_decimal dec_check = {{0x53c0b28, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_239) {
  // -21358
  s21_decimal dec_1 = {{0x536e, 0x0, 0x0, 0x80000000}};
  // 393899321344044495539840548.95
  s21_decimal dec_2 = {{0x14a0e66f, 0xb57a197f, 0x7f469693, 0x20000}};
  // 393899321344044495539819190.95
  s21_decimal dec_check = {{0x14804f77, 0xb57a197f, 0x7f469693, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_240) {
  // -0.2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x80010000}};
  // -444979231.120
  s21_decimal dec_2 = {{0x9ad43990, 0x67, 0x0, 0x80030000}};
  // -444979231.320
  s21_decimal dec_check = {{0x9ad43a58, 0x67, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_241) {
  // 241142340728799495
  s21_decimal dec_1 = {{0x67724107, 0x358b5ae, 0x0, 0x0}};
  // -69
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x80000000}};
  // 241142340728799426
  s21_decimal dec_check = {{0x677240c2, 0x358b5ae, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_242) {
  // -682
  s21_decimal dec_1 = {{0x2aa, 0x0, 0x0, 0x80000000}};
  // 53512967551420314
  s21_decimal dec_2 = {{0xadc7879a, 0xbe1dc2, 0x0, 0x0}};
  // 53512967551419632
  s21_decimal dec_check = {{0xadc784f0, 0xbe1dc2, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_243) {
  // 67872.80
  s21_decimal dec_1 = {{0x6790d0, 0x0, 0x0, 0x20000}};
  // -208193334837410
  s21_decimal dec_2 = {{0xc9c480a2, 0xbd59, 0x0, 0x80000000}};
  // -208193334769537.20
  s21_decimal dec_check = {{0xd05aae78, 0x49f712, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_244) {
  // 2.1
  s21_decimal dec_1 = {{0x15, 0x0, 0x0, 0x10000}};
  // -50.59562467626188
  s21_decimal dec_2 = {{0x2f9a0ccc, 0x11f9a5, 0x0, 0x800e0000}};
  // -48.49562467626188
  s21_decimal dec_check = {{0xc032eccc, 0x113aa6, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_245) {
  // 91465079128147.366
  s21_decimal dec_1 = {{0x3ec945a6, 0x144f301, 0x0, 0x30000}};
  // -81522
  s21_decimal dec_2 = {{0x13e72, 0x0, 0x0, 0x80000000}};
  // 91465079046625.366
  s21_decimal dec_check = {{0x39ed5856, 0x144f301, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_246) {
  // -523375956.504455918
  s21_decimal dec_1 = {{0xd36daaee, 0x74367a8, 0x0, 0x80090000}};
  // -0.262479432117
  s21_decimal dec_2 = {{0x1cfe49b5, 0x3d, 0x0, 0x800c0000}};
  // -523375956.766935350117
  s21_decimal dec_check = {{0x161fb65, 0x5f4cebb7, 0x1c, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_247) {
  // 88.587
  s21_decimal dec_1 = {{0x15a0b, 0x0, 0x0, 0x30000}};
  // -7.960449703931625337089
  s21_decimal dec_2 = {{0xa7fff101, 0x896e8d74, 0x1af, 0x80150000}};
  // 80.626550296068374662911
  s21_decimal dec_check = {{0xb14c0eff, 0xc6281c80, 0x1112, 0x150000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_248) {
  // -358.561162292295734249036185
  s21_decimal dec_1 = {{0xe12e9999, 0x8e6a7207, 0x1289847, 0x80180000}};
  // -793.196599
  s21_decimal dec_2 = {{0x2f473837, 0x0, 0x0, 0x80060000}};
  // -1151.757761292295734249036185
  s21_decimal dec_check = {{0xb7aa9999, 0x5937c7fa, 0x3b8b631, 0x80180000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_249) {
  // -3560830301266189948704546287
  s21_decimal dec_1 = {{0x9aa45def, 0x6c9bb3a3, 0xb817325, 0x80000000}};
  // 3625617860688061029950619
  s21_decimal dec_2 = {{0x13c0249b, 0x2357c517, 0x2ffc1, 0x0}};
  // -3557204683405501887674595668
  s21_decimal dec_check = {{0x86e43954, 0x4943ee8c, 0xb7e7364, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_250) {
  // -206254435.0420
  s21_decimal dec_1 = {{0x39392cd4, 0x1e0, 0x0, 0x80040000}};
  // -70694.2074
  s21_decimal dec_2 = {{0x2a23147a, 0x0, 0x0, 0x80040000}};
  // -206325129.2494
  s21_decimal dec_check = {{0x635c414e, 0x1e0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_251) {
  // 0.0210
  s21_decimal dec_1 = {{0xd2, 0x0, 0x0, 0x40000}};
  // 1581515347826732017
  s21_decimal dec_2 = {{0x620a6bf1, 0x15f2abd4, 0x0, 0x0}};
  // 1581515347826732017.0210
  s21_decimal dec_check = {{0xb71876e2, 0x57581835, 0x359, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_252) {
  // 681012449454771406
  s21_decimal dec_1 = {{0xf15eccce, 0x9737136, 0x0, 0x0}};
  // 861
  s21_decimal dec_2 = {{0x35d, 0x0, 0x0, 0x0}};
  // 681012449454772267
  s21_decimal dec_check = {{0xf15ed02b, 0x9737136, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_253) {
  // -12065.800518665792015550
  s21_decimal dec_1 = {{0x267e4cbe, 0x169e8c60, 0x28e, 0x80120000}};
  // 4264005842336287
  s21_decimal dec_2 = {{0x398d7a1f, 0xf2617, 0x0, 0x0}};
  // 4264005842324221.1994813342080
  s21_decimal dec_check = {{0x3dac2180, 0xde912045, 0x89c70796, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_254) {
  // 89434648130210526049441
  s21_decimal dec_1 = {{0x43c2b4a1, 0x4311c55a, 0x12f0, 0x0}};
  // -7031605194101047494
  s21_decimal dec_2 = {{0x432f40c6, 0x619547ab, 0x0, 0x80000000}};
  // 89427616525016425001947
  s21_decimal dec_check = {{0x9373db, 0xe17c7daf, 0x12ef, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_255) {
  // -0.2686886
  s21_decimal dec_1 = {{0x28ffa6, 0x0, 0x0, 0x80070000}};
  // 6115000163
  s21_decimal dec_2 = {{0x6c7b7f63, 0x1, 0x0, 0x0}};
  // 6115000162.7313114
  s21_decimal dec_check = {{0x3d02b3da, 0xd93f9a, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_256) {
  // -0.4184810681593535188692005494
  s21_decimal dec_1 = {{0xaf27276, 0x9f07ccd6, 0xd859821, 0x801c0000}};
  // 7.8
  s21_decimal dec_2 = {{0x4e, 0x0, 0x0, 0x10000}};
  // 7.3815189318406464811307994506
  s21_decimal dec_check = {{0xa50d8d8a, 0x127f45b8, 0xee827e57, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_257) {
  // 5660187.94727844874
  s21_decimal dec_1 = {{0x4bf2ac0a, 0x7dae718, 0x0, 0xb0000}};
  // 910975
  s21_decimal dec_2 = {{0xde67f, 0x0, 0x0, 0x0}};
  // 6571162.94727844874
  s21_decimal dec_check = {{0xdb5fc40a, 0x91e8bc9, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_258) {
  // 4359995856172920908068336875
  s21_decimal dec_1 = {{0xb8e6b4eb, 0xf6eb099e, 0xe168108, 0x0}};
  // 72377.2789853913016834
  s21_decimal dec_2 = {{0xd7eeea02, 0x3c5d7da8, 0x27, 0x100000}};
  // 4359995856172920908068409252.3
  s21_decimal dec_check = {{0x390e1c6b, 0xa52e6033, 0x8ce10a59, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_259) {
  // 6.5386584635339999285866
  s21_decimal dec_1 = {{0x6f34126a, 0x9d25a4de, 0xdd8, 0x160000}};
  // 65.8220
  s21_decimal dec_2 = {{0xa0b2c, 0x0, 0x0, 0x40000}};
  // 72.3606584635339999285866
  s21_decimal dec_check = {{0x8064126a, 0xcaa34dd8, 0x993a, 0x160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_260) {
  // -70555
  s21_decimal dec_1 = {{0x1139b, 0x0, 0x0, 0x80000000}};
  // -4348608473
  s21_decimal dec_2 = {{0x3327fd9, 0x1, 0x0, 0x80000000}};
  // -4348679028
  s21_decimal dec_check = {{0x3339374, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_261) {
  // 5.0360694
  s21_decimal dec_1 = {{0x3007176, 0x0, 0x0, 0x70000}};
  // -504.71271715075196
  s21_decimal dec_2 = {{0xadf0747c, 0xb34f5a, 0x0, 0x800e0000}};
  // -499.67664775075196
  s21_decimal dec_check = {{0x8d2c957c, 0xb18553, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_262) {
  // -9663162497082419638238319
  s21_decimal dec_1 = {{0xdd48fc6f, 0x16afdb51, 0x7fe41, 0x80000000}};
  // -22928396430058
  s21_decimal dec_2 = {{0x6eecaaea, 0x14da, 0x0, 0x80000000}};
  // -9663162497105348034668377
  s21_decimal dec_check = {{0x4c35a759, 0x16aff02c, 0x7fe41, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_263) {
  // 11851362332032961159
  s21_decimal dec_1 = {{0xf1450a87, 0xa4787f3f, 0x0, 0x0}};
  // -7606703880
  s21_decimal dec_2 = {{0xc5651708, 0x1, 0x0, 0x80000000}};
  // 11851362324426257279
  s21_decimal dec_check = {{0x2bdff37f, 0xa4787f3e, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_264) {
  // 51868535
  s21_decimal dec_1 = {{0x3177377, 0x0, 0x0, 0x0}};
  // -7886985716931
  s21_decimal dec_2 = {{0x54fb64c3, 0x72c, 0x0, 0x80000000}};
  // -7886933848396
  s21_decimal dec_check = {{0x51e3f14c, 0x72c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_265) {
  // -205.230
  s21_decimal dec_1 = {{0x321ae, 0x0, 0x0, 0x80030000}};
  // 79228162514264337592651204766
  s21_decimal dec_2 = {{0xcac9c89e, 0xffffffff, 0xffffffff, 0x0}};
  // 79228162514264337592651204561
  s21_decimal dec_check = {{0xcac9c7d1, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_266) {
  // 2903394.5915909112983
  s21_decimal dec_1 = {{0x69aa8497, 0x92ed4bfb, 0x1, 0xd0000}};
  // 6781974.28212
  s21_decimal dec_2 = {{0xe7b77ff4, 0x9d, 0x0, 0x50000}};
  // 9685368.8737109112983
  s21_decimal dec_check = {{0xe9a3f897, 0x401d6cc0, 0x5, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_267) {
  // -2502
  s21_decimal dec_1 = {{0x9c6, 0x0, 0x0, 0x80000000}};
  // 89.7025
  s21_decimal dec_2 = {{0xdb001, 0x0, 0x0, 0x40000}};
  // -2412.2975
  s21_decimal dec_check = {{0x170165f, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_268) {
  // -946885726666002543005.26
  s21_decimal dec_1 = {{0xbe63616e, 0x13eb56b6, 0x140d, 0x80020000}};
  // 48178
  s21_decimal dec_2 = {{0xbc32, 0x0, 0x0, 0x0}};
  // -946885726666002494827.26
  s21_decimal dec_check = {{0xbe19dde6, 0x13eb56b6, 0x140d, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_269) {
  // 194909046032
  s21_decimal dec_1 = {{0x617c0510, 0x2d, 0x0, 0x0}};
  // 90.9060953481
  s21_decimal dec_2 = {{0xa8415589, 0xd3, 0x0, 0xa0000}};
  // 194909046122.9060953481
  s21_decimal dec_check = {{0x94739589, 0xa91057c3, 0x69, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_270) {
  // 767338153
  s21_decimal dec_1 = {{0x2dbca6a9, 0x0, 0x0, 0x0}};
  // -930.19
  s21_decimal dec_2 = {{0x16b5b, 0x0, 0x0, 0x80020000}};
  // 767337222.81
  s21_decimal dec_check = {{0xddafaea9, 0x11, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_271) {
  // -0.50
  s21_decimal dec_1 = {{0x32, 0x0, 0x0, 0x80020000}};
  // 9.19829046996191430483216
  s21_decimal dec_2 = {{0xbf369d10, 0x8556be0, 0xc2c8, 0x170000}};
  // 8.69829046996191430483216
  s21_decimal dec_check = {{0x43f69d10, 0x86f17b3b, 0xb831, 0x170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_272) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -560419329441102.801
  s21_decimal dec_2 = {{0x30997bd1, 0x7c70269, 0x0, 0x80030000}};
  // -560419329441105.801
  s21_decimal dec_check = {{0x30998789, 0x7c70269, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_273) {
  // 62463602137922306383377
  s21_decimal dec_1 = {{0xad791e11, 0x289dbe17, 0xd3a, 0x0}};
  // 12785880
  s21_decimal dec_2 = {{0xc318d8, 0x0, 0x0, 0x0}};
  // 62463602137922319169257
  s21_decimal dec_check = {{0xae3c36e9, 0x289dbe17, 0xd3a, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_275) {
  // -7497255
  s21_decimal dec_1 = {{0x726627, 0x0, 0x0, 0x80000000}};
  // 655213256089761362956190301
  s21_decimal dec_2 = {{0x77af025d, 0xc8e182c4, 0x21dfacd, 0x0}};
  // 655213256089761362948693046
  s21_decimal dec_check = {{0x773c9c36, 0xc8e182c4, 0x21dfacd, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_276) {
  // -52441785961655062.52287
  s21_decimal dec_1 = {{0xfaf3dff, 0x4999085d, 0x11c, 0x80050000}};
  // 0.0946103
  s21_decimal dec_2 = {{0xe6fb7, 0x0, 0x0, 0x70000}};
  // -52441785961655062.4282597
  s21_decimal dec_check = {{0x2065c7e5, 0xbfc7445a, 0x6f0c, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_277) {
  // -892876662102
  s21_decimal dec_1 = {{0xe398a556, 0xcf, 0x0, 0x80000000}};
  // 381016483671
  s21_decimal dec_2 = {{0xb65a2757, 0x58, 0x0, 0x0}};
  // -511860178431
  s21_decimal dec_check = {{0x2d3e7dff, 0x77, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_278) {
  // 17107496591522714
  s21_decimal dec_1 = {{0x71557b9a, 0x3cc72d, 0x0, 0x0}};
  // -1220
  s21_decimal dec_2 = {{0x4c4, 0x0, 0x0, 0x80000000}};
  // 17107496591521494
  s21_decimal dec_check = {{0x715576d6, 0x3cc72d, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_279) {
  // -3.78819550
  s21_decimal dec_1 = {{0x169453de, 0x0, 0x0, 0x80080000}};
  // -25093007
  s21_decimal dec_2 = {{0x17ee38f, 0x0, 0x0, 0x80000000}};
  // -25093010.78819550
  s21_decimal dec_check = {{0x2f7002de, 0x8ea32, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_280) {
  // 34272.4525524
  s21_decimal dec_1 = {{0xcbf93dd4, 0x4f, 0x0, 0x70000}};
  // -345379635759861606759
  s21_decimal dec_2 = {{0xe85a2967, 0xb91af4d2, 0x12, 0x80000000}};
  // -345379635759861572486.5474476
  s21_decimal dec_check = {{0xca85cfac, 0xb627f2d1, 0xb28e9d3, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_281) {
  // 468.03186909015443
  s21_decimal dec_1 = {{0x22116d93, 0xa64740, 0x0, 0xe0000}};
  // -82788933590
  s21_decimal dec_2 = {{0x469adfd6, 0x13, 0x0, 0x80000000}};
  // -82788933121.96813090984557
  s21_decimal dec_check = {{0xa1e0126d, 0xb4ab9254, 0x6d91f, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_282) {
  // -58753828445049146383203
  s21_decimal dec_1 = {{0xd3b11b63, 0xd29ffa5, 0xc71, 0x80000000}};
  // -292373109848
  s21_decimal dec_2 = {{0x12cb9c58, 0x44, 0x0, 0x80000000}};
  // -58753828445341519493051
  s21_decimal dec_check = {{0xe67cb7bb, 0xd29ffe9, 0xc71, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_283) {
  // 315.532
  s21_decimal dec_1 = {{0x4d08c, 0x0, 0x0, 0x30000}};
  // -92
  s21_decimal dec_2 = {{0x5c, 0x0, 0x0, 0x80000000}};
  // 223.532
  s21_decimal dec_check = {{0x3692c, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_284) {
  // -73277.95436
  s21_decimal dec_1 = {{0xb4c548ec, 0x1, 0x0, 0x80050000}};
  // -4427735276
  s21_decimal dec_2 = {{0x7e9e0ec, 0x1, 0x0, 0x80000000}};
  // -4427808553.95436
  s21_decimal dec_check = {{0xf399646c, 0x192b4, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_285) {
  // -8105395824597666205122
  s21_decimal dec_1 = {{0x76458dc2, 0x64f69e3e, 0x1b7, 0x80000000}};
  // 6737718775055476329935
  s21_decimal dec_2 = {{0xedb80dcf, 0x40a1a7f2, 0x16d, 0x0}};
  // -1367677049542189875187
  s21_decimal dec_check = {{0x888d7ff3, 0x2454f64b, 0x4a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_286) {
  // 7543.31
  s21_decimal dec_1 = {{0xb829b, 0x0, 0x0, 0x20000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // 7550.31
  s21_decimal dec_check = {{0xb8557, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_287) {
  // 55979122673964718777995606077
  s21_decimal dec_1 = {{0xb7b7b83d, 0xd8e5bb09, 0xb4e0d850, 0x0}};
  // 5946.364936918908800525964
  s21_decimal dec_2 = {{0x68d6e68c, 0x16d2880f, 0x4eb31, 0x150000}};
  // 55979122673964718777995612023
  s21_decimal dec_check = {{0xb7b7cf77, 0xd8e5bb09, 0xb4e0d850, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_288) {
  // -102
  s21_decimal dec_1 = {{0x66, 0x0, 0x0, 0x80000000}};
  // -7.4589116671
  s21_decimal dec_2 = {{0x5ddb98ff, 0x11, 0x0, 0x800a0000}};
  // -109.4589116671
  s21_decimal dec_check = {{0xda9870ff, 0xfe, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_289) {
  // -2349198965668611267
  s21_decimal dec_1 = {{0x3f6484c3, 0x209a0803, 0x0, 0x80000000}};
  // 627222221266026612511
  s21_decimal dec_2 = {{0x60f9c71f, 0x74f713, 0x22, 0x0}};
  // 624873022300358001244
  s21_decimal dec_check = {{0x2195425c, 0xdfdaef10, 0x21, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_290) {
  // -34124217
  s21_decimal dec_1 = {{0x208b1b9, 0x0, 0x0, 0x80000000}};
  // -7433937049056289156244.6392896
  s21_decimal dec_2 = {{0x36568e40, 0x5a891706, 0xf0341605, 0x80070000}};
  // -7433937049056323280461.6392896
  s21_decimal dec_check = {{0xd8a9d0c0, 0x5a8a4d61, 0xf0341605, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_291) {
  // 469
  s21_decimal dec_1 = {{0x1d5, 0x0, 0x0, 0x0}};
  // 9918324086073821.0742
  s21_decimal dec_2 = {{0x484f4bb6, 0x6071a811, 0x5, 0x40000}};
  // 9918324086074290.0742
  s21_decimal dec_check = {{0x4896dc06, 0x6071a811, 0x5, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_292) {
  // 4372.332258129809772232
  s21_decimal dec_1 = {{0xf0dc0ec8, 0x64c9f28, 0xed, 0x120000}};
  // 0.7358
  s21_decimal dec_2 = {{0x1cbe, 0x0, 0x0, 0x40000}};
  // 4373.068058129809772232
  s21_decimal dec_check = {{0x8a978ec8, 0x1082b55c, 0xed, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_293) {
  // 13300.9103097294774
  s21_decimal dec_1 = {{0x1601efb6, 0x1d88b13, 0x0, 0xd0000}};
  // -779750191584.007963446481775
  s21_decimal dec_2 = {{0xe96136f, 0x95e7d0fb, 0x284fe86, 0x800f0000}};
  // -779750178283.097653717004375
  s21_decimal dec_check = {{0x75d47057, 0xdd517d86, 0x284fe85, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_294) {
  // -8961244299602283994795441732
  s21_decimal dec_1 = {{0x7efb7e44, 0xe3de0c77, 0x1cf4914a, 0x80000000}};
  // -7666935332788
  s21_decimal dec_2 = {{0x18f4ffb4, 0x6f9, 0x0, 0x80000000}};
  // -8961244299602291661730774520
  s21_decimal dec_check = {{0x97f07df8, 0xe3de1370, 0x1cf4914a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_295) {
  // 5607990530020269249161625
  s21_decimal dec_1 = {{0xc7726999, 0xc69a9630, 0x4a389, 0x0}};
  // -518068222651501
  s21_decimal dec_2 = {{0x28616c6d, 0x1d72e, 0x0, 0x80000000}};
  // 5607990529502201026510124
  s21_decimal dec_check = {{0x9f10fd2c, 0xc698bf02, 0x4a389, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_296) {
  // -293450250122455024
  s21_decimal dec_1 = {{0x9dcc67f0, 0x4128b72, 0x0, 0x80000000}};
  // -630.427
  s21_decimal dec_2 = {{0x99e9b, 0x0, 0x0, 0x80030000}};
  // -293450250122455654.427
  s21_decimal dec_check = {{0x667fa01b, 0xe870b7b8, 0xf, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_297) {
  // -808363002050103447378
  s21_decimal dec_1 = {{0x4cc78f52, 0xd24a4b79, 0x2b, 0x80000000}};
  // 2728
  s21_decimal dec_2 = {{0xaa8, 0x0, 0x0, 0x0}};
  // -808363002050103444650
  s21_decimal dec_check = {{0x4cc784aa, 0xd24a4b79, 0x2b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_298) {
  // -41652504.862700774102952
  s21_decimal dec_1 = {{0x8e4c17a8, 0xfc9fc832, 0x8d1, 0x800f0000}};
  // -40080794
  s21_decimal dec_2 = {{0x263959a, 0x0, 0x0, 0x80000000}};
  // -81733298.862700774102952
  s21_decimal dec_check = {{0xb63517a8, 0xc560e20c, 0x114e, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_299) {
  // -4748458
  s21_decimal dec_1 = {{0x4874aa, 0x0, 0x0, 0x80000000}};
  // -84966373910247
  s21_decimal dec_2 = {{0xc688e6e7, 0x4d46, 0x0, 0x80000000}};
  // -84966378658705
  s21_decimal dec_check = {{0xc6d15b91, 0x4d46, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_300) {
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // 22602.81117
  s21_decimal dec_2 = {{0x86b9271d, 0x0, 0x0, 0x50000}};
  // 22604.81117
  s21_decimal dec_check = {{0x86bc345d, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_301) {
  // -9367511925194968676
  s21_decimal dec_1 = {{0xfa7b4e64, 0x82001676, 0x0, 0x80000000}};
  // 3.769
  s21_decimal dec_2 = {{0xeb9, 0x0, 0x0, 0x30000}};
  // -9367511925194968672.231
  s21_decimal dec_check = {{0x71aa27e7, 0xd057c0c2, 0x1fb, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_302) {
  // -67581466538452986993440586
  s21_decimal dec_1 = {{0xa225f74a, 0xa45c8f6d, 0x37e6ee, 0x80000000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -67581466538452986993440578
  s21_decimal dec_check = {{0xa225f742, 0xa45c8f6d, 0x37e6ee, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_303) {
  // 287856
  s21_decimal dec_1 = {{0x46470, 0x0, 0x0, 0x0}};
  // 539112429182515088113346.6
  s21_decimal dec_2 = {{0xf69b739a, 0x6ef7ae4d, 0x4759d, 0x10000}};
  // 539112429182515088401202.6
  s21_decimal dec_check = {{0xf6c75ffa, 0x6ef7ae4d, 0x4759d, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_304) {
  // -3353426740360.75
  s21_decimal dec_1 = {{0xcf6c56b, 0x130fe, 0x0, 0x80020000}};
  // -312218
  s21_decimal dec_2 = {{0x4c39a, 0x0, 0x0, 0x80000000}};
  // -3353427052578.75
  s21_decimal dec_check = {{0xed32d93, 0x130fe, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_305) {
  // 5676
  s21_decimal dec_1 = {{0x162c, 0x0, 0x0, 0x0}};
  // -64196693249
  s21_decimal dec_2 = {{0xf26bcd01, 0xe, 0x0, 0x80000000}};
  // -64196687573
  s21_decimal dec_check = {{0xf26bb6d5, 0xe, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_306) {
  // -6133279236425435927
  s21_decimal dec_1 = {{0x536acb17, 0x551dc8f8, 0x0, 0x80000000}};
  // 21241858857463933906
  s21_decimal dec_2 = {{0x301f6bd2, 0x26ca3e16, 0x1, 0x0}};
  // 15108579621038497979
  s21_decimal dec_check = {{0xdcb4a0bb, 0xd1ac751d, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_307) {
  // 83.4689728
  s21_decimal dec_1 = {{0x31c05ac0, 0x0, 0x0, 0x70000}};
  // -598902700177
  s21_decimal dec_2 = {{0x7161f891, 0x8b, 0x0, 0x80000000}};
  // -598902700093.5310272
  s21_decimal dec_check = {{0x7cf8e3c0, 0x531d4c53, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_308) {
  // -62
  s21_decimal dec_1 = {{0x3e, 0x0, 0x0, 0x80000000}};
  // 18
  s21_decimal dec_2 = {{0x12, 0x0, 0x0, 0x0}};
  // -44
  s21_decimal dec_check = {{0x2c, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_309) {
  // 179237485829815147060
  s21_decimal dec_1 = {{0xa83e1a34, 0xb76b77b8, 0x9, 0x0}};
  // -55681
  s21_decimal dec_2 = {{0xd981, 0x0, 0x0, 0x80000000}};
  // 179237485829815091379
  s21_decimal dec_check = {{0xa83d40b3, 0xb76b77b8, 0x9, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_310) {
  // -885768853928527804740727
  s21_decimal dec_1 = {{0x8e7fb477, 0xa0339b79, 0xbb91, 0x80000000}};
  // -938760894266582755156850
  s21_decimal dec_2 = {{0xb6bfa372, 0x547e2f12, 0xc6ca, 0x80000000}};
  // -1824529748195110559897577
  s21_decimal dec_check = {{0x453f57e9, 0xf4b1ca8c, 0x1825b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_311) {
  // 135463692500
  s21_decimal dec_1 = {{0x8a43e8d4, 0x1f, 0x0, 0x0}};
  // 96884808
  s21_decimal dec_2 = {{0x5c65848, 0x0, 0x0, 0x0}};
  // 135560577308
  s21_decimal dec_check = {{0x900a411c, 0x1f, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_312) {
  // 833299364432867
  s21_decimal dec_1 = {{0xa09bcbe3, 0x2f5e1, 0x0, 0x0}};
  // -20021.061116206
  s21_decimal dec_2 = {{0x843c612e, 0x1235, 0x0, 0x80090000}};
  // 833299364412845.938883794
  s21_decimal dec_check = {{0x6232bcd2, 0x3fc27c3b, 0xb075, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_313) {
  // -4.2845
  s21_decimal dec_1 = {{0xa75d, 0x0, 0x0, 0x80040000}};
  // -14951
  s21_decimal dec_2 = {{0x3a67, 0x0, 0x0, 0x80000000}};
  // -14955.2845
  s21_decimal dec_check = {{0x8e9fecd, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_314) {
  // 55486730524180686790
  s21_decimal dec_1 = {{0x319d27c6, 0x208776e, 0x3, 0x0}};
  // 13397322383967725871291486
  s21_decimal dec_2 = {{0xb8addc5e, 0x4d3cd280, 0xb14fe, 0x0}};
  // 13397377870698250051978276
  s21_decimal dec_check = {{0xea4b0424, 0x4f4549ee, 0xb1501, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_315) {
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -904291
  s21_decimal dec_2 = {{0xdcc63, 0x0, 0x0, 0x80000000}};
  // -904292
  s21_decimal dec_check = {{0xdcc64, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_316) {
  // -250743141729
  s21_decimal dec_1 = {{0x6174b561, 0x3a, 0x0, 0x80000000}};
  // -4.9299101990801608355
  s21_decimal dec_2 = {{0x137b8ea3, 0xac299810, 0x2, 0x80130000}};
  // -250743141733.92991019908016084
  s21_decimal dec_check = {{0x7e5d27d4, 0x4d28dfe, 0x5104fc8f, 0x80110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_317) {
  // 705
  s21_decimal dec_1 = {{0x2c1, 0x0, 0x0, 0x0}};
  // 732657
  s21_decimal dec_2 = {{0xb2df1, 0x0, 0x0, 0x0}};
  // 733362
  s21_decimal dec_check = {{0xb30b2, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_318) {
  // -5608412835785758174541
  s21_decimal dec_1 = {{0x9f4f6d4d, 0x85cff80, 0x130, 0x80000000}};
  // -0.701457957185318
  s21_decimal dec_2 = {{0xe85ce726, 0x27df8, 0x0, 0x800f0000}};
  // -5608412835785758174541.7014580
  s21_decimal dec_check = {{0x17e4cd34, 0x6093b4d1, 0xb537b422, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_319) {
  // 507701339103600.3
  s21_decimal dec_1 = {{0x4bb14e63, 0x120984, 0x0, 0x10000}};
  // -2595850056761996.6920455777
  s21_decimal dec_2 = {{0x2c67661, 0x22afbbe9, 0x1578ed, 0x800a0000}};
  // -2088148717658396.3920455777
  s21_decimal dec_check = {{0x225e5861, 0xb025f275, 0x1145d3, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_320) {
  // 548674819161604262147869550
  s21_decimal dec_1 = {{0xa9af4b6e, 0x8bd0d299, 0x1c5da69, 0x0}};
  // -36916
  s21_decimal dec_2 = {{0x9034, 0x0, 0x0, 0x80000000}};
  // 548674819161604262147832634
  s21_decimal dec_check = {{0xa9aebb3a, 0x8bd0d299, 0x1c5da69, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_321) {
  // 9079114595.82
  s21_decimal dec_1 = {{0x63bd72fe, 0xd3, 0x0, 0x20000}};
  // 5358954446820817010
  s21_decimal dec_2 = {{0x2a413872, 0x4a5ed4ad, 0x0, 0x0}};
  // 5358954455899931605.82
  s21_decimal dec_check = {{0xe5377f86, 0xd0b1477, 0x1d, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_322) {
  // 4850576567128376770
  s21_decimal dec_1 = {{0x378545c2, 0x4350b5b0, 0x0, 0x0}};
  // 89578100.96248092580392727
  s21_decimal dec_2 = {{0x3f182f17, 0xdbbd09af, 0x768e3, 0x110000}};
  // 4850576567217954870.9624809258
  s21_decimal dec_check = {{0x64b1072a, 0xfe140ea9, 0x9cbb0769, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_323) {
  // -18249900150401760212493034
  s21_decimal dec_1 = {{0xfa3f22ea, 0x11cd135d, 0xf1891, 0x80000000}};
  // -7002763733949958384
  s21_decimal dec_2 = {{0x881348f0, 0x612ed083, 0x0, 0x80000000}};
  // -18249907153165494162451418
  s21_decimal dec_check = {{0x82526bda, 0x72fbe3e1, 0xf1891, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_324) {
  // -897993
  s21_decimal dec_1 = {{0xdb3c9, 0x0, 0x0, 0x80000000}};
  // 999727787.31
  s21_decimal dec_2 = {{0x46d78aeb, 0x17, 0x0, 0x20000}};
  // 998829794.31
  s21_decimal dec_check = {{0x417d5067, 0x17, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_325) {
  // -14586118046112299
  s21_decimal dec_1 = {{0x40ca5a2b, 0x33d1ff, 0x0, 0x80000000}};
  // 0.505
  s21_decimal dec_2 = {{0x1f9, 0x0, 0x0, 0x30000}};
  // -14586118046112298.495
  s21_decimal dec_check = {{0x167035ff, 0xca6c4d15, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_326) {
  // -18.10923
  s21_decimal dec_1 = {{0x1ba1eb, 0x0, 0x0, 0x80050000}};
  // -68338.811640
  s21_decimal dec_2 = {{0xe94f82f8, 0xf, 0x0, 0x80060000}};
  // -68356.920870
  s21_decimal dec_check = {{0xea63d626, 0xf, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_327) {
  // -7261
  s21_decimal dec_1 = {{0x1c5d, 0x0, 0x0, 0x80000000}};
  // -524096177418135256735162
  s21_decimal dec_2 = {{0x15b09dba, 0x4f8a853d, 0x6efb, 0x80000000}};
  // -524096177418135256742423
  s21_decimal dec_check = {{0x15b0ba17, 0x4f8a853d, 0x6efb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_328) {
  // 7021
  s21_decimal dec_1 = {{0x1b6d, 0x0, 0x0, 0x0}};
  // 2302.4211908944652
  s21_decimal dec_2 = {{0x1410e30c, 0x51cc66, 0x0, 0xd0000}};
  // 9323.4211908944652
  s21_decimal dec_check = {{0x91bf030c, 0x14b3c05, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_329) {
  // -9525150
  s21_decimal dec_1 = {{0x91579e, 0x0, 0x0, 0x80000000}};
  // 5547780350374
  s21_decimal dec_2 = {{0xb17a21a6, 0x50b, 0x0, 0x0}};
  // 5547770825224
  s21_decimal dec_check = {{0xb0e8ca08, 0x50b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_330) {
  // -359
  s21_decimal dec_1 = {{0x167, 0x0, 0x0, 0x80000000}};
  // 2290615773469312
  s21_decimal dec_2 = {{0x8b7e9a80, 0x8234d, 0x0, 0x0}};
  // 2290615773468953
  s21_decimal dec_check = {{0x8b7e9919, 0x8234d, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_331) {
  // -10.2395090990
  s21_decimal dec_1 = {{0xd739182e, 0x17, 0x0, 0x800a0000}};
  // -31960243903535727682922739
  s21_decimal dec_2 = {{0x455628f3, 0x4b2de446, 0x1a6fd8, 0x80000000}};
  // -31960243903535727682922749.240
  s21_decimal dec_check = {{0xd8901d38, 0xab43b27e, 0x6744e4e5, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_332) {
  // -7860591264240335761324
  s21_decimal dec_1 = {{0xfeaafac, 0x1f9e1ba1, 0x1aa, 0x80000000}};
  // -33610873490581043679923.8
  s21_decimal dec_2 = {{0xaea4bb06, 0x7db4106f, 0x472c, 0x80010000}};
  // -41471464754821379441247.8
  s21_decimal dec_check = {{0x4dcf97be, 0xb9e124ba, 0x57d1, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_333) {
  // 512532555749060313
  s21_decimal dec_1 = {{0xd93eeed9, 0x71ce1a4, 0x0, 0x0}};
  // -4813295807798021
  s21_decimal dec_2 = {{0xc2d29b05, 0x1119aa, 0x0, 0x80000000}};
  // 507719259941262292
  s21_decimal dec_check = {{0x166c53d4, 0x70bc7fa, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_334) {
  // 29633575636720050807949356
  s21_decimal dec_1 = {{0xf202c82c, 0x5aac5836, 0x188327, 0x0}};
  // -39574610826852
  s21_decimal dec_2 = {{0x2e9ed664, 0x23fe, 0x0, 0x80000000}};
  // 29633575636680476197122504
  s21_decimal dec_check = {{0xc363f1c8, 0x5aac3438, 0x188327, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_335) {
  // -515418719178807809598
  s21_decimal dec_1 = {{0xa7a7963e, 0xf0df2249, 0x1b, 0x80000000}};
  // -12637700879751877600617488
  s21_decimal dec_2 = {{0x206e2410, 0x23301568, 0xa7423, 0x80000000}};
  // -12638216298471056408427086
  s21_decimal dec_check = {{0xc815ba4e, 0x140f37b1, 0xa743f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_336) {
  // -2373078097719110
  s21_decimal dec_1 = {{0x4d09ef46, 0x86e4d, 0x0, 0x80000000}};
  // 18250337464
  s21_decimal dec_2 = {{0x3fce0cb8, 0x4, 0x0, 0x0}};
  // -2373059847381646
  s21_decimal dec_check = {{0xd3be28e, 0x86e49, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_337) {
  // -10461689
  s21_decimal dec_1 = {{0x9fa1f9, 0x0, 0x0, 0x80000000}};
  // 95611797.4430
  s21_decimal dec_2 = {{0x9d127d9e, 0xde, 0x0, 0x40000}};
  // 85150108.4430
  s21_decimal dec_check = {{0x416b6f0e, 0xc6, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_338) {
  // 757917.26
  s21_decimal dec_1 = {{0x4847d6e, 0x0, 0x0, 0x20000}};
  // 76942602789180871483
  s21_decimal dec_2 = {{0xcf1b133b, 0x2bcb0993, 0x4, 0x0}};
  // 76942602789181629400.26
  s21_decimal dec_check = {{0xeb18007a, 0x1b4fbdbc, 0x1a1, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_339) {
  // 62045980021814939678998221
  s21_decimal dec_1 = {{0x5d4cfecd, 0x511215a4, 0x3352bf, 0x0}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 62045980021814939678998215
  s21_decimal dec_check = {{0x5d4cfec7, 0x511215a4, 0x3352bf, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_340) {
  // -0.12390841994891
  s21_decimal dec_1 = {{0xf7bc4e8b, 0xb44, 0x0, 0x800e0000}};
  // -878.10015152252
  s21_decimal dec_2 = {{0xdcc2c87c, 0x4fdc, 0x0, 0x800b0000}};
  // -878.22405994246891
  s21_decimal dec_check = {{0x509b72eb, 0x1380203, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_341) {
  // 1455277.5
  s21_decimal dec_1 = {{0xde0ec7, 0x0, 0x0, 0x10000}};
  // 9743681
  s21_decimal dec_2 = {{0x94ad41, 0x0, 0x0, 0x0}};
  // 11198958.5
  s21_decimal dec_check = {{0x6acd351, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_343) {
  // 49733411601153
  s21_decimal dec_1 = {{0x7654fb01, 0x2d3b, 0x0, 0x0}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 49733411601147
  s21_decimal dec_check = {{0x7654fafb, 0x2d3b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_344) {
  // 5267.43
  s21_decimal dec_1 = {{0x80997, 0x0, 0x0, 0x20000}};
  // 167908.954246058305465
  s21_decimal dec_2 = {{0x5b9f67b9, 0x1a347044, 0x9, 0xf0000}};
  // 173176.384246058305465
  s21_decimal dec_check = {{0xa8dbc7b9, 0x634e1bf1, 0x9, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_345) {
  // -704836531595715846.76934
  s21_decimal dec_1 = {{0x275f7446, 0xed2eb63b, 0xeec, 0x80050000}};
  // 31193147276.4221745800278
  s21_decimal dec_2 = {{0x40b82456, 0xd6ca2349, 0x420d, 0xd0000}};
  // -704836500402568570.34716541997
  s21_decimal dec_check = {{0x5536f42d, 0xeaf00394, 0xe3beb574, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_346) {
  // 72
  s21_decimal dec_1 = {{0x48, 0x0, 0x0, 0x0}};
  // -9440302312880893
  s21_decimal dec_2 = {{0xa9ee7afd, 0x2189e7, 0x0, 0x80000000}};
  // -9440302312880821
  s21_decimal dec_check = {{0xa9ee7ab5, 0x2189e7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_347) {
  // 34550.52196789761581997254
  s21_decimal dec_1 = {{0x6c375cc6, 0xc1408134, 0x2dba2, 0x140000}};
  // -151585062767012449765298565
  s21_decimal dec_2 = {{0x9b681185, 0xb7ea3298, 0x7d6362, 0x80000000}};
  // -151585062767012449765264014.48
  s21_decimal dec_check = {{0xb4721fa8, 0xd77bc39c, 0x30fad28f, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_348) {
  // 5792120
  s21_decimal dec_1 = {{0x586178, 0x0, 0x0, 0x0}};
  // 267258
  s21_decimal dec_2 = {{0x413fa, 0x0, 0x0, 0x0}};
  // 6059378
  s21_decimal dec_check = {{0x5c7572, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_349) {
  // 6464437402285106088575465912
  s21_decimal dec_1 = {{0x3eff79b8, 0xc5cfdf7d, 0x14e341dd, 0x0}};
  // 39531043135007682166
  s21_decimal dec_2 = {{0x6ec6ee76, 0x249a7a49, 0x2, 0x0}};
  // 6464437441816149223583148078
  s21_decimal dec_check = {{0xadc6682e, 0xea6a59c6, 0x14e341df, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_350) {
  // 0.1406387638100399105352233972
  s21_decimal dec_1 = {{0x476173f4, 0xa1173769, 0x48b562a, 0x1c0000}};
  // -969.9133339217698
  s21_decimal dec_2 = {{0x75502f22, 0x22754f, 0x0, 0x800d0000}};
  // -969.77269515795976008946477660
  s21_decimal dec_check = {{0x293a7dd6, 0x74251e9a, 0x1f55c58f, 0x80190000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_351) {
  // 57
  s21_decimal dec_1 = {{0x39, 0x0, 0x0, 0x0}};
  // -89171778630893053235
  s21_decimal dec_2 = {{0x64262533, 0xd581cc36, 0x4, 0x80000000}};
  // -89171778630893053178
  s21_decimal dec_check = {{0x642624fa, 0xd581cc36, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_352) {
  // -578559358523
  s21_decimal dec_1 = {{0xb4d3363b, 0x86, 0x0, 0x80000000}};
  // 259.947
  s21_decimal dec_2 = {{0x3f76b, 0x0, 0x0, 0x30000}};
  // -578559358263.053
  s21_decimal dec_check = {{0x5907df0d, 0x20e32, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_353) {
  // 3080848291506.003214049
  s21_decimal dec_1 = {{0x446d7ee1, 0x35bde17, 0xa7, 0x90000}};
  // 5.363170132765576906
  s21_decimal dec_2 = {{0x97a0eca, 0x4a6dced2, 0x0, 0x120000}};
  // 3080848291511.3663841817655769
  s21_decimal dec_check = {{0x3f04f9d9, 0x609fd87d, 0x638c2e05, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_354) {
  // 1079
  s21_decimal dec_1 = {{0x437, 0x0, 0x0, 0x0}};
  // -40363923
  s21_decimal dec_2 = {{0x267e793, 0x0, 0x0, 0x80000000}};
  // -40362844
  s21_decimal dec_check = {{0x267e35c, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_355) {
  // 5821.7779050
  s21_decimal dec_1 = {{0x8e0ccf6a, 0xd, 0x0, 0x70000}};
  // 9.31496298376674199
  s21_decimal dec_2 = {{0xb6553b97, 0xced56f2, 0x0, 0x110000}};
  // 5831.09286798376674199
  s21_decimal dec_check = {{0xd09da397, 0x9c4456e5, 0x1f, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_356) {
  // -7209180771012487751767940
  s21_decimal dec_1 = {{0xa3c59784, 0x79021f21, 0x5f69a, 0x80000000}};
  // -3008536523566886078469279.60
  s21_decimal dec_2 = {{0xeff50e58, 0x2c9cb2bb, 0xf8dc3d, 0x80020000}};
  // -10217717294579373830237219.60
  s21_decimal dec_check = {{0xe9243de8, 0x7170dbdf, 0x34d3094, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_357) {
  // 0.5591906210092676915257433721
  s21_decimal dec_1 = {{0x3e145e79, 0x10ddb896, 0x12118433, 0x1c0000}};
  // 5747498231819211720704663354
  s21_decimal dec_2 = {{0xa9ec1f3a, 0x76f9ce54, 0x12923817, 0x0}};
  // 5747498231819211720704663354.6
  s21_decimal dec_check = {{0xa339384a, 0xa5c20f4e, 0xb9b630ea, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_358) {
  // -69886139687.61240088298
  s21_decimal dec_1 = {{0x1a96eeea, 0xda807153, 0x17a, 0x800b0000}};
  // -6089.482389769786375282152
  s21_decimal dec_2 = {{0x92fc1de8, 0x8076f32b, 0x5097f, 0x80150000}};
  // -69886145777.094790652766375282
  s21_decimal dec_check = {{0x974ecd72, 0xe88286c8, 0xe1d07701, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_359) {
  // 9743.19762729055304156772
  s21_decimal dec_1 = {{0x7ba20664, 0xfaec92bb, 0xce51, 0x140000}};
  // -3072208679106124875060596.178
  s21_decimal dec_2 = {{0xd40dcdd2, 0x35f5f2d4, 0x9ed457e, 0x80030000}};
  // -3072208679106124875050852.9804
  s21_decimal dec_check = {{0x42bb588c, 0x1b9b7c50, 0x6344b6ee, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_360) {
  // 931.4558
  s21_decimal dec_1 = {{0x8e20fe, 0x0, 0x0, 0x40000}};
  // 587544449688
  s21_decimal dec_2 = {{0xcc60d298, 0x88, 0x0, 0x0}};
  // 587544450619.4558
  s21_decimal dec_check = {{0x86b0727e, 0x14dfaf, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_361) {
  // -71791441.610516178
  s21_decimal dec_1 = {{0x8f1ba6d2, 0xff0def, 0x0, 0x80090000}};
  // -4094.100687943745325153
  s21_decimal dec_2 = {{0xb152c861, 0xf10f8435, 0xdd, 0x80120000}};
  // -71795535.711204121745325153
  s21_decimal dec_check = {{0x43487c61, 0xca260136, 0x3b634b, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_362) {
  // -26194316739046142916
  s21_decimal dec_1 = {{0x6ce9f3c4, 0x6b84e84a, 0x1, 0x80000000}};
  // -976449155442544
  s21_decimal dec_2 = {{0x490d2770, 0x37813, 0x0, 0x80000000}};
  // -26195293188201585460
  s21_decimal dec_check = {{0xb5f71b34, 0x6b88605d, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_364) {
  // -482149642876.347460671802838
  s21_decimal dec_1 = {{0xd3108dd6, 0x8373937c, 0x18ed328, 0x800f0000}};
  // -15104747300234695253973
  s21_decimal dec_2 = {{0xb1939fd5, 0xd47a592e, 0x332, 0x80000000}};
  // -15104747300716844896849.347461
  s21_decimal dec_check = {{0x81d1c385, 0xea01ada6, 0x30ce5aa7, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_365) {
  // -812772782.8027
  s21_decimal dec_1 = {{0x62547c3b, 0x764, 0x0, 0x80040000}};
  // -0.8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80010000}};
  // -812772783.6027
  s21_decimal dec_check = {{0x62549b7b, 0x764, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_366) {
  // 1777554735008818522273
  s21_decimal dec_1 = {{0x163de8a1, 0x5c87059a, 0x60, 0x0}};
  // -50990159986714673099.4
  s21_decimal dec_2 = {{0x34a5fdf2, 0xa44e6381, 0x1b, 0x80010000}};
  // 1726564575022103849173.6
  s21_decimal dec_check = {{0xa9c51858, 0xf8f7d483, 0x3a7, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_367) {
  // -21567491270171661
  s21_decimal dec_1 = {{0xdfdadc0d, 0x4c9f84, 0x0, 0x80000000}};
  // -985922042252.189841226099978
  s21_decimal dec_2 = {{0xc9e66d0a, 0x16c47c0, 0x32f891d, 0x800f0000}};
  // -21568477192213913.189841226100
  s21_decimal dec_check = {{0x4861c974, 0x733afd93, 0x45b106b3, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_368) {
  // 80.95116405
  s21_decimal dec_1 = {{0xe281ac75, 0x1, 0x0, 0x80000}};
  // 78.11942372379087819441202764
  s21_decimal dec_2 = {{0xd188664c, 0x92c06bfc, 0x193de324, 0x1a0000}};
  // 159.07058777379087819441202764
  s21_decimal dec_check = {{0x823c664c, 0x36e641f3, 0x336602b8, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_369) {
  // 9.554
  s21_decimal dec_1 = {{0x2552, 0x0, 0x0, 0x30000}};
  // -78
  s21_decimal dec_2 = {{0x4e, 0x0, 0x0, 0x80000000}};
  // -68.446
  s21_decimal dec_check = {{0x10b5e, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_370) {
  // 19850465638366021952907925444
  s21_decimal dec_1 = {{0x38ea57c4, 0x7f8e48b1, 0x4023eb9a, 0x0}};
  // 411
  s21_decimal dec_2 = {{0x19b, 0x0, 0x0, 0x0}};
  // 19850465638366021952907925855
  s21_decimal dec_check = {{0x38ea595f, 0x7f8e48b1, 0x4023eb9a, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_371) {
  // -64794037.463561072
  s21_decimal dec_1 = {{0x72943370, 0xe631d5, 0x0, 0x80090000}};
  // -620985240597
  s21_decimal dec_2 = {{0x959acc15, 0x90, 0x0, 0x80000000}};
  // -621050034634.463561072
  s21_decimal dec_check = {{0x333ec570, 0xaaccf409, 0x21, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_372) {
  // 3688222868320153936886442181
  s21_decimal dec_1 = {{0x375f28c5, 0x5279d461, 0xbead392, 0x0}};
  // 433872804
  s21_decimal dec_2 = {{0x19dc5fa4, 0x0, 0x0, 0x0}};
  // 3688222868320153937320314985
  s21_decimal dec_check = {{0x513b8869, 0x5279d461, 0xbead392, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_373) {
  // -8939226254986597571.0
  s21_decimal dec_1 = {{0x29374f9e, 0xd8911d2b, 0x4, 0x80010000}};
  // -154
  s21_decimal dec_2 = {{0x9a, 0x0, 0x0, 0x80000000}};
  // -8939226254986597725.0
  s21_decimal dec_check = {{0x293755a2, 0xd8911d2b, 0x4, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_374) {
  // -3940.4421814077672458
  s21_decimal dec_1 = {{0xc7c0cc0a, 0x22d8a0dd, 0x2, 0x80100000}};
  // 1068939453276007115441
  s21_decimal dec_2 = {{0x44ab2ab1, 0xf283d145, 0x39, 0x0}};
  // 1068939453276007111500.5578186
  s21_decimal dec_check = {{0xcd014bca, 0xbfa7fe76, 0x228a0f56, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_375) {
  // -963.739207945718665848351
  s21_decimal dec_1 = {{0x2f30261f, 0x683add78, 0xcc14, 0x80150000}};
  // 6970678953134912983467175426
  s21_decimal dec_2 = {{0x2a2e02, 0x3c01294c, 0x168602af, 0x0}};
  // 6970678953134912983467174462.3
  s21_decimal dec_check = {{0x1a5a66f, 0x580b9cf8, 0xe13c1ad8, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_376) {
  // 974702334.35
  s21_decimal dec_1 = {{0xb1adbb5b, 0x16, 0x0, 0x20000}};
  // -91975697956622.547055
  s21_decimal dec_2 = {{0xc11bb86f, 0xfc6b51fb, 0x4, 0x80060000}};
  // -91974723254288.197055
  s21_decimal dec_check = {{0x2eb525bf, 0xfc67db7f, 0x4, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_377) {
  // 7.059029808001528
  s21_decimal dec_1 = {{0x742a31f8, 0x191426, 0x0, 0xf0000}};
  // -421685529152.1
  s21_decimal dec_2 = {{0xd0296681, 0x3d5, 0x0, 0x80010000}};
  // -421685529145.040970191998472
  s21_decimal dec_check = {{0xcef00e08, 0x5719d079, 0x15ccf62, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_378) {
  // -55405658280.2295
  s21_decimal dec_1 = {{0x59cdab77, 0x1f7e9, 0x0, 0x80040000}};
  // 56097448338685807479.740456271
  s21_decimal dec_2 = {{0x49445d4f, 0xfc1d811a, 0xb542b8bf, 0x90000}};
  // 56097448283280149199.510956271
  s21_decimal dec_check = {{0xd581e8ef, 0xfb351072, 0xb542b8bc, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_379) {
  // -7.8675738548192770264348
  s21_decimal dec_1 = {{0x49000d1c, 0x53487a7, 0x10a9, 0x80160000}};
  // 2779
  s21_decimal dec_2 = {{0xadb, 0x0, 0x0, 0x0}};
  // 2771.1324261451807229735652
  s21_decimal dec_check = {{0xb3bff2e4, 0xe5f95605, 0x16ec19, 0x160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_380) {
  // 6460795.563527319270445021
  s21_decimal dec_1 = {{0x1763cfdd, 0x6de67a23, 0x55820, 0x120000}};
  // -157794034789747940654.2927173
  s21_decimal dec_2 = {{0x5443545, 0xa98298aa, 0x5193ddd, 0x80070000}};
  // -157794034789741479858.72918998
  s21_decimal dec_check = {{0x163619d6, 0x9f17ab09, 0x32fc6aa8, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_381) {
  // 204937
  s21_decimal dec_1 = {{0x32089, 0x0, 0x0, 0x0}};
  // 0.95
  s21_decimal dec_2 = {{0x5f, 0x0, 0x0, 0x20000}};
  // 204937.95
  s21_decimal dec_check = {{0x138b5e3, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_382) {
  // -9782661731.53
  s21_decimal dec_1 = {{0xc5352ee1, 0xe3, 0x0, 0x80020000}};
  // 54988255342.538266274364311226
  s21_decimal dec_2 = {{0xcb06c6ba, 0x2daa6c5f, 0xb1ad37ff, 0x120000}};
  // 45205593611.008266274364311226
  s21_decimal dec_check = {{0xe465c6ba, 0x13dd9941, 0x921130cc, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_383) {
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // 2.850905
  s21_decimal dec_2 = {{0x2b8059, 0x0, 0x0, 0x60000}};
  // 7.850905
  s21_decimal dec_check = {{0x77cb99, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_384) {
  // -121653030984050220920678
  s21_decimal dec_1 = {{0x8ed2ef66, 0xd2f33e9c, 0x19c2, 0x80000000}};
  // -214704876434574550
  s21_decimal dec_2 = {{0x936d4cd6, 0x2fac8f2, 0x0, 0x80000000}};
  // -121653245688926655495228
  s21_decimal dec_check = {{0x22403c3c, 0xd5ee078f, 0x19c2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_385) {
  // 9628606483019908
  s21_decimal dec_1 = {{0xa51a3884, 0x22352a, 0x0, 0x0}};
  // 7253630575737146296293
  s21_decimal dec_2 = {{0x44c9c7e5, 0x38589140, 0x189, 0x0}};
  // 7253640204343629316201
  s21_decimal dec_check = {{0xe9e40069, 0x387ac66a, 0x189, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_386) {
  // -893663157713819908991
  s21_decimal dec_1 = {{0x421fbb7f, 0x7211531c, 0x30, 0x80000000}};
  // 158660714
  s21_decimal dec_2 = {{0x974f86a, 0x0, 0x0, 0x0}};
  // -893663157713661248277
  s21_decimal dec_check = {{0x38aac315, 0x7211531c, 0x30, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_387) {
  // 4652
  s21_decimal dec_1 = {{0x122c, 0x0, 0x0, 0x0}};
  // -94.8109027840126953
  s21_decimal dec_2 = {{0x34c06fe9, 0xd285c23, 0x0, 0x80100000}};
  // 4557.1890972159873047
  s21_decimal dec_check = {{0x926b9017, 0x786fe163, 0x2, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_388) {
  // -908221049426417
  s21_decimal dec_1 = {{0xb10751f1, 0x33a05, 0x0, 0x80000000}};
  // 7621621713
  s21_decimal dec_2 = {{0xc648b7d1, 0x1, 0x0, 0x0}};
  // -908213427804704
  s21_decimal dec_check = {{0xeabe9a20, 0x33a03, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_389) {
  // 16.44351782
  s21_decimal dec_1 = {{0x6202d126, 0x0, 0x0, 0x80000}};
  // -10611597150260618844619627
  s21_decimal dec_2 = {{0x980ac36b, 0xd58da6bc, 0x8c717, 0x80000000}};
  // -10611597150260618844619610.556
  s21_decimal dec_check = {{0xea0b19bc, 0x315350b1, 0x2249b51a, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_390) {
  // 75237129860
  s21_decimal dec_1 = {{0x847b7e84, 0x11, 0x0, 0x0}};
  // 397228
  s21_decimal dec_2 = {{0x60fac, 0x0, 0x0, 0x0}};
  // 75237527088
  s21_decimal dec_check = {{0x84818e30, 0x11, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_391) {
  // -56488493898306118603.552
  s21_decimal dec_1 = {{0x4cfdd320, 0x3f54f7a4, 0xbf6, 0x80030000}};
  // -417179179
  s21_decimal dec_2 = {{0x18dda62b, 0x0, 0x0, 0x80000000}};
  // -56488493898723297782.552
  s21_decimal dec_check = {{0x6eceeb18, 0x3f54f805, 0xbf6, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_392) {
  // -22413716694059019108133
  s21_decimal dec_1 = {{0x3e8b7f25, 0xccde449, 0x4bf, 0x80000000}};
  // -848
  s21_decimal dec_2 = {{0x350, 0x0, 0x0, 0x80000000}};
  // -22413716694059019108981
  s21_decimal dec_check = {{0x3e8b8275, 0xccde449, 0x4bf, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_393) {
  // -3908183295048255304
  s21_decimal dec_1 = {{0x1a778748, 0x363ca800, 0x0, 0x80000000}};
  // -6862726305835
  s21_decimal dec_2 = {{0xda5d182b, 0x63d, 0x0, 0x80000000}};
  // -3908190157774561139
  s21_decimal dec_check = {{0xf4d49f73, 0x363cae3d, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_394) {
  // 48711775.9823722578
  s21_decimal dec_1 = {{0x8e13b852, 0x6c29705, 0x0, 0xa0000}};
  // -52115.1
  s21_decimal dec_2 = {{0x7f3bf, 0x0, 0x0, 0x80010000}};
  // 48659660.8823722578
  s21_decimal dec_check = {{0xa1d90252, 0x6c0bd09, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_395) {
  // -75227496191.717600
  s21_decimal dec_1 = {{0x5bd970e0, 0x10b4302, 0x0, 0x80060000}};
  // 778511.15535
  s21_decimal dec_2 = {{0x2049c00f, 0x12, 0x0, 0x50000}};
  // -75226717680.562250
  s21_decimal dec_check = {{0x18f7f04a, 0x10b424d, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_396) {
  // 726440873028020259595.3418630
  s21_decimal dec_1 = {{0x471a2186, 0x5c104125, 0x1778fa62, 0x70000}};
  // 0.48257070019345512076
  s21_decimal dec_2 = {{0x743df68c, 0x9db38d81, 0x2, 0x140000}};
  // 726440873028020259595.82443370
  s21_decimal dec_check = {{0xc9e5a76a, 0x98a28b74, 0xeab9c7d7, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_397) {
  // -75041
  s21_decimal dec_1 = {{0x12521, 0x0, 0x0, 0x80000000}};
  // 5212721186379809612.545149125
  s21_decimal dec_2 = {{0x95048c5, 0xbde0b99e, 0x10d7dca5, 0x90000}};
  // 5212721186379734571.545149125
  s21_decimal dec_check = {{0x312a3ec5, 0xbde0755e, 0x10d7dca5, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_398) {
  // 83279.9
  s21_decimal dec_1 = {{0xcb51f, 0x0, 0x0, 0x10000}};
  // 5773.2793792820413250421
  s21_decimal dec_2 = {{0x818cbb75, 0xb376391e, 0xc39, 0x130000}};
  // 89053.1793792820413250421
  s21_decimal dec_check = {{0x7aa8bb75, 0xd34536e9, 0xbc93, 0x130000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_399) {
  // -0.472364
  s21_decimal dec_1 = {{0x7352c, 0x0, 0x0, 0x80060000}};
  // -2207.6360787643178585835
  s21_decimal dec_2 = {{0x2728eeb, 0xc30cf2ca, 0x4ac, 0x80130000}};
  // -2208.1084427643178585835
  s21_decimal dec_check = {{0x99460eeb, 0x49ab057, 0x4ad, 0x80130000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_400) {
  // 83.6
  s21_decimal dec_1 = {{0x344, 0x0, 0x0, 0x10000}};
  // -495200523467256
  s21_decimal dec_2 = {{0xdb4b39f8, 0x1c261, 0x0, 0x80000000}};
  // -495200523467172.4
  s21_decimal dec_check = {{0x90f0406c, 0x1197d2, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_402) {
  // 6394369257448134537990295687
  s21_decimal dec_1 = {{0x1682d087, 0x7ad63b5, 0x14a94c5c, 0x0}};
  // 526.8385386629
  s21_decimal dec_2 = {{0xa43d5085, 0x4ca, 0x0, 0xa0000}};
  // 6394369257448134537990296213.8
  s21_decimal dec_check = {{0xe11c39da, 0x4cc5e512, 0xce9cfb98, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_403) {
  // 82775554649192499
  s21_decimal dec_1 = {{0xaaf37833, 0x12613ed, 0x0, 0x0}};
  // -2148
  s21_decimal dec_2 = {{0x864, 0x0, 0x0, 0x80000000}};
  // 82775554649190351
  s21_decimal dec_check = {{0xaaf36fcf, 0x12613ed, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_404) {
  // -266817132459
  s21_decimal dec_1 = {{0x1f8a57ab, 0x3e, 0x0, 0x80000000}};
  // 747748
  s21_decimal dec_2 = {{0xb68e4, 0x0, 0x0, 0x0}};
  // -266816384711
  s21_decimal dec_check = {{0x1f7eeec7, 0x3e, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_405) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -4120507.4
  s21_decimal dec_2 = {{0x274bd52, 0x0, 0x0, 0x80010000}};
  // -4120512.4
  s21_decimal dec_check = {{0x274bd84, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_406) {
  // -13832620260411536813
  s21_decimal dec_1 = {{0xa6b375ad, 0xbff756d6, 0x0, 0x80000000}};
  // -68
  s21_decimal dec_2 = {{0x44, 0x0, 0x0, 0x80000000}};
  // -13832620260411536881
  s21_decimal dec_check = {{0xa6b375f1, 0xbff756d6, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_407) {
  // -2.85684916
  s21_decimal dec_1 = {{0x110734b4, 0x0, 0x0, 0x80080000}};
  // -8320427347861949992699707
  s21_decimal dec_2 = {{0x3bfc873b, 0x45343705, 0x6e1eb, 0x80000000}};
  // -8320427347861949992699709.8568
  s21_decimal dec_check = {{0x527049a1, 0x53f6ec72, 0x1ae27f06, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_408) {
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 3642994840324794626
  s21_decimal dec_2 = {{0x8023e902, 0x328e8481, 0x0, 0x0}};
  // 3642994840324794617
  s21_decimal dec_check = {{0x8023e8f9, 0x328e8481, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_409) {
  // 480459872
  s21_decimal dec_1 = {{0x1ca33c60, 0x0, 0x0, 0x0}};
  // -996212867
  s21_decimal dec_2 = {{0x3b610083, 0x0, 0x0, 0x80000000}};
  // -515752995
  s21_decimal dec_check = {{0x1ebdc423, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_410) {
  // -7465968787786596120268.896
  s21_decimal dec_1 = {{0xf6501060, 0xfa9dddf5, 0x62cfa, 0x80030000}};
  // 78266
  s21_decimal dec_2 = {{0x131ba, 0x0, 0x0, 0x0}};
  // -7465968787786596042002.896
  s21_decimal dec_check = {{0xf1a5d1d0, 0xfa9dddf5, 0x62cfa, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_411) {
  // -728785336286800349637723541
  s21_decimal dec_1 = {{0x357d4595, 0x3e6f56b3, 0x25ad64c, 0x80000000}};
  // -165
  s21_decimal dec_2 = {{0xa5, 0x0, 0x0, 0x80000000}};
  // -728785336286800349637723706
  s21_decimal dec_check = {{0x357d463a, 0x3e6f56b3, 0x25ad64c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_412) {
  // 17
  s21_decimal dec_1 = {{0x11, 0x0, 0x0, 0x0}};
  // -88520413861241318384.35612344
  s21_decimal dec_2 = {{0xf7ad56b8, 0x169f5995, 0x1c9a3cad, 0x80080000}};
  // -88520413861241318367.35612344
  s21_decimal dec_check = {{0x925965b8, 0x169f5995, 0x1c9a3cad, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_413) {
  // 73338512567017037
  s21_decimal dec_1 = {{0x15e99e4d, 0x1048cfd, 0x0, 0x0}};
  // 49.179893704
  s21_decimal dec_2 = {{0x73599fc8, 0xb, 0x0, 0x90000}};
  // 73338512567017086.179893704
  s21_decimal dec_check = {{0xc39461c8, 0xbb8bb95a, 0x3caa08, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_414) {
  // -21725867647.9913
  s21_decimal dec_1 = {{0x7a3c67a9, 0xc598, 0x0, 0x80040000}};
  // 5923262207
  s21_decimal dec_2 = {{0x610dceff, 0x1, 0x0, 0x0}};
  // -15802605440.9913
  s21_decimal dec_check = {{0x4ed69eb9, 0x8fb9, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_415) {
  // -35.5
  s21_decimal dec_1 = {{0x163, 0x0, 0x0, 0x80010000}};
  // 59011101252252640037169193
  s21_decimal dec_2 = {{0x4165e829, 0x357bf596, 0x30d016, 0x0}};
  // 59011101252252640037169157.5
  s21_decimal dec_check = {{0x8dfb1037, 0x16d797de, 0x1e820de, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_416) {
  // 91851092625830
  s21_decimal dec_1 = {{0xbfbf89a6, 0x5389, 0x0, 0x0}};
  // -8160318518308980732051.8
  s21_decimal dec_2 = {{0xb78be5c6, 0xb7b03bd0, 0x1147, 0x80010000}};
  // -8160318426457888106221.8
  s21_decimal dec_check = {{0x3a10854a, 0xb7acf86f, 0x1147, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_417) {
  // 33344173188
  s21_decimal dec_1 = {{0xc377b484, 0x7, 0x0, 0x0}};
  // -76340139.47862538279
  s21_decimal dec_2 = {{0x24b95827, 0x69f1773d, 0x0, 0x800b0000}};
  // 33267833048.52137461721
  s21_decimal dec_check = {{0xabb647d9, 0x58648db5, 0xb4, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_418) {
  // -753129026473126927849501
  s21_decimal dec_1 = {{0x5ca4d81d, 0x34d240b6, 0x9f7b, 0x80000000}};
  // 3108079032
  s21_decimal dec_2 = {{0xb94185b8, 0x0, 0x0, 0x0}};
  // -753129026473123819770469
  s21_decimal dec_check = {{0xa3635265, 0x34d240b5, 0x9f7b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_419) {
  // -583
  s21_decimal dec_1 = {{0x247, 0x0, 0x0, 0x80000000}};
  // 1262628
  s21_decimal dec_2 = {{0x134424, 0x0, 0x0, 0x0}};
  // 1262045
  s21_decimal dec_check = {{0x1341dd, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_420) {
  // -0.96238474190058
  s21_decimal dec_1 = {{0x44115cea, 0x5787, 0x0, 0x800e0000}};
  // 1836839291816189.445
  s21_decimal dec_2 = {{0x9a2f1e05, 0x197dc39a, 0x0, 0x30000}};
  // 1836839291816188.4826152580994
  s21_decimal dec_check = {{0x2af1b782, 0x58cffa7b, 0x3b59fa7f, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_421) {
  // 48
  s21_decimal dec_1 = {{0x30, 0x0, 0x0, 0x0}};
  // 5872842139170662611238007931
  s21_decimal dec_2 = {{0xacd4347b, 0x4c339bb4, 0x12f9e6b2, 0x0}};
  // 5872842139170662611238007979
  s21_decimal dec_check = {{0xacd434ab, 0x4c339bb4, 0x12f9e6b2, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_422) {
  // 6465231988
  s21_decimal dec_1 = {{0x815b9c74, 0x1, 0x0, 0x0}};
  // 8875059961155221.9540003
  s21_decimal dec_2 = {{0x933c2a23, 0x2dfd3de0, 0x12cb, 0x70000}};
  // 8875066426387209.9540003
  s21_decimal dec_check = {{0xd3965c23, 0x2ee2eed1, 0x12cb, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_423) {
  // -328.1358163
  s21_decimal dec_1 = {{0xc3958d53, 0x0, 0x0, 0x80070000}};
  // 4.1
  s21_decimal dec_2 = {{0x29, 0x0, 0x0, 0x10000}};
  // -324.0358163
  s21_decimal dec_check = {{0xc123f113, 0x0, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_424) {
  // -1987419
  s21_decimal dec_1 = {{0x1e535b, 0x0, 0x0, 0x80000000}};
  // 9964401
  s21_decimal dec_2 = {{0x980b71, 0x0, 0x0, 0x0}};
  // 7976982
  s21_decimal dec_check = {{0x79b816, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_425) {
  // -196512
  s21_decimal dec_1 = {{0x2ffa0, 0x0, 0x0, 0x80000000}};
  // -2821113836868561913793949173
  s21_decimal dec_2 = {{0x7d4f2df5, 0x89c04e0a, 0x91d9217, 0x80000000}};
  // -2821113836868561913794145685
  s21_decimal dec_check = {{0x7d522d95, 0x89c04e0a, 0x91d9217, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_426) {
  // -42.938994536749680626
  s21_decimal dec_1 = {{0xd76747f2, 0x53e5f407, 0x2, 0x80120000}};
  // -934340
  s21_decimal dec_2 = {{0xe41c4, 0x0, 0x0, 0x80000000}};
  // -934382.938994536749680626
  s21_decimal dec_check = {{0x63f747f2, 0x289a8c, 0xc5dd, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_427) {
  // 843.7
  s21_decimal dec_1 = {{0x20f5, 0x0, 0x0, 0x10000}};
  // 28663800824
  s21_decimal dec_2 = {{0xac7ee3f8, 0x6, 0x0, 0x0}};
  // 28663801667.7
  s21_decimal dec_check = {{0xbcf508a5, 0x42, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_428) {
  // 62
  s21_decimal dec_1 = {{0x3e, 0x0, 0x0, 0x0}};
  // -38637496339946.6
  s21_decimal dec_2 = {{0xee718b2a, 0x15f67, 0x0, 0x80010000}};
  // -38637496339884.6
  s21_decimal dec_check = {{0xee7188be, 0x15f67, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_429) {
  // -4290274085725732462
  s21_decimal dec_1 = {{0xd4befe6e, 0x3b8a1d8c, 0x0, 0x80000000}};
  // 8.6
  s21_decimal dec_2 = {{0x56, 0x0, 0x0, 0x10000}};
  // -4290274085725732453.4
  s21_decimal dec_check = {{0x4f75eff6, 0x53652780, 0x2, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_430) {
  // -20209259701065760642361.090
  s21_decimal dec_1 = {{0xfa12e702, 0x29e26875, 0x10b77a, 0x80030000}};
  // 0.1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x10000}};
  // -20209259701065760642360.990
  s21_decimal dec_check = {{0xfa12e69e, 0x29e26875, 0x10b77a, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_431) {
  // 76436656552581680911
  s21_decimal dec_1 = {{0xe32a4f0f, 0x24c58e27, 0x4, 0x0}};
  // -60868077281051004119
  s21_decimal dec_2 = {{0x5211ccd7, 0x4cb6d9cb, 0x3, 0x80000000}};
  // 15568579271530676792
  s21_decimal dec_check = {{0x91188238, 0xd80eb45c, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_432) {
  // -42728161
  s21_decimal dec_1 = {{0x28bfae1, 0x0, 0x0, 0x80000000}};
  // -76374123450612307052671.739
  s21_decimal dec_2 = {{0xf41732fb, 0x87416371, 0x3f2cd9, 0x80030000}};
  // -76374123450612349780832.739
  s21_decimal dec_check = {{0xe6e331e3, 0x8741637b, 0x3f2cd9, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_433) {
  // 71634349635225374395007.0
  s21_decimal dec_1 = {{0xa65b68f6, 0xf0a35de, 0x97b1, 0x10000}};
  // 9475724897266154555829131
  s21_decimal dec_2 = {{0x6df7eb8b, 0x13731164, 0x7d690, 0x0}};
  // 9547359246901379930224138.0
  s21_decimal dec_check = {{0xf20a9c64, 0xd188e3ca, 0x4ef951, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_434) {
  // -70650
  s21_decimal dec_1 = {{0x113fa, 0x0, 0x0, 0x80000000}};
  // 211197.3392372590124
  s21_decimal dec_2 = {{0x5371e62c, 0x1d4f3c9c, 0x0, 0xd0000}};
  // 140547.3392372590124
  s21_decimal dec_check = {{0x95a1a62c, 0x13813e9a, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_435) {
  // -65593958658629436254642940
  s21_decimal dec_1 = {{0x8c6ae2fc, 0x9fbd2ff6, 0x36420f, 0x80000000}};
  // 1673521248225.216
  s21_decimal dec_2 = {{0x78647c0, 0x5f20f, 0x0, 0x30000}};
  // -65593958658627762733394714.784
  s21_decimal dec_check = {{0x7a0060a0, 0xfafd6905, 0xd3f20d07, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_436) {
  // 98471655455423
  s21_decimal dec_1 = {{0x380b3abf, 0x598f, 0x0, 0x0}};
  // -90444445353.9317
  s21_decimal dec_2 = {{0x625f4df5, 0x33696, 0x0, 0x80040000}};
  // 98381211010069.0683
  s21_decimal dec_check = {{0xd44776fb, 0xda733e6, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_437) {
  // -0.52050
  s21_decimal dec_1 = {{0xcb52, 0x0, 0x0, 0x80050000}};
  // 0.2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x10000}};
  // -0.32050
  s21_decimal dec_check = {{0x7d32, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_438) {
  // 0.647686269290818
  s21_decimal dec_1 = {{0x3601c942, 0x24d11, 0x0, 0xf0000}};
  // 5329770892.21
  s21_decimal dec_2 = {{0x17e8fac5, 0x7c, 0x0, 0x20000}};
  // 5329770892.857686269290818
  s21_decimal dec_check = {{0x8476e942, 0x7583eda2, 0x4689f, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_439) {
  // -338898932360668
  s21_decimal dec_1 = {{0xe7a65dc, 0x1343a, 0x0, 0x80000000}};
  // -3578842592280501503699
  s21_decimal dec_2 = {{0x8d6f46d3, 0x26b0828, 0xc2, 0x80000000}};
  // -3578842931179433864367
  s21_decimal dec_check = {{0x9be9acaf, 0x26c3c62, 0xc2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_440) {
  // 37879846600827828
  s21_decimal dec_1 = {{0x10c9e3b4, 0x869385, 0x0, 0x0}};
  // -968133181808.70
  s21_decimal dec_2 = {{0x1b709006, 0x580d, 0x0, 0x80020000}};
  // 37878878467646019.30
  s21_decimal dec_check = {{0x736c624a, 0x349147ed, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_441) {
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 1511.2
  s21_decimal dec_2 = {{0x3b08, 0x0, 0x0, 0x10000}};
  // 1502.2
  s21_decimal dec_check = {{0x3aae, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_442) {
  // -739720420273791268
  s21_decimal dec_1 = {{0x9385a124, 0xa4403cd, 0x0, 0x80000000}};
  // -0.62401076934185815246404965
  s21_decimal dec_2 = {{0x10487d65, 0x28abf6e1, 0x339df1, 0x801a0000}};
  // -739720420273791268.62401076934
  s21_decimal dec_check = {{0x8057ec6, 0x76b35ce6, 0xef043d31, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_443) {
  // -9796465
  s21_decimal dec_1 = {{0x957b71, 0x0, 0x0, 0x80000000}};
  // 62672.5
  s21_decimal dec_2 = {{0x99025, 0x0, 0x0, 0x10000}};
  // -9733792.5
  s21_decimal dec_check = {{0x5cd4245, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_444) {
  // 231.057112307536
  s21_decimal dec_1 = {{0x2d1a1750, 0xd225, 0x0, 0xc0000}};
  // 339.0
  s21_decimal dec_2 = {{0xd3e, 0x0, 0x0, 0x10000}};
  // 570.057112307536
  s21_decimal dec_check = {{0xc3ae4750, 0x20676, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_445) {
  // 391
  s21_decimal dec_1 = {{0x187, 0x0, 0x0, 0x0}};
  // -3268156465170496379324764
  s21_decimal dec_2 = {{0x81e895c, 0x1df24582, 0x2b40f, 0x80000000}};
  // -3268156465170496379324373
  s21_decimal dec_check = {{0x81e87d5, 0x1df24582, 0x2b40f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_446) {
  // -9602536529.351186
  s21_decimal dec_1 = {{0xc2c65212, 0x221d74, 0x0, 0x80060000}};
  // -37349625911067456788704
  s21_decimal dec_2 = {{0x153358e0, 0xba2edf51, 0x7e8, 0x80000000}};
  // -37349625911077059325233.351186
  s21_decimal dec_check = {{0x81a64a12, 0xb72d1733, 0x78aee2ed, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_447) {
  // 6971442505169.6587167788861321
  s21_decimal dec_1 = {{0x25b28789, 0xbb3ac8cd, 0xe1426bba, 0x100000}};
  // 264658300761017568
  s21_decimal dec_2 = {{0x83b80ce0, 0x3ac4152, 0x0, 0x0}};
  // 264665272203522737.65871677889
  s21_decimal dec_check = {{0x6dc871c1, 0x85cb5297, 0x55849923, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_448) {
  // -29.788
  s21_decimal dec_1 = {{0x745c, 0x0, 0x0, 0x80030000}};
  // -9238974731007144.113085
  s21_decimal dec_2 = {{0x3afa33bd, 0xd887e7aa, 0x1f4, 0x80060000}};
  // -9238974731007173.901085
  s21_decimal dec_check = {{0x3cc0bb1d, 0xd887e7aa, 0x1f4, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_449) {
  // 7092.73970613703332591466593
  s21_decimal dec_1 = {{0x7f1e7861, 0xfdc872c7, 0x24ab29a, 0x170000}};
  // -187587994
  s21_decimal dec_2 = {{0xb2e5d9a, 0x0, 0x0, 0x80000000}};
  // -187580901.26029386296667408533
  s21_decimal dec_check = {{0xb980895, 0x50e5368e, 0x3c9c5417, 0x80140000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_450) {
  // -3828865
  s21_decimal dec_1 = {{0x3a6c81, 0x0, 0x0, 0x80000000}};
  // -387172341846
  s21_decimal dec_2 = {{0x25451856, 0x5a, 0x0, 0x80000000}};
  // -387176170711
  s21_decimal dec_check = {{0x257f84d7, 0x5a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_451) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 845233933002080
  s21_decimal dec_2 = {{0x5c542560, 0x300bc, 0x0, 0x0}};
  // 845233933002072
  s21_decimal dec_check = {{0x5c542558, 0x300bc, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_452) {
  // 787826599051357605208
  s21_decimal dec_1 = {{0xc4444d58, 0xb54a55c0, 0x2a, 0x0}};
  // -14798243588605520427193369
  s21_decimal dec_2 = {{0xd6919419, 0x647375ec, 0xc3da6, 0x80000000}};
  // -14797455762006469069588161
  s21_decimal dec_check = {{0x124d46c1, 0xaf29202c, 0xc3d7b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_453) {
  // -1672718158464967
  s21_decimal dec_1 = {{0xba507c7, 0x5f154, 0x0, 0x80000000}};
  // 998852876658773658900472.724
  s21_decimal dec_2 = {{0x62d5a394, 0xf17edad2, 0x33a3b52, 0x30000}};
  // 998852874986055500435505.724
  s21_decimal dec_check = {{0xe62f423c, 0xda482a84, 0x33a3b52, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_454) {
  // -0.9628
  s21_decimal dec_1 = {{0x259c, 0x0, 0x0, 0x80040000}};
  // 6071835572046876247013895712
  s21_decimal dec_2 = {{0x1faae20, 0xe8ce66d7, 0x139e8131, 0x0}};
  // 6071835572046876247013895711.0
  s21_decimal dec_check = {{0x13cacd36, 0x18100466, 0xc4310bf3, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_455) {
  // 36565357399389297247
  s21_decimal dec_1 = {{0xbbccda5f, 0xfb723ed2, 0x1, 0x0}};
  // -6297645715805644553.9056618464
  s21_decimal dec_2 = {{0xebf80be0, 0x4f6cdabc, 0xcb7ce787, 0x800a0000}};
  // 30267711683583652693.094338154
  s21_decimal dec_check = {{0x35428e6a, 0x2ce161df, 0x61ccdd42, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_456) {
  // -9138783040559630818451.9671154
  s21_decimal dec_1 = {{0xe1e7fd72, 0x396655c2, 0x274a3dd5, 0x80070000}};
  // 0.6525926721487076696198245913
  s21_decimal dec_2 = {{0x3a86e19, 0x7224d823, 0x15161ebc, 0x1c0000}};
  // -9138783040559630818451.3145227
  s21_decimal dec_check = {{0xe184698b, 0x396655c2, 0x274a3dd5, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_457) {
  // -2166360815967965
  s21_decimal dec_1 = {{0x2ee41edd, 0x7b24b, 0x0, 0x80000000}};
  // 0.41197
  s21_decimal dec_2 = {{0xa0ed, 0x0, 0x0, 0x50000}};
  // -2166360815967964.58803
  s21_decimal dec_check = {{0xd5975733, 0xbe6df86c, 0xb, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_458) {
  // -1389.0855319875459
  s21_decimal dec_1 = {{0xc8f7af83, 0x3159a8, 0x0, 0x800d0000}};
  // -143960
  s21_decimal dec_2 = {{0x23258, 0x0, 0x0, 0x80000000}};
  // -145349.0855319875459
  s21_decimal dec_check = {{0x639eaf83, 0x142bd63b, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_459) {
  // 36868
  s21_decimal dec_1 = {{0x9004, 0x0, 0x0, 0x0}};
  // -2.2
  s21_decimal dec_2 = {{0x16, 0x0, 0x0, 0x80010000}};
  // 36865.8
  s21_decimal dec_check = {{0x5a012, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_460) {
  // 383805
  s21_decimal dec_1 = {{0x5db3d, 0x0, 0x0, 0x0}};
  // -638680976621561
  s21_decimal dec_2 = {{0x80bc7ff9, 0x244e0, 0x0, 0x80000000}};
  // -638680976237756
  s21_decimal dec_check = {{0x80b6a4bc, 0x244e0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_461) {
  // -15.13765001845
  s21_decimal dec_1 = {{0x736cda75, 0x160, 0x0, 0x800b0000}};
  // 589853687946850641943650989
  s21_decimal dec_2 = {{0xd5e2e2ad, 0x7efbb2cc, 0x1e7ea60, 0x0}};
  // 589853687946850641943650973.86
  s21_decimal dec_check = {{0x8ca085aa, 0x9a51d803, 0xbe978db1, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_462) {
  // 4473088605726620878
  s21_decimal dec_1 = {{0x312ebcce, 0x3e139a63, 0x0, 0x0}};
  // -55179818
  s21_decimal dec_2 = {{0x349fa2a, 0x0, 0x0, 0x80000000}};
  // 4473088605671441060
  s21_decimal dec_check = {{0x2de4c2a4, 0x3e139a63, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_463) {
  // 76.980
  s21_decimal dec_1 = {{0x12cb4, 0x0, 0x0, 0x30000}};
  // -704.0117377
  s21_decimal dec_2 = {{0xa39faa81, 0x1, 0x0, 0x80070000}};
  // -627.0317377
  s21_decimal dec_check = {{0x75bd7341, 0x1, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_464) {
  // 8791
  s21_decimal dec_1 = {{0x2257, 0x0, 0x0, 0x0}};
  // -64.3215722915
  s21_decimal dec_2 = {{0xc2a509a3, 0x95, 0x0, 0x800a0000}};
  // 8726.6784277085
  s21_decimal dec_check = {{0x61ad725d, 0x4f5e, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_465) {
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // -83875228139107521873150827
  s21_decimal dec_2 = {{0xfc5836b, 0x3a7251ea, 0x456145, 0x80000000}};
  // -83875228139107521873150831
  s21_decimal dec_check = {{0xfc5836f, 0x3a7251ea, 0x456145, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_466) {
  // -9254340725141
  s21_decimal dec_1 = {{0xb1b10995, 0x86a, 0x0, 0x80000000}};
  // -905712
  s21_decimal dec_2 = {{0xdd1f0, 0x0, 0x0, 0x80000000}};
  // -9254341630853
  s21_decimal dec_check = {{0xb1bedb85, 0x86a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_467) {
  // -83299093970577190054620.2831
  s21_decimal dec_1 = {{0xb0e3ccf, 0x53119443, 0x2b108b1, 0x80040000}};
  // 29419572737473
  s21_decimal dec_2 = {{0xc72eb5c1, 0x1ac1, 0x0, 0x0}};
  // -83299093941157617317147.2831
  s21_decimal dec_check = {{0x7a7279bf, 0x4efc62ce, 0x2b108b1, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_468) {
  // -47966128731402535280111
  s21_decimal dec_1 = {{0xd2459def, 0x3fc1a9c4, 0xa28, 0x80000000}};
  // 3893166460067711455231242
  s21_decimal dec_2 = {{0x63e27d0a, 0xfa0887a6, 0x33868, 0x0}};
  // 3845200331336308919951131
  s21_decimal dec_check = {{0x919cdf1b, 0xba46dde1, 0x32e40, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_469) {
  // 93321839
  s21_decimal dec_1 = {{0x58ffa6f, 0x0, 0x0, 0x0}};
  // 421719922214157727069546.0
  s21_decimal dec_2 = {{0xc36c9624, 0xd3f2baad, 0x37d06, 0x10000}};
  // 421719922214157820391385.0
  s21_decimal dec_check = {{0xfb0c5e7a, 0xd3f2baad, 0x37d06, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_470) {
  // -64.2033950
  s21_decimal dec_1 = {{0x2644a91e, 0x0, 0x0, 0x80070000}};
  // -6752068.039
  s21_decimal dec_2 = {{0x927461c7, 0x1, 0x0, 0x80030000}};
  // -6752132.2423950
  s21_decimal dec_check = {{0x870168e, 0x3d69, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_471) {
  // 3728785399762710829209132
  s21_decimal dec_1 = {{0x8910162c, 0xdc8f0c6f, 0x31599, 0x0}};
  // 823552272396276918790331736
  s21_decimal dec_2 = {{0x8b6f1d58, 0x24f57d3c, 0x2a939fa, 0x0}};
  // 827281057796039629619540868
  s21_decimal dec_check = {{0x147f3384, 0x18489ac, 0x2ac4f94, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_472) {
  // -10
  s21_decimal dec_1 = {{0xa, 0x0, 0x0, 0x80000000}};
  // -576547586824836720011
  s21_decimal dec_2 = {{0x8313a58b, 0x41347f89, 0x1f, 0x80000000}};
  // -576547586824836720021
  s21_decimal dec_check = {{0x8313a595, 0x41347f89, 0x1f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_473) {
  // -336.19741
  s21_decimal dec_1 = {{0x200ff1d, 0x0, 0x0, 0x80050000}};
  // -612.556159010513
  s21_decimal dec_2 = {{0xd84346d1, 0x22d1d, 0x0, 0x800c0000}};
  // -948.753569010513
  s21_decimal dec_check = {{0xe775d351, 0x35ee2, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_474) {
  // -79228162514264337591948346852
  s21_decimal dec_1 = {{0xa0e505e4, 0xffffffff, 0xffffffff, 0x80000000}};
  // 2215.6453
  s21_decimal dec_2 = {{0x15214a5, 0x0, 0x0, 0x40000}};
  // -79228162514264337591948344636
  s21_decimal dec_check = {{0xa0e4fd3c, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_475) {
  // 41572154381973506935
  s21_decimal dec_1 = {{0xd53acb77, 0x40edf626, 0x2, 0x0}};
  // -19117.85249555538
  s21_decimal dec_2 = {{0x30afc452, 0x6cac2, 0x0, 0x800b0000}};
  // 41572154381973487817.147504445
  s21_decimal dec_check = {{0xfe53573d, 0xcabb651f, 0x8653ae1c, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_476) {
  // 7549084158.336193512516465632
  s21_decimal dec_1 = {{0xe28db3e0, 0x3cb9294a, 0x186474c0, 0x120000}};
  // -640426259911832
  s21_decimal dec_2 = {{0xdbba1498, 0x24676, 0x0, 0x80000000}};
  // -640418710827673.66380648748353
  s21_decimal dec_check = {{0x2c8d5541, 0xe60ddeb5, 0xceee31b3, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_477) {
  // -435
  s21_decimal dec_1 = {{0x1b3, 0x0, 0x0, 0x80000000}};
  // 16
  s21_decimal dec_2 = {{0x10, 0x0, 0x0, 0x0}};
  // -419
  s21_decimal dec_check = {{0x1a3, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_478) {
  // -31968
  s21_decimal dec_1 = {{0x7ce0, 0x0, 0x0, 0x80000000}};
  // 821722.670091526868171819651
  s21_decimal dec_2 = {{0xecc10a83, 0x3466a386, 0x2a7b68b, 0x150000}};
  // 789754.670091526868171819651
  s21_decimal dec_check = {{0xa0c10a83, 0x73c2be8e, 0x28d450e, 0x150000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_479) {
  // 1890.0764756677838741869679
  s21_decimal dec_1 = {{0xc68e946f, 0x82b2d6fb, 0xfa264, 0x160000}};
  // 6013.0795516337721795
  s21_decimal dec_2 = {{0x7cf611c3, 0x427b7fef, 0x3, 0x100000}};
  // 7903.1560273015560536869679
  s21_decimal dec_check = {{0x7f144b2f, 0x7796e37d, 0x415f95, 0x160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_480) {
  // -279424848523003694539319
  s21_decimal dec_1 = {{0xf8f5e237, 0xa6c18b5f, 0x3b2b, 0x80000000}};
  // -3169486876451105728622128968
  s21_decimal dec_2 = {{0x959a6f48, 0xdb0a8440, 0xa3dbcf3, 0x80000000}};
  // -3169766301299628732316668287
  s21_decimal dec_check = {{0x8e90517f, 0x81cc0fa0, 0xa3df81f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_481) {
  // -37749.77063
  s21_decimal dec_1 = {{0xe1019427, 0x0, 0x0, 0x80050000}};
  // 7482529623
  s21_decimal dec_2 = {{0xbdfe5757, 0x1, 0x0, 0x0}};
  // 7482491873.22937
  s21_decimal dec_check = {{0x57038c39, 0x2a887, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_482) {
  // -5012323402207636138159360
  s21_decimal dec_1 = {{0x95a2ed00, 0x9899984d, 0x42566, 0x80000000}};
  // -38446054565739610403722106
  s21_decimal dec_2 = {{0xb153537a, 0xcb4f9d12, 0x1fcd44, 0x80000000}};
  // -43458377967947246541881466
  s21_decimal dec_check = {{0x46f6407a, 0x63e93560, 0x23f2ab, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_483) {
  // 130372218728511
  s21_decimal dec_1 = {{0xa5c9303f, 0x7692, 0x0, 0x0}};
  // -4507270968508730616320677
  s21_decimal dec_2 = {{0x189812a5, 0xa617e1a0, 0x3ba73, 0x80000000}};
  // -4507270968378358397592166
  s21_decimal dec_check = {{0x72cee266, 0xa6176b0d, 0x3ba73, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_484) {
  // 7073425227.9930048845802178
  s21_decimal dec_1 = {{0x8e996ac2, 0x7fe2a20c, 0x3a828f, 0x100000}};
  // 202504799.43164
  s21_decimal dec_2 = {{0xeea9ddfc, 0x126a, 0x0, 0x50000}};
  // 7275930027.4246448845802178
  s21_decimal dec_check = {{0xb1edcac2, 0x924044b5, 0x3c2f61, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_485) {
  // -24406796.0245954941059125191
  s21_decimal dec_1 = {{0xab74cfc7, 0xa2fabdb1, 0xc9e366, 0x80130000}};
  // 760773705
  s21_decimal dec_2 = {{0x2d587c49, 0x0, 0x0, 0x0}};
  // 736366908.9754045058940874809
  s21_decimal dec_check = {{0x7b33039, 0x3a91a126, 0x17cb1595, 0x130000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_486) {
  // -4136696881599144689159
  s21_decimal dec_1 = {{0xaf267e07, 0x403398a7, 0xe0, 0x80000000}};
  // -81039098678756
  s21_decimal dec_2 = {{0x62b08de4, 0x49b4, 0x0, 0x80000000}};
  // -4136696962638243367915
  s21_decimal dec_check = {{0x11d70beb, 0x4033e25c, 0xe0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_487) {
  // -0.856042784
  s21_decimal dec_1 = {{0x33062d20, 0x0, 0x0, 0x80090000}};
  // -4316.3384058019222
  s21_decimal dec_2 = {{0x7e14fd96, 0x9958de, 0x0, 0x800d0000}};
  // -4317.1944485859222
  s21_decimal dec_check = {{0x9f57af96, 0x9960a7, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_488) {
  // 8.5296219
  s21_decimal dec_1 = {{0x515845b, 0x0, 0x0, 0x70000}};
  // -17413372877560834076058572
  s21_decimal dec_2 = {{0xee5623cc, 0xd5d029fc, 0xe676c, 0x80000000}};
  // -17413372877560834076058563.470
  s21_decimal dec_check = {{0x7bb38e, 0x35240403, 0x38440123, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_489) {
  // 45.21487924616243
  s21_decimal dec_1 = {{0xf19a5c33, 0x101044, 0x0, 0xe0000}};
  // 8.79147656927058342363093
  s21_decimal dec_2 = {{0x59a2bfd5, 0xb0a2733e, 0xba2a, 0x170000}};
  // 54.00635581543301342363093
  s21_decimal dec_check = {{0x5e10fdd5, 0xaa0c3fd, 0x477a1, 0x170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_490) {
  // -175.1
  s21_decimal dec_1 = {{0x6d7, 0x0, 0x0, 0x80010000}};
  // 3032479076122059423420
  s21_decimal dec_2 = {{0x64193ebc, 0x6419e4f8, 0xa4, 0x0}};
  // 3032479076122059423244.9
  s21_decimal dec_check = {{0xe8fc6c81, 0xe902f1b3, 0x66b, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_491) {
  // -98297.047
  s21_decimal dec_1 = {{0x5dbe4d7, 0x0, 0x0, 0x80030000}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -98300.047
  s21_decimal dec_check = {{0x5dbf08f, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_492) {
  // 57879730.55089843418388784054
  s21_decimal dec_1 = {{0x861463b6, 0x7e2697b, 0x12b3b2f8, 0x140000}};
  // -928345430126891594584
  s21_decimal dec_2 = {{0x92977358, 0x5361821d, 0x32, 0x80000000}};
  // -928345430126833714853.44910157
  s21_decimal dec_check = {{0xc5c48788, 0x148b5e30, 0x1dff17ea, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_493) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // 512967701.41635
  s21_decimal dec_2 = {{0x75c32dc3, 0x2ea7, 0x0, 0x50000}};
  // 512967709.41635
  s21_decimal dec_check = {{0x75cf62c3, 0x2ea7, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_494) {
  // 85324353
  s21_decimal dec_1 = {{0x515f241, 0x0, 0x0, 0x0}};
  // 858194033424023.1718
  s21_decimal dec_2 = {{0xd1fc7126, 0x77192d43, 0x0, 0x40000}};
  // 858194118748376.1718
  s21_decimal dec_check = {{0x7b437c36, 0x77192e0a, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_495) {
  // 86214185099781287
  s21_decimal dec_1 = {{0x3578e4a7, 0x1324b58, 0x0, 0x0}};
  // 14804511117166883
  s21_decimal dec_2 = {{0xda364923, 0x34989f, 0x0, 0x0}};
  // 101018696216948170
  s21_decimal dec_check = {{0xfaf2dca, 0x166e3f8, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_496) {
  // 4265007.47346163554
  s21_decimal dec_1 = {{0x8601b762, 0x5eb3c2b, 0x0, 0xb0000}};
  // 77.63767
  s21_decimal dec_2 = {{0x767737, 0x0, 0x0, 0x50000}};
  // 4265085.11113163554
  s21_decimal dec_check = {{0x2a94b322, 0x5eb433b, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_497) {
  // -6.688206553869
  s21_decimal dec_1 = {{0x382d030d, 0x615, 0x0, 0x800c0000}};
  // -5804089311785374307003176
  s21_decimal dec_2 = {{0xe6ff2b28, 0x4fe2f5ad, 0x4cd10, 0x80000000}};
  // -5804089311785374307003182.6882
  s21_decimal dec_check = {{0x4f86cfc2, 0x919cd90f, 0xbb8a4d30, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_498) {
  // -2513637185
  s21_decimal dec_1 = {{0x95d30f41, 0x0, 0x0, 0x80000000}};
  // 958940579
  s21_decimal dec_2 = {{0x392845a3, 0x0, 0x0, 0x0}};
  // -1554696606
  s21_decimal dec_check = {{0x5caac99e, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_499) {
  // 56.34
  s21_decimal dec_1 = {{0x1602, 0x0, 0x0, 0x20000}};
  // 41316.015084
  s21_decimal dec_2 = {{0x9ea05bec, 0x9, 0x0, 0x60000}};
  // 41372.355084
  s21_decimal dec_check = {{0xa1fc0a0c, 0x9, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_500) {
  // 309136456125915988253
  s21_decimal dec_1 = {{0xac5a011d, 0xc22150f8, 0x10, 0x0}};
  // -9869382718
  s21_decimal dec_2 = {{0x4c42d43e, 0x2, 0x0, 0x80000000}};
  // 309136456116046605535
  s21_decimal dec_check = {{0x60172cdf, 0xc22150f6, 0x10, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_add_1) {
  // 85070473009104298994055
  s21_decimal dec_1 = {{0xe5bc6987, 0xadf91f18, 0x1203, 0x0}};
  // 79228162514264337591727041917
  s21_decimal dec_2 = {{0x93b42d7d, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
  // 85070473009104298994055
  s21_decimal dec_1 = {{0xe5bc6987, 0xadf91f18, 0x1203, 0x80000000}};
  // 79228162514264337591727041917
  s21_decimal dec_2 = {{0x93b42d7d, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;

  int check = 2;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_4) {
  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x00000000}};
  s21_decimal result;

  int check = 1;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_5) {
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal result;

  int check = 2;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_6) {
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x00000000}};
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal result;

  int check = 1;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(test_add3201) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 1.9999999999999999999999998990
  s21_decimal check = {{0x1FFFFC0E, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3202) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -1.9999999999999999999999999010
  s21_decimal check = {{0x1FFFFC22, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3203) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.9999999999999999999999999991
  s21_decimal check = {{0xFFFFFF7, 0x3E250261, 0x204FCE5E, 0x1C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3204) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -1.0000000000000000000000000011
  s21_decimal check = {{0x1000000B, 0x3E250261, 0x204FCE5E, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3205) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3206) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3207) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3208) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3209) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 6148914691236517205.0000000000
  s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3210) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -6148914691236517205.0000000000
  s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3211) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 6148914689804861440.0000000000
  s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3212) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -6148914689804861440.0000000000
  s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3213) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 1431655765.0000000000000000000
  s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x130000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3214) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -1431655765.0000000000000000000
  s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x80130000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3215) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
  // 26409387.704754779197847983445
  s21_decimal check = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3216) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  // -26409387.704754779197847983445
  s21_decimal check = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3217) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // 26409387.498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x150000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3218) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // -26409387.498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80150000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3219) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 26409387.000000000000000000000
  s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x150000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3220) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -26409387.000000000000000000000
  s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x80150000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3221) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 7.9228162514264337593543950325
  s21_decimal check = {{0xFFFFFFF5, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3222) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -7.922816251426433759354395034
  s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x801B0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3223) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 7.999999999999999999999999999
  s21_decimal check = {{0x3FFFFFFF, 0xFE8401E7, 0x19D971E4, 0x1B0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3224) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -8.000000000000000000000000001
  s21_decimal check = {{0x40000001, 0xFE8401E7, 0x19D971E4, 0x801B0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3225) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 3.6336660283201535999999999990
  s21_decimal check = {{0x897FFFF6, 0xFEE8FB1C, 0x7568FB1C, 0x1C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3226) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -3.6336660283201536000000000010
  s21_decimal check = {{0x8980000A, 0xFEE8FB1C, 0x7568FB1C, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3227) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3228) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3229) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3230) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3231) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000009
  s21_decimal check = {{0x9, 0x0, 0x0, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3232) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000011
  s21_decimal check = {{0xB, 0x0, 0x0, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}


START_TEST(test_add3234) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000020
  s21_decimal check = {{0x14, 0x0, 0x0, 0x801C0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3235) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3236) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3237) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3238) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3239) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3240) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3241) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228106389283212384222373411
  s21_decimal check = {{0x3AC4E623, 0x756BD584, 0xFFFFF41D, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3242) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 2;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3243) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228106389283212384222373410
  s21_decimal check = {{0x3AC4E622, 0x756BD584, 0xFFFFF41D, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3244) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 2;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3245) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 7922760126445308550032818109.0
  s21_decimal check = {{0x4BB0FD62, 0x9636572A, 0xFFFF8926, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3246) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -7922872376407558968675971957
  s21_decimal check = {{0x5ED4B375, 0x242DC415, 0x1999A57C, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3247) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922760126445308550032818109.5
  s21_decimal check = {{0x4BB0FD67, 0x9636572A, 0xFFFF8926, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3248) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922872376407558968675971958
  s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3249) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 7922760126445308550032818110.0
  s21_decimal check = {{0x4BB0FD6C, 0x9636572A, 0xFFFF8926, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3250) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -7922872376407558968675971958
  s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3251) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // 7922760126445308550032818111.0
  s21_decimal check = {{0x4BB0FD76, 0x9636572A, 0xFFFF8926, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3252) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // -7922872376407558968675971959
  s21_decimal check = {{0x5ED4B377, 0x242DC415, 0x1999A57C, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3253) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -56124981125209321576923.010631
  s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3254) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -56124981125209321576925.010631
  s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3255) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -56124981125209321576923.510631
  s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3256) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -56124981125209321576924.510631
  s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3257) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -56124981125209321576923.510631
  s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3258) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -56124981125209321576924.510631
  s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3259) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -56124981125209321576923.510631
  s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3260) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -56124981125209321576924.510631
  s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3261) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -56124981125209321576922.010631
  s21_decimal check = {{0xF36D407, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3262) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -56124981125209321576926.010631
  s21_decimal check = {{0xF73DD07, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3263) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -56124981125209321576923.010631
  s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3264) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -56124981125209321576925.010631
  s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3265) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409331379773653988526406521
  s21_decimal check = {{0x901A3B79, 0xCAC12AD9, 0x55554972, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3266) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409443629735904407169560369
  s21_decimal check = {{0x1A906F31, 0xDFE97FD1, 0x55556137, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3267) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409331373624739298721545081
  s21_decimal check = {{0x901A3B79, 0x756BD584, 0x55554972, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3268) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409443623586989717364698929
  s21_decimal check = {{0x1A906F31, 0x8A942A7C, 0x55556137, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3269) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -56118832210518085059719.010631
  s21_decimal check = {{0xBA051947, 0xFFE9C0EB, 0xB55468F5, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3270) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -56131130039900558094129.010631
  s21_decimal check = {{0x64A597C7, 0xAA946B96, 0xB55E9520, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3271) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -56118832210519516715484.010631
  s21_decimal check = {{0xF555887, 0xFFEED701, 0xB55468F5, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3272) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -56131130039899126438364.010631
  s21_decimal check = {{0xF555887, 0xAA8F5581, 0xB55E9520, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3273) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -56124981125207889921159.010631
  s21_decimal check = {{0xBA051947, 0x553A002B, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3274) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -56124981125210753232689.010631
  s21_decimal check = {{0x64A597C7, 0x55442C56, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3275) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
  // -56124981125209295167536.305876
  s21_decimal check = {{0x252916D4, 0x553EFE3C, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3276) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  // -56124981125209347986311.715386
  s21_decimal check = {{0xF9819A3A, 0x553F2E45, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3277) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -56124981125209295167536.512025
  s21_decimal check = {{0x252C3C19, 0x553EFE3C, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3278) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // -56124981125209347986311.509237
  s21_decimal check = {{0xF97E74F5, 0x553F2E45, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3279) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -56124981125209295167537.010631
  s21_decimal check = {{0x2533D7C7, 0x553EFE3C, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3280) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -56124981125209347986311.010631
  s21_decimal check = {{0xF976D947, 0x553F2E45, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3281) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -56124981125209321576916.087815
  s21_decimal check = {{0xEDC7407, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3282) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -56124981125209321576931.933447
  s21_decimal check = {{0xFCE3D07, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3283) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -56124981125209321576916.010631
  s21_decimal check = {{0xEDB4687, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3284) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -56124981125209321576932.010631
  s21_decimal check = {{0xFCF6A87, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3285) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -56124981125209321576920.376965
  s21_decimal check = {{0xF1DE685, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3286) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -56124981125209321576927.644297
  s21_decimal check = {{0xF8CCA89, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3287) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3288) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3289) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3290) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3291) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3292) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3293) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3294) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3295) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -112249962250418643153848.02126
  s21_decimal check = {{0x9CAAAB4E, 0xAAA637A6, 0x24451968, 0x80050000}};

  test_add(dec_1, dec_2, check);
}


START_TEST(test_add3297) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -56124981125259025578346.402302
  s21_decimal check = {{0xB407D1FE, 0x55EFABC7, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3298) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -56124981125159617575501.618960
  s21_decimal check = {{0x6AA2DF10, 0x548E80BA, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3299) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -56124981125209970820926.219046
  s21_decimal check = {{0xF5752326, 0x554164BC, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3300) {
  // -56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -56124981125208672332921.802216
  s21_decimal check = {{0x29358DE8, 0x553CC7C5, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3301) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 1;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3302) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228106389283212384222373411
  s21_decimal check = {{0x3AC4E623, 0x756BD584, 0xFFFFF41D, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3303) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 1;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3304) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228106389283212384222373410
  s21_decimal check = {{0x3AC4E622, 0x756BD584, 0xFFFFF41D, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3305) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 7922872376407558968675971957
  s21_decimal check = {{0x5ED4B375, 0x242DC415, 0x1999A57C, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3306) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -7922760126445308550032818109.0
  s21_decimal check = {{0x4BB0FD62, 0x9636572A, 0xFFFF8926, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3307) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922872376407558968675971958
  s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3308) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922760126445308550032818109.5
  s21_decimal check = {{0x4BB0FD67, 0x9636572A, 0xFFFF8926, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3309) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 7922872376407558968675971958
  s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3310) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -7922760126445308550032818110.0
  s21_decimal check = {{0x4BB0FD6C, 0x9636572A, 0xFFFF8926, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3311) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // 7922872376407558968675971959
  s21_decimal check = {{0x5ED4B377, 0x242DC415, 0x1999A57C, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3312) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // -7922760126445308550032818111.0
  s21_decimal check = {{0x4BB0FD76, 0x9636572A, 0xFFFF8926, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3313) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 56124981125209321576925.010631
  s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3314) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 56124981125209321576923.010631
  s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3315) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 56124981125209321576924.510631
  s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3316) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 56124981125209321576923.510631
  s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3317) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 56124981125209321576924.510631
  s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3318) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 56124981125209321576923.510631
  s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3319) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 56124981125209321576924.510631
  s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3320) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 56124981125209321576923.510631
  s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3321) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 56124981125209321576926.010631
  s21_decimal check = {{0xF73DD07, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3322) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 56124981125209321576922.010631
  s21_decimal check = {{0xF36D407, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3323) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 56124981125209321576925.010631
  s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3324) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 56124981125209321576923.010631
  s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3325) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409443629735904407169560369
  s21_decimal check = {{0x1A906F31, 0xDFE97FD1, 0x55556137, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3326) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409331379773653988526406521
  s21_decimal check = {{0x901A3B79, 0xCAC12AD9, 0x55554972, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3327) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409443623586989717364698929
  s21_decimal check = {{0x1A906F31, 0x8A942A7C, 0x55556137, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3328) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409331373624739298721545081
  s21_decimal check = {{0x901A3B79, 0x756BD584, 0x55554972, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3329) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 56131130039900558094129.010631
  s21_decimal check = {{0x64A597C7, 0xAA946B96, 0xB55E9520, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3330) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 56118832210518085059719.010631
  s21_decimal check = {{0xBA051947, 0xFFE9C0EB, 0xB55468F5, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3331) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 56131130039899126438364.010631
  s21_decimal check = {{0xF555887, 0xAA8F5581, 0xB55E9520, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3332) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 56118832210519516715484.010631
  s21_decimal check = {{0xF555887, 0xFFEED701, 0xB55468F5, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3333) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 56124981125210753232689.010631
  s21_decimal check = {{0x64A597C7, 0x55442C56, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3334) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 56124981125207889921159.010631
  s21_decimal check = {{0xBA051947, 0x553A002B, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3335) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
  // 56124981125209347986311.715386
  s21_decimal check = {{0xF9819A3A, 0x553F2E45, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3336) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  // 56124981125209295167536.305876
  s21_decimal check = {{0x252916D4, 0x553EFE3C, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3337) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // 56124981125209347986311.509237
  s21_decimal check = {{0xF97E74F5, 0x553F2E45, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3338) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 56124981125209295167536.512025
  s21_decimal check = {{0x252C3C19, 0x553EFE3C, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3339) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 56124981125209347986311.010631
  s21_decimal check = {{0xF976D947, 0x553F2E45, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3340) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 56124981125209295167537.010631
  s21_decimal check = {{0x2533D7C7, 0x553EFE3C, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3341) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 56124981125209321576931.933447
  s21_decimal check = {{0xFCE3D07, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3342) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 56124981125209321576916.087815
  s21_decimal check = {{0xEDC7407, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3343) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 56124981125209321576932.010631
  s21_decimal check = {{0xFCF6A87, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3344) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 56124981125209321576916.010631
  s21_decimal check = {{0xEDB4687, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3345) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 56124981125209321576927.644297
  s21_decimal check = {{0xF8CCA89, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3346) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 56124981125209321576920.376965
  s21_decimal check = {{0xF1DE685, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3347) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3348) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3349) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3350) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3351) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3352) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3353) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3354) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 56124981125209321576924.010631
  s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3355) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // 0.000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3356) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 112249962250418643153848.02126
  s21_decimal check = {{0x9CAAAB4E, 0xAAA637A6, 0x24451968, 0x50000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3357) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 56124981125159617575501.618960
  s21_decimal check = {{0x6AA2DF10, 0x548E80BA, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3358) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 56124981125259025578346.402302
  s21_decimal check = {{0xB407D1FE, 0x55EFABC7, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3359) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // -649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 56124981125208672332921.802216
  s21_decimal check = {{0x29358DE8, 0x553CC7C5, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3360) {
  // 56124981125209321576924.010631
  s21_decimal dec_1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 56124981125209970820926.219046
  s21_decimal check = {{0xF5752326, 0x554164BC, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3361) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337543839948913
  s21_decimal check = {{0x6D692071, 0xFFFFFFF4, 0xFFFFFFFF, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3362) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 2;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3363) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337543839948912
  s21_decimal check = {{0x6D692070, 0xFFFFFFF4, 0xFFFFFFFF, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3364) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 2;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3365) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433709650393610.6
  s21_decimal check = {{0x461B446A, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3366) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433809058396455
  s21_decimal check = {{0x2C307927, 0x999999A5, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3367) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433709650393611.1
  s21_decimal check = {{0x461B446F, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3368) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433809058396456
  s21_decimal check = {{0x2C307928, 0x999999A5, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3369) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433709650393611.6
  s21_decimal check = {{0x461B4474, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3370) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433809058396456
  s21_decimal check = {{0x2C307928, 0x999999A5, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3371) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433709650393612.6
  s21_decimal check = {{0x461B447E, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3372) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433809058396457
  s21_decimal check = {{0x2C307929, 0x999999A5, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3373) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -49704001421.391670881925172831
  s21_decimal check = {{0xD8178E5F, 0x1D61BAF2, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3374) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -49704001423.391670881925172831
  s21_decimal check = {{0x26DF8E5F, 0x3923285A, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3375) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -49704001421.891670881925172831
  s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3376) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -49704001422.891670881925172831
  s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3377) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -49704001421.891670881925172831
  s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3378) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -49704001422.891670881925172831
  s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3379) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -49704001421.891670881925172831
  s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3380) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -49704001422.891670881925172831
  s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3381) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -49704001420.391670881925172831
  s21_decimal check = {{0x30B38E5F, 0xF81043F, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3382) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -49704001424.391670881925172831
  s21_decimal check = {{0xCE438E5F, 0x4703DF0D, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3383) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -49704001421.391670881925172831
  s21_decimal check = {{0xD8178E5F, 0x1D61BAF2, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3384) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -49704001423.391670881925172831
  s21_decimal check = {{0x26DF8E5F, 0x3923285A, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3385) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779148143982023
  s21_decimal check = {{0xC2BE75C7, 0x55555549, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3386) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779247551984867
  s21_decimal check = {{0xE7EC34E3, 0x55555560, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3387) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409387498605864458339120583
  s21_decimal check = {{0xC2BE75C7, 0xFFFFFFF4, 0x55555554, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3388) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409387498605864557747123427
  s21_decimal check = {{0xE7EC34E3, 0xB, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3389) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 6148914641532515782.6083291181
  s21_decimal check = {{0x12FE002D, 0x638479D3, 0xC6AEA13A, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3390) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -6148914740940518627.3916708819
  s21_decimal check = {{0xA4F67D3, 0x472630D6, 0xC6AEA170, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3391) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 6148914640100860017.6083291181
  s21_decimal check = {{0x84574C2D, 0x9CD5D87E, 0xC6AEA139, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3392) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -6148914739508862862.3916708819
  s21_decimal check = {{0x7BA8B3D3, 0x80778F81, 0xC6AEA16F, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3393) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -48272345657.391670881925172831
  s21_decimal check = {{0xB7478E5F, 0xA2C15937, 0x9BF9F2CD, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3394) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -51135657187.391670881925172831
  s21_decimal check = {{0x47AF8E5F, 0xB3C38A15, 0xA53A6C9A, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3395) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
  // -49677592034.686916102727324848
  s21_decimal check = {{0x8FD6D4B0, 0x648F0410, 0xA084574C, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3396) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  // -49730410810.096425661123020814
  s21_decimal check = {{0x6F20480E, 0xF1F5DF3C, 0xA0B0081B, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3397) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -49677592034.893065017417129709
  s21_decimal check = {{0xEC1DEED, 0x676B6769, 0xA084574C, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3398) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // -49730410809.890276746433215953
  s21_decimal check = {{0xF0353DD1, 0xEF197BE3, 0xA0B0081B, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3399) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -49677592035.391670881925172831
  s21_decimal check = {{0x6BAF8E5F, 0x6E56CECD, 0xA084574C, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3400) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -49730410809.391670881925172831
  s21_decimal check = {{0x93478E5F, 0xE82E147F, 0xA0B0081B, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3401) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -49704001414.468854630498739072
  s21_decimal check = {{0x2084A380, 0xBD4EF23F, 0xA09A2FB3, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3402) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -49704001430.314487133351606590
  s21_decimal check = {{0xDE72793E, 0x9935F10D, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3403) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -49704001414.391670881925172831
  s21_decimal check = {{0x445B8E5F, 0xBC3CBC09, 0xA09A2FB3, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3404) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -49704001430.391670881925172831
  s21_decimal check = {{0xBA9B8E5F, 0x9A482743, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3405) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -49704001418.758004853605019231
  s21_decimal check = {{0x4D0E2E5F, 0xF8D511A6, 0xA09A2FB3, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3406) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -49704001426.025336910245326431
  s21_decimal check = {{0xB1E8EE5F, 0x5DAFD1A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3407) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3408) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3409) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3410) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3411) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3412) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3413) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3414) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3415) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -56124981125259025578346.402302
  s21_decimal check = {{0xB407D1FE, 0x55EFABC7, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3416) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 56124981125159617575501.618960
  s21_decimal check = {{0x6AA2DF10, 0x548E80BA, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3417) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -99408002844.78334176385034566
  s21_decimal check = {{0xE64BE946, 0x3BDA16BA, 0x201ED657, 0x80110000}};

  test_add(dec_1, dec_2, check);
}


START_TEST(test_add3419) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -50353245424.600086053750658706
  s21_decimal check = {{0xC2395692, 0xD677691, 0xA2B33A78, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3420) {
  // -49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -49054757420.183255710099686956
  s21_decimal check = {{0x3CBDC62C, 0x491D6CBB, 0x9E8124F0, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3421) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 1;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3422) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337543839948913
  s21_decimal check = {{0x6D692071, 0xFFFFFFF4, 0xFFFFFFFF, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3423) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 1;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3424) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337543839948912
  s21_decimal check = {{0x6D692070, 0xFFFFFFF4, 0xFFFFFFFF, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3425) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433809058396455
  s21_decimal check = {{0x2C307927, 0x999999A5, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3426) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433709650393610.6
  s21_decimal check = {{0x461B446A, 0xFFFFFF8C, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3427) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433809058396456
  s21_decimal check = {{0x2C307928, 0x999999A5, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3428) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433709650393611.1
  s21_decimal check = {{0x461B446F, 0xFFFFFF8C, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3429) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433809058396456
  s21_decimal check = {{0x2C307928, 0x999999A5, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3430) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433709650393611.6
  s21_decimal check = {{0x461B4474, 0xFFFFFF8C, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3431) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433809058396457
  s21_decimal check = {{0x2C307929, 0x999999A5, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3432) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433709650393612.6
  s21_decimal check = {{0x461B447E, 0xFFFFFF8C, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3433) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 49704001423.391670881925172831
  s21_decimal check = {{0x26DF8E5F, 0x3923285A, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3434) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 49704001421.391670881925172831
  s21_decimal check = {{0xD8178E5F, 0x1D61BAF2, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3435) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 49704001422.891670881925172831
  s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3436) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 49704001421.891670881925172831
  s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3437) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 49704001422.891670881925172831
  s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3438) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 49704001421.891670881925172831
  s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3439) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 49704001422.891670881925172831
  s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3440) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 49704001421.891670881925172831
  s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3441) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 49704001424.391670881925172831
  s21_decimal check = {{0xCE438E5F, 0x4703DF0D, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3442) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 49704001420.391670881925172831
  s21_decimal check = {{0x30B38E5F, 0xF81043F, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3443) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 49704001423.391670881925172831
  s21_decimal check = {{0x26DF8E5F, 0x3923285A, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3444) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 49704001421.391670881925172831
  s21_decimal check = {{0xD8178E5F, 0x1D61BAF2, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3445) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779247551984867
  s21_decimal check = {{0xE7EC34E3, 0x55555560, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3446) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779148143982023
  s21_decimal check = {{0xC2BE75C7, 0x55555549, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3447) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409387498605864557747123427
  s21_decimal check = {{0xE7EC34E3, 0xB, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3448) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409387498605864458339120583
  s21_decimal check = {{0xC2BE75C7, 0xFFFFFFF4, 0x55555554, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3449) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 6148914740940518627.3916708819
  s21_decimal check = {{0xA4F67D3, 0x472630D6, 0xC6AEA170, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3450) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -6148914641532515782.6083291181
  s21_decimal check = {{0x12FE002D, 0x638479D3, 0xC6AEA13A, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3451) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 6148914739508862862.3916708819
  s21_decimal check = {{0x7BA8B3D3, 0x80778F81, 0xC6AEA16F, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3452) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -6148914640100860017.6083291181
  s21_decimal check = {{0x84574C2D, 0x9CD5D87E, 0xC6AEA139, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3453) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 51135657187.391670881925172831
  s21_decimal check = {{0x47AF8E5F, 0xB3C38A15, 0xA53A6C9A, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3454) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 48272345657.391670881925172831
  s21_decimal check = {{0xB7478E5F, 0xA2C15937, 0x9BF9F2CD, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3455) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
  // 49730410810.096425661123020814
  s21_decimal check = {{0x6F20480E, 0xF1F5DF3C, 0xA0B0081B, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3456) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  // 49677592034.686916102727324848
  s21_decimal check = {{0x8FD6D4B0, 0x648F0410, 0xA084574C, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3457) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // 49730410809.890276746433215953
  s21_decimal check = {{0xF0353DD1, 0xEF197BE3, 0xA0B0081B, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3458) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 49677592034.893065017417129709
  s21_decimal check = {{0xEC1DEED, 0x676B6769, 0xA084574C, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3459) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 49730410809.391670881925172831
  s21_decimal check = {{0x93478E5F, 0xE82E147F, 0xA0B0081B, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3460) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 49677592035.391670881925172831
  s21_decimal check = {{0x6BAF8E5F, 0x6E56CECD, 0xA084574C, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3461) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 49704001430.314487133351606590
  s21_decimal check = {{0xDE72793E, 0x9935F10D, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3462) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 49704001414.468854630498739072
  s21_decimal check = {{0x2084A380, 0xBD4EF23F, 0xA09A2FB3, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3463) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 49704001430.391670881925172831
  s21_decimal check = {{0xBA9B8E5F, 0x9A482743, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3464) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 49704001414.391670881925172831
  s21_decimal check = {{0x445B8E5F, 0xBC3CBC09, 0xA09A2FB3, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3465) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 49704001426.025336910245326431
  s21_decimal check = {{0xB1E8EE5F, 0x5DAFD1A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3466) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 49704001418.758004853605019231
  s21_decimal check = {{0x4D0E2E5F, 0xF8D511A6, 0xA09A2FB3, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3467) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3468) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3469) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3470) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3471) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3472) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3473) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3474) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 49704001422.391670881925172831
  s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3475) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -56124981125159617575501.618960
  s21_decimal check = {{0x6AA2DF10, 0x548E80BA, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3476) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 56124981125259025578346.402302
  s21_decimal check = {{0xB407D1FE, 0x55EFABC7, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3477) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // 0.000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3478) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 99408002844.78334176385034566
  s21_decimal check = {{0xE64BE946, 0x3BDA16BA, 0x201ED657, 0x110000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3479) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // -649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 49054757420.183255710099686956
  s21_decimal check = {{0x3CBDC62C, 0x491D6CBB, 0x9E8124F0, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3480) {
  // 49704001422.391670881925172831
  s21_decimal dec_1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 50353245424.600086053750658706
  s21_decimal check = {{0xC2395692, 0xD677691, 0xA2B33A78, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3481) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337592894706333
  s21_decimal check = {{0xD94D529D, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3482) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 2;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3483) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337592894706332
  s21_decimal check = {{0xD94D529C, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3484) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 2;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3485) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433758705151030.8
  s21_decimal check = {{0x7D053A24, 0xFFFFFFFE, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3486) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433760003639035
  s21_decimal check = {{0xC04C46FB, 0x99999999, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3487) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433758705151031.3
  s21_decimal check = {{0x7D053A29, 0xFFFFFFFE, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3488) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433760003639036
  s21_decimal check = {{0xC04C46FC, 0x99999999, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3489) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433758705151031.8
  s21_decimal check = {{0x7D053A2E, 0xFFFFFFFE, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3490) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433760003639036
  s21_decimal check = {{0xC04C46FC, 0x99999999, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3491) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433758705151032.8
  s21_decimal check = {{0x7D053A38, 0xFFFFFFFE, 0xFFFFFFFF, 0x10000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3492) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433760003639037
  s21_decimal check = {{0xC04C46FD, 0x99999999, 0x19999999, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3493) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -649244001.20841517182548587502
  s21_decimal check = {{0xAF1233EE, 0xEAAE8DB8, 0xD1C8347E, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3494) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -649244003.20841517182548587502
  s21_decimal check = {{0x753233EE, 0xC23D4A13, 0xD1C83489, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3495) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -649244001.70841517182548587502
  s21_decimal check = {{0x609A33EE, 0xA0923CCF, 0xD1C83481, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3496) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -649244002.70841517182548587502
  s21_decimal check = {{0xC3AA33EE, 0xC599AFC, 0xD1C83487, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3497) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -649244001.70841517182548587502
  s21_decimal check = {{0x609A33EE, 0xA0923CCF, 0xD1C83481, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3498) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -649244002.70841517182548587502
  s21_decimal check = {{0xC3AA33EE, 0xC599AFC, 0xD1C83487, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3499) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -649244001.70841517182548587502
  s21_decimal check = {{0x609A33EE, 0xA0923CCF, 0xD1C83481, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3500) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -649244002.70841517182548587502
  s21_decimal check = {{0xC3AA33EE, 0xC599AFC, 0xD1C83487, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3501) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -649244000.20841517182548587502
  s21_decimal check = {{0x4C0233EE, 0x7EE72F8B, 0xD1C83479, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3502) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -649244004.20841517182548587502
  s21_decimal check = {{0xD84233EE, 0x2E04A840, 0xD1C8348F, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3503) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -649244001.20841517182548587502
  s21_decimal check = {{0xAF1233EE, 0xEAAE8DB8, 0xD1C8347E, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3504) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -649244003.20841517182548587502
  s21_decimal check = {{0x753233EE, 0xC23D4A13, 0xD1C83489, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3505) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779197198739443
  s21_decimal check = {{0x2EA2A7F3, 0x55555555, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3506) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779198497227447
  s21_decimal check = {{0x7C0802B7, 0x55555555, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3507) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409387498605864507393878003
  s21_decimal check = {{0x2EA2A7F3, 0x0, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3508) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409387498605864508692366007
  s21_decimal check = {{0x7C0802B7, 0x0, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3509) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 6148914690587273202.7915848282
  s21_decimal check = {{0x54CBCA5A, 0xFB3B8D87, 0xC6AEA154, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3510) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -6148914691885761207.2084151718
  s21_decimal check = {{0xC8819DA6, 0xAF6F1D21, 0xC6AEA155, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3511) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 6148914689155617437.7915848282
  s21_decimal check = {{0xC625165A, 0x348CEC32, 0xC6AEA154, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3512) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -6148914690454105442.2084151718
  s21_decimal check = {{0x39DAE9A6, 0xE8C07BCD, 0xC6AEA154, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3513) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 782411762.79158482817451412498
  s21_decimal check = {{0x222DCC12, 0xFBF79F60, 0xFCCF9588, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3514) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -2080899767.2084151718254858750
  s21_decimal check = {{0x6D71D1FE, 0x2A7D2584, 0x433CCCA8, 0x80130000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3515) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
  // -622834614.50366039262763789158
  s21_decimal check = {{0x75C9AB66, 0xB85F1D54, 0xC93FABFA, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3516) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  // -675653389.91316995102333385846
  s21_decimal check = {{0xAE7ABC76, 0xF48CBA77, 0xDA50BD0D, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3517) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -622834614.70980930731744275302
  s21_decimal check = {{0x999AB66, 0xD675EBE6, 0xC93FABFB, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3518) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // -675653389.70702103633352899702
  s21_decimal check = {{0x1AAABC76, 0xD675EBE6, 0xDA50BD0C, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3519) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -622834615.20841517182548587502
  s21_decimal check = {{0x567233EE, 0x8A6A4F1A, 0xC93FABFE, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3520) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -675653389.20841517182548587502
  s21_decimal check = {{0xCDD233EE, 0x228188B1, 0xDA50BD0A, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3521) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -649243994.28559892039905211567
  s21_decimal check = {{0xF9AE74AF, 0x63582784, 0xD1C83459, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3522) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -649244010.13123142325191963437
  s21_decimal check = {{0x2A95F32D, 0x4993B047, 0xD1C834AF, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3523) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -649243994.20841517182548587502
  s21_decimal check = {{0xF9A233EE, 0xF83AFA7A, 0xD1C83458, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3524) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -649244010.20841517182548587502
  s21_decimal check = {{0x2AA233EE, 0xB4B0DD51, 0xD1C834AF, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3525) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -649243998.57474914350533227502
  s21_decimal check = {{0x5F68B3EE, 0xA3BC6BD2, 0xD1C83470, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3526) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -649244005.84208120014563947502
  s21_decimal check = {{0xC4DBB3EE, 0x92F6BF9, 0xD1C83498, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3527) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3528) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3529) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3530) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3531) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3532) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3533) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3534) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3535) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -56124981125209970820926.219046
  s21_decimal check = {{0xF5752326, 0x554164BC, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3536) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 56124981125208672332921.802216
  s21_decimal check = {{0x29358DE8, 0x553CC7C5, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3537) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -50353245424.600086053750658706
  s21_decimal check = {{0xC2395692, 0xD677691, 0xA2B33A78, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3538) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 49054757420.183255710099686956
  s21_decimal check = {{0x3CBDC62C, 0x491D6CBB, 0x9E8124F0, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3539) {
  // -649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // -1298488004.4168303436509717500
  s21_decimal check = {{0x36D3A3FC, 0xAAE46261, 0x29F4D74D, 0x80130000}};

  test_add(dec_1, dec_2, check);
}


START_TEST(test_add3541) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 1;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3542) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337592894706333
  s21_decimal check = {{0xD94D529D, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3543) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 1;

  test_add_fail(dec_1, dec_2, check);
}

START_TEST(test_add3544) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337592894706332
  s21_decimal check = {{0xD94D529C, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3545) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433760003639035
  s21_decimal check = {{0xC04C46FB, 0x99999999, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3546) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433758705151030.8
  s21_decimal check = {{0x7D053A24, 0xFFFFFFFE, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3547) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433760003639036
  s21_decimal check = {{0xC04C46FC, 0x99999999, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3548) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433758705151031.3
  s21_decimal check = {{0x7D053A29, 0xFFFFFFFE, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3549) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433760003639036
  s21_decimal check = {{0xC04C46FC, 0x99999999, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3550) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433758705151031.8
  s21_decimal check = {{0x7D053A2E, 0xFFFFFFFE, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3551) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // 7922816251426433760003639037
  s21_decimal check = {{0xC04C46FD, 0x99999999, 0x19999999, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3552) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // -7922816251426433758705151032.8
  s21_decimal check = {{0x7D053A38, 0xFFFFFFFE, 0xFFFFFFFF, 0x80010000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3553) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 649244003.20841517182548587502
  s21_decimal check = {{0x753233EE, 0xC23D4A13, 0xD1C83489, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3554) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 649244001.20841517182548587502
  s21_decimal check = {{0xAF1233EE, 0xEAAE8DB8, 0xD1C8347E, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3555) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 649244002.70841517182548587502
  s21_decimal check = {{0xC3AA33EE, 0xC599AFC, 0xD1C83487, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3556) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 649244001.70841517182548587502
  s21_decimal check = {{0x609A33EE, 0xA0923CCF, 0xD1C83481, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3557) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 649244002.70841517182548587502
  s21_decimal check = {{0xC3AA33EE, 0xC599AFC, 0xD1C83487, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3558) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 649244001.70841517182548587502
  s21_decimal check = {{0x609A33EE, 0xA0923CCF, 0xD1C83481, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3559) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 649244002.70841517182548587502
  s21_decimal check = {{0xC3AA33EE, 0xC599AFC, 0xD1C83487, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3560) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 649244001.70841517182548587502
  s21_decimal check = {{0x609A33EE, 0xA0923CCF, 0xD1C83481, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3561) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 649244004.20841517182548587502
  s21_decimal check = {{0xD84233EE, 0x2E04A840, 0xD1C8348F, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3562) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 649244000.20841517182548587502
  s21_decimal check = {{0x4C0233EE, 0x7EE72F8B, 0xD1C83479, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3563) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 649244003.20841517182548587502
  s21_decimal check = {{0x753233EE, 0xC23D4A13, 0xD1C83489, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3564) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 649244001.20841517182548587502
  s21_decimal check = {{0xAF1233EE, 0xEAAE8DB8, 0xD1C8347E, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3565) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779198497227447
  s21_decimal check = {{0x7C0802B7, 0x55555555, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3566) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779197198739443
  s21_decimal check = {{0x2EA2A7F3, 0x55555555, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3567) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409387498605864508692366007
  s21_decimal check = {{0x7C0802B7, 0x0, 0x55555555, 0x0}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3568) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409387498605864507393878003
  s21_decimal check = {{0x2EA2A7F3, 0x0, 0x55555555, 0x80000000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3569) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 6148914691885761207.2084151718
  s21_decimal check = {{0xC8819DA6, 0xAF6F1D21, 0xC6AEA155, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3570) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -6148914690587273202.7915848282
  s21_decimal check = {{0x54CBCA5A, 0xFB3B8D87, 0xC6AEA154, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3571) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 6148914690454105442.2084151718
  s21_decimal check = {{0x39DAE9A6, 0xE8C07BCD, 0xC6AEA154, 0xA0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3572) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -6148914689155617437.7915848282
  s21_decimal check = {{0xC625165A, 0x348CEC32, 0xC6AEA154, 0x800A0000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3573) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 2080899767.2084151718254858750
  s21_decimal check = {{0x6D71D1FE, 0x2A7D2584, 0x433CCCA8, 0x130000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3574) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -782411762.79158482817451412498
  s21_decimal check = {{0x222DCC12, 0xFBF79F60, 0xFCCF9588, 0x80140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3575) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
  // 675653389.91316995102333385846
  s21_decimal check = {{0xAE7ABC76, 0xF48CBA77, 0xDA50BD0D, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3576) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -26409387.704754779197847983445
  s21_decimal dec_2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  // 622834614.50366039262763789158
  s21_decimal check = {{0x75C9AB66, 0xB85F1D54, 0xC93FABFA, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3577) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // 675653389.70702103633352899702
  s21_decimal check = {{0x1AAABC76, 0xD675EBE6, 0xDA50BD0C, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3578) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 622834614.70980930731744275302
  s21_decimal check = {{0x999AB66, 0xD675EBE6, 0xC93FABFB, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3579) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 675653389.20841517182548587502
  s21_decimal check = {{0xCDD233EE, 0x228188B1, 0xDA50BD0A, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3580) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 622834615.20841517182548587502
  s21_decimal check = {{0x567233EE, 0x8A6A4F1A, 0xC93FABFE, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3581) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 649244010.13123142325191963437
  s21_decimal check = {{0x2A95F32D, 0x4993B047, 0xD1C834AF, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3582) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 649243994.28559892039905211567
  s21_decimal check = {{0xF9AE74AF, 0x63582784, 0xD1C83459, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3583) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 649244010.20841517182548587502
  s21_decimal check = {{0x2AA233EE, 0xB4B0DD51, 0xD1C834AF, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3584) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 649243994.20841517182548587502
  s21_decimal check = {{0xF9A233EE, 0xF83AFA7A, 0xD1C83458, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3585) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 649244005.84208120014563947502
  s21_decimal check = {{0xC4DBB3EE, 0x92F6BF9, 0xD1C83498, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3586) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 649243998.57474914350533227502
  s21_decimal check = {{0x5F68B3EE, 0xA3BC6BD2, 0xD1C83470, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3587) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3588) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3589) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3590) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3591) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3592) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3593) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3594) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 649244002.20841517182548587502
  s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3595) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
  // -56124981125208672332921.802216
  s21_decimal check = {{0x29358DE8, 0x553CC7C5, 0xB5597F0B, 0x80060000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3596) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 56124981125209321576924.010631
  s21_decimal dec_2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
  // 56124981125209970820926.219046
  s21_decimal check = {{0xF5752326, 0x554164BC, 0xB5597F0B, 0x60000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3597) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
  // -49054757420.183255710099686956
  s21_decimal check = {{0x3CBDC62C, 0x491D6CBB, 0x9E8124F0, 0x80120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3598) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 49704001422.391670881925172831
  s21_decimal dec_2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
  // 50353245424.600086053750658706
  s21_decimal check = {{0xC2395692, 0xD677691, 0xA2B33A78, 0x120000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3599) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // -649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  // 0.00000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x140000}};

  test_add(dec_1, dec_2, check);
}

START_TEST(test_add3600) {
  // 649244002.20841517182548587502
  s21_decimal dec_1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 649244002.20841517182548587502
  s21_decimal dec_2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  // 1298488004.4168303436509717500
  s21_decimal check = {{0x36D3A3FC, 0xAAE46261, 0x29F4D74D, 0x130000}};

  test_add(dec_1, dec_2, check);
}

Suite *s21_add_cases(void) {
  Suite *c = suite_create(YELLOW "s21_add_cases" NOCOLOR);
  TCase *tc = tcase_create(YELLOW "s21_add_tc" NOCOLOR);

  tcase_add_test(tc, s21_add_1);
  tcase_add_test(tc, s21_add_2);
  tcase_add_test(tc, s21_add_3);
  tcase_add_test(tc, s21_add_4);
  tcase_add_test(tc, s21_add_5);
  tcase_add_test(tc, s21_add_6);
  tcase_add_test(tc, s21_add_7);
  tcase_add_test(tc, s21_add_8);
  tcase_add_test(tc, s21_add_9);
  tcase_add_test(tc, s21_add_10);
  tcase_add_test(tc, s21_add_11);
  tcase_add_test(tc, s21_add_12);
  tcase_add_test(tc, s21_add_13);
  tcase_add_test(tc, s21_add_14);
  tcase_add_test(tc, s21_add_15);
  tcase_add_test(tc, s21_add_16);
  tcase_add_test(tc, s21_add_17);
  tcase_add_test(tc, s21_add_18);
  tcase_add_test(tc, s21_add_19);
  tcase_add_test(tc, s21_add_20);
  tcase_add_test(tc, s21_add_21);
  tcase_add_test(tc, s21_add_22);
  tcase_add_test(tc, s21_add_23);
  tcase_add_test(tc, s21_add_24);
  tcase_add_test(tc, s21_add_25);
  tcase_add_test(tc, s21_add_26);
  tcase_add_test(tc, s21_add_27);
  tcase_add_test(tc, s21_add_28);
  tcase_add_test(tc, s21_add_29);
  tcase_add_test(tc, s21_add_30);
  tcase_add_test(tc, s21_add_31);
  tcase_add_test(tc, s21_add_32);
  tcase_add_test(tc, s21_add_33);
  tcase_add_test(tc, s21_add_34);
  tcase_add_test(tc, s21_add_35);
  tcase_add_test(tc, s21_add_36);
  tcase_add_test(tc, s21_add_37);
  tcase_add_test(tc, s21_add_38);
  tcase_add_test(tc, s21_add_39);
  tcase_add_test(tc, s21_add_40);
  tcase_add_test(tc, s21_add_41);
  tcase_add_test(tc, s21_add_42);
  tcase_add_test(tc, s21_add_43);
  tcase_add_test(tc, s21_add_44);
  tcase_add_test(tc, s21_add_45);
  tcase_add_test(tc, s21_add_46);
  tcase_add_test(tc, s21_add_47);
  tcase_add_test(tc, s21_add_48);
  tcase_add_test(tc, s21_add_49);
  tcase_add_test(tc, s21_add_50);
  tcase_add_test(tc, s21_add_51);
  tcase_add_test(tc, s21_add_52);
  tcase_add_test(tc, s21_add_53);
  tcase_add_test(tc, s21_add_54);
  tcase_add_test(tc, s21_add_55);
  tcase_add_test(tc, s21_add_56);
  tcase_add_test(tc, s21_add_57);
  tcase_add_test(tc, s21_add_58);
  tcase_add_test(tc, s21_add_59);
  tcase_add_test(tc, s21_add_60);
  tcase_add_test(tc, s21_add_61);
  tcase_add_test(tc, s21_add_62);
  tcase_add_test(tc, s21_add_63);
  tcase_add_test(tc, s21_add_64);
  tcase_add_test(tc, s21_add_65);
  tcase_add_test(tc, s21_add_66);
  tcase_add_test(tc, s21_add_67);
  tcase_add_test(tc, s21_add_68);
  tcase_add_test(tc, s21_add_69);
  tcase_add_test(tc, s21_add_70);
  tcase_add_test(tc, s21_add_71);
  tcase_add_test(tc, s21_add_72);
  tcase_add_test(tc, s21_add_73);
  tcase_add_test(tc, s21_add_74);
  tcase_add_test(tc, s21_add_75);
  tcase_add_test(tc, s21_add_76);
  tcase_add_test(tc, s21_add_77);
  tcase_add_test(tc, s21_add_78);
  tcase_add_test(tc, s21_add_79);
  tcase_add_test(tc, s21_add_80);
  tcase_add_test(tc, s21_add_81);
  tcase_add_test(tc, s21_add_82);
  tcase_add_test(tc, s21_add_83);
  tcase_add_test(tc, s21_add_84);
  tcase_add_test(tc, s21_add_85);
  tcase_add_test(tc, s21_add_86);
  tcase_add_test(tc, s21_add_87);
  tcase_add_test(tc, s21_add_88);
  tcase_add_test(tc, s21_add_89);
  tcase_add_test(tc, s21_add_90);
  tcase_add_test(tc, s21_add_91);
  tcase_add_test(tc, s21_add_92);
  tcase_add_test(tc, s21_add_93);
  tcase_add_test(tc, s21_add_94);
  tcase_add_test(tc, s21_add_95);
  tcase_add_test(tc, s21_add_96);
  tcase_add_test(tc, s21_add_97);
  tcase_add_test(tc, s21_add_98);
  tcase_add_test(tc, s21_add_99);
  tcase_add_test(tc, s21_add_100);
  tcase_add_test(tc, s21_add_101);
  tcase_add_test(tc, s21_add_102);
  tcase_add_test(tc, s21_add_103);
  tcase_add_test(tc, s21_add_104);
  tcase_add_test(tc, s21_add_105);
  tcase_add_test(tc, s21_add_106);
  tcase_add_test(tc, s21_add_107);
  tcase_add_test(tc, s21_add_108);
  tcase_add_test(tc, s21_add_109);
  tcase_add_test(tc, s21_add_110);
  tcase_add_test(tc, s21_add_111);
  tcase_add_test(tc, s21_add_112);
  tcase_add_test(tc, s21_add_113);
  tcase_add_test(tc, s21_add_114);
  tcase_add_test(tc, s21_add_115);
  tcase_add_test(tc, s21_add_116);
  tcase_add_test(tc, s21_add_117);
  tcase_add_test(tc, s21_add_118);
  tcase_add_test(tc, s21_add_119);
  tcase_add_test(tc, s21_add_120);
  tcase_add_test(tc, s21_add_121);
  tcase_add_test(tc, s21_add_122);
  tcase_add_test(tc, s21_add_123);
  tcase_add_test(tc, s21_add_124);
  tcase_add_test(tc, s21_add_125);
  tcase_add_test(tc, s21_add_126);
  tcase_add_test(tc, s21_add_127);
  tcase_add_test(tc, s21_add_128);
  tcase_add_test(tc, s21_add_129);
  tcase_add_test(tc, s21_add_130);
  tcase_add_test(tc, s21_add_131);
  tcase_add_test(tc, s21_add_132);
  tcase_add_test(tc, s21_add_133);
  tcase_add_test(tc, s21_add_134);
  tcase_add_test(tc, s21_add_135);
  tcase_add_test(tc, s21_add_136);
  tcase_add_test(tc, s21_add_137);
  tcase_add_test(tc, s21_add_138);
  tcase_add_test(tc, s21_add_139);
  tcase_add_test(tc, s21_add_140);
  tcase_add_test(tc, s21_add_141);
  tcase_add_test(tc, s21_add_142);
  tcase_add_test(tc, s21_add_143);
  tcase_add_test(tc, s21_add_144);
  tcase_add_test(tc, s21_add_145);
  tcase_add_test(tc, s21_add_146);
  tcase_add_test(tc, s21_add_147);
  tcase_add_test(tc, s21_add_148);
  tcase_add_test(tc, s21_add_149);
  tcase_add_test(tc, s21_add_150);
  tcase_add_test(tc, s21_add_151);
  tcase_add_test(tc, s21_add_152);
  tcase_add_test(tc, s21_add_153);
  tcase_add_test(tc, s21_add_154);
  tcase_add_test(tc, s21_add_155);
  tcase_add_test(tc, s21_add_156);
  tcase_add_test(tc, s21_add_157);
  tcase_add_test(tc, s21_add_158);
  tcase_add_test(tc, s21_add_159);
  tcase_add_test(tc, s21_add_160);
  tcase_add_test(tc, s21_add_161);
  tcase_add_test(tc, s21_add_162);
  tcase_add_test(tc, s21_add_163);
  tcase_add_test(tc, s21_add_164);
  tcase_add_test(tc, s21_add_165);
  tcase_add_test(tc, s21_add_166);
  tcase_add_test(tc, s21_add_167);
  tcase_add_test(tc, s21_add_168);
  tcase_add_test(tc, s21_add_169);
  tcase_add_test(tc, s21_add_170);
  tcase_add_test(tc, s21_add_171);
  tcase_add_test(tc, s21_add_172);
  tcase_add_test(tc, s21_add_173);
  tcase_add_test(tc, s21_add_174);
  tcase_add_test(tc, s21_add_175);
  tcase_add_test(tc, s21_add_176);
  tcase_add_test(tc, s21_add_177);
  tcase_add_test(tc, s21_add_178);
  tcase_add_test(tc, s21_add_179);
  tcase_add_test(tc, s21_add_180);
  tcase_add_test(tc, s21_add_181);
  tcase_add_test(tc, s21_add_182);
  tcase_add_test(tc, s21_add_183);
  tcase_add_test(tc, s21_add_184);
  tcase_add_test(tc, s21_add_185);
  tcase_add_test(tc, s21_add_186);
  tcase_add_test(tc, s21_add_187);
  tcase_add_test(tc, s21_add_188);
  tcase_add_test(tc, s21_add_189);
  tcase_add_test(tc, s21_add_190);
  tcase_add_test(tc, s21_add_191);
  tcase_add_test(tc, s21_add_192);
  tcase_add_test(tc, s21_add_193);
  tcase_add_test(tc, s21_add_194);
  tcase_add_test(tc, s21_add_195);
  tcase_add_test(tc, s21_add_196);
  tcase_add_test(tc, s21_add_197);
  tcase_add_test(tc, s21_add_198);
  tcase_add_test(tc, s21_add_199);
  tcase_add_test(tc, s21_add_200);
  tcase_add_test(tc, s21_add_201);
  tcase_add_test(tc, s21_add_202);
  tcase_add_test(tc, s21_add_203);
  tcase_add_test(tc, s21_add_204);
  tcase_add_test(tc, s21_add_205);
  tcase_add_test(tc, s21_add_206);
  tcase_add_test(tc, s21_add_207);
  tcase_add_test(tc, s21_add_208);
  tcase_add_test(tc, s21_add_209);
  tcase_add_test(tc, s21_add_210);
  tcase_add_test(tc, s21_add_211);
  tcase_add_test(tc, s21_add_212);
  tcase_add_test(tc, s21_add_213);
  tcase_add_test(tc, s21_add_214);
  tcase_add_test(tc, s21_add_215);
  tcase_add_test(tc, s21_add_216);
  tcase_add_test(tc, s21_add_217);
  tcase_add_test(tc, s21_add_218);
  tcase_add_test(tc, s21_add_219);
  tcase_add_test(tc, s21_add_220);
  tcase_add_test(tc, s21_add_221);
  tcase_add_test(tc, s21_add_222);
  tcase_add_test(tc, s21_add_223);
  tcase_add_test(tc, s21_add_224);
  tcase_add_test(tc, s21_add_225);
  tcase_add_test(tc, s21_add_226);
  tcase_add_test(tc, s21_add_227);
  tcase_add_test(tc, s21_add_228);
  tcase_add_test(tc, s21_add_229);
  tcase_add_test(tc, s21_add_230);
  tcase_add_test(tc, s21_add_231);
  tcase_add_test(tc, s21_add_232);
  tcase_add_test(tc, s21_add_233);
  tcase_add_test(tc, s21_add_234);
  tcase_add_test(tc, s21_add_235);
  tcase_add_test(tc, s21_add_236);
  tcase_add_test(tc, s21_add_237);
  tcase_add_test(tc, s21_add_238);
  tcase_add_test(tc, s21_add_239);
  tcase_add_test(tc, s21_add_240);
  tcase_add_test(tc, s21_add_241);
  tcase_add_test(tc, s21_add_242);
  tcase_add_test(tc, s21_add_243);
  tcase_add_test(tc, s21_add_244);
  tcase_add_test(tc, s21_add_245);
  tcase_add_test(tc, s21_add_246);
  tcase_add_test(tc, s21_add_247);
  tcase_add_test(tc, s21_add_248);
  tcase_add_test(tc, s21_add_249);
  tcase_add_test(tc, s21_add_250);
  tcase_add_test(tc, s21_add_251);
  tcase_add_test(tc, s21_add_252);
  tcase_add_test(tc, s21_add_253);
  tcase_add_test(tc, s21_add_254);
  tcase_add_test(tc, s21_add_255);
  tcase_add_test(tc, s21_add_256);
  tcase_add_test(tc, s21_add_257);
  tcase_add_test(tc, s21_add_258);
  tcase_add_test(tc, s21_add_259);
  tcase_add_test(tc, s21_add_260);
  tcase_add_test(tc, s21_add_261);
  tcase_add_test(tc, s21_add_262);
  tcase_add_test(tc, s21_add_263);
  tcase_add_test(tc, s21_add_264);
  tcase_add_test(tc, s21_add_265);
  tcase_add_test(tc, s21_add_266);
  tcase_add_test(tc, s21_add_267);
  tcase_add_test(tc, s21_add_268);
  tcase_add_test(tc, s21_add_269);
  tcase_add_test(tc, s21_add_270);
  tcase_add_test(tc, s21_add_271);
  tcase_add_test(tc, s21_add_272);
  tcase_add_test(tc, s21_add_273);
  tcase_add_test(tc, s21_add_275);
  tcase_add_test(tc, s21_add_276);
  tcase_add_test(tc, s21_add_277);
  tcase_add_test(tc, s21_add_278);
  tcase_add_test(tc, s21_add_279);
  tcase_add_test(tc, s21_add_280);
  tcase_add_test(tc, s21_add_281);
  tcase_add_test(tc, s21_add_282);
  tcase_add_test(tc, s21_add_283);
  tcase_add_test(tc, s21_add_284);
  tcase_add_test(tc, s21_add_285);
  tcase_add_test(tc, s21_add_286);
  tcase_add_test(tc, s21_add_287);
  tcase_add_test(tc, s21_add_288);
  tcase_add_test(tc, s21_add_289);
  tcase_add_test(tc, s21_add_290);
  tcase_add_test(tc, s21_add_291);
  tcase_add_test(tc, s21_add_292);
  tcase_add_test(tc, s21_add_293);
  tcase_add_test(tc, s21_add_294);
  tcase_add_test(tc, s21_add_295);
  tcase_add_test(tc, s21_add_296);
  tcase_add_test(tc, s21_add_297);
  tcase_add_test(tc, s21_add_298);
  tcase_add_test(tc, s21_add_299);
  tcase_add_test(tc, s21_add_300);
  tcase_add_test(tc, s21_add_301);
  tcase_add_test(tc, s21_add_302);
  tcase_add_test(tc, s21_add_303);
  tcase_add_test(tc, s21_add_304);
  tcase_add_test(tc, s21_add_305);
  tcase_add_test(tc, s21_add_306);
  tcase_add_test(tc, s21_add_307);
  tcase_add_test(tc, s21_add_308);
  tcase_add_test(tc, s21_add_309);
  tcase_add_test(tc, s21_add_310);
  tcase_add_test(tc, s21_add_311);
  tcase_add_test(tc, s21_add_312);
  tcase_add_test(tc, s21_add_313);
  tcase_add_test(tc, s21_add_314);
  tcase_add_test(tc, s21_add_315);
  tcase_add_test(tc, s21_add_316);
  tcase_add_test(tc, s21_add_317);
  tcase_add_test(tc, s21_add_318);
  tcase_add_test(tc, s21_add_319);
  tcase_add_test(tc, s21_add_320);
  tcase_add_test(tc, s21_add_321);
  tcase_add_test(tc, s21_add_322);
  tcase_add_test(tc, s21_add_323);
  tcase_add_test(tc, s21_add_324);
  tcase_add_test(tc, s21_add_325);
  tcase_add_test(tc, s21_add_326);
  tcase_add_test(tc, s21_add_327);
  tcase_add_test(tc, s21_add_328);
  tcase_add_test(tc, s21_add_329);
  tcase_add_test(tc, s21_add_330);
  tcase_add_test(tc, s21_add_331);
  tcase_add_test(tc, s21_add_332);
  tcase_add_test(tc, s21_add_333);
  tcase_add_test(tc, s21_add_334);
  tcase_add_test(tc, s21_add_335);
  tcase_add_test(tc, s21_add_336);
  tcase_add_test(tc, s21_add_337);
  tcase_add_test(tc, s21_add_338);
  tcase_add_test(tc, s21_add_339);
  tcase_add_test(tc, s21_add_340);
  tcase_add_test(tc, s21_add_341);
  tcase_add_test(tc, s21_add_343);
  tcase_add_test(tc, s21_add_344);
  tcase_add_test(tc, s21_add_345);
  tcase_add_test(tc, s21_add_346);
  tcase_add_test(tc, s21_add_347);
  tcase_add_test(tc, s21_add_348);
  tcase_add_test(tc, s21_add_349);
  tcase_add_test(tc, s21_add_350);
  tcase_add_test(tc, s21_add_351);
  tcase_add_test(tc, s21_add_352);
  tcase_add_test(tc, s21_add_353);
  tcase_add_test(tc, s21_add_354);
  tcase_add_test(tc, s21_add_355);
  tcase_add_test(tc, s21_add_356);
  tcase_add_test(tc, s21_add_357);
  tcase_add_test(tc, s21_add_358);
  tcase_add_test(tc, s21_add_359);
  tcase_add_test(tc, s21_add_360);
  tcase_add_test(tc, s21_add_361);
  tcase_add_test(tc, s21_add_362);
  tcase_add_test(tc, s21_add_364);
  tcase_add_test(tc, s21_add_365);
  tcase_add_test(tc, s21_add_366);
  tcase_add_test(tc, s21_add_367);
  tcase_add_test(tc, s21_add_368);
  tcase_add_test(tc, s21_add_369);
  tcase_add_test(tc, s21_add_370);
  tcase_add_test(tc, s21_add_371);
  tcase_add_test(tc, s21_add_372);
  tcase_add_test(tc, s21_add_373);
  tcase_add_test(tc, s21_add_374);
  tcase_add_test(tc, s21_add_375);
  tcase_add_test(tc, s21_add_376);
  tcase_add_test(tc, s21_add_377);
  tcase_add_test(tc, s21_add_378);
  tcase_add_test(tc, s21_add_379);
  tcase_add_test(tc, s21_add_380);
  tcase_add_test(tc, s21_add_381);
  tcase_add_test(tc, s21_add_382);
  tcase_add_test(tc, s21_add_383);
  tcase_add_test(tc, s21_add_384);
  tcase_add_test(tc, s21_add_385);
  tcase_add_test(tc, s21_add_386);
  tcase_add_test(tc, s21_add_387);
  tcase_add_test(tc, s21_add_388);
  tcase_add_test(tc, s21_add_389);
  tcase_add_test(tc, s21_add_390);
  tcase_add_test(tc, s21_add_391);
  tcase_add_test(tc, s21_add_392);
  tcase_add_test(tc, s21_add_393);
  tcase_add_test(tc, s21_add_394);
  tcase_add_test(tc, s21_add_395);
  tcase_add_test(tc, s21_add_396);
  tcase_add_test(tc, s21_add_397);
  tcase_add_test(tc, s21_add_398);
  tcase_add_test(tc, s21_add_399);
  tcase_add_test(tc, s21_add_400);
  tcase_add_test(tc, s21_add_402);
  tcase_add_test(tc, s21_add_403);
  tcase_add_test(tc, s21_add_404);
  tcase_add_test(tc, s21_add_405);
  tcase_add_test(tc, s21_add_406);
  tcase_add_test(tc, s21_add_407);
  tcase_add_test(tc, s21_add_408);
  tcase_add_test(tc, s21_add_409);
  tcase_add_test(tc, s21_add_410);
  tcase_add_test(tc, s21_add_411);
  tcase_add_test(tc, s21_add_412);
  tcase_add_test(tc, s21_add_413);
  tcase_add_test(tc, s21_add_414);
  tcase_add_test(tc, s21_add_415);
  tcase_add_test(tc, s21_add_416);
  tcase_add_test(tc, s21_add_417);
  tcase_add_test(tc, s21_add_418);
  tcase_add_test(tc, s21_add_419);
  tcase_add_test(tc, s21_add_420);
  tcase_add_test(tc, s21_add_421);
  tcase_add_test(tc, s21_add_422);
  tcase_add_test(tc, s21_add_423);
  tcase_add_test(tc, s21_add_424);
  tcase_add_test(tc, s21_add_425);
  tcase_add_test(tc, s21_add_426);
  tcase_add_test(tc, s21_add_427);
  tcase_add_test(tc, s21_add_428);
  tcase_add_test(tc, s21_add_429);
  tcase_add_test(tc, s21_add_430);
  tcase_add_test(tc, s21_add_431);
  tcase_add_test(tc, s21_add_432);
  tcase_add_test(tc, s21_add_433);
  tcase_add_test(tc, s21_add_434);
  tcase_add_test(tc, s21_add_435);
  tcase_add_test(tc, s21_add_436);
  tcase_add_test(tc, s21_add_437);
  tcase_add_test(tc, s21_add_438);
  tcase_add_test(tc, s21_add_439);
  tcase_add_test(tc, s21_add_440);
  tcase_add_test(tc, s21_add_441);
  tcase_add_test(tc, s21_add_442);
  tcase_add_test(tc, s21_add_443);
  tcase_add_test(tc, s21_add_444);
  tcase_add_test(tc, s21_add_445);
  tcase_add_test(tc, s21_add_446);
  tcase_add_test(tc, s21_add_447);
  tcase_add_test(tc, s21_add_448);
  tcase_add_test(tc, s21_add_449);
  tcase_add_test(tc, s21_add_450);
  tcase_add_test(tc, s21_add_451);
  tcase_add_test(tc, s21_add_452);
  tcase_add_test(tc, s21_add_453);
  tcase_add_test(tc, s21_add_454);
  tcase_add_test(tc, s21_add_455);
  tcase_add_test(tc, s21_add_456);
  tcase_add_test(tc, s21_add_457);
  tcase_add_test(tc, s21_add_458);
  tcase_add_test(tc, s21_add_459);
  tcase_add_test(tc, s21_add_460);
  tcase_add_test(tc, s21_add_461);
  tcase_add_test(tc, s21_add_462);
  tcase_add_test(tc, s21_add_463);
  tcase_add_test(tc, s21_add_464);
  tcase_add_test(tc, s21_add_465);
  tcase_add_test(tc, s21_add_466);
  tcase_add_test(tc, s21_add_467);
  tcase_add_test(tc, s21_add_468);
  tcase_add_test(tc, s21_add_469);
  tcase_add_test(tc, s21_add_470);
  tcase_add_test(tc, s21_add_471);
  tcase_add_test(tc, s21_add_472);
  tcase_add_test(tc, s21_add_473);
  tcase_add_test(tc, s21_add_474);
  tcase_add_test(tc, s21_add_475);
  tcase_add_test(tc, s21_add_476);
  tcase_add_test(tc, s21_add_477);
  tcase_add_test(tc, s21_add_478);
  tcase_add_test(tc, s21_add_479);
  tcase_add_test(tc, s21_add_480);
  tcase_add_test(tc, s21_add_481);
  tcase_add_test(tc, s21_add_482);
  tcase_add_test(tc, s21_add_483);
  tcase_add_test(tc, s21_add_484);
  tcase_add_test(tc, s21_add_485);
  tcase_add_test(tc, s21_add_486);
  tcase_add_test(tc, s21_add_487);
  tcase_add_test(tc, s21_add_488);
  tcase_add_test(tc, s21_add_489);
  tcase_add_test(tc, s21_add_490);
  tcase_add_test(tc, s21_add_491);
  tcase_add_test(tc, s21_add_492);
  tcase_add_test(tc, s21_add_493);
  tcase_add_test(tc, s21_add_494);
  tcase_add_test(tc, s21_add_495);
  tcase_add_test(tc, s21_add_496);
  tcase_add_test(tc, s21_add_497);
  tcase_add_test(tc, s21_add_498);
  tcase_add_test(tc, s21_add_499);
  tcase_add_test(tc, s21_add_500);
  tcase_add_test(tc, fail_s21_add_1);
  tcase_add_test(tc, fail_s21_add_2);
  tcase_add_test(tc, fail_s21_add_3);
  tcase_add_test(tc, fail_s21_add_4);
  tcase_add_test(tc, fail_s21_add_5);
  tcase_add_test(tc, fail_s21_add_6);

  suite_add_tcase(c, tc);
  return c;
}

Suite *s21_add_cases_2(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("add9");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_add3201);
  tcase_add_test(tc_core, test_add3202);
  tcase_add_test(tc_core, test_add3203);
  tcase_add_test(tc_core, test_add3204);
  tcase_add_test(tc_core, test_add3205);
  tcase_add_test(tc_core, test_add3206);
  tcase_add_test(tc_core, test_add3207);
  tcase_add_test(tc_core, test_add3208);
  tcase_add_test(tc_core, test_add3209);
  tcase_add_test(tc_core, test_add3210);
  tcase_add_test(tc_core, test_add3211);
  tcase_add_test(tc_core, test_add3212);
  tcase_add_test(tc_core, test_add3213);
  tcase_add_test(tc_core, test_add3214);
  tcase_add_test(tc_core, test_add3215);
  tcase_add_test(tc_core, test_add3216);
  tcase_add_test(tc_core, test_add3217);
  tcase_add_test(tc_core, test_add3218);
  tcase_add_test(tc_core, test_add3219);
  tcase_add_test(tc_core, test_add3220);
  tcase_add_test(tc_core, test_add3221);
  tcase_add_test(tc_core, test_add3222);
  tcase_add_test(tc_core, test_add3223);
  tcase_add_test(tc_core, test_add3224);
  tcase_add_test(tc_core, test_add3225);
  tcase_add_test(tc_core, test_add3226);
  tcase_add_test(tc_core, test_add3227);
  tcase_add_test(tc_core, test_add3228);
  tcase_add_test(tc_core, test_add3229);
  tcase_add_test(tc_core, test_add3230);
  tcase_add_test(tc_core, test_add3231);
  tcase_add_test(tc_core, test_add3232);
  tcase_add_test(tc_core, test_add3234);
  tcase_add_test(tc_core, test_add3235);
  tcase_add_test(tc_core, test_add3236);
  tcase_add_test(tc_core, test_add3237);
  tcase_add_test(tc_core, test_add3238);
  tcase_add_test(tc_core, test_add3239);
  tcase_add_test(tc_core, test_add3240);
  tcase_add_test(tc_core, test_add3241);
  tcase_add_test(tc_core, test_add3242);
  tcase_add_test(tc_core, test_add3243);
  tcase_add_test(tc_core, test_add3244);
  tcase_add_test(tc_core, test_add3245);
  tcase_add_test(tc_core, test_add3246);
  tcase_add_test(tc_core, test_add3247);
  tcase_add_test(tc_core, test_add3248);
  tcase_add_test(tc_core, test_add3249);
  tcase_add_test(tc_core, test_add3250);
  tcase_add_test(tc_core, test_add3251);
  tcase_add_test(tc_core, test_add3252);
  tcase_add_test(tc_core, test_add3253);
  tcase_add_test(tc_core, test_add3254);
  tcase_add_test(tc_core, test_add3255);
  tcase_add_test(tc_core, test_add3256);
  tcase_add_test(tc_core, test_add3257);
  tcase_add_test(tc_core, test_add3258);
  tcase_add_test(tc_core, test_add3259);
  tcase_add_test(tc_core, test_add3260);
  tcase_add_test(tc_core, test_add3261);
  tcase_add_test(tc_core, test_add3262);
  tcase_add_test(tc_core, test_add3263);
  tcase_add_test(tc_core, test_add3264);
  tcase_add_test(tc_core, test_add3265);
  tcase_add_test(tc_core, test_add3266);
  tcase_add_test(tc_core, test_add3267);
  tcase_add_test(tc_core, test_add3268);
  tcase_add_test(tc_core, test_add3269);
  tcase_add_test(tc_core, test_add3270);
  tcase_add_test(tc_core, test_add3271);
  tcase_add_test(tc_core, test_add3272);
  tcase_add_test(tc_core, test_add3273);
  tcase_add_test(tc_core, test_add3274);
  tcase_add_test(tc_core, test_add3275);
  tcase_add_test(tc_core, test_add3276);
  tcase_add_test(tc_core, test_add3277);
  tcase_add_test(tc_core, test_add3278);
  tcase_add_test(tc_core, test_add3279);
  tcase_add_test(tc_core, test_add3280);
  tcase_add_test(tc_core, test_add3281);
  tcase_add_test(tc_core, test_add3282);
  tcase_add_test(tc_core, test_add3283);
  tcase_add_test(tc_core, test_add3284);
  tcase_add_test(tc_core, test_add3285);
  tcase_add_test(tc_core, test_add3286);
  tcase_add_test(tc_core, test_add3287);
  tcase_add_test(tc_core, test_add3288);
  tcase_add_test(tc_core, test_add3289);
  tcase_add_test(tc_core, test_add3290);
  tcase_add_test(tc_core, test_add3291);
  tcase_add_test(tc_core, test_add3292);
  tcase_add_test(tc_core, test_add3293);
  tcase_add_test(tc_core, test_add3294);
  tcase_add_test(tc_core, test_add3295);
  tcase_add_test(tc_core, test_add3297);
  tcase_add_test(tc_core, test_add3298);
  tcase_add_test(tc_core, test_add3299);
  tcase_add_test(tc_core, test_add3300);
  tcase_add_test(tc_core, test_add3301);
  tcase_add_test(tc_core, test_add3302);
  tcase_add_test(tc_core, test_add3303);
  tcase_add_test(tc_core, test_add3304);
  tcase_add_test(tc_core, test_add3305);
  tcase_add_test(tc_core, test_add3306);
  tcase_add_test(tc_core, test_add3307);
  tcase_add_test(tc_core, test_add3308);
  tcase_add_test(tc_core, test_add3309);
  tcase_add_test(tc_core, test_add3310);
  tcase_add_test(tc_core, test_add3311);
  tcase_add_test(tc_core, test_add3312);
  tcase_add_test(tc_core, test_add3313);
  tcase_add_test(tc_core, test_add3314);
  tcase_add_test(tc_core, test_add3315);
  tcase_add_test(tc_core, test_add3316);
  tcase_add_test(tc_core, test_add3317);
  tcase_add_test(tc_core, test_add3318);
  tcase_add_test(tc_core, test_add3319);
  tcase_add_test(tc_core, test_add3320);
  tcase_add_test(tc_core, test_add3321);
  tcase_add_test(tc_core, test_add3322);
  tcase_add_test(tc_core, test_add3323);
  tcase_add_test(tc_core, test_add3324);
  tcase_add_test(tc_core, test_add3325);
  tcase_add_test(tc_core, test_add3326);
  tcase_add_test(tc_core, test_add3327);
  tcase_add_test(tc_core, test_add3328);
  tcase_add_test(tc_core, test_add3329);
  tcase_add_test(tc_core, test_add3330);
  tcase_add_test(tc_core, test_add3331);
  tcase_add_test(tc_core, test_add3332);
  tcase_add_test(tc_core, test_add3333);
  tcase_add_test(tc_core, test_add3334);
  tcase_add_test(tc_core, test_add3335);
  tcase_add_test(tc_core, test_add3336);
  tcase_add_test(tc_core, test_add3337);
  tcase_add_test(tc_core, test_add3338);
  tcase_add_test(tc_core, test_add3339);
  tcase_add_test(tc_core, test_add3340);
  tcase_add_test(tc_core, test_add3341);
  tcase_add_test(tc_core, test_add3342);
  tcase_add_test(tc_core, test_add3343);
  tcase_add_test(tc_core, test_add3344);
  tcase_add_test(tc_core, test_add3345);
  tcase_add_test(tc_core, test_add3346);
  tcase_add_test(tc_core, test_add3347);
  tcase_add_test(tc_core, test_add3348);
  tcase_add_test(tc_core, test_add3349);
  tcase_add_test(tc_core, test_add3350);
  tcase_add_test(tc_core, test_add3351);
  tcase_add_test(tc_core, test_add3352);
  tcase_add_test(tc_core, test_add3353);
  tcase_add_test(tc_core, test_add3354);
  tcase_add_test(tc_core, test_add3355);
  tcase_add_test(tc_core, test_add3356);
  tcase_add_test(tc_core, test_add3357);
  tcase_add_test(tc_core, test_add3358);
  tcase_add_test(tc_core, test_add3359);
  tcase_add_test(tc_core, test_add3360);
  tcase_add_test(tc_core, test_add3361);
  tcase_add_test(tc_core, test_add3362);
  tcase_add_test(tc_core, test_add3363);
  tcase_add_test(tc_core, test_add3364);
  tcase_add_test(tc_core, test_add3365);
  tcase_add_test(tc_core, test_add3366);
  tcase_add_test(tc_core, test_add3367);
  tcase_add_test(tc_core, test_add3368);
  tcase_add_test(tc_core, test_add3369);
  tcase_add_test(tc_core, test_add3370);
  tcase_add_test(tc_core, test_add3371);
  tcase_add_test(tc_core, test_add3372);
  tcase_add_test(tc_core, test_add3373);
  tcase_add_test(tc_core, test_add3374);
  tcase_add_test(tc_core, test_add3375);
  tcase_add_test(tc_core, test_add3376);
  tcase_add_test(tc_core, test_add3377);
  tcase_add_test(tc_core, test_add3378);
  tcase_add_test(tc_core, test_add3379);
  tcase_add_test(tc_core, test_add3380);
  tcase_add_test(tc_core, test_add3381);
  tcase_add_test(tc_core, test_add3382);
  tcase_add_test(tc_core, test_add3383);
  tcase_add_test(tc_core, test_add3384);
  tcase_add_test(tc_core, test_add3385);
  tcase_add_test(tc_core, test_add3386);
  tcase_add_test(tc_core, test_add3387);
  tcase_add_test(tc_core, test_add3388);
  tcase_add_test(tc_core, test_add3389);
  tcase_add_test(tc_core, test_add3390);
  tcase_add_test(tc_core, test_add3391);
  tcase_add_test(tc_core, test_add3392);
  tcase_add_test(tc_core, test_add3393);
  tcase_add_test(tc_core, test_add3394);
  tcase_add_test(tc_core, test_add3395);
  tcase_add_test(tc_core, test_add3396);
  tcase_add_test(tc_core, test_add3397);
  tcase_add_test(tc_core, test_add3398);
  tcase_add_test(tc_core, test_add3399);
  tcase_add_test(tc_core, test_add3400);
  tcase_add_test(tc_core, test_add3401);
  tcase_add_test(tc_core, test_add3402);
  tcase_add_test(tc_core, test_add3403);
  tcase_add_test(tc_core, test_add3404);
  tcase_add_test(tc_core, test_add3405);
  tcase_add_test(tc_core, test_add3406);
  tcase_add_test(tc_core, test_add3407);
  tcase_add_test(tc_core, test_add3408);
  tcase_add_test(tc_core, test_add3409);
  tcase_add_test(tc_core, test_add3410);
  tcase_add_test(tc_core, test_add3411);
  tcase_add_test(tc_core, test_add3412);
  tcase_add_test(tc_core, test_add3413);
  tcase_add_test(tc_core, test_add3414);
  tcase_add_test(tc_core, test_add3415);
  tcase_add_test(tc_core, test_add3416);
  tcase_add_test(tc_core, test_add3417);
  tcase_add_test(tc_core, test_add3419);
  tcase_add_test(tc_core, test_add3420);
  tcase_add_test(tc_core, test_add3421);
  tcase_add_test(tc_core, test_add3422);
  tcase_add_test(tc_core, test_add3423);
  tcase_add_test(tc_core, test_add3424);
  tcase_add_test(tc_core, test_add3425);
  tcase_add_test(tc_core, test_add3426);
  tcase_add_test(tc_core, test_add3427);
  tcase_add_test(tc_core, test_add3428);
  tcase_add_test(tc_core, test_add3429);
  tcase_add_test(tc_core, test_add3430);
  tcase_add_test(tc_core, test_add3431);
  tcase_add_test(tc_core, test_add3432);
  tcase_add_test(tc_core, test_add3433);
  tcase_add_test(tc_core, test_add3434);
  tcase_add_test(tc_core, test_add3435);
  tcase_add_test(tc_core, test_add3436);
  tcase_add_test(tc_core, test_add3437);
  tcase_add_test(tc_core, test_add3438);
  tcase_add_test(tc_core, test_add3439);
  tcase_add_test(tc_core, test_add3440);
  tcase_add_test(tc_core, test_add3441);
  tcase_add_test(tc_core, test_add3442);
  tcase_add_test(tc_core, test_add3443);
  tcase_add_test(tc_core, test_add3444);
  tcase_add_test(tc_core, test_add3445);
  tcase_add_test(tc_core, test_add3446);
  tcase_add_test(tc_core, test_add3447);
  tcase_add_test(tc_core, test_add3448);
  tcase_add_test(tc_core, test_add3449);
  tcase_add_test(tc_core, test_add3450);
  tcase_add_test(tc_core, test_add3451);
  tcase_add_test(tc_core, test_add3452);
  tcase_add_test(tc_core, test_add3453);
  tcase_add_test(tc_core, test_add3454);
  tcase_add_test(tc_core, test_add3455);
  tcase_add_test(tc_core, test_add3456);
  tcase_add_test(tc_core, test_add3457);
  tcase_add_test(tc_core, test_add3458);
  tcase_add_test(tc_core, test_add3459);
  tcase_add_test(tc_core, test_add3460);
  tcase_add_test(tc_core, test_add3461);
  tcase_add_test(tc_core, test_add3462);
  tcase_add_test(tc_core, test_add3463);
  tcase_add_test(tc_core, test_add3464);
  tcase_add_test(tc_core, test_add3465);
  tcase_add_test(tc_core, test_add3466);
  tcase_add_test(tc_core, test_add3467);
  tcase_add_test(tc_core, test_add3468);
  tcase_add_test(tc_core, test_add3469);
  tcase_add_test(tc_core, test_add3470);
  tcase_add_test(tc_core, test_add3471);
  tcase_add_test(tc_core, test_add3472);
  tcase_add_test(tc_core, test_add3473);
  tcase_add_test(tc_core, test_add3474);
  tcase_add_test(tc_core, test_add3475);
  tcase_add_test(tc_core, test_add3476);
  tcase_add_test(tc_core, test_add3477);
  tcase_add_test(tc_core, test_add3478);
  tcase_add_test(tc_core, test_add3479);
  tcase_add_test(tc_core, test_add3480);
  tcase_add_test(tc_core, test_add3481);
  tcase_add_test(tc_core, test_add3482);
  tcase_add_test(tc_core, test_add3483);
  tcase_add_test(tc_core, test_add3484);
  tcase_add_test(tc_core, test_add3485);
  tcase_add_test(tc_core, test_add3486);
  tcase_add_test(tc_core, test_add3487);
  tcase_add_test(tc_core, test_add3488);
  tcase_add_test(tc_core, test_add3489);
  tcase_add_test(tc_core, test_add3490);
  tcase_add_test(tc_core, test_add3491);
  tcase_add_test(tc_core, test_add3492);
  tcase_add_test(tc_core, test_add3493);
  tcase_add_test(tc_core, test_add3494);
  tcase_add_test(tc_core, test_add3495);
  tcase_add_test(tc_core, test_add3496);
  tcase_add_test(tc_core, test_add3497);
  tcase_add_test(tc_core, test_add3498);
  tcase_add_test(tc_core, test_add3499);
  tcase_add_test(tc_core, test_add3500);
  tcase_add_test(tc_core, test_add3501);
  tcase_add_test(tc_core, test_add3502);
  tcase_add_test(tc_core, test_add3503);
  tcase_add_test(tc_core, test_add3504);
  tcase_add_test(tc_core, test_add3505);
  tcase_add_test(tc_core, test_add3506);
  tcase_add_test(tc_core, test_add3507);
  tcase_add_test(tc_core, test_add3508);
  tcase_add_test(tc_core, test_add3509);
  tcase_add_test(tc_core, test_add3510);
  tcase_add_test(tc_core, test_add3511);
  tcase_add_test(tc_core, test_add3512);
  tcase_add_test(tc_core, test_add3513);
  tcase_add_test(tc_core, test_add3514);
  tcase_add_test(tc_core, test_add3515);
  tcase_add_test(tc_core, test_add3516);
  tcase_add_test(tc_core, test_add3517);
  tcase_add_test(tc_core, test_add3518);
  tcase_add_test(tc_core, test_add3519);
  tcase_add_test(tc_core, test_add3520);
  tcase_add_test(tc_core, test_add3521);
  tcase_add_test(tc_core, test_add3522);
  tcase_add_test(tc_core, test_add3523);
  tcase_add_test(tc_core, test_add3524);
  tcase_add_test(tc_core, test_add3525);
  tcase_add_test(tc_core, test_add3526);
  tcase_add_test(tc_core, test_add3527);
  tcase_add_test(tc_core, test_add3528);
  tcase_add_test(tc_core, test_add3529);
  tcase_add_test(tc_core, test_add3530);
  tcase_add_test(tc_core, test_add3531);
  tcase_add_test(tc_core, test_add3532);
  tcase_add_test(tc_core, test_add3533);
  tcase_add_test(tc_core, test_add3534);
  tcase_add_test(tc_core, test_add3535);
  tcase_add_test(tc_core, test_add3536);
  tcase_add_test(tc_core, test_add3537);
  tcase_add_test(tc_core, test_add3538);
  tcase_add_test(tc_core, test_add3539);
  tcase_add_test(tc_core, test_add3541);
  tcase_add_test(tc_core, test_add3542);
  tcase_add_test(tc_core, test_add3543);
  tcase_add_test(tc_core, test_add3544);
  tcase_add_test(tc_core, test_add3545);
  tcase_add_test(tc_core, test_add3546);
  tcase_add_test(tc_core, test_add3547);
  tcase_add_test(tc_core, test_add3548);
  tcase_add_test(tc_core, test_add3549);
  tcase_add_test(tc_core, test_add3550);
  tcase_add_test(tc_core, test_add3551);
  tcase_add_test(tc_core, test_add3552);
  tcase_add_test(tc_core, test_add3553);
  tcase_add_test(tc_core, test_add3554);
  tcase_add_test(tc_core, test_add3555);
  tcase_add_test(tc_core, test_add3556);
  tcase_add_test(tc_core, test_add3557);
  tcase_add_test(tc_core, test_add3558);
  tcase_add_test(tc_core, test_add3559);
  tcase_add_test(tc_core, test_add3560);
  tcase_add_test(tc_core, test_add3561);
  tcase_add_test(tc_core, test_add3562);
  tcase_add_test(tc_core, test_add3563);
  tcase_add_test(tc_core, test_add3564);
  tcase_add_test(tc_core, test_add3565);
  tcase_add_test(tc_core, test_add3566);
  tcase_add_test(tc_core, test_add3567);
  tcase_add_test(tc_core, test_add3568);
  tcase_add_test(tc_core, test_add3569);
  tcase_add_test(tc_core, test_add3570);
  tcase_add_test(tc_core, test_add3571);
  tcase_add_test(tc_core, test_add3572);
  tcase_add_test(tc_core, test_add3573);
  tcase_add_test(tc_core, test_add3574);
  tcase_add_test(tc_core, test_add3575);
  tcase_add_test(tc_core, test_add3576);
  tcase_add_test(tc_core, test_add3577);
  tcase_add_test(tc_core, test_add3578);
  tcase_add_test(tc_core, test_add3579);
  tcase_add_test(tc_core, test_add3580);
  tcase_add_test(tc_core, test_add3581);
  tcase_add_test(tc_core, test_add3582);
  tcase_add_test(tc_core, test_add3583);
  tcase_add_test(tc_core, test_add3584);
  tcase_add_test(tc_core, test_add3585);
  tcase_add_test(tc_core, test_add3586);
  tcase_add_test(tc_core, test_add3587);
  tcase_add_test(tc_core, test_add3588);
  tcase_add_test(tc_core, test_add3589);
  tcase_add_test(tc_core, test_add3590);
  tcase_add_test(tc_core, test_add3591);
  tcase_add_test(tc_core, test_add3592);
  tcase_add_test(tc_core, test_add3593);
  tcase_add_test(tc_core, test_add3594);
  tcase_add_test(tc_core, test_add3595);
  tcase_add_test(tc_core, test_add3596);
  tcase_add_test(tc_core, test_add3597);
  tcase_add_test(tc_core, test_add3598);
  tcase_add_test(tc_core, test_add3599);
  tcase_add_test(tc_core, test_add3600);

  suite_add_tcase(s, tc_core);
  return s;
}
