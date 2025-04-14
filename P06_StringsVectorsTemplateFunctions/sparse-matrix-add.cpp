//
// Created by Amanda on 13/04/2025.
//
#include <iostream>
#include "smatrix.h"
using namespace std;

/* Sparse matrix
 * struct sm_entry {
 *   size_t row;  // Matrix row
 *   size_t col;  // Matrix column
 *   int value;   // Value (non-zero)
 * };
 * typedef vector<sm_entry> smatrix; >> vector of sm_entry's
 */

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    // in order row - column
    // add value != 0
    // walk in a and b
    size_t sa = a.size();
    size_t sb = b.size();

    size_t i = 0, j = 0;
    while (i < sa and j < sb) {

        if (a[i].row < b[j].row or (a[i].row == b[j].row && a[i].col < b[j].col)) {
            r.push_back(a[i]);
            i++;
        }

        else if (b[j].row < a[i].row or (b[j].row == a[i].row && b[j].col < a[i].col)) {
            r.push_back(b[j]);
            j++;
        }

        else {
            // sum
            int sum = a[i].value + b[j].value;
            if (sum != 0) r.push_back( {a[i].row, a[i].col, sum});
            i++;
            j++;
        }
    }

    // Add the rest of a and b
    while (i < sa) r.push_back(a[i++]);
    while (j < sb) r.push_back(b[j++]);
}

int main () {
    smatrix r;
    // sum({ {0, 0, 1}, {0, 1, 2}, {5, 10, 20}, {99, 12, 32} },
    //     { {0, 0, 1}, {0, 1, -2}, {10, 5, 20}, {99, 10, 30}, {99, 11, 31} },
    //     r);
    sum({ {0, 0, -1}, {0, 1, 2},  {5, 10, 20 }, {10, 5, -20} },
      { {0, 0, 1}, {0, 1, -2},  {5, 10, -20}, {10, 5, 20} },
      r);
    print(r);
    return 0;
}

/* // r: the result of adding the sparse matrices represented by a and b
    // a, b: ordered by row - column
    size_t sa = a.size();
    size_t sb = b.size();

    // Add all a
    for (size_t i = 0; i < sa; i++) {
        r.push_back(a[i]);
    }

    // Add all b checking if already in r
    for (size_t i = 0; i < sb; i++) {

        // Check correspondence in r
        int flag = 0;
        for (size_t j = 0; j < r.size(); j++) {
            if (b[i].row == r[j].row and b[i].col == r[j].col) {
                r[j].value += b[i].value;
                flag = 1;

                // Value zero not added in a sparse matrix representation!
                // no such a thing as .pop(element)!!!
                // possible with iterators (not there yet)
                // let be sure we don't add elements value zero
                // run in a and b
                if (r[j].value == 0) r.erase(j); //r.pop_back();
            }
        }
        if (flag == 0) r.push_back(b[i]);
    }

    // Order r: by row, then column
    for (size_t i = 1; i < r.size(); i++) {
        // Comparison
        if (r[i].row < r[i - 1].row) { swap(r[i], r[i - 1]); }
        else if (r[i].row == r[i - 1].row) {
            if (r[i].col < r[i - 1].col) { swap(r[i], r[i - 1]); }
        }
    }*/