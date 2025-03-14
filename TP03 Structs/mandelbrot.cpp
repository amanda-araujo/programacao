//
// Created by Amanda on 14/03/2025.
//

#include <iostream>
#include "complex.h"

void add(const complex& a, const complex& b, complex& r) {
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    return;
}

void mul(const complex& a, const complex& b, complex& r) {
    r.x = a.x * b.x - a.y * b.y;
    r.y = a.x * b.y + a.y * b.x;
    return;
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n) {

    // Base case
    if (n == 0) {
        z_n.x = 0;
        z_n.y = 0;
        return;
    }

    // Recurrence //add(mul(mandelbrot(c, n - 1, z_n), mandelbrot(c, n - 1, z_n), z_n), c, z_n);
    // Previous z_n's
    complex z_prev;
    mandelbrot(c, n - 1, z_prev); // modifies by reference

    // z_n = z_prev * z_prev + c
    complex z_sq;
    mul(z_prev, z_prev, z_sq); // modifies by reference
    add(z_sq, c, z_n);         // modifies by reference
}

int main () {
    complex z_n;
    mandelbrot({1.2, 3.4}, 0, z_n);
    std::cout << z_n << '\n';
    mandelbrot({1, 1}, 1, z_n);
    std::cout << z_n << '\n';
    mandelbrot({1, 1}, 2, z_n);
    std::cout << z_n << '\n';
    mandelbrot({-1.2, 0.4}, 7, z_n);
    std::cout << z_n << '\n';
    mandelbrot({0.1, 3.2}, 4, z_n);
    std::cout << z_n << '\n';
    mandelbrot({-1, 0}, 11, z_n);
    std::cout << z_n << '\n';
    return 0;
}
