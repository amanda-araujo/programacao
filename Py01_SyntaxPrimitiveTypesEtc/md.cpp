//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    int dist = 0;
    int xi, yi; // Initial pair
    std::cin >> xi >> yi;
    int x, y;   // New pairs
    for (int i = 1; i < n; i++) {
        std::cin >> x >> y; // Read new pair
        dist += abs(xi - x) + abs(yi - y); // Manhattan distance
        xi = x;
        yi = y;
    }
    std::cout << dist;
    return 0;
}

