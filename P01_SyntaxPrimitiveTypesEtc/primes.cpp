//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

/*Write a C++ program that takes an integer n, provided by the user, and prints all prime numbers
 *up to n. */

#include <iostream>
#include <math.h>
#include <valarray>

bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) std::cout << i << ' '; // True
    }

    return 0;
}
