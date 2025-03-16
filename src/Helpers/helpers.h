    #ifndef HELPERS
    #define HELPERS

    #include "../s21_decimal.h"
        
    // Геттеры и сеттеры
    int s21_get_bit(s21_decimal decimal, int bit_position);
    int s21_set_bit(s21_decimal *decimal, int bit_position, int bit);
    int s21_get_exp(s21_decimal decimal); 
    int s21_get_sign(s21_decimal decimal);
    void s21_set_sign(s21_decimal *num, int sign);
    void s21_set_scale(s21_decimal *num, int scale);

    // Функции работы с битами
    int s21_bit_check(unsigned int num, unsigned int bit_num);
    int s21_bit_add(unsigned num, unsigned bit_num);
    void s21_shift_left(s21_decimal *num, int shift);

    // Арифметические операции
    int s21_compare(s21_decimal value_1, s21_decimal value_2);
    int s21_subtract(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
    void s21_divide_integer(s21_decimal dividend, s21_decimal divisor, s21_decimal *quotient, s21_decimal *remainder);
    void s21_multiply_by_10(s21_decimal *num);
    void s21_div_10(s21_decimal *num);
    int s21_if2_equal(s21_decimal a, s21_decimal b);

    // Вспомогательные функции
    s21_decimal s21_absoulute_decimal(s21_decimal num);
    void s21_combine_parts(s21_decimal integer_part, s21_decimal fractional_part, int scale, s21_decimal *result);
    void s21_normalize_scales(s21_decimal *num1, s21_decimal *num2);
    void s21_zero_decimal(s21_decimal *num);
    int s21_is_zero(s21_decimal num);
    int s21_is_overflow(s21_decimal *num);
    int s21_from_decimal_to_double(s21_decimal src, long double *dst);
    void s21_shift_right(s21_decimal *num, int shift);

    #endif
