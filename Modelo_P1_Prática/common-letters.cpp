//
// Created by Amanda on 17/03/2025.
//

/* Submit a file with name common-letters.cpp containing the C++ function.
 * Given C-strings a and b, containing all types of characters, the function
 * should return the number of letter characters that occur both in a and
 * in b and write to C-string out all such characters in alphabetical order.
 * Letter characters in a and in b should be handled in case insensitive
 * manner and should be written to out in lowercase.
 * For example, if a="+LEIC" and b="c++" the function should return 1 and
 * out should contain "c" on exit.
 * Note: You can not use container objects (vector, list, set, string, ...)
 * or any C++ library function.*/

#include <iostream>
using namespace std;

int common_letters(const char a[], const char b[], char out[]) {
    // str-ing a, str-ing b, str-ing out
    int n = 0; // number of letter char occur both a and b
    // low = uppercase; insensitive >> tolower()

    for (char& c : a) { // for each loop
        // para cada letra de a, procurar em b (c = C)
        for (char& d : b) {
            if (tolower(c) == tolower(d)) break;
        }

        // checar se já em out: n estando, add; n++
        int flag = 0;
        for (char& e : out) {
            if (tolower(c) == e) { flag = 1; break; } // repetido; já em out
        }
        if (flag == 0) out[n++] = tolower(c);
    }

    //
    // for (char c : a) { // for each letter in a
    //     for (char d : b) { // search for correspondence in b
    //         if (c == d) { out[n++] = c; }
    //     }
    // }

    return n;
}

int main () {
    char out[26+1];
    int n = common_letters("+LEIC", "c++", out);
    cout << n << " \"" << out << "\"\n";
    return 0;
}
