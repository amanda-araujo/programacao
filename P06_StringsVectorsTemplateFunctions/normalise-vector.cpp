//
// Created by Amanda on 13/04/2025.
//
// Write a templete function
/* template <typename T>
   void normalise(vector<T>& v, const T& min, const T& max)*/
#include <iostream>
#include "print_vector.h"
#include <vector>
using namespace std;

/* If x < min then x should be replaced by min;
 * If x > max then x should be replaced by max; and
 * Otherwise the value of x should be unchanged. */

template <typename T> // Palavra-chave para criar uma Template Function
void normalise(vector<T>& v, const T& min, const T& max) {
    for (T& x : v) {
        if (x < min) x = min;
        else if (x > max) x = max;
    }
}

int main () {
    vector<int> v { 1, 2, 3, 4, 5 };
    normalise(v, 3, 4);
    print(v);
    return 0;
}