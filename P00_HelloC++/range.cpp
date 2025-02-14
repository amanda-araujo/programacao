//
// Created by up202411286 on 14-02-2025.
//
#include <iostream>

int main() {
    int a, b;           // Declare variables
    std::cin >> a >> b; // Read input and assign variables
    // TODO: change initial value of i and fix test condition
    for (int i = a; i <= b; i++) {
        std::cout << i << ' ';
    }
    return 0;
}