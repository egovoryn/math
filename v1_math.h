#ifndef SRC_V1_MATH_H_
#define SRC_V1_MATH_H_

#include <stdlib.h>
#include <limits.h>  // LLONG_MAX, LLONG_MI

#define v1_INFINITY 1.0 / 0.0  // inf - declaration of a constant of an infinite number
#define v1_NAN 0.0 / 0.0       // nan - declaration of a constant of a not-a-number

#define v1_2PI 6.28318530718               // 360°, 2PI
#define v1_PI 3.1415926535897932384650288  // 180°, PI
#define v1_PI_2 1.570796326794896558       // 90°, PI/2
#define v1_PI_3 1.047197551196597853       // 60°, PI/3
#define v1_PI_6 0.523598775598298926       // 30°, PI/6
#define v1_PI_4 0.785398163397448309       // 45°, PI/4

#define E_10 2.302585092994046  // natural logarithm of 10
#define E_2 0.6931471805599453  // natural logarithm of 2

#define v1_INT_MIN -2147483648  // Max nv1ative intv1er
#define v1_INT_MAX 2147483647   // Max positive intv1er
#define v1_DBL_MIN 2.2250738585072014E-308
#define v1_DBL_MAX 1.79769313486231571E+308

#define v1_atan_05 0.463647609000806
#define v1_atan_1 0.785398163397448
#define v1_atan_15 0.982793723247329

long int v1_abs(int x);
long double v1_acos(double x);
long double v1_asin(double x);
long double v1_atan(double x);
long double v1_ceil(double x);
long double v1_exp(double x);
long double v1_fabs(double x);
long double v1_floor(double x);
long double v1_fmod(double x, double y);
long double v1_log(double x);
long double v1_pow(double base, double exp);
long double v1_sin(double x);
long double v1_cos(double x);
long double v1_sqrt(double x);
long double v1_tan(double x);

long double v1_simple_pow(double base, int exp);

#endif  // SRC_V1_MATH_H_
