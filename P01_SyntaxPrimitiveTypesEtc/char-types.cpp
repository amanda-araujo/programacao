//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

//Write a C++ program that reads an integer number n by user input followed by n characters,
// all separated by spaces, and then prints the number of characters read that are letters,
// the number of characters read that are digits, and the number of characters read that are
// not letters or digits.

#include <iostream>

int main() {
    int n;
    std::cin >> n; // Reads input: integer number

    char c;
    int letters = 0;
    int digits = 0;
    int others = 0;

    for (int i = 0; i < n; i++) { // Read n characters
        std::cin >> c;
        // Checking type: letter, digit or others
        if ( (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') ) { // && = and, || = or
            letters++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else others++;
    }
    std::cout << letters << ' ' << digits << ' ' << others << '\n'; // Print letters, digits, others
    return 0;
}
