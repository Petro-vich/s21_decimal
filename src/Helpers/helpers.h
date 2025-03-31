    #ifndef HELPERS
    #define HELPERS

    #define S21_SIGN_MASK 0x80000000
    #define S21_SCALE_MASK 0x00FF0000 
    #define S21_SCALE_SHIFT 16
    #define S21_HIGH_BIT_UINT 0x80000000 
    #define S21_MAX_UINT 0xFFFFFFFF
    #define S21_MAX_SCALE 28
    #define S21_MAX_BITS 96
    #include "../s21_decimal.h"

    enum ERROR_CODES_HELPERS {HELPERS_OK, HELPERS_ERROR, CALC_OVERFLOW };
    // 0 — OK;
    // 1 — ошибка вычисления.

    
    // Геттеры и сеттеры
    int s21_is_zero(s21_decimal value);
    int s21_get_sign(s21_decimal value);
    int s21_get_scale(unsigned value) ;
    void s21_set_scale(unsigned *bits, unsigned scale);
    int s21_get_sign_big(s21_big_decimal b_value);
    int s21_is_zero_big(s21_big_decimal b_value);
    int s21_big_to_decimal(s21_big_decimal b_value, s21_decimal *result);
    int s21_get_bit_big(s21_big_decimal b_value, int bit_index);
    void s21_set_bit_big(s21_big_decimal *b_value, int bit_index, int bit_value);
    int s21_left_shift_big(s21_big_decimal *b_value, int shift);
    int s21_right_shift_big(s21_big_decimal *b_value, int shift);
    s21_big_decimal s21_add_big(s21_big_decimal value_1, s21_big_decimal value_2);
    s21_big_decimal s21_add_one_big(s21_big_decimal *result);
    s21_big_decimal s21_sub_big(s21_big_decimal value_1, s21_big_decimal value_2);
    int s21_compare_big_mantissa(s21_big_decimal b_val1, s21_big_decimal b_val2);
    s21_big_decimal s21_div_big_by_10(s21_big_decimal value,
                                      s21_big_decimal *result);
    int s21_get_highest_bit_big(s21_big_decimal b_value);
    void s21_normalize_big(s21_big_decimal *value_1, s21_big_decimal *value_2);
    s21_big_decimal s21_div_big_by_mantissa(s21_big_decimal b_dividend,
                                            s21_big_decimal b_divisor,
                                            s21_big_decimal *b_quotient);
    s21_big_decimal s21_decimal_to_big(s21_decimal value);
    s21_big_decimal s21_shift_big(s21_big_decimal a, int value, char vector);
    int s21_align_scales(s21_big_decimal *a, s21_big_decimal *b);
     int s21_check_sign(unsigned value);
    int s21_big_mantissa_compare(s21_big_decimal value_1, s21_big_decimal value_2);
     int s21_compare_decimals(s21_decimal value_1, s21_decimal value_2);
     void s21_set_sign(unsigned *value, int choice);
    s21_decimal s21_from_big_to_decimal(s21_big_decimal a);
    int s21_big_mantissa_is_greater_or_equal(s21_big_decimal value_1,
                                             s21_big_decimal value_2);
    int s21_check_bit(s21_big_decimal a, int num);
    int s21_big_mantissa_is_equal(s21_big_decimal value_1, s21_big_decimal value_2);
    int s21_big_mantissa_is_greater(s21_big_decimal value_1, s21_big_decimal value_2);
    s21_big_decimal s21_mul_big_by_10(s21_big_decimal value);
    int s21_is_overflow(s21_big_decimal a);
    int s21_get_width(s21_big_decimal value);
    s21_big_decimal s21_div_big(s21_big_decimal divisible, s21_big_decimal divider, s21_big_decimal *result);
    s21_big_decimal s21_mul_big_by_10(s21_big_decimal value);
    #endif
