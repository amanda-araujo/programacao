//
// Created by up202411286 on 28-02-2025.
//
/*Write a C++ function to solve the quadratic equation for the case
 *where a, b, c are integer coefficients, with a≠0*/

#include <iostream>
#include <cmath>
#include <iomanip>

int solve_eq(int a, int b, int c, double& x1, double& x2) {
    int nsol;      // Number of solutions
    //double x1, x2; // Solutions

    double delta = b * b - 4.0 * a * c;
    //std::cout << delta << '\n';

    if (delta == 0.0) { // 1 solution
        nsol = 1;
        x2 = NAN;
        x1 = -b / (2.0 * a);
    }
    else if (delta < 0.0) { // no solution
        nsol = 0;
        x1 = x2 = NAN;
    }
    else { // 2 solutions
        nsol = 2;
        x1 = (-b - std::sqrt(delta)) / (2.0 * a);
        x2 = (-b + std::sqrt(delta)) / (2.0 * a);
    }
    return nsol;
}

int main() {
    double x1, x2; // Solutions
    int r = solve_eq(-9, 6, -1, x1, x2);
    std::cout << std::fixed << std::setprecision(7) << r << ' ' << x1 << ' ' << x2 << '\n';

    return 0;
}