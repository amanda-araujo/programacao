//
// Created by Amanda on 14/03/2025.
//

/* Complex numbers c = x + yi
 * Operations: add, mult and norm
 */

#include <iostream>
#include "complex.h"
#include <cmath>
#include <math.h>
using namespace std;

// struct complex {
//     double x; // Real part
//     double y; // Imaginary part
// };

void add(const complex& a, const complex& b, complex& r) {
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    return;
}

void mul(const complex& a, const complex& b, complex& r) {
    r.x = a.x * b.x - a.y * b.y;
    r.y = a.x * b.y + a.y * b.x;
    return;
}

double norm(const complex& c) {
    return sqrt(c.x * c.x + c.y * c.y);
}

int main () {
    return 0;
}