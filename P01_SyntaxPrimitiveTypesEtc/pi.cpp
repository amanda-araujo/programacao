//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

/*The value of π
 can be approximated by the Gregory–Leibniz series:
 4∑kn=0(−1)n/(2n+1)
Write a C++ program that given integers k and d prints the k-th approximation with d decimal places.
You should make use of a value of type double for the approximation, and customise the print format
using std::fixed and std::setprecision defined in header <iomanip>, i.e., for a value x of type
double and d digits of precision, print x with d digits using
    std::cout << std::fixed << std::setprecision(d) << x; */

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int k, d;
    std::cin >> k >> d; // Read inouts separated by ' '

    // Gregory-Leibniz series approximation
    double x;
    double sum = 0;
    for (int i = 0; i <= k; i++) {
        sum += pow(-1.0, i)/(2*i + 1);
    }
    x = 4 * sum;

    std::cout << std::fixed << std::setprecision(d) << x << std::endl;
    return 0;
}
