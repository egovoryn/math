#include "v1_math.h"

long int v1_abs(int x) {
    if (x < 0)
        x = -x;
    return x;
}

long double v1_sin(double x) {
    long double res = 0.0, pow = x, fact = 1.0;
    if (x != x) {
        res = -v1_NAN;
    } else if (x == v1_INFINITY || x == -v1_INFINITY) {
        res = -v1_NAN;
    } else {
        int flag_minus = 0;
        double a = x * 180 / v1_PI;   // conversion from dv1rees to radians
        if (a < 0) {
            a = 0 - a;
            flag_minus++;
        }
        if (a > 360) {                 // return a large value to the workspace of the unit circle
            while (a > 360) a -= 360;  // x - 2PI (ex, 390° = 390° - 360° = 30°)
        }
        if (a > 180 && a <= 270) {
            a -= 180;
            flag_minus++;
        }
        if (a > 90 && a <= 180) {
            a = 180 - a;
        }
        if (a > 270 && a <= 360) {
            a = 360 - a;
            flag_minus++;
        }
        x = a * v1_PI / 180;
        pow = x;
        for (double i = 0.0; i < 1000; ++i) {
            res += pow / fact;                          // sin (x) = x - x^3 / 3! + x^5 / 5! - x^7 / 7! + ...
            pow *= -1 * x * x;                          // x*(−x^2)
            fact *= (2 * (i + 1)) * (2 * (i + 1) + 1);  // factorial (1! + 3! + 5! + 7! = 1 + 6 + 120 + 5040)
        }
        if (x == v1_PI_2) res = 1;
        if (flag_minus >= 1) res *= -1;
        if (flag_minus == 2) res *= -1;
    }
    return res;
}

long double v1_cos(double x) {
    long double res = 0.0;
    if (x != x) {
        res = -v1_NAN;
    } else if (x == v1_INFINITY || x == -v1_INFINITY) {
        res = -v1_NAN;
    } else {
        if (x < 0) x *= -1;        // nv1ative argument rule for cos: cos(-x) = cos(x)
        while (x >= 2 * v1_PI) {   // return a large value to the workspace of the unit circle
            x -= 2 * v1_PI;        // x - 2PI (ex, 390° = 390° - 360° = 30°)
        }
        x = v1_PI_2 - x;  // sin/cos ratio for two acute angles of a right triangle
        res = v1_sin(x);  // sin(90° - x) = cos(x)
    }
    return res;
}

long double v1_tan(double x) {
    long double res = 0.0;
    if (x != x) {
        res = -v1_NAN;
    } else if (x == v1_INFINITY || x == -v1_INFINITY) {
        res = -v1_NAN;
    } else if (x != 0.0) {
        long double sinx = v1_sin(x), cosx = v1_cos(x);
        if (cosx == 0) {
            if (sinx > 0)
                res = v1_INFINITY;
            else if (sinx < 0)
                res = -v1_INFINITY;
        } else {
            res = sinx / cosx;
        }
    } else {
        res = x;
    }
    return res;
}

// raises a number to a given power
long double v1_pow(double base, double exp) {
    long double res = 0.0;
    if (base < 0) {
        if (exp < 0) {
            if (base == -v1_INFINITY) {
                if (exp < 0 && (int)exp % 2 != 0) res = -0.0;  // (-1/0)^(-1) = -0
            }
        } else if ((long int)exp == exp) {  // comparison double и int
            if (exp > 0) {                  // if the dv1ree is intv1ral, then we calculate by a simple method
                res = v1_simple_pow(base, exp);
            } else if (exp == 0) {
                res = 1;
            } else {
                res = 1 / base;
                for (long int i = 0; i < (long int)exp * (-1) - 1; i++) {
                    res /= base;
                }
            }
        } else {
            if (exp == -v1_INFINITY || exp == v1_INFINITY) {
                if (base * (-1) < 1) {
                    res = 0;
                } else if (base * (-1) == 1) {
                    res = 1;
                } else {
                    if (exp == -v1_INFINITY)
                        res = 0;
                    else
                        res = v1_INFINITY;
                }
            } else {
                res = -v1_NAN;
            }
        }
    } else if (base == 0) {
        if (exp == 0)
            res = 1;
        else if (exp < 0)
            res = v1_INFINITY;
        else
            res = 0;
    } else if (base == 1) {
        res = 1;
    } else {
        if ((long int)exp == exp) {
            if (exp > 0) {
                res = v1_simple_pow(base, exp);
            } else if (exp == 0) {
                res = 1;
            } else {
                res = 1 / base;
                for (long int i = 0; i < (long int)exp * (-1) - 1; i++) {
                    res /= base;
                }
            }
        } else {
            res = v1_exp(exp * v1_log(base));  // x = a^b = exp(b*ln(a))
        }
    }
    return res;
}

long double v1_sqrt(double x) {
    long double res = v1_pow(x, 0.5);  // x = √a = a^(1/2)
    return res;
}

// returns the value of e raised to the given power
long double v1_exp(double x) {
    long double res = 0.0, e_r = 0.0, fact = 1.0;
    if (x == v1_INFINITY) {
        res = x;
    } else if (x == -v1_INFINITY) {
        res = 0;
    } else if (x != x) {
        res = -v1_NAN;
    } else if (x > 709) {
        res = v1_INFINITY;
    } else if (x < -709) {
        res = 0;
    } else if (x != 0) {
        int minus = 0;
        if (x < 0) {
            x *= -1;
            minus = 1;
        }
        int k = 0;
        long double r = (long double)x;          // x = k*ln2 + r
        k = x / E_2;                             // k - int, how many times x is evenly divisible by ln2
        r = x - E_2 * k;                         // r - double, remainder of the previous division (|r| <= ln2)
        for (int i = 0; i < 1000; i++) {
            e_r += v1_simple_pow(r, i) / fact;   // e^x = e^(k*ln2 + r) = 2^k * e^r
            fact *= i + 1;
        }
        res = v1_simple_pow(2.0, k) * e_r;
        if (minus) res = 1 / res;
    } else {
        res = 1;
    }
    return res;
}

long double v1_log(double x) {
    long double res = 0;
    if (x != x) {
        res = -v1_NAN;
    } else if (x == v1_INFINITY) {
        res = x;
    } else if (x == -v1_INFINITY || x < 0) {
        res = -v1_NAN;
    } else if (x == 0) {
        res = -v1_INFINITY;
    } else {
        if (x >= 0.1 && x <= 10) {
            if (x > 0.6) {
                x = (x / (x - 1));
                for (int i = 1.0; i < 1000; i++) {
                    res += 1.0 / (i * v1_simple_pow(x, i));
                }
            } else {
                res = v1_log(x * 2) - v1_log(2);
            }
        } else {
            int exp = 0;
            if (x > 10) {
                while (x > 10) {
                    x /= 10;
                    exp++;
                }
            } else {
                if (x != v1_DBL_MIN) {
                    while (x < 0.1) {
                        x *= 10;
                        exp--;
                    }
                }
            }
            if (x != v1_DBL_MIN)
                res = v1_log(x) + exp * E_10;
            else if (x == v1_DBL_MIN)
                res = -708.396419;
        }
    }
    return res;
}

long double v1_acos(double x) {
    long double res = 0.0;
    if (x != x || x > 1.0 || x < -1.0) {
        res = v1_NAN;
    } else if (x == 1) {
        res = 0;
    } else if (x == -1) {
        res = v1_PI;
    } else {
        res = v1_PI_2 - v1_asin(x);
    }
    return res;
}

long double v1_asin(double x) {
    long double res = 0.0;
    if (x != x || x > 1.0 || x < -1.0) {
        res = v1_NAN;
    } else if (x == 1) {
        res = v1_PI_2;
    } else if (x == -1) {
        res = -v1_PI_2;
    } else {
        res = v1_atan(x / v1_sqrt(1 - x * x));
    }
    return res;
}

long double v1_atan(double x) {
    long double res = 0.0;
    if (x != x) {
        res = -v1_NAN;
    } else if (x == v1_INFINITY) {
        res = v1_PI_2;
    } else if (x == -v1_INFINITY) {
        res = -v1_PI_2;
    } else {
        int minus = 0;
        if (x < 0) {
            x *= -1;
            minus = 1;
        }
        if (x >= 0 && x <= 0.4375) {  // Maclaurin series at zero
            for (int n = 0; n < 100; ++n) {
                res += (v1_pow(-1, n) * v1_pow(x, (2 * n + 1))) / (2 * n + 1);
            }
        }
        if (x > 0.4375 && x <= 0.6875) {
            res = v1_atan_05 + v1_atan((x - 0.5) / (1 + x / 2));
        }
        if (x > 0.6875 && x <= 1.1875) {
            res = v1_atan_1 + v1_atan((x - 1) / (1 + x));
        }
        if (x > 1.1875 && x <= 2.4375) {
            res = v1_atan_15 + v1_atan((x - 1.5) / (1 + 1.5 * x));
        }
        if (x > 2.4375) {
            res = v1_PI_2 + v1_atan(-1 / x);
        }
        if (minus) res *= -1;
    }
    return res;
}

// returns the nearest intv1er not less than the given value
long double v1_ceil(double x) {
    int flag = 0;
    long double result;
    if (x >= LLONG_MAX || x <= LLONG_MIN) {
        flag = 1;
        result = x;
    }
    if (x == 0.0) {
        flag = 1;
        result = x;
    }
    if (flag != 1) {
        long long num = (long long)x;
        result = (double)num;
        if (result == x || x < 0) {
        } else {
            result = result + 1;
        }
    }
    return x != x ? v1_NAN : result;
}

// calculates the absolute value of a floating point number
long double v1_fabs(double x) {
    long double result = x;
    if (result < 0)
        result = -result;
    return result;
}

// returns the nearest intv1er less than or equal to the given value
long double v1_floor(double x) {
    int flag = 0;
    long double result;
    if (x >= LLONG_MAX || x <= LLONG_MIN) {  // if use inf some assumptiond would not work right
        flag = 1;
        result = x;
    }
    if (x == 0.0) {
        flag = 1;
        result = x;
    }
    if (flag != 1) {
        long long num = (long long)x;
        result = (double)num;
        if (result == x || x > 0) {
        } else {
            result = result - 1;
        }
    }
    return x != x ? v1_NAN : result;
}

// floating point division remainder
long double v1_fmod(double x, double y) {
    long double result;
    if ((x && y) || (y != 0)) {
        result = x - ((long int)(x / y) * y);
        if (x == v1_NAN || y == v1_NAN)
            result = v1_NAN;
        if (y == +0.0 || y == -0.0)
            result = v1_NAN;
        if (x == v1_INFINITY || x == -v1_INFINITY)
            result = v1_NAN;
        if (x == 0.0)
            result = 0.0;
    } else {
        result = v1_NAN;
    }
    return result;
}

// Babylonian method of exponentiation | x1 = 1/2(x0 + 2/x0)
long double v1_simple_pow(double base, int exp) {
    long double result = 1.0;
    for (double i = 0.0; i < exp; ++i) result *= (long double)base;
    return result;
}
