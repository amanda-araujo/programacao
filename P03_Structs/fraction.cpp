//
// Created by Amanda on 14/03/2025.
// Created by up202411286 on 07-03-2025.
//

#include <iostream>
#include "fraction.h"
using namespace std;

// struct fraction {
//     int num; // Numerator
//     int den; // Denominator
// };

// Auxiliary Function: greatest common divisor
int gcd(int a, int b) {
    // Greatest commun divisor: MDC
    if (b == 0) return a;   // Base case
    return gcd(b, a % b); // Recurrence
}

// Functions
fraction add(fraction a, fraction b) {
    // Input: fraction a and b
    // Output: fraction a + b
    fraction f;

    // Arithmetics
    if (a.den == b.den) {
        f.den = a.den;
        f.num = a.num + b.num;
    }
    else {
        f.den = a.den * b.den;
        f.num = (a.num * b.den) + (b.num * a.den);
    }

    // Check irreducibility
    int mdc = gcd(f.den, f.num);
    if (mdc != 1) {
        f.den = f.den / mdc;
        f.num = f.num / mdc;
    }

    // Signal: - always on numerator (not denominator)
    if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }

    // Final irreducible fraction
    return {f.num, f.den};
}

fraction mul(fraction a, fraction b) {
    fraction f;
    f.den = a.den * b.den;
    f.num = a.num * b.num;

    // Check irreducibility
    int mdc = gcd(f.den, f.num);
    if (mdc != 1) {
        f.den = f.den / mdc;
        f.num = f.num / mdc;
    }

    // Signal: - always on numerator (not denominator)
    if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    return {f.num, f.den};
}

int main () {
    fraction a { 0, 1 }, b { 2, 1};
    std::cout << add(a,b) << ' ' << mul(a,b) << '\n';
    fraction c { -3, 2 }, d { 3, 2 };
    std::cout << add(c,d) << ' ' << mul(c,d) << '\n';
    fraction e { -3, 2 }, f { -2, 3 };
    std::cout << add(e,f) << ' ' << mul(e,f) << '\n';
    return 0;
}


