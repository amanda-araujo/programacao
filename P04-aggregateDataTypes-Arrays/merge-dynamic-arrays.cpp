//
// Created by up202411286 on 14-03-2025.
//

/* Write a C++ function int* merge_arrays(const int a[], int na, const int b[], int nb)
 * that returns a dynamically allocated array that merges the elements of two arrays, a with
 * na > 0 elements and b, with nb > 0 elements, both sor-ted in ascending order.
 * The result array must also be sor-ted in ascending order.  */

#include <iostream>
#include "print_array.h"
using namespace std;

int* merge_arrays(const int a[], int na, const int b[], int nb) {
    // Input: array a, size a, array b, size b
    // Output: array c (merged, ascending order)

    int* c = new int[na + nb]; // Allocates new memory
    /*/ Allocate memory for an array of type T: T* array_ptr = new T[size] */

    int ia = 0, ib = 0, i = 0; // keep track in a and b

    while (ia < na and ib < nb) { // a and b have elements
        if (a[ia] <= b[ib]) {     // compare for smaller element
            c[i++] = a[ia++]; // add + walk in a and c
        }
        else {
            c[i++] = b[ib++]; // add + walk in b and c
        }
    } // out of loop: if a ended or b ended

    while (ia < na) { // used all b elements: just append a
        c[i++] = a[ia++];
    }

    while (ib < nb) { // used all a elements: just append b
        c[i++] = b[ib++];
    }
    return c;
}

int main () {
    const int NA = 4, NB = 6;
    int a[NA] = { 1, 2, 4, 7};
    int b[NB] = { 0, 3, 5, 6, 8, 9};
    int* c = merge_arrays(a, NA, b, NB);
    print_array(c, NA+NB);
    delete [] c;
    return 0;
}