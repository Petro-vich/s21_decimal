#include "test.h"

START_TEST(s21_mul_1) {
  // -4703138
  s21_decimal dec_1 = {{0x47c3a2, 0x0, 0x0, 0x80000000}};
  // 5397531672756989399811
  s21_decimal dec_2 = {{0x284f1303, 0x99cc9b06, 0x124, 0x0}};
  // -25385336316346961611848306918
  s21_decimal dec_check = {{0x35a50e6, 0x2c44f888, 0x5206420f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_2) {
  // 5974.32369331022539464
  s21_decimal dec_1 = {{0xff932ac8, 0x630a2692, 0x20, 0x110000}};
  // -421303.5065464825918
  s21_decimal dec_2 = {{0x74ba83e, 0x3a77b512, 0x0, 0x800d0000}};
  // -2517003521.2353306005843859029
  s21_decimal dec_check = {{0x6005d655, 0xf041dc84, 0x51542a46, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_3) {
  // -906.94839124278475725332478
  s21_decimal dec_1 = {{0x3751dffe, 0x14a16f5b, 0x4b0561, 0x80170000}};
  // 864018174662552.92372124300158
  s21_decimal dec_2 = {{0xa3fdf37e, 0x2e353740, 0x172de886, 0xe0000}};
  // -783619893514729784.91923575540
  s21_decimal dec_check = {{0xe791545f, 0x19cacc42, 0xd2397c60, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_4) {
  // -0.38953557437186357
  s21_decimal dec_1 = {{0xd9c80135, 0x8a640d, 0x0, 0x80110000}};
  // 1030936017435320439183
  s21_decimal dec_2 = {{0x6c30d18f, 0xe31c7db9, 0x37, 0x0}};
  // -401586253692309103036.16249865
  s21_decimal dec_check = {{0x7ca3009, 0x77b378e9, 0x81c26fb3, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_5) {
  // 6786696.830219398279409245
  s21_decimal dec_1 = {{0x45352e5d, 0x928697ab, 0x59d23, 0x120000}};
  // -384673955154038994518
  s21_decimal dec_2 = {{0x6509b656, 0xda6c6c1f, 0x14, 0x80000000}};
  // -2610665512111875409686043206.0
  s21_decimal dec_check = {{0xc2a106bc, 0xeeadbefb, 0x545aeb41, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_6) {
  // -828
  s21_decimal dec_1 = {{0x33c, 0x0, 0x0, 0x80000000}};
  // -785590655861111.1619
  s21_decimal dec_2 = {{0x86ad3ec3, 0x6d05c964, 0x0, 0x80040000}};
  // 650469063053000042.0532
  s21_decimal dec_check = {{0x9856feb4, 0x9eb76123, 0x160, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_7) {
  // -6443.4
  s21_decimal dec_1 = {{0xfbb2, 0x0, 0x0, 0x80010000}};
  // -0.766793356611
  s21_decimal dec_2 = {{0x88721543, 0xb2, 0x0, 0x800c0000}};
  // 4940.7563139873174
  s21_decimal dec_check = {{0xba2b7996, 0xaf87ea, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_8) {
  // 9468.6244549397
  s21_decimal dec_1 = {{0xdbf8b315, 0x561d, 0x0, 0xa0000}};
  // -6424837
  s21_decimal dec_2 = {{0x620905, 0x0, 0x0, 0x80000000}};
  // -60834368737.2014173289
  s21_decimal dec_check = {{0x98313c69, 0xfa76f085, 0x20, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_9) {
  // 307860352165317203610.1685
  s21_decimal dec_1 = {{0xcf76e635, 0x6e6afb09, 0x28beb, 0x40000}};
  // 777
  s21_decimal dec_2 = {{0x309, 0x0, 0x0, 0x0}};
  // 239207493632451467205100.9245
  s21_decimal dec_check = {{0xafe0b6dd, 0x22b3f0c6, 0x7baad92, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_10) {
  // 96571678852003901
  s21_decimal dec_1 = {{0x2556383d, 0x157176e, 0x0, 0x0}};
  // -60141.78674
  s21_decimal dec_2 = {{0x66791572, 0x1, 0x0, 0x80050000}};
  // -5807993314640986635590.07274
  s21_decimal dec_check = {{0x95d70c2a, 0xd8fab082, 0x1e06d0a, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_11) {
  // -1402621624660246793983
  s21_decimal dec_1 = {{0x7b4a0eff, 0x9490838, 0x4c, 0x80000000}};
  // 655
  s21_decimal dec_2 = {{0x28f, 0x0, 0x0, 0x0}};
  // -918717164152461650058865
  s21_decimal dec_check = {{0x727c5e71, 0xc1dc0883, 0xc28b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_12) {
  // -52
  s21_decimal dec_1 = {{0x34, 0x0, 0x0, 0x80000000}};
  // -41864592732.991658797502
  s21_decimal dec_2 = {{0x8f9a29be, 0x7bef4289, 0x8dd, 0x800c0000}};
  // 2176958822115.566257470104
  s21_decimal dec_check = {{0x2b507a98, 0x2c9983f1, 0x1ccfd, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_13) {
  // -4157209
  s21_decimal dec_1 = {{0x3f6f19, 0x0, 0x0, 0x80000000}};
  // 921973342330345498269
  s21_decimal dec_2 = {{0x7bdc269d, 0xfaf34e06, 0x31, 0x0}};
  // -3832835876495793278513371221
  s21_decimal dec_check = {{0xde0d855, 0x342fe984, 0xc627291, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_14) {
  // -49.654812445748446288
  s21_decimal dec_1 = {{0x417b4450, 0xb11954d6, 0x2, 0x80120000}};
  // 1785587333
  s21_decimal dec_2 = {{0x6a6de685, 0x0, 0x0, 0x0}};
  // -88663004125.619175396283669904
  s21_decimal dec_check = {{0x990c3c8e, 0x75df3fca, 0x1ca60824, 0x80110000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_15) {
  // 120570
  s21_decimal dec_1 = {{0x1d6fa, 0x0, 0x0, 0x0}};
  // -6152000333403874772
  s21_decimal dec_2 = {{0x629f65d4, 0x55604bb5, 0x0, 0x80000000}};
  // -741746680198505181260040
  s21_decimal dec_check = {{0xf49ca908, 0x2b08f232, 0x9d12, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_16) {
  // -4466817543952504334408265
  s21_decimal dec_1 = {{0xaced5a49, 0xaa0d1b2a, 0x3b1e2, 0x80000000}};
  // -942
  s21_decimal dec_2 = {{0x3ae, 0x0, 0x0, 0x80000000}};
  // 4207742126403259083012585630
  s21_decimal dec_check = {{0x5162389e, 0xbc39f708, 0xd98900d, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_17) {
  // 5858191647655784
  s21_decimal dec_1 = {{0x882f4768, 0x14cffe, 0x0, 0x0}};
  // 0.1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x10000}};
  // 585819164765578.4
  s21_decimal dec_check = {{0x882f4768, 0x14cffe, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_18) {
  // -8675.337512358340370475045712
  s21_decimal dec_1 = {{0xb678d350, 0xe5ae95ea, 0x1c08122c, 0x80180000}};
  // -709741419698732083
  s21_decimal dec_2 = {{0x93863c33, 0x9d9820f, 0x0, 0x80000000}};
  // 6157246362386875181764.1260572
  s21_decimal dec_check = {{0xe437761c, 0x506cc6b5, 0xc6f38c55, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_19) {
  // 1215820321
  s21_decimal dec_1 = {{0x4877f221, 0x0, 0x0, 0x0}};
  // 70654681228
  s21_decimal dec_2 = {{0x7358e08c, 0x10, 0x0, 0x0}};
  // 85903397210779634188
  s21_decimal dec_check = {{0xa3cd4a0c, 0xa8262ca0, 0x4, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_20) {
  // -37754347797.7
  s21_decimal dec_1 = {{0xe7584ad9, 0x57, 0x0, 0x80010000}};
  // -5.58869597890
  s21_decimal dec_2 = {{0x1f394ec2, 0x82, 0x0, 0x800b0000}};
  // 210997571722.998060668530
  s21_decimal dec_check = {{0x2907d672, 0x33874105, 0x2cae, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_21) {
  // 287.9827
  s21_decimal dec_1 = {{0x2bf153, 0x0, 0x0, 0x40000}};
  // -51653079322061919
  s21_decimal dec_2 = {{0xb48bec5f, 0xb78233, 0x0, 0x80000000}};
  // -14875193246481561000.8013
  s21_decimal dec_check = {{0xf6d811cd, 0xdbc1373b, 0x1f7f, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_22) {
  // -0.7578339370731737
  s21_decimal dec_1 = {{0xa22e08d9, 0x1aec75, 0x0, 0x80100000}};
  // 46386087077692.9494968100
  s21_decimal dec_2 = {{0xf0772724, 0xf2bcab64, 0x6239, 0xa0000}};
  // -35152950995507.114414306671820
  s21_decimal dec_check = {{0x8ca6bccc, 0xee25cfd6, 0x7195d6eb, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_23) {
  // 5643221378130853988918299864
  s21_decimal dec_1 = {{0xbbb30cd8, 0xe638e624, 0x123bf69b, 0x0}};
  // -0.5132
  s21_decimal dec_2 = {{0x140c, 0x0, 0x0, 0x80040000}};
  // -2896101211256754267112871490.2
  s21_decimal dec_check = {{0xd7c0de96, 0x7dc1b39f, 0x5d93fcdc, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_24) {
  // 33
  s21_decimal dec_1 = {{0x21, 0x0, 0x0, 0x0}};
  // -9355.70419845409
  s21_decimal dec_2 = {{0x76898921, 0x352e5, 0x0, 0x800b0000}};
  // -308738.23854898497
  s21_decimal dec_check = {{0x47baad41, 0x6daf94, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_25) {
  // -9.6
  s21_decimal dec_1 = {{0x60, 0x0, 0x0, 0x80010000}};
  // 199689266411508.970
  s21_decimal dec_2 = {{0x6dea94ea, 0x2c57054, 0x0, 0x30000}};
  // -1917016957550486.1120
  s21_decimal dec_check = {{0x37f7d7c0, 0xa0a1fa9, 0x1, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_26) {
  // 0.518200221682075190289904854
  s21_decimal dec_1 = {{0xc7aa34d6, 0x4e775c46, 0x1aca52a, 0x1b0000}};
  // -1121.30986600110776942
  s21_decimal dec_2 = {{0xa5b0626e, 0x14214a37, 0x6, 0x80110000}};
  // -581.06302113607207258491433685
  s21_decimal dec_check = {{0x914fb2d5, 0x5566c8b3, 0xbbc06815, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_27) {
  // 7.068715
  s21_decimal dec_1 = {{0x6bdc2b, 0x0, 0x0, 0x60000}};
  // 74478068727335.204
  s21_decimal dec_2 = {{0xae0cc924, 0x1089968, 0x0, 0x30000}};
  // 526464241583945.266542860
  s21_decimal dec_check = {{0x4b0cb90c, 0xaf087980, 0x6f7b, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_28) {
  // -955191610044
  s21_decimal dec_1 = {{0x65db4abc, 0xde, 0x0, 0x80000000}};
  // 0.609948616330
  s21_decimal dec_2 = {{0x3c5468a, 0x8e, 0x0, 0xc0000}};
  // -582617800876.362730418520
  s21_decimal dec_check = {{0x9551b158, 0xc636afa5, 0x7b5f, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_29) {
  // -730499329677755283897
  s21_decimal dec_1 = {{0x9791f9b9, 0x99b6f5fd, 0x27, 0x80000000}};
  // 31.7084212
  s21_decimal dec_2 = {{0x12e65234, 0x0, 0x0, 0x70000}};
  // -23162980431739924812331.653416
  s21_decimal dec_check = {{0x17629928, 0x443ec37a, 0x4ad7f7e5, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_30) {
  // 63382361.63003769
  s21_decimal dec_1 = {{0x9aff9579, 0x168497, 0x0, 0x80000}};
  // 27125365001.91014003031846
  s21_decimal dec_2 = {{0xa5de3f26, 0xe5f87968, 0x23e66, 0xe0000}};
  // 1719269693897836491.1725057890
  s21_decimal dec_check = {{0xdf7c1762, 0x9b33f030, 0x378d7730, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_31) {
  // 2780
  s21_decimal dec_1 = {{0xadc, 0x0, 0x0, 0x0}};
  // 878488591198403.2
  s21_decimal dec_2 = {{0xa42d17a0, 0x1f35ce, 0x0, 0x10000}};
  // 2442198283531560896.0
  s21_decimal dec_check = {{0xd9ac8d80, 0x52ec4ffe, 0x1, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_32) {
  // -3264243876666382253257330
  s21_decimal dec_1 = {{0x68a77272, 0x3df92cc, 0x2b33b, 0x80000000}};
  // 0.2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x10000}};
  // -652848775333276450651466.0
  s21_decimal dec_check = {{0xd14ee4e4, 0x7bf2598, 0x56676, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_33) {
  // -3236452663
  s21_decimal dec_1 = {{0xc0e85937, 0x0, 0x0, 0x80000000}};
  // -246.477692468895
  s21_decimal dec_2 = {{0x8f4dfe9f, 0xe02b, 0x0, 0x800c0000}};
  // 797713384161.050267417385
  s21_decimal dec_check = {{0xe75efb29, 0x2113abd3, 0xa8ec, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_34) {
  // 9275403619824
  s21_decimal dec_1 = {{0x99234df0, 0x86f, 0x0, 0x0}};
  // 91600036
  s21_decimal dec_2 = {{0x575b4a4, 0x0, 0x0, 0x0}};
  // 849627305490408713664
  s21_decimal dec_check = {{0x3c1aadc0, 0xef28cd3, 0x2e, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_35) {
  // -97185.62939227862892
  s21_decimal dec_1 = {{0x87f3f76c, 0x86df4580, 0x0, 0x800e0000}};
  // -67.193764008
  s21_decimal dec_2 = {{0xa50f78a8, 0xf, 0x0, 0x80090000}};
  // 6530268.2463537186490322839114
  s21_decimal dec_check = {{0xf7f0e64a, 0xce0e281d, 0xd3011ce5, 0x160000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_36) {
  // -162463830055111011
  s21_decimal dec_1 = {{0x1f48c963, 0x2412ffe, 0x0, 0x80000000}};
  // -9.8
  s21_decimal dec_2 = {{0x62, 0x0, 0x0, 0x80010000}};
  // 1592145534540087907.8
  s21_decimal dec_check = {{0xf9dd17e6, 0xdcf45f47, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_37) {
  // -9377007.21030
  s21_decimal dec_1 = {{0x53518186, 0xda, 0x0, 0x80050000}};
  // 37287827
  s21_decimal dec_2 = {{0x238f793, 0x0, 0x0, 0x0}};
  // -349648222635419.01810
  s21_decimal dec_check = {{0xdd15a9f2, 0xe53c0098, 0x1, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_38) {
  // 4702091407089615066716044
  s21_decimal dec_1 = {{0x9919578c, 0xe2ccf004, 0x3e3b4, 0x0}};
  // -9.504
  s21_decimal dec_2 = {{0x2520, 0x0, 0x0, 0x80030000}};
  // -44688676732979701594069282.176
  s21_decimal dec_check = {{0xccd22d80, 0xf84eaab3, 0x90659b63, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_39) {
  // 3857608556.9688967
  s21_decimal dec_1 = {{0xd534d587, 0x890cbe, 0x0, 0x70000}};
  // 29269
  s21_decimal dec_2 = {{0x7255, 0x0, 0x0, 0x0}};
  // 112908344853922.6375123
  s21_decimal dec_check = {{0x51a103d3, 0x352e364e, 0x3d, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_40) {
  // -12355242.770449831234
  s21_decimal dec_1 = {{0xbe601542, 0xab76a3d6, 0x0, 0x800c0000}};
  // -1169.682654831350076
  s21_decimal dec_2 = {{0x6528913c, 0x103b8c2d, 0x0, 0x800f0000}};
  // 14451713164.825603387849132787
  s21_decimal dec_check = {{0xcccb4af3, 0x78d9330f, 0x2eb22d4c, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_41) {
  // 9362837947.63840097
  s21_decimal dec_1 = {{0x93da7a61, 0xcfe5926, 0x0, 0x80000}};
  // -76
  s21_decimal dec_2 = {{0x4c, 0x0, 0x0, 0x80000000}};
  // -711575684020.51847372
  s21_decimal dec_check = {{0xe4dc54cc, 0xdb827773, 0x3, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_42) {
  // 71713475669667
  s21_decimal dec_1 = {{0x183e2ea3, 0x4139, 0x0, 0x0}};
  // -74
  s21_decimal dec_2 = {{0x4a, 0x0, 0x0, 0x80000000}};
  // -5306797199555358
  s21_decimal dec_check = {{0x1f97b1e, 0x12da81, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_43) {
  // -86504708
  s21_decimal dec_1 = {{0x527f504, 0x0, 0x0, 0x80000000}};
  // -1417813401.9
  s21_decimal dec_2 = {{0x4d152803, 0x3, 0x0, 0x80010000}};
  // 122647534329846145.2
  s21_decimal dec_check = {{0x9b147f0c, 0x110550d3, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_44) {
  // 3100.71094
  s21_decimal dec_1 = {{0x127b4f36, 0x0, 0x0, 0x50000}};
  // 1673989165187246994688697
  s21_decimal dec_2 = {{0x9b7f0ab9, 0x226d5316, 0x1627b, 0x0}};
  // 5190556517937563904913364682.2
  s21_decimal dec_check = {{0x5a6c63e6, 0x940ecf3c, 0xa7b746f6, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_45) {
  // -3230065628609456112336664.056
  s21_decimal dec_1 = {{0x6ff475f8, 0x97282744, 0xa6fd900, 0x80030000}};
  // 5118
  s21_decimal dec_2 = {{0x13fe, 0x0, 0x0, 0x0}};
  // -16531475887223196382939046639
  s21_decimal dec_check = {{0x197e2ef, 0x90e27f3e, 0x356a842f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_46) {
  // -785.995663014
  s21_decimal dec_1 = {{0xfe06a6, 0xb7, 0x0, 0x80090000}};
  // 177330934734818
  s21_decimal dec_2 = {{0x135f5fe2, 0xa148, 0x0, 0x0}};
  // -139381345619785636.180621452
  s21_decimal dec_check = {{0xee53788c, 0xe2e1085f, 0x734b25, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_47) {
  // 211601176.129669895691687686
  s21_decimal dec_1 = {{0xb423d706, 0xbe3626fb, 0xaf084a, 0x120000}};
  // 88857380209505915621.72
  s21_decimal dec_2 = {{0x968261bc, 0xb2630365, 0x1e1, 0x20000}};
  // 18802326160132705347715988924
  s21_decimal dec_check = {{0x56a7fdbc, 0x87a3f5cc, 0x3cc0eb6f, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_48) {
  // 646747599418951365
  s21_decimal dec_1 = {{0xdab406c5, 0x8f9b583, 0x0, 0x0}};
  // -2.08075
  s21_decimal dec_2 = {{0x32ccb, 0x0, 0x0, 0x80050000}};
  // -1345720067490983052.72375
  s21_decimal dec_check = {{0x723a3a37, 0x29c12941, 0x1c7f, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_49) {
  // 886
  s21_decimal dec_1 = {{0x376, 0x0, 0x0, 0x0}};
  // 559423
  s21_decimal dec_2 = {{0x8893f, 0x0, 0x0, 0x0}};
  // 495648778
  s21_decimal dec_check = {{0x1d8b000a, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_50) {
  // 86833820946143
  s21_decimal dec_1 = {{0x930d4edf, 0x4ef9, 0x0, 0x0}};
  // -1360710
  s21_decimal dec_2 = {{0x14c346, 0x0, 0x0, 0x80000000}};
  // -118155648499626241530
  s21_decimal dec_check = {{0x82236dfa, 0x67bd304b, 0x6, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_51) {
  // -4548864711
  s21_decimal dec_1 = {{0xf222ac7, 0x1, 0x0, 0x80000000}};
  // -980510.63
  s21_decimal dec_2 = {{0x5d823f7, 0x0, 0x0, 0x80020000}};
  // 4460210203567377.93
  s21_decimal dec_check = {{0x40b87b01, 0x63095c1, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_52) {
  // 962.1084173701
  s21_decimal dec_1 = {{0x154df585, 0x8c0, 0x0, 0xa0000}};
  // -80.0
  s21_decimal dec_2 = {{0x320, 0x0, 0x0, 0x80010000}};
  // -76968.67338960800
  s21_decimal dec_check = {{0x939f3fa0, 0x1b5842, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_53) {
  // 3955019144
  s21_decimal dec_1 = {{0xebbccd88, 0x0, 0x0, 0x0}};
  // -1342605
  s21_decimal dec_2 = {{0x147c8d, 0x0, 0x0, 0x80000000}};
  // -5310028477830120
  s21_decimal dec_check = {{0x592b13e8, 0x12dd71, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_54) {
  // -5778535742235
  s21_decimal dec_1 = {{0x6b91fb1b, 0x541, 0x0, 0x80000000}};
  // -296912926740838.324742851871
  s21_decimal dec_2 = {{0xbc030d1f, 0x2b4de0a, 0xf599c2, 0x800c0000}};
  // 1715721959503536368354069501.9
  s21_decimal dec_check = {{0xd8b077eb, 0xeffa20af, 0x37701e91, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_55) {
  // 55.1485791641
  s21_decimal dec_1 = {{0x671d5d99, 0x80, 0x0, 0xa0000}};
  // 3450587064603
  s21_decimal dec_2 = {{0x6704291b, 0x323, 0x0, 0x0}};
  // 190294973894877.9864383523
  s21_decimal dec_check = {{0x997a6023, 0x1cafa217, 0x192f7, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_56) {
  // -7721.217979
  s21_decimal dec_1 = {{0xcc386fbb, 0x1, 0x0, 0x80060000}};
  // 304575143778037433614
  s21_decimal dec_2 = {{0xcf72850e, 0x82d4478e, 0x10, 0x0}};
  // -2351691076095492617755435.7461
  s21_decimal dec_check = {{0x39795cd5, 0xdbd74374, 0x4bfcbb8e, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_57) {
  // 9919.28879297
  s21_decimal dec_1 = {{0xf39188c1, 0xe6, 0x0, 0x80000}};
  // 22179328.2779
  s21_decimal dec_2 = {{0xa3e8eadb, 0x33, 0x0, 0x40000}};
  // 220003162422.576079726363
  s21_decimal dec_check = {{0x3668671b, 0x6534849f, 0x2e96, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_58) {
  // -7.07913896348
  s21_decimal dec_1 = {{0xd2f4d19c, 0xa4, 0x0, 0x800b0000}};
  // -70.73666393524961430
  s21_decimal dec_2 = {{0x65ac8096, 0x622ab61b, 0x0, 0x80110000}};
  // 500.75467381061605241077178576
  s21_decimal dec_check = {{0xa76920d0, 0x2381dc7c, 0xa1cd74ae, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_59) {
  // -6144623109.698
  s21_decimal dec_1 = {{0xa813e642, 0x596, 0x0, 0x80030000}};
  // 94.70
  s21_decimal dec_2 = {{0x24fe, 0x0, 0x0, 0x20000}};
  // -581895808488.40060
  s21_decimal dec_check = {{0x901fbd7c, 0xcebb1d, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_60) {
  // -3625519385592116348248629640
  s21_decimal dec_1 = {{0x57d3a188, 0xb65d7fe0, 0xbb6f597, 0x80000000}};
  // 5.3651780309016915844520
  s21_decimal dec_2 = {{0x6ab99da8, 0x7805cbbc, 0xb5c, 0x160000}};
  // -19451556958187021492083373652
  s21_decimal dec_check = {{0x27b63654, 0x9d561842, 0x3ed9f367, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_61) {
  // -0.6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80010000}};
  // 7530159398.24
  s21_decimal dec_2 = {{0x533f62f0, 0xaf, 0x0, 0x20000}};
  // -4518095638.944
  s21_decimal dec_check = {{0xf37c51a0, 0x41b, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_62) {
  // 7631134379066699.351846
  s21_decimal dec_1 = {{0x45b90726, 0xaf437e47, 0x19d, 0x60000}};
  // 0.3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x10000}};
  // 2289340313720009.8055538
  s21_decimal dec_check = {{0xd12b1572, 0xdca7ad5, 0x4d9, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_63) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 6594
  s21_decimal dec_2 = {{0x19c2, 0x0, 0x0, 0x0}};
  // -32970
  s21_decimal dec_check = {{0x80ca, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_64) {
  // -2921887295
  s21_decimal dec_1 = {{0xae28763f, 0x0, 0x0, 0x80000000}};
  // -3147.7564120488
  s21_decimal dec_2 = {{0xf1071da8, 0x1ca0, 0x0, 0x800a0000}};
  // 9197389468120.1736399960
  s21_decimal dec_check = {{0x6aabbc58, 0xea31b9f9, 0x1379, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_65) {
  // 25313730060056457.14
  s21_decimal dec_1 = {{0x50fab192, 0x23213e56, 0x0, 0x20000}};
  // 91.06212051925
  s21_decimal dec_2 = {{0x3488dbd5, 0x848, 0x0, 0xb0000}};
  // 2305121937520622640.5418521699
  s21_decimal dec_check = {{0x47a2d463, 0x407e4c12, 0x4a7b8592, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_66) {
  // -2.92382
  s21_decimal dec_1 = {{0x4761e, 0x0, 0x0, 0x80050000}};
  // -934721767268674960.2
  s21_decimal dec_2 = {{0x1abf47a2, 0x81b7fcf3, 0x0, 0x80010000}};
  // 2732958197575497222.131964
  s21_decimal dec_check = {{0x6bf710fc, 0xf5f41dce, 0x242b9, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_67) {
  // 29003.0
  s21_decimal dec_1 = {{0x46cee, 0x0, 0x0, 0x10000}};
  // -6.8
  s21_decimal dec_2 = {{0x44, 0x0, 0x0, 0x80010000}};
  // -197220.40
  s21_decimal dec_check = {{0x12cef38, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_68) {
  // 29896714575012
  s21_decimal dec_1 = {{0xdf0d5ca4, 0x1b30, 0x0, 0x0}};
  // -84617594039646.2786135
  s21_decimal dec_2 = {{0xed464657, 0xdf0cd68e, 0x2d, 0x80070000}};
  // -2529788057027541436797211997.1
  s21_decimal dec_check = {{0xfcac55a3, 0xadb6e1ba, 0x51bdea95, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_69) {
  // 820634186.26633582497973258174
  s21_decimal dec_1 = {{0x9261c7be, 0xd444f24e, 0x92944d5, 0x140000}};
  // -7482723451384
  s21_decimal dec_2 = {{0x3512c1f8, 0x6ce, 0x0, 0x80000000}};
  // -6140578670582536736943.5495459
  s21_decimal dec_check = {{0xab828e66, 0x1cb6756f, 0x448cff9e, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_70) {
  // -509860
  s21_decimal dec_1 = {{0x7c7a4, 0x0, 0x0, 0x80000000}};
  // 5527
  s21_decimal dec_2 = {{0x1597, 0x0, 0x0, 0x0}};
  // -2817996220
  s21_decimal dec_check = {{0xa7f735bc, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_71) {
  // 682636.8304519910574195583706
  s21_decimal dec_1 = {{0x58a5aada, 0x4c1e11d7, 0x160ea3b7, 0x160000}};
  // 86.6323
  s21_decimal dec_2 = {{0xd3813, 0x0, 0x0, 0x40000}};
  // 59138398.686766024883688406629
  s21_decimal dec_check = {{0xa6137e65, 0xacdf3cbf, 0xbf162308, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_72) {
  // 6.7990868088095923462
  s21_decimal dec_1 = {{0x89665d06, 0xaf90164b, 0x3, 0x130000}};
  // 55233.15009160239199796927
  s21_decimal dec_2 = {{0x517bbebf, 0x81b15e21, 0x4919b, 0x140000}};
  // 375534.98219681415058531475190
  s21_decimal dec_check = {{0x432adef6, 0xb5e06c1c, 0x79578691, 0x170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_73) {
  // 2800251074684957122100
  s21_decimal dec_1 = {{0x56b65e34, 0xcd4a4c0f, 0x97, 0x0}};
  // -7187
  s21_decimal dec_2 = {{0x1c13, 0x0, 0x0, 0x80000000}};
  // -20125404473760786836532700
  s21_decimal dec_check = {{0x61d6addc, 0x5cd5529f, 0x10a5b8, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_74) {
  // -12194
  s21_decimal dec_1 = {{0x2fa2, 0x0, 0x0, 0x80000000}};
  // 254777363607413638317904
  s21_decimal dec_2 = {{0x18e04750, 0x8230bc9e, 0x35f3, 0x0}};
  // -3106755171828801905648521376
  s21_decimal dec_check = {{0xeb04d0a0, 0x5578629c, 0xa09d8ff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_75) {
  // -949629914.2385567
  s21_decimal dec_1 = {{0x71100f9f, 0x21bcd5, 0x0, 0x80070000}};
  // -1482956.390
  s21_decimal dec_2 = {{0x58641e66, 0x0, 0x0, 0x80030000}};
  // 1408259749455219.6426423130
  s21_decimal dec_check = {{0xb056db5a, 0x23cfefef, 0xba61b, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_76) {
  // 0.15
  s21_decimal dec_1 = {{0xf, 0x0, 0x0, 0x20000}};
  // -7813034.64006824734864468
  s21_decimal dec_2 = {{0xf729b454, 0x8bafdf0a, 0xa572, 0x80110000}};
  // -1171955.1960102371022967020
  s21_decimal dec_check = {{0x7b7190ec, 0x2f4e11a4, 0x9b1b6, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_77) {
  // 4660156101597
  s21_decimal dec_1 = {{0x6f2f3dd, 0x43d, 0x0, 0x0}};
  // 94830553114
  s21_decimal dec_2 = {{0x1457681a, 0x16, 0x0, 0x0}};
  // 441925180712025488723058
  s21_decimal dec_check = {{0x8bd98c72, 0xcfe285a1, 0x5d94, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_78) {
  // 0.49709556168
  s21_decimal dec_1 = {{0x92eba1c8, 0xb, 0x0, 0xb0000}};
  // 8.362230039096061
  s21_decimal dec_2 = {{0x6702aafd, 0x1db567, 0x0, 0xf0000}};
  // 4.15682743818182480227054248
  s21_decimal dec_check = {{0x67ddb2a8, 0xb2142e67, 0x157d83e, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_79) {
  // -1712.679434217756366
  s21_decimal dec_1 = {{0xaaa96ce, 0x17c4a8df, 0x0, 0x800f0000}};
  // 2101379057.605
  s21_decimal dec_2 = {{0x43f3c7c5, 0x1e9, 0x0, 0x30000}};
  // -3598988695455.9734627425694634
  s21_decimal dec_check = {{0x9199b3aa, 0x2e9c1256, 0x744a2301, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_80) {
  // 8.56108928195
  s21_decimal dec_1 = {{0x54118cc3, 0xc7, 0x0, 0xb0000}};
  // -737199856.5816
  s21_decimal dec_2 = {{0x6d5b15b8, 0x6b4, 0x0, 0x80040000}};
  // -6311233790.835812925582120
  s21_decimal dec_check = {{0xed7a2b28, 0xab5acf71, 0x53874, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_81) {
  // -887904424026444754309
  s21_decimal dec_1 = {{0x320d6d85, 0x22263155, 0x30, 0x80000000}};
  // 0.0174043137794
  s21_decimal dec_2 = {{0x85c78702, 0x28, 0x0, 0xd0000}};
  // -15453367201873672867.412976225
  s21_decimal dec_check = {{0x21f02261, 0x9fd79ea0, 0x31eeb9ca, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_82) {
  // -35817
  s21_decimal dec_1 = {{0x8be9, 0x0, 0x0, 0x80000000}};
  // 9139822444389253974943
  s21_decimal dec_2 = {{0x3beb0b9f, 0x78843851, 0x1ef, 0x0}};
  // -327361020490689909620533431
  s21_decimal dec_check = {{0x283ce8b7, 0x7aeb5d78, 0x10ec964, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_83) {
  // 0.0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x10000}};
  // -1954024927770427716211077061
  s21_decimal dec_2 = {{0xf1fc6fc5, 0x96c728cb, 0x65054df, 0x80000000}};
  // 0.0
  s21_decimal dec_check = {{0x0, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_84) {
  // 0.64
  s21_decimal dec_1 = {{0x40, 0x0, 0x0, 0x20000}};
  // -6958297357564218
  s21_decimal dec_2 = {{0xda3d393a, 0x18b888, 0x0, 0x80000000}};
  // -4453310308841099.52
  s21_decimal dec_check = {{0x8f4e4e80, 0x62e2236, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_85) {
  // -69424738290612589958490.7145
  s21_decimal dec_1 = {{0x78222789, 0xa1a0ae4, 0x23e449a, 0x80040000}};
  // -484.73
  s21_decimal dec_2 = {{0xbd59, 0x0, 0x0, 0x80020000}};
  // 33652253391608640730579204.040
  s21_decimal dec_check = {{0xafddf7c8, 0xcf8c9186, 0x6cbc7dd7, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_86) {
  // -772
  s21_decimal dec_1 = {{0x304, 0x0, 0x0, 0x80000000}};
  // -7097393865.00423154
  s21_decimal dec_2 = {{0x2f761df2, 0x9d98036, 0x0, 0x80080000}};
  // 5479188063783.26674888
  s21_decimal dec_check = {{0x20324dc8, 0xb3e6a367, 0x1d, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_87) {
  // 1.05758880
  s21_decimal dec_1 = {{0x64dc0a0, 0x0, 0x0, 0x80000}};
  // -85787
  s21_decimal dec_2 = {{0x14f1b, 0x0, 0x0, 0x80000000}};
  // -90727.37038560
  s21_decimal dec_check = {{0x6944b0e0, 0x840, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_88) {
  // 962749634685372137848255844
  s21_decimal dec_1 = {{0xe92d3564, 0x4636e823, 0x31c5e2a, 0x0}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -6739247442797604964937790908
  s21_decimal dec_check = {{0x603c75bc, 0xeb8058fb, 0x15c69327, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_89) {
  // 84.4199
  s21_decimal dec_1 = {{0xce1a7, 0x0, 0x0, 0x40000}};
  // -58791184
  s21_decimal dec_2 = {{0x3811510, 0x0, 0x0, 0x80000000}};
  // -4963145874.1616
  s21_decimal dec_check = {{0xb977cd70, 0x2d23, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_90) {
  // 9969
  s21_decimal dec_1 = {{0x26f1, 0x0, 0x0, 0x0}};
  // -73012391310197
  s21_decimal dec_2 = {{0x85a5f375, 0x4267, 0x0, 0x80000000}};
  // -727860528971353893
  s21_decimal dec_check = {{0x735d8f25, 0xa19e14b, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_91) {
  // 68297488050740
  s21_decimal dec_1 = {{0xbf83aa34, 0x3e1d, 0x0, 0x0}};
  // 870.6727484417
  s21_decimal dec_2 = {{0x31661c01, 0x7eb, 0x0, 0xa0000}};
  // 59464761632801959.7055318580
  s21_decimal dec_check = {{0xead95a34, 0xdfd2aad5, 0x1ebe187, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_93) {
  // -0.52
  s21_decimal dec_1 = {{0x34, 0x0, 0x0, 0x80020000}};
  // -71967994849124
  s21_decimal dec_2 = {{0x5ac4a764, 0x4174, 0x0, 0x80000000}};
  // 37423357321544.48
  s21_decimal dec_check = {{0x6ff20050, 0xd4ba2, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_94) {
  // 94110
  s21_decimal dec_1 = {{0x16f9e, 0x0, 0x0, 0x0}};
  // 651237288598948
  s21_decimal dec_2 = {{0xff405da4, 0x2504b, 0x0, 0x0}};
  // 61287941230046996280
  s21_decimal dec_check = {{0xcff7e738, 0x528a81d4, 0x3, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_95) {
  // -869741065558812
  s21_decimal dec_1 = {{0x5f425b1c, 0x31706, 0x0, 0x80000000}};
  // 2780143452437
  s21_decimal dec_2 = {{0x4d768115, 0x287, 0x0, 0x0}};
  // -2418004928728910748348224844
  s21_decimal dec_check = {{0xab42954c, 0xd7263b47, 0x7d02075, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_96) {
  // 9029973
  s21_decimal dec_1 = {{0x89c955, 0x0, 0x0, 0x0}};
  // 4924041215498
  s21_decimal dec_2 = {{0x77ba3e0a, 0x47a, 0x0, 0x0}};
  // 44463959226834121554
  s21_decimal dec_check = {{0x2ee67352, 0x690fb756, 0x2, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_97) {
  // 4150698210.92010
  s21_decimal dec_1 = {{0xf93e40aa, 0x17980, 0x0, 0x50000}};
  // -260550
  s21_decimal dec_2 = {{0x3f9c6, 0x0, 0x0, 0x80000000}};
  // -1081464418855232.05500
  s21_decimal dec_check = {{0x15095d7c, 0xdcd557e9, 0x5, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_98) {
  // -47415403817232.069890528
  s21_decimal dec_1 = {{0x4a3111e0, 0x64e9ba32, 0xa0a, 0x80090000}};
  // 0.3209
  s21_decimal dec_2 = {{0xc89, 0x0, 0x0, 0x40000}};
  // -15215603084949.7712278704352
  s21_decimal dec_check = {{0x11910e0, 0xf5cf0064, 0x7ddc4a, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_99) {
  // 80955
  s21_decimal dec_1 = {{0x13c3b, 0x0, 0x0, 0x0}};
  // -1468746
  s21_decimal dec_2 = {{0x16694a, 0x0, 0x0, 0x80000000}};
  // -118902332430
  s21_decimal dec_check = {{0xaf219c0e, 0x1b, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_100) {
  // -103469619897306896
  s21_decimal dec_1 = {{0x33060f10, 0x16f9912, 0x0, 0x80000000}};
  // -80
  s21_decimal dec_2 = {{0x50, 0x0, 0x0, 0x80000000}};
  // 8277569591784551680
  s21_decimal dec_check = {{0xf1e4b500, 0x72dfd5af, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_101) {
  // 9704525.65645892384114919
  s21_decimal dec_1 = {{0x4b06c8e7, 0x56c898e2, 0xcd80, 0x110000}};
  // -6.2588
  s21_decimal dec_2 = {{0xf47c, 0x0, 0x0, 0x80040000}};
  // -60738685.178645112536984550372
  s21_decimal dec_check = {{0xcec57be4, 0x3ae1bd1e, 0xc441dce1, 0x80150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_102) {
  // -32.170198
  s21_decimal dec_1 = {{0x1eae0d6, 0x0, 0x0, 0x80060000}};
  // 993989742590631.1571055956
  s21_decimal dec_2 = {{0x6c0e2554, 0xeb4ee428, 0x838da, 0xa0000}};
  // -31976846829109637.269056117360
  s21_decimal dec_check = {{0x97cfda70, 0x115e3b84, 0x6752a0b4, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_103) {
  // 2126234
  s21_decimal dec_1 = {{0x20719a, 0x0, 0x0, 0x0}};
  // -30249.2493094519825
  s21_decimal dec_2 = {{0xde1f0411, 0x432ab51, 0x0, 0x800d0000}};
  // -64316982356.2333265589050
  s21_decimal dec_check = {{0xd193f33a, 0x4e55f62b, 0x8832, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_104) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -76.0
  s21_decimal dec_2 = {{0x2f8, 0x0, 0x0, 0x80010000}};
  // 380.0
  s21_decimal dec_check = {{0xed8, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_105) {
  // -5616706.72155921891144
  s21_decimal dec_1 = {{0x909c3f48, 0x72bf1477, 0x1e, 0x800e0000}};
  // 16320847850341022
  s21_decimal dec_2 = {{0x828d829e, 0x39fbb9, 0x0, 0x0}};
  // -91669415822555747178054.432356
  s21_decimal dec_check = {{0x79d538a4, 0xed2c7cd6, 0x1d9eb762, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_106) {
  // 7.926006824
  s21_decimal dec_1 = {{0xd86d4428, 0x1, 0x0, 0x90000}};
  // 8.2314923279944342
  s21_decimal dec_2 = {{0x91d08a96, 0x12470fc, 0x0, 0x100000}};
  // 65.2428643633875317032189808
  s21_decimal dec_check = {{0xbf437f70, 0xa4175381, 0x21bad23, 0x190000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_107) {
  // 1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
  // 36776575406621596603607
  s21_decimal dec_2 = {{0xc74c54d7, 0xa98281ac, 0x7c9, 0x0}};
  // 36776575406621596603607
  s21_decimal dec_check = {{0xc74c54d7, 0xa98281ac, 0x7c9, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_108) {
  // -0.63714951554
  s21_decimal dec_1 = {{0xd5b50182, 0xe, 0x0, 0x800b0000}};
  // 76580846
  s21_decimal dec_2 = {{0x49087ee, 0x0, 0x0, 0x0}};
  // -48793448.92854334684
  s21_decimal dec_check = {{0x332f4dc, 0x43b6ea54, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_109) {
  // 32288
  s21_decimal dec_1 = {{0x7e20, 0x0, 0x0, 0x0}};
  // -65715
  s21_decimal dec_2 = {{0x100b3, 0x0, 0x0, 0x80000000}};
  // -2121805920
  s21_decimal dec_check = {{0x7e783060, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_111) {
  // -6.7
  s21_decimal dec_1 = {{0x43, 0x0, 0x0, 0x80010000}};
  // 2726708381291
  s21_decimal dec_2 = {{0xdc7c066b, 0x27a, 0x0, 0x0}};
  // -18268946154649.7
  s21_decimal dec_check = {{0xb475ae01, 0xa627, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_112) {
  // 723004330749741.724488542
  s21_decimal dec_1 = {{0x9c7a535e, 0x24afafc5, 0x991a, 0x90000}};
  // 374376.78070203505139
  s21_decimal dec_2 = {{0xfde959f3, 0x78d59d9, 0x2, 0xe0000}};
  // 270676033779717675138.75498964
  s21_decimal dec_check = {{0x3cf447d4, 0x5192f1aa, 0x5775cbf7, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_113) {
  // -23444355999749
  s21_decimal dec_1 = {{0x9082e805, 0x1552, 0x0, 0x80000000}};
  // 162711995540
  s21_decimal dec_2 = {{0xe2640494, 0x25, 0x0, 0x0}};
  // -3814677948869331529119460
  s21_decimal dec_check = {{0xa34236e4, 0x1b212aad, 0x327ca, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_114) {
  // -45616674776391202
  s21_decimal dec_1 = {{0xbfe19e22, 0xa2101f, 0x0, 0x80000000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -22808337388195601.0
  s21_decimal dec_check = {{0xbf6816aa, 0x32a509e, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_115) {
  // 96656.89371
  s21_decimal dec_1 = {{0x401eb71b, 0x2, 0x0, 0x50000}};
  // 348873398197121467335585
  s21_decimal dec_2 = {{0x8d28c3a1, 0x76fdf1cc, 0x49e0, 0x0}};
  // 33721018967785675296214876246
  s21_decimal dec_check = {{0x36ac0056, 0x2a375128, 0x6cf55f85, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_116) {
  // 341654405
  s21_decimal dec_1 = {{0x145d3b85, 0x0, 0x0, 0x0}};
  // -445355033190183.8523017638
  s21_decimal dec_2 = {{0xc76ea9a6, 0x727f5fc9, 0x3af13, 0x800a0000}};
  // -152157508878347515898766.99154
  s21_decimal dec_check = {{0xf9871012, 0x6def6374, 0x312a2c94, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_117) {
  // 2295793096
  s21_decimal dec_1 = {{0x88d705c8, 0x0, 0x0, 0x0}};
  // -18700
  s21_decimal dec_2 = {{0x490c, 0x0, 0x0, 0x80000000}};
  // -42931330895200
  s21_decimal dec_check = {{0xbaba4d60, 0x270b, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_118) {
  // 0.782524953
  s21_decimal dec_1 = {{0x2ea46219, 0x0, 0x0, 0x90000}};
  // -39904127
  s21_decimal dec_2 = {{0x260e37f, 0x0, 0x0, 0x80000000}};
  // -31225975.105181031
  s21_decimal dec_check = {{0xe1e8d567, 0x6eefdb, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_119) {
  // -7245.5
  s21_decimal dec_1 = {{0x11b07, 0x0, 0x0, 0x80010000}};
  // -7042369153595747955975.51429
  s21_decimal dec_2 = {{0x5fb29745, 0xadca3b62, 0x24687f7, 0x80050000}};
  // 51025485702377991815020588.788
  s21_decimal dec_check = {{0x50a6aef4, 0x8845ad68, 0xa4df4ae2, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_120) {
  // -787513
  s21_decimal dec_1 = {{0xc0439, 0x0, 0x0, 0x80000000}};
  // 715493186553277830.1
  s21_decimal dec_2 = {{0x8d34473d, 0x634b6c9f, 0x0, 0x10000}};
  // -563460185822131483815541.3
  s21_decimal dec_check = {{0x989cd095, 0x60f84c2e, 0x4a92c, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_121) {
  // -5808571431.2349825
  s21_decimal dec_1 = {{0x401cc881, 0xce5ca6, 0x0, 0x80070000}};
  // 1532010526034904449
  s21_decimal dec_2 = {{0xdc784581, 0x1542cb74, 0x0, 0x0}};
  // -8898792573877623354710193453.7
  s21_decimal dec_check = {{0xfbea752e, 0xe075986, 0x1cc0e8a0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_122) {
  // -948035263069
  s21_decimal dec_1 = {{0xbb4e1a5d, 0xdc, 0x0, 0x80000000}};
  // 0.69125
  s21_decimal dec_2 = {{0x10e05, 0x0, 0x0, 0x50000}};
  // -655329375596.44625
  s21_decimal dec_check = {{0x85499d1, 0xe8d1dc, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_123) {
  // 26749799843
  s21_decimal dec_1 = {{0x3a698da3, 0x6, 0x0, 0x0}};
  // -41
  s21_decimal dec_2 = {{0x29, 0x0, 0x0, 0x80000000}};
  // -1096741793563
  s21_decimal dec_check = {{0x5ae7af1b, 0xff, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_124) {
  // 87.46
  s21_decimal dec_1 = {{0x222a, 0x0, 0x0, 0x20000}};
  // -6705260221
  s21_decimal dec_2 = {{0x8faa26bd, 0x1, 0x0, 0x80000000}};
  // -586442058928.66
  s21_decimal dec_check = {{0x2b0f7502, 0x3556, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_125) {
  // -19575366130499799574330
  s21_decimal dec_1 = {{0x6d79673a, 0x2ec704f4, 0x425, 0x80000000}};
  // -70.9699025109909021693
  s21_decimal dec_2 = {{0xdd28a3fd, 0x790d6f30, 0x26, 0x80130000}};
  // 1389261825898523986128293.5969
  s21_decimal dec_check = {{0xf35b14a1, 0xe52a763d, 0x2ce3b458, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_126) {
  // -723684817601.703
  s21_decimal dec_1 = {{0x7b84a7, 0x29230, 0x0, 0x80030000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 3618424088008.515
  s21_decimal dec_check = {{0x2699743, 0xcdaf0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_127) {
  // -7.3218067
  s21_decimal dec_1 = {{0x45d3813, 0x0, 0x0, 0x80070000}};
  // 560269898164407003
  s21_decimal dec_2 = {{0x26f0adb, 0x7c67a81, 0x0, 0x0}};
  // -4102187894188472896.0923201
  s21_decimal dec_check = {{0xd62cb641, 0x836eee9d, 0x21eeb8, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_128) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -708752995057.7899488
  s21_decimal dec_2 = {{0x4f2337e0, 0x625bf6f0, 0x0, 0x80070000}};
  // 5670023960462.3195904
  s21_decimal dec_check = {{0x7919bf00, 0x12dfb782, 0x3, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_129) {
  // 78
  s21_decimal dec_1 = {{0x4e, 0x0, 0x0, 0x0}};
  // -7.2803005837873957
  s21_decimal dec_2 = {{0xb58c1325, 0x102a5f2, 0x0, 0x80100000}};
  // -567.8634455354168646
  s21_decimal dec_check = {{0x50add546, 0x4ece8ff3, 0x0, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_130) {
  // -0.72
  s21_decimal dec_1 = {{0x48, 0x0, 0x0, 0x80020000}};
  // -903081630253073207293240
  s21_decimal dec_2 = {{0xf0227538, 0x273cdfa0, 0xbf3c, 0x80000000}};
  // 650218773782212709251132.80
  s21_decimal dec_check = {{0x89b0f7c0, 0x91ee543, 0x35c8eb, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_131) {
  // 19046866
  s21_decimal dec_1 = {{0x122a1d2, 0x0, 0x0, 0x0}};
  // 971197306995090529
  s21_decimal dec_2 = {{0x1a422461, 0xd7a62ce, 0x0, 0x0}};
  // 18498264965896351963732114
  s21_decimal dec_check = {{0x5904d892, 0xf4026a82, 0xf4d28, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_132) {
  // 1756
  s21_decimal dec_1 = {{0x6dc, 0x0, 0x0, 0x0}};
  // 81484913
  s21_decimal dec_2 = {{0x4db5c71, 0x0, 0x0, 0x0}};
  // 143087507228
  s21_decimal dec_check = {{0x50ae171c, 0x21, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_133) {
  // -7842977.07551781618
  s21_decimal dec_1 = {{0x10c6f2f2, 0xae2629c, 0x0, 0x800b0000}};
  // -8.809861541
  s21_decimal dec_2 = {{0xd1bd1a5, 0x2, 0x0, 0x80090000}};
  // 69095542.10454906142448953338
  s21_decimal dec_check = {{0x261827fa, 0x4b48bd7f, 0x16537304, 0x140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_134) {
  // 0.3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x10000}};
  // -22502
  s21_decimal dec_2 = {{0x57e6, 0x0, 0x0, 0x80000000}};
  // -6750.6
  s21_decimal dec_check = {{0x107b2, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_135) {
  // 695960.769
  s21_decimal dec_1 = {{0x297b84c1, 0x0, 0x0, 0x30000}};
  // 7285391494.21816
  s21_decimal dec_2 = {{0x3d34ccf8, 0x2969a, 0x0, 0x50000}};
  // 5070346666782129.68736504
  s21_decimal dec_check = {{0x91a666f8, 0x6783ef09, 0x6b5e, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_136) {
  // -373
  s21_decimal dec_1 = {{0x175, 0x0, 0x0, 0x80000000}};
  // -71149161892672.91064187392
  s21_decimal dec_2 = {{0xaf8b3a00, 0x61252108, 0x5e2a4, 0x800b0000}};
  // 26538637385966995.66941897216
  s21_decimal dec_check = {{0xc5db8200, 0x8b1921a7, 0x8933981, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_137) {
  // -649
  s21_decimal dec_1 = {{0x289, 0x0, 0x0, 0x80000000}};
  // 5064212232209567320203
  s21_decimal dec_2 = {{0x2748088b, 0x881011d9, 0x112, 0x0}};
  // -3286673738704009190811747
  s21_decimal dec_check = {{0x959da863, 0xf0bd3f84, 0x2b7fa, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_138) {
  // -6.8725128231730518
  s21_decimal dec_1 = {{0xd7653d56, 0xf42923, 0x0, 0x80100000}};
  // 1392253382722676.8360
  s21_decimal dec_2 = {{0x493613e8, 0xc136c6c0, 0x0, 0x40000}};
  // -9568279225867655.1622313161553
  s21_decimal dec_check = {{0x398debb, 0x2e82afb3, 0x1eeab1f0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_139) {
  // 66045124100
  s21_decimal dec_1 = {{0x60989e04, 0xf, 0x0, 0x0}};
  // 0.1855464300712
  s21_decimal dec_2 = {{0x24a60a8, 0x1b0, 0x0, 0xd0000}};
  // 12254437000.3643758359200
  s21_decimal dec_check = {{0x549132a0, 0x24c3926a, 0x19f3, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_140) {
  // -86671110450788
  s21_decimal dec_1 = {{0xb0c02e64, 0x4ed3, 0x0, 0x80000000}};
  // -697021577267
  s21_decimal dec_2 = {{0x49b93833, 0xa2, 0x0, 0x80000000}};
  // 60411634109890619143036396
  s21_decimal dec_check = {{0x4ab31dec, 0x3f4ce63a, 0x31f8a9, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_141) {
  // -329
  s21_decimal dec_1 = {{0x149, 0x0, 0x0, 0x80000000}};
  // 536884232945940041628647
  s21_decimal dec_2 = {{0x4c5cfbe7, 0x8d7651c1, 0x71b0, 0x0}};
  // -176634912639214273695824863
  s21_decimal dec_check = {{0x237fbbdf, 0xcd0f116b, 0x921be5, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_142) {
  // 7065092065457233670.3163
  s21_decimal dec_1 = {{0x8c9fe6bb, 0xfe7c3ab6, 0xef5, 0x40000}};
  // 76
  s21_decimal dec_2 = {{0x4c, 0x0, 0x0, 0x0}};
  // 536946996974749758944.0388
  s21_decimal dec_check = {{0xbf787f84, 0x8ce16e31, 0x47107, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_143) {
  // -830.6
  s21_decimal dec_1 = {{0x2072, 0x0, 0x0, 0x80010000}};
  // -105123309748113091686066
  s21_decimal dec_2 = {{0x47596eb2, 0xbefc80be, 0x1642, 0x80000000}};
  // 87315421076782733954446419.6
  s21_decimal dec_check = {{0xf3a98b44, 0x9c891da6, 0x2d24198, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_144) {
  // -6849.74253649185152
  s21_decimal dec_1 = {{0x5d0c4980, 0x9818474, 0x0, 0x800e0000}};
  // 513832.771314672680
  s21_decimal dec_2 = {{0xe02a6428, 0x721802e, 0x0, 0xc0000}};
  // -3519622190.3176035267100506360
  s21_decimal dec_check = {{0x295378f8, 0x89074cec, 0x71b9a1e4, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_145) {
  // 1652081647661994322808205661
  s21_decimal dec_1 = {{0xb8aaf15d, 0x9370096e, 0x55691e5, 0x0}};
  // -0.9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80010000}};
  // -1486873482895794890527385094.9
  s21_decimal dec_check = {{0x7e027c45, 0x2ef054e4, 0x300b2112, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_146) {
  // -0.17
  s21_decimal dec_1 = {{0x11, 0x0, 0x0, 0x80020000}};
  // 38561621684854749145993
  s21_decimal dec_2 = {{0xbf742b89, 0x6e00d625, 0x82a, 0x0}};
  // -6555475686425307354818.81
  s21_decimal dec_check = {{0xb6b6e419, 0x4e0e3881, 0x8ad1, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_147) {
  // -89726611.3
  s21_decimal dec_1 = {{0x357b31c1, 0x0, 0x0, 0x80010000}};
  // -80255410.4049253759939
  s21_decimal dec_2 = {{0xd7a83bc3, 0x81acf184, 0x2b, 0x800d0000}};
  // 7201046014124714.8173110164711
  s21_decimal dec_check = {{0xfcb23ce7, 0x574efedc, 0xe8ada812, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_148) {
  // -5137.1
  s21_decimal dec_1 = {{0xc8ab, 0x0, 0x0, 0x80010000}};
  // 9990626512208
  s21_decimal dec_2 = {{0x1fbe8d50, 0x916, 0x0, 0x0}};
  // -51322847455863716.8
  s21_decimal dec_check = {{0x12aee470, 0x71f5a94, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_149) {
  // 10631174.103152033
  s21_decimal dec_1 = {{0x1bf6b5a1, 0x25c4ff, 0x0, 0x90000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 0.000000000
  s21_decimal dec_check = {{0x0, 0x0, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_150) {
  // -10287406132
  s21_decimal dec_1 = {{0x652d5c34, 0x2, 0x0, 0x80000000}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // -30862218396
  s21_decimal dec_check = {{0x2f88149c, 0x7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_151) {
  // -683422.5281970312
  s21_decimal dec_1 = {{0x123f3088, 0x1847b1, 0x0, 0x800a0000}};
  // -76840228324
  s21_decimal dec_2 = {{0xe408d5e4, 0x11, 0x0, 0x80000000}};
  // 52514343108425205.4669517088
  s21_decimal dec_check = {{0x77e86120, 0x7141401d, 0x1b26372, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_152) {
  // 8860718806.30782197872297
  s21_decimal dec_1 = {{0xc1a9b6a9, 0xd8ab7ab, 0xbba2, 0xe0000}};
  // -3585176
  s21_decimal dec_2 = {{0x36b498, 0x0, 0x0, 0x80000000}};
  // -31767236407123451.970390102693
  s21_decimal dec_check = {{0x8c6892a5, 0x52bcc447, 0x66a53df8, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_153) {
  // 685597
  s21_decimal dec_1 = {{0xa761d, 0x0, 0x0, 0x0}};
  // 767.60914957
  s21_decimal dec_2 = {{0xdf4e9c0d, 0x11, 0x0, 0x80000}};
  // 526270530.11774329
  s21_decimal dec_check = {{0xa057ab79, 0xbaf806, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_154) {
  // 921571.05959
  s21_decimal dec_1 = {{0x74fdd727, 0x15, 0x0, 0x50000}};
  // -559046109153665.7800
  s21_decimal dec_2 = {{0x43af5d88, 0x4d954ebe, 0x0, 0x80040000}};
  // -515200715172410571007.32383020
  s21_decimal dec_check = {{0xf7113f2c, 0x47b261aa, 0xa6786781, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_155) {
  // -10.76910
  s21_decimal dec_1 = {{0x106eae, 0x0, 0x0, 0x80050000}};
  // 1444.1
  s21_decimal dec_2 = {{0x3869, 0x0, 0x0, 0x10000}};
  // -15551.657310
  s21_decimal dec_check = {{0x9ef3755e, 0x3, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_156) {
  // -551
  s21_decimal dec_1 = {{0x227, 0x0, 0x0, 0x80000000}};
  // 372452.8646359468092488163
  s21_decimal dec_2 = {{0xba9cf9e3, 0x1a3d016e, 0x314b3, 0x130000}};
  // -205221528.4144066918960977813
  s21_decimal dec_check = {{0xa7ddd795, 0x794e1553, 0x6a18d7d, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_157) {
  // 69473415636
  s21_decimal dec_1 = {{0x2cf031d4, 0x10, 0x0, 0x0}};
  // -7153816
  s21_decimal dec_2 = {{0x6d2898, 0x0, 0x0, 0x80000000}};
  // -497000032351466976
  s21_decimal dec_check = {{0x6daab5e0, 0x6e5b2e5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_158) {
  // -51328387016
  s21_decimal dec_1 = {{0xf36907c8, 0xb, 0x0, 0x80000000}};
  // 278030907970302.049372
  s21_decimal dec_2 = {{0x652cfc5c, 0x127435ba, 0xf, 0x60000}};
  // -14270878046709542624583955.754
  s21_decimal dec_check = {{0x160b352a, 0x136ec420, 0x2e1c97f9, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_159) {
  // -1082693.651481
  s21_decimal dec_1 = {{0x15920c19, 0xfc, 0x0, 0x80060000}};
  // -99
  s21_decimal dec_2 = {{0x63, 0x0, 0x0, 0x80000000}};
  // 107186671.496619
  s21_decimal dec_check = {{0x577aadab, 0x617c, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_160) {
  // -4224098083058127509.392368
  s21_decimal dec_1 = {{0xae300bf0, 0xd0e0468c, 0x37e7c, 0x80060000}};
  // -688988
  s21_decimal dec_2 = {{0xa835c, 0x0, 0x0, 0x80000000}};
  // 2910352890050053156441228.8436
  s21_decimal dec_check = {{0x43a3db4, 0xbbdf104, 0x5e09dff7, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_161) {
  // 856388019
  s21_decimal dec_1 = {{0x330b71b3, 0x0, 0x0, 0x0}};
  // 433151935986.582
  s21_decimal dec_2 = {{0xb473b96, 0x189f3, 0x0, 0x30000}};
  // 370946128385563769561.058
  s21_decimal dec_check = {{0xc58ddfe2, 0x7a869d9, 0x4e8d, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_162) {
  // 1850886727008386
  s21_decimal dec_1 = {{0x25e20082, 0x6935f, 0x0, 0x0}};
  // 7446078
  s21_decimal dec_2 = {{0x719e3e, 0x0, 0x0, 0x0}};
  // 13781846938469148810108
  s21_decimal dec_check = {{0xe26e5b7c, 0x1d8c232e, 0x2eb, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_163) {
  // -99.511
  s21_decimal dec_1 = {{0x184b7, 0x0, 0x0, 0x80030000}};
  // -591.204313146415659
  s21_decimal dec_2 = {{0xc2c55a2b, 0x8346130, 0x0, 0x800f0000}};
  // 58831.332405512968642749
  s21_decimal dec_check = {{0x57bca0bd, 0x40bf610e, 0xc75, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_164) {
  // -597488974620572021151.76124572
  s21_decimal dec_1 = {{0x5491509c, 0x994b27ea, 0xc10f212d, 0x80080000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -4779911796964576169214.0899658
  s21_decimal dec_check = {{0xdd410d4a, 0x476f5321, 0x9a7280f1, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_165) {
  // -0.8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80010000}};
  // -17173129210879300896
  s21_decimal dec_2 = {{0xb8585520, 0xee533607, 0x0, 0x80000000}};
  // 13738503368703440716.8
  s21_decimal dec_check = {{0xc2c2a900, 0x7299b03d, 0x7, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_166) {
  // 52267891.007
  s21_decimal dec_1 = {{0x2b68b93f, 0xc, 0x0, 0x30000}};
  // -7.8
  s21_decimal dec_2 = {{0x4e, 0x0, 0x0, 0x80010000}};
  // -407689549.8546
  s21_decimal dec_check = {{0x39e87132, 0x3b5, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_167) {
  // -535283
  s21_decimal dec_1 = {{0x82af3, 0x0, 0x0, 0x80000000}};
  // -1751502102908.781528887
  s21_decimal dec_2 = {{0x5b990737, 0xf2f97abd, 0x5e, 0x80090000}};
  // 937549300151321303.127220021
  s21_decimal dec_check = {{0x4728df35, 0x66dd6f8d, 0x30785c9, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_168) {
  // 863.08526
  s21_decimal dec_1 = {{0x524f6ae, 0x0, 0x0, 0x50000}};
  // -443.7887131073082055886
  s21_decimal dec_2 = {{0xf8785cce, 0x940e50c6, 0xf0, 0x80130000}};
  // -383027.49683728651052057028404
  s21_decimal dec_check = {{0xc2fee734, 0xf69e56df, 0x7bc34abc, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_169) {
  // -490.73332815
  s21_decimal dec_1 = {{0x6cffa24f, 0xb, 0x0, 0x80080000}};
  // 93860.50932488628213116198256
  s21_decimal dec_2 = {{0x2b565d70, 0x9a6a8be9, 0x1e53f598, 0x170000}};
  // -46060480.122855554850504994528
  s21_decimal dec_check = {{0x23de6ee0, 0xbf0b81dd, 0x94d4560e, 0x80150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_170) {
  // -9140848137
  s21_decimal dec_1 = {{0x20d64609, 0x2, 0x0, 0x80000000}};
  // 85039346300
  s21_decimal dec_2 = {{0xccbd727c, 0x13, 0x0, 0x0}};
  // -777331750198052843100
  s21_decimal dec_check = {{0x339eee5c, 0x23a52453, 0x2a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_171) {
  // -1433
  s21_decimal dec_1 = {{0x599, 0x0, 0x0, 0x80000000}};
  // 2768829502875713612830.408
  s21_decimal dec_2 = {{0x44e456c8, 0x8c512208, 0x24a52, 0x30000}};
  // -3967732677620897607185974.664
  s21_decimal dec_check = {{0xa229c588, 0x72278049, 0xcd20813, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_172) {
  // 8787565943209807
  s21_decimal dec_1 = {{0xa27c3f4f, 0x1f383e, 0x0, 0x0}};
  // -0.096
  s21_decimal dec_2 = {{0x60, 0x0, 0x0, 0x80030000}};
  // -843606330548141.472
  s21_decimal dec_check = {{0xee97bda0, 0xbb5177c, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_173) {
  // 9403602872596171
  s21_decimal dec_1 = {{0xe8d476cb, 0x216886, 0x0, 0x0}};
  // 0.599
  s21_decimal dec_2 = {{0x257, 0x0, 0x0, 0x30000}};
  // 5632758120685106.429
  s21_decimal dec_check = {{0xc921f4fd, 0x4e2b93aa, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_174) {
  // 0.2164110
  s21_decimal dec_1 = {{0x21058e, 0x0, 0x0, 0x70000}};
  // -642325441590513
  s21_decimal dec_2 = {{0xbc6b4f1, 0x24831, 0x0, 0x80000000}};
  // -139006291140044.5088430
  s21_decimal dec_check = {{0xbcd212ae, 0x5aff850c, 0x4b, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_175) {
  // -45471
  s21_decimal dec_1 = {{0xb19f, 0x0, 0x0, 0x80000000}};
  // -155886493749686454.32081
  s21_decimal dec_2 = {{0x71343311, 0xff7de54, 0x34d, 0x80050000}};
  // 7088314757291992764421.55151
  s21_decimal dec_check = {{0x66ba788f, 0x4bab78b7, 0x24a54e7, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_176) {
  // 3488467644.0396697897183
  s21_decimal dec_1 = {{0x8b7708df, 0x1a232b9a, 0x763, 0xd0000}};
  // -6225.9943225785212383563
  s21_decimal dec_2 = {{0xf37eb14b, 0x1e47f088, 0xd2f, 0x80130000}};
  // -21719179746289.853874936783889
  s21_decimal dec_check = {{0xeea8a411, 0x46cac1d6, 0x462daf35, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_177) {
  // 1923879.1047128338247825483277
  s21_decimal dec_1 = {{0x5a77e60d, 0x76ed75c4, 0x3e29f478, 0x160000}};
  // -0.8787173
  s21_decimal dec_2 = {{0x8614e5, 0x0, 0x0, 0x80070000}};
  // -1690545.8524196786138615939536
  s21_decimal dec_check = {{0xe4dc81d0, 0xf09c738a, 0x369fde16, 0x80160000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_178) {
  // 2232015924
  s21_decimal dec_1 = {{0x8509dc34, 0x0, 0x0, 0x0}};
  // 785842019
  s21_decimal dec_2 = {{0x2ed6ff63, 0x0, 0x0, 0x0}};
  // 1754011900156310556
  s21_decimal dec_check = {{0xb09ff41c, 0x18578087, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_179) {
  // 0.363417
  s21_decimal dec_1 = {{0x58b99, 0x0, 0x0, 0x60000}};
  // -54599636552303
  s21_decimal dec_2 = {{0x77f10a6f, 0x31a8, 0x0, 0x80000000}};
  // -19842436116928.299351
  s21_decimal dec_check = {{0xc3e48157, 0x135e7e84, 0x1, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_180) {
  // -84584356731212957040.6
  s21_decimal dec_1 = {{0xc4b13666, 0xda7002ff, 0x2d, 0x80010000}};
  // -2026588.14664984999454606358
  s21_decimal dec_2 = {{0xf2ac8416, 0x5b4dc9aa, 0xa7a2ac, 0x80140000}};
  // 171417654743478630700548237.12
  s21_decimal dec_check = {{0xc9603720, 0x6051cf79, 0x37635608, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_181) {
  // 8846390951.8
  s21_decimal dec_1 = {{0x98dc228e, 0x14, 0x0, 0x10000}};
  // -3632798364
  s21_decimal dec_2 = {{0xd8881a9c, 0x0, 0x0, 0x80000000}};
  // -32137154577003442855.2
  s21_decimal dec_check = {{0xad177a88, 0x6bed162d, 0x11, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_182) {
  // 2898500519274
  s21_decimal dec_1 = {{0xdc18056a, 0x2a2, 0x0, 0x0}};
  // 51500275
  s21_decimal dec_2 = {{0x311d4f3, 0x0, 0x0, 0x0}};
  // 149273573830253800350
  s21_decimal dec_check = {{0x6952eb9e, 0x17964483, 0x8, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_183) {
  // 65
  s21_decimal dec_1 = {{0x41, 0x0, 0x0, 0x0}};
  // 42397763799514811.8613712
  s21_decimal dec_2 = {{0xab0c5ed0, 0xdfb202c9, 0x59c7, 0x70000}};
  // 2755854646968462770.9891280
  s21_decimal dec_check = {{0x6e2412d0, 0xcc32b534, 0x16cbbf, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_184) {
  // -82050016
  s21_decimal dec_1 = {{0x4e3fbe0, 0x0, 0x0, 0x80000000}};
  // -4945962877483603067
  s21_decimal dec_2 = {{0x40add47b, 0x44a39708, 0x0, 0x80000000}};
  // 405816333232935671384999072
  s21_decimal dec_check = {{0x5c7f84a0, 0x818d5018, 0x14faef3, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_185) {
  // -41699
  s21_decimal dec_1 = {{0xa2e3, 0x0, 0x0, 0x80000000}};
  // 0.941501419016
  s21_decimal dec_2 = {{0x35db8e08, 0xdb, 0x0, 0xc0000}};
  // -39259.667671548184
  s21_decimal dec_check = {{0xb1900118, 0x8b7a75, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_186) {
  // 5354
  s21_decimal dec_1 = {{0x14ea, 0x0, 0x0, 0x0}};
  // 144796968707999839782520
  s21_decimal dec_2 = {{0xd2778678, 0x759b60b4, 0x1ea9, 0x0}};
  // 775242970462631142195612080
  s21_decimal dec_check = {{0xb7c249b0, 0xa39485b9, 0x2814415, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_187) {
  // -20827677606628227545044098.071
  s21_decimal dec_1 = {{0xe3501c17, 0x725afb94, 0x434c4049, 0x80030000}};
  // -34.5517526349326674020
  s21_decimal dec_2 = {{0x9b496864, 0xbb04d795, 0x12, 0x80130000}};
  // 719632764624344972901296296.14
  s21_decimal dec_check = {{0xd003e1ae, 0xfcc12950, 0xe886a089, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_188) {
  // 82.84
  s21_decimal dec_1 = {{0x205c, 0x0, 0x0, 0x20000}};
  // -3910734950122711014130
  s21_decimal dec_2 = {{0xc129daf2, 0x598d2c, 0xd4, 0x80000000}};
  // -323965283268165380410529.20
  s21_decimal dec_check = {{0xa668eef8, 0x51d4543a, 0x1acc3b, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_189) {
  // -6738450022707185838440543.24
  s21_decimal dec_1 = {{0x86072534, 0xc4de8959, 0x22d643a, 0x80020000}};
  // 0.245
  s21_decimal dec_2 = {{0xf5, 0x0, 0x0, 0x30000}};
  // -1650920255563260530417933.0938
  s21_decimal dec_check = {{0x53af0f7a, 0xd74c2511, 0x3558179f, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_190) {
  // 5.8093
  s21_decimal dec_1 = {{0xe2ed, 0x0, 0x0, 0x40000}};
  // -85845372929655.5488
  s21_decimal dec_2 = {{0x56d49de0, 0xbe9d71e, 0x0, 0x80040000}};
  // -498701524960247.97964384
  s21_decimal dec_check = {{0x1635e860, 0x7764efbe, 0xa8f, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_191) {
  // -2185.226611177
  s21_decimal dec_1 = {{0xc9a7e9e9, 0x1fc, 0x0, 0x80090000}};
  // -503
  s21_decimal dec_2 = {{0x1f7, 0x0, 0x0, 0x80000000}};
  // 1099168.985422031
  s21_decimal dec_check = {{0x38ec98cf, 0x3e7b0, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_192) {
  // -339313
  s21_decimal dec_1 = {{0x52d71, 0x0, 0x0, 0x80000000}};
  // 0.056553353
  s21_decimal dec_2 = {{0x35eef89, 0x0, 0x0, 0x90000}};
  // -19189.287866489
  s21_decimal dec_check = {{0xdaafd079, 0x1173, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_193) {
  // -35908742974.9077703688341
  s21_decimal dec_1 = {{0x74708095, 0x2b278e0b, 0x4c0a, 0x800d0000}};
  // 2.922
  s21_decimal dec_2 = {{0xb6a, 0x0, 0x0, 0x30000}};
  // -104925346972.6805050177332402
  s21_decimal dec_check = {{0xc1ba4b2, 0x917b4ebf, 0x363ec10, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_194) {
  // 9650161.65707053
  s21_decimal dec_1 = {{0x55c26d2d, 0x36dad, 0x0, 0x80000}};
  // -19931318.156411130939004613
  s21_decimal dec_2 = {{0xcba156c5, 0xec1ace7d, 0x107c9e, 0x80120000}};
  // -192340442247872.38038516039918
  s21_decimal dec_check = {{0x546c80ee, 0xb5b765c2, 0x3e26074a, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_195) {
  // 85
  s21_decimal dec_1 = {{0x55, 0x0, 0x0, 0x0}};
  // -5270759150.1
  s21_decimal dec_2 = {{0x459e054d, 0xc, 0x0, 0x80010000}};
  // -448014527758.5
  s21_decimal dec_check = {{0x1d77c291, 0x413, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_196) {
  // -447.917467
  s21_decimal dec_1 = {{0x1ab2ad9b, 0x0, 0x0, 0x80060000}};
  // 322296530.401322319342
  s21_decimal dec_2 = {{0xbfb3bdee, 0x78c34acc, 0x11, 0xc0000}};
  // -144362245520.24878673023374671
  s21_decimal dec_check = {{0x13aa954f, 0x16f66b94, 0x2ea55d75, 0x80110000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_197) {
  // -3448670.725952695042
  s21_decimal dec_1 = {{0xdfb2eb02, 0x2fdc23c0, 0x0, 0x800c0000}};
  // -52398172375896041.683361
  s21_decimal dec_2 = {{0x495f79a1, 0x82b7be76, 0xb18, 0x80060000}};
  // 180704043166175853629164.31953
  s21_decimal dec_check = {{0xd90d5851, 0xe36ee9e5, 0x3a637cf4, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_198) {
  // -4128.307116
  s21_decimal dec_1 = {{0xf610f7ac, 0x0, 0x0, 0x80060000}};
  // -644849741027
  s21_decimal dec_2 = {{0x240a2ce3, 0x96, 0x0, 0x80000000}};
  // 2662137774632521.248132
  s21_decimal dec_check = {{0xf8552d84, 0x5095496a, 0x90, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_199) {
  // -19334
  s21_decimal dec_1 = {{0x4b86, 0x0, 0x0, 0x80000000}};
  // -92012771475141
  s21_decimal dec_2 = {{0x648efec5, 0x53af, 0x0, 0x80000000}};
  // 1778974923700376094
  s21_decimal dec_check = {{0x877d121e, 0x18b03044, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_200) {
  // 376.02512
  s21_decimal dec_1 = {{0x23dc4d0, 0x0, 0x0, 0x50000}};
  // 8365802974531982
  s21_decimal dec_2 = {{0x4a8ed18e, 0x1db8a7, 0x0, 0x0}};
  // 3145752067394745475.38784
  s21_decimal dec_check = {{0xf750fb60, 0x27f7feac, 0x429d, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_201) {
  // -0.6569
  s21_decimal dec_1 = {{0x19a9, 0x0, 0x0, 0x80040000}};
  // 254435.185470577000915
  s21_decimal dec_2 = {{0x4e5f41d3, 0xcaff5d21, 0xd, 0xf0000}};
  // -167138.4733356220319010635
  s21_decimal dec_check = {{0xa500f4b, 0xf2acbba4, 0x161ed, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_202) {
  // 72437302
  s21_decimal dec_1 = {{0x4514e36, 0x0, 0x0, 0x0}};
  // 36
  s21_decimal dec_2 = {{0x24, 0x0, 0x0, 0x0}};
  // 2607742872
  s21_decimal dec_check = {{0x9b6eff98, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_203) {
  // 842820213331685478183
  s21_decimal dec_1 = {{0x820f0f27, 0xb07ae692, 0x2d, 0x0}};
  // -258801.6507103408410905381
  s21_decimal dec_2 = {{0xa78cb25, 0xa7edbf6e, 0x22408, 0x80130000}};
  // -218123262462281818260935617.23
  s21_decimal dec_check = {{0x7e59b77b, 0x27fa0b7f, 0x467abbbf, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_204) {
  // 821712356.9
  s21_decimal dec_1 = {{0xe9c75af1, 0x1, 0x0, 0x10000}};
  // -0.576029036467587336166238134
  s21_decimal dec_2 = {{0x73d8e7b6, 0xa33cab8c, 0x1dc7ae4, 0x801b0000}};
  // -473330177.19861724045775214730
  s21_decimal dec_check = {{0x2a54188a, 0x1bc33e74, 0x98f0f460, 0x80140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_205) {
  // -0.450869
  s21_decimal dec_1 = {{0x6e135, 0x0, 0x0, 0x80060000}};
  // -24375
  s21_decimal dec_2 = {{0x5f37, 0x0, 0x0, 0x80000000}};
  // 10989.931875
  s21_decimal dec_check = {{0x8f0d0d63, 0x2, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_206) {
  // 52817
  s21_decimal dec_1 = {{0xce51, 0x0, 0x0, 0x0}};
  // -7538575095811
  s21_decimal dec_2 = {{0x36173803, 0x6db, 0x0, 0x80000000}};
  // -398164920835449587
  s21_decimal dec_check = {{0xcc6b22f3, 0x58690e2, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_207) {
  // -2483253487615331
  s21_decimal dec_1 = {{0x82043d63, 0x8d281, 0x0, 0x80000000}};
  // -74000523505
  s21_decimal dec_2 = {{0x3ac660f1, 0x11, 0x0, 0x80000000}};
  // 183762058079151528063855155
  s21_decimal dec_check = {{0xe594ea33, 0x2126556f, 0x980121, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_208) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 933.57
  s21_decimal dec_2 = {{0x16cad, 0x0, 0x0, 0x20000}};
  // -6534.99
  s21_decimal dec_check = {{0x9f8bb, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_209) {
  // -0.6914829969535406
  s21_decimal dec_1 = {{0x500431ae, 0x189100, 0x0, 0x80100000}};
  // -9426219
  s21_decimal dec_2 = {{0x8fd52b, 0x0, 0x0, 0x80000000}};
  // 6518070.1640604065209914
  s21_decimal dec_check = {{0xae3c1e3a, 0x73f24ff8, 0xdcd, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_210) {
  // -6765417293906
  s21_decimal dec_1 = {{0x324b6852, 0x627, 0x0, 0x80000000}};
  // -2619256
  s21_decimal dec_2 = {{0x27f778, 0x0, 0x0, 0x80000000}};
  // 17720359839567053936
  s21_decimal dec_check = {{0x397e0470, 0xf5eb5d63, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_211) {
  // 1048600
  s21_decimal dec_1 = {{0x100018, 0x0, 0x0, 0x0}};
  // 99008471350612
  s21_decimal dec_2 = {{0x34c3bd54, 0x5a0c, 0x0, 0x0}};
  // 103820283058251743200
  s21_decimal dec_check = {{0xc799bfe0, 0xa0cbbd60, 0x5, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_212) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // -354057
  s21_decimal dec_2 = {{0x56709, 0x0, 0x0, 0x80000000}};
  // -1062171
  s21_decimal dec_check = {{0x10351b, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_213) {
  // -6555757018154
  s21_decimal dec_1 = {{0x61917c2a, 0x5f6, 0x0, 0x80000000}};
  // 9200737784007342
  s21_decimal dec_2 = {{0xb3498aae, 0x20b005, 0x0, 0x0}};
  // -60317801299700814098763286668
  s21_decimal dec_check = {{0x83cb088c, 0x6f29b72e, 0xc2e5b740, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_214) {
  // 2032985304825609066
  s21_decimal dec_1 = {{0xfb83b6a, 0x1c369d5d, 0x0, 0x0}};
  // 56649
  s21_decimal dec_2 = {{0xdd49, 0x0, 0x0, 0x0}};
  // 115166584533065927979834
  s21_decimal dec_check = {{0x86d3733a, 0x316c361b, 0x1863, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_215) {
  // -1927.31478136
  s21_decimal dec_1 = {{0xdfb0f878, 0x2c, 0x0, 0x80080000}};
  // 740441426360339
  s21_decimal dec_2 = {{0x7431f813, 0x2a16d, 0x0, 0x0}};
  // -1427063705755563300.36048104
  s21_decimal dec_check = {{0xf9ceb0e8, 0xd9abc095, 0x760b3f, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_216) {
  // 1024219107
  s21_decimal dec_1 = {{0x3d0c57e3, 0x0, 0x0, 0x0}};
  // -4531043563
  s21_decimal dec_2 = {{0xe123ceb, 0x1, 0x0, 0x80000000}};
  // -4640781391873958241
  s21_decimal dec_check = {{0x86e3e161, 0x40675e16, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_217) {
  // -0.16113914070411978307928
  s21_decimal dec_1 = {{0x2acd7958, 0x897aefdd, 0x369, 0x80170000}};
  // 530474868206189076
  s21_decimal dec_2 = {{0x1b3ba14, 0x75ca015, 0x0, 0x0}};
  // -85480264427876499.514386139001
  s21_decimal dec_check = {{0xadc22d8c, 0xfc981250, 0x1b9ec301, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_219) {
  // 4394290.978059
  s21_decimal dec_1 = {{0x20271d0b, 0x3ff, 0x0, 0x60000}};
  // -470294339
  s21_decimal dec_2 = {{0x1c081f43, 0x0, 0x0, 0x80000000}};
  // -2066610170899920.908001
  s21_decimal dec_check = {{0x4318eee1, 0x7fa3910, 0x70, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_220) {
  // -39
  s21_decimal dec_1 = {{0x27, 0x0, 0x0, 0x80000000}};
  // -4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x80000000}};
  // 156
  s21_decimal dec_check = {{0x9c, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_221) {
  // 603.70775
  s21_decimal dec_1 = {{0x3992f57, 0x0, 0x0, 0x50000}};
  // 550983902717412
  s21_decimal dec_2 = {{0xefcc65e4, 0x1f51d, 0x0, 0x0}};
  // 332633252195747684.34300
  s21_decimal dec_check = {{0x966f7c7c, 0x355e828d, 0x70b, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_222) {
  // 0.430
  s21_decimal dec_1 = {{0x1ae, 0x0, 0x0, 0x30000}};
  // 49.3
  s21_decimal dec_2 = {{0x1ed, 0x0, 0x0, 0x10000}};
  // 21.1990
  s21_decimal dec_check = {{0x33c16, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_223) {
  // 9230670226055034142.152
  s21_decimal dec_1 = {{0xfd7dc8, 0x65486069, 0x1f4, 0x30000}};
  // 15806.94356965
  s21_decimal dec_2 = {{0x8b9c3e5, 0x170, 0x0, 0x80000}};
  // 145908683373300333820300.76041
  s21_decimal dec_check = {{0xb3106889, 0x7d398800, 0x2f25488d, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_224) {
  // -718
  s21_decimal dec_1 = {{0x2ce, 0x0, 0x0, 0x80000000}};
  // 9139
  s21_decimal dec_2 = {{0x23b3, 0x0, 0x0, 0x0}};
  // -6561802
  s21_decimal dec_check = {{0x64200a, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_225) {
  // -0.4158577964
  s21_decimal dec_1 = {{0xf7dedd2c, 0x0, 0x0, 0x800a0000}};
  // -7.87817
  s21_decimal dec_2 = {{0xc0569, 0x0, 0x0, 0x80050000}};
  // 3.276198415864588
  s21_decimal dec_check = {{0x62ca930c, 0xba3af, 0x0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_226) {
  // 8385.101
  s21_decimal dec_1 = {{0x7ff24d, 0x0, 0x0, 0x30000}};
  // 421
  s21_decimal dec_2 = {{0x1a5, 0x0, 0x0, 0x0}};
  // 3530127.521
  s21_decimal dec_check = {{0xd26978a1, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_227) {
  // -5184.377816109010180
  s21_decimal dec_1 = {{0xde97cd04, 0x47f29c27, 0x0, 0x800f0000}};
  // -951080454379.446
  s21_decimal dec_2 = {{0xaca2d7b6, 0x36100, 0x0, 0x80030000}};
  // 4930760409019677.3402963211968
  s21_decimal dec_check = {{0xa685f6c0, 0xbb799b00, 0x9f524b4d, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_228) {
  // -5278140
  s21_decimal dec_1 = {{0x5089bc, 0x0, 0x0, 0x80000000}};
  // 37265825079
  s21_decimal dec_2 = {{0xad375d37, 0x8, 0x0, 0x0}};
  // -196694241982473060
  s21_decimal dec_check = {{0xf6bae364, 0x2bacc5e, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_229) {
  // 768
  s21_decimal dec_1 = {{0x300, 0x0, 0x0, 0x0}};
  // 6704870992885819
  s21_decimal dec_2 = {{0x6dcbb83b, 0x17d20b, 0x0, 0x0}};
  // 5149340922536308992
  s21_decimal dec_check = {{0x6328b100, 0x47762249, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_230) {
  // 70.9646574228775403206590387
  s21_decimal dec_1 = {{0x6071bfb3, 0xdfb07c44, 0x24b0181, 0x190000}};
  // -350678703597577014
  s21_decimal dec_2 = {{0x463a6336, 0x4dddc6c, 0x0, 0x80000000}};
  // -24885794066300866449.775011629
  s21_decimal dec_check = {{0x20b4272d, 0x89176daa, 0x50690bdf, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_231) {
  // -414
  s21_decimal dec_1 = {{0x19e, 0x0, 0x0, 0x80000000}};
  // -5188.359964749
  s21_decimal dec_2 = {{0x25a484d, 0x4b8, 0x0, 0x80090000}};
  // 2147981.025406086
  s21_decimal dec_check = {{0xce00ec86, 0x7a193, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_232) {
  // 0.08793
  s21_decimal dec_1 = {{0x2259, 0x0, 0x0, 0x50000}};
  // -20.8603928626696423
  s21_decimal dec_2 = {{0xf88b90e7, 0x2e51c2a, 0x0, 0x80100000}};
  // -1.834254344414541647439
  s21_decimal dec_check = {{0xf1c40e4f, 0x6f647ff2, 0x63, 0x80150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_233) {
  // -3.5
  s21_decimal dec_1 = {{0x23, 0x0, 0x0, 0x80010000}};
  // 11982774396854.370232619
  s21_decimal dec_2 = {{0xb662e92b, 0x9666827a, 0x289, 0x90000}};
  // -41939710388990.2958141665
  s21_decimal dec_check = {{0xef85e0e1, 0x9003d6c6, 0x58cf, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_234) {
  // -840
  s21_decimal dec_1 = {{0x348, 0x0, 0x0, 0x80000000}};
  // -54088080
  s21_decimal dec_2 = {{0x3395190, 0x0, 0x0, 0x80000000}};
  // 45433987200
  s21_decimal dec_check = {{0x9413a080, 0xa, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_235) {
  // -89.8
  s21_decimal dec_1 = {{0x382, 0x0, 0x0, 0x80010000}};
  // -92282
  s21_decimal dec_2 = {{0x1687a, 0x0, 0x0, 0x80000000}};
  // 8286923.6
  s21_decimal dec_check = {{0x4f07bf4, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_236) {
  // 2986459.657203
  s21_decimal dec_1 = {{0x56ddf3f3, 0x2b7, 0x0, 0x60000}};
  // 909086799178521
  s21_decimal dec_2 = {{0x43bc2b19, 0x33acf, 0x0, 0x0}};
  // 2714951050642458327660.536763
  s21_decimal dec_check = {{0x831aa3bb, 0x5d6b40d3, 0x8c5c13f, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_237) {
  // -7263727022
  s21_decimal dec_1 = {{0xb0f3adae, 0x1, 0x0, 0x80000000}};
  // 945.685648403697631
  s21_decimal dec_2 = {{0x36498fdf, 0xd1fc016, 0x0, 0xf0000}};
  // -6869202398627.529647012084882
  s21_decimal dec_check = {{0x7ce67c92, 0x31153c64, 0x16321230, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_238) {
  // -808504
  s21_decimal dec_1 = {{0xc5638, 0x0, 0x0, 0x80000000}};
  // 85285667.97540
  s21_decimal dec_2 = {{0xb631c4e4, 0x7c1, 0x0, 0x50000}};
  // -68953803700782.80160
  s21_decimal dec_check = {{0xcdb7a9e0, 0x5fb14fe9, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_239) {
  // -551247008483
  s21_decimal dec_1 = {{0x58e1d2e3, 0x80, 0x0, 0x80000000}};
  // 286536
  s21_decimal dec_2 = {{0x45f48, 0x0, 0x0, 0x0}};
  // -157952112822684888
  s21_decimal dec_check = {{0x18518cd8, 0x231289c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_240) {
  // -80039873455108
  s21_decimal dec_1 = {{0xbc39a404, 0x48cb, 0x0, 0x80000000}};
  // -3288
  s21_decimal dec_2 = {{0xcd8, 0x0, 0x0, 0x80000000}};
  // 263171103920395104
  s21_decimal dec_check = {{0x84529360, 0x3a6f8b9, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_241) {
  // -17950257
  s21_decimal dec_1 = {{0x111e631, 0x0, 0x0, 0x80000000}};
  // 2513.577205150764293
  s21_decimal dec_2 = {{0x8c87cd05, 0x22e20526, 0x0, 0xf0000}};
  // -45119356821.797942805773301
  s21_decimal dec_check = {{0x8a85bbf5, 0x3bff7b74, 0x255265, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_243) {
  // -8691.106
  s21_decimal dec_1 = {{0x849da2, 0x0, 0x0, 0x80030000}};
  // 290567002736
  s21_decimal dec_2 = {{0xa7249a70, 0x43, 0x0, 0x0}};
  // -2525348620880866.016
  s21_decimal dec_check = {{0xd9a06ae0, 0x230bd730, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_244) {
  // 0.047
  s21_decimal dec_1 = {{0x2f, 0x0, 0x0, 0x30000}};
  // -85886.930646998088
  s21_decimal dec_2 = {{0x58101c48, 0x13121b5, 0x0, 0x800c0000}};
  // -4036.685740408910136
  s21_decimal dec_check = {{0x2af53138, 0x3805304b, 0x0, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_245) {
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 80609211
  s21_decimal dec_2 = {{0x4cdffbb, 0x0, 0x0, 0x0}};
  // -725482899
  s21_decimal dec_check = {{0x2b3dfd93, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_246) {
  // -9.060
  s21_decimal dec_1 = {{0x2364, 0x0, 0x0, 0x80030000}};
  // -43224.06186844167374894593023
  s21_decimal dec_2 = {{0x11f8f3ff, 0xe8352ff0, 0xdf7691c, 0x80170000}};
  // 391610.00052808156416545012788
  s21_decimal dec_check = {{0x3c6e3c34, 0xb2aead32, 0x7e893852, 0x170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_247) {
  // -804284036268.1
  s21_decimal dec_1 = {{0x9ea48eb9, 0x750, 0x0, 0x80010000}};
  // -733146501184522.028981003402
  s21_decimal dec_2 = {{0x5199a48a, 0x777afaa4, 0x25e71cf, 0x800c0000}};
  // 589658027148522735167320739.46
  s21_decimal dec_check = {{0x3b71c7da, 0x4a2b62c0, 0xbe875e6a, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_248) {
  // 94785.5842898
  s21_decimal dec_1 = {{0xb09c5e52, 0xdc, 0x0, 0x70000}};
  // -19894
  s21_decimal dec_2 = {{0x4db6, 0x0, 0x0, 0x80000000}};
  // -1885664413.8612812
  s21_decimal dec_check = {{0x9789b84c, 0x42fe04, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_249) {
  // -46
  s21_decimal dec_1 = {{0x2e, 0x0, 0x0, 0x80000000}};
  // -924700756791939054
  s21_decimal dec_2 = {{0x641e4fee, 0xcd53270, 0x0, 0x80000000}};
  // 42536234812429196484
  s21_decimal dec_check = {{0xfd725cc4, 0x4e4f1031, 0x2, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_250) {
  // 4161282939606969805168912
  s21_decimal dec_1 = {{0x7a7fe110, 0x99a4e69d, 0x3712f, 0x0}};
  // -1.72212090213588462406
  s21_decimal dec_2 = {{0x6876eb46, 0x55ec3fa1, 0x9, 0x80140000}};
  // -7166232329998620734220035.7719
  s21_decimal dec_check = {{0x56680357, 0x5c34da39, 0xe78daf3a, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_251) {
  // 10430138920
  s21_decimal dec_1 = {{0x6daf4a28, 0x2, 0x0, 0x0}};
  // 97252869189
  s21_decimal dec_2 = {{0xa4b90445, 0x16, 0x0, 0x0}};
  // 1014360936009857735880
  s21_decimal dec_check = {{0x844f9cc8, 0xfd15f8fc, 0x36, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_252) {
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // 55699580199787659535871763
  s21_decimal dec_2 = {{0x11946f13, 0x4aff3b2d, 0x2e12d8, 0x0}};
  // 278497900998938297679358815
  s21_decimal dec_check = {{0x57e62b5f, 0x76fc27e1, 0xe65e39, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_253) {
  // 0.54358402
  s21_decimal dec_1 = {{0x33d7182, 0x0, 0x0, 0x80000}};
  // 2754667324
  s21_decimal dec_2 = {{0xa430e33c, 0x0, 0x0, 0x0}};
  // 1497393137.74256248
  s21_decimal dec_check = {{0xce6ce078, 0x213fb1c, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_254) {
  // -731828950717938536930421
  s21_decimal dec_1 = {{0xaa65dc75, 0x86e3c201, 0x9af8, 0x80000000}};
  // 5.2
  s21_decimal dec_2 = {{0x34, 0x0, 0x0, 0x10000}};
  // -3805510543733280392038189.2
  s21_decimal dec_check = {{0x9cb0c7c4, 0x66436856, 0x1f7a7b, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_255) {
  // -0.67652450561296
  s21_decimal dec_1 = {{0x9048ad10, 0x3d87, 0x0, 0x800e0000}};
  // -75365338683.46916433
  s21_decimal dec_2 = {{0x7c84be51, 0x6897259f, 0x0, 0x80080000}};
  // 50986498493.187266080536165618
  s21_decimal dec_check = {{0xe9aa7cf2, 0xafe78789, 0xa4bf0b05, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_256) {
  // -1783489
  s21_decimal dec_1 = {{0x1b36c1, 0x0, 0x0, 0x80000000}};
  // 5226698582846251
  s21_decimal dec_2 = {{0x9860eb2b, 0x1291a7, 0x0, 0x0}};
  // -9321759428821877349739
  s21_decimal dec_check = {{0x20355d6b, 0x55663bb7, 0x1f9, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_257) {
  // -51909110.7186056
  s21_decimal dec_1 = {{0x510cc588, 0x1d81c, 0x0, 0x80070000}};
  // 2592
  s21_decimal dec_2 = {{0xa20, 0x0, 0x0, 0x0}};
  // -134548414982.6257152
  s21_decimal dec_check = {{0xa1500100, 0x12ac1eb4, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_258) {
  // -6905901.425946208855
  s21_decimal dec_1 = {{0x3632a57, 0x5fd6b0c2, 0x0, 0x800c0000}};
  // -446800467345551913.58
  s21_decimal dec_2 = {{0xb103983e, 0x6c0f69c7, 0x2, 0x80020000}};
  // 3085559984555079486024098.4170
  s21_decimal dec_check = {{0x293a586a, 0x4b62eec5, 0x63b3276b, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_259) {
  // 522.31329587
  s21_decimal dec_1 = {{0x293ad733, 0xc, 0x0, 0x80000}};
  // 853741.1977
  s21_decimal dec_2 = {{0xfcde9189, 0x1, 0x0, 0x40000}};
  // 445920378.790688263499
  s21_decimal dec_check = {{0x369b0d4b, 0x2c636dec, 0x18, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_260) {
  // -88009042
  s21_decimal dec_1 = {{0x53ee952, 0x0, 0x0, 0x80000000}};
  // -6676
  s21_decimal dec_2 = {{0x1a14, 0x0, 0x0, 0x80000000}};
  // 587548364392
  s21_decimal dec_check = {{0xcc9c8e68, 0x88, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_261) {
  // -39270.4
  s21_decimal dec_1 = {{0x5fe00, 0x0, 0x0, 0x80010000}};
  // 9874.3
  s21_decimal dec_2 = {{0x181b7, 0x0, 0x0, 0x10000}};
  // -387767710.72
  s21_decimal dec_check = {{0x7469200, 0x9, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_262) {
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 7830227549217.6153622
  s21_decimal dec_2 = {{0x67ef4c16, 0x3ea990b2, 0x4, 0x70000}};
  // -46981365295305.6921732
  s21_decimal dec_check = {{0x6f9bc884, 0x77f9642e, 0x19, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_263) {
  // -839084350496447372302555
  s21_decimal dec_1 = {{0xfbd998db, 0xda91ad18, 0xb1ae, 0x80000000}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 7551759154468026350722995
  s21_decimal dec_check = {{0xdaa65fb3, 0xaf1f15e0, 0x63f25, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_264) {
  // -395361956.199894
  s21_decimal dec_1 = {{0x60f4fdd6, 0x16794, 0x0, 0x80060000}};
  // 9533434
  s21_decimal dec_2 = {{0x9177fa, 0x0, 0x0, 0x0}};
  // -3769157115542580.255996
  s21_decimal dec_check = {{0x57745cfc, 0x53900abc, 0xcc, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_265) {
  // -24
  s21_decimal dec_1 = {{0x18, 0x0, 0x0, 0x80000000}};
  // -377952580.9
  s21_decimal dec_2 = {{0xe146fcb1, 0x0, 0x0, 0x80010000}};
  // 9070861941.6
  s21_decimal dec_check = {{0x1ea7b098, 0x15, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_266) {
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // 5640906751.21769
  s21_decimal dec_2 = {{0x984fce69, 0x20109, 0x0, 0x50000}};
  // 39486347258.52383
  s21_decimal dec_check = {{0x2a2ea4df, 0xe0743, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_267) {
  // 973252
  s21_decimal dec_1 = {{0xed9c4, 0x0, 0x0, 0x0}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -4866260
  s21_decimal dec_check = {{0x4a40d4, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_268) {
  // -5334405
  s21_decimal dec_1 = {{0x516585, 0x0, 0x0, 0x80000000}};
  // 621.20913508090497214841504882
  s21_decimal dec_2 = {{0x92da4472, 0x1cdfec0f, 0xc8b9371d, 0x1a0000}};
  // -3313781116.2212548879533659785
  s21_decimal dec_check = {{0xb12ad689, 0xac9c72a1, 0x6b12f476, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_269) {
  // -56823
  s21_decimal dec_1 = {{0xddf7, 0x0, 0x0, 0x80000000}};
  // 331
  s21_decimal dec_2 = {{0x14b, 0x0, 0x0, 0x0}};
  // -18808413
  s21_decimal dec_check = {{0x11efe5d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_270) {
  // 7677.753628394864
  s21_decimal dec_1 = {{0x51b18570, 0x1b46e0, 0x0, 0xc0000}};
  // 1035
  s21_decimal dec_2 = {{0x40b, 0x0, 0x0, 0x0}};
  // 7946475.005388684240
  s21_decimal dec_check = {{0x48b67bd0, 0x6e478cea, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_271) {
  // -15182
  s21_decimal dec_1 = {{0x3b4e, 0x0, 0x0, 0x80000000}};
  // -7406003384
  s21_decimal dec_2 = {{0xb96ea4b8, 0x1, 0x0, 0x80000000}};
  // 112437943375888
  s21_decimal dec_check = {{0xffac9810, 0x6642, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_272) {
  // -701973129
  s21_decimal dec_1 = {{0x29d74289, 0x0, 0x0, 0x80000000}};
  // -34084578499
  s21_decimal dec_2 = {{0xef9964c3, 0x7, 0x0, 0x80000000}};
  // 23926458219589153371
  s21_decimal dec_check = {{0x9fd6325b, 0x4c0bdafb, 0x1, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_273) {
  // 73080.0740361473031226069
  s21_decimal dec_1 = {{0x3a2942d5, 0xc99ac27e, 0x9ac0, 0x130000}};
  // 617510063116722.5070
  s21_decimal dec_2 = {{0x95034cee, 0x55b25d4e, 0x0, 0x40000}};
  // 45127681130636074881.765805385
  s21_decimal dec_check = {{0x19b0d49, 0xdae09ec, 0x91d0be30, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_274) {
  // 10112890373.719228
  s21_decimal dec_1 = {{0xc660c4bc, 0x23ed9e, 0x0, 0x60000}};
  // 23796214.2794684
  s21_decimal dec_2 = {{0xe0fdc3bc, 0xd86c, 0x0, 0x70000}};
  // 240648506317796017.52150669840
  s21_decimal dec_check = {{0x85f27a10, 0xc6964496, 0x4dc1fa56, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_275) {
  // -9467395187.375792
  s21_decimal dec_1 = {{0xb7177eb0, 0x21a28b, 0x0, 0x80060000}};
  // 51.743329283794635
  s21_decimal dec_2 = {{0xa974e6cb, 0xb7d448, 0x0, 0xf0000}};
  // -489874546640.19821369363749848
  s21_decimal dec_check = {{0x66035bd8, 0x90329de8, 0x9e497906, 0x80110000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_276) {
  // 17688.942893
  s21_decimal dec_1 = {{0x1e57d92d, 0x4, 0x0, 0x60000}};
  // 61133364977300787254
  s21_decimal dec_2 = {{0x6451d036, 0x5065578c, 0x3, 0x0}};
  // 1081384601940399867019948.2858
  s21_decimal dec_check = {{0xe92469ea, 0x5baaeeea, 0x22f100f7, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_277) {
  // -575021957
  s21_decimal dec_1 = {{0x22462385, 0x0, 0x0, 0x80000000}};
  // 88.757582015414323196381
  s21_decimal dec_2 = {{0xa3d31dd, 0x8ee3b932, 0x12cb, 0x150000}};
  // -51037558509.091548290213497938
  s21_decimal dec_check = {{0xe58c4c52, 0xb21671a8, 0xa4e94766, 0x80120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_278) {
  // -2952216
  s21_decimal dec_1 = {{0x2d0c18, 0x0, 0x0, 0x80000000}};
  // 0.284565108796313912736379881
  s21_decimal dec_2 = {{0x6baa73e9, 0x75620466, 0xeb6301, 0x1b0000}};
  // -840097.66723021867420294446677
  s21_decimal dec_check = {{0x9eff663c, 0xf49be468, 0x1b252001, 0x80160000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_279) {
  // -1333002561649954940
  s21_decimal dec_1 = {{0x6bd4d07c, 0x127fc6c4, 0x0, 0x80000000}};
  // 27.051191665415262
  s21_decimal dec_2 = {{0x5df7d45e, 0x601aea, 0x0, 0xf0000}};
  // -36059307785682455030.309458688
  s21_decimal dec_check = {{0xf74a1300, 0xfa5f75be, 0x74838f6f, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_280) {
  // -424518812876
  s21_decimal dec_1 = {{0xd74b04cc, 0x62, 0x0, 0x80000000}};
  // 9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  // -3820669315884
  s21_decimal dec_check = {{0x91a32b2c, 0x379, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_281) {
  // 87.0792140021
  s21_decimal dec_1 = {{0xbf4194f5, 0xca, 0x0, 0xa0000}};
  // 86743.8616
  s21_decimal dec_2 = {{0x33b41018, 0x0, 0x0, 0x40000}};
  // 7553587.28763494450936
  s21_decimal dec_check = {{0x92b946f8, 0xf2b549bf, 0x28, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_282) {
  // -242679
  s21_decimal dec_1 = {{0x3b3f7, 0x0, 0x0, 0x80000000}};
  // 2522144805021794464
  s21_decimal dec_2 = {{0x576bc0a0, 0x23007556, 0x0, 0x0}};
  // -612071579137884058729056
  s21_decimal dec_check = {{0xf286ba60, 0x777f9bb1, 0x819c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_283) {
  // 29730407527736
  s21_decimal dec_1 = {{0x26613538, 0x1b0a, 0x0, 0x0}};
  // 175437
  s21_decimal dec_2 = {{0x2ad4d, 0x0, 0x0, 0x0}};
  // 5215813505443420632
  s21_decimal dec_check = {{0xa6a3d9d8, 0x48624abf, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_284) {
  // 744775685895.20004
  s21_decimal dec_1 = {{0x3b835c84, 0x10898f4, 0x0, 0x50000}};
  // -341167763411466.2
  s21_decimal dec_2 = {{0x19783466, 0xc1ee7, 0x0, 0x80010000}};
  // -254093455000106071412002078.70
  s21_decimal dec_check = {{0x59421ffe, 0xa097a348, 0x521a1e33, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_285) {
  // 7631.0342274469294929707
  s21_decimal dec_1 = {{0xc89a772b, 0xcabcd51b, 0x1028, 0x130000}};
  // -24784547228
  s21_decimal dec_2 = {{0xc5462d9c, 0x5, 0x0, 0x80000000}};
  // -189131728208642.91788211840817
  s21_decimal dec_check = {{0x9b776731, 0xc7a6cf6, 0x3d1c9c21, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_286) {
  // 9567226681730504170.9664112269
  s21_decimal dec_1 = {{0xda990e8d, 0x7f2ae324, 0x35223e88, 0xa0000}};
  // -6509801967.549
  s21_decimal dec_2 = {{0xae6f0fbd, 0x5eb, 0x0, 0x80030000}};
  // -62280751076716526464328894886
  s21_decimal dec_check = {{0xa6f94760, 0xaa101788, 0x2296caa9, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_287) {
  // 89.289650
  s21_decimal dec_1 = {{0x55273b2, 0x0, 0x0, 0x60000}};
  // -0.497146518776892980767
  s21_decimal dec_2 = {{0x1ac57e1f, 0xf34b3cd5, 0x1a, 0x80150000}};
  // -44.390038660307202340142161550
  s21_decimal dec_check = {{0x55e79e8e, 0x9c6c75ec, 0x8f6e9451, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_288) {
  // -985
  s21_decimal dec_1 = {{0x3d9, 0x0, 0x0, 0x80000000}};
  // -38581.3
  s21_decimal dec_2 = {{0x5e315, 0x0, 0x0, 0x80010000}};
  // 38002580.5
  s21_decimal dec_check = {{0x16a6bbcd, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_289) {
  // -89146.2845603804595023445
  s21_decimal dec_1 = {{0x6f2ee55, 0x4c35b814, 0xbcc6, 0x80130000}};
  // -3585.36073
  s21_decimal dec_2 = {{0x155ed389, 0x0, 0x0, 0x80050000}};
  // 319621587.88819341335906131323
  s21_decimal dec_check = {{0x5d0a9d7b, 0xcee82010, 0x67467a63, 0x140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_290) {
  // -24052.1
  s21_decimal dec_1 = {{0x3ab89, 0x0, 0x0, 0x80010000}};
  // 219419487641
  s21_decimal dec_2 = {{0x166bad99, 0x33, 0x0, 0x0}};
  // -5277499458690096.1
  s21_decimal dec_check = {{0xf56019e1, 0xbb7e93, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_291) {
  // -8006.93096652876469379611141
  s21_decimal dec_1 = {{0x24353a05, 0xbe87ce4a, 0x296515b, 0x80170000}};
  // 67593954586316347989918
  s21_decimal dec_2 = {{0x77e2df9e, 0x468f1022, 0xe50, 0x0}};
  // -541220128127315383291808114.24
  s21_decimal dec_check = {{0x1517b0a0, 0x8ae74f71, 0xaee0ae01, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_292) {
  // -7752947631.26602704930131
  s21_decimal dec_1 = {{0x4c18c553, 0xd0360ff1, 0xa42c, 0x800e0000}};
  // -9886371
  s21_decimal dec_2 = {{0x96daa3, 0x0, 0x0, 0x80000000}};
  // 76648516626267143.105428041446
  s21_decimal dec_check = {{0xa443aee6, 0x3312e6f5, 0xf7aa2abc, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_293) {
  // -2459153303061
  s21_decimal dec_1 = {{0x90f58615, 0x23c, 0x0, 0x80000000}};
  // 4.23737324045
  s21_decimal dec_2 = {{0xa8b6720d, 0x62, 0x0, 0xb0000}};
  // -10420350400554.91047401745
  s21_decimal dec_check = {{0xcd1b2911, 0xd52c9835, 0xdca8, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_294) {
  // 4767282.5
  s21_decimal dec_1 = {{0x2d76df9, 0x0, 0x0, 0x10000}};
  // 855603
  s21_decimal dec_2 = {{0xd0e33, 0x0, 0x0, 0x0}};
  // 4078901208847.5
  s21_decimal dec_check = {{0xee93869b, 0x2518, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_295) {
  // -994244.2453531412207981852689
  s21_decimal dec_1 = {{0x98447811, 0x6583dcaa, 0x20203215, 0x80160000}};
  // -415818939
  s21_decimal dec_2 = {{0x18c8e4bb, 0x0, 0x0, 0x80000000}};
  // 413425587209598.86274946613164
  s21_decimal dec_check = {{0x82f73fac, 0x11972143, 0x8595c357, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_296) {
  // -0.578274804
  s21_decimal dec_1 = {{0x2277c5f4, 0x0, 0x0, 0x80090000}};
  // 5103091.33949568
  s21_decimal dec_2 = {{0x9aa79a80, 0x1d01f, 0x0, 0x80000}};
  // -2950989.14414096181084672
  s21_decimal dec_check = {{0x3323c200, 0x581dd690, 0x3e7d, 0x80110000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_297) {
  // 71.204056019261
  s21_decimal dec_1 = {{0x7c77313d, 0x40c2, 0x0, 0xc0000}};
  // -39.270
  s21_decimal dec_2 = {{0x9966, 0x0, 0x0, 0x80030000}};
  // -2796.183279876379470
  s21_decimal dec_check = {{0xd3eb134e, 0x26ce09e0, 0x0, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_298) {
  // 8148783032286431
  s21_decimal dec_1 = {{0x65fdbcdf, 0x1cf346, 0x0, 0x0}};
  // 681.69990
  s21_decimal dec_2 = {{0x4103106, 0x0, 0x0, 0x50000}};
  // 5555024578231356784.05690
  s21_decimal dec_check = {{0x3f091c3a, 0xd93c83fb, 0x75a1, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_299) {
  // 534899876882751680196
  s21_decimal dec_1 = {{0xfc97eec4, 0xff3a1c00, 0x1c, 0x0}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -4279199015062013441568
  s21_decimal dec_check = {{0xe4bf7620, 0xf9d0e007, 0xe7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_300) {
  // 0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x10000}};
  // -0.061
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x80030000}};
  // -0.0427
  s21_decimal dec_check = {{0x1ab, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_301) {
  // 14100.67846726418044301
  s21_decimal dec_1 = {{0xf01a158d, 0x709f53bc, 0x4c, 0x110000}};
  // -73699132.64
  s21_decimal dec_2 = {{0xb747f3b0, 0x1, 0x0, 0x80020000}};
  // -1039207772672.8947323902879508
  s21_decimal dec_check = {{0xe0ebe714, 0x65dbf1fa, 0x2194200e, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_302) {
  // -81
  s21_decimal dec_1 = {{0x51, 0x0, 0x0, 0x80000000}};
  // 9821
  s21_decimal dec_2 = {{0x265d, 0x0, 0x0, 0x0}};
  // -795501
  s21_decimal dec_check = {{0xc236d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_303) {
  // 73269891977188099.4
  s21_decimal dec_1 = {{0x1850be22, 0xa2b11c9, 0x0, 0x10000}};
  // 49593251521.57
  s21_decimal dec_2 = {{0xaed0639d, 0x482, 0x0, 0x20000}};
  // 3633692181782953246299146404.1
  s21_decimal dec_check = {{0x5e06d669, 0xd0fb580c, 0x7569327e, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_304) {
  // -29.98408620
  s21_decimal dec_1 = {{0xb2b815ac, 0x0, 0x0, 0x80080000}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // -179.90451720
  s21_decimal dec_check = {{0x30508208, 0x4, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_305) {
  // 74110482224523
  s21_decimal dec_1 = {{0x30f7958b, 0x4367, 0x0, 0x0}};
  // 0.77
  s21_decimal dec_2 = {{0x4d, 0x0, 0x0, 0x20000}};
  // 57065071312882.71
  s21_decimal dec_check = {{0xba77facf, 0x144609, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_306) {
  // -6623019870466593431152657
  s21_decimal dec_1 = {{0x341ae811, 0xa068c631, 0x57a7a, 0x80000000}};
  // 8676
  s21_decimal dec_2 = {{0x21e4, 0x0, 0x0, 0x0}};
  // -57461320396168164608680452132
  s21_decimal dec_check = {{0xdfe0e024, 0x5edcdb89, 0xb9aae3e4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_307) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -98244.071
  s21_decimal dec_2 = {{0x5db15e7, 0x0, 0x0, 0x80030000}};
  // 785952.568
  s21_decimal dec_check = {{0x2ed8af38, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_308) {
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -474806791722.7308297502186
  s21_decimal dec_2 = {{0x60083dea, 0x470d6842, 0x3ed71, 0x800d0000}};
  // 474806791722.7308297502186
  s21_decimal dec_check = {{0x60083dea, 0x470d6842, 0x3ed71, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_309) {
  // 1067.436723
  s21_decimal dec_1 = {{0x3f9fcab3, 0x0, 0x0, 0x60000}};
  // 3924979956080975
  s21_decimal dec_2 = {{0x9c08614f, 0xdf1bf, 0x0, 0x0}};
  // 4189667742159759876.644925
  s21_decimal dec_check = {{0x97b5603d, 0x57e9333f, 0x37732, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_310) {
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 100260063450.966411073856
  s21_decimal dec_2 = {{0x51a65940, 0x1be2dc12, 0x153b, 0xc0000}};
  // -902340571058.697699664704
  s21_decimal dec_check = {{0xded92340, 0xfaf9bca4, 0xbf13, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_311) {
  // -5295508
  s21_decimal dec_1 = {{0x50cd94, 0x0, 0x0, 0x80000000}};
  // 981094396708471067.1937
  s21_decimal dec_2 = {{0x61df3641, 0xda32d574, 0x213, 0x40000}};
  // -5195393226524882204092775.8996
  s21_decimal dec_check = {{0x47cd6a94, 0x8eb02f69, 0xa7df4917, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_312) {
  // 37000.536597519738
  s21_decimal dec_1 = {{0xc064dd7a, 0x8373ca, 0x0, 0xc0000}};
  // -18749474011678
  s21_decimal dec_2 = {{0x73bcfa1e, 0x110d, 0x0, 0x80000000}};
  // -693740599353337058.50364750036
  s21_decimal dec_check = {{0x5991e8d4, 0xcd29da0a, 0xe028e09c, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_313) {
  // 48.282853545265087756
  s21_decimal dec_1 = {{0x63bc450c, 0x9e0f277c, 0x2, 0x120000}};
  // 5017719454159.947
  s21_decimal dec_2 = {{0xd9a5d44b, 0x11d396, 0x0, 0x30000}};
  // 242269813536432.19799630292022
  s21_decimal dec_check = {{0xc37a2436, 0xd1bcf175, 0x4e4816da, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_314) {
  // 2776195486008850110
  s21_decimal dec_1 = {{0xea99b6be, 0x26870715, 0x0, 0x0}};
  // -9320
  s21_decimal dec_2 = {{0x2468, 0x0, 0x0, 0x80000000}};
  // -25874141929602483025200
  s21_decimal dec_check = {{0xec24f530, 0xa3d9f5e4, 0x57a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_315) {
  // -8757461154
  s21_decimal dec_1 = {{0x9fc40a2, 0x2, 0x0, 0x80000000}};
  // -711593100
  s21_decimal dec_2 = {{0x2a6a0c8c, 0x0, 0x0, 0x80000000}};
  // 6231748930704437400
  s21_decimal dec_check = {{0xa00ef098, 0x567b9ea2, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_316) {
  // 82
  s21_decimal dec_1 = {{0x52, 0x0, 0x0, 0x0}};
  // 37119952626
  s21_decimal dec_2 = {{0xa48586f2, 0x8, 0x0, 0x0}};
  // 3043836115332
  s21_decimal dec_check = {{0xb2c53984, 0x2c4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_317) {
  // 25392141.82
  s21_decimal dec_1 = {{0x97595566, 0x0, 0x0, 0x20000}};
  // -91
  s21_decimal dec_2 = {{0x5b, 0x0, 0x0, 0x80000000}};
  // -2310684905.62
  s21_decimal dec_check = {{0xccc15b42, 0x35, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_318) {
  // -7041754309
  s21_decimal dec_1 = {{0xa3b8a4c5, 0x1, 0x0, 0x80000000}};
  // 1.6244434113097345
  s21_decimal dec_2 = {{0xce36e81, 0x39b63a, 0x0, 0x100000}};
  // -11438931391.3169822490209605
  s21_decimal dec_check = {{0x2d86ad45, 0x21f7ec42, 0x5e9ee1, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_319) {
  // 681381918072963.7
  s21_decimal dec_1 = {{0xe7d4c525, 0x183521, 0x0, 0x10000}};
  // 8153
  s21_decimal dec_2 = {{0x1fd9, 0x0, 0x0, 0x0}};
  // 5555306778048873046.1
  s21_decimal dec_check = {{0x473a975d, 0x2f424d0, 0x3, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_320) {
  // 471.888633970981634590016
  s21_decimal dec_1 = {{0xf17c4540, 0x2254c778, 0x63ed, 0x150000}};
  // 3394948699590175459
  s21_decimal dec_2 = {{0xe5bf2ae3, 0x2f1d47da, 0x0, 0x0}};
  // 1602037704251168395254.9752965
  s21_decimal dec_check = {{0x6906f085, 0xad28c615, 0x33c3becb, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_321) {
  // -32288146.52249812091308432
  s21_decimal dec_1 = {{0xfbfc8990, 0x649d5c00, 0x2abba, 0x80110000}};
  // -120082715.989
  s21_decimal dec_2 = {{0xf57cd555, 0x1b, 0x0, 0x80030000}};
  // 3877248328672359.8523920857526
  s21_decimal dec_check = {{0xfe4b9b6, 0x9b2ebbb2, 0x7d47d8b2, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_322) {
  // 20504743359585.706399151
  s21_decimal dec_1 = {{0xbfc955af, 0x907a36c1, 0x457, 0x90000}};
  // -3.55789684857
  s21_decimal dec_2 = {{0xd6b7c079, 0x52, 0x0, 0x800b0000}};
  // -72953761779806.619098356625424
  s21_decimal dec_check = {{0x9a83b010, 0xa200276a, 0xebb9eff6, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_323) {
  // -7541.68160020426564
  s21_decimal dec_1 = {{0x1eed6f44, 0xa7757f2, 0x0, 0x800e0000}};
  // -8358
  s21_decimal dec_2 = {{0x20a6, 0x0, 0x0, 0x80000000}};
  // 63033374.81450725221912
  s21_decimal dec_check = {{0xbbdea618, 0xb4614add, 0x155, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_324) {
  // -959708308
  s21_decimal dec_1 = {{0x3933fc94, 0x0, 0x0, 0x80000000}};
  // 1.09178887
  s21_decimal dec_2 = {{0x681f007, 0x0, 0x0, 0x80000}};
  // -1047798849.12093196
  s21_decimal dec_check = {{0xbcaa80c, 0x17440c0, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_325) {
  // 64.3092703620495077081401
  s21_decimal dec_1 = {{0x15910139, 0x2014e3ab, 0x882e, 0x160000}};
  // 92.268541652635
  s21_decimal dec_2 = {{0xf1a62e9b, 0x53ea, 0x0, 0xc0000}};
  // 5933.7225910513305087345213137
  s21_decimal dec_check = {{0xf9b4bed1, 0x127420a1, 0xbfba9a56, 0x190000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_326) {
  // 8043685.6321052643114321
  s21_decimal dec_1 = {{0x84cb3d51, 0x7d9fbb44, 0x1108, 0x100000}};
  // -964
  s21_decimal dec_2 = {{0x3c4, 0x0, 0x0, 0x80000000}};
  // -7754112949.3494747962205444
  s21_decimal dec_check = {{0xd52e504, 0xd7d2e04, 0x4023f9, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_327) {
  // 1508930359.4131427853705065170
  s21_decimal dec_1 = {{0x3c16b2d2, 0xe70c492b, 0x30c19452, 0x130000}};
  // 986882.237880
  s21_decimal dec_2 = {{0xc6c3e5b8, 0xe5, 0x0, 0x60000}};
  // 1489136569902715.0755104219964
  s21_decimal dec_check = {{0x4c8ae33c, 0x1baa5784, 0x301dd958, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_328) {
  // 4880748.6874909040217
  s21_decimal dec_1 = {{0x367e5e59, 0xa55706b8, 0x2, 0xd0000}};
  // -4532
  s21_decimal dec_2 = {{0x11b4, 0x0, 0x0, 0x80000000}};
  // -22119553051.7087770263444
  s21_decimal dec_check = {{0xb51e3f94, 0x8a2f524, 0x2ed7, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_329) {
  // 49026522624392
  s21_decimal dec_1 = {{0xe0773188, 0x2c96, 0x0, 0x0}};
  // 48
  s21_decimal dec_2 = {{0x30, 0x0, 0x0, 0x0}};
  // 2353273085970816
  s21_decimal dec_check = {{0x16594980, 0x85c4a, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_330) {
  // -7.154
  s21_decimal dec_1 = {{0x1bf2, 0x0, 0x0, 0x80030000}};
  // -0.28
  s21_decimal dec_2 = {{0x1c, 0x0, 0x0, 0x80020000}};
  // 2.00312
  s21_decimal dec_check = {{0x30e78, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_331) {
  // 39614.330776328993
  s21_decimal dec_1 = {{0x21f01b21, 0x8cbd06, 0x0, 0xc0000}};
  // -682816161.7105541416548290671
  s21_decimal dec_2 = {{0x9117d06f, 0xf7a767cd, 0x16101f76, 0x80130000}};
  // -27049305289425.239475260799021
  s21_decimal dec_check = {{0x38e8b82d, 0xf36fca83, 0x5766a931, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_332) {
  // 53955585
  s21_decimal dec_1 = {{0x3374c01, 0x0, 0x0, 0x0}};
  // 9115075.0763447915939669444
  s21_decimal dec_2 = {{0xbdd0a5c4, 0x199e3c92, 0x4b65ec, 0x130000}};
  // 491809208063102.89215556895576
  s21_decimal dec_check = {{0x76bf4358, 0x26e6b9dc, 0x9ee98113, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_333) {
  // 92055018
  s21_decimal dec_1 = {{0x57ca5ea, 0x0, 0x0, 0x0}};
  // -45172148090066373
  s21_decimal dec_2 = {{0x50a655c5, 0xa07bd4, 0x0, 0x80000000}};
  // -4158322905529725587709714
  s21_decimal dec_check = {{0x51be5f12, 0x22eb584b, 0x3708f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_334) {
  // 656
  s21_decimal dec_1 = {{0x290, 0x0, 0x0, 0x0}};
  // 58896862428.951
  s21_decimal dec_2 = {{0xfe903f17, 0x3590, 0x0, 0x30000}};
  // 38636341753391.856
  s21_decimal dec_check = {{0x51a1aaf0, 0x89438c, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_335) {
  // 280141.35795323686766
  s21_decimal dec_1 = {{0xa1d2cf6e, 0x84c63414, 0x1, 0xe0000}};
  // -1253481951
  s21_decimal dec_2 = {{0x4ab69ddf, 0x0, 0x0, 0x80000000}};
  // -351152135923012.71563958560466
  s21_decimal dec_check = {{0x840d26d2, 0x340a010c, 0x71769fb7, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_336) {
  // 33508463691893399728
  s21_decimal dec_1 = {{0x3c6160b0, 0xd105fa31, 0x1, 0x0}};
  // 58359.1488148051399776
  s21_decimal dec_2 = {{0x6e311460, 0xa2f57678, 0x1f, 0x100000}};
  // 1955525419150701763857040.5878
  s21_decimal dec_check = {{0x2b34aff6, 0xe59bcfe9, 0x3f2fba25, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_337) {
  // -2.8
  s21_decimal dec_1 = {{0x1c, 0x0, 0x0, 0x80010000}};
  // -978018745796141002507465
  s21_decimal dec_2 = {{0xcf97c4c9, 0x80a05031, 0xcf1a, 0x80000000}};
  // 2738452488229194807020902.0
  s21_decimal dec_check = {{0xb49985fc, 0x1188c572, 0x16a6e6, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_338) {
  // 145016
  s21_decimal dec_1 = {{0x23678, 0x0, 0x0, 0x0}};
  // -51462884050556419583134
  s21_decimal dec_2 = {{0x83382c9e, 0xcefc1def, 0xae5, 0x80000000}};
  // -7462941593475489742267760144
  s21_decimal dec_check = {{0xb4fa3e10, 0x705d9463, 0x181d335a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_339) {
  // 2944524541875485544278
  s21_decimal dec_1 = {{0x7c220f56, 0x9f7c9e13, 0x9f, 0x0}};
  // 40
  s21_decimal dec_2 = {{0x28, 0x0, 0x0, 0x0}};
  // 117780981675019421771120
  s21_decimal dec_check = {{0x65526570, 0xeb78b30b, 0x18f0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_340) {
  // -1080531108176907627443
  s21_decimal dec_1 = {{0xdbc26bb3, 0x9361a5fc, 0x3a, 0x80000000}};
  // 61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x0}};
  // -65912397598791365274023
  s21_decimal dec_check = {{0x5d53a9a7, 0x1e448d40, 0xdf5, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_341) {
  // 9270243.58743063
  s21_decimal dec_1 = {{0xad99dc17, 0x34b1f, 0x0, 0x80000}};
  // 29494585849095.54782
  s21_decimal dec_2 = {{0xc142a45e, 0x28ee94f4, 0x0, 0x50000}};
  // 273421995331500205432.80284610
  s21_decimal dec_check = {{0xc6cf83c2, 0xb7fabfa0, 0x5858eff6, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_342) {
  // -99592482
  s21_decimal dec_1 = {{0x5efa922, 0x0, 0x0, 0x80000000}};
  // -65947953214.1233644646235
  s21_decimal dec_2 = {{0x3bb62f5b, 0x7502ba24, 0x8ba6, 0x800d0000}};
  // 6567920343414423321.2224555605
  s21_decimal dec_check = {{0xe2dd4a55, 0x85550d8d, 0xd4389050, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_343) {
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -53151
  s21_decimal dec_2 = {{0xcf9f, 0x0, 0x0, 0x80000000}};
  // 318906
  s21_decimal dec_check = {{0x4ddba, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_344) {
  // -3.3713557097360
  s21_decimal dec_1 = {{0x8c984b90, 0x1ea9, 0x0, 0x800d0000}};
  // 1388815949086
  s21_decimal dec_2 = {{0x5be19d1e, 0x143, 0x0, 0x0}};
  // -4682192579723.5079705012960
  s21_decimal dec_check = {{0x79c02ae0, 0xaef79e7e, 0x26baed, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_345) {
  // -9.0248246322297225
  s21_decimal dec_1 = {{0x47a47989, 0x140a04d, 0x0, 0x80100000}};
  // -766887602869
  s21_decimal dec_2 = {{0x8e102ab5, 0xb2, 0x0, 0x80000000}};
  // 6921026128523.7564065580738525
  s21_decimal dec_check = {{0x39ca67dd, 0x2fec3b58, 0xdfa162e6, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_346) {
  // 130718015250659873708615
  s21_decimal dec_1 = {{0x7c14da47, 0x3ce0d8bf, 0x1bae, 0x0}};
  // 78
  s21_decimal dec_2 = {{0x4e, 0x0, 0x0, 0x0}};
  // 10196005189551470149271970
  s21_decimal dec_check = {{0xce5a81a2, 0x8c820a57, 0x86f16, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_347) {
  // -8914.28
  s21_decimal dec_1 = {{0xd9a24, 0x0, 0x0, 0x80020000}};
  // 821659101599895526
  s21_decimal dec_2 = {{0x7d540fe6, 0xb671e99, 0x0, 0x0}};
  // -7324499296209916689511.28
  s21_decimal dec_check = {{0x109858, 0x30b4003f, 0x9b1a, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_348) {
  // -24
  s21_decimal dec_1 = {{0x18, 0x0, 0x0, 0x80000000}};
  // -494714529022648.1080237861
  s21_decimal dec_2 = {{0x42b6ff25, 0x489799e1, 0x41799, 0x800a0000}};
  // 11873148696543554.5925708664
  s21_decimal dec_check = {{0x4127eb78, 0xce366d1e, 0x62365e, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_349) {
  // -44.1837217381851
  s21_decimal dec_1 = {{0x3e63fddb, 0x191d9, 0x0, 0x800d0000}};
  // -69457399371302356
  s21_decimal dec_2 = {{0x8c85d4, 0xf6c323, 0x0, 0x80000000}};
  // 3068886406479616004.7914427941
  s21_decimal dec_check = {{0x7d4c2625, 0x821a75d5, 0x63293bbe, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_350) {
  // 537809.415775835
  s21_decimal dec_1 = {{0x832f265b, 0x1e922, 0x0, 0x90000}};
  // 17824585
  s21_decimal dec_2 = {{0x10ffb49, 0x0, 0x0, 0x0}};
  // 9586229645296.711903475
  s21_decimal dec_check = {{0x3d6228f3, 0xaba93060, 0x207, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_351) {
  // -378
  s21_decimal dec_1 = {{0x17a, 0x0, 0x0, 0x80000000}};
  // -5932
  s21_decimal dec_2 = {{0x172c, 0x0, 0x0, 0x80000000}};
  // 2242296
  s21_decimal dec_check = {{0x2236f8, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_352) {
  // -39755
  s21_decimal dec_1 = {{0x9b4b, 0x0, 0x0, 0x80000000}};
  // -117052637.81
  s21_decimal dec_2 = {{0xb9b026a5, 0x2, 0x0, 0x80020000}};
  // 4653427616136.55
  s21_decimal dec_check = {{0xe013957, 0x1a73a, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_353) {
  // 0.792819635860087781064301503
  s21_decimal dec_1 = {{0x30e9dbbf, 0x9455c419, 0x28fce16, 0x1b0000}};
  // 14034650174503
  s21_decimal dec_2 = {{0xb2569427, 0xcc3, 0x0, 0x0}};
  // 11126946240773.185893006997148
  s21_decimal dec_check = {{0xf106769c, 0x5e68b5a9, 0x23f3fe84, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_354) {
  // 197
  s21_decimal dec_1 = {{0xc5, 0x0, 0x0, 0x0}};
  // 79909458671711471449086067
  s21_decimal dec_2 = {{0xe54f1873, 0x6f48885b, 0x42197c, 0x0}};
  // 15742163358327159875469955199
  s21_decimal dec_check = {{0x75ddd07f, 0xa2d0eeb7, 0x32dd9cc1, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_355) {
  // -551719745998302.9484
  s21_decimal dec_1 = {{0xc5f9d4ec, 0x4c9105db, 0x0, 0x80040000}};
  // 8754841.85470
  s21_decimal dec_2 = {{0xd6ec837e, 0xcb, 0x0, 0x50000}};
  // -4830219124330395487822.7343975
  s21_decimal dec_check = {{0x5bc8ea67, 0x170bbc42, 0x9c12a2da, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_356) {
  // -7057.34159716497831
  s21_decimal dec_1 = {{0xa7c2b9a7, 0x9cb457a, 0x0, 0x800e0000}};
  // 892456810574262229509.87
  s21_decimal dec_2 = {{0x81fd2a4b, 0x49fddd8, 0x12e6, 0x20000}};
  // -6298372572938926306262498.3852
  s21_decimal dec_check = {{0xf9d55b2c, 0x5a0c4add, 0xcb82eab5, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_357) {
  // -9451374125729.38889561
  s21_decimal dec_1 = {{0xb5d5e959, 0x3c6a9d2e, 0x33, 0x80080000}};
  // 24911746.8505239936
  s21_decimal dec_2 = {{0x89997180, 0x3750b04, 0x0, 0xa0000}};
  // -235450239609763067325.72519144
  s21_decimal dec_check = {{0x432eaae8, 0x7c5613a4, 0x4c13fcc2, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_358) {
  // 153
  s21_decimal dec_1 = {{0x99, 0x0, 0x0, 0x0}};
  // -331646.600661313859871
  s21_decimal dec_2 = {{0x9771311f, 0xfa856a29, 0x11, 0x800f0000}};
  // -50741929.901181020560263
  s21_decimal dec_check = {{0x82a65b87, 0xb9bc72db, 0xabe, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_359) {
  // 16364590613
  s21_decimal dec_1 = {{0xcf67d615, 0x3, 0x0, 0x0}};
  // -9802.463499321045106325
  s21_decimal dec_2 = {{0x7b6f3e95, 0x648228f4, 0x213, 0x80120000}};
  // -160413302165264.30662031568193
  s21_decimal dec_check = {{0x60e3ed41, 0x84094069, 0x33d513cd, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_360) {
  // -558.5
  s21_decimal dec_1 = {{0x15d1, 0x0, 0x0, 0x80010000}};
  // -474935647134.915349980788321
  s21_decimal dec_2 = {{0x8763661, 0x54e2e84, 0x188db89, 0x800f0000}};
  // 265251558924850.22296427027728
  s21_decimal dec_check = {{0x3efd5d10, 0x351b3f81, 0x55b5183e, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_361) {
  // 6953.100170331032
  s21_decimal dec_1 = {{0xc9bd8398, 0x18b3ce, 0x0, 0xc0000}};
  // -107
  s21_decimal dec_2 = {{0x6b, 0x0, 0x0, 0x80000000}};
  // -743981.718225420424
  s21_decimal dec_check = {{0x52360088, 0xa53276e, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_362) {
  // -74104690
  s21_decimal dec_1 = {{0x46abf72, 0x0, 0x0, 0x80000000}};
  // -2029
  s21_decimal dec_2 = {{0x7ed, 0x0, 0x0, 0x80000000}};
  // 150358416010
  s21_decimal dec_check = {{0x20f5a8a, 0x23, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_363) {
  // 438442378751
  s21_decimal dec_1 = {{0x1533c5ff, 0x66, 0x0, 0x0}};
  // -44303410794639338
  s21_decimal dec_2 = {{0xa6c0afea, 0x9d65b7, 0x0, 0x80000000}};
  // -19424492815584402511839906838
  s21_decimal dec_check = {{0x9eec4c16, 0x8118c34e, 0x3ec39059, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_364) {
  // -919.8448900
  s21_decimal dec_1 = {{0x24453104, 0x2, 0x0, 0x80070000}};
  // 574291
  s21_decimal dec_2 = {{0x8c353, 0x0, 0x0, 0x0}};
  // -528258641.7229900
  s21_decimal dec_check = {{0xfee4f04c, 0x12c47b, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_365) {
  // 3761939724
  s21_decimal dec_1 = {{0xe03aa50c, 0x0, 0x0, 0x0}};
  // -9.474
  s21_decimal dec_2 = {{0x2502, 0x0, 0x0, 0x80030000}};
  // -35640616945.176
  s21_decimal dec_check = {{0x3a500618, 0x206a, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_367) {
  // -7.43
  s21_decimal dec_1 = {{0x2e7, 0x0, 0x0, 0x80020000}};
  // 48
  s21_decimal dec_2 = {{0x30, 0x0, 0x0, 0x0}};
  // -356.64
  s21_decimal dec_check = {{0x8b50, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_368) {
  // 914741267906386284
  s21_decimal dec_1 = {{0x2ef3596c, 0xcb1d056, 0x0, 0x0}};
  // -43477976373
  s21_decimal dec_2 = {{0x1f7d4535, 0xa, 0x0, 0x80000000}};
  // -39771099233441926031563267932
  s21_decimal dec_check = {{0xd379f5c, 0x8d3d3f5e, 0x8081e1d9, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_369) {
  // 2.37948926
  s21_decimal dec_1 = {{0xe2ecffe, 0x0, 0x0, 0x80000}};
  // -8644608106
  s21_decimal dec_2 = {{0x342406a, 0x2, 0x0, 0x80000000}};
  // -20569752145.13594156
  s21_decimal dec_check = {{0x2cdd9f2c, 0x1c8bd80f, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_370) {
  // -46288.83
  s21_decimal dec_1 = {{0x46a193, 0x0, 0x0, 0x80020000}};
  // -411154585
  s21_decimal dec_2 = {{0x1881b899, 0x0, 0x0, 0x80000000}};
  // 19031864688785.55
  s21_decimal dec_check = {{0x216b38db, 0x6c2f0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_371) {
  // -53175.070491177882981169
  s21_decimal dec_1 = {{0xd5ff9331, 0xa0584e20, 0xb42, 0x80120000}};
  // 32
  s21_decimal dec_2 = {{0x20, 0x0, 0x0, 0x0}};
  // -1701602.255717692255397408
  s21_decimal dec_check = {{0xbff26620, 0xb09c41a, 0x16854, 0x80120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_372) {
  // -5730184126275
  s21_decimal dec_1 = {{0x2996df43, 0x536, 0x0, 0x80000000}};
  // -849
  s21_decimal dec_2 = {{0x351, 0x0, 0x0, 0x80000000}};
  // 4864926323207475
  s21_decimal dec_check = {{0xed5a6d33, 0x11489f, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_373) {
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 8203039241241869566
  s21_decimal dec_2 = {{0x74cfbcfe, 0x71d70cba, 0x0, 0x0}};
  // -73827353171176826094
  s21_decimal dec_check = {{0x1b4da4ee, 0x8f728e, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_374) {
  // 552
  s21_decimal dec_1 = {{0x228, 0x0, 0x0, 0x0}};
  // 85.49906309
  s21_decimal dec_2 = {{0xfd9d3785, 0x1, 0x0, 0x80000}};
  // 47195.48282568
  s21_decimal dec_check = {{0xdaffb6c8, 0x44a, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_375) {
  // 8349.51
  s21_decimal dec_1 = {{0xcbd87, 0x0, 0x0, 0x20000}};
  // 7598439624068850128.2216437
  s21_decimal dec_2 = {{0x7d2299f5, 0x5fbbb0ff, 0x3eda52, 0x70000}};
  // 63443247625559104834087.896290
  s21_decimal dec_check = {{0x8e8744e2, 0x42233b9a, 0xccff0641, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_376) {
  // -9642817
  s21_decimal dec_1 = {{0x932341, 0x0, 0x0, 0x80000000}};
  // 0.34
  s21_decimal dec_2 = {{0x22, 0x0, 0x0, 0x20000}};
  // -3278557.78
  s21_decimal dec_check = {{0x138aaea2, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_377) {
  // -7434672004.144454
  s21_decimal dec_1 = {{0x77d41d46, 0x1a69cb, 0x0, 0x80060000}};
  // -80.37295414
  s21_decimal dec_2 = {{0xdf0f6536, 0x1, 0x0, 0x80080000}};
  // 597546552035.04409127733956
  s21_decimal dec_check = {{0xa764cac4, 0x59717f65, 0x316d8a, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_378) {
  // 0.8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x10000}};
  // 63769347191854.3879649
  s21_decimal dec_2 = {{0xaa583de1, 0x91c65210, 0x22, 0x70000}};
  // 51015477753483.51037192
  s21_decimal dec_check = {{0x52c1ef08, 0x8e329085, 0x114, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_379) {
  // 5.627080497484
  s21_decimal dec_1 = {{0x2822594c, 0x51e, 0x0, 0xc0000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -39.389563482388
  s21_decimal dec_check = {{0x18f07114, 0x23d3, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_380) {
  // -3821238777
  s21_decimal dec_1 = {{0xe3c379f9, 0x0, 0x0, 0x80000000}};
  // -959.9558535857551657
  s21_decimal dec_2 = {{0xb25bb929, 0x85387ba0, 0x0, 0x80100000}};
  // 3668220531930.0221340009003489
  s21_decimal dec_check = {{0x3af679e1, 0xefee64a8, 0x7686cf1e, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_381) {
  // 91827275330639805
  s21_decimal dec_1 = {{0x9ec657bd, 0x1463c6b, 0x0, 0x0}};
  // -2522188.1448904
  s21_decimal dec_2 = {{0x6d48c9c8, 0x16f0, 0x0, 0x80070000}};
  // -231605665216526402059873.60237
  s21_decimal dec_check = {{0x9447aded, 0xf04445e6, 0x4ad5f8ba, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_382) {
  // 379.61512799143
  s21_decimal dec_1 = {{0x9a7c4ba7, 0x2286, 0x0, 0xb0000}};
  // -3.75
  s21_decimal dec_2 = {{0x177, 0x0, 0x0, 0x80020000}};
  // -1423.5567299678625
  s21_decimal dec_check = {{0x4c12d1a1, 0x32932c, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_383) {
  // -96.575
  s21_decimal dec_1 = {{0x1793f, 0x0, 0x0, 0x80030000}};
  // 2037534
  s21_decimal dec_2 = {{0x1f171e, 0x0, 0x0, 0x0}};
  // -196774846.050
  s21_decimal dec_check = {{0xd0b1de62, 0x2d, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_384) {
  // 140
  s21_decimal dec_1 = {{0x8c, 0x0, 0x0, 0x0}};
  // -1517052052260929805
  s21_decimal dec_2 = {{0xc8ca410d, 0x150da6cd, 0x0, 0x80000000}};
  // -212387287316530172700
  s21_decimal dec_check = {{0xce9b931c, 0x83773889, 0xb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_385) {
  // -9668.0594
  s21_decimal dec_1 = {{0x5c33a92, 0x0, 0x0, 0x80040000}};
  // -1725056
  s21_decimal dec_2 = {{0x1a5280, 0x0, 0x0, 0x80000000}};
  // 16677943876.3264
  s21_decimal dec_check = {{0x5d340d00, 0x97af, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_386) {
  // 131.58327
  s21_decimal dec_1 = {{0xc8c7b7, 0x0, 0x0, 0x50000}};
  // -2670.06387
  s21_decimal dec_2 = {{0xfea31b3, 0x0, 0x0, 0x80050000}};
  // -351335.7351234549
  s21_decimal dec_check = {{0x40e3abf5, 0xc7b61, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_387) {
  // -23280586465
  s21_decimal dec_1 = {{0x6ba18ee1, 0x5, 0x0, 0x80000000}};
  // -26.282857040
  s21_decimal dec_2 = {{0x1e949250, 0x6, 0x0, 0x80090000}};
  // 611880325866.953963600
  s21_decimal dec_check = {{0xbe0cf850, 0x2b8b9a7e, 0x21, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_388) {
  // 49270163091232878015298.701620
  s21_decimal dec_1 = {{0xa84c8934, 0x1c8a9e73, 0x9f3352dd, 0x60000}};
  // 878795.382257635532908102313
  s21_decimal dec_2 = {{0x449982a9, 0x21756ab3, 0x2d6ec29, 0x150000}};
  // 43298391807656042610892720463
  s21_decimal dec_check = {{0x7063c94f, 0x26432bab, 0x8be7971b, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_389) {
  // 43249.8016633815
  s21_decimal dec_1 = {{0xcaa5c3d7, 0x1895a, 0x0, 0xa0000}};
  // 276037.63059737777
  s21_decimal dec_2 = {{0xeba3c4b1, 0x621179, 0x0, 0xb0000}};
  // 11938572774.966357116458131129
  s21_decimal dec_check = {{0xd4805eb9, 0xf3223b44, 0x26935b1e, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_390) {
  // 26
  s21_decimal dec_1 = {{0x1a, 0x0, 0x0, 0x0}};
  // 3.3783227
  s21_decimal dec_2 = {{0x2037dbb, 0x0, 0x0, 0x70000}};
  // 87.8363902
  s21_decimal dec_check = {{0x345ac4fe, 0x0, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_391) {
  // 4647445655252956
  s21_decimal dec_1 = {{0xc364efdc, 0x1082d3, 0x0, 0x0}};
  // -0.8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80010000}};
  // -3717956524202364.8
  s21_decimal dec_check = {{0x1b277ee0, 0x84169e, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_392) {
  // 316097894.00557481874
  s21_decimal dec_1 = {{0xe522ef92, 0xb6ac87fb, 0x1, 0xb0000}};
  // 986375812
  s21_decimal dec_2 = {{0x3acae684, 0x0, 0x0, 0x0}};
  // 311791316871238794.36142031688
  s21_decimal dec_check = {{0xa674b348, 0x91cf2597, 0x64bec5f3, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_393) {
  // -2981.84254050197996331732197
  s21_decimal dec_1 = {{0x4e020ce5, 0xcd570fe5, 0xf6a6f8, 0x80170000}};
  // -43.4
  s21_decimal dec_2 = {{0x1b2, 0x0, 0x0, 0x80010000}};
  // 129411.96625778593040797177350
  s21_decimal dec_check = {{0x9ff29606, 0xcfc27eac, 0x29d0b4fa, 0x170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_394) {
  // 6882026
  s21_decimal dec_1 = {{0x6902ea, 0x0, 0x0, 0x0}};
  // -86938164691302
  s21_decimal dec_2 = {{0xde6c8166, 0x4f11, 0x0, 0x80000000}};
  // -598310709797822337852
  s21_decimal dec_check = {{0x3b07133c, 0x6f3aa493, 0x20, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_395) {
  // -536324566442.3697
  s21_decimal dec_1 = {{0xf0abcf11, 0x130dd7, 0x0, 0x80040000}};
  // 275283074243
  s21_decimal dec_2 = {{0x18265cc3, 0x40, 0x0, 0x0}};
  // -147641075442299644505953.6371
  s21_decimal dec_check = {{0x65ced5f3, 0x5f0ebf24, 0x4c54223, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_396) {
  // -23535.8922
  s21_decimal dec_1 = {{0xe074aca, 0x0, 0x0, 0x80040000}};
  // -8965808.70076637852949340261
  s21_decimal dec_2 = {{0x61bce065, 0x5b782043, 0x2e5a262, 0x80140000}};
  // 211018307067.05954245455124444
  s21_decimal dec_check = {{0x559017dc, 0xc816af60, 0x442f0676, 0x110000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_397) {
  // -274.27460
  s21_decimal dec_1 = {{0x1a28284, 0x0, 0x0, 0x80050000}};
  // -52047934173
  s21_decimal dec_2 = {{0x1e4c72dd, 0xc, 0x0, 0x80000000}};
  // 14275426326125.90580
  s21_decimal dec_check = {{0xfe9973f4, 0x13cfa675, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_398) {
  // -89
  s21_decimal dec_1 = {{0x59, 0x0, 0x0, 0x80000000}};
  // 4065.2335030687779052209065625
  s21_decimal dec_2 = {{0xa7f84e99, 0xd811411d, 0x835ad2c9, 0x190000}};
  // -361805.78177312123356466068406
  s21_decimal dec_check = {{0x31a73bb6, 0x14c7ad27, 0x74e7df71, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_399) {
  // -7766882525341.329374912535550
  s21_decimal dec_1 = {{0x70655bfe, 0x5ee8b81b, 0x19189d59, 0x800f0000}};
  // 7068077436843.1220816274936
  s21_decimal dec_2 = {{0xc042e5f8, 0x74c6effb, 0x3a773c, 0xd0000}};
  // -54896927131976178515585262.929
  s21_decimal dec_check = {{0x585fe551, 0xf69e1f2c, 0xb161ac7e, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_400) {
  // -4487623.610855365
  s21_decimal dec_1 = {{0x4b35efc5, 0xff178, 0x0, 0x80090000}};
  // 41248338761231058
  s21_decimal dec_2 = {{0x43702ad2, 0x928b25, 0x0, 0x0}};
  // -185107018933461033830579.78393
  s21_decimal dec_check = {{0x4af5419, 0x59910862, 0x3bcfb198, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_401) {
  // 0.721287277
  s21_decimal dec_1 = {{0x2afdf86d, 0x0, 0x0, 0x90000}};
  // -67629167330406.861939247043251
  s21_decimal dec_2 = {{0x7fba52b3, 0x26906a3e, 0xda85893b, 0x800f0000}};
  // -48780057949526.524750274439257
  s21_decimal dec_check = {{0xa4e32859, 0x246bfff4, 0x9d9deb10, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_402) {
  // 9287183
  s21_decimal dec_1 = {{0x8db60f, 0x0, 0x0, 0x0}};
  // -16708948.58587904429
  s21_decimal dec_2 = {{0x672899ad, 0x17303605, 0x0, 0x800b0000}};
  // -155179063254649.90018633507
  s21_decimal dec_check = {{0x8ceaff23, 0x6334d304, 0xcd60b, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_403) {
  // -6.0927
  s21_decimal dec_1 = {{0xedff, 0x0, 0x0, 0x80040000}};
  // -96610685.1129801
  s21_decimal dec_2 = {{0x47ad39c9, 0x36eab, 0x0, 0x80070000}};
  // 588619921.18785385527
  s21_decimal dec_check = {{0xc40ba437, 0x30dfcdf7, 0x3, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_404) {
  // -10.076705079612
  s21_decimal dec_1 = {{0x2a6d413c, 0x92a, 0x0, 0x800c0000}};
  // -32137479186.7988
  s21_decimal dec_2 = {{0xe64f1e54, 0x12449, 0x0, 0x80040000}};
  // 323839899767.5403949734260656
  s21_decimal dec_check = {{0xc3026fb0, 0x6ec73d3d, 0xa76bda9, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_405) {
  // -2749345000155.3
  s21_decimal dec_1 = {{0x51522c91, 0x1901, 0x0, 0x80010000}};
  // 34963769793
  s21_decimal dec_2 = {{0x2400c9c1, 0x8, 0x0, 0x0}};
  // -96127465666965458448852.9
  s21_decimal dec_check = {{0x37f17251, 0xcdb5d5a4, 0xcb8e, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_406) {
  // 0.985073
  s21_decimal dec_1 = {{0xf07f1, 0x0, 0x0, 0x60000}};
  // 63
  s21_decimal dec_2 = {{0x3f, 0x0, 0x0, 0x0}};
  // 62.059599
  s21_decimal dec_check = {{0x3b2f44f, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_407) {
  // -21531650097197283
  s21_decimal dec_1 = {{0xf378b0e3, 0x4c7eeb, 0x0, 0x80000000}};
  // -2.378109
  s21_decimal dec_2 = {{0x24497d, 0x0, 0x0, 0x80060000}};
  // 51204610880995733.477847
  s21_decimal dec_check = {{0x2c4b19d7, 0xceb97e9c, 0xad7, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_408) {
  // -74098
  s21_decimal dec_1 = {{0x12172, 0x0, 0x0, 0x80000000}};
  // 13066188195001099811599
  s21_decimal dec_2 = {{0xb2f6fb0f, 0x51c987b8, 0x2c4, 0x0}};
  // -968178412873191493839862702
  s21_decimal dec_check = {{0x8367bbae, 0xedf5f248, 0x320dbc0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_409) {
  // -65842751660068
  s21_decimal dec_1 = {{0x35d2e024, 0x3be2, 0x0, 0x80000000}};
  // -1071
  s21_decimal dec_2 = {{0x42f, 0x0, 0x0, 0x80000000}};
  // 70517587027932828
  s21_decimal dec_check = {{0x2d37b69c, 0xfa875f, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_410) {
  // -1149028
  s21_decimal dec_1 = {{0x118864, 0x0, 0x0, 0x80000000}};
  // 212939985339301.7794
  s21_decimal dec_2 = {{0x76427bc2, 0x1d8d25e2, 0x0, 0x40000}};
  // -244674005474447244980.4232
  s21_decimal dec_check = {{0xbb9967c8, 0xb4cf5b3, 0x2061e, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_411) {
  // -1485543962669234
  s21_decimal dec_1 = {{0x283170b2, 0x54718, 0x0, 0x80000000}};
  // -7489023.8034985539811
  s21_decimal dec_2 = {{0x13c2d8e3, 0xf4f92b5, 0x4, 0x800d0000}};
  // 11125274097573460698464.718393
  s21_decimal dec_check = {{0xd1c70e39, 0x4de621f7, 0x23f29c6d, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_412) {
  // 88356908535.71
  s21_decimal dec_1 = {{0x3836f4c3, 0x809, 0x0, 0x20000}};
  // 670733.171
  s21_decimal dec_2 = {{0x27fa9373, 0x0, 0x0, 0x30000}};
  // 59263909441913735.03641
  s21_decimal dec_check = {{0x8aa9ec99, 0x45322c60, 0x141, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_413) {
  // -54971966
  s21_decimal dec_1 = {{0x346ce3e, 0x0, 0x0, 0x80000000}};
  // 688912.1733402738
  s21_decimal dec_2 = {{0xa5bbe072, 0x18799e, 0x0, 0xa0000}};
  // -37870856569847.6377642908
  s21_decimal dec_check = {{0x748179c, 0xd51da2ca, 0x5031, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_414) {
  // 5447538
  s21_decimal dec_1 = {{0x531f72, 0x0, 0x0, 0x0}};
  // -828237925890916583.497639
  s21_decimal dec_2 = {{0x14cc5fa7, 0xde309d30, 0xaf62, 0x80060000}};
  // -4511857574331951943433561.3628
  s21_decimal dec_check = {{0x690472bc, 0x497bc52, 0x91c9360c, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_415) {
  // -501.13
  s21_decimal dec_1 = {{0xc3c1, 0x0, 0x0, 0x80020000}};
  // 868230119395586
  s21_decimal dec_2 = {{0x93d99102, 0x315a6, 0x0, 0x0}};
  // -435096159732710012.18
  s21_decimal dec_check = {{0x307ad882, 0x5bd13534, 0x2, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_417) {
  // 11678735490104526245713773
  s21_decimal dec_1 = {{0x6c8bd76d, 0x84fec987, 0x9a911, 0x0}};
  // 29
  s21_decimal dec_2 = {{0x1d, 0x0, 0x0, 0x0}};
  // 338683329213031261125699417
  s21_decimal dec_check = {{0x4bd76759, 0x10dcd457, 0x11826fc, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_418) {
  // -9207
  s21_decimal dec_1 = {{0x23f7, 0x0, 0x0, 0x80000000}};
  // 7737067.1603067555352723
  s21_decimal dec_2 = {{0x645b1093, 0x45c3579a, 0x1062, 0x100000}};
  // -71235177344.9442982132520661
  s21_decimal dec_check = {{0x472116d5, 0x473a1af, 0x24d3e5b, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_419) {
  // -556836
  s21_decimal dec_1 = {{0x87f24, 0x0, 0x0, 0x80000000}};
  // -0.427
  s21_decimal dec_2 = {{0x1ab, 0x0, 0x0, 0x80030000}};
  // 237768.972
  s21_decimal dec_check = {{0xe2c110c, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_420) {
  // 4.0578318490123901
  s21_decimal dec_1 = {{0x32fbe7d, 0x9029c4, 0x0, 0x100000}};
  // -9931087875958207243585350059
  s21_decimal dec_2 = {{0xbd4869ab, 0x834e8909, 0x2016cda8, 0x80000000}};
  // -40298684678404021917855044203
  s21_decimal dec_check = {{0xff90d26b, 0xd4ea2268, 0x82364a69, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_421) {
  // 5254756527556680934370758.8
  s21_decimal dec_1 = {{0x6a65c9c4, 0x38b62b1d, 0x2b7761, 0x10000}};
  // 4361
  s21_decimal dec_2 = {{0x1109, 0x0, 0x0, 0x0}};
  // 22915993216674685554790879127
  s21_decimal dec_check = {{0x2665cf97, 0x8253a59c, 0x4a0baa51, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_422) {
  // -396
  s21_decimal dec_1 = {{0x18c, 0x0, 0x0, 0x80000000}};
  // 294086.52682153
  s21_decimal dec_2 = {{0x3c4be3a9, 0x1abf, 0x0, 0x80000}};
  // -116458264.62132588
  s21_decimal dec_check = {{0x4564296c, 0x295fd1, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_423) {
  // -99.8
  s21_decimal dec_1 = {{0x3e6, 0x0, 0x0, 0x80010000}};
  // -59884976372.66585056088
  s21_decimal dec_2 = {{0x74dc7358, 0xa31978ac, 0x144, 0x800b0000}};
  // 5976520641992.051885975824
  s21_decimal dec_check = {{0x9369a910, 0xd54c704f, 0x4f193, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_424) {
  // -53707
  s21_decimal dec_1 = {{0xd1cb, 0x0, 0x0, 0x80000000}};
  // 192070355051
  s21_decimal dec_2 = {{0xb849086b, 0x2c, 0x0, 0x0}};
  // -10315522558724057
  s21_decimal dec_check = {{0xc1c907d9, 0x24a5e9, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_425) {
  // 153957616777
  s21_decimal dec_1 = {{0xd896cc89, 0x23, 0x0, 0x0}};
  // 87034487241262605
  s21_decimal dec_2 = {{0xaf39460d, 0x1353567, 0x0, 0x0}};
  // 13399622233073004082210724085
  s21_decimal dec_check = {{0x6d16d8f5, 0xc775c68f, 0x2b4be860, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_426) {
  // 791430732973
  s21_decimal dec_1 = {{0x44f29cad, 0xb8, 0x0, 0x0}};
  // -48136178690683.740262881
  s21_decimal dec_2 = {{0x942291e1, 0x77ac7ac5, 0xa31, 0x80090000}};
  // -38096451183687136002785061.535
  s21_decimal dec_check = {{0x7abeaa9f, 0xddf8d2b8, 0x7b18a554, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_427) {
  // -36.7011
  s21_decimal dec_1 = {{0x599a3, 0x0, 0x0, 0x80040000}};
  // -6946190672606109.629
  s21_decimal dec_2 = {{0x3ed19fbd, 0x6065d39d, 0x0, 0x80030000}};
  // 254932838494384090.1048919
  s21_decimal dec_check = {{0x66a1aa57, 0x5e60f1c2, 0x21bd7, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_428) {
  // 411.3
  s21_decimal dec_1 = {{0x1011, 0x0, 0x0, 0x10000}};
  // 4759.837624910856593659
  s21_decimal dec_2 = {{0xe69c20fb, 0x8043d27, 0x102, 0x120000}};
  // 1957721.2151258353169719467
  s21_decimal dec_check = {{0x126de0ab, 0xcc1a8e10, 0x1031a2, 0x130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_429) {
  // -79.10171076893533902716
  s21_decimal dec_1 = {{0x5835977c, 0xcfacfc8d, 0x1ac, 0x80140000}};
  // 0.7280
  s21_decimal dec_2 = {{0x1c70, 0x0, 0x0, 0x40000}};
  // -57.586045439784926811772480
  s21_decimal dec_check = {{0x7403d640, 0xc74df37c, 0x2fa251, 0x80180000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_430) {
  // 63031601.8419056832599
  s21_decimal dec_1 = {{0xda74f057, 0x2b645731, 0x22, 0xd0000}};
  // 8855396811843024
  s21_decimal dec_2 = {{0xbd50a5d0, 0x1f75ef, 0x0, 0x0}};
  // 558169845996170466813665.24090
  s21_decimal dec_check = {{0x66ab70ba, 0x39886223, 0xb45aba3e, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_431) {
  // 22290076
  s21_decimal dec_1 = {{0x1541e9c, 0x0, 0x0, 0x0}};
  // -28351.886
  s21_decimal dec_2 = {{0x1b09d8e, 0x0, 0x0, 0x80030000}};
  // -631965693683.336
  s21_decimal dec_check = {{0xfaaea688, 0x23ec4, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_432) {
  // -847308737961
  s21_decimal dec_1 = {{0x47894da9, 0xc5, 0x0, 0x80000000}};
  // -7.7617310678365103
  s21_decimal dec_2 = {{0x6767b3af, 0x113c088, 0x0, 0x80100000}};
  // 6576582555481.2384209713774983
  s21_decimal dec_check = {{0x26284187, 0x176d8026, 0xd4803743, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_433) {
  // 6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x0}};
  // 3992486376891938270.60580
  s21_decimal dec_2 = {{0x976acb64, 0x4fe05c61, 0x548b, 0x50000}};
  // 23954918261351629623.63480
  s21_decimal dec_check = {{0x8c80c458, 0xdf422a49, 0x1fb43, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_434) {
  // -6992772837758547
  s21_decimal dec_1 = {{0xccfd5653, 0x18d7e3, 0x0, 0x80000000}};
  // 393590.2168201327520764
  s21_decimal dec_2 = {{0xf9e3abfc, 0x5d9d78ac, 0xd5, 0x100000}};
  // -2752286977387321501652.1665074
  s21_decimal dec_check = {{0x40638a32, 0x17ec388a, 0x58ee6260, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_435) {
  // -685.6606967017908
  s21_decimal dec_1 = {{0x36a231b4, 0x185c0c, 0x0, 0x800d0000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // -4799.6248769125356
  s21_decimal dec_check = {{0x7e6f5bec, 0xaa8455, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_436) {
  // -98
  s21_decimal dec_1 = {{0x62, 0x0, 0x0, 0x80000000}};
  // -7.44681367230400354869574
  s21_decimal dec_2 = {{0xc5e46146, 0x41ffb511, 0x9db1, 0x80170000}};
  // 729.78773988579234777218252
  s21_decimal dec_check = {{0xc16d3ccc, 0x43e350cd, 0x3c5ddb, 0x170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_437) {
  // -0.19273
  s21_decimal dec_1 = {{0x4b49, 0x0, 0x0, 0x80050000}};
  // 26715463920
  s21_decimal dec_2 = {{0x385da0f0, 0x6, 0x0, 0x0}};
  // -5148871361.30160
  s21_decimal dec_check = {{0x80d93470, 0x1d449, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_438) {
  // -688057259258650742975242587
  s21_decimal dec_1 = {{0x93ba215b, 0xc39e30ec, 0x23925ca, 0x80000000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // -4816400814810555200826698109
  s21_decimal dec_check = {{0xa16e97d, 0x59535678, 0xf90088b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_439) {
  // 9624646
  s21_decimal dec_1 = {{0x92dc46, 0x0, 0x0, 0x0}};
  // 61889472630515659054
  s21_decimal dec_2 = {{0xf625712e, 0x5ae39373, 0x3, 0x0}};
  // 595664265195402015851444884
  s21_decimal dec_check = {{0x7bc7a94, 0x85145a98, 0x1ecb8d0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_440) {
  // -76315257073800997.3117938
  s21_decimal dec_1 = {{0x2282d3f2, 0x9571129c, 0xa19a, 0x80070000}};
  // 78086380
  s21_decimal dec_2 = {{0x4a780ec, 0x0, 0x0, 0x0}};
  // -5959182163662512720467709.1484
  s21_decimal dec_check = {{0x68c6009c, 0xa35be68, 0xc08d3314, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_441) {
  // 21982696656529428729
  s21_decimal dec_1 = {{0xc99a90f9, 0x31123a23, 0x1, 0x0}};
  // 1648.862323383370
  s21_decimal dec_2 = {{0xad119c4a, 0x5dba1, 0x0, 0xc0000}};
  // 36246440283316953389175.564559
  s21_decimal dec_check = {{0xa0b6690f, 0x7da507, 0x751e5a49, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_442) {
  // 98644.4
  s21_decimal dec_1 = {{0xf0d4c, 0x0, 0x0, 0x10000}};
  // 2359120.410
  s21_decimal dec_2 = {{0x8c9d521a, 0x0, 0x0, 0x30000}};
  // 232714017372.2040
  s21_decimal dec_check = {{0x8b65b1b8, 0x84485, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_443) {
  // -396680461463825271464
  s21_decimal dec_1 = {{0x8955caa8, 0x810c19ff, 0x15, 0x80000000}};
  // 8.807
  s21_decimal dec_2 = {{0x2267, 0x0, 0x0, 0x30000}};
  // -3493564824111909165783.448
  s21_decimal dec_check = {{0xa66ed998, 0x8752660d, 0x2e3ca, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_444) {
  // -80
  s21_decimal dec_1 = {{0x50, 0x0, 0x0, 0x80000000}};
  // 6322
  s21_decimal dec_2 = {{0x18b2, 0x0, 0x0, 0x0}};
  // -505760
  s21_decimal dec_check = {{0x7b7a0, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_445) {
  // -96591338405.32081261733255329
  s21_decimal dec_1 = {{0x298098a1, 0xb62f243a, 0x1f35d926, 0x80110000}};
  // 78.9491339802674644796
  s21_decimal dec_2 = {{0x69a2c73c, 0xcc64aea5, 0x2a, 0x130000}};
  // -7625802517095.0271322687088449
  s21_decimal dec_check = {{0xbd092741, 0xfd6befec, 0xf66728f3, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_446) {
  // -953027395711855453225597
  s21_decimal dec_1 = {{0x6adf427d, 0xb7f90462, 0xc9cf, 0x80000000}};
  // 355
  s21_decimal dec_2 = {{0x163, 0x0, 0x0, 0x0}};
  // -338324725477708685895086935
  s21_decimal dec_check = {{0x33993357, 0x1e51147a, 0x117db0c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_447) {
  // 332623
  s21_decimal dec_1 = {{0x5134f, 0x0, 0x0, 0x0}};
  // -6982
  s21_decimal dec_2 = {{0x1b46, 0x0, 0x0, 0x80000000}};
  // -2322373786
  s21_decimal dec_check = {{0x8a6c9c9a, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_448) {
  // 5935741207.5603077
  s21_decimal dec_1 = {{0x758d8485, 0xd2e140, 0x0, 0x70000}};
  // -20
  s21_decimal dec_2 = {{0x14, 0x0, 0x0, 0x80000000}};
  // -118714824151.2061540
  s21_decimal dec_check = {{0x2f0e5a64, 0x10799909, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_449) {
  // 0.3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x10000}};
  // -420077012.14798
  s21_decimal dec_2 = {{0xae1bd64e, 0x2634, 0x0, 0x80050000}};
  // -126023103.644394
  s21_decimal dec_check = {{0xa5382ea, 0x729e, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_450) {
  // -981
  s21_decimal dec_1 = {{0x3d5, 0x0, 0x0, 0x80000000}};
  // 9.3
  s21_decimal dec_2 = {{0x5d, 0x0, 0x0, 0x10000}};
  // -9123.3
  s21_decimal dec_check = {{0x16461, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_451) {
  // -43.534180760
  s21_decimal dec_1 = {{0x22d6e198, 0xa, 0x0, 0x80090000}};
  // -9616956755
  s21_decimal dec_2 = {{0x3d371d53, 0x2, 0x0, 0x80000000}};
  // 418666333733.273033800
  s21_decimal dec_check = {{0x52e15c48, 0xb2299c57, 0x16, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_452) {
  // 61416265923698248865
  s21_decimal dec_1 = {{0xd4f64ca1, 0x54526875, 0x3, 0x0}};
  // 5100
  s21_decimal dec_2 = {{0x13ec, 0x0, 0x0, 0x0}};
  // 313222956210861069211500
  s21_decimal dec_check = {{0x9abe976c, 0xd9b90b6e, 0x4253, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_453) {
  // 71931.6
  s21_decimal dec_1 = {{0xaf9d4, 0x0, 0x0, 0x10000}};
  // 469363836.74443215402938565370
  s21_decimal dec_2 = {{0xa9ca82fa, 0x6c16eddc, 0x97a8ddd9, 0x140000}};
  // 33762091759165.795930780157088
  s21_decimal dec_check = {{0xd5b744a0, 0xa5a9fdab, 0x6d175905, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_454) {
  // -25.11
  s21_decimal dec_1 = {{0x9cf, 0x0, 0x0, 0x80020000}};
  // -0.19
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x80020000}};
  // 4.7709
  s21_decimal dec_check = {{0xba5d, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_455) {
  // 8.92
  s21_decimal dec_1 = {{0x37c, 0x0, 0x0, 0x20000}};
  // 87857480
  s21_decimal dec_2 = {{0x53c9948, 0x0, 0x0, 0x0}};
  // 783688721.60
  s21_decimal dec_check = {{0x3f2616e0, 0x12, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_456) {
  // -92480490.53014649977333348526
  s21_decimal dec_1 = {{0xb3ff8ae, 0xb9ff2a7d, 0x1de1ce8f, 0x80140000}};
  // 512101377622535616
  s21_decimal dec_2 = {{0x5e2dedc0, 0x71b597d, 0x0, 0x0}};
  // -47359386603695881685821183.488
  s21_decimal dec_check = {{0x25de5600, 0x2a578ea5, 0x9906c434, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_457) {
  // -59.109
  s21_decimal dec_1 = {{0xe6e5, 0x0, 0x0, 0x80030000}};
  // -4492511199437.56621860179
  s21_decimal dec_2 = {{0xa424cd53, 0xf3b70a66, 0x5f21, 0x800b0000}};
  // 265547844487555.10161533320511
  s21_decimal dec_check = {{0xe5643d3f, 0x76148549, 0x55cd9a55, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_458) {
  // -429453.73419760853617237
  s21_decimal dec_1 = {{0xb42e8a55, 0x12c796ee, 0x918, 0x80110000}};
  // 115993419162649054750
  s21_decimal dec_2 = {{0x40af4e1e, 0x49bb682b, 0x6, 0x0}};
  // -49813807001748079660317147.752
  s21_decimal dec_check = {{0xf7aa0268, 0x8dae9241, 0xa0f503f0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_459) {
  // -30371252.202285872
  s21_decimal dec_1 = {{0x32e6ab30, 0x6be67e, 0x0, 0x80090000}};
  // -0.8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80010000}};
  // 24297001.7618286976
  s21_decimal dec_check = {{0x97355980, 0x35f33f1, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_460) {
  // -977
  s21_decimal dec_1 = {{0x3d1, 0x0, 0x0, 0x80000000}};
  // 22113712355.1437
  s21_decimal dec_2 = {{0x7fb228cd, 0xc91f, 0x0, 0x40000}};
  // -21605096970975.3949
  s21_decimal dec_check = {{0x56edb65d, 0x2ff9136, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_461) {
  // -171393
  s21_decimal dec_1 = {{0x29d81, 0x0, 0x0, 0x80000000}};
  // -5084
  s21_decimal dec_2 = {{0x13dc, 0x0, 0x0, 0x80000000}};
  // 871362012
  s21_decimal dec_check = {{0x33efeddc, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_462) {
  // 92111073
  s21_decimal dec_1 = {{0x57d80e1, 0x0, 0x0, 0x0}};
  // -1545899
  s21_decimal dec_2 = {{0x1796ab, 0x0, 0x0, 0x80000000}};
  // -142394415639627
  s21_decimal dec_check = {{0xc88fec4b, 0x8181, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_463) {
  // 0.0372028
  s21_decimal dec_1 = {{0x5ad3c, 0x0, 0x0, 0x70000}};
  // 805
  s21_decimal dec_2 = {{0x325, 0x0, 0x0, 0x0}};
  // 29.9482540
  s21_decimal dec_check = {{0x11d9bdac, 0x0, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_464) {
  // 6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x0}};
  // -78190832667696287870
  s21_decimal dec_2 = {{0xda0bd07e, 0x3d1da409, 0x4, 0x80000000}};
  // -469144996006177727220
  s21_decimal dec_check = {{0x1c46e2f4, 0x6eb1d83b, 0x19, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_465) {
  // 38
  s21_decimal dec_1 = {{0x26, 0x0, 0x0, 0x0}};
  // -6525420596584198
  s21_decimal dec_2 = {{0xe0ab5f06, 0x172ed5, 0x0, 0x80000000}};
  // -247965982670199524
  s21_decimal dec_check = {{0x59701ae4, 0x370f3bf, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_466) {
  // 732475362104777604
  s21_decimal dec_1 = {{0x4fb1b84, 0xa2a4676, 0x0, 0x0}};
  // -4554.484220236161
  s21_decimal dec_2 = {{0x7e151181, 0x102e47, 0x0, 0x800c0000}};
  // -3336047478417977698017.4352637
  s21_decimal dec_check = {{0x2895b0fd, 0xcecaaec9, 0x6bcb2351, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_467) {
  // 6153
  s21_decimal dec_1 = {{0x1809, 0x0, 0x0, 0x0}};
  // 47.41729013
  s21_decimal dec_2 = {{0x1aa10af5, 0x1, 0x0, 0x80000}};
  // 291758.58616989
  s21_decimal dec_check = {{0x8b05a9d, 0x1a89, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_468) {
  // 0.16
  s21_decimal dec_1 = {{0x10, 0x0, 0x0, 0x20000}};
  // 306
  s21_decimal dec_2 = {{0x132, 0x0, 0x0, 0x0}};
  // 48.96
  s21_decimal dec_check = {{0x1320, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_469) {
  // -332760.3
  s21_decimal dec_1 = {{0x32c673, 0x0, 0x0, 0x80010000}};
  // 758039365659832251
  s21_decimal dec_2 = {{0x6beaafbb, 0xa8518c9, 0x0, 0x0}};
  // -252245406728775477792435.3
  s21_decimal dec_check = {{0x50dd9301, 0x824cffc9, 0x21626, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_470) {
  // -946923.1038113
  s21_decimal dec_1 = {{0xba26fea1, 0x89c, 0x0, 0x80070000}};
  // 6209.49
  s21_decimal dec_2 = {{0x97995, 0x0, 0x0, 0x20000}};
  // -5879909543.885229237
  s21_decimal dec_check = {{0xbab54cb5, 0x5199a293, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_471) {
  // 16788740202108
  s21_decimal dec_1 = {{0xeee55e7c, 0xf44, 0x0, 0x0}};
  // -99.4662459879315249667985433
  s21_decimal dec_2 = {{0x82175019, 0xfe9a9905, 0x336c3f7, 0x80190000}};
  // -1669912962770349.5545999540238
  s21_decimal dec_check = {{0xbeb400e, 0xc74ecd6, 0x35f5323f, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_472) {
  // 57723987163149691084632229
  s21_decimal dec_1 = {{0x8bbc70a5, 0x9d456d2a, 0x2fbf87, 0x0}};
  // 0.5638300684610427
  s21_decimal dec_2 = {{0x2d716b7b, 0x140801, 0x0, 0x100000}};
  // 32546519634043040314891057.514
  s21_decimal dec_check = {{0x7e22396a, 0xb41dc871, 0x6929d99c, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_473) {
  // -89.61376
  s21_decimal dec_1 = {{0x88bd60, 0x0, 0x0, 0x80050000}};
  // -20281248004253.47
  s21_decimal dec_2 = {{0x9a4a1d83, 0x73491, 0x0, 0x80020000}};
  // 1817478891153649.4397472
  s21_decimal dec_check = {{0x412cc820, 0x41dd2ce2, 0x3d9, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_474) {
  // 1707513745612092754535
  s21_decimal dec_1 = {{0xb1804a67, 0x908370d6, 0x5c, 0x0}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal dec_check = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_475) {
  // 95898908796
  s21_decimal dec_1 = {{0x5405387c, 0x16, 0x0, 0x0}};
  // -58761402774007911
  s21_decimal dec_2 = {{0x3ad93067, 0xd0c32f, 0x0, 0x80000000}};
  // -5635154405349606056371485156
  s21_decimal dec_check = {{0xc1ccf9e4, 0x6db672b9, 0x12354a5c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_476) {
  // -681076903323.0421917
  s21_decimal dec_1 = {{0xc8ee0f9d, 0x5e84b659, 0x0, 0x80070000}};
  // 93084461866822858
  s21_decimal dec_2 = {{0x2bae2cca, 0x14ab3d3, 0x0, 0x0}};
  // -63397677035747519150922303564
  s21_decimal dec_check = {{0x7252884c, 0xa2749b0a, 0xccd9544e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_477) {
  // -983046048
  s21_decimal dec_1 = {{0x3a9817a0, 0x0, 0x0, 0x80000000}};
  // 6035461603
  s21_decimal dec_2 = {{0x67bdd5e3, 0x1, 0x0, 0x0}};
  // -5933136676684894944
  s21_decimal dec_check = {{0x51a512e0, 0x5256bc5f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_478) {
  // -58444386938744328692847
  s21_decimal dec_1 = {{0xa73c246f, 0x46cced27, 0xc60, 0x80000000}};
  // 235.70625
  s21_decimal dec_2 = {{0x167a8c1, 0x0, 0x0, 0x50000}};
  // -13775707278880405424958368.194
  s21_decimal dec_check = {{0x8e7069c2, 0xf6de0b19, 0x2c82ff7b, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_479) {
  // -201093970056.9499
  s21_decimal dec_1 = {{0x6284659b, 0x724f0, 0x0, 0x80040000}};
  // 21489982450151148
  s21_decimal dec_2 = {{0x722baeec, 0x4c5906, 0x0, 0x0}};
  // -4321505887355073802915422863.5
  s21_decimal dec_check = {{0x434d599b, 0xbd58ac99, 0x8ba2a8ab, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_480) {
  // -95.599
  s21_decimal dec_1 = {{0x1756f, 0x0, 0x0, 0x80030000}};
  // 2020937004688463
  s21_decimal dec_2 = {{0x1047244f, 0x72e08, 0x0, 0x0}};
  // -193199556711212374.337
  s21_decimal dec_check = {{0xb6bfd941, 0x792eb536, 0xa, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_481) {
  // 858
  s21_decimal dec_1 = {{0x35a, 0x0, 0x0, 0x0}};
  // -17064609335262
  s21_decimal dec_2 = {{0x29fa47de, 0xf85, 0x0, 0x80000000}};
  // -14641434809654796
  s21_decimal dec_check = {{0xb0d4de0c, 0x34044e, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_482) {
  // -451750725465628
  s21_decimal dec_1 = {{0x6984b61c, 0x19add, 0x0, 0x80000000}};
  // 533.0445208770119
  s21_decimal dec_2 = {{0xfd29d647, 0x12f002, 0x0, 0xd0000}};
  // -240803249011668215.82554879697
  s21_decimal dec_check = {{0x668156d1, 0x999fb00a, 0x4dcec724, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_483) {
  // 69539237919623978.8087367
  s21_decimal dec_1 = {{0x4a3b9847, 0x4be1b440, 0x9341, 0x70000}};
  // 7787986
  s21_decimal dec_2 = {{0x76d5d2, 0x0, 0x0, 0x0}};
  // 541570611368700672226738.09729
  s21_decimal dec_check = {{0x206ee141, 0x514bb3, 0xaefdabc7, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_484) {
  // 69903010
  s21_decimal dec_1 = {{0x42aa2a2, 0x0, 0x0, 0x0}};
  // 37639294
  s21_decimal dec_2 = {{0x23e547e, 0x0, 0x0, 0x0}};
  // 2631099944874940
  s21_decimal dec_check = {{0xb19533bc, 0x958f8, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_485) {
  // 7071290.6441
  s21_decimal dec_1 = {{0x76d152c9, 0x10, 0x0, 0x40000}};
  // 3948636554349820.27
  s21_decimal dec_2 = {{0xcea128b, 0x57ad667, 0x0, 0x20000}};
  // 27921956723725145233767.535907
  s21_decimal dec_check = {{0x53341523, 0xfed5f161, 0x5a388052, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_486) {
  // 1193285
  s21_decimal dec_1 = {{0x123545, 0x0, 0x0, 0x0}};
  // -41674265387.75304911073884
  s21_decimal dec_2 = {{0x51c2325c, 0xa535b408, 0x3727c, 0x800e0000}};
  // -49729275773224897.208107996689
  s21_decimal dec_check = {{0x30151611, 0x791a7330, 0xa0af17c1, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_487) {
  // -5694.246
  s21_decimal dec_1 = {{0x56e326, 0x0, 0x0, 0x80030000}};
  // -531995
  s21_decimal dec_2 = {{0x81e1b, 0x0, 0x0, 0x80000000}};
  // 3029310400.770
  s21_decimal dec_check = {{0x50f86902, 0x2c1, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_488) {
  // 16.89066206578814
  s21_decimal dec_1 = {{0x5f3ec87e, 0x60032, 0x0, 0xe0000}};
  // -59225246.49
  s21_decimal dec_2 = {{0x61028de9, 0x1, 0x0, 0x80020000}};
  // -1000353624.2255951876186286
  s21_decimal dec_check = {{0x938de0ae, 0xc94c3d41, 0x84654, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_489) {
  // -519.3877995648174709693
  s21_decimal dec_1 = {{0x6f4edbbd, 0x8f8966b2, 0x119, 0x80130000}};
  // -4698898112917022
  s21_decimal dec_2 = {{0x78db2e1e, 0x10b19f, 0x0, 0x80000000}};
  // 2440550351247245274.6947866268
  s21_decimal dec_check = {{0xd45c2e9c, 0x70f68e01, 0x4edbc264, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_490) {
  // -84
  s21_decimal dec_1 = {{0x54, 0x0, 0x0, 0x80000000}};
  // -54511
  s21_decimal dec_2 = {{0xd4ef, 0x0, 0x0, 0x80000000}};
  // 4578924
  s21_decimal dec_check = {{0x45de6c, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_491) {
  // -27528831.0557627470
  s21_decimal dec_1 = {{0x899ad44e, 0x3d20542, 0x0, 0x800a0000}};
  // -7132876015
  s21_decimal dec_2 = {{0xa9270cef, 0x1, 0x0, 0x80000000}};
  // 196359738758637225.6068132050
  s21_decimal dec_check = {{0x8f61dcd2, 0xace7089d, 0x6583feb, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_492) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -215002545667194730784977
  s21_decimal dec_2 = {{0x72ab28d1, 0x4fb4f801, 0x2d87, 0x80000000}};
  // 1075012728335973653924885
  s21_decimal dec_check = {{0x3d57cc15, 0x8e88d807, 0xe3a4, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_493) {
  // 49999832478448
  s21_decimal dec_1 = {{0x7e40f2f0, 0x2d79, 0x0, 0x0}};
  // 11
  s21_decimal dec_2 = {{0xb, 0x0, 0x0, 0x0}};
  // 549998157262928
  s21_decimal dec_check = {{0x6cca7050, 0x1f438, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_494) {
  // -661696910.50047760755009142
  s21_decimal dec_1 = {{0xa6272676, 0x23b381fc, 0x36bbfa, 0x80110000}};
  // -0.30160910128598
  s21_decimal dec_2 = {{0x625595d6, 0x1b6e, 0x0, 0x800e0000}};
  // 199573810.49975859374874047186
  s21_decimal dec_check = {{0xd15e32d2, 0x934323a5, 0x407c5bd2, 0x140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_495) {
  // -82.0
  s21_decimal dec_1 = {{0x334, 0x0, 0x0, 0x80010000}};
  // 69294286135074968477
  s21_decimal dec_2 = {{0x5d6b539d, 0xc1a6c21a, 0x3, 0x0}};
  // -5682131463076147415114.0
  s21_decimal dec_check = {{0x3bc7d2e4, 0x4a25bc73, 0xc08, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_496) {
  // 24942620254552.1
  s21_decimal dec_1 = {{0x10334d71, 0xe2da, 0x0, 0x10000}};
  // -37213.671
  s21_decimal dec_2 = {{0x237d5e7, 0x0, 0x0, 0x80030000}};
  // -928206464030838101.7591
  s21_decimal dec_check = {{0xd300e5f7, 0x2e8603df, 0x1f7, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_497) {
  // 32707090.261
  s21_decimal dec_1 = {{0x9d7e9755, 0x7, 0x0, 0x30000}};
  // -39804060
  s21_decimal dec_2 = {{0x25f5c9c, 0x0, 0x0, 0x80000000}};
  // -1301874983174259.660
  s21_decimal dec_check = {{0x4a11c3cc, 0x12113066, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_498) {
  // -99081.79555248277538
  s21_decimal dec_1 = {{0x495c8822, 0x8980eccf, 0x0, 0x800e0000}};
  // -44955.31693562446
  s21_decimal dec_2 = {{0x89abda4e, 0xff8a9, 0x0, 0x800b0000}};
  // 4454253521.6126092113870184542
  s21_decimal dec_check = {{0x42f5e05e, 0x778031c8, 0x8fecb8b8, 0x130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_499) {
  // -4073028
  s21_decimal dec_1 = {{0x3e2644, 0x0, 0x0, 0x80000000}};
  // -529594804583
  s21_decimal dec_2 = {{0x4e4f6967, 0x7b, 0x0, 0x80000000}};
  // 2157054467721087324
  s21_decimal dec_check = {{0x1daf495c, 0x1def659c, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_500) {
  // -23.183747683689383704085594
  s21_decimal dec_1 = {{0x508f445a, 0x7af1b3e4, 0x132d59, 0x80180000}};
  // -33226624475855906
  s21_decimal dec_2 = {{0x5cf7fc22, 0x760b70, 0x0, 0x80000000}};
  // 770317678228941343.62479240074
  s21_decimal dec_check = {{0xe483a38a, 0x32f44640, 0xf8e72f55, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_mul_1) {
  // -9127176.0558
  s21_decimal dec_1 = {{0x40388aae, 0x15, 0x0, 0x80040000}};
  // -782651488582572028214009
  s21_decimal dec_2 = {{0x713c3af9, 0x9f49388b, 0xa5bb, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_2) {
  // -28255780446335585249016455677
  s21_decimal dec_1 = {{0x3634a1fd, 0x4270283e, 0x5b4ca23f, 0x80000000}};
  // -4.2784420584956966
  s21_decimal dec_2 = {{0x2ee32426, 0x980034, 0x0, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_3) {
  // 1888719818967.039
  s21_decimal dec_1 = {{0xd9e3c7ff, 0x6b5c7, 0x0, 0x30000}};
  // 677349197995844844756
  s21_decimal dec_2 = {{0xce103cd4, 0xb81bc2d3, 0x24, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_4) {
  // 906030.75888226745
  s21_decimal dec_1 = {{0x79e021b9, 0x141e304, 0x0, 0xb0000}};
  // 8928173813100498524809054
  s21_decimal dec_2 = {{0x97d7a75e, 0x45b082b4, 0x7629d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_5) {
  // 44736763011270258826380547923
  s21_decimal dec_1 = {{0xf7ff9753, 0x56e42315, 0x908d620e, 0x0}};
  // 5.0350639648922874
  s21_decimal dec_2 = {{0xd67cdcfa, 0xb2e1a3, 0x0, 0x100000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_6) {
  // 6022116426366431617615613363
  s21_decimal dec_1 = {{0x155b4db3, 0x9f113614, 0x137560c1, 0x0}};
  // 237042019150317598682478127
  s21_decimal dec_2 = {{0x40a1762f, 0x9b4dd2d9, 0xc41399, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_7) {
  // -6899541719873813909714
  s21_decimal dec_1 = {{0xf25e90d2, 0x6603ee2, 0x176, 0x80000000}};
  // 5835935024709829
  s21_decimal dec_2 = {{0x821480c5, 0x14bbc0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_8) {
  // 79228162514264337592918340147
  s21_decimal dec_1 = {{0xdab5f233, 0xffffffff, 0xffffffff, 0x0}};
  // -673729
  s21_decimal dec_2 = {{0xa47c1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_9) {
  // 88.5321982157486
  s21_decimal dec_1 = {{0x164222ae, 0x32532, 0x0, 0xd0000}};
  // -4524778429688952593399021559
  s21_decimal dec_2 = {{0x575fff7, 0x2c99647b, 0xe9ecf1a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_10) {
  // 41196723056420135136621955926
  s21_decimal dec_1 = {{0xfc30b56, 0xda4bcb7f, 0x851d216f, 0x0}};
  // 3467056037642770325403139
  s21_decimal dec_2 = {{0x105b7603, 0x7c0219f1, 0x2de2d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_11) {
  // -79228162514264337592580425784
  s21_decimal dec_1 = {{0xc691c838, 0xffffffff, 0xffffffff, 0x80000000}};
  // 7765.89082
  s21_decimal dec_2 = {{0x2e49cf1a, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_12) {
  // -9031140519677470894357453
  s21_decimal dec_1 = {{0x337e7bcd, 0x1bcb6d78, 0x7786b, 0x80000000}};
  // 78551529474982079713541512
  s21_decimal dec_2 = {{0x76047d88, 0xf2087835, 0x40f9ee, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_13) {
  // -86183656250908341
  s21_decimal dec_1 = {{0x28479eb5, 0x1322f94, 0x0, 0x80000000}};
  // -9464030041258801
  s21_decimal dec_2 = {{0x34c0bb31, 0x219f7c, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_14) {
  // 41075916631407707767
  s21_decimal dec_1 = {{0xf69dc677, 0x3a0af88b, 0x2, 0x0}};
  // -3734281114692299300698
  s21_decimal dec_2 = {{0x4c3c9f5a, 0x6f8f98be, 0xca, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_15) {
  // 64841241090850377246459
  s21_decimal dec_1 = {{0x6ed926fb, 0xcfc2c82, 0xdbb, 0x0}};
  // 2315495
  s21_decimal dec_2 = {{0x2354e7, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_16) {
  // -4334139491587117
  s21_decimal dec_1 = {{0x7ccd942d, 0xf65e0, 0x0, 0x80000000}};
  // -3513437984710089251318009267
  s21_decimal dec_2 = {{0x38220db3, 0xcbb8cca0, 0xb5a3f6e, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_17) {
  // 5708650432687323036347
  s21_decimal dec_1 = {{0x87e13abb, 0x77707acd, 0x135, 0x0}};
  // 608769100560278866735
  s21_decimal dec_2 = {{0x979cb2f, 0x5e4f90, 0x21, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_18) {
  // 3138321322584
  s21_decimal dec_1 = {{0xb2871258, 0x2da, 0x0, 0x0}};
  // -30874126313828150859445
  s21_decimal dec_2 = {{0x7b4ed6b5, 0xb092e04b, 0x689, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_19) {
  // 4181739884059712
  s21_decimal dec_1 = {{0x30551c40, 0xedb45, 0x0, 0x0}};
  // 71823033741491107630174654
  s21_decimal dec_2 = {{0xc9ac51be, 0x75fa586a, 0x3b691e, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_20) {
  // -9047065435320.4052138119878
  s21_decimal dec_1 = {{0xc223d2c6, 0xfff2a8fd, 0x4ad5e7, 0x800d0000}};
  // 459578404178313347936
  s21_decimal dec_2 = {{0x41440360, 0xe9ee7ba6, 0x18, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_21) {
  // -843123760002.51107
  s21_decimal dec_1 = {{0xc5aa04e3, 0x12b89a8, 0x0, 0x80050000}};
  // 40678954450768072866233
  s21_decimal dec_2 = {{0xc66cf9b9, 0x35e5eaa2, 0x89d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_22) {
  // 47547559868817844592161736
  s21_decimal dec_1 = {{0xbbabb3c8, 0x62a388ef, 0x275496, 0x0}};
  // -90688305452665603970
  s21_decimal dec_2 = {{0x6c410782, 0xea8d9552, 0x4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_23) {
  // -792077787699232658467
  s21_decimal dec_1 = {{0xf2085423, 0xf049974d, 0x2a, 0x80000000}};
  // 6330388832677922137223
  s21_decimal dec_2 = {{0xab44e487, 0x2bcaff7b, 0x157, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_24) {
  // -5501681045.326812962
  s21_decimal dec_1 = {{0xf6345722, 0x4c59e5c2, 0x0, 0x80090000}};
  // -26525042191331362136628161
  s21_decimal dec_2 = {{0x91139bc1, 0x6b1fe741, 0x15f0e5, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_25) {
  // 972744872233.617097377337213
  s21_decimal dec_1 = {{0xa0424f7d, 0x2fff6ac3, 0x324a2bd, 0xf0000}};
  // -89218348521786083
  s21_decimal dec_2 = {{0x83168ae3, 0x13cf79d, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_26) {
  // 1311250924277
  s21_decimal dec_1 = {{0x4ca542f5, 0x131, 0x0, 0x0}};
  // -4871479546675261948768.738
  s21_decimal dec_2 = {{0x466f31e2, 0x6f757856, 0x40793, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_27) {
  // -411385420753900912450980
  s21_decimal dec_1 = {{0xba031da4, 0x3f93924c, 0x571d, 0x80000000}};
  // -850904524759491.2508153
  s21_decimal dec_2 = {{0x6c8768f9, 0x46b971d5, 0x1cd, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_28) {
  // 541355400.60
  s21_decimal dec_1 = {{0x9abac95c, 0xc, 0x0, 0x20000}};
  // 9575278429119677991241691086
  s21_decimal dec_2 = {{0xc6b8afce, 0xc010da4f, 0x1ef07c13, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_29) {
  // 45823462653904970525910854
  s21_decimal dec_1 = {{0x44e72746, 0xe3548837, 0x25e77e, 0x0}};
  // 2914406524
  s21_decimal dec_2 = {{0xadb6507c, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_30) {
  // -1352
  s21_decimal dec_1 = {{0x548, 0x0, 0x0, 0x80000000}};
  // 369778861634993950974841908
  s21_decimal dec_2 = {{0xf0f49434, 0x4195ebb7, 0x131dfb8, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_31) {
  // 1970122325228.1047603313590
  s21_decimal dec_1 = {{0x11317bb6, 0x73d97b3b, 0x104be5, 0xd0000}};
  // -64016044813915837505705544
  s21_decimal dec_2 = {{0x42c79648, 0xbe391acb, 0x34f3ec, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_32) {
  // 93150824052850884133
  s21_decimal dec_1 = {{0x1d16fe25, 0xcba34f1, 0x5, 0x0}};
  // 6170738632464171310198
  s21_decimal dec_2 = {{0x6ea89c76, 0x84338c40, 0x14e, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_33) {
  // -1730652828
  s21_decimal dec_1 = {{0x6727aa9c, 0x0, 0x0, 0x80000000}};
  // -743216376350694378932020
  s21_decimal dec_2 = {{0xc82d8734, 0xd72a91d4, 0x9d61, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_34) {
  // -81825
  s21_decimal dec_1 = {{0x13fa1, 0x0, 0x0, 0x80000000}};
  // 77725378458361320850286960359
  s21_decimal dec_2 = {{0x1173dee7, 0x17360e45, 0xfb24ed19, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_35) {
  // 2101328077208115203.003585
  s21_decimal dec_1 = {{0xb7b3d4c1, 0x392b8b79, 0x1bcf9, 0x60000}};
  // -90928268783791581
  s21_decimal dec_2 = {{0x58e62ddd, 0x1430ac7, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_36) {
  // -68966788753822110740
  s21_decimal dec_1 = {{0x4af8d414, 0xbd1b40f8, 0x3, 0x80000000}};
  // 23285562510593517
  s21_decimal dec_2 = {{0x81d6cded, 0x52ba18, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_37) {
  // 768234268661694145351763321
  s21_decimal dec_1 = {{0x7e95c579, 0x272db325, 0x27b77ef, 0x0}};
  // 5011956818428180787241587212
  s21_decimal dec_2 = {{0xf936920c, 0x8c133c86, 0x1031cb23, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_38) {
  // -932142342787048581134
  s21_decimal dec_1 = {{0x226ea80e, 0x8812da10, 0x32, 0x80000000}};
  // -432703007133864108410
  s21_decimal dec_2 = {{0xf149217a, 0x74f5e46d, 0x17, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_39) {
  // 2971931530392350
  s21_decimal dec_1 = {{0xbb2a731e, 0xa8ef4, 0x0, 0x0}};
  // -2895096396066124472
  s21_decimal dec_2 = {{0x5608f2b8, 0x282d72d5, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_40) {
  // -563403.7
  s21_decimal dec_1 = {{0x55f7f5, 0x0, 0x0, 0x80010000}};
  // -653113892926519612020179.595
  s21_decimal dec_2 = {{0xd1f5428b, 0x145eb123, 0x21c3e3f, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_41) {
  // 7461507874617524.1
  s21_decimal dec_1 = {{0xcf8db709, 0x1091604, 0x0, 0x10000}};
  // 211496078990819928
  s21_decimal dec_2 = {{0x33a2c258, 0x2ef6290, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_42) {
  // 60398474872057841939289558
  s21_decimal dec_1 = {{0x6c4a95d6, 0xe230a5f2, 0x31f5df, 0x0}};
  // -9812
  s21_decimal dec_2 = {{0x2654, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_43) {
  // -30315583844497267154722084611
  s21_decimal dec_1 = {{0xdabdd703, 0x37f0eb49, 0x61f47695, 0x80000000}};
  // -169242852060340
  s21_decimal dec_2 = {{0xec13ecb4, 0x99ec, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_44) {
  // -568798389247905236.1951236547
  s21_decimal dec_1 = {{0x76ba51c3, 0xaa173f3e, 0x1260fd70, 0x800a0000}};
  // 959018963834.7
  s21_decimal dec_2 = {{0xe3d8c2cb, 0x8b8, 0x0, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_45) {
  // 541129163160
  s21_decimal dec_1 = {{0xfdcfc198, 0x7d, 0x0, 0x0}};
  // -64494602375832920522277
  s21_decimal dec_2 = {{0x9179fe25, 0x426811c5, 0xda8, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_46) {
  // -21049456409009244511156980979
  s21_decimal dec_1 = {{0x50664cf3, 0x6a1203cb, 0x4403b3c6, 0x80000000}};
  // -386978778
  s21_decimal dec_2 = {{0x1710d3da, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_47) {
  // -459179685595
  s21_decimal dec_1 = {{0xe93df6db, 0x6a, 0x0, 0x80000000}};
  // 3285334089174541647755
  s21_decimal dec_2 = {{0x820fbf8b, 0x192b5ba8, 0xb2, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_48) {
  // -1500011426855269.111324517
  s21_decimal dec_1 = {{0xb0ae5f65, 0xc84a8bb7, 0x13da3, 0x80090000}};
  // 732341447845305415
  s21_decimal dec_2 = {{0xad1d5c47, 0xa29ccaa, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_49) {
  // 37092221429280296921578359
  s21_decimal dec_1 = {{0x9ee9bb77, 0x5a50e6b3, 0x1eae95, 0x0}};
  // 9809.02896
  s21_decimal dec_2 = {{0x3a7763f0, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_50) {
  // 237314893562.93
  s21_decimal dec_1 = {{0x6afe3a05, 0x1595, 0x0, 0x20000}};
  // -979964979882045962132371674
  s21_decimal dec_2 = {{0x4163b8da, 0x1e46703, 0x32a9ba8, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_51) {
  // 6290560725
  s21_decimal dec_1 = {{0x76f256d5, 0x1, 0x0, 0x0}};
  // 802044708404212552475.41439
  s21_decimal dec_2 = {{0xd5cfb4bf, 0x138fb872, 0x4257f5, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_52) {
  // -6004301228364587
  s21_decimal dec_1 = {{0x51d7532b, 0x1554e1, 0x0, 0x80000000}};
  // -9619412283331584904435
  s21_decimal dec_2 = {{0x85accf3, 0x782999dc, 0x209, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_53) {
  // 322630124831320484353866344
  s21_decimal dec_1 = {{0xe89afa68, 0x1cd1586e, 0x10adf96, 0x0}};
  // 564189476.3658176383
  s21_decimal dec_2 = {{0x3ffb677f, 0x4e4c0965, 0x0, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_54) {
  // -7203012631483887
  s21_decimal dec_1 = {{0x113655ef, 0x19971a, 0x0, 0x80000000}};
  // -752866218727017653541402
  s21_decimal dec_2 = {{0x844d1a1a, 0xf5a1940a, 0x9f6c, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_55) {
  // 38466703245827602174.6082
  s21_decimal dec_1 = {{0x5dd839a2, 0xd773ff84, 0x5174, 0x40000}};
  // 5040021289135597339998
  s21_decimal dec_2 = {{0xa59ac55e, 0x3858934a, 0x111, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_56) {
  // 40314708404489628195130
  s21_decimal dec_1 = {{0x633c993a, 0x76f80167, 0x889, 0x0}};
  // 39448042904058212
  s21_decimal dec_2 = {{0x38617964, 0x8c25c9, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_57) {
  // -167908448758
  s21_decimal dec_1 = {{0x181f99f6, 0x27, 0x0, 0x80000000}};
  // 3744642191984846696200710
  s21_decimal dec_2 = {{0x1a5dba06, 0x75c1ad95, 0x318f5, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_58) {
  // 920989043009641312.4
  s21_decimal dec_1 = {{0xd22a91c4, 0x7fd01a8c, 0x0, 0x10000}};
  // 93421542216
  s21_decimal dec_2 = {{0xc05b9b48, 0x15, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_59) {
  // -628821940716912980983508
  s21_decimal dec_1 = {{0x4ca2fed4, 0x8176509a, 0x8528, 0x80000000}};
  // -9721598622707678009.1
  s21_decimal dec_2 = {{0xb22dd03b, 0x45249066, 0x5, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_60) {
  // -339761592325379000068392787
  s21_decimal dec_1 = {{0x1852c753, 0xd38969cc, 0x1190b50, 0x80000000}};
  // -87693136829138303
  s21_decimal dec_2 = {{0x7df0c57f, 0x1378c71, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_61) {
  // 468955224668790707113912001
  s21_decimal dec_1 = {{0x18fb66c1, 0xab51c65d, 0x183e921, 0x0}};
  // -390524553250991969
  s21_decimal dec_2 = {{0x1897ef61, 0x56b6c03, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_62) {
  // -4358606007969491489106148295
  s21_decimal dec_1 = {{0xc56bbbc7, 0x247741f0, 0xe155ab9, 0x80000000}};
  // 135297988470884277690386492
  s21_decimal dec_2 = {{0xaa9d483c, 0xa6d2b3fa, 0x6fea76, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_63) {
  // -7501383108761986228427.4978123
  s21_decimal dec_1 = {{0x513b4d4b, 0x953957bb, 0xf261fc9b, 0x80070000}};
  // 78402023
  s21_decimal dec_2 = {{0x4ac51e7, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_64) {
  // 897078132652940453809756
  s21_decimal dec_1 = {{0x91410e5c, 0xb3f8d433, 0xbdf6, 0x0}};
  // -1389080.97488472035814
  s21_decimal dec_2 = {{0xf9b4d1e6, 0x87bcb2b2, 0x7, 0x800e0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_65) {
  // 543351175291668641
  s21_decimal dec_1 = {{0xdf8d08a1, 0x78a5f03, 0x0, 0x0}};
  // 1095437054512479568
  s21_decimal dec_2 = {{0x7c043d50, 0xf33c632, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_66) {
  // 96883873392063362496
  s21_decimal dec_1 = {{0x8ddb35c0, 0x4088a989, 0x5, 0x0}};
  // -58927458027903
  s21_decimal dec_2 = {{0x1e34097f, 0x3598, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_67) {
  // 39079061232696276288
  s21_decimal dec_1 = {{0x3299b540, 0x1e54b724, 0x2, 0x0}};
  // 850052381513042.66
  s21_decimal dec_2 = {{0x500e544a, 0x12dffd0, 0x0, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_68) {
  // 57011837524184
  s21_decimal dec_1 = {{0x1a52d8d8, 0x33da, 0x0, 0x0}};
  // 4695312959560706284
  s21_decimal dec_2 = {{0x87e768ec, 0x41291a42, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_69) {
  // 13479009927805551102066898544
  s21_decimal dec_1 = {{0x94db3670, 0x558288ad, 0x2b8d9360, 0x0}};
  // -585060
  s21_decimal dec_2 = {{0x8ed64, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_70) {
  // -1884170385530771517967
  s21_decimal dec_1 = {{0xb070b20f, 0x241de6e0, 0x66, 0x80000000}};
  // 57502984368739570109540807574
  s21_decimal dec_2 = {{0x566d3396, 0xd9707572, 0xb9cd5a94, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_71) {
  // -5166243739774879503818524
  s21_decimal dec_1 = {{0xbf411f1c, 0xa26250cf, 0x445fe, 0x80000000}};
  // 580858968671014
  s21_decimal dec_2 = {{0xc47e0326, 0x21049, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_72) {
  // 79228162514264337593157585428
  s21_decimal dec_1 = {{0xe8f88a14, 0xffffffff, 0xffffffff, 0x0}};
  // -58453330690
  s21_decimal dec_2 = {{0x9c170b02, 0xd, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_73) {
  // -8937499017524209112062549
  s21_decimal dec_1 = {{0xaa41a55, 0xcae5d305, 0x76496, 0x80000000}};
  // -790350578098909
  s21_decimal dec_2 = {{0xd574a2dd, 0x2ced1, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_74) {
  // -3345011500811781908170.3
  s21_decimal dec_1 = {{0x94c83e7, 0x55992594, 0x715, 0x80010000}};
  // 32695012504705704568
  s21_decimal dec_2 = {{0xbdf02278, 0xc5bc04a5, 0x1, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_75) {
  // -289994583958773692467537.01
  s21_decimal dec_1 = {{0x87d9a3a5, 0xca28d6ed, 0x17fcdf, 0x80020000}};
  // -70617312
  s21_decimal dec_2 = {{0x43588e0, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_76) {
  // 5287898123
  s21_decimal dec_1 = {{0x3b2eec0b, 0x1, 0x0, 0x0}};
  // -40897291761022838268643
  s21_decimal dec_2 = {{0xbf862e3, 0xbefdd83, 0x8a9, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_77) {
  // 333179622524074390
  s21_decimal dec_1 = {{0xf6f23996, 0x49fb119, 0x0, 0x0}};
  // 685411654330229294019570878
  s21_decimal dec_2 = {{0xedceecbe, 0x3bcc4944, 0x236f590, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_78) {
  // 447821568
  s21_decimal dec_1 = {{0x1ab13700, 0x0, 0x0, 0x0}};
  // -893104777284457126311222584
  s21_decimal dec_2 = {{0xec1fdd38, 0xfd4c90d3, 0x2e2c24a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_79) {
  // 448
  s21_decimal dec_1 = {{0x1c0, 0x0, 0x0, 0x0}};
  // 46660963332950826337267630235
  s21_decimal dec_2 = {{0x697c409b, 0xcae7036a, 0x96c50b52, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_80) {
  // -786762055727077
  s21_decimal dec_1 = {{0x50dab7e5, 0x2cb8e, 0x0, 0x80000000}};
  // 4132292868756735
  s21_decimal dec_2 = {{0x688cd4ff, 0xeae4c, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_81) {
  // 636347317270098025307153
  s21_decimal dec_1 = {{0x1cb2dc11, 0x750a8892, 0x86c0, 0x0}};
  // -470548424.6
  s21_decimal dec_2 = {{0x1877fdd6, 0x1, 0x0, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_82) {
  // -379862858006653310423812573
  s21_decimal dec_1 = {{0x8b4c49dd, 0xcb7c7d56, 0x13a3716, 0x80000000}};
  // -4041242857.7178734505
  s21_decimal dec_2 = {{0x3d954fa9, 0x30d5c9ad, 0x2, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_83) {
  // 260558653844696247341183.8912
  s21_decimal dec_1 = {{0xf0c83c0, 0x4776f88d, 0x86b4a69, 0x40000}};
  // -84167630236961
  s21_decimal dec_2 = {{0xcdb3ad21, 0x4c8c, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_84) {
  // 3514074192
  s21_decimal dec_1 = {{0xd1748450, 0x0, 0x0, 0x0}};
  // 732781215861471110262
  s21_decimal dec_2 = {{0x7dd2e476, 0xb961d962, 0x27, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_85) {
  // -55297675086341410255980154
  s21_decimal dec_1 = {{0x5b02c67a, 0xf91d1c5d, 0x2dbdbc, 0x80000000}};
  // -737594135505343.488487626
  s21_decimal dec_2 = {{0xa87470ca, 0xee69ce4, 0x9c31, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_86) {
  // -639501728901300507564088
  s21_decimal dec_1 = {{0x3d26d838, 0x754be25c, 0x876b, 0x80000000}};
  // 9164774278094826127190110713
  s21_decimal dec_2 = {{0x64efb1f9, 0x21ea7992, 0x1d9cec71, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_87) {
  // 470915265569.405507384
  s21_decimal dec_1 = {{0xf5279738, 0x87431b04, 0x19, 0x90000}};
  // 20650947541582
  s21_decimal dec_2 = {{0x2c647a4e, 0x12c8, 0x2c647a4e, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_88) {
  // -38763855152519030205889800
  s21_decimal dec_1 = {{0x74c4bd08, 0xcc6b6548, 0x201090, 0x80000000}};
  // 9692749194047.2165996014983
  s21_decimal dec_2 = {{0x5181ad87, 0xdde4bda3, 0x502d31, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_89) {
  // 42944796050132260
  s21_decimal dec_1 = {{0x81850d24, 0x989210, 0x0, 0x0}};
  // 665524948275902932
  s21_decimal dec_2 = {{0x132539d4, 0x93c6b6a, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_90) {
  // 1595662848901937222705165
  s21_decimal dec_1 = {{0x5cc4e00d, 0xe6e0c35, 0x151e5, 0x0}};
  // -45550910.2740
  s21_decimal dec_2 = {{0xe755094, 0x6a, 0x0, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_91) {
  // 430.0
  s21_decimal dec_1 = {{0x10cc, 0x0, 0x0, 0x10000}};
  // 4092296788434667248429358359
  s21_decimal dec_2 = {{0x5ef0dd17, 0x6c7f33b1, 0xd39118d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_92) {
  // -53389358320752821
  s21_decimal dec_1 = {{0xa97e98b5, 0xbdad56, 0x0, 0x80000000}};
  // 94151649069646077
  s21_decimal dec_2 = {{0xdd040fd, 0x14e7e6d, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_93) {
  // 858075.9461967
  s21_decimal dec_1 = {{0xdd1ea04f, 0x7cd, 0x0, 0x70000}};
  // -790696636025497596696784
  s21_decimal dec_2 = {{0x15f798d0, 0xc02296de, 0xa76f, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_94) {
  // 6670197423716303859
  s21_decimal dec_1 = {{0x765603f3, 0x5c914d37, 0x0, 0x0}};
  // 23843004029006315933304744868
  s21_decimal dec_2 = {{0x44e1eba4, 0x576a31ba, 0x4d0a787e, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_95) {
  // -1908542829253533071121935284
  s21_decimal dec_1 = {{0x7c9d6bb4, 0x1681a2c2, 0x62ab5aa, 0x80000000}};
  // 4600.5370842378075840957963909
  s21_decimal dec_2 = {{0x8d9cde85, 0xaa56506f, 0x94a6c036, 0x190000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_96) {
  // -674802265917687355082377
  s21_decimal dec_1 = {{0xd6d30689, 0x1aa89c80, 0x8ee5, 0x80000000}};
  // -52128465793544943
  s21_decimal dec_2 = {{0x3e4f72ef, 0xb93290, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_97) {
  // -13804086010345161.74046673
  s21_decimal dec_1 = {{0x202d85d1, 0x19a73aac, 0x12450, 0x80080000}};
  // -6810957.10659
  s21_decimal dec_2 = {{0x9477c7c3, 0x9e, 0x202d85d1, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_98) {
  // -5385019650494802964756
  s21_decimal dec_1 = {{0x70e83114, 0xec28f911, 0x123, 0x80000000}};
  // -552126931051.00984347
  s21_decimal dec_2 = {{0x8634101b, 0xfe3ae3d9, 0x2, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_99) {
  // -4737377998416127.27577
  s21_decimal dec_1 = {{0x4a6e8519, 0xae6ec2fc, 0x19, 0x80050000}};
  // 41015097548330964584340714070
  s21_decimal dec_2 = {{0x768cf256, 0x548c4ec2, 0x8486e4bd, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_100) {
  // 938713094729270610398
  s21_decimal dec_1 = {{0x21c8c9de, 0xe342da24, 0x32, 0x0}};
  // 214089585167647529663273
  s21_decimal dec_2 = {{0x50927b29, 0xd1d5b6bd, 0x2d55, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_101) {
  // 8.9925227817562
  s21_decimal dec_1 = {{0x5942aa5a, 0x51c9, 0x46142497, 0xd0000}};
  // 900234177897547986904215
  s21_decimal dec_2 = {{0x46142497, 0xcae5f0ba, 0xbea1, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_102) {
  // -295952292680521179691
  s21_decimal dec_1 = {{0xa4e7622b, 0xb29c22b, 0x10, 0x80000000}};
  // 16101138902379751799879547444
  s21_decimal dec_2 = {{0xd03aba34, 0xdf5f6d78, 0x34068cc8, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_103) {
  // -31748923.2357751462823047850
  s21_decimal dec_1 = {{0xaab1b2aa, 0xc5ed4115, 0x1069ef5, 0x80130000}};
  // -310904659234214
  s21_decimal dec_2 = {{0x21c5cda6, 0x11ac4, 0xaab1b2aa, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_104) {
  // -1756352032406969905
  s21_decimal dec_1 = {{0x30271e31, 0x185fd0de, 0x0, 0x80000000}};
  // -9135436563637195892.667866
  s21_decimal dec_2 = {{0x411135da, 0x22972b7, 0x78e81, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_105) {
  // 478322683605582266645.3
  s21_decimal dec_1 = {{0x56eb8ad5, 0x4c9b68c5, 0x103, 0x10000}};
  // 301576806873879759085259.9498
  s21_decimal dec_2 = {{0x193efeca, 0x978a1876, 0x9be95ba, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_106) {
  // -81061238541203663941
  s21_decimal dec_1 = {{0xeda5ec45, 0x64f35ef8, 0x4, 0x80000000}};
  // -2828572571841526.738383720
  s21_decimal dec_2 = {{0xffef368, 0x39f37618, 0x256f9, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_107) {
  // -5677260479851463177331113
  s21_decimal dec_1 = {{0xeb52e1a9, 0xe844e1bc, 0x4b234, 0x80000000}};
  // -145330322107342
  s21_decimal dec_2 = {{0x5a396bce, 0x842d, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_108) {
  // 1785219752134
  s21_decimal dec_1 = {{0xa763a0c6, 0x19f, 0x0, 0x0}};
  // -4389933015242621347471197548
  s21_decimal dec_2 = {{0xefee856c, 0x9c0e6388, 0xe2f4479, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_109) {
  // -797848758348476224626718316
  s21_decimal dec_1 = {{0xfea3766c, 0xdb16a078, 0x293f70b, 0x80000000}};
  // 2530726723361739898761
  s21_decimal dec_2 = {{0x5cc3ff89, 0x30e37288, 0x89, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_110) {
  // -504828699345265083
  s21_decimal dec_1 = {{0xe5a1bb, 0x7018307, 0x0, 0x80000000}};
  // -12676250898091707144084
  s21_decimal dec_2 = {{0xa2971794, 0x2e51f628, 0x2af, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_111) {
  // 242531914404293817424.356
  s21_decimal dec_1 = {{0xf1c059e4, 0xae71d98c, 0x335b, 0x30000}};
  // -3483871795873650723155601114
  s21_decimal dec_2 = {{0xf45fe6da, 0x7cc395e2, 0xb41ca8c, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_112) {
  // -32263164409551503427.1599
  s21_decimal dec_1 = {{0xf3c63f6f, 0xe57f3128, 0x4451, 0x80040000}};
  // 6874166964774579488299710689
  s21_decimal dec_2 = {{0x9cb878e1, 0xdca12b76, 0x16362d79, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_113) {
  // 11765961427041337796616
  s21_decimal dec_1 = {{0xa318e808, 0xd5841b28, 0x27d, 0x0}};
  // -779131511568535651.69497
  s21_decimal dec_2 = {{0x73e21f59, 0xae2ddf97, 0x107f, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_114) {
  // 61721894291829138025978
  s21_decimal dec_1 = {{0xae126dfa, 0xf35a21ce, 0xd11, 0x0}};
  // -324583229477
  s21_decimal dec_2 = {{0x92ab0825, 0x4b, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_115) {
  // 823355859291459611461506
  s21_decimal dec_1 = {{0x74b70782, 0x35e7d347, 0xae5a, 0x0}};
  // -2291129
  s21_decimal dec_2 = {{0x22f5b9, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_116) {
  // 77.3578619636053
  s21_decimal dec_1 = {{0xced44955, 0x2bf90, 0x0, 0xd0000}};
  // 35700566357957229759513370643
  s21_decimal dec_2 = {{0xa06e2013, 0x3687a17f, 0x735ad0fc, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_117) {
  // -252628.1223
  s21_decimal dec_1 = {{0x9693fe07, 0x0, 0x0, 0x80040000}};
  // 558440649466220004348577678
  s21_decimal dec_2 = {{0x9fe4c78e, 0x448ce01e, 0x1cdee68, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_118) {
  // 67870348754363001
  s21_decimal dec_1 = {{0xfc492279, 0xf11fb8, 0x0, 0x0}};
  // 835363482062857296
  s21_decimal dec_2 = {{0x36b0a450, 0xb97cea9, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_119) {
  // -3805458604188357106453735619
  s21_decimal dec_1 = {{0x8c4868c3, 0x4c59099b, 0xc4bcd34, 0x80000000}};
  // -37914
  s21_decimal dec_2 = {{0x941a, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_120) {
  // -8290679985279203
  s21_decimal dec_1 = {{0x5b7810e3, 0x1d7454, 0x0, 0x80000000}};
  // 3111427425432361284394
  s21_decimal dec_2 = {{0xb818b32a, 0xabbac661, 0xa8, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_121) {
  // -4022587269498467917986647862
  s21_decimal dec_1 = {{0x279cf36, 0xd483f6ca, 0xcff67fc, 0x80000000}};
  // -4069
  s21_decimal dec_2 = {{0xfe5, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_122) {
  // -632
  s21_decimal dec_1 = {{0x278, 0x0, 0x0, 0x80000000}};
  // -460183202514288282938235636
  s21_decimal dec_2 = {{0x75f5daf4, 0x6536bba9, 0x17ca795, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_123) {
  // -1513035681376142933
  s21_decimal dec_1 = {{0x90ea8655, 0x14ff61ef, 0x0, 0x80000000}};
  // -54540945755093755391304485
  s21_decimal dec_2 = {{0x8ddae325, 0x9806d673, 0x2d1d7e, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_124) {
  // 413263
  s21_decimal dec_1 = {{0x64e4f, 0x0, 0x0, 0x0}};
  // 738192696688196192358287276
  s21_decimal dec_2 = {{0x9f2ac7ac, 0x45eac8aa, 0x2629e62, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_125) {
  // 388913596713821775905250504
  s21_decimal dec_1 = {{0x3b355cc8, 0x52c4b238, 0x141b3a8, 0x0}};
  // -78267894921014839045339
  s21_decimal dec_2 = {{0x518f6cdb, 0xe93ce595, 0x1092, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_126) {
  // -26690322093395781195741
  s21_decimal dec_1 = {{0x6fd197dd, 0xe2a0648e, 0x5a6, 0x80000000}};
  // -3708294521930
  s21_decimal dec_2 = {{0x6793e44a, 0x35f, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_127) {
  // 8317697
  s21_decimal dec_1 = {{0x7eeb01, 0x0, 0x0, 0x0}};
  // -48939259254575742613328
  s21_decimal dec_2 = {{0x77547750, 0xa7c8ba, 0xa5d, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_128) {
  // 83890355446828075289.521439169
  s21_decimal dec_1 = {{0xf14c41c1, 0x4d363658, 0xf1079c1, 0x90000}};
  // 52322237954813257236053872116
  s21_decimal dec_2 = {{0x40c9cdf4, 0xfedfce16, 0xa90ff0da, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_129) {
  // 54768623178569509464619
  s21_decimal dec_1 = {{0x94ff6a2b, 0x354bc4e, 0xb99, 0x0}};
  // 32172028865
  s21_decimal dec_2 = {{0x7d9a33c1, 0x7, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_130) {
  // -415265524000.4715764540
  s21_decimal dec_1 = {{0xe9955b3c, 0x1dab1312, 0xe1, 0x800a0000}};
  // -49537973843087443424
  s21_decimal dec_2 = {{0x31d1c5e0, 0xaf7a3cbf, 0x2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_131) {
  // -44354437764
  s21_decimal dec_1 = {{0x53bb0284, 0xa, 0x0, 0x80000000}};
  // 3348859819408424256500
  s21_decimal dec_2 = {{0x71ed43f4, 0x8ac416bb, 0xb5, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_132) {
  // 311946842875408
  s21_decimal dec_1 = {{0xc8c22610, 0x11bb6, 0x0, 0x0}};
  // -953390980547340600486267090
  s21_decimal dec_2 = {{0x9ab208d2, 0x9deb8f2a, 0x314a064, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_133) {
  // -2030274716811
  s21_decimal dec_1 = {{0xb5cda48b, 0x1d8, 0x0, 0x80000000}};
  // -656122181732635304328267
  s21_decimal dec_2 = {{0xb310fc4b, 0x746a0186, 0x8af0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_134) {
  // -723516720590961509.0
  s21_decimal dec_1 = {{0x7ecc51f2, 0x64687a3d, 0x0, 0x80010000}};
  // 415864448462885567
  s21_decimal dec_2 = {{0x355812bf, 0x5c57283, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_135) {
  // -95005683505929.3683259659377
  s21_decimal dec_1 = {{0x9449d471, 0x3a511061, 0x311de5c, 0x800d0000}};
  // 13324154293931671
  s21_decimal dec_2 = {{0x6b9f4e97, 0x2f563f, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_136) {
  // -6583551745755396704.000
  s21_decimal dec_1 = {{0xc93c0700, 0xe522579c, 0x164, 0x80030000}};
  // -6253701643746829
  s21_decimal dec_2 = {{0x6101be0d, 0x1637b5, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_137) {
  // -73363
  s21_decimal dec_1 = {{0x11e93, 0x0, 0x0, 0x80000000}};
  // -5019294899941203543193751536
  s21_decimal dec_2 = {{0xc0530ff0, 0xbe3ab498, 0x1037dd09, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_138) {
  // -794263782
  s21_decimal dec_1 = {{0x2f5780e6, 0x0, 0x0, 0x80000000}};
  // 79228162514264337591436657655
  s21_decimal dec_2 = {{0x826543f7, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_139) {
  // -90667416249788540535
  s21_decimal dec_1 = {{0xdf202677, 0xea435eb3, 0x4, 0x80000000}};
  // -6350117843574297999163
  s21_decimal dec_2 = {{0x5390373b, 0x3d96865d, 0x158, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_140) {
  // 24537.864423276237224
  s21_decimal dec_1 = {{0x901351a8, 0x548801af, 0x1, 0xf0000}};
  // 39225924380205
  s21_decimal dec_2 = {{0xff49e62d, 0x23ac, 0xff49e62d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(test_mul2801) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 0.0000000000000000000000000002
  s21_decimal check = {{0x2, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2802) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -0.0000000000000000000000000002
  s21_decimal check = {{0x2, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2803) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2804) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2811) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2812) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2813) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2814) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2815) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2816) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2817) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7.9228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2818) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7.9228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2819) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2820) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2821) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2822) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2823) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // 0.0000000000000792281625142643
  s21_decimal check = {{0x70D42573, 0x2D093, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2824) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // -0.0000000000000792281625142643
  s21_decimal check = {{0x70D42573, 0x2D093, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2829) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2830) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2832) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2837) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2838) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2839) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.0000000057476540395758265627
  s21_decimal check = {{0x578FA51B, 0x1DA5B0F7, 0x3, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2840) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // 0.0000000057476540395758265627
  s21_decimal check = {{0x578FA51B, 0x1DA5B0F7, 0x3, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2841) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  // -0.0000000000000000000000007056
  s21_decimal check = {{0x1B90, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2842) {
  // 0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  // 0.0000000000000000000000007056
  s21_decimal check = {{0x1B90, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2843) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -2.6409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2844) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 2.6409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2845) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -2.6409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2846) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 2.6409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2847) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -0.0000000006148914691236517205
  s21_decimal check = {{0x55555555, 0x55555555, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2848) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 0.0000000006148914691236517205
  s21_decimal check = {{0x55555555, 0x55555555, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2849) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -0.0000000006148914689804861440
  s21_decimal check = {{0x0, 0x55555555, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2850) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 0.0000000006148914689804861440
  s21_decimal check = {{0x0, 0x55555555, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2851) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -0.0000000000000000001431655765
  s21_decimal check = {{0x55555555, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2852) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000001431655765
  s21_decimal check = {{0x55555555, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2853) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -0.0000000000000000000026409388
  s21_decimal check = {{0x192F9AC, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2854) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 0.0000000000000000000026409388
  s21_decimal check = {{0x192F9AC, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2857) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000026409387
  s21_decimal check = {{0x192F9AB, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2858) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000026409387
  s21_decimal check = {{0x192F9AB, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2859) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -0.0000000000000000000000000002
  s21_decimal check = {{0x2, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2860) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 0.0000000000000000000000000002
  s21_decimal check = {{0x2, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2861) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2862) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2869) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2870) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2871) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2872) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2873) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2874) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2875) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7.9228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2876) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7.9228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2877) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2878) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2879) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
  // -0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2880) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
  // 0.0000000000000000000000000001
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2881) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // -0.0000000000000792281625142643
  s21_decimal check = {{0x70D42573, 0x2D093, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2882) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // 0.0000000000000792281625142643
  s21_decimal check = {{0x70D42573, 0x2D093, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2887) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2888) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2889) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2895) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2896) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2897) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.0000000057476540395758265627
  s21_decimal check = {{0x578FA51B, 0x1DA5B0F7, 0x3, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2898) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // -0.0000000057476540395758265627
  s21_decimal check = {{0x578FA51B, 0x1DA5B0F7, 0x3, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2899) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  // 0.0000000000000000000000007056
  s21_decimal check = {{0x1B90, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2900) {
  // -0.0000000000000000000000000001
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  // -0.0000000000000000000000007056
  s21_decimal check = {{0x1B90, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2901) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26.409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x1B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2902) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26.409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x801B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2903) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26.409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x1B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2904) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26.409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x801B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2905) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 0.0000000061489146912365172050
  s21_decimal check = {{0x55555552, 0x55555555, 0x3, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2906) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -0.0000000061489146912365172050
  s21_decimal check = {{0x55555552, 0x55555555, 0x3, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2907) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // 0.0000000061489146898048614400
  s21_decimal check = {{0x0, 0x55555552, 0x3, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2908) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -0.0000000061489146898048614400
  s21_decimal check = {{0x0, 0x55555552, 0x3, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2909) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 0.0000000000000000014316557650
  s21_decimal check = {{0x55555552, 0x3, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2910) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000014316557650
  s21_decimal check = {{0x55555552, 0x3, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2911) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // 0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2912) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // -0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2913) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // 0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2914) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // -0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2915) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 0.0000000000000000000264093870
  s21_decimal check = {{0xFBDC0AE, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2916) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000264093870
  s21_decimal check = {{0xFBDC0AE, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2917) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 0.0000000000000000000000000020
  s21_decimal check = {{0x14, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2918) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -0.0000000000000000000000000020
  s21_decimal check = {{0x14, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2919) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2920) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2921) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2922) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2923) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2924) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2925) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2926) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2927) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2928) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2929) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 0.0000000000000000000000000080
  s21_decimal check = {{0x50, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2930) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000080
  s21_decimal check = {{0x50, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2931) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2932) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2933) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79.228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2934) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79.228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2935) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 0.0000000000000000000000000079
  s21_decimal check = {{0x4F, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2936) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -0.0000000000000000000000000079
  s21_decimal check = {{0x4F, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2937) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
  // 0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2938) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
  // -0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2939) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // 0.0000000000007922816251426434
  s21_decimal check = {{0x68497682, 0x1C25C2, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2940) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // -0.0000000000007922816251426434
  s21_decimal check = {{0x68497682, 0x1C25C2, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2945) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2946) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2948) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2953) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2954) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2955) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.0000000574765403957582656267
  s21_decimal check = {{0x6B9C730B, 0x2878E9A9, 0x1F, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2956) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // 0.0000000574765403957582656267
  s21_decimal check = {{0x6B9C730B, 0x2878E9A9, 0x1F, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2957) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  // -0.0000000000000000000000070558
  s21_decimal check = {{0x1139E, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2958) {
  // 0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  // 0.0000000000000000000000070558
  s21_decimal check = {{0x1139E, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2959) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26.409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x801B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2960) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26.409387504754779197847983445
  s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x1B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2961) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26.409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x801B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2962) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26.409387498605864508043122005
  s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x1B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2963) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -0.0000000061489146912365172050
  s21_decimal check = {{0x55555552, 0x55555555, 0x3, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2964) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 0.0000000061489146912365172050
  s21_decimal check = {{0x55555552, 0x55555555, 0x3, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2965) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // -0.0000000061489146898048614400
  s21_decimal check = {{0x0, 0x55555552, 0x3, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2966) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 0.0000000061489146898048614400
  s21_decimal check = {{0x0, 0x55555552, 0x3, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2967) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -0.0000000000000000014316557650
  s21_decimal check = {{0x55555552, 0x3, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2968) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000014316557650
  s21_decimal check = {{0x55555552, 0x3, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2969) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2970) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2971) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2972) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 0.0000000000000000000264093875
  s21_decimal check = {{0xFBDC0B3, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2973) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000264093870
  s21_decimal check = {{0xFBDC0AE, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2974) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000264093870
  s21_decimal check = {{0xFBDC0AE, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2975) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -0.0000000000000000000000000020
  s21_decimal check = {{0x14, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2976) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 0.0000000000000000000000000020
  s21_decimal check = {{0x14, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2977) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2978) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2979) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2980) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2981) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2982) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2983) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2984) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 0.0000000000000000000000000005
  s21_decimal check = {{0x5, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2985) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2986) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2987) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -0.0000000000000000000000000080
  s21_decimal check = {{0x50, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2988) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000000000080
  s21_decimal check = {{0x50, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2989) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2990) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.0000000000000000000000000010
  s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2991) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79.228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2992) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79.228162514264337593543950335
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2993) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -0.0000000000000000000000000079
  s21_decimal check = {{0x4F, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2994) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 0.0000000000000000000000000079
  s21_decimal check = {{0x4F, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2995) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
  // -0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2996) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
  // 0.0000000000000000000000000008
  s21_decimal check = {{0x8, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2997) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // -0.0000000000007922816251426434
  s21_decimal check = {{0x68497682, 0x1C25C2, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul2998) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // 0.0000000000007922816251426434
  s21_decimal check = {{0x68497682, 0x1C25C2, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3011) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3012) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3013) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.0000000574765403957582656267
  s21_decimal check = {{0x6B9C730B, 0x2878E9A9, 0x1F, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3014) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // -0.0000000574765403957582656267
  s21_decimal check = {{0x6B9C730B, 0x2878E9A9, 0x1F, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3015) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  // 0.0000000000000000000000070558
  s21_decimal check = {{0x1139E, 0x0, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3016) {
  // -0.0000000000000000000000000010
  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  // -0.0000000000000000000000070558
  s21_decimal check = {{0x1139E, 0x0, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3017) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3018) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3019) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3020) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3021) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3022) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3023) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3024) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3027) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // 10575248824567332858988.474037
  s21_decimal check = {{0xDD4A2EB5, 0x822F484A, 0x222BA40B, 0x60000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3028) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // -10575248824567332858988.474037
  s21_decimal check = {{0xDD4A2EB5, 0x822F484A, 0x222BA40B, 0x80060000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3029) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // 10575248822105090868937.919094
  s21_decimal check = {{0x7D468A76, 0x6003A43F, 0x222BA40B, 0x60000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3030) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // -10575248822105090868937.919094
  s21_decimal check = {{0x7D468A76, 0x6003A43F, 0x222BA40B, 0x80060000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3031) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // 10575248622445743161168.257945
  s21_decimal check = {{0x2D766399, 0x8D2F2559, 0x222BA400, 0x60000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3032) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // -10575248622445743161168.257945
  s21_decimal check = {{0x2D766399, 0x8D2F2559, 0x222BA400, 0x80060000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3033) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 800870434625820.2177254820354
  s21_decimal check = {{0xDCA98A02, 0x8CE489CB, 0x19E0A51C, 0xD0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3034) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -800870434625820.2177254820354
  s21_decimal check = {{0xDCA98A02, 0x8CE489CB, 0x19E0A51C, 0x800D0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3035) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 400435217312910.10886274103770
  s21_decimal check = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3036) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -400435217312910.10886274103770
  s21_decimal check = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3037) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 200217608656455.05443137051885
  s21_decimal check = {{0xA7A7DCED, 0x603B587D, 0x40B19CC7, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3038) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -200217608656455.05443137051885
  s21_decimal check = {{0xA7A7DCED, 0x603B587D, 0x40B19CC7, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3039) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 200217608656455.05443137051881
  s21_decimal check = {{0xA7A7DCE9, 0x603B587D, 0x40B19CC7, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3040) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -200217608656455.05443137051881
  s21_decimal check = {{0xA7A7DCE9, 0x603B587D, 0x40B19CC7, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3041) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // 200217608656455.05443137051889
  s21_decimal check = {{0xA7A7DCF1, 0x603B587D, 0x40B19CC7, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3042) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // -200217608656455.05443137051889
  s21_decimal check = {{0xA7A7DCF1, 0x603B587D, 0x40B19CC7, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3043) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 400435217312910.10886274103774
  s21_decimal check = {{0x4F4FB9DE, 0xC076B0FB, 0x8163398E, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3044) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -400435217312910.10886274103774
  s21_decimal check = {{0x4F4FB9DE, 0xC076B0FB, 0x8163398E, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3045) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 3203481738503280.8709019283016
  s21_decimal check = {{0x72A62E48, 0x3392272F, 0x67829472, 0xD0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3046) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -3203481738503280.8709019283016
  s21_decimal check = {{0x72A62E48, 0x3392272F, 0x67829472, 0x800D0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3047) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 400435217312910.10886274103766
  s21_decimal check = {{0x4F4FB9D6, 0xC076B0FB, 0x8163398E, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3048) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -400435217312910.10886274103766
  s21_decimal check = {{0x4F4FB9D6, 0xC076B0FB, 0x8163398E, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3049) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3050) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3051) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 3172574647370199.8576965422111
  s21_decimal check = {{0x97DE8C1F, 0x868DD8E0, 0x6682EC22, 0xD0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3052) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -3172574647370199.8576965422111
  s21_decimal check = {{0x97DE8C1F, 0x868DD8E0, 0x6682EC22, 0x800D0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3053) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
  // 317257464737019.98576965422113
  s21_decimal check = {{0x97DE8C21, 0x868DD8E0, 0x6682EC22, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3054) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
  // -317257464737019.98576965422113
  s21_decimal check = {{0x97DE8C21, 0x868DD8E0, 0x6682EC22, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3055) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3056) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3057) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.0000000000000025
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x100000}};
  // 1.0010880432822752721568525942
  s21_decimal check = {{0xD3D3EE76, 0xB01DAC3E, 0x2058CE63, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3058) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.0000000000000025
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x80100000}};
  // -1.0010880432822752721568525942
  s21_decimal check = {{0xD3D3EE76, 0xB01DAC3E, 0x2058CE63, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3059) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.0000000000000005
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x100000}};
  // 0.2002176086564550544313705188
  s21_decimal check = {{0xF72A62E4, 0x23392272, 0x6782947, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3060) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.0000000000000005
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80100000}};
  // -0.2002176086564550544313705188
  s21_decimal check = {{0xF72A62E4, 0x23392272, 0x6782947, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3062) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3064) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3065) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3066) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3067) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3068) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3069) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3070) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3071) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3072) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3073) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // -7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  // -2825399045699384434.0452935949
  s21_decimal check = {{0x109AC90D, 0xBE2CD8E0, 0x5B4B2733, 0x800A0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3074) {
  // 400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // 7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  // 2825399045699384434.0452935949
  s21_decimal check = {{0x109AC90D, 0xBE2CD8E0, 0x5B4B2733, 0xA0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3075) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3076) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3077) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3078) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3079) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3080) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3081) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3082) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3085) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -10575248824567332858988.474037
  s21_decimal check = {{0xDD4A2EB5, 0x822F484A, 0x222BA40B, 0x80060000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3086) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 10575248824567332858988.474037
  s21_decimal check = {{0xDD4A2EB5, 0x822F484A, 0x222BA40B, 0x60000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3087) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -10575248822105090868937.919094
  s21_decimal check = {{0x7D468A76, 0x6003A43F, 0x222BA40B, 0x80060000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3088) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 10575248822105090868937.919094
  s21_decimal check = {{0x7D468A76, 0x6003A43F, 0x222BA40B, 0x60000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3089) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -10575248622445743161168.257945
  s21_decimal check = {{0x2D766399, 0x8D2F2559, 0x222BA400, 0x80060000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3090) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 10575248622445743161168.257945
  s21_decimal check = {{0x2D766399, 0x8D2F2559, 0x222BA400, 0x60000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3091) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -800870434625820.2177254820354
  s21_decimal check = {{0xDCA98A02, 0x8CE489CB, 0x19E0A51C, 0x800D0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3092) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 800870434625820.2177254820354
  s21_decimal check = {{0xDCA98A02, 0x8CE489CB, 0x19E0A51C, 0xD0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3093) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -400435217312910.10886274103770
  s21_decimal check = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3094) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 400435217312910.10886274103770
  s21_decimal check = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3095) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -200217608656455.05443137051885
  s21_decimal check = {{0xA7A7DCED, 0x603B587D, 0x40B19CC7, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3096) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 200217608656455.05443137051885
  s21_decimal check = {{0xA7A7DCED, 0x603B587D, 0x40B19CC7, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3097) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -200217608656455.05443137051881
  s21_decimal check = {{0xA7A7DCE9, 0x603B587D, 0x40B19CC7, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3098) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 200217608656455.05443137051881
  s21_decimal check = {{0xA7A7DCE9, 0x603B587D, 0x40B19CC7, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3099) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -200217608656455.05443137051889
  s21_decimal check = {{0xA7A7DCF1, 0x603B587D, 0x40B19CC7, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3100) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 200217608656455.05443137051889
  s21_decimal check = {{0xA7A7DCF1, 0x603B587D, 0x40B19CC7, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3101) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -400435217312910.10886274103774
  s21_decimal check = {{0x4F4FB9DE, 0xC076B0FB, 0x8163398E, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3102) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 400435217312910.10886274103774
  s21_decimal check = {{0x4F4FB9DE, 0xC076B0FB, 0x8163398E, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3103) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -3203481738503280.8709019283016
  s21_decimal check = {{0x72A62E48, 0x3392272F, 0x67829472, 0x800D0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3104) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 3203481738503280.8709019283016
  s21_decimal check = {{0x72A62E48, 0x3392272F, 0x67829472, 0xD0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3105) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -400435217312910.10886274103766
  s21_decimal check = {{0x4F4FB9D6, 0xC076B0FB, 0x8163398E, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3106) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 400435217312910.10886274103766
  s21_decimal check = {{0x4F4FB9D6, 0xC076B0FB, 0x8163398E, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3107) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3108) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3109) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -3172574647370199.8576965422111
  s21_decimal check = {{0x97DE8C1F, 0x868DD8E0, 0x6682EC22, 0x800D0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3110) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 3172574647370199.8576965422111
  s21_decimal check = {{0x97DE8C1F, 0x868DD8E0, 0x6682EC22, 0xD0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3111) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
  // -317257464737019.98576965422113
  s21_decimal check = {{0x97DE8C21, 0x868DD8E0, 0x6682EC22, 0x800E0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3112) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
  // 317257464737019.98576965422113
  s21_decimal check = {{0x97DE8C21, 0x868DD8E0, 0x6682EC22, 0xE0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3113) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3114) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3115) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.0000000000000025
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x100000}};
  // -1.0010880432822752721568525942
  s21_decimal check = {{0xD3D3EE76, 0xB01DAC3E, 0x2058CE63, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3116) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.0000000000000025
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x80100000}};
  // 1.0010880432822752721568525942
  s21_decimal check = {{0xD3D3EE76, 0xB01DAC3E, 0x2058CE63, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3117) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.0000000000000005
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x100000}};
  // -0.2002176086564550544313705188
  s21_decimal check = {{0xF72A62E4, 0x23392272, 0x6782947, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3118) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.0000000000000005
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80100000}};
  // 0.2002176086564550544313705188
  s21_decimal check = {{0xF72A62E4, 0x23392272, 0x6782947, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3119) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3121) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3123) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3124) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000400435217312910
  s21_decimal check = {{0x96E22C8E, 0x16C31, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3125) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3126) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000004004352173129101
  s21_decimal check = {{0xE4D5BD8D, 0xE39EF, 0x0, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3127) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3128) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3129) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3130) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3131) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // -7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  // 2825399045699384434.0452935949
  s21_decimal check = {{0x109AC90D, 0xBE2CD8E0, 0x5B4B2733, 0xA0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3132) {
  // -400435217312910.10886274103770
  s21_decimal dec_1 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // 7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  // -2825399045699384434.0452935949
  s21_decimal check = {{0x109AC90D, 0xBE2CD8E0, 0x5B4B2733, 0x800A0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3133) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3134) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3135) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3136) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3137) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3138) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3139) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3140) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3141) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3142) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3143) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
  // -1517920227744271651902592220.2
  s21_decimal check = {{0x930D09A, 0x4A3E7493, 0x310BF11C, 0x80010000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3144) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -26409387.504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
  // 1517920227744271651902592220.2
  s21_decimal check = {{0x930D09A, 0x4A3E7493, 0x310BF11C, 0x10000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3145) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
  // -1517920227390853308343951696.3
  s21_decimal check = {{0xEFFE4D23, 0x19328376, 0x310BF11C, 0x80010000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3146) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -26409387.498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
  // 1517920227390853308343951696.3
  s21_decimal check = {{0xEFFE4D23, 0x19328376, 0x310BF11C, 0x10000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3147) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
  // -1517920198732713195385438703.6
  s21_decimal check = {{0xB557935C, 0x9014D982, 0x310BF10C, 0x80010000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3148) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -26409387
  s21_decimal dec_2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
  // 1517920198732713195385438703.6
  s21_decimal check = {{0xB557935C, 0x9014D982, 0x310BF10C, 0x10000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3149) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -114953080791516531253.48487852
  s21_decimal check = {{0x90D572AC, 0xA3EBFD4F, 0x2524B22B, 0x80080000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3150) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -1.9999999999999999999999999000
  s21_decimal dec_2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 114953080791516531253.48487852
  s21_decimal check = {{0x90D572AC, 0xA3EBFD4F, 0x2524B22B, 0x80000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3151) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -57476540395758265626.742442133
  s21_decimal check = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3152) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 57476540395758265626.742442133
  s21_decimal check = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3153) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -28738270197879132813.371221066
  s21_decimal check = {{0xEA15A44A, 0x19CDF946, 0x5CDBBD6D, 0x80090000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3154) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 28738270197879132813.371221066
  s21_decimal check = {{0xEA15A44A, 0x19CDF946, 0x5CDBBD6D, 0x90000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3155) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -28738270197879132813.371221061
  s21_decimal check = {{0xEA15A445, 0x19CDF946, 0x5CDBBD6D, 0x80090000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3156) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.4999999999999999999999999999
  s21_decimal dec_2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 28738270197879132813.371221061
  s21_decimal check = {{0xEA15A445, 0x19CDF946, 0x5CDBBD6D, 0x90000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3157) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  // -28738270197879132813.371221072
  s21_decimal check = {{0xEA15A450, 0x19CDF946, 0x5CDBBD6D, 0x80090000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3158) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.5000000000000000000000000001
  s21_decimal dec_2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
  // 28738270197879132813.371221072
  s21_decimal check = {{0xEA15A450, 0x19CDF946, 0x5CDBBD6D, 0x90000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3159) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -57476540395758265626.742442139
  s21_decimal check = {{0xD42B489B, 0x339BF28D, 0xB9B77ADA, 0x80090000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3160) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -1.0000000000000000000000000001
  s21_decimal dec_2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 57476540395758265626.742442139
  s21_decimal check = {{0xD42B489B, 0x339BF28D, 0xB9B77ADA, 0x90000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3161) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -459812323166066125013.93953706
  s21_decimal check = {{0x4355D3AA, 0x8FAFF53E, 0x9492C8AE, 0x80080000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3162) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 459812323166066125013.93953706
  s21_decimal check = {{0x4355D3AA, 0x8FAFF53E, 0x9492C8AE, 0x80000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3163) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -57476540395758265626.742442127
  s21_decimal check = {{0xD42B488F, 0x339BF28D, 0xB9B77ADA, 0x80090000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3164) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.9999999999999999999999999999
  s21_decimal dec_2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 57476540395758265626.742442127
  s21_decimal check = {{0xD42B488F, 0x339BF28D, 0xB9B77ADA, 0x90000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3165) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3166) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -79228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3167) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -455376068323281495570.77766605
  s21_decimal check = {{0x1B9271CD, 0xDEBB5DB9, 0x9323D354, 0x80080000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3168) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -7.9228162514264337593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 455376068323281495570.77766605
  s21_decimal check = {{0x1B9271CD, 0xDEBB5DB9, 0x9323D354, 0x80000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3169) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
  // -45537606832328149557.077766608
  s21_decimal check = {{0x1B9271D0, 0xDEBB5DB9, 0x9323D354, 0x80090000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3170) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.7922816251426433759354395034
  s21_decimal dec_2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
  // 45537606832328149557.077766608
  s21_decimal check = {{0x1B9271D0, 0xDEBB5DB9, 0x9323D354, 0x90000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3171) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3172) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -792281625142643.37593543950335
  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3173) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.0000000000000025
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x100000}};
  // -143691.35098939566406685610533
  s21_decimal check = {{0x750AD225, 0x8CE6FCA3, 0x2E6DDEB6, 0x80170000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3174) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.0000000000000025
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x80100000}};
  // 143691.35098939566406685610533
  s21_decimal check = {{0x750AD225, 0x8CE6FCA3, 0x2E6DDEB6, 0x170000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3175) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.0000000000000005
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x100000}};
  // -28738.270197879132813371221066
  s21_decimal check = {{0xEA15A44A, 0x19CDF946, 0x5CDBBD6D, 0x80180000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3176) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.0000000000000005
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80100000}};
  // 28738.270197879132813371221066
  s21_decimal check = {{0xEA15A44A, 0x19CDF946, 0x5CDBBD6D, 0x180000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3177) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3179) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.0000000000000000000000000000
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3181) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000057476540395758265627
  s21_decimal check = {{0x578FA51B, 0x1DA5B0F7, 0x3, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3182) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.0000000000000000000000000001
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.0000000057476540395758265627
  s21_decimal check = {{0x578FA51B, 0x1DA5B0F7, 0x3, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3183) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.0000000574765403957582656267
  s21_decimal check = {{0x6B9C730B, 0x2878E9A9, 0x1F, 0x801C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3184) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -0.0000000000000000000000000010
  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000574765403957582656267
  s21_decimal check = {{0x6B9C730B, 0x2878E9A9, 0x1F, 0x1C0000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3185) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3186) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -400435217312910.10886274103770
  s21_decimal dec_2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3187) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3188) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 57476540395758265626.742442133
  s21_decimal dec_2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3189) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // -7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  // 405544156365694122530650.07150
  s21_decimal check = {{0xCE81D02E, 0xDA391347, 0x8309D38C, 0x50000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3190) {
  // -57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  // 7055.820576069728775806815669
  s21_decimal dec_2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  // -405544156365694122530650.07150
  s21_decimal check = {{0xCE81D02E, 0xDA391347, 0x8309D38C, 0x80050000}};

  test_mul(dec_1, dec_2, check);
}

START_TEST(test_mul3191) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // 26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3192) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // -26409387504754779197847983445
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3193) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // 26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3194) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // -26409387498605864508043122005
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3195) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // 6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3196) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // -6148914691236517205
  s21_decimal dec_2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3197) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // 6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3198) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // -6148914689804861440
  s21_decimal dec_2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3199) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // 1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x0}};
  // overflow
  int code_check = 1;

  test_mul_fail1(dec_1, dec_2, code_check);
}

START_TEST(test_mul3200) {
  // 57476540395758265626.742442133
  s21_decimal dec_1 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  // -1431655765
  s21_decimal dec_2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // overflow
  int code_check = 2;

  test_mul_fail1(dec_1, dec_2, code_check);
}

Suite *s21_mul_cases(void) {
  Suite *c = suite_create(YELLOW "s21_mul_cases" NOCOLOR);
  TCase *tc = tcase_create(YELLOW "s21_mul_tc" NOCOLOR);

  tcase_add_test(tc, s21_mul_1);
  tcase_add_test(tc, s21_mul_2);
  tcase_add_test(tc, s21_mul_3);
  tcase_add_test(tc, s21_mul_4);
  tcase_add_test(tc, s21_mul_5);
  tcase_add_test(tc, s21_mul_6);
  tcase_add_test(tc, s21_mul_7);
  tcase_add_test(tc, s21_mul_8);
  tcase_add_test(tc, s21_mul_9);
  tcase_add_test(tc, s21_mul_10);
  tcase_add_test(tc, s21_mul_11);
  tcase_add_test(tc, s21_mul_12);
  tcase_add_test(tc, s21_mul_13);
  tcase_add_test(tc, s21_mul_14);
  tcase_add_test(tc, s21_mul_15);
  tcase_add_test(tc, s21_mul_16);
  tcase_add_test(tc, s21_mul_17);
  tcase_add_test(tc, s21_mul_18);
  tcase_add_test(tc, s21_mul_19);
  tcase_add_test(tc, s21_mul_20);
  tcase_add_test(tc, s21_mul_21);
  tcase_add_test(tc, s21_mul_22);
  tcase_add_test(tc, s21_mul_23);
  tcase_add_test(tc, s21_mul_24);
  tcase_add_test(tc, s21_mul_25);
  tcase_add_test(tc, s21_mul_26);
  tcase_add_test(tc, s21_mul_27);
  tcase_add_test(tc, s21_mul_28);
  tcase_add_test(tc, s21_mul_29);
  tcase_add_test(tc, s21_mul_30);
  tcase_add_test(tc, s21_mul_31);
  tcase_add_test(tc, s21_mul_32);
  tcase_add_test(tc, s21_mul_33);
  tcase_add_test(tc, s21_mul_34);
  tcase_add_test(tc, s21_mul_35);
  tcase_add_test(tc, s21_mul_36);
  tcase_add_test(tc, s21_mul_37);
  tcase_add_test(tc, s21_mul_38);
  tcase_add_test(tc, s21_mul_39);
  tcase_add_test(tc, s21_mul_40);
  tcase_add_test(tc, s21_mul_41);
  tcase_add_test(tc, s21_mul_42);
  tcase_add_test(tc, s21_mul_43);
  tcase_add_test(tc, s21_mul_44);
  tcase_add_test(tc, s21_mul_45);
  tcase_add_test(tc, s21_mul_46);
  tcase_add_test(tc, s21_mul_47);
  tcase_add_test(tc, s21_mul_48);
  tcase_add_test(tc, s21_mul_49);
  tcase_add_test(tc, s21_mul_50);
  tcase_add_test(tc, s21_mul_51);
  tcase_add_test(tc, s21_mul_52);
  tcase_add_test(tc, s21_mul_53);
  tcase_add_test(tc, s21_mul_54);
  tcase_add_test(tc, s21_mul_55);
  tcase_add_test(tc, s21_mul_56);
  tcase_add_test(tc, s21_mul_57);
  tcase_add_test(tc, s21_mul_58);
  tcase_add_test(tc, s21_mul_59);
  tcase_add_test(tc, s21_mul_60);
  tcase_add_test(tc, s21_mul_61);
  tcase_add_test(tc, s21_mul_62);
  tcase_add_test(tc, s21_mul_63);
  tcase_add_test(tc, s21_mul_64);
  tcase_add_test(tc, s21_mul_65);
  tcase_add_test(tc, s21_mul_66);
  tcase_add_test(tc, s21_mul_67);
  tcase_add_test(tc, s21_mul_68);
  tcase_add_test(tc, s21_mul_69);
  tcase_add_test(tc, s21_mul_70);
  tcase_add_test(tc, s21_mul_71);
  tcase_add_test(tc, s21_mul_72);
  tcase_add_test(tc, s21_mul_73);
  tcase_add_test(tc, s21_mul_74);
  tcase_add_test(tc, s21_mul_75);
  tcase_add_test(tc, s21_mul_76);
  tcase_add_test(tc, s21_mul_77);
  tcase_add_test(tc, s21_mul_78);
  tcase_add_test(tc, s21_mul_79);
  tcase_add_test(tc, s21_mul_80);
  tcase_add_test(tc, s21_mul_81);
  tcase_add_test(tc, s21_mul_82);
  tcase_add_test(tc, s21_mul_83);
  tcase_add_test(tc, s21_mul_84);
  tcase_add_test(tc, s21_mul_85);
  tcase_add_test(tc, s21_mul_86);
  tcase_add_test(tc, s21_mul_87);
  tcase_add_test(tc, s21_mul_88);
  tcase_add_test(tc, s21_mul_89);
  tcase_add_test(tc, s21_mul_90);
  tcase_add_test(tc, s21_mul_91);
  tcase_add_test(tc, s21_mul_93);
  tcase_add_test(tc, s21_mul_94);
  tcase_add_test(tc, s21_mul_95);
  tcase_add_test(tc, s21_mul_96);
  tcase_add_test(tc, s21_mul_97);
  tcase_add_test(tc, s21_mul_98);
  tcase_add_test(tc, s21_mul_99);
  tcase_add_test(tc, s21_mul_100);
  tcase_add_test(tc, s21_mul_101);
  tcase_add_test(tc, s21_mul_102);
  tcase_add_test(tc, s21_mul_103);
  tcase_add_test(tc, s21_mul_104);
  tcase_add_test(tc, s21_mul_105);
  tcase_add_test(tc, s21_mul_106);
  tcase_add_test(tc, s21_mul_107);
  tcase_add_test(tc, s21_mul_108);
  tcase_add_test(tc, s21_mul_109);
  tcase_add_test(tc, s21_mul_111);
  tcase_add_test(tc, s21_mul_112);
  tcase_add_test(tc, s21_mul_113);
  tcase_add_test(tc, s21_mul_114);
  tcase_add_test(tc, s21_mul_115);
  tcase_add_test(tc, s21_mul_116);
  tcase_add_test(tc, s21_mul_117);
  tcase_add_test(tc, s21_mul_118);
  tcase_add_test(tc, s21_mul_119);
  tcase_add_test(tc, s21_mul_120);
  tcase_add_test(tc, s21_mul_121);
  tcase_add_test(tc, s21_mul_122);
  tcase_add_test(tc, s21_mul_123);
  tcase_add_test(tc, s21_mul_124);
  tcase_add_test(tc, s21_mul_125);
  tcase_add_test(tc, s21_mul_126);
  tcase_add_test(tc, s21_mul_127);
  tcase_add_test(tc, s21_mul_128);
  tcase_add_test(tc, s21_mul_129);
  tcase_add_test(tc, s21_mul_130);
  tcase_add_test(tc, s21_mul_131);
  tcase_add_test(tc, s21_mul_132);
  tcase_add_test(tc, s21_mul_133);
  tcase_add_test(tc, s21_mul_134);
  tcase_add_test(tc, s21_mul_135);
  tcase_add_test(tc, s21_mul_136);
  tcase_add_test(tc, s21_mul_137);
  tcase_add_test(tc, s21_mul_138);
  tcase_add_test(tc, s21_mul_139);
  tcase_add_test(tc, s21_mul_140);
  tcase_add_test(tc, s21_mul_141);
  tcase_add_test(tc, s21_mul_142);
  tcase_add_test(tc, s21_mul_143);
  tcase_add_test(tc, s21_mul_144);
  tcase_add_test(tc, s21_mul_145);
  tcase_add_test(tc, s21_mul_146);
  tcase_add_test(tc, s21_mul_147);
  tcase_add_test(tc, s21_mul_148);
  tcase_add_test(tc, s21_mul_149);
  tcase_add_test(tc, s21_mul_150);
  tcase_add_test(tc, s21_mul_151);
  tcase_add_test(tc, s21_mul_152);
  tcase_add_test(tc, s21_mul_153);
  tcase_add_test(tc, s21_mul_154);
  tcase_add_test(tc, s21_mul_155);
  tcase_add_test(tc, s21_mul_156);
  tcase_add_test(tc, s21_mul_157);
  tcase_add_test(tc, s21_mul_158);
  tcase_add_test(tc, s21_mul_159);
  tcase_add_test(tc, s21_mul_160);
  tcase_add_test(tc, s21_mul_161);
  tcase_add_test(tc, s21_mul_162);
  tcase_add_test(tc, s21_mul_163);
  tcase_add_test(tc, s21_mul_164);
  tcase_add_test(tc, s21_mul_165);
  tcase_add_test(tc, s21_mul_166);
  tcase_add_test(tc, s21_mul_167);
  tcase_add_test(tc, s21_mul_168);
  tcase_add_test(tc, s21_mul_169);
  tcase_add_test(tc, s21_mul_170);
  tcase_add_test(tc, s21_mul_171);
  tcase_add_test(tc, s21_mul_172);
  tcase_add_test(tc, s21_mul_173);
  tcase_add_test(tc, s21_mul_174);
  tcase_add_test(tc, s21_mul_175);
  tcase_add_test(tc, s21_mul_176);
  tcase_add_test(tc, s21_mul_177);
  tcase_add_test(tc, s21_mul_178);
  tcase_add_test(tc, s21_mul_179);
  tcase_add_test(tc, s21_mul_180);
  tcase_add_test(tc, s21_mul_181);
  tcase_add_test(tc, s21_mul_182);
  tcase_add_test(tc, s21_mul_183);
  tcase_add_test(tc, s21_mul_184);
  tcase_add_test(tc, s21_mul_185);
  tcase_add_test(tc, s21_mul_186);
  tcase_add_test(tc, s21_mul_187);
  tcase_add_test(tc, s21_mul_188);
  tcase_add_test(tc, s21_mul_189);
  tcase_add_test(tc, s21_mul_190);
  tcase_add_test(tc, s21_mul_191);
  tcase_add_test(tc, s21_mul_192);
  tcase_add_test(tc, s21_mul_193);
  tcase_add_test(tc, s21_mul_194);
  tcase_add_test(tc, s21_mul_195);
  tcase_add_test(tc, s21_mul_196);
  tcase_add_test(tc, s21_mul_197);
  tcase_add_test(tc, s21_mul_198);
  tcase_add_test(tc, s21_mul_199);
  tcase_add_test(tc, s21_mul_200);
  tcase_add_test(tc, s21_mul_201);
  tcase_add_test(tc, s21_mul_202);
  tcase_add_test(tc, s21_mul_203);
  tcase_add_test(tc, s21_mul_204);
  tcase_add_test(tc, s21_mul_205);
  tcase_add_test(tc, s21_mul_206);
  tcase_add_test(tc, s21_mul_207);
  tcase_add_test(tc, s21_mul_208);
  tcase_add_test(tc, s21_mul_209);
  tcase_add_test(tc, s21_mul_210);
  tcase_add_test(tc, s21_mul_211);
  tcase_add_test(tc, s21_mul_212);
  tcase_add_test(tc, s21_mul_213);
  tcase_add_test(tc, s21_mul_214);
  tcase_add_test(tc, s21_mul_215);
  tcase_add_test(tc, s21_mul_216);
  tcase_add_test(tc, s21_mul_217);
  tcase_add_test(tc, s21_mul_219);
  tcase_add_test(tc, s21_mul_220);
  tcase_add_test(tc, s21_mul_221);
  tcase_add_test(tc, s21_mul_222);
  tcase_add_test(tc, s21_mul_223);
  tcase_add_test(tc, s21_mul_224);
  tcase_add_test(tc, s21_mul_225);
  tcase_add_test(tc, s21_mul_226);
  tcase_add_test(tc, s21_mul_227);
  tcase_add_test(tc, s21_mul_228);
  tcase_add_test(tc, s21_mul_229);
  tcase_add_test(tc, s21_mul_230);
  tcase_add_test(tc, s21_mul_231);
  tcase_add_test(tc, s21_mul_232);
  tcase_add_test(tc, s21_mul_233);
  tcase_add_test(tc, s21_mul_234);
  tcase_add_test(tc, s21_mul_235);
  tcase_add_test(tc, s21_mul_236);
  tcase_add_test(tc, s21_mul_237);
  tcase_add_test(tc, s21_mul_238);
  tcase_add_test(tc, s21_mul_239);
  tcase_add_test(tc, s21_mul_240);
  tcase_add_test(tc, s21_mul_241);
  tcase_add_test(tc, s21_mul_243);
  tcase_add_test(tc, s21_mul_244);
  tcase_add_test(tc, s21_mul_245);
  tcase_add_test(tc, s21_mul_246);
  tcase_add_test(tc, s21_mul_247);
  tcase_add_test(tc, s21_mul_248);
  tcase_add_test(tc, s21_mul_249);
  tcase_add_test(tc, s21_mul_250);
  tcase_add_test(tc, s21_mul_251);
  tcase_add_test(tc, s21_mul_252);
  tcase_add_test(tc, s21_mul_253);
  tcase_add_test(tc, s21_mul_254);
  tcase_add_test(tc, s21_mul_255);
  tcase_add_test(tc, s21_mul_256);
  tcase_add_test(tc, s21_mul_257);
  tcase_add_test(tc, s21_mul_258);
  tcase_add_test(tc, s21_mul_259);
  tcase_add_test(tc, s21_mul_260);
  tcase_add_test(tc, s21_mul_261);
  tcase_add_test(tc, s21_mul_262);
  tcase_add_test(tc, s21_mul_263);
  tcase_add_test(tc, s21_mul_264);
  tcase_add_test(tc, s21_mul_265);
  tcase_add_test(tc, s21_mul_266);
  tcase_add_test(tc, s21_mul_267);
  tcase_add_test(tc, s21_mul_268);
  tcase_add_test(tc, s21_mul_269);
  tcase_add_test(tc, s21_mul_270);
  tcase_add_test(tc, s21_mul_271);
  tcase_add_test(tc, s21_mul_272);
  tcase_add_test(tc, s21_mul_273);
  tcase_add_test(tc, s21_mul_274);
  tcase_add_test(tc, s21_mul_275);
  tcase_add_test(tc, s21_mul_276);
  tcase_add_test(tc, s21_mul_277);
  tcase_add_test(tc, s21_mul_278);
  tcase_add_test(tc, s21_mul_279);
  tcase_add_test(tc, s21_mul_280);
  tcase_add_test(tc, s21_mul_281);
  tcase_add_test(tc, s21_mul_282);
  tcase_add_test(tc, s21_mul_283);
  tcase_add_test(tc, s21_mul_284);
  tcase_add_test(tc, s21_mul_285);
  tcase_add_test(tc, s21_mul_286);
  tcase_add_test(tc, s21_mul_287);
  tcase_add_test(tc, s21_mul_288);
  tcase_add_test(tc, s21_mul_289);
  tcase_add_test(tc, s21_mul_290);
  tcase_add_test(tc, s21_mul_291);
  tcase_add_test(tc, s21_mul_292);
  tcase_add_test(tc, s21_mul_293);
  tcase_add_test(tc, s21_mul_294);
  tcase_add_test(tc, s21_mul_295);
  tcase_add_test(tc, s21_mul_296);
  tcase_add_test(tc, s21_mul_297);
  tcase_add_test(tc, s21_mul_298);
  tcase_add_test(tc, s21_mul_299);
  tcase_add_test(tc, s21_mul_300);
  tcase_add_test(tc, s21_mul_301);
  tcase_add_test(tc, s21_mul_302);
  tcase_add_test(tc, s21_mul_303);
  tcase_add_test(tc, s21_mul_304);
  tcase_add_test(tc, s21_mul_305);
  tcase_add_test(tc, s21_mul_306);
  tcase_add_test(tc, s21_mul_307);
  tcase_add_test(tc, s21_mul_308);
  tcase_add_test(tc, s21_mul_309);
  tcase_add_test(tc, s21_mul_310);
  tcase_add_test(tc, s21_mul_311);
  tcase_add_test(tc, s21_mul_312);
  tcase_add_test(tc, s21_mul_313);
  tcase_add_test(tc, s21_mul_314);
  tcase_add_test(tc, s21_mul_315);
  tcase_add_test(tc, s21_mul_316);
  tcase_add_test(tc, s21_mul_317);
  tcase_add_test(tc, s21_mul_318);
  tcase_add_test(tc, s21_mul_319);
  tcase_add_test(tc, s21_mul_320);
  tcase_add_test(tc, s21_mul_321);
  tcase_add_test(tc, s21_mul_322);
  tcase_add_test(tc, s21_mul_323);
  tcase_add_test(tc, s21_mul_324);
  tcase_add_test(tc, s21_mul_325);
  tcase_add_test(tc, s21_mul_326);
  tcase_add_test(tc, s21_mul_327);
  tcase_add_test(tc, s21_mul_328);
  tcase_add_test(tc, s21_mul_329);
  tcase_add_test(tc, s21_mul_330);
  tcase_add_test(tc, s21_mul_331);
  tcase_add_test(tc, s21_mul_332);
  tcase_add_test(tc, s21_mul_333);
  tcase_add_test(tc, s21_mul_334);
  tcase_add_test(tc, s21_mul_335);
  tcase_add_test(tc, s21_mul_336);
  tcase_add_test(tc, s21_mul_337);
  tcase_add_test(tc, s21_mul_338);
  tcase_add_test(tc, s21_mul_339);
  tcase_add_test(tc, s21_mul_340);
  tcase_add_test(tc, s21_mul_341);
  tcase_add_test(tc, s21_mul_342);
  tcase_add_test(tc, s21_mul_343);
  tcase_add_test(tc, s21_mul_344);
  tcase_add_test(tc, s21_mul_345);
  tcase_add_test(tc, s21_mul_346);
  tcase_add_test(tc, s21_mul_347);
  tcase_add_test(tc, s21_mul_348);
  tcase_add_test(tc, s21_mul_349);
  tcase_add_test(tc, s21_mul_350);
  tcase_add_test(tc, s21_mul_351);
  tcase_add_test(tc, s21_mul_352);
  tcase_add_test(tc, s21_mul_353);
  tcase_add_test(tc, s21_mul_354);
  tcase_add_test(tc, s21_mul_355);
  tcase_add_test(tc, s21_mul_356);
  tcase_add_test(tc, s21_mul_357);
  tcase_add_test(tc, s21_mul_358);
  tcase_add_test(tc, s21_mul_359);
  tcase_add_test(tc, s21_mul_360);
  tcase_add_test(tc, s21_mul_361);
  tcase_add_test(tc, s21_mul_362);
  tcase_add_test(tc, s21_mul_363);
  tcase_add_test(tc, s21_mul_364);
  tcase_add_test(tc, s21_mul_365);
  tcase_add_test(tc, s21_mul_367);
  tcase_add_test(tc, s21_mul_368);
  tcase_add_test(tc, s21_mul_369);
  tcase_add_test(tc, s21_mul_370);
  tcase_add_test(tc, s21_mul_371);
  tcase_add_test(tc, s21_mul_372);
  tcase_add_test(tc, s21_mul_373);
  tcase_add_test(tc, s21_mul_374);
  tcase_add_test(tc, s21_mul_375);
  tcase_add_test(tc, s21_mul_376);
  tcase_add_test(tc, s21_mul_377);
  tcase_add_test(tc, s21_mul_378);
  tcase_add_test(tc, s21_mul_379);
  tcase_add_test(tc, s21_mul_380);
  tcase_add_test(tc, s21_mul_381);
  tcase_add_test(tc, s21_mul_382);
  tcase_add_test(tc, s21_mul_383);
  tcase_add_test(tc, s21_mul_384);
  tcase_add_test(tc, s21_mul_385);
  tcase_add_test(tc, s21_mul_386);
  tcase_add_test(tc, s21_mul_387);
  tcase_add_test(tc, s21_mul_388);
  tcase_add_test(tc, s21_mul_389);
  tcase_add_test(tc, s21_mul_390);
  tcase_add_test(tc, s21_mul_391);
  tcase_add_test(tc, s21_mul_392);
  tcase_add_test(tc, s21_mul_393);
  tcase_add_test(tc, s21_mul_394);
  tcase_add_test(tc, s21_mul_395);
  tcase_add_test(tc, s21_mul_396);
  tcase_add_test(tc, s21_mul_397);
  tcase_add_test(tc, s21_mul_398);
  tcase_add_test(tc, s21_mul_399);
  tcase_add_test(tc, s21_mul_400);
  tcase_add_test(tc, s21_mul_401);
  tcase_add_test(tc, s21_mul_402);
  tcase_add_test(tc, s21_mul_403);
  tcase_add_test(tc, s21_mul_404);
  tcase_add_test(tc, s21_mul_405);
  tcase_add_test(tc, s21_mul_406);
  tcase_add_test(tc, s21_mul_407);
  tcase_add_test(tc, s21_mul_408);
  tcase_add_test(tc, s21_mul_409);
  tcase_add_test(tc, s21_mul_410);
  tcase_add_test(tc, s21_mul_411);
  tcase_add_test(tc, s21_mul_412);
  tcase_add_test(tc, s21_mul_413);
  tcase_add_test(tc, s21_mul_414);
  tcase_add_test(tc, s21_mul_415);
  tcase_add_test(tc, s21_mul_417);
  tcase_add_test(tc, s21_mul_418);
  tcase_add_test(tc, s21_mul_419);
  tcase_add_test(tc, s21_mul_420);
  tcase_add_test(tc, s21_mul_421);
  tcase_add_test(tc, s21_mul_422);
  tcase_add_test(tc, s21_mul_423);
  tcase_add_test(tc, s21_mul_424);
  tcase_add_test(tc, s21_mul_425);
  tcase_add_test(tc, s21_mul_426);
  tcase_add_test(tc, s21_mul_427);
  tcase_add_test(tc, s21_mul_428);
  tcase_add_test(tc, s21_mul_429);
  tcase_add_test(tc, s21_mul_430);
  tcase_add_test(tc, s21_mul_431);
  tcase_add_test(tc, s21_mul_432);
  tcase_add_test(tc, s21_mul_433);
  tcase_add_test(tc, s21_mul_434);
  tcase_add_test(tc, s21_mul_435);
  tcase_add_test(tc, s21_mul_436);
  tcase_add_test(tc, s21_mul_437);
  tcase_add_test(tc, s21_mul_438);
  tcase_add_test(tc, s21_mul_439);
  tcase_add_test(tc, s21_mul_440);
  tcase_add_test(tc, s21_mul_441);
  tcase_add_test(tc, s21_mul_442);
  tcase_add_test(tc, s21_mul_443);
  tcase_add_test(tc, s21_mul_444);
  tcase_add_test(tc, s21_mul_445);
  tcase_add_test(tc, s21_mul_446);
  tcase_add_test(tc, s21_mul_447);
  tcase_add_test(tc, s21_mul_448);
  tcase_add_test(tc, s21_mul_449);
  tcase_add_test(tc, s21_mul_450);
  tcase_add_test(tc, s21_mul_451);
  tcase_add_test(tc, s21_mul_452);
  tcase_add_test(tc, s21_mul_453);
  tcase_add_test(tc, s21_mul_454);
  tcase_add_test(tc, s21_mul_455);
  tcase_add_test(tc, s21_mul_456);
  tcase_add_test(tc, s21_mul_457);
  tcase_add_test(tc, s21_mul_458);
  tcase_add_test(tc, s21_mul_459);
  tcase_add_test(tc, s21_mul_460);
  tcase_add_test(tc, s21_mul_461);
  tcase_add_test(tc, s21_mul_462);
  tcase_add_test(tc, s21_mul_463);
  tcase_add_test(tc, s21_mul_464);
  tcase_add_test(tc, s21_mul_465);
  tcase_add_test(tc, s21_mul_466);
  tcase_add_test(tc, s21_mul_467);
  tcase_add_test(tc, s21_mul_468);
  tcase_add_test(tc, s21_mul_469);
  tcase_add_test(tc, s21_mul_470);
  tcase_add_test(tc, s21_mul_471);
  tcase_add_test(tc, s21_mul_472);
  tcase_add_test(tc, s21_mul_473);
  tcase_add_test(tc, s21_mul_474);
  tcase_add_test(tc, s21_mul_475);
  tcase_add_test(tc, s21_mul_476);
  tcase_add_test(tc, s21_mul_477);
  tcase_add_test(tc, s21_mul_478);
  tcase_add_test(tc, s21_mul_479);
  tcase_add_test(tc, s21_mul_480);
  tcase_add_test(tc, s21_mul_481);
  tcase_add_test(tc, s21_mul_482);
  tcase_add_test(tc, s21_mul_483);
  tcase_add_test(tc, s21_mul_484);
  tcase_add_test(tc, s21_mul_485);
  tcase_add_test(tc, s21_mul_486);
  tcase_add_test(tc, s21_mul_487);
  tcase_add_test(tc, s21_mul_488);
  tcase_add_test(tc, s21_mul_489);
  tcase_add_test(tc, s21_mul_490);
  tcase_add_test(tc, s21_mul_491);
  tcase_add_test(tc, s21_mul_492);
  tcase_add_test(tc, s21_mul_493);
  tcase_add_test(tc, s21_mul_494);
  tcase_add_test(tc, s21_mul_495);
  tcase_add_test(tc, s21_mul_496);
  tcase_add_test(tc, s21_mul_497);
  tcase_add_test(tc, s21_mul_498);
  tcase_add_test(tc, s21_mul_499);
  tcase_add_test(tc, s21_mul_500);
  tcase_add_test(tc, fail_s21_mul_1);
  tcase_add_test(tc, fail_s21_mul_2);
  tcase_add_test(tc, fail_s21_mul_3);
  tcase_add_test(tc, fail_s21_mul_4);
  tcase_add_test(tc, fail_s21_mul_5);
  tcase_add_test(tc, fail_s21_mul_6);
  tcase_add_test(tc, fail_s21_mul_7);
  tcase_add_test(tc, fail_s21_mul_8);
  tcase_add_test(tc, fail_s21_mul_9);
  tcase_add_test(tc, fail_s21_mul_10);
  tcase_add_test(tc, fail_s21_mul_11);
  tcase_add_test(tc, fail_s21_mul_12);
  tcase_add_test(tc, fail_s21_mul_13);
  tcase_add_test(tc, fail_s21_mul_14);
  tcase_add_test(tc, fail_s21_mul_15);
  tcase_add_test(tc, fail_s21_mul_16);
  tcase_add_test(tc, fail_s21_mul_17);
  tcase_add_test(tc, fail_s21_mul_18);
  tcase_add_test(tc, fail_s21_mul_19);
  tcase_add_test(tc, fail_s21_mul_20);
  tcase_add_test(tc, fail_s21_mul_21);
  tcase_add_test(tc, fail_s21_mul_22);
  tcase_add_test(tc, fail_s21_mul_23);
  tcase_add_test(tc, fail_s21_mul_24);
  tcase_add_test(tc, fail_s21_mul_25);
  tcase_add_test(tc, fail_s21_mul_26);
  tcase_add_test(tc, fail_s21_mul_27);
  tcase_add_test(tc, fail_s21_mul_28);
  tcase_add_test(tc, fail_s21_mul_29);
  tcase_add_test(tc, fail_s21_mul_30);
  tcase_add_test(tc, fail_s21_mul_31);
  tcase_add_test(tc, fail_s21_mul_32);
  tcase_add_test(tc, fail_s21_mul_33);
  tcase_add_test(tc, fail_s21_mul_34);
  tcase_add_test(tc, fail_s21_mul_35);
  tcase_add_test(tc, fail_s21_mul_36);
  tcase_add_test(tc, fail_s21_mul_37);
  tcase_add_test(tc, fail_s21_mul_38);
  tcase_add_test(tc, fail_s21_mul_39);
  tcase_add_test(tc, fail_s21_mul_40);
  tcase_add_test(tc, fail_s21_mul_41);
  tcase_add_test(tc, fail_s21_mul_42);
  tcase_add_test(tc, fail_s21_mul_43);
  tcase_add_test(tc, fail_s21_mul_44);
  tcase_add_test(tc, fail_s21_mul_45);
  tcase_add_test(tc, fail_s21_mul_46);
  tcase_add_test(tc, fail_s21_mul_47);
  tcase_add_test(tc, fail_s21_mul_48);
  tcase_add_test(tc, fail_s21_mul_49);
  tcase_add_test(tc, fail_s21_mul_50);
  tcase_add_test(tc, fail_s21_mul_51);
  tcase_add_test(tc, fail_s21_mul_52);
  tcase_add_test(tc, fail_s21_mul_53);
  tcase_add_test(tc, fail_s21_mul_54);
  tcase_add_test(tc, fail_s21_mul_55);
  tcase_add_test(tc, fail_s21_mul_56);
  tcase_add_test(tc, fail_s21_mul_57);
  tcase_add_test(tc, fail_s21_mul_58);
  tcase_add_test(tc, fail_s21_mul_59);
  tcase_add_test(tc, fail_s21_mul_60);
  tcase_add_test(tc, fail_s21_mul_61);
  tcase_add_test(tc, fail_s21_mul_62);
  tcase_add_test(tc, fail_s21_mul_63);
  tcase_add_test(tc, fail_s21_mul_64);
  tcase_add_test(tc, fail_s21_mul_65);
  tcase_add_test(tc, fail_s21_mul_66);
  tcase_add_test(tc, fail_s21_mul_67);
  tcase_add_test(tc, fail_s21_mul_68);
  tcase_add_test(tc, fail_s21_mul_69);
  tcase_add_test(tc, fail_s21_mul_70);
  tcase_add_test(tc, fail_s21_mul_71);
  tcase_add_test(tc, fail_s21_mul_72);
  tcase_add_test(tc, fail_s21_mul_73);
  tcase_add_test(tc, fail_s21_mul_74);
  tcase_add_test(tc, fail_s21_mul_75);
  tcase_add_test(tc, fail_s21_mul_76);
  tcase_add_test(tc, fail_s21_mul_77);
  tcase_add_test(tc, fail_s21_mul_78);
  tcase_add_test(tc, fail_s21_mul_79);
  tcase_add_test(tc, fail_s21_mul_80);
  tcase_add_test(tc, fail_s21_mul_81);
  tcase_add_test(tc, fail_s21_mul_82);
  tcase_add_test(tc, fail_s21_mul_83);
  tcase_add_test(tc, fail_s21_mul_84);
  tcase_add_test(tc, fail_s21_mul_85);
  tcase_add_test(tc, fail_s21_mul_86);
  tcase_add_test(tc, fail_s21_mul_87);
  tcase_add_test(tc, fail_s21_mul_88);
  tcase_add_test(tc, fail_s21_mul_89);
  tcase_add_test(tc, fail_s21_mul_90);
  tcase_add_test(tc, fail_s21_mul_91);
  tcase_add_test(tc, fail_s21_mul_92);
  tcase_add_test(tc, fail_s21_mul_93);
  tcase_add_test(tc, fail_s21_mul_94);
  tcase_add_test(tc, fail_s21_mul_95);
  tcase_add_test(tc, fail_s21_mul_96);
  tcase_add_test(tc, fail_s21_mul_97);
  tcase_add_test(tc, fail_s21_mul_98);
  tcase_add_test(tc, fail_s21_mul_99);
  tcase_add_test(tc, fail_s21_mul_100);
  tcase_add_test(tc, fail_s21_mul_101);
  tcase_add_test(tc, fail_s21_mul_102);
  tcase_add_test(tc, fail_s21_mul_103);
  tcase_add_test(tc, fail_s21_mul_104);
  tcase_add_test(tc, fail_s21_mul_105);
  tcase_add_test(tc, fail_s21_mul_106);
  tcase_add_test(tc, fail_s21_mul_107);
  tcase_add_test(tc, fail_s21_mul_108);
  tcase_add_test(tc, fail_s21_mul_109);
  tcase_add_test(tc, fail_s21_mul_110);
  tcase_add_test(tc, fail_s21_mul_111);
  tcase_add_test(tc, fail_s21_mul_112);
  tcase_add_test(tc, fail_s21_mul_113);
  tcase_add_test(tc, fail_s21_mul_114);
  tcase_add_test(tc, fail_s21_mul_115);
  tcase_add_test(tc, fail_s21_mul_116);
  tcase_add_test(tc, fail_s21_mul_117);
  tcase_add_test(tc, fail_s21_mul_118);
  tcase_add_test(tc, fail_s21_mul_119);
  tcase_add_test(tc, fail_s21_mul_120);
  tcase_add_test(tc, fail_s21_mul_121);
  tcase_add_test(tc, fail_s21_mul_122);
  tcase_add_test(tc, fail_s21_mul_123);
  tcase_add_test(tc, fail_s21_mul_124);
  tcase_add_test(tc, fail_s21_mul_125);
  tcase_add_test(tc, fail_s21_mul_126);
  tcase_add_test(tc, fail_s21_mul_127);
  tcase_add_test(tc, fail_s21_mul_128);
  tcase_add_test(tc, fail_s21_mul_129);
  tcase_add_test(tc, fail_s21_mul_130);
  tcase_add_test(tc, fail_s21_mul_131);
  tcase_add_test(tc, fail_s21_mul_132);
  tcase_add_test(tc, fail_s21_mul_133);
  tcase_add_test(tc, fail_s21_mul_134);
  tcase_add_test(tc, fail_s21_mul_135);
  tcase_add_test(tc, fail_s21_mul_136);
  tcase_add_test(tc, fail_s21_mul_137);
  tcase_add_test(tc, fail_s21_mul_138);
  tcase_add_test(tc, fail_s21_mul_139);
  tcase_add_test(tc, fail_s21_mul_140);

  suite_add_tcase(c, tc);
  return c;
}

Suite *test_s21_mul_suite_2(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("mul_2");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_mul2801);
  tcase_add_test(tc_core, test_mul2802);
  tcase_add_test(tc_core, test_mul2803);
  tcase_add_test(tc_core, test_mul2804);
  tcase_add_test(tc_core, test_mul2811);
  tcase_add_test(tc_core, test_mul2812);
  tcase_add_test(tc_core, test_mul2813);
  tcase_add_test(tc_core, test_mul2814);
  tcase_add_test(tc_core, test_mul2815);
  tcase_add_test(tc_core, test_mul2816);
  tcase_add_test(tc_core, test_mul2817);
  tcase_add_test(tc_core, test_mul2818);
  tcase_add_test(tc_core, test_mul2819);
  tcase_add_test(tc_core, test_mul2820);
  tcase_add_test(tc_core, test_mul2821);
  tcase_add_test(tc_core, test_mul2822);
  tcase_add_test(tc_core, test_mul2823);
  tcase_add_test(tc_core, test_mul2824);
  tcase_add_test(tc_core, test_mul2829);
  tcase_add_test(tc_core, test_mul2830);
  tcase_add_test(tc_core, test_mul2832);
  tcase_add_test(tc_core, test_mul2837);
  tcase_add_test(tc_core, test_mul2838);
  tcase_add_test(tc_core, test_mul2839);
  tcase_add_test(tc_core, test_mul2840);
  tcase_add_test(tc_core, test_mul2841);
  tcase_add_test(tc_core, test_mul2842);
  tcase_add_test(tc_core, test_mul2843);
  tcase_add_test(tc_core, test_mul2844);
  tcase_add_test(tc_core, test_mul2845);
  tcase_add_test(tc_core, test_mul2846);
  tcase_add_test(tc_core, test_mul2847);
  tcase_add_test(tc_core, test_mul2848);
  tcase_add_test(tc_core, test_mul2849);
  tcase_add_test(tc_core, test_mul2850);
  tcase_add_test(tc_core, test_mul2851);
  tcase_add_test(tc_core, test_mul2852);
  tcase_add_test(tc_core, test_mul2853);
  tcase_add_test(tc_core, test_mul2854);
  tcase_add_test(tc_core, test_mul2857);
  tcase_add_test(tc_core, test_mul2858);
  tcase_add_test(tc_core, test_mul2859);
  tcase_add_test(tc_core, test_mul2860);
  tcase_add_test(tc_core, test_mul2861);
  tcase_add_test(tc_core, test_mul2862);
  tcase_add_test(tc_core, test_mul2869);
  tcase_add_test(tc_core, test_mul2870);
  tcase_add_test(tc_core, test_mul2871);
  tcase_add_test(tc_core, test_mul2872);
  tcase_add_test(tc_core, test_mul2873);
  tcase_add_test(tc_core, test_mul2874);
  tcase_add_test(tc_core, test_mul2875);
  tcase_add_test(tc_core, test_mul2876);
  tcase_add_test(tc_core, test_mul2877);
  tcase_add_test(tc_core, test_mul2878);
  tcase_add_test(tc_core, test_mul2879);
  tcase_add_test(tc_core, test_mul2880);
  tcase_add_test(tc_core, test_mul2881);
  tcase_add_test(tc_core, test_mul2882);
  tcase_add_test(tc_core, test_mul2887);
  tcase_add_test(tc_core, test_mul2888);
  tcase_add_test(tc_core, test_mul2889);
  tcase_add_test(tc_core, test_mul2895);
  tcase_add_test(tc_core, test_mul2896);
  tcase_add_test(tc_core, test_mul2897);
  tcase_add_test(tc_core, test_mul2898);
  tcase_add_test(tc_core, test_mul2899);
  tcase_add_test(tc_core, test_mul2900);
  tcase_add_test(tc_core, test_mul2901);
  tcase_add_test(tc_core, test_mul2902);
  tcase_add_test(tc_core, test_mul2903);
  tcase_add_test(tc_core, test_mul2904);
  tcase_add_test(tc_core, test_mul2905);
  tcase_add_test(tc_core, test_mul2906);
  tcase_add_test(tc_core, test_mul2907);
  tcase_add_test(tc_core, test_mul2908);
  tcase_add_test(tc_core, test_mul2909);
  tcase_add_test(tc_core, test_mul2910);
  tcase_add_test(tc_core, test_mul2911);
  tcase_add_test(tc_core, test_mul2912);
  tcase_add_test(tc_core, test_mul2913);
  tcase_add_test(tc_core, test_mul2914);
  tcase_add_test(tc_core, test_mul2915);
  tcase_add_test(tc_core, test_mul2916);
  tcase_add_test(tc_core, test_mul2917);
  tcase_add_test(tc_core, test_mul2918);
  tcase_add_test(tc_core, test_mul2919);
  tcase_add_test(tc_core, test_mul2920);
  tcase_add_test(tc_core, test_mul2921);
  tcase_add_test(tc_core, test_mul2922);
  tcase_add_test(tc_core, test_mul2923);
  tcase_add_test(tc_core, test_mul2924);
  tcase_add_test(tc_core, test_mul2925);
  tcase_add_test(tc_core, test_mul2926);
  tcase_add_test(tc_core, test_mul2927);
  tcase_add_test(tc_core, test_mul2928);
  tcase_add_test(tc_core, test_mul2929);
  tcase_add_test(tc_core, test_mul2930);
  tcase_add_test(tc_core, test_mul2931);
  tcase_add_test(tc_core, test_mul2932);
  tcase_add_test(tc_core, test_mul2933);
  tcase_add_test(tc_core, test_mul2934);
  tcase_add_test(tc_core, test_mul2935);
  tcase_add_test(tc_core, test_mul2936);
  tcase_add_test(tc_core, test_mul2937);
  tcase_add_test(tc_core, test_mul2938);
  tcase_add_test(tc_core, test_mul2939);
  tcase_add_test(tc_core, test_mul2940);
  tcase_add_test(tc_core, test_mul2945);
  tcase_add_test(tc_core, test_mul2946);
  tcase_add_test(tc_core, test_mul2948);
  tcase_add_test(tc_core, test_mul2953);
  tcase_add_test(tc_core, test_mul2954);
  tcase_add_test(tc_core, test_mul2955);
  tcase_add_test(tc_core, test_mul2956);
  tcase_add_test(tc_core, test_mul2957);
  tcase_add_test(tc_core, test_mul2958);
  tcase_add_test(tc_core, test_mul2959);
  tcase_add_test(tc_core, test_mul2960);
  tcase_add_test(tc_core, test_mul2961);
  tcase_add_test(tc_core, test_mul2962);
  tcase_add_test(tc_core, test_mul2963);
  tcase_add_test(tc_core, test_mul2964);
  tcase_add_test(tc_core, test_mul2965);
  tcase_add_test(tc_core, test_mul2966);
  tcase_add_test(tc_core, test_mul2967);
  tcase_add_test(tc_core, test_mul2968);
  tcase_add_test(tc_core, test_mul2969);
  tcase_add_test(tc_core, test_mul2970);
  tcase_add_test(tc_core, test_mul2971);
  tcase_add_test(tc_core, test_mul2972);
  tcase_add_test(tc_core, test_mul2973);
  tcase_add_test(tc_core, test_mul2974);
  tcase_add_test(tc_core, test_mul2975);
  tcase_add_test(tc_core, test_mul2976);
  tcase_add_test(tc_core, test_mul2977);
  tcase_add_test(tc_core, test_mul2978);
  tcase_add_test(tc_core, test_mul2979);
  tcase_add_test(tc_core, test_mul2980);
  tcase_add_test(tc_core, test_mul2981);
  tcase_add_test(tc_core, test_mul2982);
  tcase_add_test(tc_core, test_mul2983);
  tcase_add_test(tc_core, test_mul2984);
  tcase_add_test(tc_core, test_mul2985);
  tcase_add_test(tc_core, test_mul2986);
  tcase_add_test(tc_core, test_mul2987);
  tcase_add_test(tc_core, test_mul2988);
  tcase_add_test(tc_core, test_mul2989);
  tcase_add_test(tc_core, test_mul2990);
  tcase_add_test(tc_core, test_mul2991);
  tcase_add_test(tc_core, test_mul2992);
  tcase_add_test(tc_core, test_mul2993);
  tcase_add_test(tc_core, test_mul2994);
  tcase_add_test(tc_core, test_mul2995);
  tcase_add_test(tc_core, test_mul2996);
  tcase_add_test(tc_core, test_mul2997);
  tcase_add_test(tc_core, test_mul2998);
  tcase_add_test(tc_core, test_mul3011);
  tcase_add_test(tc_core, test_mul3012);
  tcase_add_test(tc_core, test_mul3013);
  tcase_add_test(tc_core, test_mul3014);
  tcase_add_test(tc_core, test_mul3015);
  tcase_add_test(tc_core, test_mul3016);
  tcase_add_test(tc_core, test_mul3017);
  tcase_add_test(tc_core, test_mul3018);
  tcase_add_test(tc_core, test_mul3019);
  tcase_add_test(tc_core, test_mul3020);
  tcase_add_test(tc_core, test_mul3021);
  tcase_add_test(tc_core, test_mul3022);
  tcase_add_test(tc_core, test_mul3023);
  tcase_add_test(tc_core, test_mul3024);
  tcase_add_test(tc_core, test_mul3027);
  tcase_add_test(tc_core, test_mul3028);
  tcase_add_test(tc_core, test_mul3029);
  tcase_add_test(tc_core, test_mul3030);
  tcase_add_test(tc_core, test_mul3031);
  tcase_add_test(tc_core, test_mul3032);
  tcase_add_test(tc_core, test_mul3033);
  tcase_add_test(tc_core, test_mul3034);
  tcase_add_test(tc_core, test_mul3035);
  tcase_add_test(tc_core, test_mul3036);
  tcase_add_test(tc_core, test_mul3037);
  tcase_add_test(tc_core, test_mul3038);
  tcase_add_test(tc_core, test_mul3039);
  tcase_add_test(tc_core, test_mul3040);
  tcase_add_test(tc_core, test_mul3041);
  tcase_add_test(tc_core, test_mul3042);
  tcase_add_test(tc_core, test_mul3043);
  tcase_add_test(tc_core, test_mul3044);
  tcase_add_test(tc_core, test_mul3045);
  tcase_add_test(tc_core, test_mul3046);
  tcase_add_test(tc_core, test_mul3047);
  tcase_add_test(tc_core, test_mul3048);
  tcase_add_test(tc_core, test_mul3049);
  tcase_add_test(tc_core, test_mul3050);
  tcase_add_test(tc_core, test_mul3051);
  tcase_add_test(tc_core, test_mul3052);
  tcase_add_test(tc_core, test_mul3053);
  tcase_add_test(tc_core, test_mul3054);
  tcase_add_test(tc_core, test_mul3055);
  tcase_add_test(tc_core, test_mul3056);
  tcase_add_test(tc_core, test_mul3057);
  tcase_add_test(tc_core, test_mul3058);
  tcase_add_test(tc_core, test_mul3059);
  tcase_add_test(tc_core, test_mul3060);
  tcase_add_test(tc_core, test_mul3062);
  tcase_add_test(tc_core, test_mul3064);
  tcase_add_test(tc_core, test_mul3065);
  tcase_add_test(tc_core, test_mul3066);
  tcase_add_test(tc_core, test_mul3067);
  tcase_add_test(tc_core, test_mul3068);
  tcase_add_test(tc_core, test_mul3069);
  tcase_add_test(tc_core, test_mul3070);
  tcase_add_test(tc_core, test_mul3071);
  tcase_add_test(tc_core, test_mul3072);
  tcase_add_test(tc_core, test_mul3073);
  tcase_add_test(tc_core, test_mul3074);
  tcase_add_test(tc_core, test_mul3075);
  tcase_add_test(tc_core, test_mul3076);
  tcase_add_test(tc_core, test_mul3077);
  tcase_add_test(tc_core, test_mul3078);
  tcase_add_test(tc_core, test_mul3079);
  tcase_add_test(tc_core, test_mul3080);
  tcase_add_test(tc_core, test_mul3081);
  tcase_add_test(tc_core, test_mul3082);
  tcase_add_test(tc_core, test_mul3085);
  tcase_add_test(tc_core, test_mul3086);
  tcase_add_test(tc_core, test_mul3087);
  tcase_add_test(tc_core, test_mul3088);
  tcase_add_test(tc_core, test_mul3089);
  tcase_add_test(tc_core, test_mul3090);
  tcase_add_test(tc_core, test_mul3091);
  tcase_add_test(tc_core, test_mul3092);
  tcase_add_test(tc_core, test_mul3093);
  tcase_add_test(tc_core, test_mul3094);
  tcase_add_test(tc_core, test_mul3095);
  tcase_add_test(tc_core, test_mul3096);
  tcase_add_test(tc_core, test_mul3097);
  tcase_add_test(tc_core, test_mul3098);
  tcase_add_test(tc_core, test_mul3099);
  tcase_add_test(tc_core, test_mul3100);
  tcase_add_test(tc_core, test_mul3101);
  tcase_add_test(tc_core, test_mul3102);
  tcase_add_test(tc_core, test_mul3103);
  tcase_add_test(tc_core, test_mul3104);
  tcase_add_test(tc_core, test_mul3105);
  tcase_add_test(tc_core, test_mul3106);
  tcase_add_test(tc_core, test_mul3107);
  tcase_add_test(tc_core, test_mul3108);
  tcase_add_test(tc_core, test_mul3109);
  tcase_add_test(tc_core, test_mul3110);
  tcase_add_test(tc_core, test_mul3111);
  tcase_add_test(tc_core, test_mul3112);
  tcase_add_test(tc_core, test_mul3113);
  tcase_add_test(tc_core, test_mul3114);
  tcase_add_test(tc_core, test_mul3115);
  tcase_add_test(tc_core, test_mul3116);
  tcase_add_test(tc_core, test_mul3117);
  tcase_add_test(tc_core, test_mul3118);
  tcase_add_test(tc_core, test_mul3119);
  tcase_add_test(tc_core, test_mul3121);
  tcase_add_test(tc_core, test_mul3123);
  tcase_add_test(tc_core, test_mul3124);
  tcase_add_test(tc_core, test_mul3125);
  tcase_add_test(tc_core, test_mul3126);
  tcase_add_test(tc_core, test_mul3127);
  tcase_add_test(tc_core, test_mul3128);
  tcase_add_test(tc_core, test_mul3129);
  tcase_add_test(tc_core, test_mul3130);
  tcase_add_test(tc_core, test_mul3131);
  tcase_add_test(tc_core, test_mul3132);
  tcase_add_test(tc_core, test_mul3133);
  tcase_add_test(tc_core, test_mul3134);
  tcase_add_test(tc_core, test_mul3135);
  tcase_add_test(tc_core, test_mul3136);
  tcase_add_test(tc_core, test_mul3137);
  tcase_add_test(tc_core, test_mul3138);
  tcase_add_test(tc_core, test_mul3139);
  tcase_add_test(tc_core, test_mul3140);
  tcase_add_test(tc_core, test_mul3141);
  tcase_add_test(tc_core, test_mul3142);
  tcase_add_test(tc_core, test_mul3143);
  tcase_add_test(tc_core, test_mul3144);
  tcase_add_test(tc_core, test_mul3145);
  tcase_add_test(tc_core, test_mul3146);
  tcase_add_test(tc_core, test_mul3147);
  tcase_add_test(tc_core, test_mul3148);
  tcase_add_test(tc_core, test_mul3149);
  tcase_add_test(tc_core, test_mul3150);
  tcase_add_test(tc_core, test_mul3151);
  tcase_add_test(tc_core, test_mul3152);
  tcase_add_test(tc_core, test_mul3153);
  tcase_add_test(tc_core, test_mul3154);
  tcase_add_test(tc_core, test_mul3155);
  tcase_add_test(tc_core, test_mul3156);
  tcase_add_test(tc_core, test_mul3157);
  tcase_add_test(tc_core, test_mul3158);
  tcase_add_test(tc_core, test_mul3159);
  tcase_add_test(tc_core, test_mul3160);
  tcase_add_test(tc_core, test_mul3161);
  tcase_add_test(tc_core, test_mul3162);
  tcase_add_test(tc_core, test_mul3163);
  tcase_add_test(tc_core, test_mul3164);
  tcase_add_test(tc_core, test_mul3165);
  tcase_add_test(tc_core, test_mul3166);
  tcase_add_test(tc_core, test_mul3167);
  tcase_add_test(tc_core, test_mul3168);
  tcase_add_test(tc_core, test_mul3169);
  tcase_add_test(tc_core, test_mul3170);
  tcase_add_test(tc_core, test_mul3171);
  tcase_add_test(tc_core, test_mul3172);
  tcase_add_test(tc_core, test_mul3173);
  tcase_add_test(tc_core, test_mul3174);
  tcase_add_test(tc_core, test_mul3175);
  tcase_add_test(tc_core, test_mul3176);
  tcase_add_test(tc_core, test_mul3177);
  tcase_add_test(tc_core, test_mul3179);
  tcase_add_test(tc_core, test_mul3181);
  tcase_add_test(tc_core, test_mul3182);
  tcase_add_test(tc_core, test_mul3183);
  tcase_add_test(tc_core, test_mul3184);
  tcase_add_test(tc_core, test_mul3185);
  tcase_add_test(tc_core, test_mul3186);
  tcase_add_test(tc_core, test_mul3187);
  tcase_add_test(tc_core, test_mul3188);
  tcase_add_test(tc_core, test_mul3189);
  tcase_add_test(tc_core, test_mul3190);
  tcase_add_test(tc_core, test_mul3191);
  tcase_add_test(tc_core, test_mul3192);
  tcase_add_test(tc_core, test_mul3193);
  tcase_add_test(tc_core, test_mul3194);
  tcase_add_test(tc_core, test_mul3195);
  tcase_add_test(tc_core, test_mul3196);
  tcase_add_test(tc_core, test_mul3197);
  tcase_add_test(tc_core, test_mul3198);
  tcase_add_test(tc_core, test_mul3199);
  tcase_add_test(tc_core, test_mul3200);

  suite_add_tcase(s, tc_core);
  return s;
}
