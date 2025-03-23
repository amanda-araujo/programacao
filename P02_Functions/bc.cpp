//
// Created by Amanda on 14/03/2025.
//

/* Write a C++ function unsigned long bc(unsigned long n, unsigned long k)
 * to compute binomial coefficients.*/

#include <iostream>
using namespace std;

unsigned long bc(unsigned long n, unsigned long k) {
    // Input: n, k
    // Output: coef binomial
    // (n k) = n!/ ( k! (n - k)! ) = n (n - 1) ... (n - k + 1) / (n - k)
    unsigned long bc = 1;

    for (unsigned long i = n; i > (n - k); i--) bc = bc * i; // numerator
    for (unsigned long i = k; i > 0; i--) bc = bc / i;
    return bc;
}

int main () {
    cout << bc(5, 0) << endl;
    cout << bc(5, 1) << endl;
    cout << bc(5, 5) << endl;
    cout << bc(5, 2) << endl;
    cout << bc(12, 7) << endl;
    cout << bc(20, 10) << endl;
    return 0;
}