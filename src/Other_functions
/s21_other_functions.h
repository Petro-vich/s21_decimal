#ifndef S21_OTHER_FUNCTIONS
#define S21_OTHER_FUNCTIONS

#include "../s21_decimal.h"

#define OK 0
#define CONVERSION_ERROR 1

  int s21_floor(s21_decimal value, s21_decimal *result); // Округляет указанное Decimal число до ближайшего целого числа в сторону отрицательной бесконечности.	
  int s21_round(s21_decimal value, s21_decimal *result); // Округляет Decimal до ближайшего целого числа.	
  int s21_truncate(s21_decimal value, s21_decimal *result); // Возвращает целые цифры указанного Decimal числа; любые дробные цифры отбрасываются, включая конечные нули.	
  int s21_negate(s21_decimal value, s21_decimal *result); // Возвращает результат умножения указанного Decimal на -1.	

#endif S21_OTHER_FUNCTIONS