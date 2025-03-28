#include "test.h"

START_TEST(s21_sub_1) {
  // -2.0
  s21_decimal dec_1 = {{0x14, 0x0, 0x0, 0x80010000}};
  // -14546.98
  s21_decimal dec_2 = {{0, 0, 0, 0}};
  // 14544.98
  s21_decimal dec_check = {{0x14, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_2) {
  // 8.999117417171961209
  s21_decimal dec_1 = {{0, 0, 0, 0}};
  // 0.23
  s21_decimal dec_2 = {{0x8e90c579, 0x7ce3499c, 0x0, 0x120000}};
  // 8.769117417171961209
  s21_decimal dec_check = {{0x8e90c579, 0x7ce3499c, 0x0, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_3) {
  // -937862509898433027
  s21_decimal dec_1 = {{0xd6a70203, 0xd03f4fb, 0x0, 0x80000000}};
  // -24409923896660279
  s21_decimal dec_2 = {{0x4adad137, 0x56b8b2, 0x0, 0x80000000}};
  // -913452586001772748
  s21_decimal dec_check = {{0x8bcc30cc, 0xcad3c49, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_4) {
  // 951401
  s21_decimal dec_1 = {{0xe8469, 0x0, 0x0, 0x0}};
  // -26
  s21_decimal dec_2 = {{0x1a, 0x0, 0x0, 0x80000000}};
  // 951427
  s21_decimal dec_check = {{0xe8483, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_5) {
  // 55117693115.7827384980
  s21_decimal dec_1 = {{0xa43bf694, 0xe11dd2a0, 0x1d, 0xa0000}};
  // -815511
  s21_decimal dec_2 = {{0xc7197, 0x0, 0x0, 0x80000000}};
  // 55118508626.7827384980
  s21_decimal dec_check = {{0x26e37294, 0xe13acba8, 0x1d, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_6) {
  // -90
  s21_decimal dec_1 = {{0x5a, 0x0, 0x0, 0x80000000}};
  // 21016911442723320.704961
  s21_decimal dec_2 = {{0xa6052fc1, 0x543cc4c9, 0x473, 0x60000}};
  // -21016911442723410.704961
  s21_decimal dec_check = {{0xab627a41, 0x543cc4c9, 0x473, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_7) {
  // 865028
  s21_decimal dec_1 = {{0xd3304, 0x0, 0x0, 0x0}};
  // -79228162514264337592865742110
  s21_decimal dec_2 = {{0xd7935d1e, 0xffffffff, 0xffffffff, 0x80000000}};
  // 79228162514264337592866607138
  s21_decimal dec_check = {{0xd7a09022, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_8) {
  // 91648271844915929840597081
  s21_decimal dec_1 = {{0xba13b859, 0xc59ddc11, 0x4bcf46, 0x0}};
  // 139981868613086
  s21_decimal dec_2 = {{0x118dbdde, 0x7f50, 0x0, 0x0}};
  // 91648271844775947971983995
  s21_decimal dec_check = {{0xa885fa7b, 0xc59d5cc1, 0x4bcf46, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_9) {
  // 0.1198498
  s21_decimal dec_1 = {{0x1249a2, 0x0, 0x0, 0x70000}};
  // 97.16
  s21_decimal dec_2 = {{0x25f4, 0x0, 0x0, 0x20000}};
  // -97.0401502
  s21_decimal dec_check = {{0x39d726de, 0x0, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_10) {
  // -84874407738931264003335
  s21_decimal dec_1 = {{0x56fe9d07, 0xd055aac, 0x11f9, 0x80000000}};
  // -574.49125382
  s21_decimal dec_2 = {{0x603c1606, 0xd, 0x0, 0x80080000}};
  // -84874407738931264002760.508746
  s21_decimal dec_check = {{0x3eee33bb, 0x4b7b383e, 0x1b6ca57e, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_11) {
  // -276929
  s21_decimal dec_1 = {{0x439c1, 0x0, 0x0, 0x80000000}};
  // 74101921413492241957545176590
  s21_decimal dec_2 = {{0x5df9ee0e, 0x17c9a382, 0xef6fac39, 0x0}};
  // -74101921413492241957545453519
  s21_decimal dec_check = {{0x5dfe27cf, 0x17c9a382, 0xef6fac39, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_12) {
  // 957514859763946596
  s21_decimal dec_1 = {{0x1b635464, 0xd49c6b1, 0x0, 0x0}};
  // -51
  s21_decimal dec_2 = {{0x33, 0x0, 0x0, 0x80000000}};
  // 957514859763946647
  s21_decimal dec_check = {{0x1b635497, 0xd49c6b1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_13) {
  // 60349635316922
  s21_decimal dec_1 = {{0x3e934cba, 0x36e3, 0x0, 0x0}};
  // -3508.15865
  s21_decimal dec_2 = {{0x14e90679, 0x0, 0x0, 0x80050000}};
  // 60349635320430.15865
  s21_decimal dec_check = {{0x97dc56b9, 0x53c07f5b, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_14) {
  // -161656592
  s21_decimal dec_1 = {{0x9a2af10, 0x0, 0x0, 0x80000000}};
  // -907555.9503590049
  s21_decimal dec_2 = {{0x5c5972a1, 0x203e2c, 0x0, 0x800a0000}};
  // -160749036.0496409951
  s21_decimal dec_check = {{0x4d40cd5f, 0x164ef3f7, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_15) {
  // -9128
  s21_decimal dec_1 = {{0x23a8, 0x0, 0x0, 0x80000000}};
  // 9320047048768120610
  s21_decimal dec_2 = {{0x3fc06722, 0x81577569, 0x0, 0x0}};
  // -9320047048768129738
  s21_decimal dec_check = {{0x3fc08aca, 0x81577569, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_16) {
  // 57623759104
  s21_decimal dec_1 = {{0x6aa4c900, 0xd, 0x0, 0x0}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // 57623759100
  s21_decimal dec_check = {{0x6aa4c8fc, 0xd, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_17) {
  // -52054194041202078902
  s21_decimal dec_1 = {{0x7f1af4b6, 0xd265a5af, 0x2, 0x80000000}};
  // 390.8772847572006582028789301
  s21_decimal dec_2 = {{0x9d5ee635, 0xa78d0d9c, 0xca142d8, 0x190000}};
  // -52054194041202079292.877284757
  s21_decimal dec_check = {{0x6eada595, 0x529a2743, 0xa8323859, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_18) {
  // 993485764891
  s21_decimal dec_1 = {{0x505db91b, 0xe7, 0x0, 0x0}};
  // -34.64083559741
  s21_decimal dec_2 = {{0x8b78553d, 0x326, 0x0, 0x800b0000}};
  // 993485764925.64083559741
  s21_decimal dec_check = {{0x65aacd3d, 0xb276acab, 0x1509, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_19) {
  // -5055058
  s21_decimal dec_1 = {{0x4d2252, 0x0, 0x0, 0x80000000}};
  // 69966516594056557
  s21_decimal dec_2 = {{0x17c29d6d, 0xf8922d, 0x0, 0x0}};
  // -69966516599111615
  s21_decimal dec_check = {{0x180fbfbf, 0xf8922d, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_20) {
  // 402066500074.92615
  s21_decimal dec_1 = {{0x334e1807, 0x8ed7bc, 0x0, 0x50000}};
  // -895183319
  s21_decimal dec_2 = {{0x355b69d7, 0x0, 0x0, 0x80000000}};
  // 402961683393.92615
  s21_decimal dec_check = {{0xcfadc867, 0x8f2926, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_21) {
  // 41455825.13070829079416
  s21_decimal dec_1 = {{0x81ee0b78, 0xbb83b366, 0xe0, 0xe0000}};
  // -48711181993435285
  s21_decimal dec_2 = {{0xdb4ee095, 0xad0e8f, 0x0, 0x80000000}};
  // 48711182034891110.130708290794
  s21_decimal dec_check = {{0x74a69cea, 0x540adddf, 0x9d64f205, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_22) {
  // -61291664275633956604951
  s21_decimal dec_1 = {{0xbdba4c17, 0xa0b61188, 0xcfa, 0x80000000}};
  // -32147731623705.3266123
  s21_decimal dec_2 = {{0x977a08cb, 0x6d64dbdb, 0x11, 0x80070000}};
  // -61291664243486224981245.673388
  s21_decimal dec_check = {{0xf5fdbfac, 0x66e9116d, 0xc60b46c0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_23) {
  // 0.34236
  s21_decimal dec_1 = {{0x85bc, 0x0, 0x0, 0x50000}};
  // -54907902965948461309611932
  s21_decimal dec_2 = {{0x7ce9cf9c, 0x6255602d, 0x2d6b33, 0x80000000}};
  // 54907902965948461309611932.342
  s21_decimal dec_check = {{0xf152fab6, 0x1d7fb1af, 0xb16ac0b8, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_24) {
  // -1491412004587512395
  s21_decimal dec_1 = {{0xfb31224b, 0x14b28f50, 0x0, 0x80000000}};
  // 0.47552
  s21_decimal dec_2 = {{0xb9c0, 0x0, 0x0, 0x50000}};
  // -1491412004587512395.47552
  s21_decimal dec_check = {{0xd8f46aa0, 0xf5eef149, 0x1f94, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_25) {
  // -79881632310572866.5
  s21_decimal dec_1 = {{0xab802899, 0xb15f736, 0x0, 0x80010000}};
  // 148891.8435561523
  s21_decimal dec_2 = {{0xd6738033, 0x54a29, 0x0, 0xa0000}};
  // -79881632310721758.3435561523
  s21_decimal dec_check = {{0xa5863a33, 0xa58021f0, 0x294c3ef, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_26) {
  // 25.468718235821
  s21_decimal dec_1 = {{0xe5e740ad, 0x1729, 0x0, 0xc0000}};
  // 537788854666637516186
  s21_decimal dec_2 = {{0xe91a9d9a, 0x2751d1fd, 0x1d, 0x0}};
  // -537788854666637516160.53128176
  s21_decimal dec_check = {{0xa3182bf0, 0xd71dc56c, 0xadc4d9f6, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_27) {
  // 820771412880780163706
  s21_decimal dec_1 = {{0xba5ffa7a, 0x7e7dd361, 0x2c, 0x0}};
  // 946.1
  s21_decimal dec_2 = {{0x24f5, 0x0, 0x0, 0x10000}};
  // 820771412880780162759.9
  s21_decimal dec_check = {{0x47bfa3cf, 0xf0ea41d1, 0x1bc, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_28) {
  // 446182786677
  s21_decimal dec_1 = {{0xe2910675, 0x67, 0x0, 0x0}};
  // -80083991095651125
  s21_decimal dec_2 = {{0x3173ab35, 0x11c83f7, 0x0, 0x80000000}};
  // 80084437278437802
  s21_decimal dec_check = {{0x1404b1aa, 0x11c845f, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_29) {
  // -5989
  s21_decimal dec_1 = {{0x1765, 0x0, 0x0, 0x80000000}};
  // -54048692620586040
  s21_decimal dec_2 = {{0xe4396c38, 0xc004ff, 0x0, 0x80000000}};
  // 54048692620580051
  s21_decimal dec_check = {{0xe43954d3, 0xc004ff, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_30) {
  // 1604995.36
  s21_decimal dec_1 = {{0x9910750, 0x0, 0x0, 0x20000}};
  // 432
  s21_decimal dec_2 = {{0x1b0, 0x0, 0x0, 0x0}};
  // 1604563.36
  s21_decimal dec_check = {{0x9905e90, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_31) {
  // -743
  s21_decimal dec_1 = {{0x2e7, 0x0, 0x0, 0x80000000}};
  // -30079542669843
  s21_decimal dec_2 = {{0x7074b213, 0x1b5b, 0x0, 0x80000000}};
  // 30079542669100
  s21_decimal dec_check = {{0x7074af2c, 0x1b5b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_32) {
  // -95801.86196
  s21_decimal dec_1 = {{0x3b060a54, 0x2, 0x0, 0x80050000}};
  // 15462557106137.474989839890410
  s21_decimal dec_2 = {{0x367037ea, 0x55307f19, 0x31f653d4, 0xf0000}};
  // -15462557201939.336949839890410
  s21_decimal dec_check = {{0x993f07ea, 0x86b514f8, 0x31f653d9, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_33) {
  // -469024
  s21_decimal dec_1 = {{0x72820, 0x0, 0x0, 0x80000000}};
  // -4.947307669
  s21_decimal dec_2 = {{0x26e1ec95, 0x1, 0x0, 0x80090000}};
  // -469019.052692331
  s21_decimal dec_check = {{0x207536b, 0x1aa92, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_34) {
  // -69.9217
  s21_decimal dec_1 = {{0xaab51, 0x0, 0x0, 0x80040000}};
  // -47485567048629974842344718381
  s21_decimal dec_2 = {{0x1b83c02d, 0xcaa20b18, 0x996f23f3, 0x80000000}};
  // 47485567048629974842344718311
  s21_decimal dec_check = {{0x1b83bfe7, 0xcaa20b18, 0x996f23f3, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_35) {
  // 0.38
  s21_decimal dec_1 = {{0x26, 0x0, 0x0, 0x20000}};
  // -1801962
  s21_decimal dec_2 = {{0x1b7eea, 0x0, 0x0, 0x80000000}};
  // 1801962.38
  s21_decimal dec_check = {{0xabd938e, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_36) {
  // -822885919495.176216
  s21_decimal dec_1 = {{0x4a2e4018, 0xb6b7a62, 0x0, 0x80060000}};
  // 0.115383350841985538674353672
  s21_decimal dec_2 = {{0x29cb6608, 0xfb8a28c9, 0x5f715f, 0x1b0000}};
  // -822885919495.29159935084198554
  s21_decimal dec_check = {{0x9e83990f, 0xcff080ad, 0x1a96c0b6, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_37) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -5656.5
  s21_decimal dec_2 = {{0xdcf5, 0x0, 0x0, 0x80010000}};
  // 5649.5
  s21_decimal dec_check = {{0xdcaf, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_38) {
  // -276810243889153179
  s21_decimal dec_1 = {{0x4133c49b, 0x3d76d73, 0x0, 0x80000000}};
  // -0.067
  s21_decimal dec_2 = {{0x43, 0x0, 0x0, 0x80030000}};
  // -276810243889153178.933
  s21_decimal dec_check = {{0xb237fd35, 0x1838a36, 0xf, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_39) {
  // -6827071.2048377497959562
  s21_decimal dec_1 = {{0xb9a0bc8a, 0xf6748e43, 0xe74, 0x80100000}};
  // -90.3181907
  s21_decimal dec_2 = {{0x35d57653, 0x0, 0x0, 0x80070000}};
  // -6826980.8866470497959562
  s21_decimal dec_check = {{0xfb553e8a, 0xe9ebcf1a, 0xe74, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_40) {
  // 75847632026232251
  s21_decimal dec_1 = {{0xfbfa65bb, 0x10d7704, 0x0, 0x0}};
  // -1851615902168
  s21_decimal dec_2 = {{0x1ce879d8, 0x1af, 0x0, 0x80000000}};
  // 75849483642134419
  s21_decimal dec_check = {{0x18e2df93, 0x10d78b4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_41) {
  // 54542284011012.9767693695
  s21_decimal dec_1 = {{0x227abd7f, 0x6e70ca1b, 0x737f, 0xa0000}};
  // -2930915272
  s21_decimal dec_2 = {{0xaeb237c8, 0x0, 0x0, 0x80000000}};
  // 54545214926284.9767693695
  s21_decimal dec_check = {{0xe1c0dd7f, 0x52fd137, 0x7381, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_42) {
  // 0.57
  s21_decimal dec_1 = {{0x39, 0x0, 0x0, 0x20000}};
  // 485.08037543
  s21_decimal dec_2 = {{0x4b4de9a7, 0xb, 0x0, 0x80000}};
  // -484.51037543
  s21_decimal dec_check = {{0x47e82967, 0xb, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_43) {
  // -2865428
  s21_decimal dec_1 = {{0x2bb914, 0x0, 0x0, 0x80000000}};
  // 8144969274.57034
  s21_decimal dec_2 = {{0xd8081f0a, 0x2e4c7, 0x0, 0x50000}};
  // -8147834702.57034
  s21_decimal dec_check = {{0x8f50438a, 0x2e50a, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_44) {
  // -33339
  s21_decimal dec_1 = {{0x823b, 0x0, 0x0, 0x80000000}};
  // -125548
  s21_decimal dec_2 = {{0x1ea6c, 0x0, 0x0, 0x80000000}};
  // 92209
  s21_decimal dec_check = {{0x16831, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_45) {
  // 7779745226
  s21_decimal dec_1 = {{0xcfb57dca, 0x1, 0x0, 0x0}};
  // -972106813868578335205
  s21_decimal dec_2 = {{0x556269e5, 0xb2b12cc5, 0x34, 0x80000000}};
  // 972106813876358080431
  s21_decimal dec_check = {{0x2517e7af, 0xb2b12cc7, 0x34, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_46) {
  // -7953
  s21_decimal dec_1 = {{0x1f11, 0x0, 0x0, 0x80000000}};
  // 5.1059788
  s21_decimal dec_2 = {{0x30b1c4c, 0x0, 0x0, 0x70000}};
  // -7958.1059788
  s21_decimal dec_check = {{0x87669acc, 0x12, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_47) {
  // 632057511712968585
  s21_decimal dec_1 = {{0x4744cf89, 0x8c584f5, 0x0, 0x0}};
  // 8419154.5873
  s21_decimal dec_2 = {{0x9a350a11, 0x13, 0x0, 0x40000}};
  // 632057511704549430.4127
  s21_decimal dec_check = {{0x55b5cd7f, 0xa399ad1c, 0x156, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_48) {
  // 82619.18
  s21_decimal dec_1 = {{0x7e111e, 0x0, 0x0, 0x20000}};
  // 6447826
  s21_decimal dec_2 = {{0x6262d2, 0x0, 0x0, 0x0}};
  // -6365206.82
  s21_decimal dec_check = {{0x25f088ea, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_49) {
  // -1280202671411727573134412377
  s21_decimal dec_1 = {{0x46450a59, 0xe0d96336, 0x422f575, 0x80000000}};
  // -374501008426.1714
  s21_decimal dec_2 = {{0x1bc0af52, 0xd4e11, 0x0, 0x80040000}};
  // -1280202671411727198633403950.8
  s21_decimal dec_check = {{0xcab37dd4, 0xc87ddcb6, 0x295d969a, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_50) {
  // 6018210618870123902864001
  s21_decimal dec_1 = {{0x69d0a81, 0xd9f38ff4, 0x4fa67, 0x0}};
  // 0.55166041705162
  s21_decimal dec_2 = {{0x5851caca, 0x322c, 0x0, 0xe0000}};
  // 6018210618870123902864000.4483
  s21_decimal dec_check = {{0x566a3983, 0xba272c42, 0xc27578b1, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_51) {
  // -8679
  s21_decimal dec_1 = {{0x21e7, 0x0, 0x0, 0x80000000}};
  // 9047754956090475348634717549
  s21_decimal dec_2 = {{0x2bfd4d6d, 0xf9b9a84d, 0x1d3c20a2, 0x0}};
  // -9047754956090475348634726228
  s21_decimal dec_check = {{0x2bfd6f54, 0xf9b9a84d, 0x1d3c20a2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_52) {
  // 74735887368470369.55387193167
  s21_decimal dec_1 = {{0xed7b674f, 0x3cd5d354, 0x182601f9, 0xb0000}};
  // -187280602026325552.2195702332
  s21_decimal dec_2 = {{0xfd32823c, 0xca69322d, 0x60d2619, 0x800a0000}};
  // 262016489394795921.77344216487
  s21_decimal dec_check = {{0xd1747da7, 0x24f1c920, 0x54a97efb, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_53) {
  // 68921955706719880637002
  s21_decimal dec_1 = {{0x15346a4a, 0x4446cf17, 0xe98, 0x0}};
  // 84819021820675294995809
  s21_decimal dec_2 = {{0x7123a561, 0xc630b77, 0x11f6, 0x0}};
  // -15897066113955414358807
  s21_decimal dec_check = {{0x5bef3b17, 0xc81c3c60, 0x35d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_54) {
  // -41384792874272708678772
  s21_decimal dec_1 = {{0xfdf8d474, 0x795fbd1e, 0x8c3, 0x80000000}};
  // 6940187300737073493
  s21_decimal dec_2 = {{0x4f1c4155, 0x60507f94, 0x0, 0x0}};
  // -41391733061573445752265
  s21_decimal dec_check = {{0x4d1515c9, 0xd9b03cb3, 0x8c3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_55) {
  // 835597930522271273727
  s21_decimal dec_1 = {{0x5783d2ff, 0x4c40329f, 0x2d, 0x0}};
  // -5182334851665331434835793991
  s21_decimal dec_2 = {{0x1b75d847, 0x3c73fce9, 0x10beba17, 0x80000000}};
  // 5182335687263261957107067718
  s21_decimal dec_check = {{0x72f9ab46, 0x88b42f88, 0x10beba44, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_56) {
  // -50021.5
  s21_decimal dec_1 = {{0x7a1f7, 0x0, 0x0, 0x80010000}};
  // 62348246427081317667052
  s21_decimal dec_2 = {{0x6ba9d0ec, 0xe7bbee43, 0xd33, 0x0}};
  // -62348246427081317717073.5
  s21_decimal dec_check = {{0x34a9cb2f, 0xd574ea2, 0x8407, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_57) {
  // 0.5723284335165645
  s21_decimal dec_1 = {{0xf9bf00cd, 0x14554b, 0x0, 0x100000}};
  // -6910451774463374
  s21_decimal dec_2 = {{0xef411d8e, 0x188d04, 0x0, 0x80000000}};
  // 6910451774463374.5723284335166
  s21_decimal dec_check = {{0xae092a3e, 0x5d60400d, 0xdf49ead5, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_58) {
  // 696484641388097590
  s21_decimal dec_1 = {{0x5973f036, 0x9aa6917, 0x0, 0x0}};
  // 358271255480207167528218562
  s21_decimal dec_2 = {{0x7519afc2, 0xad318f99, 0x1285ae3, 0x0}};
  // -358271254783722526140120972
  s21_decimal dec_check = {{0x1ba5bf8c, 0xa3872682, 0x1285ae3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_59) {
  // -0.06998
  s21_decimal dec_1 = {{0x1b56, 0x0, 0x0, 0x80050000}};
  // 2080443807445336455648974
  s21_decimal dec_2 = {{0xe50816ce, 0x15b4afd4, 0x1b88d, 0x0}};
  // -2080443807445336455648974.0700
  s21_decimal dec_check = {{0x8bfad19c, 0xe2146c32, 0x4339071f, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_60) {
  // -958.4666984055848006955
  s21_decimal dec_1 = {{0xb76b752b, 0x95f98041, 0x207, 0x80130000}};
  // -62397761595
  s21_decimal dec_2 = {{0x8732483b, 0xe, 0x0, 0x80000000}};
  // 62397760636.533301594415199304
  s21_decimal dec_check = {{0x21b47448, 0x49b4ffd, 0xc99e37c6, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_61) {
  // -68171337851121897
  s21_decimal dec_1 = {{0x787ab0e9, 0xf23178, 0x0, 0x80000000}};
  // 149.46605
  s21_decimal dec_2 = {{0xe4112d, 0x0, 0x0, 0x50000}};
  // -68171337851122046.46605
  s21_decimal dec_check = {{0x371598cd, 0x8ebc72d6, 0x171, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_62) {
  // -68747409281470.2677
  s21_decimal dec_1 = {{0x86811855, 0x98a660b, 0x0, 0x80040000}};
  // -0.41796541
  s21_decimal dec_2 = {{0x27dc3bd, 0x0, 0x0, 0x80080000}};
  // -68747409281469.84973459
  s21_decimal dec_check = {{0x1048b493, 0xae322236, 0x174, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_63) {
  // -659493729933498
  s21_decimal dec_1 = {{0x598118ba, 0x257ce, 0x0, 0x80000000}};
  // 939928427863461777.920
  s21_decimal dec_2 = {{0x502d200, 0xf4209530, 0x32, 0x30000}};
  // -940587921593395275.920
  s21_decimal dec_check = {{0xa54b6890, 0xfd47933d, 0x32, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_64) {
  // -519385578494
  s21_decimal dec_1 = {{0xedcafbfe, 0x78, 0x0, 0x80000000}};
  // 655.3475644852315716930
  s21_decimal dec_2 = {{0xec497d42, 0x43be9130, 0x163, 0x130000}};
  // -519385579149.34756448523157169
  s21_decimal dec_check = {{0xb8e27eb1, 0x5b58bbcc, 0xa7d29172, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_65) {
  // 24913021050723275810401.819
  s21_decimal dec_1 = {{0xc059ee1b, 0x93cb263f, 0x149b89, 0x30000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 24913021050723275810407.819
  s21_decimal dec_check = {{0xc05a058b, 0x93cb263f, 0x149b89, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_66) {
  // 33.121887669
  s21_decimal dec_1 = {{0xb637e5b5, 0x7, 0x0, 0x90000}};
  // -596647947249106880591337570
  s21_decimal dec_2 = {{0xa0c9862, 0x7e42448, 0x1ed891e, 0x80000000}};
  // 596647947249106880591337603.12
  s21_decimal dec_check = {{0xeceb9338, 0x151e2c23, 0xc0c98fbb, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_67) {
  // 55.7084884070106374581705
  s21_decimal dec_1 = {{0x35efadc9, 0xa1cfe38c, 0x75f7, 0x160000}};
  // -39460197178023423272335
  s21_decimal dec_2 = {{0xcdb8658f, 0x243e4853, 0x85b, 0x80000000}};
  // 39460197178023423272390.708488
  s21_decimal dec_check = {{0xeefb4d08, 0x5b20bdca, 0x7f80b5c7, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_68) {
  // -328.782
  s21_decimal dec_1 = {{0x5044e, 0x0, 0x0, 0x80030000}};
  // 63.7788611704
  s21_decimal dec_2 = {{0x7f29e478, 0x94, 0x0, 0xa0000}};
  // -392.5608611704
  s21_decimal dec_check = {{0x81bf78, 0x392, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_69) {
  // 1747.30
  s21_decimal dec_1 = {{0x2aa8a, 0x0, 0x0, 0x20000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 1752.30
  s21_decimal dec_check = {{0x2ac7e, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_70) {
  // -436207214281421124
  s21_decimal dec_1 = {{0x77b4f144, 0x60db826, 0x0, 0x80000000}};
  // 641947762716
  s21_decimal dec_2 = {{0x7711801c, 0x95, 0x0, 0x0}};
  // -436207856229183840
  s21_decimal dec_check = {{0xeec67160, 0x60db8bb, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_71) {
  // -30.4706379
  s21_decimal dec_1 = {{0x1229734b, 0x0, 0x0, 0x80070000}};
  // -98.3416655296477863949810
  s21_decimal dec_2 = {{0x948535f2, 0x1fab3b66, 0xd03f, 0x80160000}};
  // 67.8710276296477863949810
  s21_decimal dec_check = {{0xa2ddb5f2, 0xf5328a7c, 0x8fb8, 0x160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_72) {
  // 0.581349021
  s21_decimal dec_1 = {{0x22a6ae9d, 0x0, 0x0, 0x90000}};
  // 318387555569447635683
  s21_decimal dec_2 = {{0x9dde8ae3, 0x4283d2e6, 0x11, 0x0}};
  // -318387555569447635682.41865098
  s21_decimal dec_check = {{0xeed9718a, 0x34271f71, 0x66e066bd, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_73) {
  // -4595608.4247348376400618623
  s21_decimal dec_1 = {{0x4670e47f, 0x51a9a9ad, 0x260394, 0x80130000}};
  // 830683472144470608.43467238
  s21_decimal dec_2 = {{0x6ebf91e6, 0x20301d95, 0x44b668, 0x80000}};
  // -830683472149066216.85940721764
  s21_decimal dec_check = {{0xefa9c270, 0x936ed32f, 0x1ad740ac, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_74) {
  // -489228.656209
  s21_decimal dec_1 = {{0xe84cde51, 0x71, 0x0, 0x80060000}};
  // -0.96
  s21_decimal dec_2 = {{0x60, 0x0, 0x0, 0x80020000}};
  // -489227.696209
  s21_decimal dec_check = {{0xe83e3851, 0x71, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_75) {
  // -7451858
  s21_decimal dec_1 = {{0x71b4d2, 0x0, 0x0, 0x80000000}};
  // -227769
  s21_decimal dec_2 = {{0x379b9, 0x0, 0x0, 0x80000000}};
  // -7224089
  s21_decimal dec_check = {{0x6e3b19, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_76) {
  // 0.84715
  s21_decimal dec_1 = {{0x14aeb, 0x0, 0x0, 0x50000}};
  // -374.0
  s21_decimal dec_2 = {{0xe9c, 0x0, 0x0, 0x80010000}};
  // 374.84715
  s21_decimal dec_check = {{0x23bf8ab, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_77) {
  // -2.4866862769749440663135179
  s21_decimal dec_1 = {{0x8cc023cb, 0x54f6f199, 0x1491c3, 0x80190000}};
  // 1588.6641339745583946467
  s21_decimal dec_2 = {{0x2356dae3, 0x376fff77, 0x35d, 0x130000}};
  // -1591.1508202515333387130135179
  s21_decimal dec_check = {{0x9a32628b, 0x8ce9895, 0x3369b0ec, 0x80190000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_78) {
  // -969306691
  s21_decimal dec_1 = {{0x39c67243, 0x0, 0x0, 0x80000000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // -969306693
  s21_decimal dec_check = {{0x39c67245, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_79) {
  // 591139170326
  s21_decimal dec_1 = {{0xa2a3e816, 0x89, 0x0, 0x0}};
  // 3040540437
  s21_decimal dec_2 = {{0xb53af715, 0x0, 0x0, 0x0}};
  // 588098629889
  s21_decimal dec_check = {{0xed68f101, 0x88, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_80) {
  // -82309291
  s21_decimal dec_1 = {{0x4e7f0ab, 0x0, 0x0, 0x80000000}};
  // -535640504458709400950733
  s21_decimal dec_2 = {{0xbc1217cd, 0x21431c2c, 0x716d, 0x80000000}};
  // 535640504458709318641442
  s21_decimal dec_check = {{0xb72a2722, 0x21431c2c, 0x716d, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_81) {
  // -53856709705
  s21_decimal dec_1 = {{0x8a1c2c49, 0xc, 0x0, 0x80000000}};
  // 0.688806
  s21_decimal dec_2 = {{0xa82a6, 0x0, 0x0, 0x60000}};
  // -53856709705.688806
  s21_decimal dec_check = {{0x62c766e6, 0xbf5664, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_82) {
  // -74127.16
  s21_decimal dec_1 = {{0x711bec, 0x0, 0x0, 0x80020000}};
  // -80345160050.48
  s21_decimal dec_2 = {{0xae78f0b8, 0x74e, 0x0, 0x80020000}};
  // 80345085923.32
  s21_decimal dec_check = {{0xae07d4cc, 0x74e, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_83) {
  // 6904512
  s21_decimal dec_1 = {{0x695ac0, 0x0, 0x0, 0x0}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // 6904505
  s21_decimal dec_check = {{0x695ab9, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_84) {
  // -166
  s21_decimal dec_1 = {{0xa6, 0x0, 0x0, 0x80000000}};
  // 3163303837688426664208679
  s21_decimal dec_2 = {{0x5202a927, 0xb6e5b98, 0x29ddb, 0x0}};
  // -3163303837688426664208845
  s21_decimal dec_check = {{0x5202a9cd, 0xb6e5b98, 0x29ddb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_85) {
  // 98314.194
  s21_decimal dec_1 = {{0x5dc27d2, 0x0, 0x0, 0x30000}};
  // -7690149536.606519561099
  s21_decimal dec_2 = {{0x9a6c0b8b, 0xe2437362, 0x1a0, 0x800c0000}};
  // 7690247850.800519561099
  s21_decimal dec_check = {{0xac2bbf8b, 0xe3a0bb9f, 0x1a0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_86) {
  // -32966
  s21_decimal dec_1 = {{0x80c6, 0x0, 0x0, 0x80000000}};
  // 0.291921357116
  s21_decimal dec_2 = {{0xf7de693c, 0x43, 0x0, 0xc0000}};
  // -32966.291921357116
  s21_decimal dec_check = {{0xf788c93c, 0x751eaa, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_87) {
  // -636931960050397.17887443214933
  s21_decimal dec_1 = {{0xf0bc2255, 0xf7a0677, 0xcdcdc6e2, 0x800e0000}};
  // 3.00
  s21_decimal dec_2 = {{0x12c, 0x0, 0x0, 0x20000}};
  // -636931960050400.17887443214933
  s21_decimal dec_check = {{0x222ae255, 0xf7b1751, 0xcdcdc6e2, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_88) {
  // 3907742233809352073500423
  s21_decimal dec_1 = {{0xbf395707, 0x218747e9, 0x33b7f, 0x0}};
  // -7474289347788625380193422035
  s21_decimal dec_2 = {{0x88754ad3, 0x6ed18625, 0x18269655, 0x80000000}};
  // 7478197090022434732266922458
  s21_decimal dec_check = {{0x47aea1da, 0x9058ce0f, 0x1829d1d4, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_89) {
  // -48516712258803783
  s21_decimal dec_1 = {{0x57db1847, 0xac5db1, 0x0, 0x80000000}};
  // 49713883962707441676927908294
  s21_decimal dec_2 = {{0xb54039c6, 0xc0c3948c, 0xa0a25c69, 0x0}};
  // -49713883962755958389186712077
  s21_decimal dec_check = {{0xd1b520d, 0xc16ff23e, 0xa0a25c69, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_90) {
  // 929994580429726523552
  s21_decimal dec_1 = {{0x104ba0a0, 0x6a447794, 0x32, 0x0}};
  // 462194707905534647995135104
  s21_decimal dec_2 = {{0x7dfaf480, 0x523531e9, 0x17e5189, 0x0}};
  // -462193777910954218268611552
  s21_decimal dec_check = {{0x6daf53e0, 0xe7f0ba55, 0x17e5156, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_91) {
  // 0.4355186689972472242910722548
  s21_decimal dec_1 = {{0x6802f9f4, 0x8adb141d, 0xe1286a7, 0x1c0000}};
  // 2659309052.369171844491
  s21_decimal dec_2 = {{0xad270d8b, 0x2953a581, 0x90, 0xc0000}};
  // -2659309051.9336531754937527757
  s21_decimal dec_check = {{0x3dacadcd, 0xb55ad043, 0x55ed49f5, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_92) {
  // 3287942590347837
  s21_decimal dec_1 = {{0xca23ba3d, 0xbae5d, 0x0, 0x0}};
  // 677882508722465132
  s21_decimal dec_2 = {{0xd3da696c, 0x968528c, 0x0, 0x0}};
  // -674594566132117295
  s21_decimal dec_check = {{0x9b6af2f, 0x95ca42f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_93) {
  // 14959
  s21_decimal dec_1 = {{0x3a6f, 0x0, 0x0, 0x0}};
  // 425764671906132732890
  s21_decimal dec_2 = {{0xfbc72bda, 0x14abf94c, 0x17, 0x0}};
  // -425764671906132717931
  s21_decimal dec_check = {{0xfbc6f16b, 0x14abf94c, 0x17, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_94) {
  // 46062134439404
  s21_decimal dec_1 = {{0xad292dec, 0x29e4, 0x0, 0x0}};
  // 3938048794957544
  s21_decimal dec_2 = {{0x6f8816e8, 0xdfda2, 0x0, 0x0}};
  // -3891986660518140
  s21_decimal dec_check = {{0xc25ee8fc, 0xdd3bd, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_95) {
  // 677672367343548455674825300
  s21_decimal dec_1 = {{0x30fdca54, 0xa5368ae0, 0x2308eb4, 0x0}};
  // 1042237040576788651081
  s21_decimal dec_2 = {{0x65df5c49, 0x7ff1ca65, 0x38, 0x0}};
  // 677671325106507878886174219
  s21_decimal dec_check = {{0xcb1e6e0b, 0x2544c07a, 0x2308e7c, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_96) {
  // -14134.75
  s21_decimal dec_1 = {{0x159163, 0x0, 0x0, 0x80020000}};
  // 810919354582849058407015
  s21_decimal dec_2 = {{0x47ce8267, 0x6bb6e39, 0xabb8, 0x0}};
  // -810919354582849058421149.75
  s21_decimal dec_check = {{0xcc0819f, 0xa1370e60, 0x4313e2, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_97) {
  // 880.767
  s21_decimal dec_1 = {{0xd707f, 0x0, 0x0, 0x30000}};
  // -45669188507715082
  s21_decimal dec_2 = {{0x8e2ec60a, 0xa23fe2, 0x0, 0x80000000}};
  // 45669188507715962.767
  s21_decimal dec_check = {{0x66c3078f, 0x79c98cfb, 0x2, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_98) {
  // -27.212842
  s21_decimal dec_1 = {{0x19f3c2a, 0x0, 0x0, 0x80060000}};
  // -27300059005296858769199
  s21_decimal dec_2 = {{0xe332272f, 0xf06d0f67, 0x5c7, 0x80000000}};
  // 27300059005296858769171.787158
  s21_decimal dec_check = {{0x4c5ad96, 0x2052f27c, 0x5836145c, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_99) {
  // -70
  s21_decimal dec_1 = {{0x46, 0x0, 0x0, 0x80000000}};
  // 8858921095449950877340
  s21_decimal dec_2 = {{0x74b4f69c, 0x3e3a27bc, 0x1e0, 0x0}};
  // -8858921095449950877410
  s21_decimal dec_check = {{0x74b4f6e2, 0x3e3a27bc, 0x1e0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_100) {
  // -181325299739509009223
  s21_decimal dec_1 = {{0x14aa2b47, 0xd464df69, 0x9, 0x80000000}};
  // -41074637927874
  s21_decimal dec_2 = {{0x6f33f5c2, 0x255b, 0x0, 0x80000000}};
  // -181325258664871081349
  s21_decimal dec_check = {{0xa5763585, 0xd464ba0d, 0x9, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_101) {
  // 6109503981637589690297.43862
  s21_decimal dec_1 = {{0x2f0554f6, 0x72d0ffba, 0x1f95dc7, 0x50000}};
  // -8038563497.5
  s21_decimal dec_2 = {{0xb75b729f, 0x12, 0x0, 0x80010000}};
  // 6109503981645628253794.93862
  s21_decimal dec_check = {{0x9332b7e6, 0x72d3dad4, 0x1f95dc7, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_102) {
  // 2839363504471835056229571188
  s21_decimal dec_1 = {{0x87e3da74, 0x500404, 0x92caa9c, 0x0}};
  // -4231.5844
  s21_decimal dec_2 = {{0x285b044, 0x0, 0x0, 0x80040000}};
  // 2839363504471835056229575419.6
  s21_decimal dec_check = {{0x4ee72dd4, 0x320282d, 0x5bbeaa18, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_103) {
  // 616665161729356.02778678
  s21_decimal dec_1 = {{0x5b8e3236, 0xf2d38814, 0xd0e, 0x80000}};
  // 323804425798.60
  s21_decimal dec_2 = {{0x28c71394, 0x1d73, 0x0, 0x20000}};
  // 616341357303557.42778678
  s21_decimal dec_check = {{0xb1112536, 0x3175171c, 0xd0d, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_104) {
  // 0.0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x10000}};
  // -6340717
  s21_decimal dec_2 = {{0x60c06d, 0x0, 0x0, 0x80000000}};
  // 6340717.0
  s21_decimal dec_check = {{0x3c78442, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_105) {
  // 47610
  s21_decimal dec_1 = {{0xb9fa, 0x0, 0x0, 0x0}};
  // -27910
  s21_decimal dec_2 = {{0x6d06, 0x0, 0x0, 0x80000000}};
  // 75520
  s21_decimal dec_check = {{0x12700, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_106) {
  // 6541666018
  s21_decimal dec_1 = {{0x85e9e6e2, 0x1, 0x0, 0x0}};
  // -7943165753
  s21_decimal dec_2 = {{0xd9731739, 0x1, 0x0, 0x80000000}};
  // 14484831771
  s21_decimal dec_check = {{0x5f5cfe1b, 0x3, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_107) {
  // 3433154008256687636861
  s21_decimal dec_1 = {{0x445c017d, 0x1c9534e1, 0xba, 0x0}};
  // -493026718402592331.1
  s21_decimal dec_2 = {{0xd7a16eef, 0x446bd3e1, 0x0, 0x80010000}};
  // 3433647034975090229192.1
  s21_decimal dec_check = {{0x83397dd1, 0x623fe4ae, 0x745, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_108) {
  // -3568218227242669453.1
  s21_decimal dec_1 = {{0x76bbd783, 0xef3093b9, 0x1, 0x80010000}};
  // 527664834321469380823.012
  s21_decimal dec_2 = {{0x31ad07e4, 0xc49ab744, 0x6fbc, 0x30000}};
  // -531233052548712050276.112
  s21_decimal dec_check = {{0x930d3710, 0x33946bb6, 0x707e, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_109) {
  // 4320728
  s21_decimal dec_1 = {{0x41edd8, 0x0, 0x0, 0x0}};
  // -26510716840.32
  s21_decimal dec_2 = {{0x402f9dc0, 0x269, 0x0, 0x80020000}};
  // 26515037568.32
  s21_decimal dec_check = {{0x59f08620, 0x269, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_110) {
  // -514203027584873
  s21_decimal dec_1 = {{0x38cd3769, 0x1d3aa, 0x0, 0x80000000}};
  // 8221870775284925719.233924
  s21_decimal dec_2 = {{0x5b2dc584, 0x8200af51, 0x6cd0c, 0x60000}};
  // -8222384978312510592.233924
  s21_decimal dec_check = {{0xb5ebb1c4, 0x6200d08a, 0x6cd28, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_111) {
  // -94477481443
  s21_decimal dec_1 = {{0xff4bf5e3, 0x15, 0x0, 0x80000000}};
  // 79212238814484141162288
  s21_decimal dec_2 = {{0x60a3bf30, 0x1aa45d58, 0x10c6, 0x0}};
  // -79212238814578618643731
  s21_decimal dec_check = {{0x5fefb513, 0x1aa45d6e, 0x10c6, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_112) {
  // 8504166794.2741162102619
  s21_decimal dec_1 = {{0x13688f5b, 0x1e38f7db, 0x1202, 0xd0000}};
  // -0.02
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80020000}};
  // 8504166794.2941162102619
  s21_decimal dec_check = {{0xa4565f5b, 0x1e38f809, 0x1202, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_113) {
  // 2735.01510439497510
  s21_decimal dec_1 = {{0xb7476f26, 0x3cbac2c, 0x0, 0xe0000}};
  // -0.40
  s21_decimal dec_2 = {{0x28, 0x0, 0x0, 0x80020000}};
  // 2735.41510439497510
  s21_decimal dec_check = {{0xf111ef26, 0x3cbd08d, 0x0, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_114) {
  // -30346181659266
  s21_decimal dec_1 = {{0x8560ca82, 0x1b99, 0x0, 0x80000000}};
  // -2427272541863568
  s21_decimal dec_2 = {{0x6da17e90, 0x89f97, 0x0, 0x80000000}};
  // 2396926360204302
  s21_decimal dec_check = {{0xe840b40e, 0x883fd, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_115) {
  // -89621446888
  s21_decimal dec_1 = {{0xdddac0e8, 0x14, 0x0, 0x80000000}};
  // -4484066915937.4729564047002403
  s21_decimal dec_2 = {{0x7f17cb23, 0xea365c69, 0x90e35509, 0x80100000}};
  // 4394445469049.4729564047002403
  s21_decimal dec_check = {{0x782fcb23, 0x34cd7589, 0x8dfe003e, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_116) {
  // -7738722
  s21_decimal dec_1 = {{0x761562, 0x0, 0x0, 0x80000000}};
  // 386.441830867524130879
  s21_decimal dec_2 = {{0xaa5c183f, 0xf2f52db7, 0x14, 0x120000}};
  // -7739108.441830867524130879
  s21_decimal dec_check = {{0xf2a4183f, 0xe8c70350, 0x666d1, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_117) {
  // -463797772.0356894578
  s21_decimal dec_1 = {{0xe20c7772, 0x405d6829, 0x0, 0x800a0000}};
  // -23138.9
  s21_decimal dec_2 = {{0x387dd, 0x0, 0x0, 0x80010000}};
  // -463774633.1356894578
  s21_decimal dec_check = {{0x6ee61572, 0x405c95b7, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_118) {
  // 333604204724187
  s21_decimal dec_1 = {{0x481e3fdb, 0x12f69, 0x0, 0x0}};
  // 252220.12874112
  s21_decimal dec_2 = {{0x751e2d80, 0x16f0, 0x0, 0x80000}};
  // 333604204471966.87125888
  s21_decimal dec_check = {{0x84984d80, 0x78d60da4, 0x710, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_119) {
  // -35710399454768041467611650061
  s21_decimal dec_1 = {{0x567b180d, 0x75905f06, 0x7362f339, 0x80000000}};
  // 956281618052060195.87
  s21_decimal dec_2 = {{0x8ae1de03, 0x2f1b7a80, 0x5, 0x20000}};
  // -35710399455724323085663710257
  s21_decimal dec_check = {{0xfbb5ac31, 0x82d5c416, 0x7362f339, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_120) {
  // -38
  s21_decimal dec_1 = {{0x26, 0x0, 0x0, 0x80000000}};
  // 650786204066281
  s21_decimal dec_2 = {{0xf884a1e9, 0x24fe2, 0x0, 0x0}};
  // -650786204066319
  s21_decimal dec_check = {{0xf884a20f, 0x24fe2, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_121) {
  // -0.86959
  s21_decimal dec_1 = {{0x153af, 0x0, 0x0, 0x80050000}};
  // 1290580
  s21_decimal dec_2 = {{0x13b154, 0x0, 0x0, 0x0}};
  // -1290580.86959
  s21_decimal dec_check = {{0xc76202f, 0x1e, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_122) {
  // 5713417003157
  s21_decimal dec_1 = {{0x4230e095, 0x532, 0x0, 0x0}};
  // 781942931502163688206112568
  s21_decimal dec_2 = {{0xdd0c1738, 0x4135199d, 0x286cedb, 0x0}};
  // -781942931502157974789109411
  s21_decimal dec_check = {{0x9adb36a3, 0x4135146b, 0x286cedb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_123) {
  // 938602684290371887789739177
  s21_decimal dec_1 = {{0x35e78ca9, 0x786d45b2, 0x30864d9, 0x0}};
  // 73748651960
  s21_decimal dec_2 = {{0x2bc31fb8, 0x11, 0x0, 0x0}};
  // 938602684290371814041087217
  s21_decimal dec_check = {{0xa246cf1, 0x786d45a1, 0x30864d9, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_124) {
  // 175530659944609653631128705
  s21_decimal dec_1 = {{0x84c29481, 0x247a1809, 0x913210, 0x0}};
  // -655.78964505365228319245
  s21_decimal dec_2 = {{0x74cc720d, 0xaf43d62, 0xde3, 0x80140000}};
  // 175530659944609653631129360.79
  s21_decimal dec_check = {{0xdc03028f, 0x3fb163b7, 0x38b78e4e, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_125) {
  // -3942762683597
  s21_decimal dec_1 = {{0xfef81ccd, 0x395, 0x0, 0x80000000}};
  // -68687828057
  s21_decimal dec_2 = {{0xfe1d1459, 0xf, 0x0, 0x80000000}};
  // -3874074855540
  s21_decimal dec_check = {{0xdb0874, 0x386, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_126) {
  // 3.8446920989217889117366777989
  s21_decimal dec_1 = {{0x1b65f885, 0x182c7b2e, 0x7c3a8c33, 0x1c0000}};
  // 17477643271623805
  s21_decimal dec_2 = {{0xeeb7547d, 0x3e17d2, 0x0, 0x0}};
  // -17477643271623801.155307901078
  s21_decimal dec_check = {{0x44571096, 0x40456ad5, 0x38792aec, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_127) {
  // -9031233549984709477491.0
  s21_decimal dec_1 = {{0x9e682c7e, 0xd76db1d9, 0x131f, 0x80010000}};
  // -3.1557186717
  s21_decimal dec_2 = {{0x58f4749d, 0x7, 0x0, 0x800a0000}};
  // -9031233549984709477487.8442813
  s21_decimal dec_check = {{0xb4b39bb9, 0xc180af55, 0x1d2e7617, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_128) {
  // 17814
  s21_decimal dec_1 = {{0x4596, 0x0, 0x0, 0x0}};
  // -1028052921699
  s21_decimal dec_2 = {{0x5cbaad63, 0xef, 0x0, 0x80000000}};
  // 1028052939513
  s21_decimal dec_check = {{0x5cbaf2f9, 0xef, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_129) {
  // 367399548468158739922426788.5
  s21_decimal dec_1 = {{0x9815146d, 0x4f478d44, 0xbdf0ece, 0x10000}};
  // 978819742500023296649408
  s21_decimal dec_2 = {{0x5a7ce8c0, 0xecb04283, 0xcf45, 0x0}};
  // 366420728725658716625777380.5
  s21_decimal dec_check = {{0xf33fced, 0x1064f423, 0xbd6f613, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_130) {
  // 22823749.50040
  s21_decimal dec_1 = {{0x6825ec98, 0x213, 0x0, 0x50000}};
  // -26071020
  s21_decimal dec_2 = {{0x18dcfec, 0x0, 0x0, 0x80000000}};
  // 48894769.50040
  s21_decimal dec_check = {{0x6b896818, 0x472, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_131) {
  // -81816067740.048472684242
  s21_decimal dec_1 = {{0x15a836d2, 0x42070178, 0x1153, 0x800c0000}};
  // -764498835112.66
  s21_decimal dec_2 = {{0xe02659e2, 0x4587, 0x0, 0x80020000}};
  // 682682767372.611527315758
  s21_decimal dec_check = {{0x171b112e, 0x4e95ed12, 0x9090, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_132) {
  // -2293547789885606165681796
  s21_decimal dec_1 = {{0xd27f1684, 0x798e1bf7, 0x1e5ad, 0x80000000}};
  // -491862674.198041436342382
  s21_decimal dec_2 = {{0x8fabc86e, 0xedd2b6fb, 0x6827, 0x800f0000}};
  // -2293547789885605673819121.8020
  s21_decimal dec_check = {{0x4f5f9564, 0x3f247c15, 0x4a1bc85c, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_133) {
  // -8478.642649
  s21_decimal dec_1 = {{0xf95dd1d9, 0x1, 0x0, 0x80060000}};
  // -5699579814412232141287595.3848
  s21_decimal dec_2 = {{0xece526b8, 0x85279372, 0xb829d1b8, 0x80040000}};
  // 5699579814412232141279116.7422
  s21_decimal dec_check = {{0xe7d769be, 0x85279372, 0xb829d1b8, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_134) {
  // -33486729371369307989288
  s21_decimal dec_1 = {{0xdb696528, 0x51b97ef6, 0x717, 0x80000000}};
  // 0.62315687413305043656230343
  s21_decimal dec_2 = {{0x793dc5c7, 0x2f051ae3, 0x338bdc, 0x1a0000}};
  // -33486729371369307989288.623157
  s21_decimal dec_check = {{0xf3cf1c35, 0xb1923d74, 0x6c3392c4, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_135) {
  // -44768085.36231
  s21_decimal dec_1 = {{0x569520a7, 0x412, 0x0, 0x80050000}};
  // 576043054955173924690.401
  s21_decimal dec_2 = {{0x8a25d9e1, 0x5b48ead2, 0x79fb, 0x30000}};
  // -576043054955218692775.76331
  s21_decimal dec_check = {{0x4d5e3c8b, 0xa87bbe50, 0x2fa62f, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_136) {
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 9846
  s21_decimal dec_2 = {{0x2676, 0x0, 0x0, 0x0}};
  // -9852
  s21_decimal dec_check = {{0x267c, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_137) {
  // 67906643.21826668899517675274
  s21_decimal dec_1 = {{0x9001370a, 0x84682236, 0x15f11b1a, 0x140000}};
  // 6587131321986933599168
  s21_decimal dec_2 = {{0xc86c2bc0, 0x16cf8d3a, 0x165, 0x0}};
  // -6587131321986865692524.7817333
  s21_decimal dec_check = {{0x18404675, 0xdf6ba572, 0xd4d77924, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_138) {
  // -916111061342785
  s21_decimal dec_1 = {{0xba62da41, 0x34132, 0x0, 0x80000000}};
  // -51772625093989741629.60636643
  s21_decimal dec_2 = {{0xac67dae3, 0x2cabe15, 0x10ba87fb, 0x80080000}};
  // 51771708982928398844.60636643
  s21_decimal dec_check = {{0xa55fb9e3, 0xc34cd966, 0x10ba7494, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_139) {
  // 397
  s21_decimal dec_1 = {{0x18d, 0x0, 0x0, 0x0}};
  // -3317
  s21_decimal dec_2 = {{0xcf5, 0x0, 0x0, 0x80000000}};
  // 3714
  s21_decimal dec_check = {{0xe82, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_140) {
  // -5861558412016177946809582477
  s21_decimal dec_1 = {{0x6f77c38d, 0x39120495, 0x12f09146, 0x80000000}};
  // -25376341853.745253746790015736
  s21_decimal dec_2 = {{0xf846a2f8, 0x60d66c7a, 0x51fed168, 0x80120000}};
  // -5861558412016177921433240623.3
  s21_decimal dec_check = {{0x453329d9, 0x3ab42d9b, 0xbd65acbe, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_141) {
  // 319066352416870112538228456
  s21_decimal dec_1 = {{0xcd1176e8, 0x9f74654d, 0x107eced, 0x0}};
  // 664543602021184149946297
  s21_decimal dec_2 = {{0x48a07fb9, 0xfb190f5d, 0x8cb8, 0x0}};
  // 318401808814848928388282159
  s21_decimal dec_check = {{0x8470f72f, 0xa45b55f0, 0x1076034, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_142) {
  // -99382657371930208795016
  s21_decimal dec_1 = {{0x80807988, 0x8b6e47e2, 0x150b, 0x80000000}};
  // 7247985704324006462934
  s21_decimal dec_2 = {{0xcdd4c5d6, 0xea01f49b, 0x188, 0x0}};
  // -106630643076254215257950
  s21_decimal dec_check = {{0x4e553f5e, 0x75703c7e, 0x1694, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_143) {
  // -7987033635888354799
  s21_decimal dec_1 = {{0x5438d5ef, 0x6ed7a4c6, 0x0, 0x80000000}};
  // -3239260607
  s21_decimal dec_2 = {{0xc11331bf, 0x0, 0x0, 0x80000000}};
  // -7987033632649094192
  s21_decimal dec_check = {{0x9325a430, 0x6ed7a4c5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_144) {
  // 5.57
  s21_decimal dec_1 = {{0x22d, 0x0, 0x0, 0x20000}};
  // -1.941094
  s21_decimal dec_2 = {{0x1d9e66, 0x0, 0x0, 0x80060000}};
  // 7.511094
  s21_decimal dec_check = {{0x729c36, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_145) {
  // -5654219.4118197454991186257
  s21_decimal dec_1 = {{0xeea2d951, 0x7c291d02, 0x2ec546, 0x80130000}};
  // 757111259
  s21_decimal dec_2 = {{0x2d2099db, 0x0, 0x0, 0x0}};
  // -762765478.4118197454991186257
  s21_decimal dec_check = {{0x901ad951, 0x6540cd50, 0x18a572ba, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_146) {
  // -18581457898.1047415
  s21_decimal dec_1 = {{0x6410c77, 0x2942560, 0x0, 0x80070000}};
  // -0.3487737562321219033
  s21_decimal dec_2 = {{0x87f16dd9, 0x3066eed5, 0x0, 0x80130000}};
  // -18581457897.755967743767878097
  s21_decimal dec_check = {{0x2f419d1, 0x8e539f7, 0x3c0a38c3, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_147) {
  // -49241697806810600458.1557094
  s21_decimal dec_1 = {{0x8e2fa366, 0xde982a9d, 0x1975159, 0x80070000}};
  // 8629171003366884807892378495
  s21_decimal dec_2 = {{0x77f5a37f, 0x6e122cd4, 0x1be1e209, 0x0}};
  // -8629171052608582614702978953.2
  s21_decimal dec_check = {{0x70097789, 0x196fd417, 0x1be1e20c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_148) {
  // 619503510962320590.6
  s21_decimal dec_1 = {{0x82a1012, 0x55f92f9c, 0x0, 0x10000}};
  // 4062793754275.014
  s21_decimal dec_2 = {{0xe284ecc6, 0xe6f16, 0x0, 0x30000}};
  // 619499448168566315.586
  s21_decimal dec_check = {{0x4de95a42, 0x954829dc, 0x21, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_149) {
  // -81910608917.2
  s21_decimal dec_1 = {{0xb68708d4, 0xbe, 0x0, 0x80010000}};
  // -26676600.430975024462
  s21_decimal dec_2 = {{0xd74c7d4e, 0x723652c0, 0x1, 0x800c0000}};
  // -81883932316.769024975538
  s21_decimal dec_check = {{0x3a6ba2b2, 0xefd66a6f, 0x1156, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_150) {
  // -4478743538001671969712888
  s21_decimal dec_1 = {{0x984e2af8, 0x2c774c42, 0x3b469, 0x80000000}};
  // -11981100
  s21_decimal dec_2 = {{0xb6d12c, 0x0, 0x0, 0x80000000}};
  // -4478743538001671957731788
  s21_decimal dec_check = {{0x979759cc, 0x2c774c42, 0x3b469, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_151) {
  // 777470368204
  s21_decimal dec_1 = {{0x4d859cc, 0xb5, 0x0, 0x0}};
  // 822037302328.16698
  s21_decimal dec_2 = {{0x6bbd343a, 0x1240bdb, 0x0, 0x50000}};
  // -44566934124.16698
  s21_decimal dec_check = {{0xcbb84cba, 0xfd556, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_152) {
  // -3370552774.7120402
  s21_decimal dec_1 = {{0xb8558d12, 0x77beff, 0x0, 0x80070000}};
  // -13605622183.7
  s21_decimal dec_2 = {{0xad95308d, 0x1f, 0x0, 0x80010000}};
  // 10235069408.9879598
  s21_decimal dec_check = {{0xfbbdf02e, 0x16b9f69, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_153) {
  // -824012618520844
  s21_decimal dec_1 = {{0x636ad90c, 0x2ed6f, 0x0, 0x80000000}};
  // 418608879612572789376
  s21_decimal dec_2 = {{0x6ba8ea80, 0xb15d7e1f, 0x16, 0x0}};
  // -418609703625191310220
  s21_decimal dec_check = {{0xcf13c38c, 0xb1606b8e, 0x16, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_154) {
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 13359711968425.29044623592
  s21_decimal dec_2 = {{0x9910f0e8, 0x24c98184, 0x11ae7, 0xb0000}};
  // -13359711968431.29044623592
  s21_decimal dec_check = {{0x4bda60e8, 0x24c98210, 0x11ae7, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_155) {
  // -63443676.0452676919480688
  s21_decimal dec_1 = {{0xaad7d170, 0xe2bd31b0, 0x8658, 0x80100000}};
  // 814874698257893390733
  s21_decimal dec_2 = {{0xa35b798d, 0x2ca87cac, 0x2c, 0x0}};
  // -814874698257956834409.04526769
  s21_decimal dec_check = {{0xc46aa2c5, 0x13cebd5d, 0x1a547c4b, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_156) {
  // 2550549
  s21_decimal dec_1 = {{0x26eb15, 0x0, 0x0, 0x0}};
  // -91244608
  s21_decimal dec_2 = {{0x5704840, 0x0, 0x0, 0x80000000}};
  // 93795157
  s21_decimal dec_check = {{0x5973355, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_157) {
  // -721216819849178272
  s21_decimal dec_1 = {{0x6125aca0, 0xa0246e0, 0x0, 0x80000000}};
  // 7607232041342251.884615999
  s21_decimal dec_2 = {{0x14cc193f, 0xe0131609, 0x64ae4, 0x90000}};
  // -728824051890520523.884615999
  s21_decimal dec_check = {{0x8742593f, 0x55e4223, 0x25ade7f, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_158) {
  // 70317808.445816557238049783
  s21_decimal dec_1 = {{0xfee95bf7, 0x8b8b9d2, 0x3a2a60, 0x120000}};
  // 2921.67501229766
  s21_decimal dec_2 = {{0x8c202ec6, 0x109b9, 0x0, 0xb0000}};
  // 70314886.770804259578049783
  s21_decimal dec_check = {{0x4dd9f4f7, 0xa655f1d6, 0x3a29c1, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_159) {
  // -6241916181939939.2330
  s21_decimal dec_1 = {{0xbeed0c4a, 0x623d68f6, 0x3, 0x80040000}};
  // 519032.828660550354897282763
  s21_decimal dec_2 = {{0xee5926cb, 0x570da9a, 0x1ad557a, 0x150000}};
  // -6241916182458972.0616605503549
  s21_decimal dec_check = {{0x3cfed03d, 0xbf49ef29, 0xc9afeba6, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_160) {
  // -860
  s21_decimal dec_1 = {{0x35c, 0x0, 0x0, 0x80000000}};
  // -572038625121853.9455627
  s21_decimal dec_2 = {{0xf57b248b, 0x1a4e7b93, 0x136, 0x80070000}};
  // 572038625120993.9455627
  s21_decimal dec_check = {{0xf4e18e8b, 0x1a4e7b91, 0x136, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_161) {
  // -7264937
  s21_decimal dec_1 = {{0x6edaa9, 0x0, 0x0, 0x80000000}};
  // -924377630924556587944003.693
  s21_decimal dec_2 = {{0x5cde486d, 0xc842df85, 0x2fca093, 0x80030000}};
  // 924377630924556580679066.693
  s21_decimal dec_check = {{0xabd82445, 0xc842df83, 0x2fca093, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_162) {
  // -5505
  s21_decimal dec_1 = {{0x1581, 0x0, 0x0, 0x80000000}};
  // 7458016382847466011
  s21_decimal dec_2 = {{0xccaaba1b, 0x67803262, 0x0, 0x0}};
  // -7458016382847471516
  s21_decimal dec_check = {{0xccaacf9c, 0x67803262, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_163) {
  // 0.2767
  s21_decimal dec_1 = {{0xacf, 0x0, 0x0, 0x40000}};
  // -6847.1
  s21_decimal dec_2 = {{0x10b77, 0x0, 0x0, 0x80010000}};
  // 6847.3767
  s21_decimal dec_check = {{0x414d3a7, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_164) {
  // 6712
  s21_decimal dec_1 = {{0x1a38, 0x0, 0x0, 0x0}};
  // 585363.50810
  s21_decimal dec_2 = {{0xa109d45a, 0xd, 0x0, 0x50000}};
  // -578651.50810
  s21_decimal dec_check = {{0x7908215a, 0xd, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_165) {
  // -481.023
  s21_decimal dec_1 = {{0x756ff, 0x0, 0x0, 0x80030000}};
  // -0.9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80010000}};
  // -480.123
  s21_decimal dec_check = {{0x7537b, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_166) {
  // -3436512254542908903562713706
  s21_decimal dec_1 = {{0xb7789a6a, 0x9b80242f, 0xb1a9dc6, 0x80000000}};
  // 31817653778.7234993273
  s21_decimal dec_2 = {{0x8fcb4479, 0x3f962358, 0x11, 0xa0000}};
  // -3436512254542908935380367484.7
  s21_decimal dec_check = {{0x3f82b4df, 0x13016a27, 0x6f0a29c2, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_167) {
  // 97.77202220146705
  s21_decimal dec_1 = {{0x493aa011, 0x22bc50, 0x0, 0xe0000}};
  // 1694040525652116321.935
  s21_decimal dec_2 = {{0x5267368f, 0xd588f2ab, 0x5b, 0x30000}};
  // -1694040525652116224.1629777985
  s21_decimal dec_check = {{0x6dd07041, 0x1862a456, 0x36bcc659, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_168) {
  // 677843
  s21_decimal dec_1 = {{0xa57d3, 0x0, 0x0, 0x0}};
  // -255043582000
  s21_decimal dec_2 = {{0x61c83830, 0x3b, 0x0, 0x80000000}};
  // 255044259843
  s21_decimal dec_check = {{0x61d29003, 0x3b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_169) {
  // 940827499.9339861
  s21_decimal dec_1 = {{0xb948eb55, 0x216cc6, 0x0, 0x70000}};
  // 11707139163
  s21_decimal dec_2 = {{0xb9ccc45b, 0x2, 0x0, 0x0}};
  // -10766311663.0660139
  s21_decimal dec_check = {{0xbe2e942b, 0x17e7f08, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_170) {
  // -476988481011042569152037487
  s21_decimal dec_1 = {{0x8c1b026f, 0x5e3e3434, 0x18a8e3d, 0x80000000}};
  // -30399465.80730069
  s21_decimal dec_2 = {{0xb814a0d5, 0xaccd0, 0x0, 0x80080000}};
  // -476988481011042569121638021.19
  s21_decimal dec_check = {{0x55b0c07, 0xd04c6486, 0x9a1f8ff8, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_171) {
  // -454557056789300
  s21_decimal dec_1 = {{0xcfe66b34, 0x19d6a, 0x0, 0x80000000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -454557056789300
  s21_decimal dec_check = {{0xcfe66b34, 0x19d6a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_172) {
  // -223913164682649753741172
  s21_decimal dec_1 = {{0x4041e774, 0x5b630814, 0x2f6a, 0x80000000}};
  // -6.395696025
  s21_decimal dec_2 = {{0x7d369399, 0x1, 0x0, 0x80090000}};
  // -223913164682649753741165.60430
  s21_decimal dec_check = {{0x8fc19e2e, 0xfc33e68c, 0x4859a9b1, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_173) {
  // -63.9697458
  s21_decimal dec_1 = {{0x26210232, 0x0, 0x0, 0x80070000}};
  // 5966.51943750
  s21_decimal dec_2 = {{0xeb3a2746, 0x8a, 0x0, 0x80000}};
  // -6030.48918330
  s21_decimal dec_check = {{0x68843d3a, 0x8c, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_174) {
  // 4114393.36621
  s21_decimal dec_1 = {{0xcbb20cad, 0x5f, 0x0, 0x50000}};
  // 7225358308991
  s21_decimal dec_2 = {{0x48ea567f, 0x692, 0x0, 0x0}};
  // -7225354194597.63379
  s21_decimal dec_check = {{0xc6897cb3, 0xa06f622, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_175) {
  // -6750358
  s21_decimal dec_1 = {{0x670096, 0x0, 0x0, 0x80000000}};
  // -6758785
  s21_decimal dec_2 = {{0x672181, 0x0, 0x0, 0x80000000}};
  // 8427
  s21_decimal dec_check = {{0x20eb, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_176) {
  // 7769328.715698207889997559
  s21_decimal dec_1 = {{0x56abef7, 0x27535bca, 0x66d38, 0x120000}};
  // -251.153444
  s21_decimal dec_2 = {{0xef84c24, 0x0, 0x0, 0x80060000}};
  // 7769579.869142207889997559
  s21_decimal dec_check = {{0x6d60fef7, 0xc4c7a270, 0x66d45, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_177) {
  // -94925498575109049614965201
  s21_decimal dec_1 = {{0x581199d1, 0x96c6bf54, 0x4e8541, 0x80000000}};
  // 352891477146765813.133
  s21_decimal dec_2 = {{0xbdae58d, 0x215a60c4, 0x13, 0x30000}};
  // -94925498928000526761731014.133
  s21_decimal dec_check = {{0xce75f965, 0xcf5ef9d2, 0x1eac0da0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_178) {
  // -891226977674690052368777376
  s21_decimal dec_1 = {{0xe1d240a0, 0x44c4e666, 0x2e134a7, 0x80000000}};
  // 7613923180260401444825358
  s21_decimal dec_2 = {{0x4cdc290e, 0x9a47d8eb, 0x64c4f, 0x0}};
  // -898840900854950453813602734
  s21_decimal dec_check = {{0x2eae69ae, 0xdf0cbf52, 0x2e780f6, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_179) {
  // 55826255234674246390868389
  s21_decimal dec_1 = {{0x79eb69a5, 0x5c406f6d, 0x2e2dab, 0x0}};
  // 38044085383
  s21_decimal dec_2 = {{0xdb9aac87, 0x8, 0x0, 0x0}};
  // 55826255234674208346783006
  s21_decimal dec_check = {{0x9e50bd1e, 0x5c406f64, 0x2e2dab, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_180) {
  // 315537260
  s21_decimal dec_1 = {{0x12ceb76c, 0x0, 0x0, 0x0}};
  // -43691565301071.0
  s21_decimal dec_2 = {{0x5a4b6516, 0x18d5f, 0x0, 0x80010000}};
  // 43691880838331.0
  s21_decimal dec_check = {{0x165e8f4e, 0x18d60, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_181) {
  // 119615904966160590032728934
  s21_decimal dec_1 = {{0xcf61f366, 0x338f6126, 0x62f1a7, 0x0}};
  // 0.84709
  s21_decimal dec_2 = {{0x14ae5, 0x0, 0x0, 0x50000}};
  // 119615904966160590032728933.15
  s21_decimal dec_check = {{0x2431383, 0x2401f329, 0x26a66550, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_182) {
  // -233914204
  s21_decimal dec_1 = {{0xdf13f5c, 0x0, 0x0, 0x80000000}};
  // 465164446869375
  s21_decimal dec_2 = {{0x899e277f, 0x1a710, 0x0, 0x0}};
  // -465164680783579
  s21_decimal dec_check = {{0x978f66db, 0x1a710, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_183) {
  // 7047
  s21_decimal dec_1 = {{0x1b87, 0x0, 0x0, 0x0}};
  // -776256559256723262120862405
  s21_decimal dec_2 = {{0x87a722c5, 0x65c9f8eb, 0x2821ab8, 0x80000000}};
  // 776256559256723262120869452
  s21_decimal dec_check = {{0x87a73e4c, 0x65c9f8eb, 0x2821ab8, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_184) {
  // -2811043
  s21_decimal dec_1 = {{0x2ae4a3, 0x0, 0x0, 0x80000000}};
  // 754511831345322
  s21_decimal dec_2 = {{0x79afa8aa, 0x2ae39, 0x0, 0x0}};
  // -754511834156365
  s21_decimal dec_check = {{0x79da8d4d, 0x2ae39, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_185) {
  // -259109622368.6856
  s21_decimal dec_1 = {{0x99fde0c8, 0x93496, 0x0, 0x80040000}};
  // 57034396612826563865
  s21_decimal dec_2 = {{0xc6450519, 0x1782e189, 0x3, 0x0}};
  // -57034396871936186233.6856
  s21_decimal dec_check = {{0x82150158, 0x68934a67, 0x78c6, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_186) {
  // -2229224.1941656
  s21_decimal dec_1 = {{0x51298498, 0x1446, 0x0, 0x80070000}};
  // -0.028398007
  s21_decimal dec_2 = {{0x1b151b7, 0x0, 0x0, 0x80090000}};
  // -2229224.165767593
  s21_decimal dec_check = {{0xb28679a9, 0x7eb77, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_187) {
  // -37692120.48
  s21_decimal dec_1 = {{0xe0a99c90, 0x0, 0x0, 0x80020000}};
  // -5079088637862958.49143100
  s21_decimal dec_2 = {{0xdb804b3c, 0xcb6ff524, 0x6b8d, 0x80080000}};
  // 5079088600170838.01143100
  s21_decimal dec_check = {{0xca4c073c, 0xcb629110, 0x6b8d, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_188) {
  // 6365
  s21_decimal dec_1 = {{0x18dd, 0x0, 0x0, 0x0}};
  // 197449.415142316763919
  s21_decimal dec_2 = {{0xaa6ceb0f, 0xb4293cf0, 0xa, 0xf0000}};
  // -191084.415142316763919
  s21_decimal dec_check = {{0xcf106b0f, 0x5bd43729, 0xa, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_189) {
  // 40783308624314535784533489554
  s21_decimal dec_1 = {{0xb5847792, 0x94d8b0ec, 0x83c72986, 0x0}};
  // 70213335288022.57155463481578
  s21_decimal dec_2 = {{0x434a88ea, 0x489c5eb6, 0x16afe935, 0xe0000}};
  // 40783308624314465571198201531
  s21_decimal dec_check = {{0xe49beebb, 0x94d87110, 0x83c72986, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_191) {
  // 5556573062453581396
  s21_decimal dec_1 = {{0xa40cd654, 0x4d1ce9c2, 0x0, 0x0}};
  // 81262233938134997327
  s21_decimal dec_2 = {{0x913a994f, 0x67bd7338, 0x4, 0x0}};
  // -75705660875681415931
  s21_decimal dec_check = {{0xed2dc2fb, 0x1aa08975, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_192) {
  // -3260620107092843.24001550
  s21_decimal dec_1 = {{0x99e6470e, 0xdb659585, 0x450b, 0x80080000}};
  // 807331204219680.585
  s21_decimal dec_2 = {{0xeb9a3749, 0xb343773, 0x0, 0x30000}};
  // -4067951311312523.82501550
  s21_decimal dec_check = {{0xca820aae, 0x6882d6e5, 0x5624, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_193) {
  // 79374064108364390
  s21_decimal dec_1 = {{0x6f8ee266, 0x119fe4a, 0x0, 0x0}};
  // 54721.3162087594
  s21_decimal dec_2 = {{0xfe2484aa, 0x1f1af, 0x0, 0xa0000}};
  // 79374064108309668.6837912406
  s21_decimal dec_check = {{0x75e05356, 0x5f63cbe4, 0x290911e, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_194) {
  // -4265.7294724861
  s21_decimal dec_1 = {{0xece62efd, 0x26cb, 0x0, 0x800a0000}};
  // -72008412497276.0
  s21_decimal dec_2 = {{0xa67a36d8, 0x28ee9, 0x0, 0x80010000}};
  // 72008412493010.2705275139
  s21_decimal dec_check = {{0x48504103, 0xd6b086b9, 0x987b, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_195) {
  // -58
  s21_decimal dec_1 = {{0x3a, 0x0, 0x0, 0x80000000}};
  // -44
  s21_decimal dec_2 = {{0x2c, 0x0, 0x0, 0x80000000}};
  // -14
  s21_decimal dec_check = {{0xe, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_196) {
  // 9537
  s21_decimal dec_1 = {{0x2541, 0x0, 0x0, 0x0}};
  // 4.731819180
  s21_decimal dec_2 = {{0x1a09d4ac, 0x1, 0x0, 0x90000}};
  // 9532.268180820
  s21_decimal dec_check = {{0x67757554, 0x8ab, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_197) {
  // -413956303280838
  s21_decimal dec_1 = {{0xb668dac6, 0x1787d, 0x0, 0x80000000}};
  // 36.7
  s21_decimal dec_2 = {{0x16f, 0x0, 0x0, 0x10000}};
  // -413956303280874.7
  s21_decimal dec_check = {{0x20188d2b, 0xeb4e9, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_198) {
  // 965.11631
  s21_decimal dec_1 = {{0x5c0a68f, 0x0, 0x0, 0x50000}};
  // -235001691070304501517
  s21_decimal dec_2 = {{0xa5963f0d, 0xbd4db8ef, 0xc, 0x80000000}};
  // 235001691070304502482.11631
  s21_decimal dec_check = {{0x67b5dcaf, 0xb850ac0a, 0x13705a, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_199) {
  // 3.436650483858149
  s21_decimal dec_1 = {{0x8b4ebae5, 0xc359d, 0x0, 0xf0000}};
  // -8925066290
  s21_decimal dec_2 = {{0x13f9b432, 0x2, 0x0, 0x80000000}};
  // 8925066293.436650483858149
  s21_decimal dec_check = {{0xcc13bae5, 0xd030e4c7, 0x761f4, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_200) {
  // -45264577246735092277920
  s21_decimal dec_1 = {{0xa22de2a0, 0xcc32bfe5, 0x995, 0x80000000}};
  // -462.628370803811519
  s21_decimal dec_2 = {{0x58c764bf, 0x66b960d, 0x0, 0x800f0000}};
  // -45264577246735092277457.371629
  s21_decimal dec_check = {{0x8bb2c1ed, 0x609dade8, 0x9241fb11, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_201) {
  // 121710
  s21_decimal dec_1 = {{0x1db6e, 0x0, 0x0, 0x0}};
  // 2782
  s21_decimal dec_2 = {{0xade, 0x0, 0x0, 0x0}};
  // 118928
  s21_decimal dec_check = {{0x1d090, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_202) {
  // 75.741652177220657085
  s21_decimal dec_1 = {{0xd46ddfbd, 0x1b20675b, 0x4, 0x120000}};
  // 541265.996697156073855178
  s21_decimal dec_2 = {{0x1f1098ca, 0x16a655e8, 0x729e, 0x120000}};
  // -541190.255044978853198093
  s21_decimal dec_check = {{0x4aa2b90d, 0xfb85ee8c, 0x7299, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_203) {
  // -465316656919.17908907942964
  s21_decimal dec_1 = {{0x9cd46434, 0xa6d10c79, 0x267d76, 0x800e0000}};
  // 85.104
  s21_decimal dec_2 = {{0x14c70, 0x0, 0x0, 0x30000}};
  // -465316657004.28308907942964
  s21_decimal dec_check = {{0x85b9e434, 0xa6ef48a3, 0x267d76, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_204) {
  // -378927753913366.765409531938
  s21_decimal dec_1 = {{0x1e65f822, 0xb34d2b0c, 0x1397112, 0x800c0000}};
  // -2153273569175
  s21_decimal dec_2 = {{0x591b2f97, 0x1f5, 0x0, 0x80000000}};
  // -376774480344191.765409531938
  s21_decimal dec_check = {{0xb3198822, 0x819dc2b3, 0x137a919, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_205) {
  // -97557279491221.14046141903926
  s21_decimal dec_1 = {{0xaf73b436, 0xd4ae7df0, 0x1f85bfbf, 0x800e0000}};
  // 82585605581.41432436594114377
  s21_decimal dec_2 = {{0x9ae0ff49, 0xefdf5dde, 0x1aaf5238, 0x110000}};
  // -97639865096802.554785784980404
  s21_decimal dec_check = {{0x364349f8, 0x4bb49a73, 0x1f8c9491, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_206) {
  // -91652991086177
  s21_decimal dec_1 = {{0x9ff9ee61, 0x535b, 0x0, 0x80000000}};
  // 981024022464104957
  s21_decimal dec_2 = {{0x971909fd, 0xd9d4c26, 0x0, 0x0}};
  // -981115675455191134
  s21_decimal dec_check = {{0x3712f85e, 0xd9d9f82, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_207) {
  // -435386827368396845250
  s21_decimal dec_1 = {{0x999d70c2, 0x9a34bcb6, 0x17, 0x80000000}};
  // 9571087
  s21_decimal dec_2 = {{0x920b0f, 0x0, 0x0, 0x0}};
  // -435386827368406416337
  s21_decimal dec_check = {{0x9a2f7bd1, 0x9a34bcb6, 0x17, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_208) {
  // -414577414837844705247
  s21_decimal dec_1 = {{0xd7dffdf, 0x796ada45, 0x16, 0x80000000}};
  // 13.5483084777
  s21_decimal dec_2 = {{0x8b6bcfe9, 0x1f, 0x0, 0xa0000}};
  // -414577414837844705260.54830848
  s21_decimal dec_check = {{0x4a0f1300, 0x27301071, 0x85f50a3d, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_209) {
  // -1730571885398190508888
  s21_decimal dec_1 = {{0x8d28cb58, 0xd08268ce, 0x5d, 0x80000000}};
  // -9813305872
  s21_decimal dec_2 = {{0x48eb2a10, 0x2, 0x0, 0x80000000}};
  // -1730571885388377203016
  s21_decimal dec_check = {{0x443da148, 0xd08268cc, 0x5d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_210) {
  // -0.5692063805952
  s21_decimal dec_1 = {{0x4970f200, 0x52d, 0x0, 0x800d0000}};
  // -421.3
  s21_decimal dec_2 = {{0x1075, 0x0, 0x0, 0x80010000}};
  // 420.7307936194048
  s21_decimal dec_check = {{0x36ff5e00, 0xef286, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_211) {
  // -19373.840072420478
  s21_decimal dec_1 = {{0xa773ac7e, 0x44d467, 0x0, 0x800c0000}};
  // 6210294707945549007429
  s21_decimal dec_2 = {{0x2eb70a45, 0xa926f553, 0x150, 0x0}};
  // -6210294707945549026802.8400724
  s21_decimal dec_check = {{0xd036f454, 0x109d23d1, 0xc8aa5a93, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_212) {
  // -948
  s21_decimal dec_1 = {{0x3b4, 0x0, 0x0, 0x80000000}};
  // 107
  s21_decimal dec_2 = {{0x6b, 0x0, 0x0, 0x0}};
  // -1055
  s21_decimal dec_check = {{0x41f, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_213) {
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // 947821
  s21_decimal dec_2 = {{0xe766d, 0x0, 0x0, 0x0}};
  // -947825
  s21_decimal dec_check = {{0xe7671, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_214) {
  // 43.32
  s21_decimal dec_1 = {{0x10ec, 0x0, 0x0, 0x20000}};
  // 5784.670
  s21_decimal dec_2 = {{0x58445e, 0x0, 0x0, 0x30000}};
  // -5741.350
  s21_decimal dec_check = {{0x579b26, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_215) {
  // 68337586278.68
  s21_decimal dec_1 = {{0x1bc1681c, 0x637, 0x0, 0x20000}};
  // -9810.04596091
  s21_decimal dec_2 = {{0x686e337b, 0xe4, 0x0, 0x80080000}};
  // 68337596088.72596091
  s21_decimal dec_check = {{0x4f43727b, 0x5ed66428, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_216) {
  // 4257577598
  s21_decimal dec_1 = {{0xfdc57a7e, 0x0, 0x0, 0x0}};
  // 17136413.27016600314324
  s21_decimal dec_2 = {{0x2576a1d4, 0xe58cfba9, 0x5c, 0xe0000}};
  // 4240441184.72983399685676
  s21_decimal dec_check = {{0x7934de2c, 0x7a4c1d26, 0x59cb, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_217) {
  // -4.8847
  s21_decimal dec_1 = {{0xbecf, 0x0, 0x0, 0x80040000}};
  // 61815051206822546194
  s21_decimal dec_2 = {{0xfb3d4b12, 0x59db2d8f, 0x3, 0x0}};
  // -61815051206822546198.8847
  s21_decimal dec_check = {{0xa452def, 0x1a3c846, 0x82e6, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_218) {
  // 9342185650341858
  s21_decimal dec_1 = {{0x191d47e2, 0x2130ab, 0x0, 0x0}};
  // 97752088256599715255.65183591
  s21_decimal dec_2 = {{0xf9737667, 0x43958fdc, 0x1f95dcfc, 0x80000}};
  // -97742746070949373397.65183591
  s21_decimal dec_check = {{0x7fbd467, 0x2c92935d, 0x1f951728, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_219) {
  // 56213224469379906
  s21_decimal dec_1 = {{0x3c2d3b42, 0xc7b5a1, 0x0, 0x0}};
  // 23
  s21_decimal dec_2 = {{0x17, 0x0, 0x0, 0x0}};
  // 56213224469379883
  s21_decimal dec_check = {{0x3c2d3b2b, 0xc7b5a1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_220) {
  // -4891232070412790186762037
  s21_decimal dec_1 = {{0x5039df35, 0x38cabe43, 0x40bc2, 0x80000000}};
  // -36
  s21_decimal dec_2 = {{0x24, 0x0, 0x0, 0x80000000}};
  // -4891232070412790186762001
  s21_decimal dec_check = {{0x5039df11, 0x38cabe43, 0x40bc2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_221) {
  // -5341.32
  s21_decimal dec_1 = {{0x82674, 0x0, 0x0, 0x80020000}};
  // -604410.60
  s21_decimal dec_2 = {{0x39a41e4, 0x0, 0x0, 0x80020000}};
  // 599069.28
  s21_decimal dec_check = {{0x3921b70, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_222) {
  // -77421
  s21_decimal dec_1 = {{0x12e6d, 0x0, 0x0, 0x80000000}};
  // 7510554921274785529267
  s21_decimal dec_2 = {{0x257dfdb3, 0x25e33446, 0x197, 0x0}};
  // -7510554921274785606688
  s21_decimal dec_check = {{0x257f2c20, 0x25e33446, 0x197, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_223) {
  // -6140138
  s21_decimal dec_1 = {{0x5db0ea, 0x0, 0x0, 0x80000000}};
  // -79228162514264337592519663343
  s21_decimal dec_2 = {{0xc2f29eef, 0xffffffff, 0xffffffff, 0x80000000}};
  // 79228162514264337592513523205
  s21_decimal dec_check = {{0xc294ee05, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_224) {
  // 60818072161291521209.4
  s21_decimal dec_1 = {{0x28bff3e, 0xf833f807, 0x20, 0x10000}};
  // -8152.6695830777251
  s21_decimal dec_2 = {{0x10b46da3, 0x121a419, 0x0, 0x800d0000}};
  // 60818072161291529362.069583078
  s21_decimal dec_check = {{0xb8a4f4e6, 0x2ec05c9e, 0xc48387ba, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_225) {
  // -71596056
  s21_decimal dec_1 = {{0x4447818, 0x0, 0x0, 0x80000000}};
  // -65319
  s21_decimal dec_2 = {{0xff27, 0x0, 0x0, 0x80000000}};
  // -71530737
  s21_decimal dec_check = {{0x44378f1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_226) {
  // 860525529
  s21_decimal dec_1 = {{0x334a93d9, 0x0, 0x0, 0x0}};
  // -452073341865.97
  s21_decimal dec_2 = {{0xa7186e65, 0x291d, 0x0, 0x80020000}};
  // 452933867394.97
  s21_decimal dec_check = {{0xb03a2f29, 0x2931, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_227) {
  // -7176357725435995103170
  s21_decimal dec_1 = {{0xaebc1fc2, 0x7f8414f, 0x185, 0x80000000}};
  // -79985436876901.537767776
  s21_decimal dec_2 = {{0xf1df6160, 0x4ebb288, 0x10f0, 0x80090000}};
  // -7176357645450558226268.4622322
  s21_decimal dec_check = {{0x9a661df2, 0xdd7f8956, 0xe7e1706a, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_228) {
  // 386091166133
  s21_decimal dec_1 = {{0xe4d3a9b5, 0x59, 0x0, 0x0}};
  // -5068.3457401485309
  s21_decimal dec_2 = {{0x26777fd, 0xb41056, 0x0, 0x800d0000}};
  // 386091171201.3457401485309
  s21_decimal dec_check = {{0x51297fd, 0x717be949, 0x33194, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_229) {
  // 39402.411663
  s21_decimal dec_1 = {{0x2c91168f, 0x9, 0x0, 0x60000}};
  // 29419526347082673089199282496
  s21_decimal dec_2 = {{0xae811940, 0xf33858a4, 0x5f0f4306, 0x0}};
  // -29419526347082673089199243094
  s21_decimal dec_check = {{0xae807f56, 0xf33858a4, 0x5f0f4306, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_230) {
  // 134754.57019352175376042
  s21_decimal dec_1 = {{0xd29076aa, 0x81887b11, 0x2da, 0x110000}};
  // 71320622380243553222
  s21_decimal dec_2 = {{0x96310bc6, 0xddc5c02e, 0x3, 0x0}};
  // -71320622380243418467.429806478
  s21_decimal dec_check = {{0x6c1c718e, 0x6247ef2b, 0xe673093e, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_231) {
  // -70780620252710946965402923
  s21_decimal dec_1 = {{0x2c69b52b, 0x1cc5ca3a, 0x3a8c61, 0x80000000}};
  // 2846534420626.14
  s21_decimal dec_2 = {{0xb4c5916, 0x102e4, 0x0, 0x20000}};
  // -70780620252713793499823549.14
  s21_decimal dec_check = {{0x64971de2, 0x3d44019d, 0x16ded5ef, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_232) {
  // 8871255726923738521010551.848
  s21_decimal dec_1 = {{0xe825bc28, 0x971b3f45, 0x1caa2178, 0x30000}};
  // -15468731371883128
  s21_decimal dec_2 = {{0xae8c0a78, 0x36f4ba, 0x0, 0x80000000}};
  // 8871255742392469892893679.848
  s21_decimal dec_check = {{0xbb2ea0e8, 0x6dc7387f, 0x1caa2179, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_233) {
  // 6.884817705000752471
  s21_decimal dec_1 = {{0xb1e3d557, 0x5f8bc939, 0x0, 0x120000}};
  // 79674564349565945.78697
  s21_decimal dec_2 = {{0x1c000509, 0xeaab7633, 0x1af, 0x50000}};
  // -79674564349565938.902152294999
  s21_decimal dec_check = {{0x1e783c, 0xcc555d5f, 0x19be8686, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_234) {
  // -394112142321775655509918
  s21_decimal dec_1 = {{0x7fbfdf9e, 0xdcaf0208, 0x5374, 0x80000000}};
  // -9.47771097706097216871889
  s21_decimal dec_2 = {{0x2d0c5dd1, 0xc62f3135, 0xc8b2, 0x80170000}};
  // -394112142321775655509908.52229
  s21_decimal dec_check = {{0x26880085, 0x8a7a37ee, 0x7f58313c, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_235) {
  // 2065463796096258344504
  s21_decimal dec_1 = {{0xdb550638, 0xf8117b40, 0x6f, 0x0}};
  // 3375.282
  s21_decimal dec_2 = {{0x3380b2, 0x0, 0x0, 0x30000}};
  // 2065463796096258341128.718
  s21_decimal dec_check = {{0xc3ecca0e, 0x4497558, 0x1b561, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_236) {
  // 832.706
  s21_decimal dec_1 = {{0xcb4c2, 0x0, 0x0, 0x30000}};
  // 368.1760962353681976300705134
  s21_decimal dec_2 = {{0x22a4956e, 0xb2a39f42, 0xbe57b35, 0x190000}};
  // 464.5299037646318023699294866
  s21_decimal dec_check = {{0xf1db6a92, 0x6c4ce08d, 0xf028055, 0x190000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_237) {
  // 71332315528327791784
  s21_decimal dec_1 = {{0xc80f04a8, 0xddef4b09, 0x3, 0x0}};
  // 13383206498777585551
  s21_decimal dec_2 = {{0x4356578f, 0xb9bab367, 0x0, 0x0}};
  // 57949109029550206233
  s21_decimal dec_check = {{0x84b8ad19, 0x243497a2, 0x3, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_238) {
  // -35425
  s21_decimal dec_1 = {{0x8a61, 0x0, 0x0, 0x80000000}};
  // 0.43413030
  s21_decimal dec_2 = {{0x2966e26, 0x0, 0x0, 0x80000}};
  // -35425.43413030
  s21_decimal dec_check = {{0xd00aaf26, 0x338, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_239) {
  // 7462444422.7008011577413
  s21_decimal dec_1 = {{0x922a2845, 0x6633c736, 0xfcd, 0xd0000}};
  // -27920629558833328212.82
  s21_decimal dec_2 = {{0x7132e122, 0x5ba84164, 0x97, 0x80020000}};
  // 27920629566295772635.520801158
  s21_decimal dec_check = {{0x40b79986, 0xa5a4b06c, 0x5a376749, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_240) {
  // -66892474542534034040350
  s21_decimal dec_1 = {{0x4999a61e, 0x3f9150ea, 0xe2a, 0x80000000}};
  // 82014474114983838305374
  s21_decimal dec_2 = {{0x51174c5e, 0x3780c45, 0x115e, 0x0}};
  // -148906948657517872345724
  s21_decimal dec_check = {{0x9ab0f27c, 0x43095d2f, 0x1f88, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_241) {
  // 42835315072708260006334435
  s21_decimal dec_1 = {{0x7fd60fe3, 0x15428a37, 0x236ebb, 0x0}};
  // 9542253300882830.039
  s21_decimal dec_2 = {{0xf3eb72d7, 0x846ce4d1, 0x0, 0x30000}};
  // 42835315063166006705451604.961
  s21_decimal dec_check = {{0x68429be1, 0x877f03f9, 0x8a688aca, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_242) {
  // -331.34152319417889
  s21_decimal dec_1 = {{0x2eebe21, 0x75b756, 0x0, 0x800e0000}};
  // -139658759169404
  s21_decimal dec_2 = {{0xd6bae57c, 0x7f04, 0x0, 0x80000000}};
  // 139658759169072.65847680582111
  s21_decimal dec_check = {{0xd38841df, 0x7d1aee75, 0x2d204d42, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_243) {
  // 839946.7
  s21_decimal dec_1 = {{0x802a6b, 0x0, 0x0, 0x10000}};
  // -2629897509
  s21_decimal dec_2 = {{0x9cc10d25, 0x0, 0x0, 0x80000000}};
  // 2630737455.7
  s21_decimal dec_check = {{0x200aaddd, 0x6, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_244) {
  // 95.2
  s21_decimal dec_1 = {{0x3b8, 0x0, 0x0, 0x10000}};
  // 65360628594753664330
  s21_decimal dec_2 = {{0x5687f54a, 0x8b0f9969, 0x3, 0x0}};
  // -65360628594753664234.8
  s21_decimal dec_check = {{0x614f912c, 0x6e9bfe1d, 0x23, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_245) {
  // -562
  s21_decimal dec_1 = {{0x232, 0x0, 0x0, 0x80000000}};
  // 175678907837198257
  s21_decimal dec_2 = {{0x302a2fb1, 0x2702309, 0x0, 0x0}};
  // -175678907837198819
  s21_decimal dec_check = {{0x302a31e3, 0x2702309, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_246) {
  // 169286328
  s21_decimal dec_1 = {{0xa171ab8, 0x0, 0x0, 0x0}};
  // -9162548422526923.01288819
  s21_decimal dec_2 = {{0x21741573, 0x4647569d, 0xc206, 0x80080000}};
  // 9162548591813251.01288819
  s21_decimal dec_check = {{0x9a07cd73, 0x46837b1d, 0xc206, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_247) {
  // 52957962228741997888585823906
  s21_decimal dec_1 = {{0xa48f76a2, 0xf0bbf567, 0xab1dccb4, 0x0}};
  // 8336658267.657123
  s21_decimal dec_2 = {{0x82a853a3, 0x1d9e25, 0x0, 0x60000}};
  // 52957962228741997880249165638
  s21_decimal dec_check = {{0xb3a82746, 0xf0bbf565, 0xab1dccb4, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_248) {
  // 41758378856693963.3
  s21_decimal dec_1 = {{0x457e87f1, 0x5cb8e3e, 0x0, 0x10000}};
  // 15684168
  s21_decimal dec_2 = {{0xef5248, 0x0, 0x0, 0x0}};
  // 41758378841009795.3
  s21_decimal dec_check = {{0x3c255121, 0x5cb8e3e, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_249) {
  // 875
  s21_decimal dec_1 = {{0x36b, 0x0, 0x0, 0x0}};
  // 8866405081842168
  s21_decimal dec_2 = {{0xcd5681f8, 0x1f7ff2, 0x0, 0x0}};
  // -8866405081841293
  s21_decimal dec_check = {{0xcd567e8d, 0x1f7ff2, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_250) {
  // 830480.68177768990504
  s21_decimal dec_1 = {{0xa57c728, 0x80860200, 0x4, 0xe0000}};
  // -2087522667141657842798564
  s21_decimal dec_2 = {{0xd6ddcfe4, 0xd49e5c3a, 0x1ba0c, 0x80000000}};
  // 2087522667141657843629044.6818
  s21_decimal dec_check = {{0x278a05e2, 0x69f2ba6b, 0x43739531, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_251) {
  // 9.9612
  s21_decimal dec_1 = {{0x1851c, 0x0, 0x0, 0x40000}};
  // -255302249578495803260841942.59
  s21_decimal dec_2 = {{0xaf3cafd3, 0x2ace2573, 0x527e1b6c, 0x80020000}};
  // 255302249578495803260841952.55
  s21_decimal dec_check = {{0xaf3cb3b7, 0x2ace2573, 0x527e1b6c, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_252) {
  // -52962139
  s21_decimal dec_1 = {{0x328235b, 0x0, 0x0, 0x80000000}};
  // -701.5661
  s21_decimal dec_2 = {{0x6b0ced, 0x0, 0x0, 0x80040000}};
  // -52961437.4339
  s21_decimal dec_check = {{0x4f7a05c3, 0x7b, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_253) {
  // -9179002975659781482178418
  s21_decimal dec_1 = {{0x8a896772, 0xbf956083, 0x797ba, 0x80000000}};
  // 2123489637869374.6
  s21_decimal dec_2 = {{0x977e8872, 0x4b7106, 0x0, 0x10000}};
  // -9179002977783271120047792.6
  s21_decimal dec_check = {{0xdc92e6, 0x7c21362a, 0x4bed4b, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_254) {
  // 596190220
  s21_decimal dec_1 = {{0x2389240c, 0x0, 0x0, 0x0}};
  // 2221912791857025833884286656
  s21_decimal dec_2 = {{0xa4fd7ec0, 0xccdc4415, 0x72dec55, 0x0}};
  // -2221912791857025833288096436
  s21_decimal dec_check = {{0x81745ab4, 0xccdc4415, 0x72dec55, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_255) {
  // -1471076406379863231247362
  s21_decimal dec_1 = {{0xad53402, 0x363781a5, 0x13783, 0x80000000}};
  // 249.49300364
  s21_decimal dec_2 = {{0xcf181c8c, 0x5, 0x0, 0x80000}};
  // -1471076406379863231247611.4930
  s21_decimal dec_check = {{0x28659ff2, 0xd8383ef7, 0x2f887575, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_256) {
  // 5931759535968153763540882.895
  s21_decimal dec_1 = {{0xd52bd5cf, 0xc7255f32, 0x132aa2f0, 0x30000}};
  // -811890794102495851
  s21_decimal dec_2 = {{0x2ae39a6b, 0xb446a60, 0x0, 0x80000000}};
  // 5931760347858947866036733.895
  s21_decimal dec_check = {{0x5e3f07c7, 0xca64e6da, 0x132aa31c, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_257) {
  // -3307
  s21_decimal dec_1 = {{0xceb, 0x0, 0x0, 0x80000000}};
  // -94
  s21_decimal dec_2 = {{0x5e, 0x0, 0x0, 0x80000000}};
  // -3213
  s21_decimal dec_check = {{0xc8d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_258) {
  // -29008
  s21_decimal dec_1 = {{0x7150, 0x0, 0x0, 0x80000000}};
  // -63512996.5558201541947
  s21_decimal dec_2 = {{0xc6af653b, 0x6e32ea9c, 0x22, 0x800d0000}};
  // 63483988.5558201541947
  s21_decimal dec_check = {{0xaa3d653b, 0x6a2c5863, 0x22, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_259) {
  // 0.1636620939
  s21_decimal dec_1 = {{0x618cda8b, 0x0, 0x0, 0xa0000}};
  // -8.32792
  s21_decimal dec_2 = {{0xcb518, 0x0, 0x0, 0x80050000}};
  // 8.4915820939
  s21_decimal dec_check = {{0xc560998b, 0x13, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_260) {
  // -63242655295250
  s21_decimal dec_1 = {{0xd400e712, 0x3984, 0x0, 0x80000000}};
  // 91658566782285
  s21_decimal dec_2 = {{0xec504d4d, 0x535c, 0x0, 0x0}};
  // -154901222077535
  s21_decimal dec_check = {{0xc051345f, 0x8ce1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_261) {
  // 5204531192363842390744307755
  s21_decimal dec_1 = {{0x2b6b182b, 0x46c6e771, 0x10d11659, 0x0}};
  // 78016713
  s21_decimal dec_2 = {{0x4a670c9, 0x0, 0x0, 0x0}};
  // 5204531192363842390666291042
  s21_decimal dec_check = {{0x26c4a762, 0x46c6e771, 0x10d11659, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_262) {
  // -0.3094352024007864590136421
  s21_decimal dec_1 = {{0x5bf5f465, 0x28cab77d, 0x28f41, 0x80190000}};
  // -66588.221582133610616
  s21_decimal dec_2 = {{0xbc12c878, 0x9c18e2ba, 0x3, 0x800f0000}};
  // 66587.912146931209829540986358
  s21_decimal dec_check = {{0x892c7df6, 0x8c808a5a, 0xd7283ade, 0x180000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_263) {
  // -719368708370541.404013272
  s21_decimal dec_1 = {{0xfcdcc2d8, 0xe4a543d, 0x9855, 0x80090000}};
  // -321119496440750
  s21_decimal dec_2 = {{0x75840bae, 0x1240e, 0x0, 0x80000000}};
  // -398249211929791.404013272
  s21_decimal dec_check = {{0xaaf976d8, 0x220ecb63, 0x5455, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_264) {
  // -517.2690
  s21_decimal dec_1 = {{0x4eedd2, 0x0, 0x0, 0x80040000}};
  // -40.52579953040509917183
  s21_decimal dec_2 = {{0x30d057ff, 0xb0d83bcd, 0xdb, 0x80140000}};
  // -476.74320046959490082817
  s21_decimal dec_check = {{0x2881a801, 0x6e18f556, 0xa18, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_265) {
  // -43931052531
  s21_decimal dec_1 = {{0x3a7ea9f3, 0xa, 0x0, 0x80000000}};
  // 7016297516411444151869483
  s21_decimal dec_2 = {{0x72a2602b, 0x402116c3, 0x5cdc2, 0x0}};
  // -7016297516411488082922014
  s21_decimal dec_check = {{0xad210a1e, 0x402116cd, 0x5cdc2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_266) {
  // -90382.31251568529
  s21_decimal dec_1 = {{0x3325c791, 0x201c39, 0x0, 0x800b0000}};
  // -2.7114955
  s21_decimal dec_2 = {{0x19dbdcb, 0x0, 0x0, 0x80070000}};
  // -90379.60102018529
  s21_decimal dec_check = {{0x115ffde1, 0x201bfa, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_267) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -425082.0439953279840
  s21_decimal dec_2 = {{0x17628b60, 0x3afdf2ab, 0x0, 0x800d0000}};
  // 425077.0439953279840
  s21_decimal dec_check = {{0x8f256b60, 0x3afdc531, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_268) {
  // -23524236.7
  s21_decimal dec_1 = {{0xe05837f, 0x0, 0x0, 0x80010000}};
  // 96102113462.99
  s21_decimal dec_2 = {{0x8d3bc77b, 0x8bd, 0x0, 0x20000}};
  // -96125637699.69
  s21_decimal dec_check = {{0x1972ea71, 0x8be, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_269) {
  // -9760622224787706383469
  s21_decimal dec_1 = {{0x962e8c6d, 0x1fd81773, 0x211, 0x80000000}};
  // 936206125331048626.426229
  s21_decimal dec_2 = {{0x642c9175, 0xd5f3a3f3, 0xc63f, 0x60000}};
  // -9761558430913037432095.426229
  s21_decimal dec_check = {{0x2a66c6b5, 0xe1cb1a4b, 0x1f8a9266, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_270) {
  // 216290013070243092238155
  s21_decimal dec_1 = {{0x92ec0f4b, 0x1ae805c8, 0x2dcd, 0x0}};
  // -26003855309573173346
  s21_decimal dec_2 = {{0x35c3b062, 0x68e040a1, 0x1, 0x80000000}};
  // 216316016925552665411501
  s21_decimal dec_check = {{0xc8afbfad, 0x83c84669, 0x2dce, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_271) {
  // 97404448772
  s21_decimal dec_1 = {{0xadc1f004, 0x16, 0x0, 0x0}};
  // -458
  s21_decimal dec_2 = {{0x1ca, 0x0, 0x0, 0x80000000}};
  // 97404449230
  s21_decimal dec_check = {{0xadc1f1ce, 0x16, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_272) {
  // -79.26634852358244
  s21_decimal dec_1 = {{0x7ea39864, 0x1c293b, 0x0, 0x800e0000}};
  // 794847.43503
  s21_decimal dec_2 = {{0x81a8ef4f, 0x12, 0x0, 0x50000}};
  // -794926.70137852358244
  s21_decimal dec_check = {{0xf5fdee64, 0x4f2eb251, 0x4, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_273) {
  // -6290.516
  s21_decimal dec_1 = {{0x5ffc54, 0x0, 0x0, 0x80030000}};
  // -0.6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80010000}};
  // -6289.916
  s21_decimal dec_check = {{0x5ff9fc, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_274) {
  // -67.442
  s21_decimal dec_1 = {{0x10772, 0x0, 0x0, 0x80030000}};
  // -520082522866459065270
  s21_decimal dec_2 = {{0x2043bbb6, 0x31984b08, 0x1c, 0x80000000}};
  // 520082522866459065202.558
  s21_decimal dec_check = {{0x894377e, 0xbae517be, 0x6e21, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_275) {
  // -0.6599872513414013
  s21_decimal dec_1 = {{0x90b9937d, 0x17728c, 0x0, 0x80100000}};
  // -677069729233401446780321569
  s21_decimal dec_2 = {{0x874b3f21, 0x916541b8, 0x2300f17, 0x80000000}};
  // 677069729233401446780321568.34
  s21_decimal dec_check = {{0xd964a8a2, 0xcb8dac14, 0xdac5e534, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_276) {
  // 75531427796262
  s21_decimal dec_1 = {{0x7ec5526, 0x44b2, 0x0, 0x0}};
  // 71341
  s21_decimal dec_2 = {{0x116ad, 0x0, 0x0, 0x0}};
  // 75531427724921
  s21_decimal dec_check = {{0x7eb3e79, 0x44b2, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_277) {
  // -296001312
  s21_decimal dec_1 = {{0x11a49f20, 0x0, 0x0, 0x80000000}};
  // -925941559803423224859013630
  s21_decimal dec_2 = {{0x248131fe, 0x89637e67, 0x2fdebc0, 0x80000000}};
  // 925941559803423224563012318
  s21_decimal dec_check = {{0x12dc92de, 0x89637e67, 0x2fdebc0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_278) {
  // 984164523.39940777
  s21_decimal dec_1 = {{0xf1c6bda9, 0x15da53d, 0x0, 0x80000}};
  // -637354
  s21_decimal dec_2 = {{0x9b9aa, 0x0, 0x0, 0x80000000}};
  // 984801877.39940777
  s21_decimal dec_check = {{0x7fa727a9, 0x15ddf35, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_279) {
  // 77789844386299037.1807
  s21_decimal dec_1 = {{0xf6afbbdf, 0x2b827135, 0x2a, 0x40000}};
  // -91340
  s21_decimal dec_2 = {{0x164cc, 0x0, 0x0, 0x80000000}};
  // 77789844386390377.1807
  s21_decimal dec_check = {{0x2d211c9f, 0x2b827136, 0x2a, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_280) {
  // -77084
  s21_decimal dec_1 = {{0x12d1c, 0x0, 0x0, 0x80000000}};
  // 640419748682792038476694
  s21_decimal dec_2 = {{0xe592ab96, 0x396151bf, 0x879d, 0x0}};
  // -640419748682792038553778
  s21_decimal dec_check = {{0xe593d8b2, 0x396151bf, 0x879d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_281) {
  // -329.51565146119790
  s21_decimal dec_1 = {{0x1f53de6e, 0x751146, 0x0, 0x800e0000}};
  // 3600375703000438
  s21_decimal dec_2 = {{0xcad5d576, 0xcca85, 0x0, 0x0}};
  // -3600375703000767.5156514611979
  s21_decimal dec_check = {{0x117e230b, 0x7a8df706, 0x74559c1b, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_282) {
  // -56761997741341707
  s21_decimal dec_1 = {{0x781d3c0b, 0xc9a8bc, 0x0, 0x80000000}};
  // 7548287.0304986176
  s21_decimal dec_2 = {{0x4727d440, 0x10c2b45, 0x0, 0xa0000}};
  // -56761997748889994.0304986176
  s21_decimal dec_check = {{0x811aa040, 0xa3113f4a, 0x1d58634, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_283) {
  // 865462672.70089189224461610588
  s21_decimal dec_1 = {{0x982bae5c, 0xbcb1f341, 0x17a564f5, 0x140000}};
  // 7258391120.130
  s21_decimal dec_2 = {{0xf9d30902, 0x699, 0x0, 0x30000}};
  // -6392928447.4291081077553838941
  s21_decimal dec_check = {{0x7fb0d4f7, 0x393803c5, 0xe82aaa29, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_284) {
  // 8126323.9475
  s21_decimal dec_1 = {{0xebaaa133, 0x12, 0x0, 0x40000}};
  // 8294810877417950604559
  s21_decimal dec_2 = {{0x572ced0f, 0xa9a01138, 0x1c1, 0x0}};
  // -8294810877417942478235.0525
  s21_decimal dec_check = {{0x5f4178bd, 0xfca0a8ba, 0x449cf1, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_285) {
  // 351671831464692778501.12
  s21_decimal dec_1 = {{0xf5485a00, 0x6ab49bfd, 0x772, 0x20000}};
  // -6.8
  s21_decimal dec_2 = {{0x44, 0x0, 0x0, 0x80010000}};
  // 351671831464692778507.92
  s21_decimal dec_check = {{0xf5485ca8, 0x6ab49bfd, 0x772, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_286) {
  // -24085
  s21_decimal dec_1 = {{0x5e15, 0x0, 0x0, 0x80000000}};
  // -296.3186105231336653553
  s21_decimal dec_2 = {{0x3715c2f1, 0xa277cf13, 0xa0, 0x80130000}};
  // -23788.6813894768663346447
  s21_decimal dec_check = {{0x48f23d0f, 0xdeb9baef, 0x325f, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_287) {
  // -8224938466461874466461
  s21_decimal dec_1 = {{0xca252e9d, 0xdff365a7, 0x1bd, 0x80000000}};
  // -770595794526785
  s21_decimal dec_2 = {{0x50992241, 0x2bcda, 0x0, 0x80000000}};
  // -8224937695866079939676
  s21_decimal dec_check = {{0x798c0c5c, 0xdff0a8cd, 0x1bd, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_288) {
  // 1166611504438184.12
  s21_decimal dec_1 = {{0xbf4acdac, 0x19e76b2, 0x0, 0x20000}};
  // 0.81081
  s21_decimal dec_2 = {{0x13cb9, 0x0, 0x0, 0x50000}};
  // 1166611504438183.30919
  s21_decimal dec_check = {{0x3c322b27, 0x52ffaa3b, 0x6, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_289) {
  // -2787666320931191313961503
  s21_decimal dec_1 = {{0xf9a4921f, 0xb1ae4dbf, 0x24e4f, 0x80000000}};
  // -508552717
  s21_decimal dec_2 = {{0x1e4fe60d, 0x0, 0x0, 0x80000000}};
  // -2787666320931190805408786
  s21_decimal dec_check = {{0xdb54ac12, 0xb1ae4dbf, 0x24e4f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_290) {
  // -6957.1
  s21_decimal dec_1 = {{0x10fc3, 0x0, 0x0, 0x80010000}};
  // -25094902586018603500479
  s21_decimal dec_2 = {{0xde7083bf, 0x65bbaf7d, 0x550, 0x80000000}};
  // 25094902586018603493521.9
  s21_decimal dec_check = {{0xb06415b3, 0xf954daea, 0x3523, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_291) {
  // -357811653241347464315
  s21_decimal dec_1 = {{0x9c35c7b, 0x65a25adb, 0x13, 0x80000000}};
  // -1087
  s21_decimal dec_2 = {{0x43f, 0x0, 0x0, 0x80000000}};
  // -357811653241347463228
  s21_decimal dec_check = {{0x9c3583c, 0x65a25adb, 0x13, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_292) {
  // 8849800650919.36818169938462
  s21_decimal dec_1 = {{0x3db0821e, 0x757de1b2, 0x2dc09d1, 0xe0000}};
  // 364
  s21_decimal dec_2 = {{0x16c, 0x0, 0x0, 0x0}};
  // 8849800650555.36818169938462
  s21_decimal dec_check = {{0xcfdd821e, 0x74fc9016, 0x2dc09d1, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_293) {
  // 11813
  s21_decimal dec_1 = {{0x2e25, 0x0, 0x0, 0x0}};
  // 33451866.524379
  s21_decimal dec_2 = {{0x9e9f0adb, 0x1e6c, 0x0, 0x60000}};
  // -33440053.524379
  s21_decimal dec_check = {{0xde82f79b, 0x1e69, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_294) {
  // -972489523120254759607081
  s21_decimal dec_1 = {{0xa5461b29, 0xc33f478d, 0xcdee, 0x80000000}};
  // -8460241.707244842
  s21_decimal dec_2 = {{0x85ac9d2a, 0x1e0e8b, 0x0, 0x80090000}};
  // -972489523120254751146839.29276
  s21_decimal dec_check = {{0x4fd281e0, 0xd7db0cf4, 0x1f6c3eaa, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_295) {
  // -39908.43718193342187206
  s21_decimal dec_1 = {{0xf54a06c6, 0x5815114c, 0xd8, 0x80110000}};
  // -4312240.601
  s21_decimal dec_2 = {{0x10791d9, 0x1, 0x0, 0x80030000}};
  // 4272332.16381806657812794
  s21_decimal dec_check = {{0x96393a, 0x5bebe0a9, 0x5a78, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_296) {
  // 44071611.1702663
  s21_decimal dec_1 = {{0x3748ea87, 0x190d4, 0x0, 0x70000}};
  // -193641307275911880758187
  s21_decimal dec_2 = {{0x4fb3d3ab, 0x50f923d3, 0x2901, 0x80000000}};
  // 193641307275911924829798.17027
  s21_decimal dec_check = {{0xe420a643, 0x284a537f, 0x3e91a22e, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_297) {
  // 1225
  s21_decimal dec_1 = {{0x4c9, 0x0, 0x0, 0x0}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 1231
  s21_decimal dec_check = {{0x4cf, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_298) {
  // 9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x0}};
  // -2.30183484935197095530745
  s21_decimal dec_2 = {{0xbe3290f9, 0x458f9030, 0x30be, 0x80170000}};
  // 11.30183484935197095530745
  s21_decimal dec_check = {{0x68b290f9, 0x5e967bd3, 0xef53, 0x170000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_299) {
  // 226
  s21_decimal dec_1 = {{0xe2, 0x0, 0x0, 0x0}};
  // 285
  s21_decimal dec_2 = {{0x11d, 0x0, 0x0, 0x0}};
  // -59
  s21_decimal dec_check = {{0x3b, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_300) {
  // 2.51107
  s21_decimal dec_1 = {{0x3d4e3, 0x0, 0x0, 0x50000}};
  // -2438246572354841216354
  s21_decimal dec_2 = {{0x38160562, 0x2d77f32c, 0x84, 0x80000000}};
  // 2438246572354841216356.51107
  s21_decimal dec_check = {{0x99fa7e23, 0x276d5914, 0xc9afe1, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_301) {
  // -50099196540334.0
  s21_decimal dec_1 = {{0x482218cc, 0x1c7a6, 0x0, 0x80010000}};
  // 191250980628678413300240
  s21_decimal dec_2 = {{0xf26ab210, 0xbc86f6a8, 0x287f, 0x0}};
  // -191250980678777609840574.0
  s21_decimal dec_check = {{0xc04d0d6c, 0x5d476a3f, 0x194fd, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_302) {
  // -14040436179
  s21_decimal dec_1 = {{0x44e00dd3, 0x3, 0x0, 0x80000000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -14040436178.5
  s21_decimal dec_check = {{0xb0c08a39, 0x20, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_303) {
  // -86
  s21_decimal dec_1 = {{0x56, 0x0, 0x0, 0x80000000}};
  // 309.9604
  s21_decimal dec_2 = {{0x2f4bd4, 0x0, 0x0, 0x40000}};
  // -395.9604
  s21_decimal dec_check = {{0x3c6b34, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_304) {
  // -253.438483609948
  s21_decimal dec_1 = {{0x3ec9b95c, 0xe680, 0x0, 0x800c0000}};
  // 3188.71943565
  s21_decimal dec_2 = {{0x3e3fb98d, 0x4a, 0x0, 0x80000}};
  // -3442.157919259948
  s21_decimal dec_check = {{0xd809cd2c, 0xc3a9f, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_305) {
  // 0.6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x10000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // -6.4
  s21_decimal dec_check = {{0x40, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_306) {
  // 8855347231
  s21_decimal dec_1 = {{0xfd1e01f, 0x2, 0x0, 0x0}};
  // -690.6347005855306
  s21_decimal dec_2 = {{0x37fac64a, 0x188949, 0x0, 0x800d0000}};
  // 8855347921.6347005855306
  s21_decimal dec_check = {{0xa3dc264a, 0x7e64ead3, 0x12c0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_307) {
  // -0.2064964362703
  s21_decimal dec_1 = {{0xc977a1cf, 0x1e0, 0x0, 0x800d0000}};
  // 63288564855804975
  s21_decimal dec_2 = {{0x4a93142f, 0xe0d89d, 0x0, 0x0}};
  // -63288564855804975.206496436270
  s21_decimal dec_check = {{0x33b3802e, 0x81f6fcf4, 0xcc7f12e7, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_308) {
  // -51
  s21_decimal dec_1 = {{0x33, 0x0, 0x0, 0x80000000}};
  // -3068.49
  s21_decimal dec_2 = {{0x4aea1, 0x0, 0x0, 0x80020000}};
  // 3017.49
  s21_decimal dec_check = {{0x49ab5, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_309) {
  // -4527822325709
  s21_decimal dec_1 = {{0x373dc7cd, 0x41e, 0x0, 0x80000000}};
  // 966732044276388563954
  s21_decimal dec_2 = {{0xb1578bf2, 0x681a284d, 0x34, 0x0}};
  // -966732048804210889663
  s21_decimal dec_check = {{0xe89553bf, 0x681a2c6b, 0x34, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_310) {
  // 16159.17
  s21_decimal dec_1 = {{0x18a82d, 0x0, 0x0, 0x20000}};
  // -30440966
  s21_decimal dec_2 = {{0x1d07e06, 0x0, 0x0, 0x80000000}};
  // 30457125.17
  s21_decimal dec_check = {{0xb589e285, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_311) {
  // -10955712736628781
  s21_decimal dec_1 = {{0xa5ed902d, 0x26ec29, 0x0, 0x80000000}};
  // -66645
  s21_decimal dec_2 = {{0x10455, 0x0, 0x0, 0x80000000}};
  // -10955712736562136
  s21_decimal dec_check = {{0xa5ec8bd8, 0x26ec29, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_312) {
  // 42361827926096.9220899
  s21_decimal dec_1 = {{0xe04bbb23, 0xf6e2748f, 0x16, 0x70000}};
  // 93331625921133308
  s21_decimal dec_2 = {{0x8956bafc, 0x14b949e, 0x0, 0x0}};
  // -93289264093207211.0779101
  s21_decimal dec_check = {{0xa2416add, 0x361e4aac, 0xc58c, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_313) {
  // -9896105788.09320497169935165
  s21_decimal dec_1 = {{0xad49ab3d, 0xf9158dd7, 0x3329630, 0x80110000}};
  // -1798021444975197106357
  s21_decimal dec_2 = {{0x92f30b5, 0x788f61e1, 0x61, 0x80000000}};
  // 1798021444965301000568.9067950
  s21_decimal dec_check = {{0x5c0369ae, 0x6748ab5c, 0x3a18e282, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_314) {
  // 92100663572.4535429
  s21_decimal dec_1 = {{0xce237685, 0xcc812a7, 0x0, 0x70000}};
  // 13106.33305558466
  s21_decimal dec_2 = {{0x989bcdc2, 0x4a803, 0x0, 0xb0000}};
  // 92100650466.12048731534
  s21_decimal dec_check = {{0xb0a9dd8e, 0x475412e0, 0x1f3, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_315) {
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -7662
  s21_decimal dec_2 = {{0x1dee, 0x0, 0x0, 0x80000000}};
  // 7661
  s21_decimal dec_check = {{0x1ded, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_316) {
  // -6571537
  s21_decimal dec_1 = {{0x644611, 0x0, 0x0, 0x80000000}};
  // 67.498132418068669679130593
  s21_decimal dec_2 = {{0xf9c1d7e1, 0x171f28fb, 0x37d549, 0x180000}};
  // -6571604.4981324180686696791306
  s21_decimal dec_check = {{0xdb4ebd0a, 0xcb9b6d25, 0xd45709d0, 0x80160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_317) {
  // -2609172075851132550288176153
  s21_decimal dec_1 = {{0xf37ef419, 0xa6bc9de4, 0x86e41ad, 0x80000000}};
  // 894835751667
  s21_decimal dec_2 = {{0x585dfaf3, 0xd0, 0x0, 0x0}};
  // -2609172075851133445123927820
  s21_decimal dec_check = {{0x4bdcef0c, 0xa6bc9eb5, 0x86e41ad, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_318) {
  // 7516384666415290337915.2
  s21_decimal dec_1 = {{0x7b68e8d0, 0xa3ea31eb, 0xfea, 0x10000}};
  // 88594
  s21_decimal dec_2 = {{0x15a12, 0x0, 0x0, 0x0}};
  // 7516384666415290249321.2
  s21_decimal dec_check = {{0x7b5b641c, 0xa3ea31eb, 0xfea, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_319) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -3142107693439606717733033996
  s21_decimal dec_2 = {{0x3fee580c, 0x5edb2e89, 0xa27172f, 0x80000000}};
  // 3142107693439606717733033991
  s21_decimal dec_check = {{0x3fee5807, 0x5edb2e89, 0xa27172f, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_320) {
  // -672355675021.13578739
  s21_decimal dec_1 = {{0xf3471ef3, 0xa514b869, 0x3, 0x80080000}};
  // -446459.2304950744682962064
  s21_decimal dec_2 = {{0x48119c90, 0x8a810e3, 0x3b16a, 0x80130000}};
  // -672355228561.90529231553170379
  s21_decimal dec_check = {{0xc9ae0bcb, 0x71abd196, 0xd93febc5, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_321) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // -674253493143
  s21_decimal dec_2 = {{0xfca3d397, 0x9c, 0x0, 0x80000000}};
  // 674253493147
  s21_decimal dec_check = {{0xfca3d39b, 0x9c, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_322) {
  // -1639408
  s21_decimal dec_1 = {{0x1903f0, 0x0, 0x0, 0x80000000}};
  // -46091040430348072
  s21_decimal dec_2 = {{0x9c2dd728, 0xa3bf8e, 0x0, 0x80000000}};
  // 46091040428708664
  s21_decimal dec_check = {{0x9c14d338, 0xa3bf8e, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_323) {
  // -87816.266643103460
  s21_decimal dec_1 = {{0xe2c35ee4, 0x137fc6d, 0x0, 0x800c0000}};
  // -3408578908552123.38870
  s21_decimal dec_2 = {{0x51ccceb6, 0x7a5a7dca, 0x12, 0x80050000}};
  // 3408578908464307.122056896540
  s21_decimal dec_check = {{0xc0d2a01c, 0xe1dc0643, 0xb0382a8, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_324) {
  // -281410434
  s21_decimal dec_1 = {{0x10c5fb82, 0x0, 0x0, 0x80000000}};
  // -234236719846471572566696
  s21_decimal dec_2 = {{0x1d56b2a8, 0xff7ead09, 0x3199, 0x80000000}};
  // 234236719846471291156262
  s21_decimal dec_check = {{0xc90b726, 0xff7ead09, 0x3199, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_325) {
  // 3523284636654876071
  s21_decimal dec_1 = {{0xba67b5a7, 0x30e538b5, 0x0, 0x0}};
  // 3855592083
  s21_decimal dec_2 = {{0xe5cfaa93, 0x0, 0x0, 0x0}};
  // 3523284632799283988
  s21_decimal dec_check = {{0xd4980b14, 0x30e538b4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_326) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 6651919850393758.2021569
  s21_decimal dec_2 = {{0x4f13bbc1, 0x3526d83, 0xe16, 0x70000}};
  // -6651919850393765.2021569
  s21_decimal dec_check = {{0x533fd941, 0x3526d83, 0xe16, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_327) {
  // 56470783092680277366
  s21_decimal dec_1 = {{0x1b57bd76, 0xfb08607, 0x3, 0x0}};
  // 759738
  s21_decimal dec_2 = {{0xb97ba, 0x0, 0x0, 0x0}};
  // 56470783092679517628
  s21_decimal dec_check = {{0x1b4c25bc, 0xfb08607, 0x3, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_328) {
  // -0.49776594211
  s21_decimal dec_1 = {{0x96ea8d23, 0xb, 0x0, 0x800b0000}};
  // -9320936021.0952604161509
  s21_decimal dec_2 = {{0x7af115e5, 0xe3b90381, 0x13bc, 0x800d0000}};
  // 9320936020.5974944740409
  s21_decimal dec_check = {{0x8751f439, 0xe3b8fefa, 0x13bc, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_329) {
  // 6482139391857380528407498
  s21_decimal dec_1 = {{0xf38ec3ca, 0x7b0557e0, 0x55ca5, 0x0}};
  // -818521
  s21_decimal dec_2 = {{0xc7d59, 0x0, 0x0, 0x80000000}};
  // 6482139391857380529226019
  s21_decimal dec_check = {{0xf39b4123, 0x7b0557e0, 0x55ca5, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_330) {
  // -31035301201.248065
  s21_decimal dec_1 = {{0x2798ff41, 0x6e4271, 0x0, 0x80060000}};
  // 79
  s21_decimal dec_2 = {{0x4f, 0x0, 0x0, 0x0}};
  // -31035301280.248065
  s21_decimal dec_check = {{0x2c4e7101, 0x6e4271, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_331) {
  // -2780471221413019848.94385
  s21_decimal dec_1 = {{0x72529db1, 0xf6f62eb9, 0x3ae0, 0x80050000}};
  // -3455835653209794355503256
  s21_decimal dec_2 = {{0x68e9a098, 0x39e4d84b, 0x2dbcd, 0x80000000}};
  // 3455832872738572942483407.0562
  s21_decimal dec_check = {{0x9aa28822, 0x2f5b969f, 0x6fa9fac2, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_332) {
  // 9309880.2
  s21_decimal dec_1 = {{0x58c9332, 0x0, 0x0, 0x10000}};
  // 607217.0149529980343074837
  s21_decimal dec_2 = {{0x1d06c015, 0xde3d3f, 0x505d5, 0x130000}};
  // 8702663.1850470019656925163
  s21_decimal dec_check = {{0x813feb, 0x2a7319a6, 0x47fc9b, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_333) {
  // -42732429671955005427866.7269
  s21_decimal dec_1 = {{0x20849c05, 0x8aff5979, 0x1617970, 0x80040000}};
  // -69063432485949365
  s21_decimal dec_2 = {{0x704b4fb5, 0xf55cd3, 0x0, 0x80000000}};
  // -42732360608522519478501.7269
  s21_decimal dec_check = {{0xa2ab0db5, 0x1a855626, 0x161794b, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_334) {
  // 14240681715574783374657734013
  s21_decimal dec_1 = {{0x7132457d, 0xaf5eb7ac, 0x2e039da6, 0x0}};
  // 12517.0
  s21_decimal dec_2 = {{0x1e8f2, 0x0, 0x0, 0x10000}};
  // 14240681715574783374657721496
  s21_decimal dec_check = {{0x71321498, 0xaf5eb7ac, 0x2e039da6, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_336) {
  // 12455
  s21_decimal dec_1 = {{0x30a7, 0x0, 0x0, 0x0}};
  // -54208354667806252266142.38365
  s21_decimal dec_2 = {{0x7af4ec9d, 0x7d0e6cfa, 0x1184028f, 0x80050000}};
  // 54208354667806252278597.38365
  s21_decimal dec_check = {{0xc531befd, 0x7d0e6cfa, 0x1184028f, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_337) {
  // 965807370.1184376725381336
  s21_decimal dec_1 = {{0x5c8920d8, 0x39750fa5, 0x7fd2d, 0x100000}};
  // 62214200.786487414596
  s21_decimal dec_2 = {{0x87690f44, 0x5f653dfd, 0x3, 0xc0000}};
  // 903593169.3319502579421336
  s21_decimal dec_check = {{0xe4a4d098, 0xd6af902b, 0x7796e, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_338) {
  // -6402992362577007282
  s21_decimal dec_1 = {{0x16f112b2, 0x58dbffa1, 0x0, 0x80000000}};
  // 27083.30287
  s21_decimal dec_2 = {{0xa16dd72f, 0x0, 0x0, 0x50000}};
  // -6402992362577034365.30287
  s21_decimal dec_check = {{0x3a94b26f, 0xb0ef2da2, 0x8796, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_339) {
  // -881639797
  s21_decimal dec_1 = {{0x348cc175, 0x0, 0x0, 0x80000000}};
  // -130
  s21_decimal dec_2 = {{0x82, 0x0, 0x0, 0x80000000}};
  // -881639667
  s21_decimal dec_check = {{0x348cc0f3, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_340) {
  // 276329242233341508510498747
  s21_decimal dec_1 = {{0x8a473fbb, 0x3ccef82e, 0xe492fe, 0x0}};
  // -556.67010
  s21_decimal dec_2 = {{0x3516942, 0x0, 0x0, 0x80050000}};
  // 276329242233341508510499303.67
  s21_decimal dec_check = {{0x3d5be7f, 0xc0d8f22e, 0x59496b4f, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_341) {
  // -107.931722928
  s21_decimal dec_1 = {{0x213b64b0, 0x19, 0x0, 0x80090000}};
  // 3643.0744582559
  s21_decimal dec_2 = {{0x3196f99f, 0x2122, 0x0, 0xa0000}};
  // -3751.0061811839
  s21_decimal dec_check = {{0x7de8e87f, 0x221d, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_342) {
  // -381389797728597865
  s21_decimal dec_1 = {{0x16923769, 0x54af800, 0x0, 0x80000000}};
  // 70383191468815525
  s21_decimal dec_2 = {{0xc5a834a5, 0xfa0d23, 0x0, 0x0}};
  // -451772989197413390
  s21_decimal dec_check = {{0xdc3a6c0e, 0x6450523, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_343) {
  // -754208.5
  s21_decimal dec_1 = {{0x731545, 0x0, 0x0, 0x80010000}};
  // -5164875528516095560
  s21_decimal dec_2 = {{0xb24f4e48, 0x47ad52ed, 0x0, 0x80000000}};
  // 5164875528515341351.5
  s21_decimal dec_check = {{0xf6a5f98b, 0xccc53d48, 0x2, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_344) {
  // 62986159826284987474228
  s21_decimal dec_1 = {{0x705ae134, 0x7c8f9707, 0xd56, 0x0}};
  // -541675624355822549233465
  s21_decimal dec_2 = {{0xdd4a6f39, 0x4b601f29, 0x72b4, 0x80000000}};
  // 604661784182107536707693
  s21_decimal dec_check = {{0x4da5506d, 0xc7efb631, 0x800a, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_345) {
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -506102898.06
  s21_decimal dec_2 = {{0xc89bbc8e, 0xb, 0x0, 0x80020000}};
  // 506102900.06
  s21_decimal dec_check = {{0xc89bbd56, 0xb, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_346) {
  // -8770.59
  s21_decimal dec_1 = {{0xd6203, 0x0, 0x0, 0x80020000}};
  // 193797047462614948289
  s21_decimal dec_2 = {{0xf0ae59c1, 0x81796be2, 0xa, 0x0}};
  // -193797047462614957059.59
  s21_decimal dec_check = {{0x4287167, 0x936e24a6, 0x41a, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_347) {
  // -5083817
  s21_decimal dec_1 = {{0x4d92a9, 0x0, 0x0, 0x80000000}};
  // -13233097198339508372135462
  s21_decimal dec_2 = {{0x9ef65e26, 0xa2f56ff6, 0xaf237, 0x80000000}};
  // 13233097198339508367051645
  s21_decimal dec_check = {{0x9ea8cb7d, 0xa2f56ff6, 0xaf237, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_348) {
  // 80.0092
  s21_decimal dec_1 = {{0xc355c, 0x0, 0x0, 0x40000}};
  // -6150272977278215
  s21_decimal dec_2 = {{0x4151507, 0x15d9a4, 0x0, 0x80000000}};
  // 6150272977278295.0092
  s21_decimal dec_check = {{0x779196cc, 0x558596df, 0x3, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_349) {
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // 8400.78063562889132
  s21_decimal dec_2 = {{0x424397ac, 0xba88e8c, 0x0, 0xe0000}};
  // -8404.78063562889132
  s21_decimal dec_check = {{0x842c97ac, 0xba9fa58, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_350) {
  // 93
  s21_decimal dec_1 = {{0x5d, 0x0, 0x0, 0x0}};
  // -5659617
  s21_decimal dec_2 = {{0x565be1, 0x0, 0x0, 0x80000000}};
  // 5659710
  s21_decimal dec_check = {{0x565c3e, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_351) {
  // 96832105.948731022737700864
  s21_decimal dec_1 = {{0x3db07800, 0xfb571db6, 0x5018fe, 0x120000}};
  // -634115230
  s21_decimal dec_2 = {{0x25cbd49e, 0x0, 0x0, 0x80000000}};
  // 730947335.948731022737700864
  s21_decimal dec_check = {{0x5d687800, 0x7afbd782, 0x25ca01e, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_352) {
  // -75998520267086.8
  s21_decimal dec_1 = {{0xd80a2d14, 0x2b333, 0x0, 0x80010000}};
  // -4487151980981224019.3374526
  s21_decimal dec_2 = {{0x9999493e, 0xf688e339, 0x251de9, 0x80070000}};
  // 4487075982460956932.5374526
  s21_decimal dec_check = {{0x5342dc3e, 0xc39f0ff8, 0x251dc0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_353) {
  // -2242339.6102858905484
  s21_decimal dec_1 = {{0x88c8978c, 0x372fe7f3, 0x1, 0x800d0000}};
  // -20
  s21_decimal dec_2 = {{0x14, 0x0, 0x0, 0x80000000}};
  // -2242319.6102858905484
  s21_decimal dec_check = {{0x67d4178c, 0x372f320d, 0x1, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_354) {
  // -23
  s21_decimal dec_1 = {{0x17, 0x0, 0x0, 0x80000000}};
  // -730611840537467693966656845
  s21_decimal dec_2 = {{0xd321854d, 0x3cdb1261, 0x25c5913, 0x80000000}};
  // 730611840537467693966656822
  s21_decimal dec_check = {{0xd3218536, 0x3cdb1261, 0x25c5913, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_355) {
  // 838011374
  s21_decimal dec_1 = {{0x31f309ee, 0x0, 0x0, 0x0}};
  // 113379406909175720268752719
  s21_decimal dec_2 = {{0x457f674f, 0xf6dc8440, 0x5dc905, 0x0}};
  // -113379406909175719430741345
  s21_decimal dec_check = {{0x138c5d61, 0xf6dc8440, 0x5dc905, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_356) {
  // 3846744545099995282876049098
  s21_decimal dec_1 = {{0x35eea6ca, 0xa3c3f6b5, 0xc6df3d7, 0x0}};
  // -348540925.823575201589750
  s21_decimal dec_2 = {{0xa502a9f6, 0x7102cb92, 0x49ce, 0x800f0000}};
  // 3846744545099995283224590023.8
  s21_decimal dec_check = {{0xeb11a3ce, 0x65a7a314, 0x7c4b866c, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_357) {
  // -9482054
  s21_decimal dec_1 = {{0x90af46, 0x0, 0x0, 0x80000000}};
  // 0.510908906
  s21_decimal dec_2 = {{0x1e73d9ea, 0x0, 0x0, 0x90000}};
  // -9482054.510908906
  s21_decimal dec_check = {{0xdadd15ea, 0x21afe0, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_358) {
  // 257562
  s21_decimal dec_1 = {{0x3ee1a, 0x0, 0x0, 0x0}};
  // 9480.386694254
  s21_decimal dec_2 = {{0x5314cc6e, 0x89f, 0x0, 0x90000}};
  // 248081.613305746
  s21_decimal dec_check = {{0x6fb792, 0xe1a1, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_359) {
  // 51906924
  s21_decimal dec_1 = {{0x318096c, 0x0, 0x0, 0x0}};
  // 62232181030010646777
  s21_decimal dec_2 = {{0x339670f9, 0x5fa51eed, 0x3, 0x0}};
  // -62232181029958739853
  s21_decimal dec_check = {{0x307e678d, 0x5fa51eed, 0x3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_360) {
  // 43603824454813
  s21_decimal dec_1 = {{0x4e77ac9d, 0x27a8, 0x0, 0x0}};
  // -65805266040283065992316538
  s21_decimal dec_2 = {{0xaf7867a, 0x9ebe6b73, 0x366ece, 0x80000000}};
  // 65805266040326669816771351
  s21_decimal dec_check = {{0x596f3317, 0x9ebe931b, 0x366ece, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_361) {
  // 116675736722.3524046367225016
  s21_decimal dec_1 = {{0x2bf5f4b8, 0x9d8845eb, 0x3c51e7b, 0x100000}};
  // -3016339437
  s21_decimal dec_2 = {{0xb3c9afed, 0x0, 0x0, 0x80000000}};
  // 119692076159.3524046367225016
  s21_decimal dec_check = {{0x90a2f4b8, 0x8029a04a, 0x3de11d4, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_362) {
  // 0.5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x10000}};
  // -518109939285.961167615611723
  s21_decimal dec_2 = {{0x4334d34b, 0x1687bb35, 0x1ac920c, 0x800f0000}};
  // 518109939286.461167615611723
  s21_decimal dec_check = {{0x9598134b, 0x168981f4, 0x1ac920c, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_363) {
  // -6596686400
  s21_decimal dec_1 = {{0x89317240, 0x1, 0x0, 0x80000000}};
  // -186130988122253405159692720
  s21_decimal dec_2 = {{0x105019b0, 0x159e954f, 0x99f6c5, 0x80000000}};
  // 186130988122253398563006320
  s21_decimal dec_check = {{0x871ea770, 0x159e954d, 0x99f6c5, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_364) {
  // 208.5
  s21_decimal dec_1 = {{0x825, 0x0, 0x0, 0x10000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 215.5
  s21_decimal dec_check = {{0x86b, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_365) {
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // -0.2266688036
  s21_decimal dec_2 = {{0x871aea24, 0x0, 0x0, 0x800a0000}};
  // 5.2266688036
  s21_decimal dec_check = {{0x2b565e24, 0xc, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_366) {
  // -5549.5
  s21_decimal dec_1 = {{0xd8c7, 0x0, 0x0, 0x80010000}};
  // -0.82
  s21_decimal dec_2 = {{0x52, 0x0, 0x0, 0x80020000}};
  // -5548.68
  s21_decimal dec_check = {{0x87774, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_367) {
  // 419551403896
  s21_decimal dec_1 = {{0xaf365f78, 0x61, 0x0, 0x0}};
  // -38574447953889140606778523
  s21_decimal dec_2 = {{0xed543c9b, 0x381f5be, 0x1fe875, 0x80000000}};
  // 38574447953889560158182419
  s21_decimal dec_check = {{0x9c8a9c13, 0x381f620, 0x1fe875, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_368) {
  // -46459944305408910333
  s21_decimal dec_1 = {{0xc054a3fd, 0x84c2e130, 0x2, 0x80000000}};
  // -4724484018961143724800
  s21_decimal dec_2 = {{0x24d67b00, 0x1d62ffdb, 0x100, 0x80000000}};
  // 4678024074655734814467
  s21_decimal dec_check = {{0x6481d703, 0x98a01eaa, 0xfd, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_369) {
  // 1567513.968052328109553527
  s21_decimal dec_1 = {{0xc9b9b777, 0x1a3c02a6, 0x14bef, 0x120000}};
  // -4682.271849239
  s21_decimal dec_2 = {{0x2d267b17, 0x442, 0x0, 0x80090000}};
  // 1572196.239901567109553527
  s21_decimal dec_check = {{0x7fafdd77, 0xedcf41cb, 0x14cec, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_370) {
  // 8541606769107.59
  s21_decimal dec_1 = {{0xc7ba76a7, 0x308da, 0x0, 0x20000}};
  // 21.142
  s21_decimal dec_2 = {{0x5296, 0x0, 0x0, 0x30000}};
  // 8541606769086.448
  s21_decimal dec_check = {{0xcd484ff0, 0x1e588b, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_371) {
  // 139682
  s21_decimal dec_1 = {{0x221a2, 0x0, 0x0, 0x0}};
  // 614217.5568500
  s21_decimal dec_2 = {{0x16316274, 0x596, 0x0, 0x70000}};
  // -474535.5568500
  s21_decimal dec_check = {{0xdd3ba574, 0x450, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_372) {
  // -33947791456607004952
  s21_decimal dec_1 = {{0x7819e918, 0xd71ec877, 0x1, 0x80000000}};
  // -8208576956
  s21_decimal dec_2 = {{0xe944f1bc, 0x1, 0x0, 0x80000000}};
  // -33947791448398427996
  s21_decimal dec_check = {{0x8ed4f75c, 0xd71ec875, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_373) {
  // -78094879473919
  s21_decimal dec_1 = {{0xe18cc0ff, 0x4706, 0x0, 0x80000000}};
  // -0.47377
  s21_decimal dec_2 = {{0xb911, 0x0, 0x0, 0x80050000}};
  // -78094879473918.52623
  s21_decimal dec_check = {{0x65fc604f, 0x6c60dfe9, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_374) {
  // -19459476675.977
  s21_decimal dec_1 = {{0xc331dd89, 0x11b2, 0x0, 0x80030000}};
  // 71
  s21_decimal dec_2 = {{0x47, 0x0, 0x0, 0x0}};
  // -19459476746.977
  s21_decimal dec_check = {{0xc332f2e1, 0x11b2, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_375) {
  // -497407
  s21_decimal dec_1 = {{0x796ff, 0x0, 0x0, 0x80000000}};
  // 673556.925233341
  s21_decimal dec_2 = {{0xb143b8bd, 0x26498, 0x0, 0x90000}};
  // -1170963.925233341
  s21_decimal dec_check = {{0x48ceeebd, 0x428fc, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_376) {
  // -693
  s21_decimal dec_1 = {{0x2b5, 0x0, 0x0, 0x80000000}};
  // 7286171107
  s21_decimal dec_2 = {{0xb24a25e3, 0x1, 0x0, 0x0}};
  // -7286171800
  s21_decimal dec_check = {{0xb24a2898, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_377) {
  // -229.04520565394
  s21_decimal dec_1 = {{0xdfcfe292, 0x14d4, 0x0, 0x800b0000}};
  // 2575.17
  s21_decimal dec_2 = {{0x3eded, 0x0, 0x0, 0x20000}};
  // -2804.21520565394
  s21_decimal dec_check = {{0xb91ee492, 0xff0a, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_378) {
  // -3559
  s21_decimal dec_1 = {{0xde7, 0x0, 0x0, 0x80000000}};
  // -3065438008.76044631
  s21_decimal dec_2 = {{0x77509157, 0x4410ff6, 0x0, 0x80080000}};
  // 3065434449.76044631
  s21_decimal dec_check = {{0x9a058a57, 0x4410fa3, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_379) {
  // -6716935337
  s21_decimal dec_1 = {{0x905c4ca9, 0x1, 0x0, 0x80000000}};
  // 9420666730747616642403932
  s21_decimal dec_2 = {{0x50170e5c, 0x5de5bf73, 0x7cae7, 0x0}};
  // -9420666730747623359339269
  s21_decimal dec_check = {{0xe0735b05, 0x5de5bf74, 0x7cae7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_381) {
  // -44210159.977715
  s21_decimal dec_1 = {{0x7ae184f3, 0x2835, 0x0, 0x80060000}};
  // -99720117788.774389432716595
  s21_decimal dec_2 = {{0xafc40d33, 0x6ad7c6a3, 0x527c8e, 0x800f0000}};
  // 99675907628.796674432716595
  s21_decimal dec_check = {{0xc1ae4f33, 0xc79fae5f, 0x527331, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_382) {
  // -8583623353.4564645724779415578
  s21_decimal dec_1 = {{0x1fa3881a, 0xceb2165d, 0x155a1177, 0x80130000}};
  // 73.58718208669444980486627385
  s21_decimal dec_2 = {{0x9692e039, 0x6d6a4191, 0x17c6fd31, 0x1a0000}};
  // -8583623427.0436466591723913627
  s21_decimal dec_check = {{0x317b100b, 0xfdafb643, 0xd584b03c, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_384) {
  // 535.612
  s21_decimal dec_1 = {{0x82c3c, 0x0, 0x0, 0x30000}};
  // 9805266481
  s21_decimal dec_2 = {{0x48707e31, 0x2, 0x0, 0x0}};
  // -9805265945.388
  s21_decimal dec_check = {{0xf764c32c, 0x8ea, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_385) {
  // -5267337918626224
  s21_decimal dec_1 = {{0xad8d39b0, 0x12b69d, 0x0, 0x80000000}};
  // 5211044
  s21_decimal dec_2 = {{0x4f83a4, 0x0, 0x0, 0x0}};
  // -5267337923837268
  s21_decimal dec_check = {{0xaddcbd54, 0x12b69d, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_386) {
  // 89998912936538200
  s21_decimal dec_1 = {{0xd3c0f058, 0x13fbd88, 0x0, 0x0}};
  // -62165823976580657271796
  s21_decimal dec_2 = {{0x6f8553f4, 0x41d320c, 0xd2a, 0x80000000}};
  // 62165913975493593809996
  s21_decimal dec_check = {{0x4346444c, 0x55cef95, 0xd2a, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_387) {
  // -48792
  s21_decimal dec_1 = {{0xbe98, 0x0, 0x0, 0x80000000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -48792
  s21_decimal dec_check = {{0xbe98, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_388) {
  // -0.6175047634
  s21_decimal dec_1 = {{0x700fbfd2, 0x1, 0x0, 0x800a0000}};
  // -485854025259154128961302
  s21_decimal dec_2 = {{0x49e6ff16, 0x33117040, 0x66e2, 0x80000000}};
  // 485854025259154128961301.38250
  s21_decimal dec_check = {{0x18fa008a, 0x7be818c4, 0x9cfce72c, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_389) {
  // 79829317384634873.992564
  s21_decimal dec_1 = {{0x9508d574, 0x8e53d779, 0x10e7, 0x60000}};
  // -790344636393
  s21_decimal dec_2 = {{0x43617e9, 0xb8, 0x0, 0x80000000}};
  // 79830107729271266.992564
  s21_decimal dec_check = {{0xfb5fe1b4, 0x994bb5bb, 0x10e7, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_390) {
  // 378129843943423.7952145901
  s21_decimal dec_1 = {{0x62d039ed, 0x996167ae, 0x320b8, 0xa0000}};
  // 115782.275508609
  s21_decimal dec_2 = {{0xa9672981, 0x694d, 0x0, 0x90000}};
  // 378129843827641.5197059811
  s21_decimal dec_check = {{0xc4c89ae3, 0x995d4aa5, 0x320b8, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_391) {
  // -9798620515261
  s21_decimal dec_1 = {{0x6b4b8bbd, 0x8e9, 0x0, 0x80000000}};
  // 690317527.2000
  s21_decimal dec_2 = {{0x454f5640, 0x647, 0x0, 0x40000}};
  // -9799310832788.2000
  s21_decimal dec_check = {{0x7c51dd10, 0x15c2436, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_392) {
  // -53481039.325
  s21_decimal dec_1 = {{0x73b7e5dd, 0xc, 0x0, 0x80030000}};
  // -6297602068084514.6
  s21_decimal dec_2 = {{0x6e0ca75a, 0xdfbc5b, 0x0, 0x80010000}};
  // 6297602014603475.275
  s21_decimal dec_check = {{0x8939794b, 0x576593aa, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_393) {
  // 227976248.977
  s21_decimal dec_1 = {{0x14717e91, 0x35, 0x0, 0x30000}};
  // -56729160058366288
  s21_decimal dec_2 = {{0xd9af6950, 0xc98ade, 0x0, 0x80000000}};
  // 56729160286342536.977
  s21_decimal dec_check = {{0x69a4df11, 0x134676b7, 0x3, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_394) {
  // -2051035373833673397149
  s21_decimal dec_1 = {{0x8c9e539d, 0x2fd56da6, 0x6f, 0x80000000}};
  // 332
  s21_decimal dec_2 = {{0x14c, 0x0, 0x0, 0x0}};
  // -2051035373833673397481
  s21_decimal dec_check = {{0x8c9e54e9, 0x2fd56da6, 0x6f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_395) {
  // 6316787736919.121078053
  s21_decimal dec_1 = {{0xbfdc2725, 0x6f0a32f3, 0x156, 0x90000}};
  // -1879413.6319361711800
  s21_decimal dec_2 = {{0x27d27eb8, 0x4d22f68, 0x1, 0x800d0000}};
  // 6316789616332.7530142241800
  s21_decimal dec_check = {{0xaf8b9408, 0x833880de, 0x344052, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_396) {
  // 383268137682607382314
  s21_decimal dec_1 = {{0xa9519f2a, 0xc6e9f494, 0x14, 0x0}};
  // -89372247845462051374
  s21_decimal dec_2 = {{0xa6ef8a2e, 0xd84a01e6, 0x4, 0x80000000}};
  // 472640385528069433688
  s21_decimal dec_check = {{0x50412958, 0x9f33f67b, 0x19, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_397) {
  // -88012102524484103602357
  s21_decimal dec_1 = {{0xff7680b5, 0x254889e9, 0x12a3, 0x80000000}};
  // -470
  s21_decimal dec_2 = {{0x1d6, 0x0, 0x0, 0x80000000}};
  // -88012102524484103601887
  s21_decimal dec_check = {{0xff767edf, 0x254889e9, 0x12a3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_398) {
  // -31.56
  s21_decimal dec_1 = {{0xc54, 0x0, 0x0, 0x80020000}};
  // 941519393514060525052.11890161
  s21_decimal dec_2 = {{0x634be9f1, 0x6d07723b, 0x3038a8ab, 0x80000}};
  // -941519393514060525083.67890161
  s21_decimal dec_check = {{0x1f68a6f1, 0x6d07723c, 0x3038a8ab, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_399) {
  // -907579.918499453196
  s21_decimal dec_1 = {{0x9770190c, 0xc985f20, 0x0, 0x800c0000}};
  // 445859833182737505.4788855502
  s21_decimal dec_2 = {{0xaec186ce, 0xe16035cf, 0xe6810eb, 0xa0000}};
  // -445859833183645085.39738500340
  s21_decimal dec_check = {{0x7c4dacf4, 0xcf048a06, 0x9010a936, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_400) {
  // -6388019.7214
  s21_decimal dec_1 = {{0xdf8e745e, 0xe, 0x0, 0x80040000}};
  // 3202624720
  s21_decimal dec_2 = {{0xbee42cd0, 0x0, 0x0, 0x0}};
  // -3209012739.7214
  s21_decimal dec_check = {{0x90a4f15e, 0x1d2f, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_401) {
  // 21691.9303927
  s21_decimal dec_1 = {{0x8165e6f7, 0x32, 0x0, 0x70000}};
  // 4674.8799
  s21_decimal dec_2 = {{0x2c9547f, 0x0, 0x0, 0x40000}};
  // 17017.0504927
  s21_decimal dec_check = {{0x9ef3d6df, 0x27, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_402) {
  // 586646614387621448
  s21_decimal dec_1 = {{0xd3427e48, 0x8242ffc, 0x0, 0x0}};
  // 89702091762.642957
  s21_decimal dec_2 = {{0xc31f300d, 0x13eaf93, 0x0, 0x60000}};
  // 586646524685529685.357043
  s21_decimal dec_check = {{0x9846f1f3, 0x2bfcdefd, 0x7c3a, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_403) {
  // 30541352101003
  s21_decimal dec_1 = {{0xf671648b, 0x1bc6, 0x0, 0x0}};
  // 32.681810818842
  s21_decimal dec_2 = {{0x53b9771a, 0x1db9, 0x0, 0xc0000}};
  // 30541352100970.318189181158
  s21_decimal dec_check = {{0xac2638e6, 0x3d22dfe, 0x194362, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_404) {
  // -2148690188687336
  s21_decimal dec_1 = {{0xeb6dd7e8, 0x7a238, 0x0, 0x80000000}};
  // 64754456214297351
  s21_decimal dec_2 = {{0xb846db07, 0xe60dd5, 0x0, 0x0}};
  // -66903146402984687
  s21_decimal dec_check = {{0xa3b4b2ef, 0xedb00e, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_405) {
  // -0.405152
  s21_decimal dec_1 = {{0x62ea0, 0x0, 0x0, 0x80060000}};
  // 59489133836.55916816
  s21_decimal dec_2 = {{0x2860c510, 0x528ec934, 0x0, 0x80000}};
  // -59489133836.96432016
  s21_decimal dec_check = {{0x2acafb90, 0x528ec934, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_406) {
  // -226423365497.2039235087475664
  s21_decimal dec_1 = {{0xdc39a3d0, 0x63039e1d, 0x750ee20, 0x80100000}};
  // -86.1394733163257098679808
  s21_decimal dec_2 = {{0x6dc43600, 0x4d535b16, 0xb668, 0x80160000}};
  // -226423365411.06445019242185653
  s21_decimal dec_check = {{0xfa5e43b5, 0x669949b4, 0x49294d43, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_407) {
  // -939251336500829284440162
  s21_decimal dec_1 = {{0x600b9862, 0xeabf04a5, 0xc6e4, 0x80000000}};
  // 516.58912654507
  s21_decimal dec_2 = {{0xc72364ab, 0x2efb, 0x0, 0xb0000}};
  // -939251336500829284440678.58913
  s21_decimal dec_check = {{0xc53f4763, 0xc5a57bf7, 0x1e594e11, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_408) {
  // 27
  s21_decimal dec_1 = {{0x1b, 0x0, 0x0, 0x0}};
  // 0.04619524
  s21_decimal dec_2 = {{0x467d04, 0x0, 0x0, 0x80000}};
  // 26.95380476
  s21_decimal dec_check = {{0xa0a83dfc, 0x0, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_409) {
  // -842054259732.998093730
  s21_decimal dec_1 = {{0x1ddd7ba2, 0xa5d9afd5, 0x2d, 0x80090000}};
  // 0.69
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x20000}};
  // -842054259733.688093730
  s21_decimal dec_check = {{0x46fe0c22, 0xa5d9afd5, 0x2d, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_410) {
  // 99500907460629207674
  s21_decimal dec_1 = {{0x33d19a7a, 0x64da3c28, 0x5, 0x0}};
  // -64204761749776603184288186.32
  s21_decimal dec_2 = {{0x8269ecc8, 0xdd77da30, 0x14bee4b6, 0x80020000}};
  // 64204861250684063813495860.32
  s21_decimal dec_check = {{0xc04a4470, 0x42b759e4, 0x14bee6d2, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_411) {
  // -79228162514264337592324062387
  s21_decimal dec_1 = {{0xb749fcb3, 0xffffffff, 0xffffffff, 0x80000000}};
  // 74005.8140204485835
  s21_decimal dec_2 = {{0x20064ccb, 0xa4536f5, 0x0, 0xd0000}};
  // -79228162514264337592324136393
  s21_decimal dec_check = {{0xb74b1dc9, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_412) {
  // 1422450450374490539662
  s21_decimal dec_1 = {{0x6deb468e, 0x1c772c26, 0x4d, 0x0}};
  // 552457512733
  s21_decimal dec_2 = {{0xa108a71d, 0x80, 0x0, 0x0}};
  // 1422450449822033026929
  s21_decimal dec_check = {{0xcce29f71, 0x1c772ba5, 0x4d, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_413) {
  // 84854123.3333635504102248489
  s21_decimal dec_1 = {{0x4c9d1029, 0x6e62a789, 0x2bde598, 0x130000}};
  // 71220234859.773430856904437638
  s21_decimal dec_2 = {{0x1ae96f86, 0xfea5580f, 0xe61fff5b, 0x120000}};
  // -71135380736.440067306494212789
  s21_decimal dec_check = {{0x2cd9bab5, 0xc068474e, 0xe5d9cecc, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_414) {
  // 44396203367203690.6470
  s21_decimal dec_1 = {{0xbdc575e6, 0x1135fd69, 0x18, 0x40000}};
  // -57237407090262047415526
  s21_decimal dec_2 = {{0x460f5ce6, 0xd8971bd0, 0xc1e, 0x80000000}};
  // 57237451486465414619216.6470
  s21_decimal dec_check = {{0x75e24e46, 0x9fe4751a, 0x1d97504, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_415) {
  // 9.2
  s21_decimal dec_1 = {{0x5c, 0x0, 0x0, 0x10000}};
  // 929653.01316938753704990
  s21_decimal dec_2 = {{0xc8ad041e, 0xa8b9a47a, 0x13af, 0x110000}};
  // -929643.81316938753704990
  s21_decimal dec_check = {{0x9f51041e, 0x9bf5255a, 0x13af, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_416) {
  // -60733894898.514
  s21_decimal dec_1 = {{0xb63b3352, 0x373c, 0x0, 0x80030000}};
  // -928924318649230990
  s21_decimal dec_2 = {{0x44f268e, 0xce433bf, 0x0, 0x80000000}};
  // 928924257915336091.486
  s21_decimal dec_check = {{0x1ef3675e, 0x5b69eaec, 0x32, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_417) {
  // 87085834830.36363968451
  s21_decimal dec_1 = {{0xd080cfc3, 0x17dfa9c4, 0x1d8, 0xb0000}};
  // 13950.30
  s21_decimal dec_2 = {{0x154956, 0x0, 0x0, 0x20000}};
  // 87085820880.06363968451
  s21_decimal dec_check = {{0x14e6f3c3, 0x17dab4ff, 0x1d8, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_418) {
  // -400
  s21_decimal dec_1 = {{0x190, 0x0, 0x0, 0x80000000}};
  // -251.4
  s21_decimal dec_2 = {{0x9d2, 0x0, 0x0, 0x80010000}};
  // -148.6
  s21_decimal dec_check = {{0x5ce, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_419) {
  // 0.342
  s21_decimal dec_1 = {{0x156, 0x0, 0x0, 0x30000}};
  // -54
  s21_decimal dec_2 = {{0x36, 0x0, 0x0, 0x80000000}};
  // 54.342
  s21_decimal dec_check = {{0xd446, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_420) {
  // 985797926967171795251
  s21_decimal dec_1 = {{0x6abec933, 0x70b1c798, 0x35, 0x0}};
  // -7300251788343168
  s21_decimal dec_2 = {{0x529d7780, 0x19ef8a, 0x0, 0x80000000}};
  // 985805227218960138419
  s21_decimal dec_check = {{0xbd5c40b3, 0x70cbb722, 0x35, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_421) {
  // 3913.6867401574
  s21_decimal dec_1 = {{0x43143f66, 0x2398, 0x0, 0xa0000}};
  // -832
  s21_decimal dec_2 = {{0x340, 0x0, 0x0, 0x80000000}};
  // 4745.6867401574
  s21_decimal dec_check = {{0x69b93f66, 0x2b29, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_422) {
  // 830317052.27949252676789907
  s21_decimal dec_1 = {{0x5b61a693, 0xc2797764, 0x44aea5, 0x110000}};
  // 4519457632667
  s21_decimal dec_2 = {{0x44aab19b, 0x41c, 0x0, 0x0}};
  // -4518627315614.7205074732321009
  s21_decimal dec_check = {{0x781e08f1, 0x1ef40f14, 0x92013588, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_423) {
  // 654897
  s21_decimal dec_1 = {{0x9fe31, 0x0, 0x0, 0x0}};
  // -1254
  s21_decimal dec_2 = {{0x4e6, 0x0, 0x0, 0x80000000}};
  // 656151
  s21_decimal dec_check = {{0xa0317, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_424) {
  // 4644086013
  s21_decimal dec_1 = {{0x14cf20fd, 0x1, 0x0, 0x0}};
  // -25067225485.58167
  s21_decimal dec_2 = {{0xd30ea957, 0x8e7d9, 0x0, 0x80050000}};
  // 29711311498.58167
  s21_decimal dec_check = {{0x60c4b577, 0xa8e3a, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_425) {
  // -858869298900
  s21_decimal dec_1 = {{0xf89976d4, 0xc7, 0x0, 0x80000000}};
  // 376727655.08320349528514704
  s21_decimal dec_2 = {{0x893e090, 0xb5dba746, 0x1f2984, 0x110000}};
  // -859246026555.08320349528514704
  s21_decimal dec_check = {{0x1c49300e, 0x586439c1, 0x1bc3843c, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_426) {
  // 780943867593531547327438
  s21_decimal dec_1 = {{0x4a2a1bce, 0xd48c660, 0xa55f, 0x0}};
  // 71351058042771560523719545391
  s21_decimal dec_2 = {{0x58ac922f, 0xf4a30537, 0xe68c363e, 0x0}};
  // -71350277098903966992172217953
  s21_decimal dec_check = {{0xe827661, 0xe75a3ed7, 0xe68b90df, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_427) {
  // -3.26926814267035924378411166
  s21_decimal dec_1 = {{0xb38fe09e, 0x1d152b56, 0x10e6d72, 0x801a0000}};
  // -493399
  s21_decimal dec_2 = {{0x78757, 0x0, 0x0, 0x80000000}};
  // 493395.73073185732964075621589
  s21_decimal dec_check = {{0x3572ccd5, 0xc5d3d298, 0x9f6cbcff, 0x170000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_428) {
  // -3774616
  s21_decimal dec_1 = {{0x399898, 0x0, 0x0, 0x80000000}};
  // -69
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x80000000}};
  // -3774547
  s21_decimal dec_check = {{0x399853, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_429) {
  // -83209
  s21_decimal dec_1 = {{0x14509, 0x0, 0x0, 0x80000000}};
  // -817
  s21_decimal dec_2 = {{0x331, 0x0, 0x0, 0x80000000}};
  // -82392
  s21_decimal dec_check = {{0x141d8, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_430) {
  // -8150573256.97
  s21_decimal dec_1 = {{0xc533ce81, 0xbd, 0x0, 0x80020000}};
  // 55701.61216304394242031
  s21_decimal dec_2 = {{0xf93387ef, 0xf583f23f, 0x12d, 0x110000}};
  // -8150628958.58216304394242031
  s21_decimal dec_check = {{0x3c3a07ef, 0x1ebe3bb4, 0x2a23448, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_431) {
  // -15330.098504727
  s21_decimal dec_1 = {{0x51136417, 0xdf1, 0x0, 0x80090000}};
  // -3.43592605
  s21_decimal dec_2 = {{0x147ace9d, 0x0, 0x0, 0x80080000}};
  // -15326.662578677
  s21_decimal dec_check = {{0x844751f5, 0xdf0, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_432) {
  // -6876
  s21_decimal dec_1 = {{0x1adc, 0x0, 0x0, 0x80000000}};
  // -9323714742313615.34692
  s21_decimal dec_2 = {{0xcb93fae4, 0x8b40e3e5, 0x32, 0x80050000}};
  // 9323714742306739.34692
  s21_decimal dec_check = {{0xa2980964, 0x8b40e3e5, 0x32, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_433) {
  // -80485
  s21_decimal dec_1 = {{0x13a65, 0x0, 0x0, 0x80000000}};
  // -616338586408062
  s21_decimal dec_2 = {{0x8281147e, 0x2308e, 0x0, 0x80000000}};
  // 616338586327577
  s21_decimal dec_check = {{0x827fda19, 0x2308e, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_434) {
  // -894924270859538111
  s21_decimal dec_1 = {{0x1754ebf, 0xc6b68e2, 0x0, 0x80000000}};
  // -2072416138401077903898269128
  s21_decimal dec_2 = {{0x9d0555c8, 0xfa386beb, 0x6b2432f, 0x80000000}};
  // 2072416137506153633038731017
  s21_decimal dec_check = {{0x9b900709, 0xedcd0309, 0x6b2432f, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_435) {
  // -94810056.55563425
  s21_decimal dec_1 = {{0xa6369ca1, 0x21aeec, 0x0, 0x80080000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -94810055.55563425
  s21_decimal dec_check = {{0xa040bba1, 0x21aeec, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_436) {
  // -38
  s21_decimal dec_1 = {{0x26, 0x0, 0x0, 0x80000000}};
  // -368.558630859917916174286646
  s21_decimal dec_2 = {{0x8a67ff36, 0x69d003ca, 0x130dd53, 0x80180000}};
  // 330.558630859917916174286646
  s21_decimal dec_check = {{0xa467ff36, 0x491d9884, 0x1116e83, 0x180000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_437) {
  // 14435.6680558274469294
  s21_decimal dec_1 = {{0x1e7cddae, 0xd359f422, 0x7, 0x100000}};
  // 39315994206282677491374289710
  s21_decimal dec_2 = {{0xd214f32e, 0x980db635, 0x7f096d9c, 0x0}};
  // -39315994206282677491374275274
  s21_decimal dec_check = {{0xd214baca, 0x980db635, 0x7f096d9c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_438) {
  // -156832911825641.7266503
  s21_decimal dec_1 = {{0xbf58db47, 0x4f04fb0, 0x55, 0x80070000}};
  // 482322673697480112240117
  s21_decimal dec_2 = {{0xa13275f5, 0xc3b870cf, 0x6622, 0x0}};
  // -482322673854313024065758.72665
  s21_decimal dec_check = {{0x44fdda99, 0x28c90f94, 0x9bd8cbe6, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_439) {
  // 2682172058297193094.696264
  s21_decimal dec_1 = {{0xcd3fcd48, 0xd6b068af, 0x237f8, 0x60000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 2682172058297193092.696264
  s21_decimal dec_check = {{0xcd2148c8, 0xd6b068af, 0x237f8, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_440) {
  // 20592284560671892848041883048
  s21_decimal dec_1 = {{0xdae975a8, 0xdb2365c3, 0x428989de, 0x0}};
  // 558183696235087
  s21_decimal dec_2 = {{0x44eefa4f, 0x1fbaa, 0x0, 0x0}};
  // 20592284560671334664345647961
  s21_decimal dec_check = {{0x95fa7b59, 0xdb216a19, 0x428989de, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_441) {
  // -0.04885804937934857127
  s21_decimal dec_1 = {{0x7774e3a7, 0x43cdddb4, 0x0, 0x80140000}};
  // -1027043206
  s21_decimal dec_2 = {{0x3d376f86, 0x0, 0x0, 0x80000000}};
  // 1027043205.9511419506206514287
  s21_decimal dec_check = {{0xeeb11c6f, 0x90796ba4, 0x212f8095, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_442) {
  // 55923948151066864405.37
  s21_decimal dec_1 = {{0xda60d459, 0x2a118e8f, 0x12f, 0x20000}};
  // -8602631406529
  s21_decimal dec_2 = {{0xf4ca03c1, 0x7d2, 0x0, 0x80000000}};
  // 55923956753698270934.37
  s21_decimal dec_check = {{0x794a4bbd, 0x2a149cf7, 0x12f, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_443) {
  // -9957860522.1870
  s21_decimal dec_1 = {{0xf36437ee, 0x5a90, 0x0, 0x80040000}};
  // 2.84373
  s21_decimal dec_2 = {{0x456d5, 0x0, 0x0, 0x50000}};
  // -9957860525.03073
  s21_decimal dec_check = {{0x81ee8621, 0x389a9, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_444) {
  // -764971627862768215
  s21_decimal dec_1 = {{0x7e033a57, 0xa9db9a4, 0x0, 0x80000000}};
  // -5.6
  s21_decimal dec_2 = {{0x38, 0x0, 0x0, 0x80010000}};
  // -764971627862768209.4
  s21_decimal dec_check = {{0xec20472e, 0x6a29406c, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_445) {
  // -21617
  s21_decimal dec_1 = {{0x5471, 0x0, 0x0, 0x80000000}};
  // -7379374382302748.357191345047
  s21_decimal dec_2 = {{0x96b12397, 0xd804f8a5, 0x17d8134e, 0x800c0000}};
  // 7379374382281131.357191345047
  s21_decimal dec_check = {{0x90951397, 0xd7b82c19, 0x17d8134e, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_446) {
  // -2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 7246640.8578037510732362379825
  s21_decimal dec_2 = {{0x6817231, 0xa063d27b, 0xea26cee8, 0x160000}};
  // -7246642.8578037510732362379825
  s21_decimal dec_check = {{0x6b017231, 0xd42565f0, 0xea26d324, 0x80160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_447) {
  // 813.59869561
  s21_decimal dec_1 = {{0xf16d1679, 0x12, 0x0, 0x80000}};
  // -244.153788858629654466805814
  s21_decimal dec_2 = {{0xdd8c4036, 0x6a4105dd, 0xc9f593, 0x80180000}};
  // 1057.752484468629654466805814
  s21_decimal dec_check = {{0x45c54036, 0x14a4ea3c, 0x36af3cd, 0x180000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_448) {
  // 739417
  s21_decimal dec_1 = {{0xb4859, 0x0, 0x0, 0x0}};
  // 0.7176592666592850503
  s21_decimal dec_2 = {{0xcdf0b247, 0x63986101, 0x0, 0x130000}};
  // 739416.2823407333407149497
  s21_decimal dec_check = {{0x63b74db9, 0x5eadff53, 0x61dc6, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_449) {
  // 336088415
  s21_decimal dec_1 = {{0x14084d5f, 0x0, 0x0, 0x0}};
  // 734218368347
  s21_decimal dec_2 = {{0xf2d3355b, 0xaa, 0x0, 0x0}};
  // -733882279932
  s21_decimal dec_check = {{0xdecae7fc, 0xaa, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_450) {
  // -798819
  s21_decimal dec_1 = {{0xc3063, 0x0, 0x0, 0x80000000}};
  // -350.324256
  s21_decimal dec_2 = {{0x14e18620, 0x0, 0x0, 0x80060000}};
  // -798468.675744
  s21_decimal dec_check = {{0xe87118a0, 0xb9, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_451) {
  // 424581
  s21_decimal dec_1 = {{0x67a85, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 424581
  s21_decimal dec_check = {{0x67a85, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_452) {
  // 8001863374600143
  s21_decimal dec_1 = {{0xfffbf7cf, 0x1c6da6, 0x0, 0x0}};
  // 3.6986
  s21_decimal dec_2 = {{0x907a, 0x0, 0x0, 0x40000}};
  // 8001863374600139.3014
  s21_decimal dec_check = {{0x627f7576, 0x567b4b6f, 0x4, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_453) {
  // -5.2346
  s21_decimal dec_1 = {{0xcc7a, 0x0, 0x0, 0x80040000}};
  // 58934889975969900.3267
  s21_decimal dec_2 = {{0xc0280783, 0xf2dbe5d3, 0x1f, 0x40000}};
  // -58934889975969905.5613
  s21_decimal dec_check = {{0xc028d3fd, 0xf2dbe5d3, 0x1f, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_454) {
  // -104398
  s21_decimal dec_1 = {{0x197ce, 0x0, 0x0, 0x80000000}};
  // 9.7384829063665
  s21_decimal dec_2 = {{0x2c2491f1, 0x5892, 0x0, 0xd0000}};
  // -104407.7384829063665
  s21_decimal dec_check = {{0x88c151f1, 0xe7d4ed9, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_455) {
  // 90259445.582917401
  s21_decimal dec_1 = {{0xcf97ef19, 0x140aa7c, 0x0, 0x90000}};
  // -0.55409214315757116557
  s21_decimal dec_2 = {{0x7e311c8d, 0xf512d9, 0x3, 0x80140000}};
  // 90259446.13700954415757116557
  s21_decimal dec_check = {{0x6c65c48d, 0xf2071581, 0x1d2a161d, 0x140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_456) {
  // 29972810572.98304705
  s21_decimal dec_1 = {{0xc845cec1, 0x29987b3d, 0x0, 0x80000}};
  // -930750275108
  s21_decimal dec_2 = {{0xb50a1e24, 0xd8, 0x0, 0x80000000}};
  // 960723085680.98304705
  s21_decimal dec_check = {{0x393772c1, 0x354567a1, 0x5, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_457) {
  // 13704661880100306838482991751
  s21_decimal dec_1 = {{0x87323a87, 0x2de02693, 0x2c483b09, 0x0}};
  // -17060538491049105245671665881
  s21_decimal dec_2 = {{0x1ea30d9, 0xc9d49d1b, 0x3720258c, 0x80000000}};
  // 30765200371149412084154657632
  s21_decimal dec_check = {{0x891c6b60, 0xf7b4c3ae, 0x63686095, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_458) {
  // 13400330.661178470907420872
  s21_decimal dec_1 = {{0xc17aa0c8, 0x61786b23, 0xb15a1, 0x120000}};
  // -32550620969521973546807
  s21_decimal dec_2 = {{0xf26bcf37, 0x929c5f32, 0x6e4, 0x80000000}};
  // 32550620969521986947137.661178
  s21_decimal dec_check = {{0x8c8be8fa, 0x8b9f2fbd, 0x692d3e1a, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_459) {
  // 99662231362846350
  s21_decimal dec_1 = {{0x79e7be8e, 0x1621245, 0x0, 0x0}};
  // -536117.9
  s21_decimal dec_2 = {{0x51ce1b, 0x0, 0x0, 0x80010000}};
  // 99662231363382467.9
  s21_decimal dec_check = {{0xc35f3fa7, 0xdd4b6b6, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_460) {
  // -935
  s21_decimal dec_1 = {{0x3a7, 0x0, 0x0, 0x80000000}};
  // 939549215.147736
  s21_decimal dec_2 = {{0xd937c6d8, 0x35683, 0x0, 0x60000}};
  // -939550150.147736
  s21_decimal dec_check = {{0x10f2be98, 0x35684, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_461) {
  // -2.5
  s21_decimal dec_1 = {{0x19, 0x0, 0x0, 0x80010000}};
  // -9970560382194968611
  s21_decimal dec_2 = {{0x60506823, 0x8a5e8bd7, 0x0, 0x80000000}};
  // 9970560382194968608.5
  s21_decimal dec_check = {{0xc3241145, 0x67b17669, 0x5, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_462) {
  // 1097545
  s21_decimal dec_1 = {{0x10bf49, 0x0, 0x0, 0x0}};
  // -603510785359631422.744766812
  s21_decimal dec_2 = {{0xaa29295c, 0x3af2cbaf, 0x1f33661, 0x80090000}};
  // 603510785360728967.744766812
  s21_decimal dec_check = {{0xc602c35c, 0x3af6b1e5, 0x1f33661, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_463) {
  // -5939996659450548919
  s21_decimal dec_1 = {{0x858e92b7, 0x526f1b7d, 0x0, 0x80000000}};
  // -330427.211691460205670856231
  s21_decimal dec_2 = {{0x95a07627, 0x9c828d3, 0x11152af, 0x80150000}};
  // -5939996659450218491.7883085398
  s21_decimal dec_check = {{0x86c2e256, 0x5dc4b86d, 0xbfee8031, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_464) {
  // -905814535810
  s21_decimal dec_1 = {{0xe6c0ee82, 0xd2, 0x0, 0x80000000}};
  // 76147811844459461667125819312
  s21_decimal dec_2 = {{0x268177b0, 0x96c9eea0, 0xf60bfe5f, 0x0}};
  // -76147811844459462572940355122
  s21_decimal dec_check = {{0xd426632, 0x96c9ef73, 0xf60bfe5f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_465) {
  // 79.7653015
  s21_decimal dec_1 = {{0x2f8b3817, 0x0, 0x0, 0x70000}};
  // 9668499280715899.21708
  s21_decimal dec_2 = {{0x9b1803ac, 0x69bcf6fd, 0x34, 0x50000}};
  // -9668499280715819.4517785
  s21_decimal dec_check = {{0x65d63719, 0x4dd07b10, 0x1479, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_466) {
  // 0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x10000}};
  // -755.3511
  s21_decimal dec_2 = {{0x7341e7, 0x0, 0x0, 0x80040000}};
  // 756.0511
  s21_decimal dec_check = {{0x735d3f, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_467) {
  // 723237157072934963759
  s21_decimal dec_1 = {{0xafae8a2f, 0x34ee8a7b, 0x27, 0x0}};
  // -31981
  s21_decimal dec_2 = {{0x7ced, 0x0, 0x0, 0x80000000}};
  // 723237157072934995740
  s21_decimal dec_check = {{0xafaf071c, 0x34ee8a7b, 0x27, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_468) {
  // -26
  s21_decimal dec_1 = {{0x1a, 0x0, 0x0, 0x80000000}};
  // 91986928631091977
  s21_decimal dec_2 = {{0xcd091309, 0x146cd9f, 0x0, 0x0}};
  // -91986928631092003
  s21_decimal dec_check = {{0xcd091323, 0x146cd9f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_469) {
  // -860726775162
  s21_decimal dec_1 = {{0x67504d7a, 0xc8, 0x0, 0x80000000}};
  // -4256461976309245401769543500
  s21_decimal dec_2 = {{0xa445874c, 0x174011e2, 0xdc0dce2, 0x80000000}};
  // 4256461976309244541042768338
  s21_decimal dec_check = {{0x3cf539d2, 0x1740111a, 0xdc0dce2, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_470) {
  // -90
  s21_decimal dec_1 = {{0x5a, 0x0, 0x0, 0x80000000}};
  // -778865
  s21_decimal dec_2 = {{0xbe271, 0x0, 0x0, 0x80000000}};
  // 778775
  s21_decimal dec_check = {{0xbe217, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_471) {
  // -99451925452490247
  s21_decimal dec_1 = {{0xd0d30607, 0x16152ff, 0x0, 0x80000000}};
  // 4035600819796.220619
  s21_decimal dec_2 = {{0x673a9acb, 0x38015590, 0x0, 0x60000}};
  // -99455961053310043.220619
  s21_decimal dec_check = {{0x5df2ea8b, 0x84b945b8, 0x150f, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_472) {
  // -35196258956.73
  s21_decimal dec_1 = {{0x7a0d1ef9, 0x333, 0x0, 0x80020000}};
  // 5054036114194946174149
  s21_decimal dec_2 = {{0xe955acc5, 0xfad73c6d, 0x111, 0x0}};
  // -5054036114230142433105.73
  s21_decimal dec_check = {{0x9f849bed, 0xfc139e22, 0x6b05, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_473) {
  // 972
  s21_decimal dec_1 = {{0x3cc, 0x0, 0x0, 0x0}};
  // -229138192
  s21_decimal dec_2 = {{0xda85f10, 0x0, 0x0, 0x80000000}};
  // 229139164
  s21_decimal dec_check = {{0xda862dc, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_474) {
  // -1585865342
  s21_decimal dec_1 = {{0x5e86627e, 0x0, 0x0, 0x80000000}};
  // -501987848212895998522
  s21_decimal dec_2 = {{0xd45fa23a, 0x367b184d, 0x1b, 0x80000000}};
  // 501987848211310133180
  s21_decimal dec_check = {{0x75d93fbc, 0x367b184d, 0x1b, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_475) {
  // -70643498969471
  s21_decimal dec_1 = {{0xf8a9697f, 0x403f, 0x0, 0x80000000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -70643498969465
  s21_decimal dec_check = {{0xf8a96979, 0x403f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_476) {
  // -3937219.1
  s21_decimal dec_1 = {{0x258c59f, 0x0, 0x0, 0x80010000}};
  // -377.93610115
  s21_decimal dec_2 = {{0xccacb983, 0x8, 0x0, 0x80080000}};
  // -3936841.16389885
  s21_decimal dec_check = {{0xb9e93ffd, 0x1660d, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_477) {
  // -84489564440060002216348590
  s21_decimal dec_1 = {{0x6be68bae, 0x774618f9, 0x45e35c, 0x80000000}};
  // 516317291860963.1860330
  s21_decimal dec_2 = {{0x1bf5566a, 0xe56b0dd0, 0x117, 0x70000}};
  // -84489564440576319508209553.186
  s21_decimal dec_check = {{0xe35554b7, 0x98193036, 0x1b4cd01e, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_478) {
  // -5251304073014.5331629
  s21_decimal dec_1 = {{0x6bee99ad, 0xd8c3cc51, 0x2, 0x80070000}};
  // 32629.1303953044691
  s21_decimal dec_2 = {{0x516b94d3, 0x4873836, 0x0, 0xd0000}};
  // -5251304105643.6635582044691
  s21_decimal dec_check = {{0xd1d39a13, 0xa8ec9d5f, 0x2b7011, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_479) {
  // -0.753286971
  s21_decimal dec_1 = {{0x2ce63f3b, 0x0, 0x0, 0x80090000}};
  // 2728.164
  s21_decimal dec_2 = {{0x29a0e4, 0x0, 0x0, 0x30000}};
  // -2728.917286971
  s21_decimal dec_check = {{0x6025403b, 0x27b, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_480) {
  // -17351290428
  s21_decimal dec_1 = {{0xa37ae3c, 0x4, 0x0, 0x80000000}};
  // -7951029.691594124399441543
  s21_decimal dec_2 = {{0x83477687, 0x2ee9e018, 0x693b2, 0x80120000}};
  // -17343339398.308405875600558457
  s21_decimal dec_check = {{0xb0288979, 0xb0a1ec44, 0x380a12f8, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_481) {
  // 7583367713962172.11780
  s21_decimal dec_1 = {{0x94220b84, 0x1c096bbe, 0x29, 0x50000}};
  // -943212181
  s21_decimal dec_2 = {{0x38384695, 0x0, 0x0, 0x80000000}};
  // 7583368657174353.11780
  s21_decimal dec_check = {{0x72d526a4, 0x1c09c187, 0x29, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_482) {
  // -798.7755980665614
  s21_decimal dec_1 = {{0x5dc7b30e, 0x1c60d2, 0x0, 0x800d0000}};
  // 34.256337451
  s21_decimal dec_2 = {{0xf9d63a2b, 0x7, 0x0, 0x90000}};
  // -833.0319355175614
  s21_decimal dec_check = {{0x9e07e2be, 0x1d9861, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_483) {
  // 2217345253656.03
  s21_decimal dec_1 = {{0x979e6d63, 0xc9aa, 0x0, 0x20000}};
  // -73
  s21_decimal dec_2 = {{0x49, 0x0, 0x0, 0x80000000}};
  // 2217345253729.03
  s21_decimal dec_check = {{0x979e89e7, 0xc9aa, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_484) {
  // 1115.4368322717218
  s21_decimal dec_1 = {{0xc191c622, 0x27a0d6, 0x0, 0xd0000}};
  // -53045688965151568991
  s21_decimal dec_2 = {{0xd1b7b45f, 0xe0282510, 0x2, 0x80000000}};
  // 53045688965151570106.436832272
  s21_decimal dec_check = {{0xfb04c10, 0xd9b2c593, 0xab665d90, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_485) {
  // 7679882485568908797100
  s21_decimal dec_1 = {{0x16d3a4ac, 0x53c78edd, 0x1a0, 0x0}};
  // -5492
  s21_decimal dec_2 = {{0x1574, 0x0, 0x0, 0x80000000}};
  // 7679882485568908802592
  s21_decimal dec_check = {{0x16d3ba20, 0x53c78edd, 0x1a0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_486) {
  // 4987494008.7218868282683
  s21_decimal dec_1 = {{0x5a8f653b, 0xb9d5e091, 0xa8f, 0xd0000}};
  // 9061799138522604233474567214
  s21_decimal dec_2 = {{0xa4a5ec2e, 0xa173d9f5, 0x1d47be9b, 0x0}};
  // -9061799138522604228487073205.3
  s21_decimal dec_check = {{0x7b5ecdb5, 0xa173d9f4, 0x1d47be9b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_487) {
  // -974718538862
  s21_decimal dec_1 = {{0xf1c0946e, 0xe2, 0x0, 0x80000000}};
  // 443412066634097890
  s21_decimal dec_2 = {{0xe0d8e4e2, 0x62750ec, 0x0, 0x0}};
  // -443413041352636752
  s21_decimal dec_check = {{0xd2997950, 0x62751cf, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_488) {
  // -8382458570509996752
  s21_decimal dec_1 = {{0x5fad52d0, 0x745479a8, 0x0, 0x80000000}};
  // 19.244651149940015
  s21_decimal dec_2 = {{0x839e552f, 0x445ee8, 0x0, 0xf0000}};
  // -8382458570509996771.2446511499
  s21_decimal dec_check = {{0xff8a328e, 0xa5555bdc, 0x1b15cea5, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_489) {
  // -70.5350
  s21_decimal dec_1 = {{0xac346, 0x0, 0x0, 0x80040000}};
  // 66199235877013.95309813
  s21_decimal dec_2 = {{0xf32244f5, 0xdde51527, 0x166, 0x80000}};
  // -66199235877084.48809813
  s21_decimal dec_check = {{0x978e2355, 0xdde51529, 0x166, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_490) {
  // 56.8843
  s21_decimal dec_1 = {{0x8ae0b, 0x0, 0x0, 0x40000}};
  // 5.85283
  s21_decimal dec_2 = {{0x8ee43, 0x0, 0x0, 0x50000}};
  // 51.03147
  s21_decimal dec_check = {{0x4dde2b, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_491) {
  // 916.3120
  s21_decimal dec_1 = {{0x8bd170, 0x0, 0x0, 0x40000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 922.3120
  s21_decimal dec_check = {{0x8cbbd0, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_492) {
  // -3954917323303567342193999055
  s21_decimal dec_1 = {{0x52dfccf, 0xb241a597, 0xcc76e51, 0x80000000}};
  // 186231532399523613339.4
  s21_decimal dec_2 = {{0x468cea12, 0xf4d12034, 0x64, 0x10000}};
  // -3954917509535099741717612394.4
  s21_decimal dec_check = {{0x7a58ca28, 0xeb61981a, 0x7fca4f95, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_493) {
  // 61934
  s21_decimal dec_1 = {{0xf1ee, 0x0, 0x0, 0x0}};
  // -3472701503416220042023327
  s21_decimal dec_2 = {{0x409a519f, 0x869593ef, 0x2df5f, 0x80000000}};
  // 3472701503416220042085261
  s21_decimal dec_check = {{0x409b438d, 0x869593ef, 0x2df5f, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_494) {
  // 598885688422407
  s21_decimal dec_1 = {{0xf0b83007, 0x220ae, 0x0, 0x0}};
  // -58823308357327
  s21_decimal dec_2 = {{0xde662ecf, 0x357f, 0x0, 0x80000000}};
  // 657708996779734
  s21_decimal dec_check = {{0xcf1e5ed6, 0x2562e, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_495) {
  // 37384.1236
  s21_decimal dec_1 = {{0x16485d54, 0x0, 0x0, 0x40000}};
  // -628179118665887422
  s21_decimal dec_2 = {{0x8765eebe, 0x8b7bd94, 0x0, 0x80000000}};
  // 628179118665924806.1236
  s21_decimal dec_check = {{0x14063b34, 0x895d79e9, 0x154, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_496) {
  // 537.98660
  s21_decimal dec_1 = {{0x334e704, 0x0, 0x0, 0x50000}};
  // -5058543470
  s21_decimal dec_2 = {{0x2d833f6e, 0x1, 0x0, 0x80000000}};
  // 5058544007.98660
  s21_decimal dec_check = {{0x67de1fc4, 0x1cc12, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_497) {
  // 408586031441419051
  s21_decimal dec_1 = {{0xb0409b2b, 0x5ab96d4, 0x0, 0x0}};
  // -9.958665
  s21_decimal dec_2 = {{0x97f509, 0x0, 0x0, 0x80060000}};
  // 408586031441419060.958665
  s21_decimal dec_check = {{0xd044d5c9, 0x7e3ede65, 0x5685, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_498) {
  // 7643474468085.641987
  s21_decimal dec_1 = {{0x28033303, 0x6a131388, 0x0, 0x60000}};
  // 0.99
  s21_decimal dec_2 = {{0x63, 0x0, 0x0, 0x20000}};
  // 7643474468084.651987
  s21_decimal dec_check = {{0x27f417d3, 0x6a131388, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_499) {
  // 685.4965324727866395
  s21_decimal dec_1 = {{0xc806541b, 0x5f21baa4, 0x0, 0x100000}};
  // 8104
  s21_decimal dec_2 = {{0x1fa8, 0x0, 0x0, 0x0}};
  // -7418.5034675272133605
  s21_decimal dec_check = {{0xeda1abe5, 0x5862ffc, 0x4, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_500) {
  // -1284911617845917355521
  s21_decimal dec_1 = {{0x665f8e01, 0xa7bb14ad, 0x45, 0x80000000}};
  // -5163488206498463
  s21_decimal dec_2 = {{0x4859aa9f, 0x12582a, 0x0, 0x80000000}};
  // -1284906454357710857058
  s21_decimal dec_check = {{0x1e05e362, 0xa7a8bc83, 0x45, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_sub_1) {
  // 85070473009104298994055
  s21_decimal dec_1 = {{0xe5bc6987, 0xadf91f18, 0x1203, 0x0}};
  // -79228162514264337591727041917
  s21_decimal dec_2 = {{0x93b42d7d, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // -85070473009104298994055
  s21_decimal dec_1 = {{0xe5bc6987, 0xadf91f18, 0x1203, 0x80000000}};
  // 79228162514264337591727041917
  s21_decimal dec_2 = {{0x93b42d7d, 0xffffffff, 0xffffffff, 0x00000000}};
  s21_decimal result;
  // overflow
  int check = 2;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x00000000}};
  s21_decimal result;

  int check = 2;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_4) {
  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;

  int check = 1;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_5) {
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x00000000}};
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal result;

  int check = 1;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_6) {
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal result;

  int check = 2;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(test_sub3201) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -1.9999999999999999999999999010
  s21_decimal check = {{0x1FFFFC22, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3202) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 1.9999999999999999999999998990
  s21_decimal check = {{0x1FFFFC0E, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3203) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -1.0000000000000000000000000011
  s21_decimal check = {{0x1000000B, 0x3E250261, 0x204FCE5E, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3204) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.9999999999999999999999999991
  s21_decimal check = {{0xFFFFFF7, 0x3E250261, 0x204FCE5E, 0x1C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3205) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3206) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3207) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3208) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3209) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -6148914691236517205.0000000000
  s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3210) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 6148914691236517205.0000000000
  s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3211) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -6148914689804861440.0000000000
  s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3212) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 6148914689804861440.0000000000
  s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3213) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -1431655765.0000000000000000000
  s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x80130000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3214) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 1431655765.0000000000000000000
  s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x130000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3215) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -26409387.504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3216) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 26409387.504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3217) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -26409387.498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3218) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 26409387.498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3219) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -26409387.000000000000000000000
  s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3220) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 26409387.000000000000000000000
  s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3221) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -7.922816251426433759354395034
  s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x801B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3222) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162514264337593543950325
  s21_decimal check = {{0xFFFFFFF5, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3223) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -8.000000000000000000000000001
  s21_decimal check = {{0x40000001, 0xFE8401E7, 0x19D971E4, 0x801B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3224) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 7.999999999999999999999999999
  s21_decimal check = {{0x3FFFFFFF, 0xFE8401E7, 0x19D971E4, 0x1B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3225) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -3.6336660283201536000000000010
  s21_decimal check = {{0x8980000A, 0xFEE8FB1C, 0x7568FB1C, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3226) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 3.6336660283201535999999999990
  s21_decimal check = {{0x897FFFF6, 0xFEE8FB1C, 0x7568FB1C, 0x1C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3227) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3228) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3229) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3230) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3231) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000011
  s21_decimal check = {{0xB, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3232) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000009
  s21_decimal check = {{0x9, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3233) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000020
  s21_decimal check = {{0x14, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3234) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3235) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3236) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3237) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3238) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3239) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3240) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3241) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543949689
  s21_decimal check = {{0xFFFFFD79, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3242) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3243) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543949688
  s21_decimal check = {{0xFFFFFD78, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3244) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3245) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -7922816251426433759354394386.7
  s21_decimal check = {{0xFFFFE6BB, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3246) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251426433759354395679
  s21_decimal check = {{0x99999C1F, 0x99999999, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3247) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354394387.2
  s21_decimal check = {{0xFFFFE6C0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3248) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395680
  s21_decimal check = {{0x99999C20, 0x99999999, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3249) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -7922816251426433759354394387.7
  s21_decimal check = {{0xFFFFE6C5, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3250) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251426433759354395680
  s21_decimal check = {{0x99999C20, 0x99999999, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3251) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // -7922816251426433759354394388.7
  s21_decimal check = {{0xFFFFE6CF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3252) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251426433759354395681
  s21_decimal check = {{0x99999C21, 0x99999999, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3253) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 645.33673839575124685661598885
  s21_decimal check = {{0xCEC6F4A5, 0xC45496CC, 0xD08500FC, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3254) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 647.33673839575124685661598885
  s21_decimal check = {{0x96C6F4A5, 0x7DE4B072, 0xD12A70A2, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3255) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 645.83673839575124685661598885
  s21_decimal check = {{0x40C6F4A5, 0x32B89D36, 0xD0AE5CE6, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3256) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 646.83673839575124685661598885
  s21_decimal check = {{0x24C6F4A5, 0xF80AA09, 0xD10114B9, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3257) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 645.83673839575124685661598885
  s21_decimal check = {{0x40C6F4A5, 0x32B89D36, 0xD0AE5CE6, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3258) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 646.83673839575124685661598885
  s21_decimal check = {{0x24C6F4A5, 0xF80AA09, 0xD10114B9, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3259) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 645.83673839575124685661598885
  s21_decimal check = {{0x40C6F4A5, 0x32B89D36, 0xD0AE5CE6, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3260) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 646.83673839575124685661598885
  s21_decimal check = {{0x24C6F4A5, 0xF80AA09, 0xD10114B9, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3261) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 644.33673839575124685661598895
  s21_decimal check = {{0xEAC6F4AF, 0xE78C89F9, 0xD0324929, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3262) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 648.33673839575124685661598875
  s21_decimal check = {{0x7AC6F49B, 0x5AACBD45, 0xD17D2875, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3263) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 645.33673839575124685661598885
  s21_decimal check = {{0xCEC6F4A5, 0xC45496CC, 0xD08500FC, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3264) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 647.33673839575124685661598885
  s21_decimal check = {{0x96C6F4A5, 0x7DE4B072, 0xD12A70A2, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3265) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26409387504754779197847982799
  s21_decimal check = {{0x555552CF, 0x55555555, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3266) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779197847984091
  s21_decimal check = {{0x555557DB, 0x55555555, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3267) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26409387498605864508043121359
  s21_decimal check = {{0x555552CF, 0x0, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3268) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26409387498605864508043122651
  s21_decimal check = {{0x555557DB, 0x0, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3269) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -6148914691236516558.6632616042
  s21_decimal check = {{0xAFEF286A, 0x55554F73, 0xC6AEA155, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3270) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 6148914691236517851.3367383958
  s21_decimal check = {{0x6D5E3F96, 0x55555B35, 0xC6AEA155, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3271) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -6148914689804860793.6632616042
  s21_decimal check = {{0x2148746A, 0x8EA6AE1F, 0xC6AEA154, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3272) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 6148914689804862086.3367383958
  s21_decimal check = {{0xDEB78B96, 0x8EA6B9E0, 0xC6AEA154, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3273) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -1431655118.6632616042487531434
  s21_decimal check = {{0x90B6C7AA, 0xF3CD3D01, 0x2E425FA2, 0x80130000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3274) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 1431656411.3367383957512468566
  s21_decimal check = {{0x13593856, 0xB648ABA6, 0x2E42625F, 0x130000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3275) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -26408741.168016383446601126829
  s21_decimal check = {{0xD19B53AD, 0x5939B933, 0x5554CC77, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3276) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 26410033.841493174949094840061
  s21_decimal check = {{0xD90F56FD, 0x5170F176, 0x5555DE33, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3277) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -26408741.161867468756796265389
  s21_decimal check = {{0xD19B53AD, 0x3E463DE, 0x5554CC77, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3278) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 26410033.835344260259289978621
  s21_decimal check = {{0xD90F56FD, 0xFC1B9C21, 0x5555DE32, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3279) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -26408740.663261604248753143384
  s21_decimal check = {{0xD125FE58, 0xFC5883D3, 0x5554CC5B, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3280) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 26410033.336738395751246856616
  s21_decimal check = {{0xD89A01A8, 0xF48FBC16, 0x5555DE17, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3281) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 638.41392214432481309726159382
  s21_decimal check = {{0x89D13216, 0xAB5A1443, 0xCE485CA6, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3282) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 654.25955464717768061597038388
  s21_decimal check = {{0xDBBCB734, 0x96DF32FB, 0xD36714F8, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3283) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 638.33673839575124685661598885
  s21_decimal check = {{0x92C6F4A5, 0xBADC3D08, 0xCE41FA38, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3284) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 654.33673839575124685661598885
  s21_decimal check = {{0xD2C6F4A5, 0x875D0A36, 0xD36D7766, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3285) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 642.70307236743109325661598885
  s21_decimal check = {{0xB166F4A5, 0x9E9011C0, 0xCFAB26F0, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3286) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 649.97040442407140045661598885
  s21_decimal check = {{0xB426F4A5, 0xA3A9357E, 0xD2044AAE, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3287) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3288) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3289) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3290) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3291) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3292) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3293) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3294) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3295) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 0.00000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x1A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3296) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 1292.6734767915024937132319777
  s21_decimal check = {{0x23C16421, 0xED05BA53, 0x29C4BE8F, 0x190000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3297) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 24246937143471430.154179596851
  s21_decimal check = {{0xAC45233, 0x5A82E4DF, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3298) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -24246937143470137.480702805349
  s21_decimal check = {{0xB5F4565, 0x5A7E4D31, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3299) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -60233732531769558296976156158
  s21_decimal check = {{0x4C23E5FE, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3300) {
  // 646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 60233732531769558296976157450
  s21_decimal check = {{0x4C23EB0A, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3301) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3302) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543949689
  s21_decimal check = {{0xFFFFFD79, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3303) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3304) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543949688
  s21_decimal check = {{0xFFFFFD78, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3305) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -7922816251426433759354395679
  s21_decimal check = {{0x99999C1F, 0x99999999, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3306) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251426433759354394386.7
  s21_decimal check = {{0xFFFFE6BB, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3307) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354395680
  s21_decimal check = {{0x99999C20, 0x99999999, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3308) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354394387.2
  s21_decimal check = {{0xFFFFE6C0, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3309) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -7922816251426433759354395680
  s21_decimal check = {{0x99999C20, 0x99999999, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3310) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251426433759354394387.7
  s21_decimal check = {{0xFFFFE6C5, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3311) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // -7922816251426433759354395681
  s21_decimal check = {{0x99999C21, 0x99999999, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3312) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251426433759354394388.7
  s21_decimal check = {{0xFFFFE6CF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3313) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -647.33673839575124685661598885
  s21_decimal check = {{0x96C6F4A5, 0x7DE4B072, 0xD12A70A2, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3314) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -645.33673839575124685661598885
  s21_decimal check = {{0xCEC6F4A5, 0xC45496CC, 0xD08500FC, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3315) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -646.83673839575124685661598885
  s21_decimal check = {{0x24C6F4A5, 0xF80AA09, 0xD10114B9, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3316) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -645.83673839575124685661598885
  s21_decimal check = {{0x40C6F4A5, 0x32B89D36, 0xD0AE5CE6, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3317) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -646.83673839575124685661598885
  s21_decimal check = {{0x24C6F4A5, 0xF80AA09, 0xD10114B9, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3318) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -645.83673839575124685661598885
  s21_decimal check = {{0x40C6F4A5, 0x32B89D36, 0xD0AE5CE6, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3319) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -646.83673839575124685661598885
  s21_decimal check = {{0x24C6F4A5, 0xF80AA09, 0xD10114B9, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3320) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -645.83673839575124685661598885
  s21_decimal check = {{0x40C6F4A5, 0x32B89D36, 0xD0AE5CE6, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3321) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -648.33673839575124685661598875
  s21_decimal check = {{0x7AC6F49B, 0x5AACBD45, 0xD17D2875, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3322) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -644.33673839575124685661598895
  s21_decimal check = {{0xEAC6F4AF, 0xE78C89F9, 0xD0324929, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3323) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -647.33673839575124685661598885
  s21_decimal check = {{0x96C6F4A5, 0x7DE4B072, 0xD12A70A2, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3324) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -645.33673839575124685661598885
  s21_decimal check = {{0xCEC6F4A5, 0xC45496CC, 0xD08500FC, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3325) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26409387504754779197847984091
  s21_decimal check = {{0x555557DB, 0x55555555, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3326) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779197847982799
  s21_decimal check = {{0x555552CF, 0x55555555, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3327) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26409387498605864508043122651
  s21_decimal check = {{0x555557DB, 0x0, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3328) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26409387498605864508043121359
  s21_decimal check = {{0x555552CF, 0x0, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3329) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -6148914691236517851.3367383958
  s21_decimal check = {{0x6D5E3F96, 0x55555B35, 0xC6AEA155, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3330) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 6148914691236516558.6632616042
  s21_decimal check = {{0xAFEF286A, 0x55554F73, 0xC6AEA155, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3331) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -6148914689804862086.3367383958
  s21_decimal check = {{0xDEB78B96, 0x8EA6B9E0, 0xC6AEA154, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3332) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 6148914689804860793.6632616042
  s21_decimal check = {{0x2148746A, 0x8EA6AE1F, 0xC6AEA154, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3333) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -1431656411.3367383957512468566
  s21_decimal check = {{0x13593856, 0xB648ABA6, 0x2E42625F, 0x80130000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3334) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 1431655118.6632616042487531434
  s21_decimal check = {{0x90B6C7AA, 0xF3CD3D01, 0x2E425FA2, 0x130000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3335) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -26410033.841493174949094840061
  s21_decimal check = {{0xD90F56FD, 0x5170F176, 0x5555DE33, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3336) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 26408741.168016383446601126829
  s21_decimal check = {{0xD19B53AD, 0x5939B933, 0x5554CC77, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3337) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -26410033.835344260259289978621
  s21_decimal check = {{0xD90F56FD, 0xFC1B9C21, 0x5555DE32, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3338) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 26408741.161867468756796265389
  s21_decimal check = {{0xD19B53AD, 0x3E463DE, 0x5554CC77, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3339) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -26410033.336738395751246856616
  s21_decimal check = {{0xD89A01A8, 0xF48FBC16, 0x5555DE17, 0x80150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3340) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 26408740.663261604248753143384
  s21_decimal check = {{0xD125FE58, 0xFC5883D3, 0x5554CC5B, 0x150000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3341) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -654.25955464717768061597038388
  s21_decimal check = {{0xDBBCB734, 0x96DF32FB, 0xD36714F8, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3342) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -638.41392214432481309726159382
  s21_decimal check = {{0x89D13216, 0xAB5A1443, 0xCE485CA6, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3343) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -654.33673839575124685661598885
  s21_decimal check = {{0xD2C6F4A5, 0x875D0A36, 0xD36D7766, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3344) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -638.33673839575124685661598885
  s21_decimal check = {{0x92C6F4A5, 0xBADC3D08, 0xCE41FA38, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3345) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -649.97040442407140045661598885
  s21_decimal check = {{0xB426F4A5, 0xA3A9357E, 0xD2044AAE, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3346) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -642.70307236743109325661598885
  s21_decimal check = {{0xB166F4A5, 0x9E9011C0, 0xCFAB26F0, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3347) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3348) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3349) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3350) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3351) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3352) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3353) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3354) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -646.33673839575124685661598885
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3355) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -1292.6734767915024937132319777
  s21_decimal check = {{0x23C16421, 0xED05BA53, 0x29C4BE8F, 0x80190000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3356) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -0.00000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x801A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3357) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 24246937143470137.480702805349
  s21_decimal check = {{0xB5F4565, 0x5A7E4D31, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3358) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -24246937143471430.154179596851
  s21_decimal check = {{0xAC45233, 0x5A82E4DF, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3359) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -60233732531769558296976157450
  s21_decimal check = {{0x4C23EB0A, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3360) {
  // -646.33673839575124685661598885
  s21_decimal dec_1 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 60233732531769558296976156158
  s21_decimal check = {{0x4C23E5FE, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3361) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3362) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514240090656400479551
  s21_decimal check = {{0x4AC153F, 0xFFA9DB8A, 0xFFFFFFFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3363) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3364) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514240090656400479550
  s21_decimal check = {{0x4AC153E, 0xFFA9DB8A, 0xFFFFFFFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3365) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -7922816251450680696497865817
  s21_decimal check = {{0x94ED8459, 0x99EFBE0F, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3366) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251402186822210924249.2
  s21_decimal check = {{0x2EB8D47C, 0xFCA29364, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3367) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251450680696497865817
  s21_decimal check = {{0x94ED8459, 0x99EFBE0F, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3368) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251402186822210924249.7
  s21_decimal check = {{0x2EB8D481, 0xFCA29364, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3369) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -7922816251450680696497865818
  s21_decimal check = {{0x94ED845A, 0x99EFBE0F, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3370) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251402186822210924250.2
  s21_decimal check = {{0x2EB8D486, 0xFCA29364, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3371) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // -7922816251450680696497865819
  s21_decimal check = {{0x94ED845B, 0x99EFBE0F, 0x19999999, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3372) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251402186822210924251.2
  s21_decimal check = {{0x2EB8D490, 0xFCA29364, 0xFFFFFFFF, 0x10000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3373) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -24246937143470784.81744120110
  s21_decimal check = {{0x4992492E, 0xA2A675CB, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3374) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -24246937143470782.81744120110
  s21_decimal check = {{0xB8A4792E, 0xA2A6759C, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3375) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -24246937143470784.31744120110
  s21_decimal check = {{0xA556D52E, 0xA2A675BF, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3376) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -24246937143470783.31744120110
  s21_decimal check = {{0x5CDFED2E, 0xA2A675A8, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3377) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -24246937143470784.317441201100
  s21_decimal check = {{0x756453CC, 0x5A80997C, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3378) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -24246937143470783.317441201100
  s21_decimal check = {{0xA0BF43CC, 0x5A809893, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3379) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -24246937143470784.317441201100
  s21_decimal check = {{0x756453CC, 0x5A80997C, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3380) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -24246937143470783.317441201100
  s21_decimal check = {{0xA0BF43CC, 0x5A809893, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3381) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -24246937143470785.817441201100
  s21_decimal check = {{0xB45BEBCC, 0x5A809AD9, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3382) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -24246937143470781.817441201100
  s21_decimal check = {{0x61C7ABCC, 0x5A809736, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3383) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -24246937143470784.817441201100
  s21_decimal check = {{0xDFB6DBCC, 0x5A8099F0, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3384) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -24246937143470782.817441201100
  s21_decimal check = {{0x366CBBCC, 0x5A80981F, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3385) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26409387504779026134991454229
  s21_decimal check = {{0x50A94015, 0x55AB79CB, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3386) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504730532260704512661
  s21_decimal check = {{0x5A016A95, 0x54FF30DF, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3387) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26409387498630111445186592789
  s21_decimal check = {{0x50A94015, 0x562476, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3388) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26409387498581617570899651221
  s21_decimal check = {{0x5A016A95, 0xFFA9DB8A, 0x55555554, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3389) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -6173161628379987988.8174412011
  s21_decimal check = {{0xF52970EB, 0x4BFF944C, 0xC7773238, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3390) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 6124667754093046421.1825587989
  s21_decimal check = {{0x2823F715, 0x5EAB165C, 0xC5E61072, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3391) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -6173161626948332223.8174412011
  s21_decimal check = {{0x6682BCEB, 0x8550F2F8, 0xC7773237, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3392) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 6124667752661390656.1825587989
  s21_decimal check = {{0x997D4315, 0x97FC7507, 0xC5E61071, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3393) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -24246938575126548.81744120110
  s21_decimal check = {{0x939E692E, 0x6578C301, 0x7D5A8E5, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3394) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -24246935711815018.81744120110
  s21_decimal check = {{0x6E98592E, 0xDFD42866, 0x7D5A8D5, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3395) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -24246937169880171.322195980298
  s21_decimal check = {{0x479E300A, 0xC901970B, 0x4E5898A9, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3396) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // -24246937117061396.312686421902
  s21_decimal check = {{0xCE85678E, 0xEBFF9B04, 0x4E5898A6, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3397) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -24246937169880171.316047065608
  s21_decimal check = {{0xD91D3208, 0xC9019709, 0x4E5898A9, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3398) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // -24246937117061396.318835336592
  s21_decimal check = {{0x3D066590, 0xEBFF9B06, 0x4E5898A6, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3399) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -24246937169880170.81744120110
  s21_decimal check = {{0x6030592E, 0xC74CF575, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3400) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -24246937117061396.81744120110
  s21_decimal check = {{0xA206692E, 0x7DFFF5F2, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3401) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -24246937143470791.740257452526
  s21_decimal check = {{0xB7B7C1EE, 0x5A80A03C, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3402) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -24246937143470775.894624949674
  s21_decimal check = {{0x5E6BD5AA, 0x5A8091D3, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3403) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -24246937143470791.81744120110
  s21_decimal check = {{0x44D2A12E, 0xA2A6766E, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3404) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -24246937143470775.81744120110
  s21_decimal check = {{0xBD64212E, 0xA2A674F9, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3405) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -24246937143470787.451107229420
  s21_decimal check = {{0x12713EEC, 0x5A809C56, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3406) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -24246937143470780.183775172780
  s21_decimal check = {{0x3B258AC, 0x5A8095BA, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3407) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -24246937143470783.81744120110
  s21_decimal check = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3408) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -24246937143470783.81744120110
  s21_decimal check = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3409) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3410) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3411) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3412) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3413) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3414) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3415) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -24246937143471430.154179596851
  s21_decimal check = {{0xAC45233, 0x5A82E4DF, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3416) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -24246937143470137.480702805349
  s21_decimal check = {{0xB5F4565, 0x5A7E4D31, 0x4E5898A8, 0x800C0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3417) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -0.00000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3418) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -48493874286941567.63488240220
  s21_decimal check = {{0x236C25C, 0x454CEB68, 0xFAB51BB, 0x800B0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3419) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -60233732531793805234119627588
  s21_decimal check = {{0x4777D344, 0x64E294A2, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3420) {
  // -24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 60233732531745311359832686020
  s21_decimal check = {{0x50CFFDC4, 0x64364BB6, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3421) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514240090656400479551
  s21_decimal check = {{0x4AC153F, 0xFFA9DB8A, 0xFFFFFFFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3422) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3423) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514240090656400479550
  s21_decimal check = {{0x4AC153E, 0xFFA9DB8A, 0xFFFFFFFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3424) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3425) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -7922816251402186822210924249.2
  s21_decimal check = {{0x2EB8D47C, 0xFCA29364, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3426) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251450680696497865817
  s21_decimal check = {{0x94ED8459, 0x99EFBE0F, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3427) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251402186822210924249.7
  s21_decimal check = {{0x2EB8D481, 0xFCA29364, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3428) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251450680696497865817
  s21_decimal check = {{0x94ED8459, 0x99EFBE0F, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3429) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -7922816251402186822210924250.2
  s21_decimal check = {{0x2EB8D486, 0xFCA29364, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3430) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251450680696497865818
  s21_decimal check = {{0x94ED845A, 0x99EFBE0F, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3431) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // -7922816251402186822210924251.2
  s21_decimal check = {{0x2EB8D490, 0xFCA29364, 0xFFFFFFFF, 0x80010000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3432) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // 7922816251450680696497865819
  s21_decimal check = {{0x94ED845B, 0x99EFBE0F, 0x19999999, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3433) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 24246937143470782.81744120110
  s21_decimal check = {{0xB8A4792E, 0xA2A6759C, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3434) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 24246937143470784.81744120110
  s21_decimal check = {{0x4992492E, 0xA2A675CB, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3435) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 24246937143470783.31744120110
  s21_decimal check = {{0x5CDFED2E, 0xA2A675A8, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3436) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 24246937143470784.31744120110
  s21_decimal check = {{0xA556D52E, 0xA2A675BF, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3437) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 24246937143470783.317441201100
  s21_decimal check = {{0xA0BF43CC, 0x5A809893, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3438) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 24246937143470784.317441201100
  s21_decimal check = {{0x756453CC, 0x5A80997C, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3439) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 24246937143470783.317441201100
  s21_decimal check = {{0xA0BF43CC, 0x5A809893, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3440) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 24246937143470784.317441201100
  s21_decimal check = {{0x756453CC, 0x5A80997C, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3441) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 24246937143470781.817441201100
  s21_decimal check = {{0x61C7ABCC, 0x5A809736, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3442) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 24246937143470785.817441201100
  s21_decimal check = {{0xB45BEBCC, 0x5A809AD9, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3443) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 24246937143470782.817441201100
  s21_decimal check = {{0x366CBBCC, 0x5A80981F, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3444) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 24246937143470784.817441201100
  s21_decimal check = {{0xDFB6DBCC, 0x5A8099F0, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3445) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26409387504730532260704512661
  s21_decimal check = {{0x5A016A95, 0x54FF30DF, 0x55555555, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3446) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504779026134991454229
  s21_decimal check = {{0x50A94015, 0x55AB79CB, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3447) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26409387498581617570899651221
  s21_decimal check = {{0x5A016A95, 0xFFA9DB8A, 0x55555554, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3448) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26409387498630111445186592789
  s21_decimal check = {{0x50A94015, 0x562476, 0x55555555, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3449) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -6124667754093046421.1825587989
  s21_decimal check = {{0x2823F715, 0x5EAB165C, 0xC5E61072, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3450) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 6173161628379987988.8174412011
  s21_decimal check = {{0xF52970EB, 0x4BFF944C, 0xC7773238, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3451) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -6124667752661390656.1825587989
  s21_decimal check = {{0x997D4315, 0x97FC7507, 0xC5E61071, 0x800A0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3452) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 6173161626948332223.8174412011
  s21_decimal check = {{0x6682BCEB, 0x8550F2F8, 0xC7773237, 0xA0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3453) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 24246935711815018.81744120110
  s21_decimal check = {{0x6E98592E, 0xDFD42866, 0x7D5A8D5, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3454) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 24246938575126548.81744120110
  s21_decimal check = {{0x939E692E, 0x6578C301, 0x7D5A8E5, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3455) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // 24246937117061396.312686421902
  s21_decimal check = {{0xCE85678E, 0xEBFF9B04, 0x4E5898A6, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3456) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 24246937169880171.322195980298
  s21_decimal check = {{0x479E300A, 0xC901970B, 0x4E5898A9, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3457) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // 24246937117061396.318835336592
  s21_decimal check = {{0x3D066590, 0xEBFF9B06, 0x4E5898A6, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3458) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 24246937169880171.316047065608
  s21_decimal check = {{0xD91D3208, 0xC9019709, 0x4E5898A9, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3459) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 24246937117061396.81744120110
  s21_decimal check = {{0xA206692E, 0x7DFFF5F2, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3460) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 24246937169880170.81744120110
  s21_decimal check = {{0x6030592E, 0xC74CF575, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3461) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 24246937143470775.894624949674
  s21_decimal check = {{0x5E6BD5AA, 0x5A8091D3, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3462) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 24246937143470791.740257452526
  s21_decimal check = {{0xB7B7C1EE, 0x5A80A03C, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3463) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 24246937143470775.81744120110
  s21_decimal check = {{0xBD64212E, 0xA2A674F9, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3464) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 24246937143470791.81744120110
  s21_decimal check = {{0x44D2A12E, 0xA2A6766E, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3465) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 24246937143470780.183775172780
  s21_decimal check = {{0x3B258AC, 0x5A8095BA, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3466) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 24246937143470787.451107229420
  s21_decimal check = {{0x12713EEC, 0x5A809C56, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3467) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 24246937143470783.81744120110
  s21_decimal check = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3468) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 24246937143470783.81744120110
  s21_decimal check = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3469) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3470) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3471) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3472) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3473) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3474) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 24246937143470783.817441201100
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3475) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 24246937143470137.480702805349
  s21_decimal check = {{0xB5F4565, 0x5A7E4D31, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3476) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 24246937143471430.154179596851
  s21_decimal check = {{0xAC45233, 0x5A82E4DF, 0x4E5898A8, 0xC0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3477) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 48493874286941567.63488240220
  s21_decimal check = {{0x236C25C, 0x454CEB68, 0xFAB51BB, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3478) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 0.00000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0xB0000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3479) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -60233732531745311359832686020
  s21_decimal check = {{0x50CFFDC4, 0x64364BB6, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3480) {
  // 24246937143470783.81744120110
  s21_decimal dec_1 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 60233732531793805234119627588
  s21_decimal check = {{0x4777D344, 0x64E294A2, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3481) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -18994429982494779296567793531
  s21_decimal check = {{0xB3DC177B, 0x9B738FD3, 0x3D5FD300, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3482) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3483) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -18994429982494779296567793530
  s21_decimal check = {{0xB3DC177A, 0x9B738FD3, 0x3D5FD300, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3484) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3485) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52310916280343124537621761771
  s21_decimal check = {{0xB28A4EEB, 0xCAF2D692, 0xA9069365, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3486) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 68156548783195992056330551837
  s21_decimal check = {{0xE5BD821D, 0xFE2609C5, 0xDC39C698, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3487) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 52310916280343124537621761770
  s21_decimal check = {{0xB28A4EEA, 0xCAF2D692, 0xA9069365, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3488) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 68156548783195992056330551838
  s21_decimal check = {{0xE5BD821E, 0xFE2609C5, 0xDC39C698, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3489) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52310916280343124537621761770
  s21_decimal check = {{0xB28A4EEA, 0xCAF2D692, 0xA9069365, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3490) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 68156548783195992056330551838
  s21_decimal check = {{0xE5BD821E, 0xFE2609C5, 0xDC39C698, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3491) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // 52310916280343124537621761769
  s21_decimal check = {{0xB28A4EE9, 0xCAF2D692, 0xA9069365, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3492) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // 68156548783195992056330551839
  s21_decimal check = {{0xE5BD821F, 0xFE2609C5, 0xDC39C698, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3493) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 60233732531769558296976156803
  s21_decimal check = {{0x4C23E883, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3494) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 60233732531769558296976156805
  s21_decimal check = {{0x4C23E885, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3495) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3496) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3497) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3498) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3501) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 60233732531769558296976156802
  s21_decimal check = {{0x4C23E882, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3502) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 60233732531769558296976156806
  s21_decimal check = {{0x4C23E886, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3503) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 60233732531769558296976156803
  s21_decimal check = {{0x4C23E883, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3504) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 60233732531769558296976156805
  s21_decimal check = {{0x4C23E885, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3505) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 33824345027014779099128173359
  s21_decimal check = {{0xF6CE932F, 0xF371AD6, 0x6D4AD7AA, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3506) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3507) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 33824345033163693788933034799
  s21_decimal check = {{0xF6CE932F, 0x648C702B, 0x6D4AD7AA, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3508) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3509) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 60233732525620643605739639599
  s21_decimal check = {{0xF6CE932F, 0xF371AD6, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3510) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 60233732537918472988212674009
  s21_decimal check = {{0xA1793DD9, 0xB9E1C581, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3511) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 60233732525620643607171295364
  s21_decimal check = {{0x4C23E884, 0xF371AD7, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3512) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 60233732537918472986781018244
  s21_decimal check = {{0x4C23E884, 0xB9E1C581, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3513) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 60233732531769558295544501039
  s21_decimal check = {{0xF6CE932F, 0x648C702B, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3514) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 60233732531769558298407812569
  s21_decimal check = {{0xA1793DD9, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3515) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // 60233732531769558296949747416
  s21_decimal check = {{0x4A90EED8, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3516) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 60233732531769558297002566192
  s21_decimal check = {{0x4DB6E230, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3519) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 60233732531769558296949747417
  s21_decimal check = {{0x4A90EED9, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3520) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 60233732531769558297002566191
  s21_decimal check = {{0x4DB6E22F, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3521) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 60233732531769558296976156796
  s21_decimal check = {{0x4C23E87C, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3522) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 60233732531769558296976156812
  s21_decimal check = {{0x4C23E88C, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3523) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 60233732531769558296976156796
  s21_decimal check = {{0x4C23E87C, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3524) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 60233732531769558296976156812
  s21_decimal check = {{0x4C23E88C, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3525) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 60233732531769558296976156800
  s21_decimal check = {{0x4C23E880, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3526) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 60233732531769558296976156808
  s21_decimal check = {{0x4C23E888, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3527) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3528) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3529) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3530) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3531) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3532) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3533) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3534) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3535) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // 60233732531769558296976156158
  s21_decimal check = {{0x4C23E5FE, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3536) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // 60233732531769558296976157450
  s21_decimal check = {{0x4C23EB0A, 0x648C702C, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3537) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // 60233732531793805234119627588
  s21_decimal check = {{0x4777D344, 0x64E294A2, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3538) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // 60233732531745311359832686020
  s21_decimal check = {{0x50CFFDC4, 0x64364BB6, 0xC2A02CFF, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3539) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3540) {
  // 60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // -60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // overflow
  int check = 1;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3541) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3542) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 18994429982494779296567793531
  s21_decimal check = {{0xB3DC177B, 0x9B738FD3, 0x3D5FD300, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3543) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3544) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -79228162514264337593543950334
  s21_decimal dec_2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 18994429982494779296567793530
  s21_decimal check = {{0xB3DC177A, 0x9B738FD3, 0x3D5FD300, 0x0}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3545) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -68156548783195992056330551837
  s21_decimal check = {{0xE5BD821D, 0xFE2609C5, 0xDC39C698, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3546) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal dec_2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -52310916280343124537621761771
  s21_decimal check = {{0xB28A4EEB, 0xCAF2D692, 0xA9069365, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3547) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -68156548783195992056330551838
  s21_decimal check = {{0xE5BD821E, 0xFE2609C5, 0xDC39C698, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3548) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -52310916280343124537621761770
  s21_decimal check = {{0xB28A4EEA, 0xCAF2D692, 0xA9069365, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3549) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -68156548783195992056330551838
  s21_decimal check = {{0xE5BD821E, 0xFE2609C5, 0xDC39C698, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3550) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -52310916280343124537621761770
  s21_decimal check = {{0xB28A4EEA, 0xCAF2D692, 0xA9069365, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3551) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  // -68156548783195992056330551839
  s21_decimal check = {{0xE5BD821F, 0xFE2609C5, 0xDC39C698, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3552) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -7922816251426433759354395035
  s21_decimal dec_2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  // -52310916280343124537621761769
  s21_decimal check = {{0xB28A4EE9, 0xCAF2D692, 0xA9069365, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3553) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -60233732531769558296976156805
  s21_decimal check = {{0x4C23E885, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3554) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -60233732531769558296976156803
  s21_decimal check = {{0x4C23E883, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3555) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3556) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3557) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3558) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3561) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -60233732531769558296976156806
  s21_decimal check = {{0x4C23E886, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3562) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -60233732531769558296976156802
  s21_decimal check = {{0x4C23E882, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3563) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -60233732531769558296976156805
  s21_decimal check = {{0x4C23E885, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3564) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -60233732531769558296976156803
  s21_decimal check = {{0x4C23E883, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3565) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3566) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -33824345027014779099128173359
  s21_decimal check = {{0xF6CE932F, 0xF371AD6, 0x6D4AD7AA, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3567) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3568) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -33824345033163693788933034799
  s21_decimal check = {{0xF6CE932F, 0x648C702B, 0x6D4AD7AA, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3569) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -60233732537918472988212674009
  s21_decimal check = {{0xA1793DD9, 0xB9E1C581, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3570) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -60233732525620643605739639599
  s21_decimal check = {{0xF6CE932F, 0xF371AD6, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3571) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -60233732537918472986781018244
  s21_decimal check = {{0x4C23E884, 0xB9E1C581, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3572) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -60233732525620643607171295364
  s21_decimal check = {{0x4C23E884, 0xF371AD7, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3573) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -60233732531769558298407812569
  s21_decimal check = {{0xA1793DD9, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3574) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -60233732531769558295544501039
  s21_decimal check = {{0xF6CE932F, 0x648C702B, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3575) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -60233732531769558297002566192
  s21_decimal check = {{0x4DB6E230, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3576) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // -60233732531769558296949747416
  s21_decimal check = {{0x4A90EED8, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3579) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -60233732531769558297002566191
  s21_decimal check = {{0x4DB6E22F, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3580) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -60233732531769558296949747417
  s21_decimal check = {{0x4A90EED9, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3581) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -60233732531769558296976156812
  s21_decimal check = {{0x4C23E88C, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3582) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -60233732531769558296976156796
  s21_decimal check = {{0x4C23E87C, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3583) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -60233732531769558296976156812
  s21_decimal check = {{0x4C23E88C, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3584) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -60233732531769558296976156796
  s21_decimal check = {{0x4C23E87C, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3585) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -60233732531769558296976156808
  s21_decimal check = {{0x4C23E888, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3586) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -3.6336660283201536
  s21_decimal dec_2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -60233732531769558296976156800
  s21_decimal check = {{0x4C23E880, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3587) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3588) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3589) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3590) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3591) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3592) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3593) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3594) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -60233732531769558296976156804
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3595) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  // -60233732531769558296976157450
  s21_decimal check = {{0x4C23EB0A, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3596) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -646.33673839575124685661598885
  s21_decimal dec_2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  // -60233732531769558296976156158
  s21_decimal check = {{0x4C23E5FE, 0x648C702C, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3597) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  // -60233732531745311359832686020
  s21_decimal check = {{0x50CFFDC4, 0x64364BB6, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3598) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 24246937143470783.81744120110
  s21_decimal dec_2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  // -60233732531793805234119627588
  s21_decimal check = {{0x4777D344, 0x64E294A2, 0xC2A02CFF, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

START_TEST(test_sub3599) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // 60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  // overflow
  int check = 2;

  test_sub_fail(dec_1, dec_2, check);
}

START_TEST(test_sub3600) {
  // -60233732531769558296976156804
  s21_decimal dec_1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -60233732531769558296976156804
  s21_decimal dec_2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  // -0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_sub(dec_1, dec_2, check);
}

Suite *s21_sub_cases(void) {
  Suite *c = suite_create(YELLOW "s21_sub_cases" NOCOLOR);
  TCase *tc = tcase_create(YELLOW "s21_sub_tc" NOCOLOR);

  tcase_add_test(tc, s21_sub_1);
  tcase_add_test(tc, s21_sub_2);
  tcase_add_test(tc, s21_sub_3);
  tcase_add_test(tc, s21_sub_4);
  tcase_add_test(tc, s21_sub_5);
  tcase_add_test(tc, s21_sub_6);
  tcase_add_test(tc, s21_sub_7);
  tcase_add_test(tc, s21_sub_8);
  tcase_add_test(tc, s21_sub_9);
  tcase_add_test(tc, s21_sub_10);
  tcase_add_test(tc, s21_sub_11);
  tcase_add_test(tc, s21_sub_12);
  tcase_add_test(tc, s21_sub_13);
  tcase_add_test(tc, s21_sub_14);
  tcase_add_test(tc, s21_sub_15);
  tcase_add_test(tc, s21_sub_16);
  tcase_add_test(tc, s21_sub_17);
  tcase_add_test(tc, s21_sub_18);
  tcase_add_test(tc, s21_sub_19);
  tcase_add_test(tc, s21_sub_20);
  tcase_add_test(tc, s21_sub_21);
  tcase_add_test(tc, s21_sub_22);
  tcase_add_test(tc, s21_sub_23);
  tcase_add_test(tc, s21_sub_24);
  tcase_add_test(tc, s21_sub_25);
  tcase_add_test(tc, s21_sub_26);
  tcase_add_test(tc, s21_sub_27);
  tcase_add_test(tc, s21_sub_28);
  tcase_add_test(tc, s21_sub_29);
  tcase_add_test(tc, s21_sub_30);
  tcase_add_test(tc, s21_sub_31);
  tcase_add_test(tc, s21_sub_32);
  tcase_add_test(tc, s21_sub_33);
  tcase_add_test(tc, s21_sub_34);
  tcase_add_test(tc, s21_sub_35);
  tcase_add_test(tc, s21_sub_36);
  tcase_add_test(tc, s21_sub_37);
  tcase_add_test(tc, s21_sub_38);
  tcase_add_test(tc, s21_sub_39);
  tcase_add_test(tc, s21_sub_40);
  tcase_add_test(tc, s21_sub_41);
  tcase_add_test(tc, s21_sub_42);
  tcase_add_test(tc, s21_sub_43);
  tcase_add_test(tc, s21_sub_44);
  tcase_add_test(tc, s21_sub_45);
  tcase_add_test(tc, s21_sub_46);
  tcase_add_test(tc, s21_sub_47);
  tcase_add_test(tc, s21_sub_48);
  tcase_add_test(tc, s21_sub_49);
  tcase_add_test(tc, s21_sub_50);
  tcase_add_test(tc, s21_sub_51);
  tcase_add_test(tc, s21_sub_52);
  tcase_add_test(tc, s21_sub_53);
  tcase_add_test(tc, s21_sub_54);
  tcase_add_test(tc, s21_sub_55);
  tcase_add_test(tc, s21_sub_56);
  tcase_add_test(tc, s21_sub_57);
  tcase_add_test(tc, s21_sub_58);
  tcase_add_test(tc, s21_sub_59);
  tcase_add_test(tc, s21_sub_60);
  tcase_add_test(tc, s21_sub_61);
  tcase_add_test(tc, s21_sub_62);
  tcase_add_test(tc, s21_sub_63);
  tcase_add_test(tc, s21_sub_64);
  tcase_add_test(tc, s21_sub_65);
  tcase_add_test(tc, s21_sub_66);
  tcase_add_test(tc, s21_sub_67);
  tcase_add_test(tc, s21_sub_68);
  tcase_add_test(tc, s21_sub_69);
  tcase_add_test(tc, s21_sub_70);
  tcase_add_test(tc, s21_sub_71);
  tcase_add_test(tc, s21_sub_72);
  tcase_add_test(tc, s21_sub_73);
  tcase_add_test(tc, s21_sub_74);
  tcase_add_test(tc, s21_sub_75);
  tcase_add_test(tc, s21_sub_76);
  tcase_add_test(tc, s21_sub_77);
  tcase_add_test(tc, s21_sub_78);
  tcase_add_test(tc, s21_sub_79);
  tcase_add_test(tc, s21_sub_80);
  tcase_add_test(tc, s21_sub_81);
  tcase_add_test(tc, s21_sub_82);
  tcase_add_test(tc, s21_sub_83);
  tcase_add_test(tc, s21_sub_84);
  tcase_add_test(tc, s21_sub_85);
  tcase_add_test(tc, s21_sub_86);
  tcase_add_test(tc, s21_sub_87);
  tcase_add_test(tc, s21_sub_88);
  tcase_add_test(tc, s21_sub_89);
  tcase_add_test(tc, s21_sub_90);
  tcase_add_test(tc, s21_sub_91);
  tcase_add_test(tc, s21_sub_92);
  tcase_add_test(tc, s21_sub_93);
  tcase_add_test(tc, s21_sub_94);
  tcase_add_test(tc, s21_sub_95);
  tcase_add_test(tc, s21_sub_96);
  tcase_add_test(tc, s21_sub_97);
  tcase_add_test(tc, s21_sub_98);
  tcase_add_test(tc, s21_sub_99);
  tcase_add_test(tc, s21_sub_100);
  tcase_add_test(tc, s21_sub_101);
  tcase_add_test(tc, s21_sub_102);
  tcase_add_test(tc, s21_sub_103);
  tcase_add_test(tc, s21_sub_104);
  tcase_add_test(tc, s21_sub_105);
  tcase_add_test(tc, s21_sub_106);
  tcase_add_test(tc, s21_sub_107);
  tcase_add_test(tc, s21_sub_108);
  tcase_add_test(tc, s21_sub_109);
  tcase_add_test(tc, s21_sub_110);
  tcase_add_test(tc, s21_sub_111);
  tcase_add_test(tc, s21_sub_112);
  tcase_add_test(tc, s21_sub_113);
  tcase_add_test(tc, s21_sub_114);
  tcase_add_test(tc, s21_sub_115);
  tcase_add_test(tc, s21_sub_116);
  tcase_add_test(tc, s21_sub_117);
  tcase_add_test(tc, s21_sub_118);
  tcase_add_test(tc, s21_sub_119);
  tcase_add_test(tc, s21_sub_120);
  tcase_add_test(tc, s21_sub_121);
  tcase_add_test(tc, s21_sub_122);
  tcase_add_test(tc, s21_sub_123);
  tcase_add_test(tc, s21_sub_124);
  tcase_add_test(tc, s21_sub_125);
  tcase_add_test(tc, s21_sub_126);
  tcase_add_test(tc, s21_sub_127);
  tcase_add_test(tc, s21_sub_128);
  tcase_add_test(tc, s21_sub_129);
  tcase_add_test(tc, s21_sub_130);
  tcase_add_test(tc, s21_sub_131);
  tcase_add_test(tc, s21_sub_132);
  tcase_add_test(tc, s21_sub_133);
  tcase_add_test(tc, s21_sub_134);
  tcase_add_test(tc, s21_sub_135);
  tcase_add_test(tc, s21_sub_136);
  tcase_add_test(tc, s21_sub_137);
  tcase_add_test(tc, s21_sub_138);
  tcase_add_test(tc, s21_sub_139);
  tcase_add_test(tc, s21_sub_140);
  tcase_add_test(tc, s21_sub_141);
  tcase_add_test(tc, s21_sub_142);
  tcase_add_test(tc, s21_sub_143);
  tcase_add_test(tc, s21_sub_144);
  tcase_add_test(tc, s21_sub_145);
  tcase_add_test(tc, s21_sub_146);
  tcase_add_test(tc, s21_sub_147);
  tcase_add_test(tc, s21_sub_148);
  tcase_add_test(tc, s21_sub_149);
  tcase_add_test(tc, s21_sub_150);
  tcase_add_test(tc, s21_sub_151);
  tcase_add_test(tc, s21_sub_152);
  tcase_add_test(tc, s21_sub_153);
  tcase_add_test(tc, s21_sub_154);
  tcase_add_test(tc, s21_sub_155);
  tcase_add_test(tc, s21_sub_156);
  tcase_add_test(tc, s21_sub_157);
  tcase_add_test(tc, s21_sub_158);
  tcase_add_test(tc, s21_sub_159);
  tcase_add_test(tc, s21_sub_160);
  tcase_add_test(tc, s21_sub_161);
  tcase_add_test(tc, s21_sub_162);
  tcase_add_test(tc, s21_sub_163);
  tcase_add_test(tc, s21_sub_164);
  tcase_add_test(tc, s21_sub_165);
  tcase_add_test(tc, s21_sub_166);
  tcase_add_test(tc, s21_sub_167);
  tcase_add_test(tc, s21_sub_168);
  tcase_add_test(tc, s21_sub_169);
  tcase_add_test(tc, s21_sub_170);
  tcase_add_test(tc, s21_sub_171);
  tcase_add_test(tc, s21_sub_172);
  tcase_add_test(tc, s21_sub_173);
  tcase_add_test(tc, s21_sub_174);
  tcase_add_test(tc, s21_sub_175);
  tcase_add_test(tc, s21_sub_176);
  tcase_add_test(tc, s21_sub_177);
  tcase_add_test(tc, s21_sub_178);
  tcase_add_test(tc, s21_sub_179);
  tcase_add_test(tc, s21_sub_180);
  tcase_add_test(tc, s21_sub_181);
  tcase_add_test(tc, s21_sub_182);
  tcase_add_test(tc, s21_sub_183);
  tcase_add_test(tc, s21_sub_184);
  tcase_add_test(tc, s21_sub_185);
  tcase_add_test(tc, s21_sub_186);
  tcase_add_test(tc, s21_sub_187);
  tcase_add_test(tc, s21_sub_188);
  tcase_add_test(tc, s21_sub_189);
  tcase_add_test(tc, s21_sub_191);
  tcase_add_test(tc, s21_sub_192);
  tcase_add_test(tc, s21_sub_193);
  tcase_add_test(tc, s21_sub_194);
  tcase_add_test(tc, s21_sub_195);
  tcase_add_test(tc, s21_sub_196);
  tcase_add_test(tc, s21_sub_197);
  tcase_add_test(tc, s21_sub_198);
  tcase_add_test(tc, s21_sub_199);
  tcase_add_test(tc, s21_sub_200);
  tcase_add_test(tc, s21_sub_201);
  tcase_add_test(tc, s21_sub_202);
  tcase_add_test(tc, s21_sub_203);
  tcase_add_test(tc, s21_sub_204);
  tcase_add_test(tc, s21_sub_205);
  tcase_add_test(tc, s21_sub_206);
  tcase_add_test(tc, s21_sub_207);
  tcase_add_test(tc, s21_sub_208);
  tcase_add_test(tc, s21_sub_209);
  tcase_add_test(tc, s21_sub_210);
  tcase_add_test(tc, s21_sub_211);
  tcase_add_test(tc, s21_sub_212);
  tcase_add_test(tc, s21_sub_213);
  tcase_add_test(tc, s21_sub_214);
  tcase_add_test(tc, s21_sub_215);
  tcase_add_test(tc, s21_sub_216);
  tcase_add_test(tc, s21_sub_217);
  tcase_add_test(tc, s21_sub_218);
  tcase_add_test(tc, s21_sub_219);
  tcase_add_test(tc, s21_sub_220);
  tcase_add_test(tc, s21_sub_221);
  tcase_add_test(tc, s21_sub_222);
  tcase_add_test(tc, s21_sub_223);
  tcase_add_test(tc, s21_sub_224);
  tcase_add_test(tc, s21_sub_225);
  tcase_add_test(tc, s21_sub_226);
  tcase_add_test(tc, s21_sub_227);
  tcase_add_test(tc, s21_sub_228);
  tcase_add_test(tc, s21_sub_229);
  tcase_add_test(tc, s21_sub_230);
  tcase_add_test(tc, s21_sub_231);
  tcase_add_test(tc, s21_sub_232);
  tcase_add_test(tc, s21_sub_233);
  tcase_add_test(tc, s21_sub_234);
  tcase_add_test(tc, s21_sub_235);
  tcase_add_test(tc, s21_sub_236);
  tcase_add_test(tc, s21_sub_237);
  tcase_add_test(tc, s21_sub_238);
  tcase_add_test(tc, s21_sub_239);
  tcase_add_test(tc, s21_sub_240);
  tcase_add_test(tc, s21_sub_241);
  tcase_add_test(tc, s21_sub_242);
  tcase_add_test(tc, s21_sub_243);
  tcase_add_test(tc, s21_sub_244);
  tcase_add_test(tc, s21_sub_245);
  tcase_add_test(tc, s21_sub_246);
  tcase_add_test(tc, s21_sub_247);
  tcase_add_test(tc, s21_sub_248);
  tcase_add_test(tc, s21_sub_249);
  tcase_add_test(tc, s21_sub_250);
  tcase_add_test(tc, s21_sub_251);
  tcase_add_test(tc, s21_sub_252);
  tcase_add_test(tc, s21_sub_253);
  tcase_add_test(tc, s21_sub_254);
  tcase_add_test(tc, s21_sub_255);
  tcase_add_test(tc, s21_sub_256);
  tcase_add_test(tc, s21_sub_257);
  tcase_add_test(tc, s21_sub_258);
  tcase_add_test(tc, s21_sub_259);
  tcase_add_test(tc, s21_sub_260);
  tcase_add_test(tc, s21_sub_261);
  tcase_add_test(tc, s21_sub_262);
  tcase_add_test(tc, s21_sub_263);
  tcase_add_test(tc, s21_sub_264);
  tcase_add_test(tc, s21_sub_265);
  tcase_add_test(tc, s21_sub_266);
  tcase_add_test(tc, s21_sub_267);
  tcase_add_test(tc, s21_sub_268);
  tcase_add_test(tc, s21_sub_269);
  tcase_add_test(tc, s21_sub_270);
  tcase_add_test(tc, s21_sub_271);
  tcase_add_test(tc, s21_sub_272);
  tcase_add_test(tc, s21_sub_273);
  tcase_add_test(tc, s21_sub_274);
  tcase_add_test(tc, s21_sub_275);
  tcase_add_test(tc, s21_sub_276);
  tcase_add_test(tc, s21_sub_277);
  tcase_add_test(tc, s21_sub_278);
  tcase_add_test(tc, s21_sub_279);
  tcase_add_test(tc, s21_sub_280);
  tcase_add_test(tc, s21_sub_281);
  tcase_add_test(tc, s21_sub_282);
  tcase_add_test(tc, s21_sub_283);
  tcase_add_test(tc, s21_sub_284);
  tcase_add_test(tc, s21_sub_285);
  tcase_add_test(tc, s21_sub_286);
  tcase_add_test(tc, s21_sub_287);
  tcase_add_test(tc, s21_sub_288);
  tcase_add_test(tc, s21_sub_289);
  tcase_add_test(tc, s21_sub_290);
  tcase_add_test(tc, s21_sub_291);
  tcase_add_test(tc, s21_sub_292);
  tcase_add_test(tc, s21_sub_293);
  tcase_add_test(tc, s21_sub_294);
  tcase_add_test(tc, s21_sub_295);
  tcase_add_test(tc, s21_sub_296);
  tcase_add_test(tc, s21_sub_297);
  tcase_add_test(tc, s21_sub_298);
  tcase_add_test(tc, s21_sub_299);
  tcase_add_test(tc, s21_sub_300);
  tcase_add_test(tc, s21_sub_301);
  tcase_add_test(tc, s21_sub_302);
  tcase_add_test(tc, s21_sub_303);
  tcase_add_test(tc, s21_sub_304);
  tcase_add_test(tc, s21_sub_305);
  tcase_add_test(tc, s21_sub_306);
  tcase_add_test(tc, s21_sub_307);
  tcase_add_test(tc, s21_sub_308);
  tcase_add_test(tc, s21_sub_309);
  tcase_add_test(tc, s21_sub_310);
  tcase_add_test(tc, s21_sub_311);
  tcase_add_test(tc, s21_sub_312);
  tcase_add_test(tc, s21_sub_313);
  tcase_add_test(tc, s21_sub_314);
  tcase_add_test(tc, s21_sub_315);
  tcase_add_test(tc, s21_sub_316);
  tcase_add_test(tc, s21_sub_317);
  tcase_add_test(tc, s21_sub_318);
  tcase_add_test(tc, s21_sub_319);
  tcase_add_test(tc, s21_sub_320);
  tcase_add_test(tc, s21_sub_321);
  tcase_add_test(tc, s21_sub_322);
  tcase_add_test(tc, s21_sub_323);
  tcase_add_test(tc, s21_sub_324);
  tcase_add_test(tc, s21_sub_325);
  tcase_add_test(tc, s21_sub_326);
  tcase_add_test(tc, s21_sub_327);
  tcase_add_test(tc, s21_sub_328);
  tcase_add_test(tc, s21_sub_329);
  tcase_add_test(tc, s21_sub_330);
  tcase_add_test(tc, s21_sub_331);
  tcase_add_test(tc, s21_sub_332);
  tcase_add_test(tc, s21_sub_333);
  tcase_add_test(tc, s21_sub_334);
  tcase_add_test(tc, s21_sub_336);
  tcase_add_test(tc, s21_sub_337);
  tcase_add_test(tc, s21_sub_338);
  tcase_add_test(tc, s21_sub_339);
  tcase_add_test(tc, s21_sub_340);
  tcase_add_test(tc, s21_sub_341);
  tcase_add_test(tc, s21_sub_342);
  tcase_add_test(tc, s21_sub_343);
  tcase_add_test(tc, s21_sub_344);
  tcase_add_test(tc, s21_sub_345);
  tcase_add_test(tc, s21_sub_346);
  tcase_add_test(tc, s21_sub_347);
  tcase_add_test(tc, s21_sub_348);
  tcase_add_test(tc, s21_sub_349);
  tcase_add_test(tc, s21_sub_350);
  tcase_add_test(tc, s21_sub_351);
  tcase_add_test(tc, s21_sub_352);
  tcase_add_test(tc, s21_sub_353);
  tcase_add_test(tc, s21_sub_354);
  tcase_add_test(tc, s21_sub_355);
  tcase_add_test(tc, s21_sub_356);
  tcase_add_test(tc, s21_sub_357);
  tcase_add_test(tc, s21_sub_358);
  tcase_add_test(tc, s21_sub_359);
  tcase_add_test(tc, s21_sub_360);
  tcase_add_test(tc, s21_sub_361);
  tcase_add_test(tc, s21_sub_362);
  tcase_add_test(tc, s21_sub_363);
  tcase_add_test(tc, s21_sub_364);
  tcase_add_test(tc, s21_sub_365);
  tcase_add_test(tc, s21_sub_366);
  tcase_add_test(tc, s21_sub_367);
  tcase_add_test(tc, s21_sub_368);
  tcase_add_test(tc, s21_sub_369);
  tcase_add_test(tc, s21_sub_370);
  tcase_add_test(tc, s21_sub_371);
  tcase_add_test(tc, s21_sub_372);
  tcase_add_test(tc, s21_sub_373);
  tcase_add_test(tc, s21_sub_374);
  tcase_add_test(tc, s21_sub_375);
  tcase_add_test(tc, s21_sub_376);
  tcase_add_test(tc, s21_sub_377);
  tcase_add_test(tc, s21_sub_378);
  tcase_add_test(tc, s21_sub_379);
  tcase_add_test(tc, s21_sub_381);
  tcase_add_test(tc, s21_sub_382);
  tcase_add_test(tc, s21_sub_384);
  tcase_add_test(tc, s21_sub_385);
  tcase_add_test(tc, s21_sub_386);
  tcase_add_test(tc, s21_sub_387);
  tcase_add_test(tc, s21_sub_388);
  tcase_add_test(tc, s21_sub_389);
  tcase_add_test(tc, s21_sub_390);
  tcase_add_test(tc, s21_sub_391);
  tcase_add_test(tc, s21_sub_392);
  tcase_add_test(tc, s21_sub_393);
  tcase_add_test(tc, s21_sub_394);
  tcase_add_test(tc, s21_sub_395);
  tcase_add_test(tc, s21_sub_396);
  tcase_add_test(tc, s21_sub_397);
  tcase_add_test(tc, s21_sub_398);
  tcase_add_test(tc, s21_sub_399);
  tcase_add_test(tc, s21_sub_400);
  tcase_add_test(tc, s21_sub_401);
  tcase_add_test(tc, s21_sub_402);
  tcase_add_test(tc, s21_sub_403);
  tcase_add_test(tc, s21_sub_404);
  tcase_add_test(tc, s21_sub_405);
  tcase_add_test(tc, s21_sub_406);
  tcase_add_test(tc, s21_sub_407);
  tcase_add_test(tc, s21_sub_408);
  tcase_add_test(tc, s21_sub_409);
  tcase_add_test(tc, s21_sub_410);
  tcase_add_test(tc, s21_sub_411);
  tcase_add_test(tc, s21_sub_412);
  tcase_add_test(tc, s21_sub_413);
  tcase_add_test(tc, s21_sub_414);
  tcase_add_test(tc, s21_sub_415);
  tcase_add_test(tc, s21_sub_416);
  tcase_add_test(tc, s21_sub_417);
  tcase_add_test(tc, s21_sub_418);
  tcase_add_test(tc, s21_sub_419);
  tcase_add_test(tc, s21_sub_420);
  tcase_add_test(tc, s21_sub_421);
  tcase_add_test(tc, s21_sub_422);
  tcase_add_test(tc, s21_sub_423);
  tcase_add_test(tc, s21_sub_424);
  tcase_add_test(tc, s21_sub_425);
  tcase_add_test(tc, s21_sub_426);
  tcase_add_test(tc, s21_sub_427);
  tcase_add_test(tc, s21_sub_428);
  tcase_add_test(tc, s21_sub_429);
  tcase_add_test(tc, s21_sub_430);
  tcase_add_test(tc, s21_sub_431);
  tcase_add_test(tc, s21_sub_432);
  tcase_add_test(tc, s21_sub_433);
  tcase_add_test(tc, s21_sub_434);
  tcase_add_test(tc, s21_sub_435);
  tcase_add_test(tc, s21_sub_436);
  tcase_add_test(tc, s21_sub_437);
  tcase_add_test(tc, s21_sub_438);
  tcase_add_test(tc, s21_sub_439);
  tcase_add_test(tc, s21_sub_440);
  tcase_add_test(tc, s21_sub_441);
  tcase_add_test(tc, s21_sub_442);
  tcase_add_test(tc, s21_sub_443);
  tcase_add_test(tc, s21_sub_444);
  tcase_add_test(tc, s21_sub_445);
  tcase_add_test(tc, s21_sub_446);
  tcase_add_test(tc, s21_sub_447);
  tcase_add_test(tc, s21_sub_448);
  tcase_add_test(tc, s21_sub_449);
  tcase_add_test(tc, s21_sub_450);
  tcase_add_test(tc, s21_sub_451);
  tcase_add_test(tc, s21_sub_452);
  tcase_add_test(tc, s21_sub_453);
  tcase_add_test(tc, s21_sub_454);
  tcase_add_test(tc, s21_sub_455);
  tcase_add_test(tc, s21_sub_456);
  tcase_add_test(tc, s21_sub_457);
  tcase_add_test(tc, s21_sub_458);
  tcase_add_test(tc, s21_sub_459);
  tcase_add_test(tc, s21_sub_460);
  tcase_add_test(tc, s21_sub_461);
  tcase_add_test(tc, s21_sub_462);
  tcase_add_test(tc, s21_sub_463);
  tcase_add_test(tc, s21_sub_464);
  tcase_add_test(tc, s21_sub_465);
  tcase_add_test(tc, s21_sub_466);
  tcase_add_test(tc, s21_sub_467);
  tcase_add_test(tc, s21_sub_468);
  tcase_add_test(tc, s21_sub_469);
  tcase_add_test(tc, s21_sub_470);
  tcase_add_test(tc, s21_sub_471);
  tcase_add_test(tc, s21_sub_472);
  tcase_add_test(tc, s21_sub_473);
  tcase_add_test(tc, s21_sub_474);
  tcase_add_test(tc, s21_sub_475);
  tcase_add_test(tc, s21_sub_476);
  tcase_add_test(tc, s21_sub_477);
  tcase_add_test(tc, s21_sub_478);
  tcase_add_test(tc, s21_sub_479);
  tcase_add_test(tc, s21_sub_480);
  tcase_add_test(tc, s21_sub_481);
  tcase_add_test(tc, s21_sub_482);
  tcase_add_test(tc, s21_sub_483);
  tcase_add_test(tc, s21_sub_484);
  tcase_add_test(tc, s21_sub_485);
  tcase_add_test(tc, s21_sub_486);
  tcase_add_test(tc, s21_sub_487);
  tcase_add_test(tc, s21_sub_488);
  tcase_add_test(tc, s21_sub_489);
  tcase_add_test(tc, s21_sub_490);
  tcase_add_test(tc, s21_sub_491);
  tcase_add_test(tc, s21_sub_492);
  tcase_add_test(tc, s21_sub_493);
  tcase_add_test(tc, s21_sub_494);
  tcase_add_test(tc, s21_sub_495);
  tcase_add_test(tc, s21_sub_496);
  tcase_add_test(tc, s21_sub_497);
  tcase_add_test(tc, s21_sub_498);
  tcase_add_test(tc, s21_sub_499);
  tcase_add_test(tc, s21_sub_500);
  tcase_add_test(tc, fail_s21_sub_1);
  tcase_add_test(tc, fail_s21_sub_2);
  tcase_add_test(tc, fail_s21_sub_3);
  tcase_add_test(tc, fail_s21_sub_4);
  tcase_add_test(tc, fail_s21_sub_5);
  tcase_add_test(tc, fail_s21_sub_6);

  suite_add_tcase(c, tc);
  return c;
}

Suite *s21_sub_cases_2(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("s21_sub_cases_2");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_sub3201);
  tcase_add_test(tc_core, test_sub3202);
  tcase_add_test(tc_core, test_sub3203);
  tcase_add_test(tc_core, test_sub3204);
  tcase_add_test(tc_core, test_sub3205);
  tcase_add_test(tc_core, test_sub3206);
  tcase_add_test(tc_core, test_sub3207);
  tcase_add_test(tc_core, test_sub3208);
  tcase_add_test(tc_core, test_sub3209);
  tcase_add_test(tc_core, test_sub3210);
  tcase_add_test(tc_core, test_sub3211);
  tcase_add_test(tc_core, test_sub3212);
  tcase_add_test(tc_core, test_sub3213);
  tcase_add_test(tc_core, test_sub3214);
  tcase_add_test(tc_core, test_sub3215);
  tcase_add_test(tc_core, test_sub3216);
  tcase_add_test(tc_core, test_sub3217);
  tcase_add_test(tc_core, test_sub3218);
  tcase_add_test(tc_core, test_sub3219);
  tcase_add_test(tc_core, test_sub3220);
  tcase_add_test(tc_core, test_sub3221);
  tcase_add_test(tc_core, test_sub3222);
  tcase_add_test(tc_core, test_sub3223);
  tcase_add_test(tc_core, test_sub3224);
  tcase_add_test(tc_core, test_sub3225);
  tcase_add_test(tc_core, test_sub3226);
  tcase_add_test(tc_core, test_sub3227);
  tcase_add_test(tc_core, test_sub3228);
  tcase_add_test(tc_core, test_sub3229);
  tcase_add_test(tc_core, test_sub3230);
  tcase_add_test(tc_core, test_sub3231);
  tcase_add_test(tc_core, test_sub3232);
  tcase_add_test(tc_core, test_sub3233);
  tcase_add_test(tc_core, test_sub3234);
  tcase_add_test(tc_core, test_sub3235);
  tcase_add_test(tc_core, test_sub3236);
  tcase_add_test(tc_core, test_sub3237);
  tcase_add_test(tc_core, test_sub3238);
  tcase_add_test(tc_core, test_sub3239);
  tcase_add_test(tc_core, test_sub3240);
  tcase_add_test(tc_core, test_sub3241);
  tcase_add_test(tc_core, test_sub3242);
  tcase_add_test(tc_core, test_sub3243);
  tcase_add_test(tc_core, test_sub3244);
  tcase_add_test(tc_core, test_sub3245);
  tcase_add_test(tc_core, test_sub3246);
  tcase_add_test(tc_core, test_sub3247);
  tcase_add_test(tc_core, test_sub3248);
  tcase_add_test(tc_core, test_sub3249);
  tcase_add_test(tc_core, test_sub3250);
  tcase_add_test(tc_core, test_sub3251);
  tcase_add_test(tc_core, test_sub3252);
  tcase_add_test(tc_core, test_sub3253);
  tcase_add_test(tc_core, test_sub3254);
  tcase_add_test(tc_core, test_sub3255);
  tcase_add_test(tc_core, test_sub3256);
  tcase_add_test(tc_core, test_sub3257);
  tcase_add_test(tc_core, test_sub3258);
  tcase_add_test(tc_core, test_sub3259);
  tcase_add_test(tc_core, test_sub3260);
  tcase_add_test(tc_core, test_sub3261);
  tcase_add_test(tc_core, test_sub3262);
  tcase_add_test(tc_core, test_sub3263);
  tcase_add_test(tc_core, test_sub3264);
  tcase_add_test(tc_core, test_sub3265);
  tcase_add_test(tc_core, test_sub3266);
  tcase_add_test(tc_core, test_sub3267);
  tcase_add_test(tc_core, test_sub3268);
  tcase_add_test(tc_core, test_sub3269);
  tcase_add_test(tc_core, test_sub3270);
  tcase_add_test(tc_core, test_sub3271);
  tcase_add_test(tc_core, test_sub3272);
  tcase_add_test(tc_core, test_sub3273);
  tcase_add_test(tc_core, test_sub3274);
  tcase_add_test(tc_core, test_sub3275);
  tcase_add_test(tc_core, test_sub3276);
  tcase_add_test(tc_core, test_sub3277);
  tcase_add_test(tc_core, test_sub3278);
  tcase_add_test(tc_core, test_sub3279);
  tcase_add_test(tc_core, test_sub3280);
  tcase_add_test(tc_core, test_sub3281);
  tcase_add_test(tc_core, test_sub3282);
  tcase_add_test(tc_core, test_sub3283);
  tcase_add_test(tc_core, test_sub3284);
  tcase_add_test(tc_core, test_sub3285);
  tcase_add_test(tc_core, test_sub3286);
  tcase_add_test(tc_core, test_sub3287);
  tcase_add_test(tc_core, test_sub3288);
  tcase_add_test(tc_core, test_sub3289);
  tcase_add_test(tc_core, test_sub3290);
  tcase_add_test(tc_core, test_sub3291);
  tcase_add_test(tc_core, test_sub3292);
  tcase_add_test(tc_core, test_sub3293);
  tcase_add_test(tc_core, test_sub3294);
  tcase_add_test(tc_core, test_sub3295);
  tcase_add_test(tc_core, test_sub3296);
  tcase_add_test(tc_core, test_sub3297);
  tcase_add_test(tc_core, test_sub3298);
  tcase_add_test(tc_core, test_sub3299);
  tcase_add_test(tc_core, test_sub3300);
  tcase_add_test(tc_core, test_sub3301);
  tcase_add_test(tc_core, test_sub3302);
  tcase_add_test(tc_core, test_sub3303);
  tcase_add_test(tc_core, test_sub3304);
  tcase_add_test(tc_core, test_sub3305);
  tcase_add_test(tc_core, test_sub3306);
  tcase_add_test(tc_core, test_sub3307);
  tcase_add_test(tc_core, test_sub3308);
  tcase_add_test(tc_core, test_sub3309);
  tcase_add_test(tc_core, test_sub3310);
  tcase_add_test(tc_core, test_sub3311);
  tcase_add_test(tc_core, test_sub3312);
  tcase_add_test(tc_core, test_sub3313);
  tcase_add_test(tc_core, test_sub3314);
  tcase_add_test(tc_core, test_sub3315);
  tcase_add_test(tc_core, test_sub3316);
  tcase_add_test(tc_core, test_sub3317);
  tcase_add_test(tc_core, test_sub3318);
  tcase_add_test(tc_core, test_sub3319);
  tcase_add_test(tc_core, test_sub3320);
  tcase_add_test(tc_core, test_sub3321);
  tcase_add_test(tc_core, test_sub3322);
  tcase_add_test(tc_core, test_sub3323);
  tcase_add_test(tc_core, test_sub3324);
  tcase_add_test(tc_core, test_sub3325);
  tcase_add_test(tc_core, test_sub3326);
  tcase_add_test(tc_core, test_sub3327);
  tcase_add_test(tc_core, test_sub3328);
  tcase_add_test(tc_core, test_sub3329);
  tcase_add_test(tc_core, test_sub3330);
  tcase_add_test(tc_core, test_sub3331);
  tcase_add_test(tc_core, test_sub3332);
  tcase_add_test(tc_core, test_sub3333);
  tcase_add_test(tc_core, test_sub3334);
  tcase_add_test(tc_core, test_sub3335);
  tcase_add_test(tc_core, test_sub3336);
  tcase_add_test(tc_core, test_sub3337);
  tcase_add_test(tc_core, test_sub3338);
  tcase_add_test(tc_core, test_sub3339);
  tcase_add_test(tc_core, test_sub3340);
  tcase_add_test(tc_core, test_sub3341);
  tcase_add_test(tc_core, test_sub3342);
  tcase_add_test(tc_core, test_sub3343);
  tcase_add_test(tc_core, test_sub3344);
  tcase_add_test(tc_core, test_sub3345);
  tcase_add_test(tc_core, test_sub3346);
  tcase_add_test(tc_core, test_sub3347);
  tcase_add_test(tc_core, test_sub3348);
  tcase_add_test(tc_core, test_sub3349);
  tcase_add_test(tc_core, test_sub3350);
  tcase_add_test(tc_core, test_sub3351);
  tcase_add_test(tc_core, test_sub3352);
  tcase_add_test(tc_core, test_sub3353);
  tcase_add_test(tc_core, test_sub3354);
  tcase_add_test(tc_core, test_sub3355);
  tcase_add_test(tc_core, test_sub3356);
  tcase_add_test(tc_core, test_sub3357);
  tcase_add_test(tc_core, test_sub3358);
  tcase_add_test(tc_core, test_sub3359);
  tcase_add_test(tc_core, test_sub3360);
  tcase_add_test(tc_core, test_sub3361);
  tcase_add_test(tc_core, test_sub3362);
  tcase_add_test(tc_core, test_sub3363);
  tcase_add_test(tc_core, test_sub3364);
  tcase_add_test(tc_core, test_sub3365);
  tcase_add_test(tc_core, test_sub3366);
  tcase_add_test(tc_core, test_sub3367);
  tcase_add_test(tc_core, test_sub3368);
  tcase_add_test(tc_core, test_sub3369);
  tcase_add_test(tc_core, test_sub3370);
  tcase_add_test(tc_core, test_sub3371);
  tcase_add_test(tc_core, test_sub3372);
  tcase_add_test(tc_core, test_sub3373);
  tcase_add_test(tc_core, test_sub3374);
  tcase_add_test(tc_core, test_sub3375);
  tcase_add_test(tc_core, test_sub3376);
  tcase_add_test(tc_core, test_sub3377);
  tcase_add_test(tc_core, test_sub3378);
  tcase_add_test(tc_core, test_sub3379);
  tcase_add_test(tc_core, test_sub3380);
  tcase_add_test(tc_core, test_sub3381);
  tcase_add_test(tc_core, test_sub3382);
  tcase_add_test(tc_core, test_sub3383);
  tcase_add_test(tc_core, test_sub3384);
  tcase_add_test(tc_core, test_sub3385);
  tcase_add_test(tc_core, test_sub3386);
  tcase_add_test(tc_core, test_sub3387);
  tcase_add_test(tc_core, test_sub3388);
  tcase_add_test(tc_core, test_sub3389);
  tcase_add_test(tc_core, test_sub3390);
  tcase_add_test(tc_core, test_sub3391);
  tcase_add_test(tc_core, test_sub3392);
  tcase_add_test(tc_core, test_sub3393);
  tcase_add_test(tc_core, test_sub3394);
  tcase_add_test(tc_core, test_sub3395);
  tcase_add_test(tc_core, test_sub3396);
  tcase_add_test(tc_core, test_sub3397);
  tcase_add_test(tc_core, test_sub3398);
  tcase_add_test(tc_core, test_sub3399);
  tcase_add_test(tc_core, test_sub3400);
  tcase_add_test(tc_core, test_sub3401);
  tcase_add_test(tc_core, test_sub3402);
  tcase_add_test(tc_core, test_sub3403);
  tcase_add_test(tc_core, test_sub3404);
  tcase_add_test(tc_core, test_sub3405);
  tcase_add_test(tc_core, test_sub3406);
  tcase_add_test(tc_core, test_sub3407);
  tcase_add_test(tc_core, test_sub3408);
  tcase_add_test(tc_core, test_sub3409);
  tcase_add_test(tc_core, test_sub3410);
  tcase_add_test(tc_core, test_sub3411);
  tcase_add_test(tc_core, test_sub3412);
  tcase_add_test(tc_core, test_sub3413);
  tcase_add_test(tc_core, test_sub3414);
  tcase_add_test(tc_core, test_sub3415);
  tcase_add_test(tc_core, test_sub3416);
  tcase_add_test(tc_core, test_sub3417);
  tcase_add_test(tc_core, test_sub3418);
  tcase_add_test(tc_core, test_sub3419);
  tcase_add_test(tc_core, test_sub3420);
  tcase_add_test(tc_core, test_sub3421);
  tcase_add_test(tc_core, test_sub3422);
  tcase_add_test(tc_core, test_sub3423);
  tcase_add_test(tc_core, test_sub3424);
  tcase_add_test(tc_core, test_sub3425);
  tcase_add_test(tc_core, test_sub3426);
  tcase_add_test(tc_core, test_sub3427);
  tcase_add_test(tc_core, test_sub3428);
  tcase_add_test(tc_core, test_sub3429);
  tcase_add_test(tc_core, test_sub3430);
  tcase_add_test(tc_core, test_sub3431);
  tcase_add_test(tc_core, test_sub3432);
  tcase_add_test(tc_core, test_sub3433);
  tcase_add_test(tc_core, test_sub3434);
  tcase_add_test(tc_core, test_sub3435);
  tcase_add_test(tc_core, test_sub3436);
  tcase_add_test(tc_core, test_sub3437);
  tcase_add_test(tc_core, test_sub3438);
  tcase_add_test(tc_core, test_sub3439);
  tcase_add_test(tc_core, test_sub3440);
  tcase_add_test(tc_core, test_sub3441);
  tcase_add_test(tc_core, test_sub3442);
  tcase_add_test(tc_core, test_sub3443);
  tcase_add_test(tc_core, test_sub3444);
  tcase_add_test(tc_core, test_sub3445);
  tcase_add_test(tc_core, test_sub3446);
  tcase_add_test(tc_core, test_sub3447);
  tcase_add_test(tc_core, test_sub3448);
  tcase_add_test(tc_core, test_sub3449);
  tcase_add_test(tc_core, test_sub3450);
  tcase_add_test(tc_core, test_sub3451);
  tcase_add_test(tc_core, test_sub3452);
  tcase_add_test(tc_core, test_sub3453);
  tcase_add_test(tc_core, test_sub3454);
  tcase_add_test(tc_core, test_sub3455);
  tcase_add_test(tc_core, test_sub3456);
  tcase_add_test(tc_core, test_sub3457);
  tcase_add_test(tc_core, test_sub3458);
  tcase_add_test(tc_core, test_sub3459);
  tcase_add_test(tc_core, test_sub3460);
  tcase_add_test(tc_core, test_sub3461);
  tcase_add_test(tc_core, test_sub3462);
  tcase_add_test(tc_core, test_sub3463);
  tcase_add_test(tc_core, test_sub3464);
  tcase_add_test(tc_core, test_sub3465);
  tcase_add_test(tc_core, test_sub3466);
  tcase_add_test(tc_core, test_sub3467);
  tcase_add_test(tc_core, test_sub3468);
  tcase_add_test(tc_core, test_sub3469);
  tcase_add_test(tc_core, test_sub3470);
  tcase_add_test(tc_core, test_sub3471);
  tcase_add_test(tc_core, test_sub3472);
  tcase_add_test(tc_core, test_sub3473);
  tcase_add_test(tc_core, test_sub3474);
  tcase_add_test(tc_core, test_sub3475);
  tcase_add_test(tc_core, test_sub3476);
  tcase_add_test(tc_core, test_sub3477);
  tcase_add_test(tc_core, test_sub3478);
  tcase_add_test(tc_core, test_sub3479);
  tcase_add_test(tc_core, test_sub3480);
  tcase_add_test(tc_core, test_sub3481);
  tcase_add_test(tc_core, test_sub3482);
  tcase_add_test(tc_core, test_sub3483);
  tcase_add_test(tc_core, test_sub3484);
  tcase_add_test(tc_core, test_sub3485);
  tcase_add_test(tc_core, test_sub3486);
  tcase_add_test(tc_core, test_sub3487);
  tcase_add_test(tc_core, test_sub3488);
  tcase_add_test(tc_core, test_sub3489);
  tcase_add_test(tc_core, test_sub3490);
  tcase_add_test(tc_core, test_sub3491);
  tcase_add_test(tc_core, test_sub3492);
  tcase_add_test(tc_core, test_sub3493);
  tcase_add_test(tc_core, test_sub3494);
  tcase_add_test(tc_core, test_sub3495);
  tcase_add_test(tc_core, test_sub3496);
  tcase_add_test(tc_core, test_sub3497);
  tcase_add_test(tc_core, test_sub3498);
  tcase_add_test(tc_core, test_sub3501);
  tcase_add_test(tc_core, test_sub3502);
  tcase_add_test(tc_core, test_sub3503);
  tcase_add_test(tc_core, test_sub3504);
  tcase_add_test(tc_core, test_sub3505);
  tcase_add_test(tc_core, test_sub3506);
  tcase_add_test(tc_core, test_sub3507);
  tcase_add_test(tc_core, test_sub3508);
  tcase_add_test(tc_core, test_sub3509);
  tcase_add_test(tc_core, test_sub3510);
  tcase_add_test(tc_core, test_sub3511);
  tcase_add_test(tc_core, test_sub3512);
  tcase_add_test(tc_core, test_sub3513);
  tcase_add_test(tc_core, test_sub3514);
  tcase_add_test(tc_core, test_sub3515);
  tcase_add_test(tc_core, test_sub3516);
  tcase_add_test(tc_core, test_sub3519);
  tcase_add_test(tc_core, test_sub3520);
  tcase_add_test(tc_core, test_sub3521);
  tcase_add_test(tc_core, test_sub3522);
  tcase_add_test(tc_core, test_sub3523);
  tcase_add_test(tc_core, test_sub3524);
  tcase_add_test(tc_core, test_sub3525);
  tcase_add_test(tc_core, test_sub3526);
  tcase_add_test(tc_core, test_sub3527);
  tcase_add_test(tc_core, test_sub3528);
  tcase_add_test(tc_core, test_sub3529);
  tcase_add_test(tc_core, test_sub3530);
  tcase_add_test(tc_core, test_sub3531);
  tcase_add_test(tc_core, test_sub3532);
  tcase_add_test(tc_core, test_sub3533);
  tcase_add_test(tc_core, test_sub3534);
  tcase_add_test(tc_core, test_sub3535);
  tcase_add_test(tc_core, test_sub3536);
  tcase_add_test(tc_core, test_sub3537);
  tcase_add_test(tc_core, test_sub3538);
  tcase_add_test(tc_core, test_sub3539);
  tcase_add_test(tc_core, test_sub3540);
  tcase_add_test(tc_core, test_sub3541);
  tcase_add_test(tc_core, test_sub3542);
  tcase_add_test(tc_core, test_sub3543);
  tcase_add_test(tc_core, test_sub3544);
  tcase_add_test(tc_core, test_sub3545);
  tcase_add_test(tc_core, test_sub3546);
  tcase_add_test(tc_core, test_sub3547);
  tcase_add_test(tc_core, test_sub3548);
  tcase_add_test(tc_core, test_sub3549);
  tcase_add_test(tc_core, test_sub3550);
  tcase_add_test(tc_core, test_sub3551);
  tcase_add_test(tc_core, test_sub3552);
  tcase_add_test(tc_core, test_sub3553);
  tcase_add_test(tc_core, test_sub3554);
  tcase_add_test(tc_core, test_sub3555);
  tcase_add_test(tc_core, test_sub3556);
  tcase_add_test(tc_core, test_sub3557);
  tcase_add_test(tc_core, test_sub3558);
  tcase_add_test(tc_core, test_sub3561);
  tcase_add_test(tc_core, test_sub3562);
  tcase_add_test(tc_core, test_sub3563);
  tcase_add_test(tc_core, test_sub3564);
  tcase_add_test(tc_core, test_sub3565);
  tcase_add_test(tc_core, test_sub3566);
  tcase_add_test(tc_core, test_sub3567);
  tcase_add_test(tc_core, test_sub3568);
  tcase_add_test(tc_core, test_sub3569);
  tcase_add_test(tc_core, test_sub3570);
  tcase_add_test(tc_core, test_sub3571);
  tcase_add_test(tc_core, test_sub3572);
  tcase_add_test(tc_core, test_sub3573);
  tcase_add_test(tc_core, test_sub3574);
  tcase_add_test(tc_core, test_sub3575);
  tcase_add_test(tc_core, test_sub3576);
  tcase_add_test(tc_core, test_sub3579);
  tcase_add_test(tc_core, test_sub3580);
  tcase_add_test(tc_core, test_sub3581);
  tcase_add_test(tc_core, test_sub3582);
  tcase_add_test(tc_core, test_sub3583);
  tcase_add_test(tc_core, test_sub3584);
  tcase_add_test(tc_core, test_sub3585);
  tcase_add_test(tc_core, test_sub3586);
  tcase_add_test(tc_core, test_sub3587);
  tcase_add_test(tc_core, test_sub3588);
  tcase_add_test(tc_core, test_sub3589);
  tcase_add_test(tc_core, test_sub3590);
  tcase_add_test(tc_core, test_sub3591);
  tcase_add_test(tc_core, test_sub3592);
  tcase_add_test(tc_core, test_sub3593);
  tcase_add_test(tc_core, test_sub3594);
  tcase_add_test(tc_core, test_sub3595);
  tcase_add_test(tc_core, test_sub3596);
  tcase_add_test(tc_core, test_sub3597);
  tcase_add_test(tc_core, test_sub3598);
  tcase_add_test(tc_core, test_sub3599);
  tcase_add_test(tc_core, test_sub3600);

  suite_add_tcase(s, tc_core);
  return s;
}
