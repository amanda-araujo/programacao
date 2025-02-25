//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

/* Write a C++ program that, given an integer by user input, computes its reverse (the number with the digits by
 * the reverse order) and prints it. You cannot use strings.*/

#include <iostream>

// Function Prototype
int reverse(int n){
    int rev = 0;
    int digit;
    while (n != 0){
        digit = n % 10; // Extracts the last digit
        rev = rev * 10 + digit; // Includes digit in the reverse (<< left; decimal)
        n /= 10;        // Remove the last digit
    }
    return rev;
}

int main() {
    int n;
    std::cin >> n;

    // Without using strings
    // Aritmetics! Decimal number representation
    int rev = reverse(n);
    std::cout << rev << std::endl;
    return 0;
}


/* Casos Teste:
123 321
789 987
78989 98987
45654 45654
*/