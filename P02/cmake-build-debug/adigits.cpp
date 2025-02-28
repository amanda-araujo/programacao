//
// Created by up202411286 on 28-02-2025.
//
#include <iostream>

int adigits(int a, int b, int c) {
    // Biggest to hundreds
    int max = 0;
    if (a >= b) {
        if (a >= c) {
            max += a * 100; // a largest
            if (b >= c) max += b * 10 + c; // b second, c last
            else max += c * 10 + b; // // c second, b last
        }
        else max += c * 100 + a * 10 + b; // c > a > b
    }
    else { // b > a
        if (b >= c) { // b > c
            max += b * 100; // b largest
            if (a >= c) max += a * 10 + c; // a second, c last
            else max += c * 10 + a;
        }
        else max += c * 100 + b * 10 + a; // b > a > c
    }

    return max;
}

int main() {
    int max = adigits(1, 2, 3);
    std::cout << max << '\n';
    return  0;
}