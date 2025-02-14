//
// Created by up202411286 on 14-02-2025.
//
#include <iostream>

int main() {
    int x;         // Variable declaration
    std::cin >> x; // Read input value for x
    int y = x * x - x + 1;
    std::cout << x << ' ' << y << '\n'; // Print x and y
    return 0;
}