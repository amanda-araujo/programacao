//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

/* Write a C++ program that “plays” a version of the game FizzBuzz over a sequence of natural numbers up to an integer n provided by the user.

The program should print each number in the sequence, separated by a space. However:

If the number is a multiple of 3, it prints the word "Fizz" instead
If the number is a multiple of 5, it prints the word "Buzz" instead
If the number is both a multiple of 3 and 5, does not print anything*/

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        // Checking FizzBuzz rules for the number
        if (i % 3 == 0) {
            if (i % 5 == 0) {
                // print nothing
                //break;
            }
            else {
                std::cout << "Fizz ";
            }
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz ";
        }
        else {
            std::cout << i << " ";
        }
    }
    return 0;
}