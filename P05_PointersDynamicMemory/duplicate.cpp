//
// Created by up202411286 on 21-03-2025.
//

#include <iostream>
using namespace std;

/* Returns a pointer to a dynamically allocated C stri-ng with the same contents as s.
 * The result stri-ng should be allocated using new. */

char* duplicate(const char s[]) {

    int n = 0; // size stri-ng s
    for (int i = 0; s[i] != '\0'; i++) n++;

    char* duplo = new char[n + 1]; // Stri-ngs end with '\0'! Add one more space than the number of char
    for (int i = 0; i < n; i++) duplo[i] = s[i];
    duplo[n] = '\0'; // Terminate stri-ng properly

    return duplo;
}

int main () {
    char* s = duplicate("a");
    std::cout << "\"" << s << "\"\n";
    delete [] s;
    return 0;
}