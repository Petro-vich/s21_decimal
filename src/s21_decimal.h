#ifndef S21_DECIMAL_H_
#define S21_DECIMAL_H_
#define CALC_ERROR 1
#define CALC_UNDEFINED 6 

#define S21_MAX_SCALE 28
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


typedef struct {
  unsigned bits[4]; 
} s21_decimal;


typedef struct {
  unsigned bits[8]; 
} s21_big_decimal;

#include "Arithmetic/s21_arithmetic.h"
#include "Comparison/s21_comparison.h"
#include "Convertors/s21_convertors.h"
#include "Other_functions/s21_other_functions.h"
#include "Helpers/helpers.h"

#endif 
