//
// Created by up202411286 on 21-03-2025.
//

#include <iostream>
using namespace std;

/* The function takes a nullptr-terminated array pa of pointers to C stri-ngs and returns the
 * array element (a C stri-ng pointer) corresponding to the longest stri-ng.*/

const char* longest(const char* pa[]) {
    // Input: pa ends with nullptr

    int max = 0; // Size longest stri-ng
    const char* longest = nullptr; // Pointer to longest stri-ng // CONST CHAR*

    int i = 0;
    while (pa[i] != nullptr) {

        // Look for the longest stri-ng i the array
        int n = 0; // Size of the stri-ng
        for (int j = 0; pa[i][j] != '\0'; j++) n++;

        // Check if the stri-ng is the longest
        if (n >= max) {
            max = n;
            longest = pa[i];
        }

        i++; // Update index in pa
    }

    return longest;
}

int main () {
    const char* pa[] = { "C++", nullptr };
    std::cout << "\"" << longest(pa) << "\"\n";

    const char* pb[] = { "", "0123", "Hello", "world", "!", nullptr };
    std::cout << "\"" << longest(pb) << "\"\n";

    const char* pc[] = { "C++", "Python", "Java", "C#", "Julia", "Rust", "Haskell", "Typescript", "OCaml", "Fortran", nullptr };
    std::cout << "\"" << longest(pc) << "\"\n";
    return 0;
}