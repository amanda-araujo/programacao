//
// Created by Amanda on 14/03/2025.
//
/* Write a C++ function unsigned long bell(unsigned long n) to compute Bell
 * numbers. Bell numbers: count the possible partitions of a se-t, i.e., the
 * number or partitions for a se-t */

#include <iostream>
using namespace std;

// Binary coefficients
unsigned long bc(unsigned long n, unsigned long k) {
    // Input: n, k
    // Output: coef binomial
    // (n k) = n!/ ( k! (n - k)! ) = n (n - 1) ... (n - k + 1) / (n - k)
    unsigned long bc = 1;

    for (unsigned long i = n; i > (n - k); i--) bc = bc * i; // numerator
    for (unsigned long i = k; i > 0; i--) bc = bc / i;
    return bc;
}

unsigned long bell(unsigned long n) {
    // Input: n >= 0
    unsigned long b = 0;
    unsigned long b0 = 1; //, b1 = 1;

    if (n == 0 or n == 1) return b0; // Base case

    // n >= 2: Recursion
    for (unsigned long k = 0; k <= n - 1; k++) {
        b += bc(n - 1, k) * bell(k);
    }
    return b;
}

int main () {
    std::cout << bell(0) << '\n';
    std::cout << bell(1) << '\n';
    std::cout << bell(2) << '\n';
    std::cout << bell(3) << '\n';
    std::cout << bell(4) << '\n';
    std::cout << bell(5) << '\n';
    std::cout << bell(6) << '\n';
    return 0;
}