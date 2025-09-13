// MathLibrary.cpp


#include "MathLibrary.h"
#include <cmath>

namespace calc {
double Arithmetic::Add(double a, double b) { return a + b; }

double Arithmetic::Subtract(double a, double b) { return a - b; }

double Arithmetic::Multiply(double a, double b) { return a * b; }

double Arithmetic::Divide(double a, double b) { return a / b; }

double Arithmetic::Modulus(double a, double b) { return fmod(a, b); }

double Arithmetic::Power(double a, double b) { return pow(a, b); }
} // namespace calc