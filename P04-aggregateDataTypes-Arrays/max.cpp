//
// Created by up202411286 on 14-03-2025.
// TP04 Aggregate Data Types - Arrays
//

/*Write a C++ function int max(const int a[], int n) that returns the maximum value of all
 *n > 0 elements stored in array a. */

#include <iostream>
#include <climits>
using namespace std;

int max(const int a[], int n) {
    // Input: array, size of array

    int max = INT_MIN; // Maximum value
    //for (int i : a) {if (i > max) {max = i;} }// for each: tamanho já definido ao compilar!
    for (int i = 0; i < n; i++) if (a[i] > max) max = a[i];

    return max;
}

int main () {
    const int n = 1;
    const int a[n] = {- 123};
    cout << max(a, n) << endl;
    return 0;
}