//
// Created by Amanda on 16/06/2025.
//

#ifndef POWER_H
#define POWER_H
#include "Operation.h"


class Power : public Operation{
public:
    Power(int op1, int op2);
    virtual int operation() const;
};



#endif //POWER_H
