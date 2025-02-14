//
// Created by up202411286 on 14-02-2025.
//
#include <iostream>

int main() {
    int x;          // Declares x as a variable of type int
    std::cin >> x;  // Reads input value for x
    if ( x % 2 == 0) {  // Module
        std::cout << x << " is even\n";
    } else {
        std::cout << x << " is odd\n";
    }
    return 0;
}