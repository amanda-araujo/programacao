//
// Created by up202411286 on 21-03-2025.
//
#include <iostream>
#include "cdata.h"
using namespace std;

// struct cdata {
//     int count; // n repetitions
//     int value;
// };

/* returns a dynamically allocated array of type int for the sequence of all
 * values expressed in compressed form by cdata elements in array a of length
 * n.
 * The resulting array should always be allocated using new
 */

int* expand_cdata(const cdata a[], int n) {

    // Counts
    int counts = 0;
    for (int i = 0; i < n; i++) {
         counts += a[i].count;
    }

    int* array_ptr = new int[counts]; // Allocate memory for an array type int

    int index = 0; // Tracking index new array
    for (int i = 0; i < n; i++) { // For each element in cdata
        for (int j = 0; j < a[i].count; j++) { // For each repetition of a value
            array_ptr[index++] = a[i].value; // Add in new array_ptr
        }
    }

    return array_ptr;
}

int main () {
    const int n = 1;
    const cdata a[] { { 3, 999 } };
    int* r = expand_cdata(a, n);
    print_array(r, 3);
    delete [] r;
    return 0;
}
