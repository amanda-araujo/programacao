//
// Created by up202411286 on 21-03-2025.
//

#include <iostream>
#include "alist.h"
using namespace std;

// struct alist {
//     int size;       // Number of elements.
//     int* elements;  // List elements.
// };

/* A call to append(a, b) appends all the elements in list b to list a.
 * The list b should remain unchanged and the list a should be updated to include b.
 * When b is empty a remains unchanged,
 * otherwise a->elements should be replaced by a new array.
 */

void append(alist* a, const alist* b) {
;
    alist* tmp = empty();
    tmp->size = a->size + b->size;
    tmp->elements = new int [tmp->size]; // Allocates memory

    for (int i = 0; i < a->size; i++) {
        // Navigate in a elements: a.size (given size)
        tmp->elements[i] = a->elements[i]; // Write a values in tmp
    }

    int index = a->size;
    for (int i = 0; i < b->size; i++) {
        // Navigate in b elements: b.size (given size)
        tmp->elements[index] = b->elements[i]; // Write b value in tmp
        index++;
        //print(tmp);
    }

    a->size = tmp->size;
    a->elements = tmp->elements;
    delete tmp;
    //destroy(tmp); // Process finished with exit code 1
}

int main () {
    const int nA = 2;
    int eA[nA] = { 1, 2 };
    alist* a = build(nA, eA);
    const int nB = 3;
    int eB[nB] = { 3, 4, 5 };
    const alist* b = build(nB, eB);
    append(a, b);
    print(a);
    destroy(a);
    destroy(b);
    return 0;
}