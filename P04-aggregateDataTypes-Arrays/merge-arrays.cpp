//
// Created by up202411286 on 14-03-2025.
//

/* Write a C++ function void merge_arrays(const int a[], int na, const int b[], int nb, int c[])
 * that merges 2 arrays, a with na > 0 elements and b, with nb > 0 elements, sor-ted in ascending
 * order, placing the result in array c. The values in c must also be sor-ted in ascending order. */

#include <iostream>
#include "print_array.h"
using namespace std;

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]) {
    // Input: array a, size a, array b, size b, array c
    // a, b: ascending order
    int ia = 0, ib = 0, i = 0; // keep track

    // guarantee array limits limits na and nb
    while (ia < na and ib < nb) { // a and b have elements
        if (a[ia] <= b[ib]) {     // compare for smaller element
            c[i++] = a[ia++]; // add + walk in a and c
            // ia++;
            // i++;
        }
        else {
            c[i++] = b[ib++]; // add + walk in b and c
            // ib++;
            // i++;
        }
    } // out of loop: if a ended or b ended

    while (ia < na) { // used all b elements: just append a
        c[i++] = a[ia++];
    }

    while (ib < nb) { // used all a elements: just append b
        c[i++] = b[ib++];
    }

    // cout << "print: ";
    // for (int i = 0; i < (na + nb); i++) {cout << c[i] << endl;};
}

int main () {
    const int NA = 4, NB = 6;
    int a[NA] = { 1, 2, 4, 7};
    int b[NB] = { 0, 3, 5, 6, 8, 9};
    int c[NA+NB];
    merge_arrays(a, NA, b, NB, c);
    print_array(c, NA+NB);
    return 0;
}