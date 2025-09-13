#include "MathLibrary.h"
#include <iostream>

int main() {
  int a = 2;
  int b = 9;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "a + b = " << calc::Arithmetic::Add(a, b) << std::endl;
  std::cout << "a - b = " << calc::Arithmetic::Subtract(a, b) << std::endl;
  std::cout << "a * b = " << calc::Arithmetic::Multiply(a, b) << std::endl;
  std::cout << "a / b = " << calc::Arithmetic::Divide(a, b) << std::endl;
  std::cout << "a % b = " << calc::Arithmetic::Modulus(b, a) << std::endl;
  std::cout << "a ^ b = " << calc::Arithmetic::Power(a, b) << std::endl;
  return 0;
}