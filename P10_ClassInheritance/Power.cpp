//
// Created by Amanda on 16/06/2025.
//

#include "Power.h"
#include <cmath>
#include <valarray>
using namespace std;

Power::Power(int op1, int op2) : Operation(op1, op2) { }

int Power::operation() const {
    return pow(get_op1(), get_op2());
}