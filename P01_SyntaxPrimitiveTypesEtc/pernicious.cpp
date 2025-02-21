//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

/* Write a C++ program that prints the value of all numbers between a and b that are both pernicious
 * and prime, where a and b are positive integers supplied as input.*/

#include <iostream>

using namespace std;

// Functions prototypes
bool isPrime(int n);
bool isPernicious(int n);

int main() {
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (isPernicious(i) and isPrime(i)) std::cout << i << ' ';
    }

    return 0;
}

// Functions
bool isPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPernicious(int n) {
    // Prime number of 1s in their binary representation
    int count = __builtin_popcount(n); // Count number rof 1s in binary rep
    if (isPrime(count)) return true;
    else return false;
}