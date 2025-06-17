//
// Created by Amanda on 16/06/2025.
//

#include <iostream>
#include "Sum.h"
#include "Power.h"

int main() {
  // const Operation& s = Sum(2, 10); std::cout << s.operation() << ' ';
  // const Operation& p = Power(2, 10); std::cout << p.operation() << std::endl;

  Sum s(6, -2); std::cout << s.operation() << ' ';
  Power p(-3, 0); std::cout << p.operation() << std::endl;
  return 0;
}