#ifndef S21_DECIMAL
#define S21_DECIMAL
#include <limits.h>
#include <math.h>

typedef struct
{
 int bits[4];

} s21_decimal;


typedef struct 
{
  int bits[8];

} s21_big_decimal;


#include "Arithmetic/s21_arithmetic.h"
#include "Comparison/s21_comparison.h"
#include "Convertors/s21_convertors.h"
#include "Other_functions/s21_other_functions.h"
#include "Helpers/helpers.h"

#endif 
