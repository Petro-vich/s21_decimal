
#include "test.h"

START_TEST(test_from_decimal_to_int_1) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_2) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_3) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_4) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_5) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  int check = 7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_6) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  int check = -7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_7) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  int check = 792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_8) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_9) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_10) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_11) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_12) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_13) {
  // 792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  int check = 792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_14) {
  // -792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  int check = -792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_15) {
  // 79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  int check = 79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_16) {
  // -79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  int check = -79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_17) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_18) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_19) {
  // 792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_20) {
  // -792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_21) {
  // 79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_22) {
  // -79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_23) {
  // 7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  int check = 7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_24) {
  // -7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  int check = -7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_25) {
  // 792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  int check = 792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_26) {
  // -792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_27) {
  // 79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_28) {
  // -79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_29) {
  // 7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_30) {
  // -7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_31) {
  // 792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  int check = 792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_32) {
  // -792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  int check = -792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_33) {
  // 79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  int check = 79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_34) {
  // -79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  int check = -79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_35) {
  // 7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_36) {
  // -7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_37) {
  // 528187750.09509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x140000}};
  int check = 528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_38) {
  // -528187750.09509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80140000}};
  int check = -528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_39) {
  // 5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_40) {
  // -5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_41) {
  // 528187750.09509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x140000}};
  int check = 528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_42) {
  // -528187750.09509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80140000}};
  int check = -528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_43) {
  // 5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_44) {
  // -5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_45) {
  // 528187749.97211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x140000}};
  int check = 528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_46) {
  // -528187749.97211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80140000}};
  int check = -528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_47) {
  // 5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_48) {
  // -5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_49) {
  // 528187749.97211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x140000}};
  int check = 528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_50) {
  // -528187749.97211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80140000}};
  int check = -528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_51) {
  // 5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_52) {
  // -5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_53) {
  // 122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
  int check = 122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_54) {
  // -122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
  int check = -122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_55) {
  // 1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_56) {
  // -1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_57) {
  // 122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};
  int check = 122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_58) {
  // -122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};
  int check = -122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_59) {
  // 1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_60) {
  // -1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_61) {
  // 286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};
  int check = 286331153;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_62) {
  // -286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};
  int check = -286331153;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_63) {
  // 286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};
  int check = 286331;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_64) {
  // -286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};
  int check = -286331;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_65) {
  // 2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_66) {
  // -2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_67) {
  // 264093875.04754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x140000}};
  int check = 264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_68) {
  // -264093875.04754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80140000}};
  int check = -264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_69) {
  // 2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_70) {
  // -2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_71) {
  // 264093875.04754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x140000}};
  int check = 264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_72) {
  // -264093875.04754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80140000}};
  int check = -264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_73) {
  // 2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_74) {
  // -2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_75) {
  // 264093874.98605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x140000}};
  int check = 264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_76) {
  // -264093874.98605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80140000}};
  int check = -264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_77) {
  // 2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_78) {
  // -2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_79) {
  // 264093874.98605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x140000}};
  int check = 264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_80) {
  // -264093874.98605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80140000}};
  int check = -264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_81) {
  // 2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_82) {
  // -2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_83) {
  // 6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0xC0000}};
  int check = 6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_84) {
  // -6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};
  int check = -6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_85) {
  // 6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x120000}};
  int check = 6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_86) {
  // -6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80120000}};
  int check = -6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_87) {
  // 6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0xC0000}};
  int check = 6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_88) {
  // -6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x800C0000}};
  int check = -6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_89) {
  // 6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x120000}};
  int check = 6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_90) {
  // -6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80120000}};
  int check = -6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_91) {
  // 1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1431655765;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_92) {
  // -1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = -1431655765;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_93) {
  // 143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x10000}};
  int check = 143165576;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_94) {
  // -143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80010000}};
  int check = -143165576;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_95) {
  // 143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x40000}};
  int check = 143165;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_96) {
  // -143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80040000}};
  int check = -143165;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_97) {
  // 1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x90000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_98) {
  // -1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80090000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_99) {
  // 184467440.78004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0xB0000}};
  int check = 184467440;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_100) {
  // -184467440.78004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x800B0000}};
  int check = -184467440;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_101) {
  // 1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_102) {
  // -1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_103) {
  // 18446744.078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0xC0000}};
  int check = 18446744;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_104) {
  // -18446744.078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x800C0000}};
  int check = -18446744;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_105) {
  // 1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_106) {
  // -1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_107) {
  // 1844674.4073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0xD0000}};
  int check = 1844674;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_108) {
  // -1844674.4073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x800D0000}};
  int check = -1844674;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_109) {
  // 1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_110) {
  // -1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_111) {
  // 184467.44073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0xE0000}};
  int check = 184467;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_112) {
  // -184467.44073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x800E0000}};
  int check = -184467;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_113) {
  // 1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_114) {
  // -1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_115) {
  // 429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x10000}};
  int check = 429496729;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_116) {
  // -429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80010000}};
  int check = -429496729;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_117) {
  // 42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x20000}};
  int check = 42949672;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_118) {
  // -42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80020000}};
  int check = -42949672;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_119) {
  // 429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x40000}};
  int check = 429496;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_120) {
  // -429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80040000}};
  int check = -429496;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_121) {
  // 4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x90000}};
  int check = 4;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_122) {
  // -4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80090000}};
  int check = -4;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_123) {
  // 42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000}};
  int check = 42;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_124) {
  // -42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80080000}};
  int check = -42;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_125) {
  // 429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x10000}};
  int check = 429496729;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_126) {
  // -429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80010000}};
  int check = -429496729;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_127) {
  // 42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x20000}};
  int check = 42949672;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_128) {
  // -42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80020000}};
  int check = -42949672;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_129) {
  // 4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x30000}};
  int check = 4294967;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_130) {
  // -4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80030000}};
  int check = -4294967;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_131) {
  // 4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x90000}};
  int check = 4;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_132) {
  // -4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80090000}};
  int check = -4;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_133) {
  // 42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000}};
  int check = 42;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_134) {
  // -42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80080000}};
  int check = -42;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_135) {
  // 1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x0}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_136) {
  // -1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_137) {
  // 0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x10000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_138) {
  // -0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80010000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_139) {
  // 0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xD0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_140) {
  // -0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800D0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_141) {
  // 0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xE0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_142) {
  // -0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800E0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_143) {
  // 0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1B0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_144) {
  // -0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801B0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_145) {
  // 0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_146) {
  // -0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_147) {
  // 396140812.66355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x140000}};
  int check = 396140812;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_148) {
  // -396140812.66355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80140000}};
  int check = -396140812;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_149) {
  // 3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x1C0000}};
  int check = 3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_150) {
  // -3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x801C0000}};
  int check = -3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_151) {
  // 39614081.266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x150000}};
  int check = 39614081;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_152) {
  // -39614081.266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80150000}};
  int check = -39614081;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_153) {
  // 3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x1C0000}};
  int check = 3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_154) {
  // -3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x801C0000}};
  int check = -3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_155) {
  // 3961408.1257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x160000}};
  int check = 3961408;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_156) {
  // -3961408.1257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80160000}};
  int check = -3961408;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_157) {
  // 3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x1C0000}};
  int check = 3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_158) {
  // -3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x801C0000}};
  int check = -3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_159) {
  // 396140.81257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x170000}};
  int check = 396140;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_160) {
  // -396140.81257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80170000}};
  int check = -396140;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_161) {
  // 3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  int check = 3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_162) {
  // -3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  int check = -3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_163) {
  // 922337203.9002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0xA0000}};
  int check = 922337203;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_164) {
  // -922337203.9002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x800A0000}};
  int check = -922337203;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_165) {
  // 9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x120000}};
  int check = 9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_166) {
  // -9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80120000}};
  int check = -9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_167) {
  // 92233720.36854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0xB0000}};
  int check = 92233720;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_168) {
  // -92233720.36854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x800B0000}};
  int check = -92233720;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_169) {
  // 9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x120000}};
  int check = 9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_170) {
  // -9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80120000}};
  int check = -9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_171) {
  // -2147483647
  s21_decimal decimal = {{2147483647, 0x0, 0x0, 0x80000000}};
  int check = -2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_172) {
  // 214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x10000}};
  int check = 214748364;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_173) {
  // -214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80010000}};
  int check = -214748364;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_174) {
  // 21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x20000}};
  int check = 21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_175) {
  // -21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
  int check = -21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_176) {
  // 214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x40000}};
  int check = 214748;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_177) {
  // -214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80040000}};
  int check = -214748;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_178) {
  // 21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000}};
  int check = 21;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_179) {
  // -21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80080000}};
  int check = -21;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_180) {
  // 2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_181) {
  // -2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_182) {
  // 1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x140000}};
  int check = 1560647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_183) {
  // -1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80140000}};
  int check = -1560647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_184) {
  // 1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x1A0000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_185) {
  // -1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x801A0000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_186) {
  // 15606476.7562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x130000}};
  int check = 15606476;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_187) {
  // -15606476.7562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80130000}};
  int check = -15606476;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_188) {
  // 1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x1A0000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_189) {
  // -1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x801A0000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_190) {
  // 156064.767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x150000}};
  int check = 156064;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_191) {
  // -156064.767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80150000}};
  int check = -156064;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_192) {
  // 1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x1A0000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_193) {
  // -1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x801A0000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_194) {
  // 15606.4767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x160000}};
  int check = 15606;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_195) {
  // -15606.4767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80160000}};
  int check = -15606;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_196) {
  // 1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x1A0000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_197) {
  // -1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x801A0000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_198) {
  // 363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000}};
  int check = 363366602;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_199) {
  // -363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80080000}};
  int check = -363366602;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_200) {
  // 3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x100000}};
  int check = 3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_201) {
  // -3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80100000}};
  int check = -3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_202) {
  // 3633666.0274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0xA0000}};
  int check = 3633666;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_203) {
  // -3633666.0274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x800A0000}};
  int check = -3633666;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_204) {
  // 363366602.74741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80000}};
  int check = 363366602;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_205) {
  // -363366602.74741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80080000}};
  int check = -363366602;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_206) {
  // 36.336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0xF0000}};
  int check = 36;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_207) {
  // -36.336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x800F0000}};
  int check = -36;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_208) {
  // 3.6336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x100000}};
  int check = 3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_209) {
  // -3.6336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80100000}};
  int check = -3;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_210) {
  // 8460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x0}};
  int check = 8460288;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_211) {
  // -8460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80000000}};
  int check = -8460288;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_212) {
  // 846028.8
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x10000}};
  int check = 846028;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_213) {
  // -846028.8
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80010000}};
  int check = -846028;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_214) {
  // 84602.88
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x20000}};
  int check = 84602;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_215) {
  // -84602.88
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80020000}};
  int check = -84602;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_216) {
  // 8460.288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x30000}};
  int check = 8460;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_217) {
  // -8460.288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80030000}};
  int check = -8460;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_218) {
  // 84.60288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x50000}};
  int check = 84;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_219) {
  // -84.60288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80050000}};
  int check = -84;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_220) {
  // 8.460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x60000}};
  int check = 8;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_221) {
  // -8.460288
  s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80060000}};
  int check = -8;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_222) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_223) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_224) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_225) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_226) {
  // 79228162.514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_227) {
  // -79228162.514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_228) {
  // 7.9228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_229) {
  // -7.9228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_230) {
  // 7922816.2495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x160000}};
  int check = 7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_231) {
  // -7922816.2495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80160000}};
  int check = -7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_232) {
  // 7.9228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_233) {
  // -7.9228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_234) {
  // 792281.62495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x170000}};
  int check = 792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_235) {
  // -792281.62495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_236) {
  // 7.9228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_237) {
  // -7.9228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_238) {
  // 184467440.73709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0xB0000}};
  int check = 184467440;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_239) {
  // -184467440.73709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x800B0000}};
  int check = -184467440;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_240) {
  // 184.46744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x110000}};
  int check = 184;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_241) {
  // -184.46744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80110000}};
  int check = -184;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_242) {
  // 1.8446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_243) {
  // -1.8446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_244) {
  // 18446744.069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0xC0000}};
  int check = 18446744;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_245) {
  // -18446744.069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x800C0000}};
  int check = -18446744;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_246) {
  // 184.46744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x110000}};
  int check = 184;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_247) {
  // -184.46744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80110000}};
  int check = -184;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_248) {
  // 1.8446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_249) {
  // -1.8446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_250) {
  // 429496729.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};
  int check = 429496729;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_251) {
  // -429496729.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};
  int check = -429496729;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_252) {
  // 42949672.95
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x20000}};
  int check = 42949672;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_253) {
  // -42949672.95
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80020000}};
  int check = -42949672;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_254) {
  // 42949.67295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x50000}};
  int check = 42949;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_255) {
  // -42949.67295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80050000}};
  int check = -42949;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_256) {
  // 42.94967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  int check = 42;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_257) {
  // -42.94967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  int check = -42;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_258) {
  // 4.294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x90000}};
  int check = 4;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_259) {
  // -4.294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80090000}};
  int check = -4;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_260) {
  // 1.0
  s21_decimal decimal = {{0xA, 0x0, 0x0, 0x10000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_261) {
  // -1.0
  s21_decimal decimal = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_262) {
  // 1.00
  s21_decimal decimal = {{0x64, 0x0, 0x0, 0x20000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_263) {
  // -1.00
  s21_decimal decimal = {{0x64, 0x0, 0x0, 0x80020000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_264) {
  // 1.000
  s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x30000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_265) {
  // -1.000
  s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x80030000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_266) {
  // 1.0000000000
  s21_decimal decimal = {{0x540BE400, 0x2, 0x0, 0xA0000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_267) {
  // -1.0000000000
  s21_decimal decimal = {{0x540BE400, 0x2, 0x0, 0x800A0000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_268) {
  // 1.0000000000000000
  s21_decimal decimal = {{0x6FC10000, 0x2386F2, 0x0, 0x100000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_269) {
  // -1.0000000000000000
  s21_decimal decimal = {{0x6FC10000, 0x2386F2, 0x0, 0x80100000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_270) {
  // 1.00000000000000000000000
  s21_decimal decimal = {{0xF6800000, 0x2C7E14A, 0x152D, 0x170000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_271) {
  // -1.00000000000000000000000
  s21_decimal decimal = {{0xF6800000, 0x2C7E14A, 0x152D, 0x80170000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_272) {
  // 1.000000000000000000000000000
  s21_decimal decimal = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x1B0000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_273) {
  // -1.000000000000000000000000000
  s21_decimal decimal = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x801B0000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_274) {
  // 1.0000000000000000000000000000
  s21_decimal decimal = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_275) {
  // -1.0000000000000000000000000000
  s21_decimal decimal = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_276) {
  // 1.1
  s21_decimal decimal = {{0xB, 0x0, 0x0, 0x10000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_277) {
  // -1.1
  s21_decimal decimal = {{0xB, 0x0, 0x0, 0x80010000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_278) {
  // 12.12
  s21_decimal decimal = {{0x4BC, 0x0, 0x0, 0x20000}};
  int check = 12;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_279) {
  // -12.12
  s21_decimal decimal = {{0x4BC, 0x0, 0x0, 0x80020000}};
  int check = -12;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_280) {
  // 123.123
  s21_decimal decimal = {{0x1E0F3, 0x0, 0x0, 0x30000}};
  int check = 123;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_281) {
  // -123.123
  s21_decimal decimal = {{0x1E0F3, 0x0, 0x0, 0x80030000}};
  int check = -123;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_282) {
  // 1234.1234
  s21_decimal decimal = {{0xBC4FF2, 0x0, 0x0, 0x40000}};
  int check = 1234;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_283) {
  // -1234.1234
  s21_decimal decimal = {{0xBC4FF2, 0x0, 0x0, 0x80040000}};
  int check = -1234;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_284) {
  // 12345.12345
  s21_decimal decimal = {{0x499529D9, 0x0, 0x0, 0x50000}};
  int check = 12345;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_285) {
  // -12345.12345
  s21_decimal decimal = {{0x499529D9, 0x0, 0x0, 0x80050000}};
  int check = -12345;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_286) {
  // 123456.123456
  s21_decimal decimal = {{0xBE8EF240, 0x1C, 0x0, 0x60000}};
  int check = 123456;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_287) {
  // -123456.123456
  s21_decimal decimal = {{0xBE8EF240, 0x1C, 0x0, 0x80060000}};
  int check = -123456;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_288) {
  // 1234567.1234567
  s21_decimal decimal = {{0x73593407, 0xB3A, 0x0, 0x70000}};
  int check = 1234567;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_289) {
  // -1234567.1234567
  s21_decimal decimal = {{0x73593407, 0xB3A, 0x0, 0x80070000}};
  int check = -1234567;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_290) {
  // 1234567890.1234567890
  s21_decimal decimal = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0xA0000}};
  int check = 1234567890;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_291) {
  // -1234567890.1234567890
  s21_decimal decimal = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0x800A0000}};
  int check = -1234567890;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_292) {
  // 99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x0}};
  int check = 99;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_293) {
  // -99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80000000}};
  int check = -99;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_294) {
  // 9.9
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x10000}};
  int check = 9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_295) {
  // -9.9
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80010000}};
  int check = -9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_296) {
  // 99.99
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x20000}};
  int check = 99;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_297) {
  // -99.99
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x80020000}};
  int check = -99;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_298) {
  // 999.999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x30000}};
  int check = 999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_299) {
  // -999.999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x80030000}};
  int check = -999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_300) {
  // 9999.9999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x40000}};
  int check = 9999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_301) {
  // -9999.9999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80040000}};
  int check = -9999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_302) {
  // 99999.99999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x50000}};
  int check = 99999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_303) {
  // -99999.99999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x80050000}};
  int check = -99999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_304) {
  // 999999.999999
  s21_decimal decimal = {{0xD4A50FFF, 0xE8, 0x0, 0x60000}};
  int check = 999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_305) {
  // -999999.999999
  s21_decimal decimal = {{0xD4A50FFF, 0xE8, 0x0, 0x80060000}};
  int check = -999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_306) {
  // 9999999.9999999
  s21_decimal decimal = {{0x107A3FFF, 0x5AF3, 0x0, 0x70000}};
  int check = 9999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_307) {
  // -9999999.9999999
  s21_decimal decimal = {{0x107A3FFF, 0x5AF3, 0x0, 0x80070000}};
  int check = -9999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_308) {
  // 99999999.99999999
  s21_decimal decimal = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80000}};
  int check = 99999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_309) {
  // -99999999.99999999
  s21_decimal decimal = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80080000}};
  int check = -99999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_310) {
  // 999999999.999999999
  s21_decimal decimal = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x90000}};
  int check = 999999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_311) {
  // -999999999.999999999
  s21_decimal decimal = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x80090000}};
  int check = -999999999;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_312) {
  // 9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x0}};
  int check = 9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_313) {
  // -9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x80000000}};
  int check = -9;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_314) {
  // 0.9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x10000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_315) {
  // -0.9
  s21_decimal decimal = {{0x9, 0x0, 0x0, 0x80010000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_316) {
  // 0.99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x20000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_317) {
  // -0.99
  s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80020000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_318) {
  // 0.999
  s21_decimal decimal = {{0x3E7, 0x0, 0x0, 0x30000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_319) {
  // -0.999
  s21_decimal decimal = {{0x3E7, 0x0, 0x0, 0x80030000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_320) {
  // 0.9999
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x40000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_321) {
  // -0.9999
  s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x80040000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_322) {
  // 0.99999
  s21_decimal decimal = {{0x1869F, 0x0, 0x0, 0x50000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_323) {
  // -0.99999
  s21_decimal decimal = {{0x1869F, 0x0, 0x0, 0x80050000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_324) {
  // 0.999999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x60000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_325) {
  // -0.999999
  s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x80060000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_326) {
  // 0.9999999
  s21_decimal decimal = {{0x98967F, 0x0, 0x0, 0x70000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_327) {
  // -0.9999999
  s21_decimal decimal = {{0x98967F, 0x0, 0x0, 0x80070000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_328) {
  // 0.99999999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_329) {
  // -0.99999999
  s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80080000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_330) {
  // 0.999999999
  s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x90000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_331) {
  // -0.999999999
  s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x80090000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_332) {
  // 0.9999999999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0xA0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_333) {
  // -0.9999999999
  s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x800A0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_334) {
  // 0.99999999999999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x140000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_335) {
  // -0.99999999999999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x80140000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_336) {
  // -0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_337) {
  // 0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x0}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_338) {
  // -0.0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80010000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_339) {
  // 0.0
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x10000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_340) {
  // -0.00
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80020000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_341) {
  // 0.00
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x20000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_342) {
  // -0.00000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_343) {
  // 0.00000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_344) {
  // -0.000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x801B0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_345) {
  // 0.000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x1B0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_346) {
  // -0.0000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_347) {
  // 0.0000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_348) {
  // 2147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};
  int check = 2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_349) {
  // -2147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80000000}};
  int check = -2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_350) {
  // 2147483646.00
  s21_decimal decimal = {{0xFFFFFF38, 0x31, 0x0, 0x20000}};
  int check = 2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_351) {
  // -2147483646.00
  s21_decimal decimal = {{0xFFFFFF38, 0x31, 0x0, 0x80020000}};
  int check = -2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_352) {
  // 2147483646.99
  s21_decimal decimal = {{0xFFFFFF9B, 0x31, 0x0, 0x20000}};
  int check = 2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_353) {
  // -2147483646.99
  s21_decimal decimal = {{0xFFFFFF9B, 0x31, 0x0, 0x80020000}};
  int check = -2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_354) {
  // 2147483646.999999999999999999
  s21_decimal decimal = {{0x589BFFFF, 0xC5D1494C, 0x6F05B59, 0x120000}};
  int check = 2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_355) {
  // -2147483646.999999999999999999
  s21_decimal decimal = {{0x589BFFFF, 0xC5D1494C, 0x6F05B59, 0x80120000}};
  int check = -2147483646;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_356) {
  // 21474836.46
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x20000}};
  int check = 21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_357) {
  // -21474836.46
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80020000}};
  int check = -21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_358) {
  // 214.7483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x70000}};
  int check = 214;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_359) {
  // -214.7483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80070000}};
  int check = -214;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_360) {
  // 2.147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x90000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_361) {
  // -2.147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80090000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_362) {
  // 0.2147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0xA0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_363) {
  // -0.2147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x800A0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_364) {
  // 0.0000000000000000002147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_365) {
  // -0.0000000000000000002147483646
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_366) {
  // 2147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};
  int check = 2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_367) {
  // -2147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
  int check = -2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_368) {
  // 2147483647.00
  s21_decimal decimal = {{0xFFFFFF9C, 0x31, 0x0, 0x20000}};
  int check = 2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_369) {
  // -2147483647.00
  s21_decimal decimal = {{0xFFFFFF9C, 0x31, 0x0, 0x80020000}};
  int check = -2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_370) {
  // 2147483647.99
  s21_decimal decimal = {{0xFFFFFFFF, 0x31, 0x0, 0x20000}};
  int check = 2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_371) {
  // -2147483647.99
  s21_decimal decimal = {{0xFFFFFFFF, 0x31, 0x0, 0x80020000}};
  int check = -2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_372) {
  // 2147483647.999999999999999999
  s21_decimal decimal = {{0xFFFFFFFF, 0xD3B1FFFF, 0x6F05B59, 0x120000}};
  int check = 2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_373) {
  // -2147483647.999999999999999999
  s21_decimal decimal = {{0xFFFFFFFF, 0xD3B1FFFF, 0x6F05B59, 0x80120000}};
  int check = -2147483647;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_374) {
  // 21474836.47
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x20000}};
  int check = 21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_375) {
  // -21474836.47
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80020000}};
  int check = -21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_376) {
  // 214.7483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x70000}};
  int check = 214;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_377) {
  // -214.7483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80070000}};
  int check = -214;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_378) {
  // 2.147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x90000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_379) {
  // -2.147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80090000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_380) {
  // 0.2147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0xA0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_381) {
  // -0.2147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x800A0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_382) {
  // 0.0000000000000000002147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_383) {
  // -0.0000000000000000002147483647
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_384) {
  // -2147483647
  s21_decimal decimal = {{2147483647, 0x0, 0x0, 0x80000000}};
  int check = -2147483647;

  test_from_decimal_to_int(decimal, check);
}

// START_TEST(test_from_decimal_to_int_385) {
//   // -2147483648.00
//   s21_decimal decimal = {{0x0, 0x32, 0x0, 0x80020000}};
//   long check = -2147483648;

//   test_from_decimal_to_int(decimal, check);
// }

// START_TEST(test_from_decimal_to_int_386) {
//   // -2147483648.99
//   s21_decimal decimal = {{0x63, 0x32, 0x0, 0x80020000}};
//   long check = -2147483648;

//   test_from_decimal_to_int(decimal, check);
// }

// START_TEST(test_from_decimal_to_int_387) {
//   // -2147483648.999999999999999999
//   s21_decimal decimal = {{0xA763FFFF, 0xE192B6B3, 0x6F05B59, 0x80120000}};
//   long check = -2147483648;

//   test_from_decimal_to_int(decimal, check);
// }

START_TEST(test_from_decimal_to_int_388) {
  // 21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x20000}};
  int check = 21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_389) {
  // -21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
  int check = -21474836;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_390) {
  // 214.7483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x70000}};
  int check = 214;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_391) {
  // -214.7483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80070000}};
  int check = -214;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_392) {
  // 2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_393) {
  // -2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_394) {
  // 0.2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0xA0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_395) {
  // -0.2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x800A0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_396) {
  // 0.0000000000000000002147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_397) {
  // -0.0000000000000000002147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_398) {
  // -202378.6784
  s21_decimal decimal = {{0x78A08920, 0x0, 0x0, 0x80040000}};
  int check = -202378;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_399) {
  // 202378.6784
  s21_decimal decimal = {{0x78A08920, 0x0, 0x0, 0x40000}};
  int check = 202378;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_400) {
  // 1157199323
  s21_decimal decimal = {{0x44F975DB, 0x0, 0x0, 0x0}};
  int check = 1157199323;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_401) {
  // -1157199323
  s21_decimal decimal = {{0x44F975DB, 0x0, 0x0, 0x80000000}};
  int check = -1157199323;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_402) {
  // -1047971123
  s21_decimal decimal = {{0x3E76C533, 0x0, 0x0, 0x80000000}};
  int check = -1047971123;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_403) {
  // 1047971123
  s21_decimal decimal = {{0x3E76C533, 0x0, 0x0, 0x0}};
  int check = 1047971123;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_404) {
  // 1635973982
  s21_decimal decimal = {{0x6182FB5E, 0x0, 0x0, 0x0}};
  int check = 1635973982;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_405) {
  // -1635973982
  s21_decimal decimal = {{0x6182FB5E, 0x0, 0x0, 0x80000000}};
  int check = -1635973982;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_406) {
  // 1664922502
  s21_decimal decimal = {{0x633CB386, 0x0, 0x0, 0x0}};
  int check = 1664922502;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_407) {
  // -1664922502
  s21_decimal decimal = {{0x633CB386, 0x0, 0x0, 0x80000000}};
  int check = -1664922502;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_408) {
  // -1562427032
  s21_decimal decimal = {{0x5D20BE98, 0x0, 0x0, 0x80000000}};
  int check = -1562427032;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_409) {
  // 1562427032
  s21_decimal decimal = {{0x5D20BE98, 0x0, 0x0, 0x0}};
  int check = 1562427032;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_410) {
  // 18415446
  s21_decimal decimal = {{0x118FF56, 0x0, 0x0, 0x0}};
  int check = 18415446;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_411) {
  // -18415446
  s21_decimal decimal = {{0x118FF56, 0x0, 0x0, 0x80000000}};
  int check = -18415446;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_412) {
  // 2043799125
  s21_decimal decimal = {{0x79D1E655, 0x0, 0x0, 0x0}};
  int check = 2043799125;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_413) {
  // -2043799125
  s21_decimal decimal = {{0x79D1E655, 0x0, 0x0, 0x80000000}};
  int check = -2043799125;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_414) {
  // -699081605
  s21_decimal decimal = {{0x29AB2385, 0x0, 0x0, 0x80000000}};
  int check = -699081605;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_415) {
  // 699081605
  s21_decimal decimal = {{0x29AB2385, 0x0, 0x0, 0x0}};
  int check = 699081605;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_416) {
  // 7206047.80
  s21_decimal decimal = {{0x2AF38E6C, 0x0, 0x0, 0x20000}};
  int check = 7206047;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_417) {
  // -7206047.80
  s21_decimal decimal = {{0x2AF38E6C, 0x0, 0x0, 0x80020000}};
  int check = -7206047;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_418) {
  // -405011.4826
  s21_decimal decimal = {{0xF167D90A, 0x0, 0x0, 0x80040000}};
  int check = -405011;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_419) {
  // 405011.4826
  s21_decimal decimal = {{0xF167D90A, 0x0, 0x0, 0x40000}};
  int check = 405011;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_420) {
  // 0.0000000002899686912
  s21_decimal decimal = {{0xACD5B600, 0x0, 0x0, 0x130000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_421) {
  // -0.0000000002899686912
  s21_decimal decimal = {{0xACD5B600, 0x0, 0x0, 0x80130000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_422) {
  // -806251761
  s21_decimal decimal = {{0x300E6CF1, 0x0, 0x0, 0x80000000}};
  int check = -806251761;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_423) {
  // 806251761
  s21_decimal decimal = {{0x300E6CF1, 0x0, 0x0, 0x0}};
  int check = 806251761;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_424) {
  // -961415253
  s21_decimal decimal = {{0x394E0855, 0x0, 0x0, 0x80000000}};
  int check = -961415253;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_425) {
  // 961415253
  s21_decimal decimal = {{0x394E0855, 0x0, 0x0, 0x0}};
  int check = 961415253;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_426) {
  // 1362812644
  s21_decimal decimal = {{0x513ADEE4, 0x0, 0x0, 0x0}};
  int check = 1362812644;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_427) {
  // -1362812644
  s21_decimal decimal = {{0x513ADEE4, 0x0, 0x0, 0x80000000}};
  int check = -1362812644;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_428) {
  // 744018023
  s21_decimal decimal = {{0x2C58D067, 0x0, 0x0, 0x0}};
  int check = 744018023;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_429) {
  // -744018023
  s21_decimal decimal = {{0x2C58D067, 0x0, 0x0, 0x80000000}};
  int check = -744018023;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_430) {
  // -669134488
  s21_decimal decimal = {{0x27E22E98, 0x0, 0x0, 0x80000000}};
  int check = -669134488;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_431) {
  // 669134488
  s21_decimal decimal = {{0x27E22E98, 0x0, 0x0, 0x0}};
  int check = 669134488;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_432) {
  // 1135755779
  s21_decimal decimal = {{0x43B24203, 0x0, 0x0, 0x0}};
  int check = 1135755779;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_433) {
  // -1135755779
  s21_decimal decimal = {{0x43B24203, 0x0, 0x0, 0x80000000}};
  int check = -1135755779;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_434) {
  // -1066687460
  s21_decimal decimal = {{0x3F945BE4, 0x0, 0x0, 0x80000000}};
  int check = -1066687460;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_435) {
  // 1066687460
  s21_decimal decimal = {{0x3F945BE4, 0x0, 0x0, 0x0}};
  int check = 1066687460;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_436) {
  // 1775.200759
  s21_decimal decimal = {{0x69CF69F7, 0x0, 0x0, 0x60000}};
  int check = 1775;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_437) {
  // -1775.200759
  s21_decimal decimal = {{0x69CF69F7, 0x0, 0x0, 0x80060000}};
  int check = -1775;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_438) {
  // 2049377039
  s21_decimal decimal = {{0x7A27030F, 0x0, 0x0, 0x0}};
  int check = 2049377039;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_439) {
  // -2049377039
  s21_decimal decimal = {{0x7A27030F, 0x0, 0x0, 0x80000000}};
  int check = -2049377039;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_440) {
  // 644156872
  s21_decimal decimal = {{0x26650DC8, 0x0, 0x0, 0x0}};
  int check = 644156872;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_441) {
  // -644156872
  s21_decimal decimal = {{0x26650DC8, 0x0, 0x0, 0x80000000}};
  int check = -644156872;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_442) {
  // 411899256
  s21_decimal decimal = {{0x188D1578, 0x0, 0x0, 0x0}};
  int check = 411899256;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_443) {
  // -411899256
  s21_decimal decimal = {{0x188D1578, 0x0, 0x0, 0x80000000}};
  int check = -411899256;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_444) {
  // -0.0000000000000000321044217
  s21_decimal decimal = {{0x1322BEF9, 0x0, 0x0, 0x80190000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_445) {
  // 0.0000000000000000321044217
  s21_decimal decimal = {{0x1322BEF9, 0x0, 0x0, 0x190000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_446) {
  // 0.000000000000000003809359548
  s21_decimal decimal = {{0xE30E36BC, 0x0, 0x0, 0x1B0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_447) {
  // -0.000000000000000003809359548
  s21_decimal decimal = {{0xE30E36BC, 0x0, 0x0, 0x801B0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_448) {
  // -0.000000000002807144663
  s21_decimal decimal = {{0xA751A0D7, 0x0, 0x0, 0x80150000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_449) {
  // 0.000000000002807144663
  s21_decimal decimal = {{0xA751A0D7, 0x0, 0x0, 0x150000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_450) {
  // 1802612012
  s21_decimal decimal = {{0x6B71AD2C, 0x0, 0x0, 0x0}};
  int check = 1802612012;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_451) {
  // -1802612012
  s21_decimal decimal = {{0x6B71AD2C, 0x0, 0x0, 0x80000000}};
  int check = -1802612012;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_452) {
  // 1498496264
  s21_decimal decimal = {{0x59513D08, 0x0, 0x0, 0x0}};
  int check = 1498496264;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_453) {
  // -1498496264
  s21_decimal decimal = {{0x59513D08, 0x0, 0x0, 0x80000000}};
  int check = -1498496264;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_454) {
  // 0.000000001060195434
  s21_decimal decimal = {{0x3F314C6A, 0x0, 0x0, 0x120000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_455) {
  // -0.000000001060195434
  s21_decimal decimal = {{0x3F314C6A, 0x0, 0x0, 0x80120000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_456) {
  // -346.3980837
  s21_decimal decimal = {{0xCE782725, 0x0, 0x0, 0x80070000}};
  int check = -346;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_457) {
  // 346.3980837
  s21_decimal decimal = {{0xCE782725, 0x0, 0x0, 0x70000}};
  int check = 346;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_458) {
  // -0.0000000000000000000791281307
  s21_decimal decimal = {{0x2F29FE9B, 0x0, 0x0, 0x801C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_459) {
  // 0.0000000000000000000791281307
  s21_decimal decimal = {{0x2F29FE9B, 0x0, 0x0, 0x1C0000}};
  int check = 0;

  test_from_decimal_to_int(decimal, check);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * Tests for incorrect data (auto)
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * */

START_TEST(test_from_decimal_to_int_fail_1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_4) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_5) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_6) {
  // -792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_7) {
  // 79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_8) {
  // -79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_9) {
  // 7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_10) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_11) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_12) {
  // -792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_13) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_14) {
  // -79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_15) {
  // 7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_16) {
  // -7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_17) {
  // 792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_18) {
  // -792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_19) {
  // 79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_20) {
  // -79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_21) {
  // 7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_22) {
  // -7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_23) {
  // 792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_24) {
  // -792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_25) {
  // 79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_26) {
  // -79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_27) {
  // 7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_28) {
  // -7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_29) {
  // 792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_30) {
  // -792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_31) {
  // 79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_32) {
  // -79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_33) {
  // 7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_34) {
  // -7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_35) {
  // 792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_36) {
  // -792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_37) {
  // 79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_38) {
  // -79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_39) {
  // 7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_40) {
  // -7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_41) {
  // 79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_42) {
  // -79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_43) {
  // 7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_44) {
  // -7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_45) {
  // 792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_46) {
  // -792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_47) {
  // 79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_48) {
  // -79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_49) {
  // 7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_50) {
  // -7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_51) {
  // 792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_52) {
  // -792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_53) {
  // 79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_54) {
  // -79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_55) {
  // 7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_56) {
  // -7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_57) {
  // 792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_58) {
  // -792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_59) {
  // 79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_60) {
  // -79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_61) {
  // 7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_62) {
  // -7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_63) {
  // 792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_64) {
  // -792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_65) {
  // 79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_66) {
  // -79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_67) {
  // 7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_68) {
  // -7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_69) {
  // 792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_70) {
  // -792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_71) {
  // 79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_72) {
  // -79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_73) {
  // 7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_74) {
  // -7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_75) {
  // 792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_76) {
  // -792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_77) {
  // 79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_78) {
  // -79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_79) {
  // 7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_80) {
  // -7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_81) {
  // 52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_82) {
  // -52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_83) {
  // 5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_84) {
  // -5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_85) {
  // 52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_86) {
  // -52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_87) {
  // 5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_88) {
  // -5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_89) {
  // 52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_90) {
  // -52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_91) {
  // 5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_92) {
  // -5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_93) {
  // 52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_94) {
  // -52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_95) {
  // 5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_96) {
  // -5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_97) {
  // 12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_98) {
  // -12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_99) {
  // 1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_100) {
  // -1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_101) {
  // 12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_102) {
  // -12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_103) {
  // 1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_104) {
  // -1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_105) {
  // 2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_106) {
  // -2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_107) {
  // 26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_108) {
  // -26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_109) {
  // 2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_110) {
  // -2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_111) {
  // 26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_112) {
  // -26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_113) {
  // 2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_114) {
  // -2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_115) {
  // 26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_116) {
  // -26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_117) {
  // 2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_118) {
  // -2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_119) {
  // 26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_120) {
  // -26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_121) {
  // 2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_122) {
  // -2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_123) {
  // 6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_124) {
  // -6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_125) {
  // 614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_126) {
  // -614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_127) {
  // 6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_128) {
  // -6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_129) {
  // 614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_130) {
  // -614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_131) {
  // 18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_132) {
  // -18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_133) {
  // 1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_134) {
  // -1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_135) {
  // 18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_136) {
  // -18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_137) {
  // 1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_138) {
  // -1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_139) {
  // 18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_140) {
  // -18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_141) {
  // 1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_142) {
  // -1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_143) {
  // 18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_144) {
  // -18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_145) {
  // 1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_146) {
  // -1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_147) {
  // 4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_148) {
  // -4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_149) {
  // 4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_150) {
  // -4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_151) {
  // 39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_152) {
  // -39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_153) {
  // 3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_154) {
  // -3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_155) {
  // 39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_156) {
  // -39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_157) {
  // 3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_158) {
  // -3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_159) {
  // 39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_160) {
  // -39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_161) {
  // 3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_162) {
  // -3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_163) {
  // 39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_164) {
  // -39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_165) {
  // 3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_166) {
  // -3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_167) {
  // 9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_168) {
  // -9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_169) {
  // 922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_170) {
  // -922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_171) {
  // 9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_172) {
  // -9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_173) {
  // 922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_174) {
  // -922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_175) {
  // 2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_176) {
  // 156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_177) {
  // -156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_178) {
  // 15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_179) {
  // -15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_180) {
  // 156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_181) {
  // -156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_182) {
  // 15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_183) {
  // -15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_184) {
  // 156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_185) {
  // -156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_186) {
  // 15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_187) {
  // -15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_188) {
  // 156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_189) {
  // -156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_190) {
  // 15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_191) {
  // -15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_192) {
  // 36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_193) {
  // -36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_194) {
  // 3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_195) {
  // -3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_196) {
  // 36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_197) {
  // -36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_198) {
  // 3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_199) {
  // -3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_200) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_201) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_202) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_203) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_204) {
  // 79228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_205) {
  // -79228162514264337589248983040
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_206) {
  // 7922816251426433758924898304.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_207) {
  // -7922816251426433758924898304.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_208) {
  // 79228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_209) {
  // -79228162495817593524129366015
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_210) {
  // 7922816249581759352412936601.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_211) {
  // -7922816249581759352412936601.5
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_212) {
  // 79228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_213) {
  // -79228162495817593519834398720
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_214) {
  // 7922816249581759351983439872.0
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_215) {
  // -7922816249581759351983439872.0
  s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_216) {
  // 18446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_217) {
  // -18446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_218) {
  // 1844674407370955161.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_219) {
  // -1844674407370955161.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_220) {
  // 18446744073709551.615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x30000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_221) {
  // -18446744073709551.615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80030000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_222) {
  // 18446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_223) {
  // -18446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_224) {
  // 1844674406941458432.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x10000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_225) {
  // -1844674406941458432.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80010000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_226) {
  // 18446744069414584.320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x30000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_227) {
  // -18446744069414584.320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80030000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_228) {
  // 4294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_229) {
  // -4294967295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_230) {
  // 12345678901234.12345678901234
  s21_decimal decimal = {{0xF91EAFF2, 0x6D795225, 0x3FD35EB, 0xE0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_231) {
  // -12345678901234.12345678901234
  s21_decimal decimal = {{0xF91EAFF2, 0x6D795225, 0x3FD35EB, 0x800E0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_232) {
  // 9999999999.9999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0xA0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_233) {
  // -9999999999.9999999999
  s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x800A0000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_234) {
  // 2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_235) {
  // 2147483648.00
  s21_decimal decimal = {{0x0, 0x32, 0x0, 0x20000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_236) {
  // 2147483648.99
  s21_decimal decimal = {{0x63, 0x32, 0x0, 0x20000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_237) {
  // 2147483648.999999999999999999
  s21_decimal decimal = {{0xA763FFFF, 0xE192B6B3, 0x6F05B59, 0x120000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_238) {
  // 3436350754
  s21_decimal decimal = {{0xCCD28D22, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_239) {
  // -3436350754
  s21_decimal decimal = {{0xCCD28D22, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_240) {
  // -2467171175
  s21_decimal decimal = {{0x930E0B67, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_241) {
  // 2467171175
  s21_decimal decimal = {{0x930E0B67, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_242) {
  // -2296067528
  s21_decimal decimal = {{0x88DB35C8, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_243) {
  // 2296067528
  s21_decimal decimal = {{0x88DB35C8, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_244) {
  // 3848964437
  s21_decimal decimal = {{0xE56A8955, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_245) {
  // -3848964437
  s21_decimal decimal = {{0xE56A8955, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_246) {
  // -3182863462
  s21_decimal decimal = {{0xBDB6A466, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_247) {
  // 3182863462
  s21_decimal decimal = {{0xBDB6A466, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_248) {
  // -48847109575696535634899575831
  s21_decimal decimal = {{0x26532417, 0x149403E0, 0x9DD561CC, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_249) {
  // 48847109575696535634899575831
  s21_decimal decimal = {{0x26532417, 0x149403E0, 0x9DD561CC, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_250) {
  // -3318846837
  s21_decimal decimal = {{0xC5D19575, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_251) {
  // 3318846837
  s21_decimal decimal = {{0xC5D19575, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_252) {
  // -2313332038
  s21_decimal decimal = {{0x89E2A546, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_253) {
  // 2313332038
  s21_decimal decimal = {{0x89E2A546, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_254) {
  // 3374693184
  s21_decimal decimal = {{0xC925BB40, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_255) {
  // -3374693184
  s21_decimal decimal = {{0xC925BB40, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_256) {
  // 4020511056
  s21_decimal decimal = {{0xEFA42150, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_257) {
  // -4020511056
  s21_decimal decimal = {{0xEFA42150, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_258) {
  // 3004972040
  s21_decimal decimal = {{0xB31C3C08, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_259) {
  // -3004972040
  s21_decimal decimal = {{0xB31C3C08, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_260) {
  // -2859313295
  s21_decimal decimal = {{0xAA6DA88F, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_261) {
  // 2859313295
  s21_decimal decimal = {{0xAA6DA88F, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_262) {
  // 3559609781
  s21_decimal decimal = {{0xD42B55B5, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_263) {
  // -3559609781
  s21_decimal decimal = {{0xD42B55B5, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_264) {
  // -2633735568
  s21_decimal decimal = {{0x9CFB9D90, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_265) {
  // 2633735568
  s21_decimal decimal = {{0x9CFB9D90, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_266) {
  // 3849297796
  s21_decimal decimal = {{0xE56F9F84, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_267) {
  // -3849297796
  s21_decimal decimal = {{0xE56F9F84, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_268) {
  // -66249387729842137051875589617
  s21_decimal decimal = {{0x75E13DF1, 0x206039BC, 0xD6103589, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_269) {
  // 66249387729842137051875589617
  s21_decimal decimal = {{0x75E13DF1, 0x206039BC, 0xD6103589, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_270) {
  // 4000259692
  s21_decimal decimal = {{0xEE6F1E6C, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_271) {
  // -4000259692
  s21_decimal decimal = {{0xEE6F1E6C, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_272) {
  // 299970448737931080006163233.37
  s21_decimal decimal = {{0xA9C59909, 0x3FD3888, 0x60ECF955, 0x20000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_273) {
  // -299970448737931080006163233.37
  s21_decimal decimal = {{0xA9C59909, 0x3FD3888, 0x60ECF955, 0x80020000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_274) {
  // -3238025630
  s21_decimal decimal = {{0xC100599E, 0x0, 0x0, 0x80000000}};

  test_from_decimal_to_int_fail(decimal);
}

START_TEST(test_from_decimal_to_int_fail_275) {
  // 3238025630
  s21_decimal decimal = {{0xC100599E, 0x0, 0x0, 0x0}};

  test_from_decimal_to_int_fail(decimal);
}

Suite *from_decimal_to_int_suite_1(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_int_1" NOCOLOR);
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_from_decimal_to_int_1);
  tcase_add_test(tc_core, test_from_decimal_to_int_2);
  tcase_add_test(tc_core, test_from_decimal_to_int_3);
  tcase_add_test(tc_core, test_from_decimal_to_int_4);
  tcase_add_test(tc_core, test_from_decimal_to_int_5);
  tcase_add_test(tc_core, test_from_decimal_to_int_6);
  tcase_add_test(tc_core, test_from_decimal_to_int_7);
  tcase_add_test(tc_core, test_from_decimal_to_int_8);
  tcase_add_test(tc_core, test_from_decimal_to_int_9);
  tcase_add_test(tc_core, test_from_decimal_to_int_10);
  tcase_add_test(tc_core, test_from_decimal_to_int_11);
  tcase_add_test(tc_core, test_from_decimal_to_int_12);
  tcase_add_test(tc_core, test_from_decimal_to_int_13);
  tcase_add_test(tc_core, test_from_decimal_to_int_14);
  tcase_add_test(tc_core, test_from_decimal_to_int_15);
  tcase_add_test(tc_core, test_from_decimal_to_int_16);
  tcase_add_test(tc_core, test_from_decimal_to_int_17);
  tcase_add_test(tc_core, test_from_decimal_to_int_18);
  tcase_add_test(tc_core, test_from_decimal_to_int_19);
  tcase_add_test(tc_core, test_from_decimal_to_int_20);
  tcase_add_test(tc_core, test_from_decimal_to_int_21);
  tcase_add_test(tc_core, test_from_decimal_to_int_22);
  tcase_add_test(tc_core, test_from_decimal_to_int_23);
  tcase_add_test(tc_core, test_from_decimal_to_int_24);
  tcase_add_test(tc_core, test_from_decimal_to_int_25);
  tcase_add_test(tc_core, test_from_decimal_to_int_26);
  tcase_add_test(tc_core, test_from_decimal_to_int_27);
  tcase_add_test(tc_core, test_from_decimal_to_int_28);
  tcase_add_test(tc_core, test_from_decimal_to_int_29);
  tcase_add_test(tc_core, test_from_decimal_to_int_30);
  tcase_add_test(tc_core, test_from_decimal_to_int_31);
  tcase_add_test(tc_core, test_from_decimal_to_int_32);
  tcase_add_test(tc_core, test_from_decimal_to_int_33);
  tcase_add_test(tc_core, test_from_decimal_to_int_34);
  tcase_add_test(tc_core, test_from_decimal_to_int_35);
  tcase_add_test(tc_core, test_from_decimal_to_int_36);
  tcase_add_test(tc_core, test_from_decimal_to_int_37);
  tcase_add_test(tc_core, test_from_decimal_to_int_38);
  tcase_add_test(tc_core, test_from_decimal_to_int_39);
  tcase_add_test(tc_core, test_from_decimal_to_int_40);
  tcase_add_test(tc_core, test_from_decimal_to_int_41);
  tcase_add_test(tc_core, test_from_decimal_to_int_42);
  tcase_add_test(tc_core, test_from_decimal_to_int_43);
  tcase_add_test(tc_core, test_from_decimal_to_int_44);
  tcase_add_test(tc_core, test_from_decimal_to_int_45);
  tcase_add_test(tc_core, test_from_decimal_to_int_46);
  tcase_add_test(tc_core, test_from_decimal_to_int_47);
  tcase_add_test(tc_core, test_from_decimal_to_int_48);
  tcase_add_test(tc_core, test_from_decimal_to_int_49);
  tcase_add_test(tc_core, test_from_decimal_to_int_50);
  tcase_add_test(tc_core, test_from_decimal_to_int_51);
  tcase_add_test(tc_core, test_from_decimal_to_int_52);
  tcase_add_test(tc_core, test_from_decimal_to_int_53);
  tcase_add_test(tc_core, test_from_decimal_to_int_54);
  tcase_add_test(tc_core, test_from_decimal_to_int_55);
  tcase_add_test(tc_core, test_from_decimal_to_int_56);
  tcase_add_test(tc_core, test_from_decimal_to_int_57);
  tcase_add_test(tc_core, test_from_decimal_to_int_58);
  tcase_add_test(tc_core, test_from_decimal_to_int_59);
  tcase_add_test(tc_core, test_from_decimal_to_int_60);
  tcase_add_test(tc_core, test_from_decimal_to_int_61);
  tcase_add_test(tc_core, test_from_decimal_to_int_62);
  tcase_add_test(tc_core, test_from_decimal_to_int_63);
  tcase_add_test(tc_core, test_from_decimal_to_int_64);
  tcase_add_test(tc_core, test_from_decimal_to_int_65);
  tcase_add_test(tc_core, test_from_decimal_to_int_66);
  tcase_add_test(tc_core, test_from_decimal_to_int_67);
  tcase_add_test(tc_core, test_from_decimal_to_int_68);
  tcase_add_test(tc_core, test_from_decimal_to_int_69);
  tcase_add_test(tc_core, test_from_decimal_to_int_70);
  tcase_add_test(tc_core, test_from_decimal_to_int_71);
  tcase_add_test(tc_core, test_from_decimal_to_int_72);
  tcase_add_test(tc_core, test_from_decimal_to_int_73);
  tcase_add_test(tc_core, test_from_decimal_to_int_74);
  tcase_add_test(tc_core, test_from_decimal_to_int_75);
  tcase_add_test(tc_core, test_from_decimal_to_int_76);
  tcase_add_test(tc_core, test_from_decimal_to_int_77);
  tcase_add_test(tc_core, test_from_decimal_to_int_78);
  tcase_add_test(tc_core, test_from_decimal_to_int_79);
  tcase_add_test(tc_core, test_from_decimal_to_int_80);
  tcase_add_test(tc_core, test_from_decimal_to_int_81);
  tcase_add_test(tc_core, test_from_decimal_to_int_82);
  tcase_add_test(tc_core, test_from_decimal_to_int_83);
  tcase_add_test(tc_core, test_from_decimal_to_int_84);
  tcase_add_test(tc_core, test_from_decimal_to_int_85);
  tcase_add_test(tc_core, test_from_decimal_to_int_86);
  tcase_add_test(tc_core, test_from_decimal_to_int_87);
  tcase_add_test(tc_core, test_from_decimal_to_int_88);
  tcase_add_test(tc_core, test_from_decimal_to_int_89);
  tcase_add_test(tc_core, test_from_decimal_to_int_90);
  tcase_add_test(tc_core, test_from_decimal_to_int_91);
  tcase_add_test(tc_core, test_from_decimal_to_int_92);
  tcase_add_test(tc_core, test_from_decimal_to_int_93);
  tcase_add_test(tc_core, test_from_decimal_to_int_94);
  tcase_add_test(tc_core, test_from_decimal_to_int_95);
  tcase_add_test(tc_core, test_from_decimal_to_int_96);
  tcase_add_test(tc_core, test_from_decimal_to_int_97);
  tcase_add_test(tc_core, test_from_decimal_to_int_98);
  tcase_add_test(tc_core, test_from_decimal_to_int_99);
  tcase_add_test(tc_core, test_from_decimal_to_int_100);
  tcase_add_test(tc_core, test_from_decimal_to_int_101);
  tcase_add_test(tc_core, test_from_decimal_to_int_102);
  tcase_add_test(tc_core, test_from_decimal_to_int_103);
  tcase_add_test(tc_core, test_from_decimal_to_int_104);
  tcase_add_test(tc_core, test_from_decimal_to_int_105);
  tcase_add_test(tc_core, test_from_decimal_to_int_106);
  tcase_add_test(tc_core, test_from_decimal_to_int_107);
  tcase_add_test(tc_core, test_from_decimal_to_int_108);
  tcase_add_test(tc_core, test_from_decimal_to_int_109);
  tcase_add_test(tc_core, test_from_decimal_to_int_110);
  tcase_add_test(tc_core, test_from_decimal_to_int_111);
  tcase_add_test(tc_core, test_from_decimal_to_int_112);
  tcase_add_test(tc_core, test_from_decimal_to_int_113);
  tcase_add_test(tc_core, test_from_decimal_to_int_114);
  tcase_add_test(tc_core, test_from_decimal_to_int_115);
  tcase_add_test(tc_core, test_from_decimal_to_int_116);
  tcase_add_test(tc_core, test_from_decimal_to_int_117);
  tcase_add_test(tc_core, test_from_decimal_to_int_118);
  tcase_add_test(tc_core, test_from_decimal_to_int_119);
  tcase_add_test(tc_core, test_from_decimal_to_int_120);
  tcase_add_test(tc_core, test_from_decimal_to_int_121);
  tcase_add_test(tc_core, test_from_decimal_to_int_122);
  tcase_add_test(tc_core, test_from_decimal_to_int_123);
  tcase_add_test(tc_core, test_from_decimal_to_int_124);
  tcase_add_test(tc_core, test_from_decimal_to_int_125);
  tcase_add_test(tc_core, test_from_decimal_to_int_126);
  tcase_add_test(tc_core, test_from_decimal_to_int_127);
  tcase_add_test(tc_core, test_from_decimal_to_int_128);
  tcase_add_test(tc_core, test_from_decimal_to_int_129);
  tcase_add_test(tc_core, test_from_decimal_to_int_130);
  tcase_add_test(tc_core, test_from_decimal_to_int_131);
  tcase_add_test(tc_core, test_from_decimal_to_int_132);
  tcase_add_test(tc_core, test_from_decimal_to_int_133);
  tcase_add_test(tc_core, test_from_decimal_to_int_134);
  tcase_add_test(tc_core, test_from_decimal_to_int_135);
  tcase_add_test(tc_core, test_from_decimal_to_int_136);
  tcase_add_test(tc_core, test_from_decimal_to_int_137);
  tcase_add_test(tc_core, test_from_decimal_to_int_138);
  tcase_add_test(tc_core, test_from_decimal_to_int_139);
  tcase_add_test(tc_core, test_from_decimal_to_int_140);
  tcase_add_test(tc_core, test_from_decimal_to_int_141);
  tcase_add_test(tc_core, test_from_decimal_to_int_142);
  tcase_add_test(tc_core, test_from_decimal_to_int_143);
  tcase_add_test(tc_core, test_from_decimal_to_int_144);
  tcase_add_test(tc_core, test_from_decimal_to_int_145);
  tcase_add_test(tc_core, test_from_decimal_to_int_146);
  tcase_add_test(tc_core, test_from_decimal_to_int_147);
  tcase_add_test(tc_core, test_from_decimal_to_int_148);
  tcase_add_test(tc_core, test_from_decimal_to_int_149);
  tcase_add_test(tc_core, test_from_decimal_to_int_150);
  tcase_add_test(tc_core, test_from_decimal_to_int_151);
  tcase_add_test(tc_core, test_from_decimal_to_int_152);
  tcase_add_test(tc_core, test_from_decimal_to_int_153);
  tcase_add_test(tc_core, test_from_decimal_to_int_154);
  tcase_add_test(tc_core, test_from_decimal_to_int_155);
  tcase_add_test(tc_core, test_from_decimal_to_int_156);
  tcase_add_test(tc_core, test_from_decimal_to_int_157);
  tcase_add_test(tc_core, test_from_decimal_to_int_158);
  tcase_add_test(tc_core, test_from_decimal_to_int_159);
  tcase_add_test(tc_core, test_from_decimal_to_int_160);
  tcase_add_test(tc_core, test_from_decimal_to_int_161);
  tcase_add_test(tc_core, test_from_decimal_to_int_162);
  tcase_add_test(tc_core, test_from_decimal_to_int_163);
  tcase_add_test(tc_core, test_from_decimal_to_int_164);
  tcase_add_test(tc_core, test_from_decimal_to_int_165);
  tcase_add_test(tc_core, test_from_decimal_to_int_166);
  tcase_add_test(tc_core, test_from_decimal_to_int_167);
  tcase_add_test(tc_core, test_from_decimal_to_int_168);
  tcase_add_test(tc_core, test_from_decimal_to_int_169);
  tcase_add_test(tc_core, test_from_decimal_to_int_170);
  tcase_add_test(tc_core, test_from_decimal_to_int_171);
  tcase_add_test(tc_core, test_from_decimal_to_int_172);
  tcase_add_test(tc_core, test_from_decimal_to_int_173);
  tcase_add_test(tc_core, test_from_decimal_to_int_174);
  tcase_add_test(tc_core, test_from_decimal_to_int_175);
  tcase_add_test(tc_core, test_from_decimal_to_int_176);
  tcase_add_test(tc_core, test_from_decimal_to_int_177);
  tcase_add_test(tc_core, test_from_decimal_to_int_178);
  tcase_add_test(tc_core, test_from_decimal_to_int_179);
  tcase_add_test(tc_core, test_from_decimal_to_int_180);
  tcase_add_test(tc_core, test_from_decimal_to_int_181);
  tcase_add_test(tc_core, test_from_decimal_to_int_182);
  tcase_add_test(tc_core, test_from_decimal_to_int_183);
  tcase_add_test(tc_core, test_from_decimal_to_int_184);
  tcase_add_test(tc_core, test_from_decimal_to_int_185);
  tcase_add_test(tc_core, test_from_decimal_to_int_186);
  tcase_add_test(tc_core, test_from_decimal_to_int_187);
  tcase_add_test(tc_core, test_from_decimal_to_int_188);
  tcase_add_test(tc_core, test_from_decimal_to_int_189);
  tcase_add_test(tc_core, test_from_decimal_to_int_190);
  tcase_add_test(tc_core, test_from_decimal_to_int_191);
  tcase_add_test(tc_core, test_from_decimal_to_int_192);
  tcase_add_test(tc_core, test_from_decimal_to_int_193);
  tcase_add_test(tc_core, test_from_decimal_to_int_194);
  tcase_add_test(tc_core, test_from_decimal_to_int_195);
  tcase_add_test(tc_core, test_from_decimal_to_int_196);
  tcase_add_test(tc_core, test_from_decimal_to_int_197);
  tcase_add_test(tc_core, test_from_decimal_to_int_198);
  tcase_add_test(tc_core, test_from_decimal_to_int_199);
  tcase_add_test(tc_core, test_from_decimal_to_int_200);
  tcase_add_test(tc_core, test_from_decimal_to_int_201);
  tcase_add_test(tc_core, test_from_decimal_to_int_202);
  tcase_add_test(tc_core, test_from_decimal_to_int_203);
  tcase_add_test(tc_core, test_from_decimal_to_int_204);
  tcase_add_test(tc_core, test_from_decimal_to_int_205);
  tcase_add_test(tc_core, test_from_decimal_to_int_206);
  tcase_add_test(tc_core, test_from_decimal_to_int_207);
  tcase_add_test(tc_core, test_from_decimal_to_int_208);
  tcase_add_test(tc_core, test_from_decimal_to_int_209);
  tcase_add_test(tc_core, test_from_decimal_to_int_210);
  tcase_add_test(tc_core, test_from_decimal_to_int_211);
  tcase_add_test(tc_core, test_from_decimal_to_int_212);
  tcase_add_test(tc_core, test_from_decimal_to_int_213);
  tcase_add_test(tc_core, test_from_decimal_to_int_214);
  tcase_add_test(tc_core, test_from_decimal_to_int_215);
  tcase_add_test(tc_core, test_from_decimal_to_int_216);
  tcase_add_test(tc_core, test_from_decimal_to_int_217);
  tcase_add_test(tc_core, test_from_decimal_to_int_218);
  tcase_add_test(tc_core, test_from_decimal_to_int_219);
  tcase_add_test(tc_core, test_from_decimal_to_int_220);
  tcase_add_test(tc_core, test_from_decimal_to_int_221);
  tcase_add_test(tc_core, test_from_decimal_to_int_222);
  tcase_add_test(tc_core, test_from_decimal_to_int_223);
  tcase_add_test(tc_core, test_from_decimal_to_int_224);
  tcase_add_test(tc_core, test_from_decimal_to_int_225);
  tcase_add_test(tc_core, test_from_decimal_to_int_226);
  tcase_add_test(tc_core, test_from_decimal_to_int_227);
  tcase_add_test(tc_core, test_from_decimal_to_int_228);
  tcase_add_test(tc_core, test_from_decimal_to_int_229);
  tcase_add_test(tc_core, test_from_decimal_to_int_230);
  tcase_add_test(tc_core, test_from_decimal_to_int_231);
  tcase_add_test(tc_core, test_from_decimal_to_int_232);
  tcase_add_test(tc_core, test_from_decimal_to_int_233);
  tcase_add_test(tc_core, test_from_decimal_to_int_234);
  tcase_add_test(tc_core, test_from_decimal_to_int_235);
  tcase_add_test(tc_core, test_from_decimal_to_int_236);
  tcase_add_test(tc_core, test_from_decimal_to_int_237);
  tcase_add_test(tc_core, test_from_decimal_to_int_238);
  tcase_add_test(tc_core, test_from_decimal_to_int_239);
  tcase_add_test(tc_core, test_from_decimal_to_int_240);
  tcase_add_test(tc_core, test_from_decimal_to_int_241);
  tcase_add_test(tc_core, test_from_decimal_to_int_242);
  tcase_add_test(tc_core, test_from_decimal_to_int_243);
  tcase_add_test(tc_core, test_from_decimal_to_int_244);
  tcase_add_test(tc_core, test_from_decimal_to_int_245);
  tcase_add_test(tc_core, test_from_decimal_to_int_246);
  tcase_add_test(tc_core, test_from_decimal_to_int_247);
  tcase_add_test(tc_core, test_from_decimal_to_int_248);
  tcase_add_test(tc_core, test_from_decimal_to_int_249);
  tcase_add_test(tc_core, test_from_decimal_to_int_250);
  tcase_add_test(tc_core, test_from_decimal_to_int_251);
  tcase_add_test(tc_core, test_from_decimal_to_int_252);
  tcase_add_test(tc_core, test_from_decimal_to_int_253);
  tcase_add_test(tc_core, test_from_decimal_to_int_254);
  tcase_add_test(tc_core, test_from_decimal_to_int_255);
  tcase_add_test(tc_core, test_from_decimal_to_int_256);
  tcase_add_test(tc_core, test_from_decimal_to_int_257);
  tcase_add_test(tc_core, test_from_decimal_to_int_258);
  tcase_add_test(tc_core, test_from_decimal_to_int_259);
  tcase_add_test(tc_core, test_from_decimal_to_int_260);
  tcase_add_test(tc_core, test_from_decimal_to_int_261);
  tcase_add_test(tc_core, test_from_decimal_to_int_262);
  tcase_add_test(tc_core, test_from_decimal_to_int_263);
  tcase_add_test(tc_core, test_from_decimal_to_int_264);
  tcase_add_test(tc_core, test_from_decimal_to_int_265);
  tcase_add_test(tc_core, test_from_decimal_to_int_266);
  tcase_add_test(tc_core, test_from_decimal_to_int_267);
  tcase_add_test(tc_core, test_from_decimal_to_int_268);
  tcase_add_test(tc_core, test_from_decimal_to_int_269);
  tcase_add_test(tc_core, test_from_decimal_to_int_270);
  tcase_add_test(tc_core, test_from_decimal_to_int_271);
  tcase_add_test(tc_core, test_from_decimal_to_int_272);
  tcase_add_test(tc_core, test_from_decimal_to_int_273);
  tcase_add_test(tc_core, test_from_decimal_to_int_274);
  tcase_add_test(tc_core, test_from_decimal_to_int_275);
  tcase_add_test(tc_core, test_from_decimal_to_int_276);
  tcase_add_test(tc_core, test_from_decimal_to_int_277);
  tcase_add_test(tc_core, test_from_decimal_to_int_278);
  tcase_add_test(tc_core, test_from_decimal_to_int_279);
  tcase_add_test(tc_core, test_from_decimal_to_int_280);
  tcase_add_test(tc_core, test_from_decimal_to_int_281);
  tcase_add_test(tc_core, test_from_decimal_to_int_282);
  tcase_add_test(tc_core, test_from_decimal_to_int_283);
  tcase_add_test(tc_core, test_from_decimal_to_int_284);
  tcase_add_test(tc_core, test_from_decimal_to_int_285);
  tcase_add_test(tc_core, test_from_decimal_to_int_286);
  tcase_add_test(tc_core, test_from_decimal_to_int_287);
  tcase_add_test(tc_core, test_from_decimal_to_int_288);
  tcase_add_test(tc_core, test_from_decimal_to_int_289);
  tcase_add_test(tc_core, test_from_decimal_to_int_290);
  tcase_add_test(tc_core, test_from_decimal_to_int_291);
  tcase_add_test(tc_core, test_from_decimal_to_int_292);
  tcase_add_test(tc_core, test_from_decimal_to_int_293);
  tcase_add_test(tc_core, test_from_decimal_to_int_294);
  tcase_add_test(tc_core, test_from_decimal_to_int_295);
  tcase_add_test(tc_core, test_from_decimal_to_int_296);
  tcase_add_test(tc_core, test_from_decimal_to_int_297);
  tcase_add_test(tc_core, test_from_decimal_to_int_298);
  tcase_add_test(tc_core, test_from_decimal_to_int_299);
  tcase_add_test(tc_core, test_from_decimal_to_int_300);
  tcase_add_test(tc_core, test_from_decimal_to_int_301);
  tcase_add_test(tc_core, test_from_decimal_to_int_302);
  tcase_add_test(tc_core, test_from_decimal_to_int_303);
  tcase_add_test(tc_core, test_from_decimal_to_int_304);
  tcase_add_test(tc_core, test_from_decimal_to_int_305);
  tcase_add_test(tc_core, test_from_decimal_to_int_306);
  tcase_add_test(tc_core, test_from_decimal_to_int_307);
  tcase_add_test(tc_core, test_from_decimal_to_int_308);
  tcase_add_test(tc_core, test_from_decimal_to_int_309);
  tcase_add_test(tc_core, test_from_decimal_to_int_310);
  tcase_add_test(tc_core, test_from_decimal_to_int_311);
  tcase_add_test(tc_core, test_from_decimal_to_int_312);
  tcase_add_test(tc_core, test_from_decimal_to_int_313);
  tcase_add_test(tc_core, test_from_decimal_to_int_314);
  tcase_add_test(tc_core, test_from_decimal_to_int_315);
  tcase_add_test(tc_core, test_from_decimal_to_int_316);
  tcase_add_test(tc_core, test_from_decimal_to_int_317);
  tcase_add_test(tc_core, test_from_decimal_to_int_318);
  tcase_add_test(tc_core, test_from_decimal_to_int_319);
  tcase_add_test(tc_core, test_from_decimal_to_int_320);
  tcase_add_test(tc_core, test_from_decimal_to_int_321);
  tcase_add_test(tc_core, test_from_decimal_to_int_322);
  tcase_add_test(tc_core, test_from_decimal_to_int_323);
  tcase_add_test(tc_core, test_from_decimal_to_int_324);
  tcase_add_test(tc_core, test_from_decimal_to_int_325);
  tcase_add_test(tc_core, test_from_decimal_to_int_326);
  tcase_add_test(tc_core, test_from_decimal_to_int_327);
  tcase_add_test(tc_core, test_from_decimal_to_int_328);
  tcase_add_test(tc_core, test_from_decimal_to_int_329);
  tcase_add_test(tc_core, test_from_decimal_to_int_330);
  tcase_add_test(tc_core, test_from_decimal_to_int_331);
  tcase_add_test(tc_core, test_from_decimal_to_int_332);
  tcase_add_test(tc_core, test_from_decimal_to_int_333);
  tcase_add_test(tc_core, test_from_decimal_to_int_334);
  tcase_add_test(tc_core, test_from_decimal_to_int_335);
  tcase_add_test(tc_core, test_from_decimal_to_int_336);
  tcase_add_test(tc_core, test_from_decimal_to_int_337);
  tcase_add_test(tc_core, test_from_decimal_to_int_338);
  tcase_add_test(tc_core, test_from_decimal_to_int_339);
  tcase_add_test(tc_core, test_from_decimal_to_int_340);
  tcase_add_test(tc_core, test_from_decimal_to_int_341);
  tcase_add_test(tc_core, test_from_decimal_to_int_342);
  tcase_add_test(tc_core, test_from_decimal_to_int_343);
  tcase_add_test(tc_core, test_from_decimal_to_int_344);
  tcase_add_test(tc_core, test_from_decimal_to_int_345);
  tcase_add_test(tc_core, test_from_decimal_to_int_346);
  tcase_add_test(tc_core, test_from_decimal_to_int_347);
  tcase_add_test(tc_core, test_from_decimal_to_int_348);
  tcase_add_test(tc_core, test_from_decimal_to_int_349);
  tcase_add_test(tc_core, test_from_decimal_to_int_350);
  tcase_add_test(tc_core, test_from_decimal_to_int_351);
  tcase_add_test(tc_core, test_from_decimal_to_int_352);
  tcase_add_test(tc_core, test_from_decimal_to_int_353);
  tcase_add_test(tc_core, test_from_decimal_to_int_354);
  tcase_add_test(tc_core, test_from_decimal_to_int_355);
  tcase_add_test(tc_core, test_from_decimal_to_int_356);
  tcase_add_test(tc_core, test_from_decimal_to_int_357);
  tcase_add_test(tc_core, test_from_decimal_to_int_358);
  tcase_add_test(tc_core, test_from_decimal_to_int_359);
  tcase_add_test(tc_core, test_from_decimal_to_int_360);
  tcase_add_test(tc_core, test_from_decimal_to_int_361);
  tcase_add_test(tc_core, test_from_decimal_to_int_362);
  tcase_add_test(tc_core, test_from_decimal_to_int_363);
  tcase_add_test(tc_core, test_from_decimal_to_int_364);
  tcase_add_test(tc_core, test_from_decimal_to_int_365);
  tcase_add_test(tc_core, test_from_decimal_to_int_366);
  tcase_add_test(tc_core, test_from_decimal_to_int_367);
  tcase_add_test(tc_core, test_from_decimal_to_int_368);
  tcase_add_test(tc_core, test_from_decimal_to_int_369);
  tcase_add_test(tc_core, test_from_decimal_to_int_370);
  tcase_add_test(tc_core, test_from_decimal_to_int_371);
  tcase_add_test(tc_core, test_from_decimal_to_int_372);
  tcase_add_test(tc_core, test_from_decimal_to_int_373);
  tcase_add_test(tc_core, test_from_decimal_to_int_374);
  tcase_add_test(tc_core, test_from_decimal_to_int_375);
  tcase_add_test(tc_core, test_from_decimal_to_int_376);
  tcase_add_test(tc_core, test_from_decimal_to_int_377);
  tcase_add_test(tc_core, test_from_decimal_to_int_378);
  tcase_add_test(tc_core, test_from_decimal_to_int_379);
  tcase_add_test(tc_core, test_from_decimal_to_int_380);
  tcase_add_test(tc_core, test_from_decimal_to_int_381);
  tcase_add_test(tc_core, test_from_decimal_to_int_382);
  tcase_add_test(tc_core, test_from_decimal_to_int_383);
  tcase_add_test(tc_core, test_from_decimal_to_int_384);
  // tcase_add_test(tc_core, test_from_decimal_to_int_385);
  // tcase_add_test(tc_core, test_from_decimal_to_int_386);
  // tcase_add_test(tc_core, test_from_decimal_to_int_387);
  tcase_add_test(tc_core, test_from_decimal_to_int_388);
  tcase_add_test(tc_core, test_from_decimal_to_int_389);
  tcase_add_test(tc_core, test_from_decimal_to_int_390);
  tcase_add_test(tc_core, test_from_decimal_to_int_391);
  tcase_add_test(tc_core, test_from_decimal_to_int_392);
  tcase_add_test(tc_core, test_from_decimal_to_int_393);
  tcase_add_test(tc_core, test_from_decimal_to_int_394);
  tcase_add_test(tc_core, test_from_decimal_to_int_395);
  tcase_add_test(tc_core, test_from_decimal_to_int_396);
  tcase_add_test(tc_core, test_from_decimal_to_int_397);
  tcase_add_test(tc_core, test_from_decimal_to_int_398);
  tcase_add_test(tc_core, test_from_decimal_to_int_399);
  tcase_add_test(tc_core, test_from_decimal_to_int_400);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *from_decimal_to_int_suite_2(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_int_2" NOCOLOR);
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_from_decimal_to_int_401);
  tcase_add_test(tc_core, test_from_decimal_to_int_402);
  tcase_add_test(tc_core, test_from_decimal_to_int_403);
  tcase_add_test(tc_core, test_from_decimal_to_int_404);
  tcase_add_test(tc_core, test_from_decimal_to_int_405);
  tcase_add_test(tc_core, test_from_decimal_to_int_406);
  tcase_add_test(tc_core, test_from_decimal_to_int_407);
  tcase_add_test(tc_core, test_from_decimal_to_int_408);
  tcase_add_test(tc_core, test_from_decimal_to_int_409);
  tcase_add_test(tc_core, test_from_decimal_to_int_410);
  tcase_add_test(tc_core, test_from_decimal_to_int_411);
  tcase_add_test(tc_core, test_from_decimal_to_int_412);
  tcase_add_test(tc_core, test_from_decimal_to_int_413);
  tcase_add_test(tc_core, test_from_decimal_to_int_414);
  tcase_add_test(tc_core, test_from_decimal_to_int_415);
  tcase_add_test(tc_core, test_from_decimal_to_int_416);
  tcase_add_test(tc_core, test_from_decimal_to_int_417);
  tcase_add_test(tc_core, test_from_decimal_to_int_418);
  tcase_add_test(tc_core, test_from_decimal_to_int_419);
  tcase_add_test(tc_core, test_from_decimal_to_int_420);
  tcase_add_test(tc_core, test_from_decimal_to_int_421);
  tcase_add_test(tc_core, test_from_decimal_to_int_422);
  tcase_add_test(tc_core, test_from_decimal_to_int_423);
  tcase_add_test(tc_core, test_from_decimal_to_int_424);
  tcase_add_test(tc_core, test_from_decimal_to_int_425);
  tcase_add_test(tc_core, test_from_decimal_to_int_426);
  tcase_add_test(tc_core, test_from_decimal_to_int_427);
  tcase_add_test(tc_core, test_from_decimal_to_int_428);
  tcase_add_test(tc_core, test_from_decimal_to_int_429);
  tcase_add_test(tc_core, test_from_decimal_to_int_430);
  tcase_add_test(tc_core, test_from_decimal_to_int_431);
  tcase_add_test(tc_core, test_from_decimal_to_int_432);
  tcase_add_test(tc_core, test_from_decimal_to_int_433);
  tcase_add_test(tc_core, test_from_decimal_to_int_434);
  tcase_add_test(tc_core, test_from_decimal_to_int_435);
  tcase_add_test(tc_core, test_from_decimal_to_int_436);
  tcase_add_test(tc_core, test_from_decimal_to_int_437);
  tcase_add_test(tc_core, test_from_decimal_to_int_438);
  tcase_add_test(tc_core, test_from_decimal_to_int_439);
  tcase_add_test(tc_core, test_from_decimal_to_int_440);
  tcase_add_test(tc_core, test_from_decimal_to_int_441);
  tcase_add_test(tc_core, test_from_decimal_to_int_442);
  tcase_add_test(tc_core, test_from_decimal_to_int_443);
  tcase_add_test(tc_core, test_from_decimal_to_int_444);
  tcase_add_test(tc_core, test_from_decimal_to_int_445);
  tcase_add_test(tc_core, test_from_decimal_to_int_446);
  tcase_add_test(tc_core, test_from_decimal_to_int_447);
  tcase_add_test(tc_core, test_from_decimal_to_int_448);
  tcase_add_test(tc_core, test_from_decimal_to_int_449);
  tcase_add_test(tc_core, test_from_decimal_to_int_450);
  tcase_add_test(tc_core, test_from_decimal_to_int_451);
  tcase_add_test(tc_core, test_from_decimal_to_int_452);
  tcase_add_test(tc_core, test_from_decimal_to_int_453);
  tcase_add_test(tc_core, test_from_decimal_to_int_454);
  tcase_add_test(tc_core, test_from_decimal_to_int_455);
  tcase_add_test(tc_core, test_from_decimal_to_int_456);
  tcase_add_test(tc_core, test_from_decimal_to_int_457);
  tcase_add_test(tc_core, test_from_decimal_to_int_458);
  tcase_add_test(tc_core, test_from_decimal_to_int_459);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *from_decimal_to_int_suite_3(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create(YELLOW "from_decimal_to_int_3" NOCOLOR);
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_1);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_2);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_3);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_4);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_5);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_6);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_7);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_8);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_9);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_10);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_11);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_12);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_13);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_14);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_15);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_16);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_17);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_18);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_19);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_20);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_21);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_22);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_23);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_24);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_25);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_26);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_27);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_28);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_29);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_30);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_31);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_32);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_33);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_34);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_35);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_36);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_37);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_38);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_39);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_40);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_41);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_42);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_43);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_44);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_45);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_46);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_47);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_48);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_49);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_50);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_51);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_52);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_53);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_54);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_55);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_56);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_57);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_58);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_59);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_60);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_61);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_62);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_63);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_64);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_65);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_66);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_67);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_68);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_69);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_70);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_71);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_72);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_73);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_74);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_75);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_76);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_77);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_78);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_79);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_80);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_81);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_82);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_83);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_84);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_85);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_86);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_87);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_88);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_89);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_90);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_91);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_92);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_93);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_94);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_95);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_96);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_97);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_98);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_99);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_100);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_101);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_102);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_103);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_104);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_105);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_106);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_107);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_108);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_109);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_110);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_111);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_112);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_113);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_114);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_115);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_116);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_117);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_118);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_119);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_120);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_121);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_122);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_123);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_124);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_125);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_126);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_127);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_128);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_129);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_130);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_131);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_132);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_133);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_134);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_135);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_136);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_137);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_138);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_139);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_140);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_141);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_142);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_143);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_144);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_145);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_146);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_147);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_148);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_149);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_150);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_151);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_152);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_153);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_154);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_155);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_156);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_157);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_158);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_159);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_160);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_161);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_162);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_163);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_164);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_165);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_166);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_167);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_168);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_169);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_170);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_171);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_172);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_173);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_174);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_175);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_176);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_177);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_178);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_179);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_180);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_181);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_182);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_183);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_184);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_185);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_186);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_187);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_188);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_189);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_190);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_191);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_192);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_193);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_194);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_195);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_196);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_197);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_198);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_199);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_200);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_201);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_202);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_203);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_204);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_205);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_206);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_207);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_208);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_209);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_210);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_211);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_212);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_213);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_214);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_215);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_216);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_217);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_218);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_219);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_220);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_221);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_222);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_223);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_224);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_225);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_226);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_227);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_228);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_229);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_230);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_231);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_232);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_233);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_234);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_235);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_236);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_237);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_238);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_239);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_240);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_241);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_242);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_243);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_244);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_245);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_246);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_247);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_248);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_249);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_250);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_251);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_252);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_253);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_254);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_255);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_256);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_257);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_258);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_259);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_260);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_261);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_262);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_263);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_264);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_265);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_266);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_267);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_268);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_269);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_270);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_271);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_272);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_273);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_274);
  tcase_add_test(tc_core, test_from_decimal_to_int_fail_275);

  suite_add_tcase(s, tc_core);
  return s;
}
