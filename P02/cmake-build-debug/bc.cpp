//
// Created by up202411286 on 28-02-2025.
//
/*Write a C++ function unsigned long bc(unsigned long n, unsigned
 *long k) to compute binomial coefficients. */

#include <iostream>

// (n-k)! / k!
unsigned long bc(unsigned long n, unsigned long k) {
    unsigned long bc = 1;

    int max = n - k;
    for (int i = n; i > max; i--) { // n!
        std::cout << i << '\n';
        bc = bc * i; // last term: (n - k + 1)
        //std::cout << bc << '\n';
    }
    std::cout << bc << '\n';
    for (int j = k; k >= 1; k--) {
        //std::cout << k << '\n';
        bc = bc / j;
        //std::cout << bc << '\n';
    }
    return bc;
}

int main() {
    std::cout << bc(5, 5) << '\n';
    return 0;
}