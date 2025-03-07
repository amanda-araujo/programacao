//
// Created by up202411286 on 07-03-2025.
//

#include <iostream>
#include "fraction.h"

fraction add(fraction a, fraction b);
fraction mul(fraction a, fraction b);

fraction add(fraction a, fraction b) {
    if (a.den == b.den) return {a.num + b.num, a.den};

    fraction f;
    f.den = a.den * b.den;
    f.num = (a.num * b.den) + (b.num * a.den);
    // Check irredutibility

    return {f.num, f.den};
}

// Functions
int gcd(int a, int b) {
    // Greatest commun divisor: MDC
    if (b == 0) return a;
    gcd(b, a % b);
}