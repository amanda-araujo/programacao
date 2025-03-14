//
// Created by up202411286 on 14-03-2025.
//

/* Write a C++ function unsigned long hstr_to_integer(const char hstr[]) that converts a C
 * stri-ng formed by the characters that correspond to hexadecimal digits
 * (‘0’ to ‘9’, ‘a’ to ‘f’, or ‘A’ to ‘F’) to the corresponding integer decimal value.
 * Remember that, as usual, C strin-gs are null-terminated. */

#include <iostream>
using namespace std;

unsigned long long hstr_to_integer(const char hstr[]) {
    // Input: vect-or of char (C-stri-ng)

    // Size of stri-ng
    // int n = 0;
    // while (hstr[n]) n++; // NOT null

    // Read char by char (hex digit by hex digit) to get the hex number
    // Aritmethics of the hex base

    //return stoi(hstr, 0, 16); // strin-g to int
    return strtoull(hstr, NULL, 16); // strin-g to unsigned long long int
}

int main () {
    cout << hstr_to_integer("19") << endl; // 25
    cout << hstr_to_integer("A") << endl;  // 10
    cout << hstr_to_integer("fF") << endl; // 255
    cout << hstr_to_integer("CafeBabe2022") << endl; // 223195403526178
    return 0;
}