//
// Created by Amanda on 16/06/2025.
//

#ifndef SUM_H
#define SUM_H
#include "Operation.h"


class Sum : public Operation{
public:
    Sum(int op1, int op2);
    virtual int operation() const;
};



#endif //SUM_H
