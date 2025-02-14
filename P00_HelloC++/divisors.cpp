//
// Created by up202411286 on 14-02-2025.
//

#include <iostream>

int main() {
    int n;         // Declare variable
    std::cin >> n; // Read input
    for (int i = 1; i <= n - 1; i++) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }
    return 0;
}
