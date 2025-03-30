#ifndef S21_DECIMAL_H_
#define S21_DECIMAL_H_

#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define S21_DECIMAL_OK 0
#define S21_DECIMAL_ERR 1
#define S21_DECIMAL_INF 2
#define S21_DECIMAL_NEG_INF 3
#define S21_DECIMAL_DIV_BY_ZERO 4
#define S21_DECIMAL_OVERFLOW 5
#define S21_DECIMAL_UNDEFINED 6

#define S21_MAX_SCALE 28
#define S21_MAX_BITS 96

typedef struct {
  unsigned bits[4]; // [0-2: мантисса, 3: знак и масштаб]
} s21_decimal;

// Вспомогательная структура для внутренних вычислений
typedef struct {
  unsigned bits[8]; // Расширенная мантисса (192 бита)
} s21_big_decimal;

#include "Arithmetic/s21_arithmetic.h"
#include "Comparison/s21_comparison.h"
#include "Convertors/s21_convertors.h"
#include "Other_functions/s21_other_functions.h"
#include "Helpers/helpers.h"

#endif 
