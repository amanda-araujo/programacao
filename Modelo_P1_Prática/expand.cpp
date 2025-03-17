//
// Created by Amanda on 17/03/2025.
//

/* Write a C++ function that writes in the given array res of type int,
 * with size max, the sequence of all values expressed in "compressed" form
 * by arrays c and v with length n > 0 as follows: the resulting array
 * should contain c[i] repetitions of value v[i] for i = 0, . . . , n-1.
 *
 * The function should return an int with the number of characters that
 * were written to res. If the number of characters needed to be written is
 * bigger than the size of res, given by max, the function should not modify
 * res and return -1.
*/

#include <iostream>
#include "print_array.h"
using namespace std;

int expand(const int c[], const int v[], int n, int res[], int max) {
    // res: c[i] repeticoes do valor v[i] para i = 0, ..., n-1
    int nchar = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < c[i]; j++) {
            if (nchar >= max) return -1;
            res[nchar++] = v[i];
        }
    }

    return nchar;
}

int main () {
    const int n = 1;
    const int c[]{3};
    const int v[]{999};
    const int max = 3;
    int res[max] = {0};
    int len = expand(c, v, n, res, max);
    print_array(res, len);
    return 0;
}