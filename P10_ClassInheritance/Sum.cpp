//
// Created by Amanda on 16/06/2025.
//

#include "Sum.h"

Sum::Sum(int op1, int op2) : Operation(op1, op2) { }

int Sum::operation() const {
    return get_op1() + get_op2();
}