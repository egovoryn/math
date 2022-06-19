#include "v1_math.h"

#include <check.h>
#include <math.h>

// long int v1_abs(int x)
int test_abs_1 = 486;
int test_abs_2 = -976244;
int test_abs_3 = v1_INT_MIN;
int test_abs_4 = v1_INT_MAX;
int test_abs_5 = 0;
int test_abs_6 = 0.0;
START_TEST(v1_abs_test_1) {
    ck_assert_int_eq(v1_abs(test_abs_1), abs(test_abs_1));
}
END_TEST

START_TEST(v1_abs_test_2) {
    ck_assert_int_eq(v1_abs(test_abs_2), abs(test_abs_2));
}
END_TEST

START_TEST(v1_abs_test_3) {
    ck_assert_int_eq(v1_abs(test_abs_3), abs(test_abs_3));
}
END_TEST

START_TEST(v1_abs_test_4) {
    ck_assert_int_eq(v1_abs(test_abs_4), abs(test_abs_4));
}
END_TEST

START_TEST(v1_abs_test_5) {
    ck_assert_int_eq(v1_abs(test_abs_5), abs(test_abs_5));
}

START_TEST(v1_abs_test_6) {
    ck_assert_int_eq(v1_abs(test_abs_6), abs(test_abs_6));
}
END_TEST

// long double v1_acos(double x)
double test_acos_1 = 0.0;  // + ZERO
double test_acos_2 = 0.0000000000000001;
double test_acos_3 = -0.0000000000000001;
double test_acos_4 = 0.000002;
double test_acos_5 = -0.000002;
double test_acos_6 = 0.00011111111111;
double test_acos_7 = -0.00011111111111;
double test_acos_8 = 0.23457357356757;
double test_acos_9 = -0.23457357356757;
double test_acos_10 = 0.899999999999999;
double test_acos_11 = -0.899999999999999;
double test_acos_12 = 0.999999999999999;
double test_acos_13 = -0.999999999999999;
double test_acos_14 = 1.0;
double test_acos_15 = -1.0;
double test_acos_16 = 1.11111111111111;
double test_acos_17 = -1.11111111111111;
double test_acos_18 = v1_DBL_MIN;
double test_acos_19 = v1_DBL_MAX;
double test_acos_20 = -0.0;        // - ZERO
double test_acos_21 = 1.0 / 0.0;   // + INFINITY
double test_acos_22 = -1.0 / 0.0;  // - INFINITY
double test_acos_23 = 0.0 / 0.0;   // + NAN
double test_acos_24 = -0.0 / 0.0;  // - NAN
START_TEST(v1_acos_test_1) {
    ck_assert_int_eq(v1_acos(test_acos_1), acos(test_acos_1));
}
END_TEST

START_TEST(v1_acos_test_2) {
    ck_assert_int_eq(v1_acos(test_acos_2), acos(test_acos_2));
}
END_TEST

START_TEST(v1_acos_test_3) {
    ck_assert_int_eq(v1_acos(test_acos_3), acos(test_acos_3));
}
END_TEST

START_TEST(v1_acos_test_4) {
    ck_assert_int_eq(v1_acos(test_acos_4), acos(test_acos_4));
}
END_TEST

START_TEST(v1_acos_test_5) {
    ck_assert_int_eq(v1_acos(test_acos_5), acos(test_acos_5));
}
END_TEST

START_TEST(v1_acos_test_6) {
    ck_assert_int_eq(v1_acos(test_acos_6), acos(test_acos_6));
}
END_TEST

START_TEST(v1_acos_test_7) {
    ck_assert_int_eq(v1_acos(test_acos_7), acos(test_acos_7));
}
END_TEST

START_TEST(v1_acos_test_8) {
    ck_assert_int_eq(v1_acos(test_acos_8), acos(test_acos_8));
}
END_TEST

START_TEST(v1_acos_test_9) {
    ck_assert_int_eq(v1_acos(test_acos_9), acos(test_acos_9));
}
END_TEST

START_TEST(v1_acos_test_10) {
    ck_assert_int_eq(v1_acos(test_acos_10), acos(test_acos_10));
}
END_TEST

START_TEST(v1_acos_test_11) {
    ck_assert_int_eq(
        v1_acos(test_acos_11), acos(test_acos_11));
}
END_TEST

START_TEST(v1_acos_test_12) {
    ck_assert_int_eq(v1_acos(test_acos_12), acos(test_acos_12));
}
END_TEST

START_TEST(v1_acos_test_13) {
    ck_assert_int_eq(v1_acos(test_acos_13), acos(test_acos_13));
}
END_TEST

START_TEST(v1_acos_test_14) {
    ck_assert_int_eq(v1_acos(test_acos_14), acos(test_acos_14));
}
END_TEST

START_TEST(v1_acos_test_15) {
    ck_assert_int_eq(v1_acos(test_acos_15), acos(test_acos_15));
}
END_TEST

START_TEST(v1_acos_test_16) {
    ck_assert_int_eq(v1_acos(test_acos_16), acos(test_acos_16));
}
END_TEST

START_TEST(v1_acos_test_17) {
    ck_assert_int_eq(v1_acos(test_acos_17), acos(test_acos_17));
}
END_TEST

START_TEST(v1_acos_test_18) {
    ck_assert_int_eq(v1_acos(test_acos_18), acos(test_acos_18));
}
END_TEST

START_TEST(v1_acos_test_19) {
    ck_assert_int_eq(v1_acos(test_acos_19), acos(test_acos_19));
}
END_TEST

START_TEST(v1_acos_test_20) {
    ck_assert_int_eq(v1_acos(test_acos_20), acos(test_acos_20));
}
END_TEST

START_TEST(v1_acos_test_21) {
    ck_assert_int_eq(v1_acos(test_acos_21), acos(test_acos_21));
}
END_TEST

START_TEST(v1_acos_test_22) {
    ck_assert_int_eq(v1_acos(test_acos_22), acos(test_acos_22));
}
END_TEST

START_TEST(v1_acos_test_23) {
    ck_assert_int_eq(v1_acos(test_acos_23), acos(test_acos_23));
}
END_TEST

START_TEST(v1_acos_test_24) {
    ck_assert_int_eq(v1_acos(test_acos_24), acos(test_acos_24));
}
END_TEST

// long double v1_asin(double x)
double test_asin_1 = 0.0;
double test_asin_2 = 0.0000000000000001;
double test_asin_3 = -0.0000000000000001;
double test_asin_4 = 0.000002;
double test_asin_5 = -0.000002;
double test_asin_6 = 0.00011111111111;
double test_asin_7 = -0.00011111111111;
double test_asin_8 = 0.23457357356757;
double test_asin_9 = -0.23457357356757;
double test_asin_10 = 0.899999999999999;
double test_asin_11 = -0.899999999999999;
double test_asin_12 = 0.999999999999999;
double test_asin_13 = -0.999999999999999;
double test_asin_14 = 1.0;
double test_asin_15 = -1.0;
double test_asin_16 = 1.11111111111111;
double test_asin_17 = -1.11111111111111;
double test_asin_18 = v1_DBL_MIN;
double test_asin_19 = v1_DBL_MAX;
double test_asin_20 = -0.0;        // - ZERO
double test_asin_21 = 1.0 / 0.0;   // + INFINITY
double test_asin_22 = -1.0 / 0.0;  // - INFINITY
double test_asin_23 = 0.0 / 0.0;   // + NAN
double test_asin_24 = -0.0 / 0.0;  // - NAN
START_TEST(v1_asin_test_1) {
    ck_assert_int_eq(v1_asin(test_asin_1), asin(test_asin_1));
}
END_TEST

START_TEST(v1_asin_test_2) {
    ck_assert_int_eq(v1_asin(test_asin_2), asin(test_asin_2));
}
END_TEST

START_TEST(v1_asin_test_3) {
    ck_assert_int_eq(v1_asin(test_asin_3), asin(test_asin_3));
}
END_TEST

START_TEST(v1_asin_test_4) {
    ck_assert_int_eq(v1_asin(test_asin_4), asin(test_asin_4));
}
END_TEST

START_TEST(v1_asin_test_5) {
    ck_assert_int_eq(v1_asin(test_asin_5), asin(test_asin_5));
}
END_TEST

START_TEST(v1_asin_test_6) {
    ck_assert_int_eq(v1_asin(test_asin_6), asin(test_asin_6));
}
END_TEST

START_TEST(v1_asin_test_7) {
    ck_assert_int_eq(v1_asin(test_asin_7), asin(test_asin_7));
}
END_TEST

START_TEST(v1_asin_test_8) {
    ck_assert_int_eq(v1_asin(test_asin_8), asin(test_asin_8));
}
END_TEST

START_TEST(v1_asin_test_9) {
    ck_assert_int_eq(v1_asin(test_asin_9), asin(test_asin_9));
}
END_TEST

START_TEST(v1_asin_test_10) {
    ck_assert_int_eq(v1_asin(test_asin_10), asin(test_asin_10));
}
END_TEST

START_TEST(v1_asin_test_11) {
    ck_assert_int_eq(v1_asin(test_asin_11), asin(test_asin_11));
}
END_TEST

START_TEST(v1_asin_test_12) {
    ck_assert_int_eq(v1_asin(test_asin_12), asin(test_asin_12));
}
END_TEST

START_TEST(v1_asin_test_13) {
    ck_assert_int_eq(v1_asin(test_asin_13), asin(test_asin_13));
}
END_TEST

START_TEST(v1_asin_test_14) {
    ck_assert_int_eq(v1_asin(test_asin_14), asin(test_asin_14));
}
END_TEST

START_TEST(v1_asin_test_15) {
    ck_assert_int_eq(v1_asin(test_asin_15), asin(test_asin_15));
}
END_TEST

START_TEST(v1_asin_test_16) {
    ck_assert_int_eq(v1_asin(test_asin_16), asin(test_asin_16));
}
END_TEST

START_TEST(v1_asin_test_17) {
    ck_assert_int_eq(v1_asin(test_asin_17), asin(test_asin_17));
}
END_TEST

START_TEST(v1_asin_test_18) {
    ck_assert_int_eq(v1_asin(test_asin_18), asin(test_asin_18));
}
END_TEST

START_TEST(v1_asin_test_19) {
    ck_assert_int_eq(v1_asin(test_asin_19), asin(test_asin_19));
}
END_TEST

START_TEST(v1_asin_test_20) {
    ck_assert_int_eq(v1_asin(test_asin_20), asin(test_asin_20));
}
END_TEST

START_TEST(v1_asin_test_21) {
    ck_assert_int_eq(v1_asin(test_asin_21), asin(test_asin_21));
}
END_TEST

START_TEST(v1_asin_test_22) {
    ck_assert_int_eq(v1_asin(test_asin_22), asin(test_asin_22));
}
END_TEST

START_TEST(v1_asin_test_23) {
    ck_assert_int_eq(v1_asin(test_asin_23), asin(test_asin_23));
}
END_TEST

START_TEST(v1_asin_test_24) {
    ck_assert_int_eq(v1_asin(test_asin_24), asin(test_asin_24));
}
END_TEST

// long double v1_atan(double x)
double test_atan_1 = 0.0;
double test_atan_2 = 0.0000000000000001;
double test_atan_3 = -0.0000000000000001;
double test_atan_4 = 0.000002;
double test_atan_5 = -0.000002;
double test_atan_6 = 0.00011111111111;
double test_atan_7 = -0.00011111111111;
double test_atan_8 = 0.23457357356757;
double test_atan_9 = -0.23457357356757;
double test_atan_10 = 0.899999999999999;
double test_atan_11 = -0.899999999999999;
double test_atan_12 = 0.999999999999999;
double test_atan_13 = -0.999999999999999;
double test_atan_14 = 1.0;
double test_atan_15 = -1.0;
double test_atan_16 = 1.11111111111111;
double test_atan_17 = -1.11111111111111;
double test_atan_18 = v1_DBL_MIN;
double test_atan_19 = v1_DBL_MAX;
double test_atan_20 = -0.0;        // - ZERO
double test_atan_21 = 1.0 / 0.0;   // + INFINITY
double test_atan_22 = -1.0 / 0.0;  // - INFINITY
double test_atan_23 = 0.0 / 0.0;   // + NAN
double test_atan_24 = -0.0 / 0.0;  // - NAN
double test_4_25 = 0.5375;

START_TEST(v1_atan_test_1) {
    ck_assert_int_eq(v1_atan(test_atan_1), atan(test_atan_1));
}
END_TEST

START_TEST(v1_atan_test_2) {
    ck_assert_int_eq(v1_atan(test_atan_2), atan(test_atan_2));
}
END_TEST

START_TEST(v1_atan_test_3) {
    ck_assert_int_eq(v1_atan(test_atan_3), atan(test_atan_3));
}
END_TEST

START_TEST(v1_atan_test_4) {
    ck_assert_int_eq(v1_atan(test_atan_4), atan(test_atan_4));
}
END_TEST

START_TEST(v1_atan_test_5) {
    ck_assert_int_eq(v1_atan(test_atan_5), atan(test_atan_5));
}
END_TEST

START_TEST(v1_atan_test_6) {
    ck_assert_int_eq(v1_atan(test_atan_6), atan(test_atan_6));
}
END_TEST

START_TEST(v1_atan_test_7) {
    ck_assert_int_eq(v1_atan(test_atan_7), atan(test_atan_7));
}
END_TEST

START_TEST(v1_atan_test_8) {
    ck_assert_int_eq(v1_atan(test_atan_8), atan(test_atan_8));
}
END_TEST

START_TEST(v1_atan_test_9) {
    ck_assert_int_eq(v1_atan(test_atan_9), atan(test_atan_9));
}
END_TEST

START_TEST(v1_atan_test_10) {
    ck_assert_int_eq(v1_atan(test_atan_10), atan(test_atan_10));
}
END_TEST

START_TEST(v1_atan_test_11) {
    ck_assert_int_eq(v1_atan(test_atan_11), atan(test_atan_11));
}
END_TEST

START_TEST(v1_atan_test_12) {
    ck_assert_int_eq(v1_atan(test_atan_12), atan(test_atan_12));
}
END_TEST

START_TEST(v1_atan_test_13) {
    ck_assert_int_eq(v1_atan(test_atan_13), atan(test_atan_13));
}
END_TEST

START_TEST(v1_atan_test_14) {
    ck_assert_int_eq(v1_atan(test_atan_14), atan(test_atan_14));
}
END_TEST

START_TEST(v1_atan_test_15) {
    ck_assert_int_eq(v1_atan(test_atan_15), atan(test_atan_15));
}
END_TEST

START_TEST(v1_atan_test_16) {
    ck_assert_int_eq(v1_atan(test_atan_16), atan(test_atan_16));
}
END_TEST

START_TEST(v1_atan_test_17) {
    ck_assert_int_eq(v1_atan(test_atan_17), atan(test_atan_17));
}
END_TEST

START_TEST(v1_atan_test_18) {
    ck_assert_int_eq(v1_atan(test_atan_18), atan(test_atan_18));
}
END_TEST

START_TEST(v1_atan_test_19) {
    ck_assert_int_eq(v1_atan(test_atan_19), atan(test_atan_19));
}
END_TEST

START_TEST(v1_atan_test_20) {
    ck_assert_int_eq(v1_atan(test_atan_20), atan(test_atan_20));
}
END_TEST

START_TEST(v1_atan_test_21) {
    ck_assert_int_eq(v1_atan(test_atan_21), atan(test_atan_21));
}
END_TEST

START_TEST(v1_atan_test_22) {
    ck_assert_int_eq(v1_atan(test_atan_22), atan(test_atan_22));
}
END_TEST

START_TEST(v1_atan_test_23) {
    ck_assert_int_eq(v1_atan(test_atan_23), atan(test_atan_23));
}
END_TEST

START_TEST(v1_atan_test_24) {
    ck_assert_int_eq(v1_atan(test_4_25), atan(test_4_25));
}
END_TEST

START_TEST(v1_atan_test_25) {
    ck_assert_int_eq(v1_atan(test_atan_24), atan(test_atan_24));
}
END_TEST

// long double v1_ceil(double x)
double test_ceil_2 = 14566753.9656887748;
double test_ceil_3 = 1.79769313486231571E+308;
double test_ceil_4 = (double)0xffffffffffffffff;
double test_ceil_5 = (double)0xffffffffffffeeee;
double test_ceil_6 = (double)0xffffffffaaaaaaaa;
double test_ceil_7 = 18446744073709551615.0;
double test_ceil_8 = 9223372036854775807;
double test_ceil_9 = 922337203685475.1;
double test_ceil_10 = 3.0000000000000019;
double test_ceil_11 = 3.00000000000000019;
double test_ceil_12 = 3.00000000000000009;
double test_ceil_13 = 3.00000000000000001;
double test_ceil_14 = 3.0000000000000001;
double test_ceil_15 = 3.0;
double test_ceil_16 = 2.99999999999999999999;
double test_ceil_17 = 2.99999999999999989;
double test_ceil_18 = 2.99999999999999981;
double test_ceil_19 = 2.99999;
double test_ceil_20 = 2.1;
double test_ceil_21 = 2.0;
double test_ceil_22 = 1.99999999999999999999;
double test_ceil_23 = 1.99999999999999989;
double test_ceil_24 = 1.99999999999999981;
double test_ceil_25 = 1.9999999999999998;
double test_ceil_26 = 1.999999999999999;
double test_ceil_27 = 1.9;
double test_ceil_28 = 1.66666666666666666666;
double test_ceil_29 = 1.55555555555555555;
double test_ceil_30 = 1.44444444444444444;
double test_ceil_31 = 1.1111111111111111;
double test_ceil_32 = 1.0;
double test_ceil_33 = 0.999999999999999;
double test_ceil_34 = 0.99999999999999;
double test_ceil_35 = 0.66666;
double test_ceil_36 = 0.5;
double test_ceil_37 = 0.44444444;
double test_ceil_38 = 0.000002;
double test_ceil_39 = 0.0000000000000001;
double test_ceil_40 = 2.2250738585072014E-30;
double test_ceil_41 = 2.2250738585072014E-308;
double test_ceil_42 = +0.0;
double test_ceil_43 = +0.0 / 0.0;
double test_ceil_44 = -0.0 / 0.0;
double test_ceil_45 = -0.0;
double test_ceil_46 = -2.2250738585072014E-308;
double test_ceil_47 = -2.2250738585072014E-30;
double test_ceil_48 = -0.0000000000000001;
double test_ceil_49 = -0.000002;
double test_ceil_50 = -0.44444444;
double test_ceil_51 = -0.66666;
double test_ceil_52 = -0.999999999999999;
double test_ceil_53 = -0.99999999999999;
double test_ceil_54 = -0.99999999999999999;
double test_ceil_55 = -1.0;
double test_ceil_56 = -1.1111111111111111;
double test_ceil_57 = -1.44444444444444444;
double test_ceil_58 = -1.55555555555555555;
double test_ceil_59 = -1.55555555555555555;
double test_ceil_60 = -1.66666666666666666666;
double test_ceil_61 = -1.9;
double test_ceil_62 = -1.999999999999999;
double test_ceil_63 = -1.9999999999999998;
double test_ceil_64 = -1.99999999999999989;
double test_ceil_65 = -1.9999999999999999;
double test_ceil_66 = -1.99999999999999999999;
double test_ceil_67 = -2.0;
double test_ceil_68 = -2.1;
double test_ceil_69 = -2.99999;
double test_ceil_70 = -3.0;
double test_ceil_71 = -922337203685475.1;
double test_ceil_72 = -9223372036854775807;
double test_ceil_73 = -18446744073709551615.0;
double test_ceil_74 = ((double)0xffffffffaaaaaaaa * (-1));
double test_ceil_75 = ((double)0xffffffffffffeeee * (-1));
double test_ceil_76 = ((double)0xffffffffffffffff * (-1));
double test_ceil_77 = -1.79769313486231571E+308;
double test_ceil_78 = -2880023257.63625328;

START_TEST(v1_ceil_test_1) {
    ck_assert_int_eq(v1_ceil(test_ceil_2), ceil(test_ceil_2));
}
END_TEST

START_TEST(v1_ceil_test_2) {
    ck_assert_int_eq(v1_ceil(test_ceil_3), ceil(test_ceil_3));
}
END_TEST

START_TEST(v1_ceil_test_3) {
    ck_assert_int_eq(v1_ceil(test_ceil_4), ceil(test_ceil_4));
}
END_TEST

START_TEST(v1_ceil_test_4) {
    ck_assert_int_eq(v1_ceil(test_ceil_5), ceil(test_ceil_5));
}
END_TEST

START_TEST(v1_ceil_test_5) {
    ck_assert_int_eq(v1_ceil(test_ceil_6), ceil(test_ceil_6));
}
END_TEST

START_TEST(v1_ceil_test_6) {
    ck_assert_int_eq(v1_ceil(test_ceil_7), ceil(test_ceil_7));
}
END_TEST

START_TEST(v1_ceil_test_7) {
    ck_assert_int_eq(v1_ceil(test_ceil_8), ceil(test_ceil_8));
}
END_TEST

START_TEST(v1_ceil_test_8) {
    ck_assert_int_eq(v1_ceil(test_ceil_9), ceil(test_ceil_9));
}
END_TEST

START_TEST(v1_ceil_test_9) {
    ck_assert_int_eq(v1_ceil(test_ceil_10), ceil(test_ceil_10));
}
END_TEST

START_TEST(v1_ceil_test_10) {
    ck_assert_int_eq(v1_ceil(test_ceil_11), ceil(test_ceil_11));
}
END_TEST

START_TEST(v1_ceil_test_11) {
    ck_assert_int_eq(v1_ceil(test_ceil_12), ceil(test_ceil_12));
}
END_TEST

START_TEST(v1_ceil_test_12) {
    ck_assert_int_eq(v1_ceil(test_ceil_13), ceil(test_ceil_13));
}
END_TEST

START_TEST(v1_ceil_test_13) {
    ck_assert_int_eq(v1_ceil(test_ceil_14), ceil(test_ceil_14));
}
END_TEST

START_TEST(v1_ceil_test_14) {
    ck_assert_int_eq(v1_ceil(test_ceil_15), ceil(test_ceil_15));
}
END_TEST

START_TEST(v1_ceil_test_16) {
    ck_assert_int_eq(v1_ceil(test_ceil_16), ceil(test_ceil_16));
}
END_TEST

START_TEST(v1_ceil_test_17) {
    ck_assert_int_eq(v1_ceil(test_ceil_17), ceil(test_ceil_17));
}
END_TEST

START_TEST(v1_ceil_test_18) {
    ck_assert_int_eq(v1_ceil(test_ceil_18), ceil(test_ceil_18));
}
END_TEST

START_TEST(v1_ceil_test_19) {
    ck_assert_int_eq(v1_ceil(test_ceil_19), ceil(test_ceil_19));
}
END_TEST

START_TEST(v1_ceil_test_20) {
    ck_assert_int_eq(v1_ceil(test_ceil_20), ceil(test_ceil_20));
}
END_TEST

START_TEST(v1_ceil_test_21) {
    ck_assert_int_eq(v1_ceil(test_ceil_21), ceil(test_ceil_21));
}
END_TEST

START_TEST(v1_ceil_test_22) {
    ck_assert_int_eq(v1_ceil(test_ceil_22), ceil(test_ceil_22));
}
END_TEST

START_TEST(v1_ceil_test_23) {
    ck_assert_int_eq(v1_ceil(test_ceil_23), ceil(test_ceil_23));
}
END_TEST

START_TEST(v1_ceil_test_24) {
    ck_assert_int_eq(v1_ceil(test_ceil_24), ceil(test_ceil_24));
}
END_TEST

START_TEST(v1_ceil_test_25) {
    ck_assert_int_eq(v1_ceil(test_ceil_25), ceil(test_ceil_25));
}
END_TEST

START_TEST(v1_ceil_test_26) {
    ck_assert_int_eq(v1_ceil(test_ceil_26), ceil(test_ceil_26));
}
END_TEST

START_TEST(v1_ceil_test_27) {
    ck_assert_int_eq(v1_ceil(test_ceil_27), ceil(test_ceil_27));
}
END_TEST

START_TEST(v1_ceil_test_28) {
    ck_assert_int_eq(v1_ceil(test_ceil_28), ceil(test_ceil_28));
}
END_TEST

START_TEST(v1_ceil_test_29) {
    ck_assert_int_eq(v1_ceil(test_ceil_29), ceil(test_ceil_29));
}
END_TEST

START_TEST(v1_ceil_test_30) {
    ck_assert_int_eq(v1_ceil(test_ceil_30), ceil(test_ceil_30));
}
END_TEST

START_TEST(v1_ceil_test_31) {
    ck_assert_int_eq(v1_ceil(test_ceil_31), ceil(test_ceil_31));
}
END_TEST

START_TEST(v1_ceil_test_32) {
    ck_assert_int_eq(v1_ceil(test_ceil_32), ceil(test_ceil_32));
}
END_TEST

START_TEST(v1_ceil_test_33) {
    ck_assert_int_eq(v1_ceil(test_ceil_33), ceil(test_ceil_33));
}
END_TEST

START_TEST(v1_ceil_test_34) {
    ck_assert_int_eq(v1_ceil(test_ceil_34), ceil(test_ceil_34));
}
END_TEST

START_TEST(v1_ceil_test_35) {
    ck_assert_int_eq(v1_ceil(test_ceil_35), ceil(test_ceil_35));
}
END_TEST

START_TEST(v1_ceil_test_36) {
    ck_assert_int_eq(v1_ceil(test_ceil_36), ceil(test_ceil_36));
}
END_TEST

START_TEST(v1_ceil_test_37) {
    ck_assert_int_eq(v1_ceil(test_ceil_37), ceil(test_ceil_37));
}
END_TEST

START_TEST(v1_ceil_test_38) {
    ck_assert_int_eq(v1_ceil(test_ceil_38), ceil(test_ceil_38));
}
END_TEST

START_TEST(v1_ceil_test_39) {
    ck_assert_int_eq(v1_ceil(test_ceil_39), ceil(test_ceil_39));
}
END_TEST

START_TEST(v1_ceil_test_40) {
    ck_assert_int_eq(v1_ceil(test_ceil_40), ceil(test_ceil_40));
}
END_TEST

START_TEST(v1_ceil_test_41) {
    ck_assert_int_eq(v1_ceil(test_ceil_41), ceil(test_ceil_41));
}
END_TEST

START_TEST(v1_ceil_test_42) {
    ck_assert_int_eq(v1_ceil(test_ceil_42), ceil(test_ceil_42));
}
END_TEST

START_TEST(v1_ceil_test_43) {
    ck_assert_int_eq(v1_ceil(test_ceil_43), ceil(test_ceil_43));
}
END_TEST

START_TEST(v1_ceil_test_44) {
    ck_assert_int_eq(v1_ceil(test_ceil_44), ceil(test_ceil_44));
}
END_TEST

START_TEST(v1_ceil_test_45) {
    ck_assert_int_eq(v1_ceil(test_ceil_45), ceil(test_ceil_45));
}
END_TEST

START_TEST(v1_ceil_test_46) {
    ck_assert_int_eq(v1_ceil(test_ceil_46), ceil(test_ceil_46));
}
END_TEST

START_TEST(v1_ceil_test_47) {
    ck_assert_int_eq(v1_ceil(test_ceil_47), ceil(test_ceil_47));
}
END_TEST

START_TEST(v1_ceil_test_48) {
    ck_assert_int_eq(v1_ceil(test_ceil_48), ceil(test_ceil_48));
}
END_TEST

START_TEST(v1_ceil_test_49) {
    ck_assert_int_eq(v1_ceil(test_ceil_49), ceil(test_ceil_49));
}
END_TEST

START_TEST(v1_ceil_test_50) {
    ck_assert_int_eq(v1_ceil(test_ceil_50), ceil(test_ceil_50));
}
END_TEST

START_TEST(v1_ceil_test_51) {
    ck_assert_int_eq(v1_ceil(test_ceil_51), ceil(test_ceil_51));
}
END_TEST

START_TEST(v1_ceil_test_52) {
    ck_assert_int_eq(v1_ceil(test_ceil_52), ceil(test_ceil_52));
}
END_TEST

START_TEST(v1_ceil_test_53) {
    ck_assert_int_eq(v1_ceil(test_ceil_53), ceil(test_ceil_53));
}
END_TEST

START_TEST(v1_ceil_test_54) {
    ck_assert_int_eq(v1_ceil(test_ceil_54), ceil(test_ceil_54));
}
END_TEST

START_TEST(v1_ceil_test_55) {
    ck_assert_int_eq(v1_ceil(test_ceil_55), ceil(test_ceil_55));
}
END_TEST

START_TEST(v1_ceil_test_56) {
    ck_assert_int_eq(v1_ceil(test_ceil_56), ceil(test_ceil_56));
}
END_TEST

START_TEST(v1_ceil_test_57) {
    ck_assert_int_eq(v1_ceil(test_ceil_57), ceil(test_ceil_57));
}
END_TEST

START_TEST(v1_ceil_test_58) {
    ck_assert_int_eq(v1_ceil(test_ceil_58), ceil(test_ceil_58));
}
END_TEST

START_TEST(v1_ceil_test_59) {
    ck_assert_int_eq(v1_ceil(test_ceil_59), ceil(test_ceil_59));
}
END_TEST

START_TEST(v1_ceil_test_60) {
    ck_assert_int_eq(v1_ceil(test_ceil_60), ceil(test_ceil_60));
}
END_TEST

START_TEST(v1_ceil_test_61) {
    ck_assert_int_eq(v1_ceil(test_ceil_61), ceil(test_ceil_61));
}
END_TEST

START_TEST(v1_ceil_test_62) {
    ck_assert_int_eq(v1_ceil(test_ceil_62), ceil(test_ceil_62));
}
END_TEST

START_TEST(v1_ceil_test_63) {
    ck_assert_int_eq(v1_ceil(test_ceil_63), ceil(test_ceil_63));
}
END_TEST

START_TEST(v1_ceil_test_64) {
    ck_assert_int_eq(v1_ceil(test_ceil_64), ceil(test_ceil_64));
}
END_TEST

START_TEST(v1_ceil_test_65) {
    ck_assert_int_eq(v1_ceil(test_ceil_65), ceil(test_ceil_65));
}
END_TEST

START_TEST(v1_ceil_test_66) {
    ck_assert_int_eq(v1_ceil(test_ceil_66), ceil(test_ceil_66));
}
END_TEST

START_TEST(v1_ceil_test_67) {
    ck_assert_int_eq(v1_ceil(test_ceil_67), ceil(test_ceil_67));
}
END_TEST

START_TEST(v1_ceil_test_68) {
    ck_assert_int_eq(v1_ceil(test_ceil_68), ceil(test_ceil_68));
}
END_TEST

START_TEST(v1_ceil_test_69) {
    ck_assert_int_eq(v1_ceil(test_ceil_69), ceil(test_ceil_69));
}
END_TEST

START_TEST(v1_ceil_test_70) {
    ck_assert_int_eq(v1_ceil(test_ceil_70), ceil(test_ceil_70));
}
END_TEST

START_TEST(v1_ceil_test_71) {
    ck_assert_int_eq(v1_ceil(test_ceil_71), ceil(test_ceil_71));
}
END_TEST

START_TEST(v1_ceil_test_72) {
    ck_assert_int_eq(v1_ceil(test_ceil_72), ceil(test_ceil_72));
}
END_TEST

START_TEST(v1_ceil_test_73) {
    ck_assert_int_eq(v1_ceil(test_ceil_73), ceil(test_ceil_73));
}
END_TEST

START_TEST(v1_ceil_test_74) {
    ck_assert_int_eq(v1_ceil(test_ceil_74), ceil(test_ceil_74));
}
END_TEST

START_TEST(v1_ceil_test_75) {
    ck_assert_int_eq(v1_ceil(test_ceil_75), ceil(test_ceil_75));
}
END_TEST

START_TEST(v1_ceil_test_76) {
    ck_assert_int_eq(v1_ceil(test_ceil_76), ceil(test_ceil_76));
}
END_TEST

START_TEST(v1_ceil_test_77) {
    ck_assert_int_eq(v1_ceil(test_ceil_77), ceil(test_ceil_77));
}
END_TEST

START_TEST(v1_ceil_test_78) {
    ck_assert_int_eq(v1_ceil(test_ceil_78), ceil(test_ceil_78));
}
END_TEST

// v1 math function #6: long double cos(double x) - computes cosine
double test_cos_1 = 0.0;
double test_cos_2 = 0.0000000000000001;
double test_cos_3 = -0.0000000000000001;
double test_cos_4 = 0.000002;
double test_cos_5 = -0.000002;
double test_cos_6 = 0.00011111111111;
double test_cos_7 = -0.00011111111111;
double test_cos_8 = 0.23457357356757;
double test_cos_9 = -0.23457357356757;
double test_cos_10 = 0.899999999999999;
double test_cos_11 = -0.899999999999999;
double test_cos_12 = 0.999999999999999;
double test_cos_13 = -0.999999999999999;
double test_cos_14 = 1.0;
double test_cos_15 = -1.0;
double test_cos_16 = 1.11111111111111;
double test_cos_17 = -1.11111111111111;
double test_cos_18 = v1_DBL_MIN;
double test_cos_20 = -0.0;        // - ZERO
double test_cos_21 = 1.0 / 0.0;   // + INFINITY
double test_cos_22 = -1.0 / 0.0;  // - INFINITY
double test_cos_23 = 0.0 / 0.0;   // + NAN
double test_cos_24 = -0.0 / 0.0;  // - NAN
double test_cos_25 = 10.0;
double test_cos_26 = 30.0;
double test_cos_27 = 80.0;
double test_cos_28 = 89.0;
double test_cos_29 = 90.0;
double test_cos_30 = 120.0;
double test_cos_31 = 190.0;
double test_cos_32 = 1310.0;
double test_cos_33 = -190432.0;
double test_cos_34 = -13156700.0;
double test_cos_35 = 1.57079632679;
double test_cos_36 = -1.57079632679;
START_TEST(v1_cos_test_1) {
    ck_assert_int_eq(v1_cos(test_cos_1), cos(test_cos_1));
}
END_TEST

START_TEST(v1_cos_test_2) {
    ck_assert_int_eq(v1_cos(test_cos_2), cos(test_cos_2));
}
END_TEST

START_TEST(v1_cos_test_3) {
    ck_assert_int_eq(v1_cos(test_cos_3), cos(test_cos_3));
}
END_TEST

START_TEST(v1_cos_test_8) {
    ck_assert_int_eq(v1_cos(test_cos_8), cos(test_cos_8));
}
END_TEST

START_TEST(v1_cos_test_9) {
    ck_assert_int_eq(v1_cos(test_cos_9), cos(test_cos_9));
}
END_TEST

START_TEST(v1_cos_test_10) {
    ck_assert_int_eq(v1_cos(test_cos_10), cos(test_cos_10));
}
END_TEST

START_TEST(v1_cos_test_11) {
    ck_assert_int_eq(v1_cos(test_cos_12), cos(test_cos_11));
}
END_TEST

START_TEST(v1_cos_test_12) {
    ck_assert_int_eq(v1_cos(test_cos_12), cos(test_cos_12));
}
END_TEST

START_TEST(v1_cos_test_13) {
    ck_assert_int_eq(v1_cos(test_cos_13), cos(test_cos_13));
}
END_TEST

START_TEST(v1_cos_test_14) {
    ck_assert_int_eq(v1_cos(test_cos_14), cos(test_cos_14));
}
END_TEST

START_TEST(v1_cos_test_15) {
    ck_assert_int_eq(v1_cos(test_cos_15), cos(test_cos_15));
}
END_TEST

START_TEST(v1_cos_test_16) {
    ck_assert_int_eq(v1_cos(test_cos_16), cos(test_cos_16));
}
END_TEST

START_TEST(v1_cos_test_17) {
    ck_assert_int_eq(v1_cos(test_cos_17), cos(test_cos_17));
}
END_TEST

START_TEST(v1_cos_test_18) {
    ck_assert_int_eq(v1_cos(test_cos_18), cos(test_cos_18));
}
END_TEST

START_TEST(v1_cos_test_20) {
    ck_assert_int_eq(v1_cos(test_cos_20), cos(test_cos_20));
}
END_TEST

START_TEST(v1_cos_test_21) {
    ck_assert_int_eq(v1_cos(test_cos_21), cos(test_cos_21));
}
END_TEST

START_TEST(v1_cos_test_22) {
    ck_assert_int_eq(v1_cos(test_cos_22), cos(test_cos_22));
}
END_TEST

START_TEST(v1_cos_test_23) {
    ck_assert_int_eq(v1_cos(test_cos_23), cos(test_cos_23));
}
END_TEST

START_TEST(v1_cos_test_24) {
    ck_assert_int_eq(v1_cos(test_cos_24), cos(test_cos_24));
}
END_TEST

START_TEST(v1_cos_test_25) {
    ck_assert_int_eq(v1_cos(test_cos_25), cos(test_cos_25));
}
END_TEST

START_TEST(v1_cos_test_26) {
    ck_assert_int_eq(v1_cos(test_cos_26), cos(test_cos_26));
}
END_TEST

START_TEST(v1_cos_test_27) {
    ck_assert_int_eq(v1_cos(test_cos_27), cos(test_cos_27));
}
END_TEST

START_TEST(v1_cos_test_28) {
    ck_assert_int_eq(v1_cos(test_cos_28), cos(test_cos_28));
}
END_TEST

START_TEST(v1_cos_test_29) {
    ck_assert_int_eq(v1_cos(test_cos_29), cos(test_cos_29));
}
END_TEST

START_TEST(v1_cos_test_30) {
    ck_assert_int_eq(v1_cos(test_cos_30), cos(test_cos_30));
}
END_TEST

START_TEST(v1_cos_test_31) {
    ck_assert_int_eq(v1_cos(test_cos_31), cos(test_cos_31));
}
END_TEST

START_TEST(v1_cos_test_33) {
    ck_assert_int_eq(v1_cos(test_cos_33), cos(test_cos_33));
}
END_TEST

START_TEST(v1_cos_test_34) {
    ck_assert_int_eq(v1_cos(test_cos_33), cos(test_cos_33));
}
END_TEST

START_TEST(v1_cos_test_35) {
    ck_assert_int_eq(v1_cos(test_cos_33), cos(test_cos_33));
}
END_TEST

START_TEST(v1_cos_test_36) {
    ck_assert_int_eq(v1_cos(test_cos_34), cos(test_cos_34));
}
END_TEST

// long double v1_exp(double x)
double test_exp_1 = 3.0;
double test_exp_2 = 3.0;
double test_exp_3 = 7.0;
double test_exp_4 = 7.0;
double test_exp_5 = 100.0;
double test_exp_6 = 100.0;
double test_exp_7 = 0.0;
double test_exp_8 = 0.0;
double test_exp_9 = -3.0;
double test_exp_10 = -3.0;
double test_exp_11 = -300.0;
double test_exp_12 = -300.0;
double test_exp_13 = NAN;
double test_exp_14 = NAN;
double test_exp_17 = -INFINITY;
double test_exp_18 = -INFINITY;
double test_exp_19 = 0.0 / 0.0;
double test_exp_20 = 0.0 / 0.0;
double test_exp_23 = -1.0 / 0.0;
double test_exp_24 = -1.0 / 0.0;
double test_exp_25 = 711.0;
double test_exp_26 = 711.0;
double test_exp_27 = v1_INFINITY;
double test_exp_28 = v1_INFINITY;
START_TEST(v1_exp_test_1) {
    ck_assert_int_eq(v1_exp(test_exp_1), exp(test_exp_2));
}
END_TEST

START_TEST(v1_exp_test_2) {
    ck_assert_int_eq(v1_exp(test_exp_3), exp(test_exp_4));
}
END_TEST

START_TEST(v1_exp_test_3) {
    ck_assert_int_eq(v1_exp(test_exp_5), exp(test_exp_6));
}
END_TEST

START_TEST(v1_exp_test_4) {
    ck_assert_int_eq(v1_exp(test_exp_7), exp(test_exp_8));
}
END_TEST

START_TEST(v1_exp_test_5) {
    ck_assert_int_eq(v1_exp(test_exp_9), exp(test_exp_10));
}
END_TEST

START_TEST(v1_exp_test_6) {
    ck_assert_int_eq(v1_exp(test_exp_11), exp(test_exp_12));
}
END_TEST

START_TEST(v1_exp_test_7) {
    ck_assert_int_eq(v1_exp(test_exp_13), exp(test_exp_14));
}
END_TEST

START_TEST(v1_exp_test_8) {
    ck_assert_int_eq(v1_exp(test_exp_17), exp(test_exp_18));
}
END_TEST

START_TEST(v1_exp_test_9) {
    ck_assert_int_eq(v1_exp(test_exp_19), exp(test_exp_20));
}
END_TEST

START_TEST(v1_exp_test_10) {
    ck_assert_int_eq(v1_exp(test_exp_23), exp(test_exp_24));
}
END_TEST

START_TEST(v1_exp_test_11) {
    ck_assert_int_eq(v1_exp(test_exp_25), exp(test_exp_26));
}
END_TEST

START_TEST(v1_exp_test_12) {
    ck_assert_int_eq(v1_exp(-test_exp_25), exp(-test_exp_26));
}
END_TEST

START_TEST(v1_exp_test_13) {
    ck_assert_int_eq(v1_exp(test_exp_27), exp(test_exp_28));
}
END_TEST

START_TEST(v1_exp_test_14) {
    ck_assert_int_eq(v1_exp(test_exp_23), exp(test_exp_24));
}
END_TEST

// long double v1_fabs(double x)
double test_fabs_1 = -0.0;
double test_fabs_2 = 0.0;
double test_fabs_5 = 0.0 / 0.0;
double test_fabs_6 = -10.23456789123456;
double test_fabs_7 = v1_DBL_MIN;
double test_fabs_8 = v1_DBL_MAX;
double test_fabs_11 = NAN;
double test_fabs_12 = 0.0000000000000001;
double test_fabs_13 = 1.2341;
START_TEST(v1_fabs_test_1) {
    ck_assert_int_eq(v1_fabs(test_fabs_1), fabs(test_fabs_1));
}
END_TEST

START_TEST(v1_fabs_test_2) {
    ck_assert_int_eq(v1_fabs(test_fabs_2), fabs(test_fabs_2));
}
END_TEST

START_TEST(v1_fabs_test_3) {
    ck_assert_int_eq(v1_fabs(test_fabs_6), fabs(test_fabs_6));
}
END_TEST

START_TEST(v1_fabs_test_4) {
    ck_assert_int_eq(v1_fabs(test_fabs_7), fabs(test_fabs_7));
}
END_TEST

START_TEST(v1_fabs_test_5) {
    ck_assert_int_eq(v1_fabs(test_fabs_8), fabs(test_fabs_8));
}
END_TEST

START_TEST(v1_fabs_test_6) {
    ck_assert_int_eq(v1_fabs(test_fabs_11), fabs(test_fabs_11));
}
END_TEST

START_TEST(v1_fabs_test_7) {
    ck_assert_int_eq(v1_fabs(test_fabs_12), fabs(test_fabs_12));
}
END_TEST

START_TEST(v1_fabs_test_8) {
    ck_assert_int_eq(v1_fabs(test_fabs_13), fabs(test_fabs_13));
}
END_TEST

START_TEST(v1_fabs_test_9) {
    ck_assert_int_eq(v1_fabs(test_fabs_11), fabs(test_fabs_11));
}
END_TEST

START_TEST(v1_fabs_test_10) {
    ck_assert_int_eq(v1_fabs(test_fabs_12), fabs(test_fabs_12));
}
END_TEST

START_TEST(v1_fabs_test_11) {
    ck_assert_int_eq(v1_fabs(test_fabs_13), fabs(test_fabs_13));
}
END_TEST

// long double v1_floor(double x)
double test_floor_2 = 14566753.9656887748;
double test_floor_3 = 1.79769313486231571E+308;
double test_floor_4 = (double)0xffffffffffffffff;
double test_floor_5 = (double)0xffffffffffffeeee;
double test_floor_6 = (double)0xffffffffaaaaaaaa;
double test_floor_7 = 18446744073709551615.0;
double test_floor_8 = 9223372036854775807;
double test_floor_9 = 922337203685475.1;
double test_floor_10 = 3.0000000000000019;
double test_floor_11 = 3.00000000000000019;
double test_floor_12 = 3.00000000000000009;
double test_floor_13 = 3.00000000000000001;
double test_floor_14 = 3.0000000000000001;
double test_floor_15 = 3.0;
double test_floor_16 = 2.99999999999999999999;
double test_floor_17 = 2.99999999999999989;
double test_floor_18 = 2.99999999999999981;
double test_floor_19 = 2.99999;
double test_floor_20 = 2.1;
double test_floor_21 = 2.0;
double test_floor_22 = 1.99999999999999999999;
double test_floor_23 = 1.99999999999999989;
double test_floor_24 = 1.99999999999999981;
double test_floor_25 = 1.9999999999999998;
double test_floor_26 = 1.999999999999999;
double test_floor_27 = 1.9;
double test_floor_28 = 1.66666666666666666666;
double test_floor_29 = 1.55555555555555555;
double test_floor_30 = 1.44444444444444444;
double test_floor_31 = 1.1111111111111111;
double test_floor_32 = 1.0;
double test_floor_33 = 0.999999999999999;
double test_floor_34 = 0.99999999999999;
double test_floor_35 = 0.66666;
double test_floor_36 = 0.5;
double test_floor_37 = 0.44444444;
double test_floor_38 = 0.000002;
double test_floor_39 = 0.0000000000000001;
double test_floor_40 = 2.2250738585072014E-30;
double test_floor_41 = 2.2250738585072014E-308;
double test_floor_42 = +0.0;
double test_floor_43 = +0.0 / 0.0;
double test_floor_44 = -0.0 / 0.0;
double test_floor_45 = -0.0;
double test_floor_46 = -2.2250738585072014E-308;
double test_floor_47 = -2.2250738585072014E-30;
double test_floor_48 = -0.0000000000000001;
double test_floor_49 = -0.000002;
double test_floor_50 = -0.44444444;
double test_floor_51 = -0.66666;
double test_floor_52 = -0.999999999999999;
double test_floor_53 = -0.99999999999999;
double test_floor_54 = -0.99999999999999999;
double test_floor_55 = -1.0;
double test_floor_56 = -1.1111111111111111;
double test_floor_57 = -1.44444444444444444;
double test_floor_58 = -1.55555555555555555;
double test_floor_59 = -1.55555555555555555;
double test_floor_60 = -1.66666666666666666666;
double test_floor_61 = -1.9;
double test_floor_62 = -1.999999999999999;
double test_floor_63 = -1.9999999999999998;
double test_floor_64 = -1.99999999999999989;
double test_floor_65 = -1.9999999999999999;
double test_floor_66 = -1.99999999999999999999;
double test_floor_67 = -2.0;
double test_floor_68 = -2.1;
double test_floor_69 = -2.99999;
double test_floor_70 = -3.0;
double test_floor_71 = -922337203685475.1;
double test_floor_72 = -9223372036854775807;
double test_floor_73 = -18446744073709551615.0;
double test_floor_74 = ((double)0xffffffffaaaaaaaa * (-1));
double test_floor_75 = ((double)0xffffffffffffeeee * (-1));
double test_floor_76 = ((double)0xffffffffffffffff * (-1));
double test_floor_77 = -1.79769313486231571E+308;
double test_floor_78 = -2880023257.63625328;
START_TEST(v1_floor_test_2) {
    ck_assert_int_eq(v1_floor(test_floor_2), floor(test_floor_2));
}
END_TEST

START_TEST(v1_floor_test_3) {
    ck_assert_int_eq(v1_floor(test_floor_3), floor(test_floor_3));
}
END_TEST

START_TEST(v1_floor_test_4) {
    ck_assert_int_eq(v1_floor(test_floor_4), floor(test_floor_4));
}
END_TEST

START_TEST(v1_floor_test_5) {
    ck_assert_int_eq(v1_floor(test_floor_5), floor(test_floor_5));
}
END_TEST

START_TEST(v1_floor_test_6) {
    ck_assert_int_eq(v1_floor(test_floor_6), floor(test_floor_6));
}
END_TEST

START_TEST(v1_floor_test_7) {
    ck_assert_int_eq(v1_floor(test_floor_7), floor(test_floor_7));
}
END_TEST

START_TEST(v1_floor_test_8) {
    ck_assert_int_eq(v1_floor(test_floor_8), floor(test_floor_8));
}
END_TEST

START_TEST(v1_floor_test_9) {
    ck_assert_int_eq(v1_floor(test_floor_9), floor(test_floor_9));
}
END_TEST

START_TEST(v1_floor_test_10) {
    ck_assert_int_eq(v1_floor(test_floor_10), floor(test_floor_10));
}
END_TEST

START_TEST(v1_floor_test_11) {
    ck_assert_int_eq(v1_floor(test_floor_11), floor(test_floor_11));
}
END_TEST

START_TEST(v1_floor_test_12) {
    ck_assert_int_eq(v1_floor(test_floor_12), floor(test_floor_12));
}
END_TEST

START_TEST(v1_floor_test_13) {
    ck_assert_int_eq(v1_floor(test_floor_13), floor(test_floor_13));
}
END_TEST

START_TEST(v1_floor_test_14) {
    ck_assert_int_eq(v1_floor(test_floor_14), floor(test_floor_14));
}
END_TEST

START_TEST(v1_floor_test_15) {
    ck_assert_int_eq(v1_floor(test_floor_15), floor(test_floor_15));
}
END_TEST

START_TEST(v1_floor_test_16) {
    ck_assert_int_eq(v1_floor(test_floor_16), floor(test_floor_16));
}
END_TEST

START_TEST(v1_floor_test_17) {
    ck_assert_int_eq(v1_floor(test_floor_17), floor(test_floor_17));
}
END_TEST

START_TEST(v1_floor_test_18) {
    ck_assert_int_eq(v1_floor(test_floor_18), floor(test_floor_18));
}
END_TEST

START_TEST(v1_floor_test_19) {
    ck_assert_int_eq(v1_floor(test_floor_19), floor(test_floor_19));
}
END_TEST

START_TEST(v1_floor_test_20) {
    ck_assert_int_eq(v1_floor(test_floor_20), floor(test_floor_20));
}
END_TEST

START_TEST(v1_floor_test_21) {
    ck_assert_int_eq(v1_floor(test_floor_21), floor(test_floor_21));
}
END_TEST

START_TEST(v1_floor_test_22) {
    ck_assert_int_eq(v1_floor(test_floor_22), floor(test_floor_22));
}
END_TEST

START_TEST(v1_floor_test_23) {
    ck_assert_int_eq(v1_floor(test_floor_23), floor(test_floor_23));
}
END_TEST

START_TEST(v1_floor_test_24) {
    ck_assert_int_eq(v1_floor(test_floor_24), floor(test_floor_24));
}
END_TEST

START_TEST(v1_floor_test_25) {
    ck_assert_int_eq(v1_floor(test_floor_25), floor(test_floor_25));
}
END_TEST

START_TEST(v1_floor_test_26) {
    ck_assert_int_eq(v1_floor(test_floor_26), floor(test_floor_26));
}
END_TEST

START_TEST(v1_floor_test_27) {
    ck_assert_int_eq(v1_floor(test_floor_27), floor(test_floor_27));
}
END_TEST

START_TEST(v1_floor_test_28) {
    ck_assert_int_eq(v1_floor(test_floor_28), floor(test_floor_28));
}
END_TEST

START_TEST(v1_floor_test_29) {
    ck_assert_int_eq(v1_floor(test_floor_29), floor(test_floor_29));
}
END_TEST

START_TEST(v1_floor_test_30) {
    ck_assert_int_eq(v1_floor(test_floor_30), floor(test_floor_30));
}
END_TEST

START_TEST(v1_floor_test_31) {
    ck_assert_int_eq(v1_floor(test_floor_31), floor(test_floor_31));
}
END_TEST

START_TEST(v1_floor_test_32) {
    ck_assert_int_eq(v1_floor(test_floor_32), floor(test_floor_32));
}
END_TEST

START_TEST(v1_floor_test_33) {
    ck_assert_int_eq(v1_floor(test_floor_33), floor(test_floor_33));
}
END_TEST

START_TEST(v1_floor_test_34) {
    ck_assert_int_eq(v1_floor(test_floor_34), floor(test_floor_34));
}
END_TEST

START_TEST(v1_floor_test_35) {
    ck_assert_int_eq(v1_floor(test_floor_35), floor(test_floor_35));
}
END_TEST

START_TEST(v1_floor_test_36) {
    ck_assert_int_eq(v1_floor(test_floor_36), floor(test_floor_36));
}
END_TEST

START_TEST(v1_floor_test_37) {
    ck_assert_int_eq(v1_floor(test_floor_37), floor(test_floor_37));
}
END_TEST

START_TEST(v1_floor_test_38) {
    ck_assert_int_eq(v1_floor(test_floor_38), floor(test_floor_38));
}
END_TEST

START_TEST(v1_floor_test_39) {
    ck_assert_int_eq(v1_floor(test_floor_39), floor(test_floor_39));
}
END_TEST

START_TEST(v1_floor_test_40) {
    ck_assert_int_eq(v1_floor(test_floor_40), floor(test_floor_40));
}
END_TEST

START_TEST(v1_floor_test_41) {
    ck_assert_int_eq(v1_floor(test_floor_41), floor(test_floor_41));
}
END_TEST

START_TEST(v1_floor_test_42) {
    ck_assert_int_eq(v1_floor(test_floor_42), floor(test_floor_42));
}
END_TEST

START_TEST(v1_floor_test_43) {
    ck_assert_int_eq(v1_floor(test_floor_43), floor(test_floor_43));
}
END_TEST

START_TEST(v1_floor_test_44) {
    ck_assert_int_eq(v1_floor(test_floor_44), floor(test_floor_44));
}
END_TEST

START_TEST(v1_floor_test_45) {
    ck_assert_int_eq(v1_floor(test_floor_45), floor(test_floor_45));
}
END_TEST

START_TEST(v1_floor_test_46) {
    ck_assert_int_eq(v1_floor(test_floor_46), floor(test_floor_46));
}
END_TEST

START_TEST(v1_floor_test_47) {
    ck_assert_int_eq(v1_floor(test_floor_47), floor(test_floor_47));
}
END_TEST

START_TEST(v1_floor_test_48) {
    ck_assert_int_eq(v1_floor(test_floor_48), floor(test_floor_48));
}
END_TEST

START_TEST(v1_floor_test_49) {
    ck_assert_int_eq(v1_floor(test_floor_49), floor(test_floor_49));
}
END_TEST

START_TEST(v1_floor_test_50) {
    ck_assert_int_eq(v1_floor(test_floor_50), floor(test_floor_50));
}
END_TEST

START_TEST(v1_floor_test_51) {
    ck_assert_int_eq(v1_floor(test_floor_51), floor(test_floor_51));
}
END_TEST

START_TEST(v1_floor_test_52) {
    ck_assert_int_eq(v1_floor(test_floor_52), floor(test_floor_52));
}
END_TEST

START_TEST(v1_floor_test_53) {
    ck_assert_int_eq(v1_floor(test_floor_53), floor(test_floor_53));
}
END_TEST

START_TEST(v1_floor_test_54) {
    ck_assert_int_eq(v1_floor(test_floor_54), floor(test_floor_54));
}
END_TEST

START_TEST(v1_floor_test_55) {
    ck_assert_int_eq(v1_floor(test_floor_55), floor(test_floor_55));
}
END_TEST

START_TEST(v1_floor_test_56) {
    ck_assert_int_eq(v1_floor(test_floor_56), floor(test_floor_56));
}
END_TEST

START_TEST(v1_floor_test_57) {
    ck_assert_int_eq(v1_floor(test_floor_57), floor(test_floor_57));
}
END_TEST

START_TEST(v1_floor_test_58) {
    ck_assert_int_eq(v1_floor(test_floor_58), floor(test_floor_58));
}
END_TEST

START_TEST(v1_floor_test_59) {
    ck_assert_int_eq(v1_floor(test_floor_59), floor(test_floor_59));
}
END_TEST

START_TEST(v1_floor_test_60) {
    ck_assert_int_eq(v1_floor(test_floor_60), floor(test_floor_60));
}
END_TEST

START_TEST(v1_floor_test_61) {
    ck_assert_int_eq(v1_floor(test_floor_61), floor(test_floor_61));
}
END_TEST

START_TEST(v1_floor_test_62) {
    ck_assert_int_eq(v1_floor(test_floor_62), floor(test_floor_62));
}
END_TEST

START_TEST(v1_floor_test_63) {
    ck_assert_int_eq(v1_floor(test_floor_63), floor(test_floor_63));
}
END_TEST

START_TEST(v1_floor_test_64) {
    ck_assert_int_eq(v1_floor(test_floor_64), floor(test_floor_64));
}
END_TEST

START_TEST(v1_floor_test_65) {
    ck_assert_int_eq(v1_floor(test_floor_65), floor(test_floor_65));
}
END_TEST

START_TEST(v1_floor_test_66) {
    ck_assert_int_eq(v1_floor(test_floor_66), floor(test_floor_66));
}
END_TEST

START_TEST(v1_floor_test_67) {
    ck_assert_int_eq(v1_floor(test_floor_67), floor(test_floor_67));
}
END_TEST

START_TEST(v1_floor_test_68) {
    ck_assert_int_eq(v1_floor(test_floor_68), floor(test_floor_68));
}
END_TEST

START_TEST(v1_floor_test_69) {
    ck_assert_int_eq(v1_floor(test_floor_69), floor(test_floor_69));
}
END_TEST

START_TEST(v1_floor_test_70) {
    ck_assert_int_eq(v1_floor(test_floor_70), floor(test_floor_70));
}
END_TEST

START_TEST(v1_floor_test_71) {
    ck_assert_int_eq(v1_floor(test_floor_71), floor(test_floor_71));
}
END_TEST

START_TEST(v1_floor_test_72) {
    ck_assert_int_eq(v1_floor(test_floor_72), floor(test_floor_72));
}
END_TEST

START_TEST(v1_floor_test_73) {
    ck_assert_int_eq(v1_floor(test_floor_73), floor(test_floor_73));
}
END_TEST

START_TEST(v1_floor_test_74) {
    ck_assert_int_eq(v1_floor(test_floor_74), floor(test_floor_74));
}
END_TEST

START_TEST(v1_floor_test_75) {
    ck_assert_int_eq(v1_floor(test_floor_75), floor(test_floor_75));
}
END_TEST

START_TEST(v1_floor_test_76) {
    ck_assert_int_eq(v1_floor(test_floor_76), floor(test_floor_76));
}
END_TEST

START_TEST(v1_floor_test_77) {
    ck_assert_int_eq(v1_floor(test_floor_77), floor(test_floor_77));
}
END_TEST

START_TEST(v1_floor_test_78) {
    ck_assert_int_eq(v1_floor(test_floor_78), floor(test_floor_78));
}
END_TEST

// long double v1_fmod(double x, double y)
double test_fmod_1 = -1.0;
double test_fmod_2 = -0.23457357356757;
double test_fmod_3 = -0.999999999999999;
double test_fmod_4 = 0.01232456789;
double test_fmod_5 = 0.23457357356757;
double test_fmod_6 = 0.899999999999999;
double test_fmod_7 = 0.999999999999999;
double test_fmod_8 = 1.0;
double test_fmod_9 = 1.11111111111111;
double test_fmod_10 = -1.11111111111111;
double test_fmod_11 = 0.0 / 0.0;
double test_fmod_12 = 1.0;
double test_fmod_13 = 1.0 / 0.0;
double test_fmod_14 = 2.0;
double test_fmod_15 = -1.0 / 0.0;
double test_fmod_16 = 2.0;
double test_fmod_17 = NAN;
double test_fmod_18 = INFINITY;
double test_fmod_19 = +0.0;
double test_fmod_20 = 1.0 / 0.0;
double test_fmod_21 = 0.99;
double test_fmod_22 = 0.0;
double test_fmod_23 = 999999999;
double test_fmod_24 = 500000000;
double test_fmod_25 = 50000.543212;
double test_fmod_26 = v1_DBL_MIN;
double test_fmod_27 = v1_DBL_MAX;

START_TEST(v1_fmod_test_1) {
    ck_assert_int_eq(v1_fmod(test_fmod_1, test_fmod_2), fmod(test_fmod_1, test_fmod_2));
}
END_TEST

START_TEST(v1_fmod_test_2) {
    ck_assert_int_eq(v1_fmod(test_fmod_3, test_fmod_4), fmod(test_fmod_3, test_fmod_4));
}
END_TEST

START_TEST(v1_fmod_test_3) {
    ck_assert_int_eq(v1_fmod(test_fmod_5, test_fmod_6), fmod(test_fmod_5, test_fmod_6));
}
END_TEST

START_TEST(v1_fmod_test_4) {
    ck_assert_int_eq(v1_fmod(test_fmod_7, test_fmod_8), fmod(test_fmod_7, test_fmod_8));
}
END_TEST

START_TEST(v1_fmod_test_5) {
    ck_assert_int_eq(v1_fmod(test_fmod_9, test_fmod_10),
                     fmod(test_fmod_9, test_fmod_10));
}
END_TEST

START_TEST(v1_fmod_test_6) {
    ck_assert_int_eq(v1_fmod(test_fmod_11, test_fmod_12),
                     fmod(test_fmod_11, test_fmod_12));
}
END_TEST

START_TEST(v1_fmod_test_7) {
    ck_assert_int_eq(v1_fmod(test_fmod_13, test_fmod_14),
                     fmod(test_fmod_13, test_fmod_14));
}
END_TEST

START_TEST(v1_fmod_test_8) {
    ck_assert_int_eq(v1_fmod(test_fmod_15, test_fmod_16),
                     fmod(test_fmod_15, test_fmod_16));
}
END_TEST

START_TEST(v1_fmod_test_9) {
    ck_assert_int_eq(v1_fmod(test_fmod_17, test_fmod_17),
                     fmod(test_fmod_17, test_fmod_17));
}
END_TEST

START_TEST(v1_fmod_test_10) {
    ck_assert_int_eq(v1_fmod(test_fmod_18, test_fmod_18),
                     fmod(test_fmod_18, test_fmod_18));
}
END_TEST

START_TEST(v1_fmod_test_11) {
    ck_assert_int_eq(v1_fmod(test_fmod_19, test_fmod_20),
                     fmod(test_fmod_19, test_fmod_20));
}
END_TEST

START_TEST(v1_fmod_test_12) {
    ck_assert_int_eq(v1_fmod(test_fmod_21, test_fmod_22),
                     fmod(test_fmod_21, test_fmod_22));
}
END_TEST

START_TEST(v1_fmod_test_13) {
    ck_assert_int_eq(v1_fmod(test_fmod_17, test_fmod_8),
                     fmod(test_fmod_17, test_fmod_8));
}
END_TEST

START_TEST(v1_fmod_test_14) {
    ck_assert_int_eq(v1_fmod(test_fmod_8, test_fmod_17),
                     fmod(test_fmod_8, test_fmod_17));
}
END_TEST

START_TEST(v1_fmod_test_15) {
    ck_assert_int_eq(v1_fmod(test_fmod_23, test_fmod_24),
                     fmod(test_fmod_23, test_fmod_24));
}
END_TEST

START_TEST(v1_fmod_test_16) {
    ck_assert_int_eq(v1_fmod(test_fmod_23, test_fmod_25),
                     fmod(test_fmod_23, test_fmod_25));
}
END_TEST

START_TEST(v1_fmod_test_17) {
    ck_assert_int_eq(v1_fmod(test_fmod_25, test_fmod_23),
                     fmod(test_fmod_25, test_fmod_23));
}
END_TEST

START_TEST(v1_fmod_test_18) {
    ck_assert_int_eq(v1_fmod(test_fmod_26, test_fmod_27),
                     fmod(test_fmod_26, test_fmod_27));
}
END_TEST

// long double v1_log(double x)
double test_log_1 = -1.0;
double test_log_2 = -0.23457357356757;
double test_log_3 = -0.999999999999999;
double test_log_4 = 0.01232456789;
double test_log_5 = 0.23457357356757;
double test_log_6 = 0.899999999999999;
double test_log_7 = 0.999999999999999;
double test_log_8 = 1.0;
double test_log_9 = 1.11111111111111;
double test_log_10 = -1.11111111111111;
double test_log_11 = 0.0 / 0.0;
double test_log_12 = -0.0 / 0.0;
double test_log_14 = -1.0 / 0.0;
double test_log_18 = NAN;
double test_log_20 = 1.0;
double test_log_21 = -INFINITY;
double test_log_22 = -NAN;
double test_log_23 = v1_DBL_MIN;
double test_log_24 = v1_DBL_MAX;
double test_log_25 = v1_INFINITY;
double test_log_26 = 0.0;

START_TEST(v1_log_test_1) {
    ck_assert_int_eq(v1_log(test_log_1), log(test_log_1));
}
END_TEST

START_TEST(v1_log_test_2) {
    ck_assert_int_eq(v1_log(test_log_2), log(test_log_2));
}
END_TEST

START_TEST(v1_log_test_3) {
    ck_assert_int_eq(v1_log(test_log_3), log(test_log_3));
}
END_TEST

START_TEST(v1_log_test_4) {
    ck_assert_int_eq(
        v1_log(test_log_4), log(test_log_4));
}
END_TEST

START_TEST(v1_log_test_5) {
    ck_assert_int_eq(
        v1_log(test_log_5), log(test_log_5));
}
END_TEST

START_TEST(v1_log_test_6) {
    ck_assert_int_eq(v1_log(test_log_6), log(test_log_6));
}
END_TEST

START_TEST(v1_log_test_7) {
    ck_assert_int_eq(v1_log(test_log_7), log(test_log_7));
}
END_TEST

START_TEST(v1_log_test_8) {
    ck_assert_int_eq(v1_log(test_log_8), log(test_log_8));
}
END_TEST

START_TEST(v1_log_test_9) {
    ck_assert_int_eq(v1_log(test_log_9), log(test_log_9));
}
END_TEST

START_TEST(v1_log_test_10) {
    ck_assert_int_eq(v1_log(test_log_10), log(test_log_10));
}
END_TEST

START_TEST(v1_log_test_11) {
    ck_assert_int_eq(v1_log(test_log_11), log(test_log_11));
}
END_TEST

START_TEST(v1_log_test_12) {
    ck_assert_int_eq(v1_log(test_log_12), log(test_log_12));
}
END_TEST

START_TEST(v1_log_test_13) {
    ck_assert_int_eq(v1_log(test_log_14), log(test_log_14));
}
END_TEST

START_TEST(v1_log_test_14) {
    ck_assert_int_eq(v1_log(test_log_18), log(test_log_18));
}
END_TEST

START_TEST(v1_log_test_15) {
    ck_assert_int_eq(v1_log(test_log_20), log(test_log_20));
}
END_TEST

START_TEST(v1_log_test_16) {
    ck_assert_int_eq(v1_log(test_log_21), log(test_log_21));
}
END_TEST

START_TEST(v1_log_test_17) {
    ck_assert_int_eq(v1_log(test_log_22), log(test_log_22));
}
END_TEST

START_TEST(v1_log_test_18) {
    ck_assert_int_eq(
        v1_log(test_log_23), log(test_log_23));
}
END_TEST

START_TEST(v1_log_test_19) {
    ck_assert_int_eq(v1_log(test_log_24), log(test_log_24));
}
END_TEST

START_TEST(v1_log_test_20) {
    ck_assert_int_eq(v1_log(test_log_20), log(test_log_20));
}
END_TEST

START_TEST(v1_log_test_21) {
    ck_assert_int_eq(v1_log(test_log_21), log(test_log_21));
}
END_TEST

START_TEST(v1_log_test_22) {
    ck_assert_int_eq(v1_log(test_log_22), log(test_log_22));
}
END_TEST

START_TEST(v1_log_test_23) {
    ck_assert_int_eq(
        v1_log(test_log_23), log(test_log_23));
}
END_TEST

START_TEST(v1_log_test_24) {
    ck_assert_int_eq(
        v1_log(test_log_25), log(test_log_25));
}
END_TEST

START_TEST(v1_log_test_25) {
    ck_assert_int_eq(
        v1_log(test_log_26), log(test_log_26));
}
END_TEST

START_TEST(v1_log_test_26) {
    ck_assert_int_eq(v1_log(test_log_24), log(test_log_24));
}
END_TEST

// v1 math function #12: long double pow(double base, double exp) -
// raises a number to the given power
double test_pow_1 = 5555.0;
double test_pow_2 = 21.1234234;
double test_pow_3 = 123.12345678;
double test_pow_4 = 0.7894;
double test_pow_9 = 55.6546473247;
double test_pow_10 = -30.0;
double test_pow_11 = -55.6546473247;
double test_pow_12 = -30.0;
double test_pow_13 = 1.0;
double test_pow_14 = -30.0;
double test_pow_15 = 5556345656.6546473247;
double test_pow_16 = 8.0;
double test_pow_17 = 0.0;
double test_pow_18 = 8.0;
double test_pow_19 = 0.0;
double test_pow_20 = 0.0;
double test_pow_21 = +1.0;
double test_pow_22 = 55.6546473247;
double test_pow_25 = 0.66666;
double test_pow_26 = INFINITY;
double test_pow_27 = -1.0;
double test_pow_28 = INFINITY;
double test_pow_31 = 10.0;
double test_pow_32 = -1.0 / 0.0;
double test_pow_33 = 0.0 / 0.0;
double test_pow_34 = -1.0 / 0.0;
double test_pow_35 = 10.0;
double test_pow_36 = -0.0 / 0.0;
double test_pow_37 = 10.0;
double test_pow_38 = 0.0 / 0.0;
double test_pow_39 = +1.0 / 0.0;
double test_pow_40 = -30;
double test_pow_45 = -1.0 / 0.0;
double test_pow_46 = -30;
double test_pow_47 = 0.0;
double test_pow_48 = 30;
double test_pow_51 = -1.0 / 0.0;
double test_pow_52 = -31;
double test_pow_53 = 0.0;
double test_pow_54 = -30;
double test_pow_57 = v1_DBL_MIN;
START_TEST(v1_pow_test_1) {
    ck_assert_int_eq(v1_pow(test_pow_1, test_pow_2), pow(test_pow_1, test_pow_2));
}
END_TEST

START_TEST(v1_pow_test_2) {
    ck_assert_int_eq(v1_pow(test_pow_3, test_pow_4), pow(test_pow_3, test_pow_4));
}
END_TEST

START_TEST(v1_pow_test_3) {
    ck_assert_int_eq(v1_pow(test_pow_9, test_pow_10), pow(test_pow_9, test_pow_10));
}
END_TEST

START_TEST(v1_pow_test_4) {
    ck_assert_int_eq(v1_pow(test_pow_11, test_pow_12),
                     pow(test_pow_11, test_pow_12));
}
END_TEST

START_TEST(v1_pow_test_5) {
    ck_assert_int_eq(v1_pow(test_pow_13, test_pow_14),
                     pow(test_pow_13, test_pow_14));
}
END_TEST

START_TEST(v1_pow_test_6) {
    ck_assert_int_eq(v1_pow(test_pow_15, test_pow_16),
                     pow(test_pow_15, test_pow_16));
}
END_TEST

START_TEST(v1_pow_test_7) {
    ck_assert_int_eq(v1_pow(test_pow_17, test_pow_18),
                     pow(test_pow_17, test_pow_18));
}
END_TEST

START_TEST(v1_pow_test_8) {
    ck_assert_int_eq(v1_pow(test_pow_19, test_pow_20),
                     pow(test_pow_19, test_pow_20));
}
END_TEST

START_TEST(v1_pow_test_9) {
    ck_assert_int_eq(v1_pow(test_pow_21, test_pow_22),
                     pow(test_pow_21, test_pow_22));
}
END_TEST

START_TEST(v1_pow_test_10) {
    ck_assert_int_eq(v1_pow(test_pow_25, test_pow_26),
                     pow(test_pow_25, test_pow_26));
}
END_TEST

START_TEST(v1_pow_test_11) {
    ck_assert_int_eq(v1_pow(test_pow_27, test_pow_28),
                     pow(test_pow_27, test_pow_28));
}
END_TEST

START_TEST(v1_pow_test_12) {
    ck_assert_int_eq(v1_pow(test_pow_31, test_pow_32),
                     pow(test_pow_31, test_pow_32));
}
END_TEST

START_TEST(v1_pow_test_13) {
    ck_assert_int_eq(v1_pow(test_pow_33, test_pow_34),
                     pow(test_pow_33, test_pow_34));
}
END_TEST

START_TEST(v1_pow_test_14) {
    ck_assert_int_eq(v1_pow(test_pow_35, test_pow_36),
                     pow(test_pow_35, test_pow_36));
}
END_TEST

START_TEST(v1_pow_test_15) {
    ck_assert_int_eq(v1_pow(test_pow_37, test_pow_38),
                     pow(test_pow_37, test_pow_38));
}
END_TEST

START_TEST(v1_pow_test_16) {
    ck_assert_int_eq(v1_pow(test_pow_39, test_pow_40),
                     pow(test_pow_39, test_pow_40));
}
END_TEST

START_TEST(v1_pow_test_17) {
    ck_assert_int_eq(v1_pow(test_pow_45, test_pow_46),
                     pow(test_pow_45, test_pow_46));
}
END_TEST

START_TEST(v1_pow_test_18) {
    ck_assert_int_eq(v1_pow(test_pow_47, test_pow_48),
                     pow(test_pow_47, test_pow_48));
}
END_TEST

START_TEST(v1_pow_test_19) {
    ck_assert_int_eq(v1_pow(test_pow_51, test_pow_52),
                     pow(test_pow_51, test_pow_52));
}
END_TEST

START_TEST(v1_pow_test_20) {
    ck_assert_int_eq(v1_pow(test_pow_53, test_pow_54),
                     pow(test_pow_53, test_pow_54));
}
END_TEST

START_TEST(v1_pow_test_21) {
    ck_assert_int_eq(v1_pow(test_pow_57, test_pow_57),
                     pow(test_pow_57, test_pow_57));
}
END_TEST

START_TEST(v1_pow_test_31) {
    ck_assert_int_eq(v1_pow(12345, -5),
                     pow(12345, -5));
}
END_TEST

START_TEST(v1_pow_test_32) {
    ck_assert_int_eq(v1_pow(12345, 0),
                     pow(12345, 0));
}
END_TEST

START_TEST(v1_pow_test_33) {
    ck_assert_int_eq(v1_pow(test_pow_10, 3),
                     pow(test_pow_10, 3));
}
END_TEST

START_TEST(v1_pow_test_34) {
    ck_assert_int_eq(v1_pow(test_pow_10, 0),
                     pow(test_pow_10, 0));
}
END_TEST

START_TEST(v1_pow_test_35) {
    ck_assert_int_eq(v1_pow(test_pow_10, -5),
                     pow(test_pow_10, -5));
}
END_TEST

// long double v1_sin(double x)
double test_sin_1 = -50.0;
double test_sin_2 = -90.0;
double test_sin_3 = 20.0;
double test_sin_4 = 190.0;
double test_sin_5 = -120.0;
double test_sin_6 = 310.0;
double test_sin_7 = 370.0;
double test_sin_8 = -13700.0;
double test_sin_9 = 0;
double test_sin_10 = 1.57079632679;
double test_sin_11 = -1.57079632679;
double test_sin_12 = v1_INFINITY;
START_TEST(v1_sin_test_1) {
    ck_assert_int_eq(v1_sin(test_sin_1), sin(test_sin_1));
}
END_TEST

START_TEST(v1_sin_test_2) {
    ck_assert_int_eq(v1_sin(test_sin_2), sin(test_sin_2));
}
END_TEST

START_TEST(v1_sin_test_3) {
    ck_assert_int_eq(v1_sin(test_sin_3), sin(test_sin_3));
}
END_TEST

START_TEST(v1_sin_test_5) {
    ck_assert_int_eq(v1_sin(test_sin_5), sin(test_sin_5));
}
END_TEST

START_TEST(v1_sin_test_6) {
    ck_assert_int_eq(v1_sin(test_sin_6), sin(test_sin_6));
}
END_TEST

START_TEST(v1_sin_test_7) {
    ck_assert_int_eq(v1_sin(test_sin_7), sin(test_sin_7));
}
END_TEST

START_TEST(v1_sin_test_8) {
    ck_assert_int_eq(v1_sin(test_sin_8), sin(test_sin_8));
}
END_TEST

START_TEST(v1_sin_test_12) {
    ck_assert_int_eq(v1_sin(test_sin_9), sin(test_sin_9));
}
END_TEST

// long double v1_sqrt(double x)
double test_sqrt_1 = 4.5678;
double test_sqrt_2 = 48828125.0;
double test_sqrt_3 = 0.0;
double test_sqrt_4 = 20.0;
double test_sqrt_5 = 0.5;
double test_sqrt_6 = 0.00000003;
double test_sqrt_7 = 1.0;
double test_sqrt_9 = NAN;
double test_sqrt_10 = 0.0 / 0.0;
double test_sqrt_12 = -0.1;
double test_sqrt_13 = -0.000001;
double test_sqrt_14 = -1;
double test_sqrt_16 = 999999999;
double test_sqrt_17 = 9999999999;

START_TEST(v1_sqrt_test_1) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_1), sqrt(test_sqrt_1));
}
END_TEST

START_TEST(v1_sqrt_test_2) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_2), sqrt(test_sqrt_2));
}
END_TEST

START_TEST(v1_sqrt_test_3) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_3), sqrt(test_sqrt_3));
}
END_TEST

START_TEST(v1_sqrt_test_4) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_4), sqrt(test_sqrt_4));
}
END_TEST

START_TEST(v1_sqrt_test_5) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_5), sqrt(test_sqrt_5));
}
END_TEST

START_TEST(v1_sqrt_test_6) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_6), sqrt(test_sqrt_6));
}
END_TEST

START_TEST(v1_sqrt_test_7) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_7), sqrt(test_sqrt_7));
}
END_TEST

START_TEST(v1_sqrt_test_8) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_1), sqrt(test_sqrt_1));
}
END_TEST

START_TEST(v1_sqrt_test_9) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_2), sqrt(test_sqrt_2));
}
END_TEST

START_TEST(v1_sqrt_test_10) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_3), sqrt(test_sqrt_3));
}
END_TEST

START_TEST(v1_sqrt_test_11) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_4), sqrt(test_sqrt_4));
}
END_TEST

START_TEST(v1_sqrt_test_12) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_5), sqrt(test_sqrt_5));
}
END_TEST

START_TEST(v1_sqrt_test_13) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_6), sqrt(test_sqrt_6));
}
END_TEST

START_TEST(v1_sqrt_test_14) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_7), sqrt(test_sqrt_7));
}
END_TEST

START_TEST(v1_sqrt_test_15) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_9), sqrt(test_sqrt_9));
}
END_TEST

START_TEST(v1_sqrt_test_16) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_10), sqrt(test_sqrt_10));
}
END_TEST

START_TEST(v1_sqrt_test_17) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_12), sqrt(test_sqrt_12));
}
END_TEST

START_TEST(v1_sqrt_test_18) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_13), sqrt(test_sqrt_13));
}
END_TEST

START_TEST(v1_sqrt_test_19) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_14), sqrt(test_sqrt_14));
}
END_TEST

START_TEST(v1_sqrt_test_20) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_16), sqrt(test_sqrt_16));
}
END_TEST

START_TEST(v1_sqrt_test_21) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_14), sqrt(test_sqrt_14));
}
END_TEST

START_TEST(v1_sqrt_test_23) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_16), sqrt(test_sqrt_16));
}
END_TEST

START_TEST(v1_sqrt_test_24) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_17), sqrt(test_sqrt_17));
}
END_TEST

START_TEST(v1_sqrt_test_22) {
    ck_assert_int_eq(v1_sqrt(test_sqrt_17), sqrt(test_sqrt_17));
}
END_TEST

// long double v1_tan(double x)
double test_tan_1 = -10.0;
double test_tan_2 = -320.0;
double test_tan_3 = -290.0;
double test_tan_4 = -520.0;
double test_tan_5 = 0.0;
double test_tan_6 = -1.0;
double test_tan_7 = 45.0;
double test_tan_8 = 0.0 / 0.0;
double test_tan_9 = -0.0 / 0.0;
double test_tan_10 = -0.0;
double test_tan_11 = +0.0;
double test_tan_12 = v1_NAN;
double test_tan_13 = v1_INFINITY;
double test_tan_14 = 1.0 / 0.0;
double test_tan_15 = -1.0 / 0.0;
double test_tan_16 = 999999999;
double test_tan_18 = v1_DBL_MIN;
double test_tan_19 = 1.570;
double test_tan_20 = -1.570;

START_TEST(v1_tan_test_1) {
    ck_assert_int_eq(v1_tan(test_tan_1), tan(test_tan_1));
}
END_TEST

START_TEST(v1_tan_test_2) {
    ck_assert_int_eq(v1_tan(test_tan_2), tan(test_tan_2));
}
END_TEST

START_TEST(v1_tan_test_3) {
    ck_assert_int_eq(v1_tan(test_tan_3), tan(test_tan_3));
}
END_TEST

START_TEST(v1_tan_test_5) {
    ck_assert_int_eq(v1_tan(test_tan_5), tan(test_tan_5));
}
END_TEST

START_TEST(v1_tan_test_6) {
    ck_assert_int_eq(v1_tan(test_tan_6), tan(test_tan_6));
}
END_TEST

START_TEST(v1_tan_test_7) {
    ck_assert_int_eq(v1_tan(test_tan_7), tan(test_tan_7));
}
END_TEST

START_TEST(v1_tan_test_8) {
    ck_assert_int_eq(v1_tan(test_tan_7), tan(test_tan_7));
}
END_TEST

START_TEST(v1_tan_test_9) {
    ck_assert_int_eq(v1_tan(test_tan_8), tan(test_tan_8));
}
END_TEST

START_TEST(v1_tan_test_10) {
    ck_assert_int_eq(v1_tan(test_tan_9), tan(test_tan_9));
}
END_TEST

START_TEST(v1_tan_test_11) {
    ck_assert_int_eq(v1_tan(test_tan_10), tan(test_tan_10));
}
END_TEST

START_TEST(v1_tan_test_12) {
    ck_assert_int_eq(v1_tan(test_tan_11), tan(test_tan_11));
}
END_TEST

START_TEST(v1_tan_test_13) {
    ck_assert_int_eq(v1_tan(test_tan_12), tan(test_tan_12));
}
END_TEST

START_TEST(v1_tan_test_14) {
    ck_assert_int_eq(v1_tan(test_tan_13), tan(test_tan_13));
}
END_TEST

START_TEST(v1_tan_test_15) {
    ck_assert_int_eq(v1_tan(test_tan_14), tan(test_tan_14));
}
END_TEST

START_TEST(v1_tan_test_16) {
    ck_assert_int_eq(v1_tan(test_tan_15), tan(test_tan_15));
}
END_TEST

START_TEST(v1_tan_test_17) {
    ck_assert_int_eq(v1_tan(test_tan_16), tan(test_tan_16));
}
END_TEST

START_TEST(v1_tan_test_18) {
    ck_assert_int_eq(v1_tan(test_tan_18), tan(test_tan_18));
}
END_TEST

int main(void) {
    Suite *s1 = suite_create("v1_math");
    TCase *tc1_1 = tcase_create("v1_abs");
    TCase *tc1_2 = tcase_create("v1_acos");
    TCase *tc1_3 = tcase_create("v1_asin");
    TCase *tc1_4 = tcase_create("v1_atan");
    TCase *tc1_5 = tcase_create("v1_ceil");
    TCase *tc1_6 = tcase_create("v1_cos");
    TCase *tc1_7 = tcase_create("v1_exp");
    TCase *tc1_8 = tcase_create("v1_fabs");
    TCase *tc1_9 = tcase_create("v1_floor");
    TCase *tc1_10 = tcase_create("v1_fmod");
    TCase *tc1_11 = tcase_create("v1_log");
    TCase *tc1_12 = tcase_create("v1_pow");
    TCase *tc1_13 = tcase_create("v1_sin");
    TCase *tc1_14 = tcase_create("v1_sqrt");
    TCase *tc1_15 = tcase_create("v1_tan");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, v1_abs_test_1);
    tcase_add_test(tc1_1, v1_abs_test_2);
    tcase_add_test(tc1_1, v1_abs_test_3);
    tcase_add_test(tc1_1, v1_abs_test_4);
    tcase_add_test(tc1_1, v1_abs_test_5);
    tcase_add_test(tc1_1, v1_abs_test_6);
    suite_add_tcase(s1, tc1_2);
    tcase_add_test(tc1_2, v1_acos_test_1);
    tcase_add_test(tc1_2, v1_acos_test_2);
    tcase_add_test(tc1_2, v1_acos_test_3);
    tcase_add_test(tc1_2, v1_acos_test_4);
    tcase_add_test(tc1_2, v1_acos_test_5);
    tcase_add_test(tc1_2, v1_acos_test_6);
    tcase_add_test(tc1_2, v1_acos_test_7);
    tcase_add_test(tc1_2, v1_acos_test_8);
    tcase_add_test(tc1_2, v1_acos_test_9);
    tcase_add_test(tc1_2, v1_acos_test_10);
    tcase_add_test(tc1_2, v1_acos_test_11);
    tcase_add_test(tc1_2, v1_acos_test_12);
    tcase_add_test(tc1_2, v1_acos_test_13);
    tcase_add_test(tc1_2, v1_acos_test_14);
    tcase_add_test(tc1_2, v1_acos_test_15);
    tcase_add_test(tc1_2, v1_acos_test_16);
    tcase_add_test(tc1_2, v1_acos_test_17);
    tcase_add_test(tc1_2, v1_acos_test_18);
    tcase_add_test(tc1_2, v1_acos_test_19);
    tcase_add_test(tc1_2, v1_acos_test_20);
    tcase_add_test(tc1_2, v1_acos_test_21);
    tcase_add_test(tc1_2, v1_acos_test_22);
    tcase_add_test(tc1_2, v1_acos_test_23);
    tcase_add_test(tc1_2, v1_acos_test_24);
    suite_add_tcase(s1, tc1_3);
    tcase_add_test(tc1_3, v1_asin_test_1);
    tcase_add_test(tc1_3, v1_asin_test_2);
    tcase_add_test(tc1_3, v1_asin_test_3);
    tcase_add_test(tc1_3, v1_asin_test_4);
    tcase_add_test(tc1_3, v1_asin_test_5);
    tcase_add_test(tc1_3, v1_asin_test_6);
    tcase_add_test(tc1_3, v1_asin_test_7);
    tcase_add_test(tc1_3, v1_asin_test_8);
    tcase_add_test(tc1_3, v1_asin_test_9);
    tcase_add_test(tc1_3, v1_asin_test_10);
    tcase_add_test(tc1_3, v1_asin_test_11);
    tcase_add_test(tc1_3, v1_asin_test_12);
    tcase_add_test(tc1_3, v1_asin_test_13);
    tcase_add_test(tc1_3, v1_asin_test_14);
    tcase_add_test(tc1_3, v1_asin_test_15);
    tcase_add_test(tc1_3, v1_asin_test_16);
    tcase_add_test(tc1_3, v1_asin_test_17);
    tcase_add_test(tc1_3, v1_asin_test_18);
    tcase_add_test(tc1_3, v1_asin_test_19);
    tcase_add_test(tc1_3, v1_asin_test_20);
    tcase_add_test(tc1_3, v1_asin_test_21);
    tcase_add_test(tc1_3, v1_asin_test_22);
    tcase_add_test(tc1_3, v1_asin_test_23);
    tcase_add_test(tc1_3, v1_asin_test_24);
    suite_add_tcase(s1, tc1_4);
    tcase_add_test(tc1_4, v1_atan_test_1);
    tcase_add_test(tc1_4, v1_atan_test_2);
    tcase_add_test(tc1_4, v1_atan_test_3);
    tcase_add_test(tc1_4, v1_atan_test_4);
    tcase_add_test(tc1_4, v1_atan_test_5);
    tcase_add_test(tc1_4, v1_atan_test_6);
    tcase_add_test(tc1_4, v1_atan_test_7);
    tcase_add_test(tc1_4, v1_atan_test_8);
    tcase_add_test(tc1_4, v1_atan_test_9);
    tcase_add_test(tc1_4, v1_atan_test_10);
    tcase_add_test(tc1_4, v1_atan_test_11);
    tcase_add_test(tc1_4, v1_atan_test_12);
    tcase_add_test(tc1_4, v1_atan_test_13);
    tcase_add_test(tc1_4, v1_atan_test_14);
    tcase_add_test(tc1_4, v1_atan_test_15);
    tcase_add_test(tc1_4, v1_atan_test_16);
    tcase_add_test(tc1_4, v1_atan_test_17);
    tcase_add_test(tc1_4, v1_atan_test_18);
    tcase_add_test(tc1_4, v1_atan_test_19);
    tcase_add_test(tc1_4, v1_atan_test_20);
    tcase_add_test(tc1_4, v1_atan_test_21);
    tcase_add_test(tc1_4, v1_atan_test_22);
    tcase_add_test(tc1_4, v1_atan_test_23);
    tcase_add_test(tc1_4, v1_atan_test_24);
    tcase_add_test(tc1_4, v1_atan_test_25);
    suite_add_tcase(s1, tc1_5);
    tcase_add_test(tc1_5, v1_ceil_test_1);
    tcase_add_test(tc1_5, v1_ceil_test_2);
    tcase_add_test(tc1_5, v1_ceil_test_3);
    tcase_add_test(tc1_5, v1_ceil_test_4);
    tcase_add_test(tc1_5, v1_ceil_test_5);
    tcase_add_test(tc1_5, v1_ceil_test_6);
    tcase_add_test(tc1_5, v1_ceil_test_7);
    tcase_add_test(tc1_5, v1_ceil_test_8);
    tcase_add_test(tc1_5, v1_ceil_test_9);
    tcase_add_test(tc1_5, v1_ceil_test_10);
    tcase_add_test(tc1_5, v1_ceil_test_11);
    tcase_add_test(tc1_5, v1_ceil_test_12);
    tcase_add_test(tc1_5, v1_ceil_test_13);
    tcase_add_test(tc1_5, v1_ceil_test_14);
    tcase_add_test(tc1_5, v1_ceil_test_16);
    tcase_add_test(tc1_5, v1_ceil_test_17);
    tcase_add_test(tc1_5, v1_ceil_test_18);
    tcase_add_test(tc1_5, v1_ceil_test_19);
    tcase_add_test(tc1_5, v1_ceil_test_20);
    tcase_add_test(tc1_5, v1_ceil_test_21);
    tcase_add_test(tc1_5, v1_ceil_test_22);
    tcase_add_test(tc1_5, v1_ceil_test_23);
    tcase_add_test(tc1_5, v1_ceil_test_24);
    tcase_add_test(tc1_5, v1_ceil_test_25);
    tcase_add_test(tc1_5, v1_ceil_test_26);
    tcase_add_test(tc1_5, v1_ceil_test_27);
    tcase_add_test(tc1_5, v1_ceil_test_28);
    tcase_add_test(tc1_5, v1_ceil_test_29);
    tcase_add_test(tc1_5, v1_ceil_test_30);
    tcase_add_test(tc1_5, v1_ceil_test_31);
    tcase_add_test(tc1_5, v1_ceil_test_32);
    tcase_add_test(tc1_5, v1_ceil_test_33);
    tcase_add_test(tc1_5, v1_ceil_test_34);
    tcase_add_test(tc1_5, v1_ceil_test_35);
    tcase_add_test(tc1_5, v1_ceil_test_36);
    tcase_add_test(tc1_5, v1_ceil_test_37);
    tcase_add_test(tc1_5, v1_ceil_test_38);
    tcase_add_test(tc1_5, v1_ceil_test_39);
    tcase_add_test(tc1_5, v1_ceil_test_40);
    tcase_add_test(tc1_5, v1_ceil_test_41);
    tcase_add_test(tc1_5, v1_ceil_test_42);
    tcase_add_test(tc1_5, v1_ceil_test_43);
    tcase_add_test(tc1_5, v1_ceil_test_44);
    tcase_add_test(tc1_5, v1_ceil_test_45);
    tcase_add_test(tc1_5, v1_ceil_test_46);
    tcase_add_test(tc1_5, v1_ceil_test_47);
    tcase_add_test(tc1_5, v1_ceil_test_48);
    tcase_add_test(tc1_5, v1_ceil_test_49);
    tcase_add_test(tc1_5, v1_ceil_test_50);
    tcase_add_test(tc1_5, v1_ceil_test_51);
    tcase_add_test(tc1_5, v1_ceil_test_52);
    tcase_add_test(tc1_5, v1_ceil_test_53);
    tcase_add_test(tc1_5, v1_ceil_test_54);
    tcase_add_test(tc1_5, v1_ceil_test_55);
    tcase_add_test(tc1_5, v1_ceil_test_56);
    tcase_add_test(tc1_5, v1_ceil_test_57);
    tcase_add_test(tc1_5, v1_ceil_test_58);
    tcase_add_test(tc1_5, v1_ceil_test_59);
    tcase_add_test(tc1_5, v1_ceil_test_60);
    tcase_add_test(tc1_5, v1_ceil_test_61);
    tcase_add_test(tc1_5, v1_ceil_test_62);
    tcase_add_test(tc1_5, v1_ceil_test_63);
    tcase_add_test(tc1_5, v1_ceil_test_64);
    tcase_add_test(tc1_5, v1_ceil_test_65);
    tcase_add_test(tc1_5, v1_ceil_test_66);
    tcase_add_test(tc1_5, v1_ceil_test_67);
    tcase_add_test(tc1_5, v1_ceil_test_68);
    tcase_add_test(tc1_5, v1_ceil_test_69);
    tcase_add_test(tc1_5, v1_ceil_test_70);
    tcase_add_test(tc1_5, v1_ceil_test_71);
    tcase_add_test(tc1_5, v1_ceil_test_72);
    tcase_add_test(tc1_5, v1_ceil_test_73);
    tcase_add_test(tc1_5, v1_ceil_test_74);
    tcase_add_test(tc1_5, v1_ceil_test_75);
    tcase_add_test(tc1_5, v1_ceil_test_76);
    tcase_add_test(tc1_5, v1_ceil_test_77);
    tcase_add_test(tc1_5, v1_ceil_test_78);
    suite_add_tcase(s1, tc1_6);
    tcase_add_test(tc1_6, v1_cos_test_1);
    tcase_add_test(tc1_6, v1_cos_test_2);
    tcase_add_test(tc1_6, v1_cos_test_3);
    tcase_add_test(tc1_6, v1_cos_test_8);
    tcase_add_test(tc1_6, v1_cos_test_9);
    tcase_add_test(tc1_6, v1_cos_test_10);
    tcase_add_test(tc1_6, v1_cos_test_11);
    tcase_add_test(tc1_6, v1_cos_test_12);
    tcase_add_test(tc1_6, v1_cos_test_13);
    tcase_add_test(tc1_6, v1_cos_test_14);
    tcase_add_test(tc1_6, v1_cos_test_15);
    tcase_add_test(tc1_6, v1_cos_test_16);
    tcase_add_test(tc1_6, v1_cos_test_17);
    tcase_add_test(tc1_6, v1_cos_test_18);
    tcase_add_test(tc1_6, v1_cos_test_20);
    tcase_add_test(tc1_6, v1_cos_test_21);
    tcase_add_test(tc1_6, v1_cos_test_22);
    tcase_add_test(tc1_6, v1_cos_test_23);
    tcase_add_test(tc1_6, v1_cos_test_24);
    tcase_add_test(tc1_6, v1_cos_test_25);
    tcase_add_test(tc1_6, v1_cos_test_26);
    tcase_add_test(tc1_6, v1_cos_test_27);
    tcase_add_test(tc1_6, v1_cos_test_28);
    tcase_add_test(tc1_6, v1_cos_test_29);
    tcase_add_test(tc1_6, v1_cos_test_30);
    tcase_add_test(tc1_6, v1_cos_test_31);
    tcase_add_test(tc1_6, v1_cos_test_33);
    tcase_add_test(tc1_6, v1_cos_test_34);
    tcase_add_test(tc1_6, v1_cos_test_35);
    tcase_add_test(tc1_6, v1_cos_test_36);
    suite_add_tcase(s1, tc1_7);
    tcase_add_test(tc1_7, v1_exp_test_1);
    tcase_add_test(tc1_7, v1_exp_test_2);
    tcase_add_test(tc1_7, v1_exp_test_3);
    tcase_add_test(tc1_7, v1_exp_test_4);
    tcase_add_test(tc1_7, v1_exp_test_5);
    tcase_add_test(tc1_7, v1_exp_test_6);
    tcase_add_test(tc1_7, v1_exp_test_7);
    tcase_add_test(tc1_7, v1_exp_test_8);
    tcase_add_test(tc1_7, v1_exp_test_9);
    tcase_add_test(tc1_7, v1_exp_test_10);
    tcase_add_test(tc1_7, v1_exp_test_11);
    tcase_add_test(tc1_7, v1_exp_test_12);
    tcase_add_test(tc1_7, v1_exp_test_13);
    tcase_add_test(tc1_7, v1_exp_test_14);
    suite_add_tcase(s1, tc1_8);
    tcase_add_test(tc1_8, v1_fabs_test_1);
    tcase_add_test(tc1_8, v1_fabs_test_2);
    tcase_add_test(tc1_8, v1_fabs_test_3);
    tcase_add_test(tc1_8, v1_fabs_test_4);
    tcase_add_test(tc1_8, v1_fabs_test_5);
    tcase_add_test(tc1_8, v1_fabs_test_6);
    tcase_add_test(tc1_8, v1_fabs_test_7);
    tcase_add_test(tc1_8, v1_fabs_test_8);
    tcase_add_test(tc1_8, v1_fabs_test_9);
    tcase_add_test(tc1_8, v1_fabs_test_10);
    tcase_add_test(tc1_8, v1_fabs_test_11);
    suite_add_tcase(s1, tc1_9);
    tcase_add_test(tc1_9, v1_floor_test_2);
    tcase_add_test(tc1_9, v1_floor_test_3);
    tcase_add_test(tc1_9, v1_floor_test_4);
    tcase_add_test(tc1_9, v1_floor_test_5);
    tcase_add_test(tc1_9, v1_floor_test_6);
    tcase_add_test(tc1_9, v1_floor_test_7);
    tcase_add_test(tc1_9, v1_floor_test_8);
    tcase_add_test(tc1_9, v1_floor_test_9);
    tcase_add_test(tc1_9, v1_floor_test_10);
    tcase_add_test(tc1_9, v1_floor_test_11);
    tcase_add_test(tc1_9, v1_floor_test_12);
    tcase_add_test(tc1_9, v1_floor_test_13);
    tcase_add_test(tc1_9, v1_floor_test_14);
    tcase_add_test(tc1_9, v1_floor_test_15);
    tcase_add_test(tc1_9, v1_floor_test_16);
    tcase_add_test(tc1_9, v1_floor_test_17);
    tcase_add_test(tc1_9, v1_floor_test_18);
    tcase_add_test(tc1_9, v1_floor_test_19);
    tcase_add_test(tc1_9, v1_floor_test_20);
    tcase_add_test(tc1_9, v1_floor_test_21);
    tcase_add_test(tc1_9, v1_floor_test_22);
    tcase_add_test(tc1_9, v1_floor_test_23);
    tcase_add_test(tc1_9, v1_floor_test_24);
    tcase_add_test(tc1_9, v1_floor_test_25);
    tcase_add_test(tc1_9, v1_floor_test_26);
    tcase_add_test(tc1_9, v1_floor_test_27);
    tcase_add_test(tc1_9, v1_floor_test_28);
    tcase_add_test(tc1_9, v1_floor_test_29);
    tcase_add_test(tc1_9, v1_floor_test_30);
    tcase_add_test(tc1_9, v1_floor_test_31);
    tcase_add_test(tc1_9, v1_floor_test_32);
    tcase_add_test(tc1_9, v1_floor_test_33);
    tcase_add_test(tc1_9, v1_floor_test_34);
    tcase_add_test(tc1_9, v1_floor_test_35);
    tcase_add_test(tc1_9, v1_floor_test_36);
    tcase_add_test(tc1_9, v1_floor_test_37);
    tcase_add_test(tc1_9, v1_floor_test_38);
    tcase_add_test(tc1_9, v1_floor_test_39);
    tcase_add_test(tc1_9, v1_floor_test_40);
    tcase_add_test(tc1_9, v1_floor_test_41);
    tcase_add_test(tc1_9, v1_floor_test_42);
    tcase_add_test(tc1_9, v1_floor_test_43);
    tcase_add_test(tc1_9, v1_floor_test_44);
    tcase_add_test(tc1_9, v1_floor_test_45);
    tcase_add_test(tc1_9, v1_floor_test_46);
    tcase_add_test(tc1_9, v1_floor_test_47);
    tcase_add_test(tc1_9, v1_floor_test_48);
    tcase_add_test(tc1_9, v1_floor_test_49);
    tcase_add_test(tc1_9, v1_floor_test_50);
    tcase_add_test(tc1_9, v1_floor_test_51);
    tcase_add_test(tc1_9, v1_floor_test_52);
    tcase_add_test(tc1_9, v1_floor_test_53);
    tcase_add_test(tc1_9, v1_floor_test_54);
    tcase_add_test(tc1_9, v1_floor_test_55);
    tcase_add_test(tc1_9, v1_floor_test_56);
    tcase_add_test(tc1_9, v1_floor_test_57);
    tcase_add_test(tc1_9, v1_floor_test_58);
    tcase_add_test(tc1_9, v1_floor_test_59);
    tcase_add_test(tc1_9, v1_floor_test_60);
    tcase_add_test(tc1_9, v1_floor_test_61);
    tcase_add_test(tc1_9, v1_floor_test_62);
    tcase_add_test(tc1_9, v1_floor_test_63);
    tcase_add_test(tc1_9, v1_floor_test_64);
    tcase_add_test(tc1_9, v1_floor_test_65);
    tcase_add_test(tc1_9, v1_floor_test_66);
    tcase_add_test(tc1_9, v1_floor_test_67);
    tcase_add_test(tc1_9, v1_floor_test_68);
    tcase_add_test(tc1_9, v1_floor_test_69);
    tcase_add_test(tc1_9, v1_floor_test_70);
    tcase_add_test(tc1_9, v1_floor_test_71);
    tcase_add_test(tc1_9, v1_floor_test_72);
    tcase_add_test(tc1_9, v1_floor_test_73);
    tcase_add_test(tc1_9, v1_floor_test_74);
    tcase_add_test(tc1_9, v1_floor_test_75);
    tcase_add_test(tc1_9, v1_floor_test_76);
    tcase_add_test(tc1_9, v1_floor_test_77);
    tcase_add_test(tc1_9, v1_floor_test_78);
    suite_add_tcase(s1, tc1_10);
    tcase_add_test(tc1_10, v1_fmod_test_1);
    tcase_add_test(tc1_10, v1_fmod_test_2);
    tcase_add_test(tc1_10, v1_fmod_test_3);
    tcase_add_test(tc1_10, v1_fmod_test_4);
    tcase_add_test(tc1_10, v1_fmod_test_5);
    tcase_add_test(tc1_10, v1_fmod_test_6);
    tcase_add_test(tc1_10, v1_fmod_test_7);
    tcase_add_test(tc1_10, v1_fmod_test_8);
    tcase_add_test(tc1_10, v1_fmod_test_9);
    tcase_add_test(tc1_10, v1_fmod_test_10);
    tcase_add_test(tc1_10, v1_fmod_test_11);
    tcase_add_test(tc1_10, v1_fmod_test_12);
    tcase_add_test(tc1_10, v1_fmod_test_13);
    tcase_add_test(tc1_10, v1_fmod_test_14);
    tcase_add_test(tc1_10, v1_fmod_test_15);
    tcase_add_test(tc1_10, v1_fmod_test_16);
    tcase_add_test(tc1_10, v1_fmod_test_17);
    tcase_add_test(tc1_10, v1_fmod_test_18);
    suite_add_tcase(s1, tc1_11);
    tcase_add_test(tc1_11, v1_log_test_1);
    tcase_add_test(tc1_11, v1_log_test_2);
    tcase_add_test(tc1_11, v1_log_test_3);
    tcase_add_test(tc1_11, v1_log_test_4);
    tcase_add_test(tc1_11, v1_log_test_5);
    tcase_add_test(tc1_11, v1_log_test_6);
    tcase_add_test(tc1_11, v1_log_test_7);
    tcase_add_test(tc1_11, v1_log_test_8);
    tcase_add_test(tc1_11, v1_log_test_9);
    tcase_add_test(tc1_11, v1_log_test_10);
    tcase_add_test(tc1_11, v1_log_test_11);
    tcase_add_test(tc1_11, v1_log_test_12);
    tcase_add_test(tc1_11, v1_log_test_13);
    tcase_add_test(tc1_11, v1_log_test_14);
    tcase_add_test(tc1_11, v1_log_test_15);
    tcase_add_test(tc1_11, v1_log_test_16);
    tcase_add_test(tc1_11, v1_log_test_17);
    tcase_add_test(tc1_11, v1_log_test_18);
    tcase_add_test(tc1_11, v1_log_test_19);
    tcase_add_test(tc1_11, v1_log_test_20);
    tcase_add_test(tc1_11, v1_log_test_21);
    tcase_add_test(tc1_11, v1_log_test_22);
    tcase_add_test(tc1_11, v1_log_test_23);
    tcase_add_test(tc1_11, v1_log_test_24);
    tcase_add_test(tc1_11, v1_log_test_25);
    tcase_add_test(tc1_11, v1_log_test_26);
    suite_add_tcase(s1, tc1_12);
    tcase_add_test(tc1_12, v1_pow_test_1);
    tcase_add_test(tc1_12, v1_pow_test_2);
    tcase_add_test(tc1_12, v1_pow_test_3);
    tcase_add_test(tc1_12, v1_pow_test_4);
    tcase_add_test(tc1_12, v1_pow_test_5);
    tcase_add_test(tc1_12, v1_pow_test_6);
    tcase_add_test(tc1_12, v1_pow_test_7);
    tcase_add_test(tc1_12, v1_pow_test_8);
    tcase_add_test(tc1_12, v1_pow_test_9);
    tcase_add_test(tc1_12, v1_pow_test_10);
    tcase_add_test(tc1_12, v1_pow_test_11);
    tcase_add_test(tc1_12, v1_pow_test_12);
    tcase_add_test(tc1_12, v1_pow_test_13);
    tcase_add_test(tc1_12, v1_pow_test_14);
    tcase_add_test(tc1_12, v1_pow_test_15);
    tcase_add_test(tc1_12, v1_pow_test_16);
    tcase_add_test(tc1_12, v1_pow_test_17);
    tcase_add_test(tc1_12, v1_pow_test_18);
    tcase_add_test(tc1_12, v1_pow_test_19);
    tcase_add_test(tc1_12, v1_pow_test_20);
    tcase_add_test(tc1_12, v1_pow_test_21);
    tcase_add_test(tc1_12, v1_pow_test_35);
    tcase_add_test(tc1_12, v1_pow_test_34);
    tcase_add_test(tc1_12, v1_pow_test_33);
    tcase_add_test(tc1_12, v1_pow_test_32);
    tcase_add_test(tc1_12, v1_pow_test_31);
    suite_add_tcase(s1, tc1_13);
    tcase_add_test(tc1_13, v1_sin_test_1);
    tcase_add_test(tc1_13, v1_sin_test_2);
    tcase_add_test(tc1_13, v1_sin_test_3);
    tcase_add_test(tc1_13, v1_sin_test_5);
    tcase_add_test(tc1_13, v1_sin_test_6);
    tcase_add_test(tc1_13, v1_sin_test_7);
    tcase_add_test(tc1_13, v1_sin_test_8);
    tcase_add_test(tc1_13, v1_sin_test_12);
    suite_add_tcase(s1, tc1_14);
    tcase_add_test(tc1_14, v1_sqrt_test_1);
    tcase_add_test(tc1_14, v1_sqrt_test_2);
    tcase_add_test(tc1_14, v1_sqrt_test_3);
    tcase_add_test(tc1_14, v1_sqrt_test_4);
    tcase_add_test(tc1_14, v1_sqrt_test_5);
    tcase_add_test(tc1_14, v1_sqrt_test_6);
    tcase_add_test(tc1_14, v1_sqrt_test_7);
    tcase_add_test(tc1_14, v1_sqrt_test_8);
    tcase_add_test(tc1_14, v1_sqrt_test_9);
    tcase_add_test(tc1_14, v1_sqrt_test_10);
    tcase_add_test(tc1_14, v1_sqrt_test_11);
    tcase_add_test(tc1_14, v1_sqrt_test_12);
    tcase_add_test(tc1_14, v1_sqrt_test_13);
    tcase_add_test(tc1_14, v1_sqrt_test_14);
    tcase_add_test(tc1_14, v1_sqrt_test_15);
    tcase_add_test(tc1_14, v1_sqrt_test_16);
    tcase_add_test(tc1_14, v1_sqrt_test_17);
    tcase_add_test(tc1_14, v1_sqrt_test_18);
    tcase_add_test(tc1_14, v1_sqrt_test_19);
    tcase_add_test(tc1_14, v1_sqrt_test_20);
    tcase_add_test(tc1_14, v1_sqrt_test_21);
    tcase_add_test(tc1_14, v1_sqrt_test_22);
    tcase_add_test(tc1_14, v1_sqrt_test_24);
    tcase_add_test(tc1_14, v1_sqrt_test_23);
    suite_add_tcase(s1, tc1_15);
    tcase_add_test(tc1_15, v1_tan_test_1);
    tcase_add_test(tc1_15, v1_tan_test_2);
    tcase_add_test(tc1_15, v1_tan_test_3);
    tcase_add_test(tc1_15, v1_tan_test_5);
    tcase_add_test(tc1_15, v1_tan_test_6);
    tcase_add_test(tc1_15, v1_tan_test_7);
    tcase_add_test(tc1_15, v1_tan_test_8);
    tcase_add_test(tc1_15, v1_tan_test_9);
    tcase_add_test(tc1_15, v1_tan_test_10);
    tcase_add_test(tc1_15, v1_tan_test_11);
    tcase_add_test(tc1_15, v1_tan_test_12);
    tcase_add_test(tc1_15, v1_tan_test_13);
    tcase_add_test(tc1_15, v1_tan_test_14);
    tcase_add_test(tc1_15, v1_tan_test_15);
    tcase_add_test(tc1_15, v1_tan_test_16);
    tcase_add_test(tc1_15, v1_tan_test_17);
    tcase_add_test(tc1_15, v1_tan_test_18);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
