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

char lower(char c) {
    if ( (c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z') ) { //letter
        if (c >= 'A' and c <= 'Z') return c + ('a' - 'A'); // lower case
    }
    return c;
}

int common_letters(const char a[], const char b[], char out[]) {
    // str-ing a, str-ing b, str-ing out

    // low = uppercase; insensitive >> tolower()
    //for (char& c : a) c = tolower(c); // OPA! CONST, n vai conseguir alterar
    //for (char& d : b) d = tolower(d);

    int n = 0; // number of letter char occur both a and b

    // ieração sobre todos elementos de a
    for (int i = 0; a[i] != '\0'; i++) {
        char elem = lower(a[i]);
        // checar se é letra
        if (elem >= 'a' and elem <= 'z') {
            // procurar em b
            for (int j = 0; b[j] != '\0'; j++) {
                if (elem == lower(b[j])) { // encontrado
                    // checar repetido
                    bool flag = true;
                    for (int k = 0; out[k] != '\0'; k++) {
                        if (elem == lower(out[k])) {
                            // repetido
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        out[n++] = elem; // add out
                        cout << "escrevi em out " << elem << endl;
                    }
                }
            }
        }
    }

    // Organizar out em ordem alfabética Bubble Sort
    for (int i = 0; i < n - 1 ; i++) {
        for (int j = i + 1; j < n; j++) {
            if (out[j] < out[i]) {
                char temp = out[i];
                out[i] = out[j];
                out[j] = temp;
            }
        }
    }

    // At the end add '\0' to out >> terminate the string with the number of c added
    out[n] = '\0';
    return n;
}

int main () {
    char out[26+1];
    int n = common_letters("+LEICazb", "c++azb", out);
    cout << n << " \"" << out << "\"\n";
    return 0;
}


////// Little help from the entity
/*
// Function to convert uppercase letters to lowercase manually
char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); // Convert uppercase to lowercase
    }
    return c; // Already lowercase or not a letter
}

// Function to check if a character is a letter (A-Z or a-z)
bool is_letter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

// Function to find common letters (case-insensitive, unique, sorted)
int common_letters(const char a[], const char b[], char out[]) {
    int n = 0; // Number of unique common letters found

    // Iterate through `a`
    for (int i = 0; a[i] != '\0'; i++) {
        char ca = to_lower(a[i]);

        // Only process if it is a letter
        if (!is_letter(ca)) continue;

        // Check if this letter exists in `b`
        bool found_in_b = false;
        for (int j = 0; b[j] != '\0'; j++) {
            if (to_lower(b[j]) == ca) {
                found_in_b = true;
                break;
            }
        }

        // If letter is found in `b`, ensure it's not already in `out`
        if (found_in_b) {
            bool already_in_out = false;
            for (int k = 0; k < n; k++) {
                if (out[k] == ca) {
                    already_in_out = true;
                    break;
                }
            }

            // If not already in `out`, add it
            if (!already_in_out) {
                out[n++] = ca;
            }
        }
    }

    // Null-terminate `out`
    out[n] = '\0';

    // Sort `out` in alphabetical order (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (out[j] > out[j + 1]) {
                char temp = out[j];
                out[j] = out[j + 1];
                out[j + 1] = temp;
            }
        }
    }

    return n;
}

int main() {
    char out[26 + 1]; // Maximum 26 letters + null terminator
    int n = common_letters("+LEIC", "c++", out);
    cout << n << " \"" << out << "\"\n"; // Expected output: 1 "c"
    return 0;
}
*/
