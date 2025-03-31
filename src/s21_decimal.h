#ifndef S21_DECIMAL_H_
#define S21_DECIMAL_H_
#define CALC_ERROR 1
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


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
