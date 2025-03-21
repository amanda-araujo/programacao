//
// Created by up202411286 on 21-03-2025.
//
#include <algorithm>
#include <iostream>
using namespace std;

int median(const int a[], int n) {
    // Input: array a, size of array n

    int* tmp = new int[n];                     // Allocate memory: T* name = new T[], array
    for (int i = 0; i < n; i++) tmp[i] = a[i]; // Copy values of a onto tmp
    std::sort(tmp, tmp + n);           // Sort tmp array

    // Median
    int m = 0;
    if (n % 2 == 0) m = (tmp[ n / 2 - 1] + tmp[ n / 2]) / 2; // even
    else m = tmp[ n / 2 ]; // odd

    delete [] tmp; // Deallocate memory

    return m;
}

int main () {
    const int n = 5;
    int a[n] { 10, -10, 0, 12, 11 };
    std::cout << median(a, n) << '\n';
    return 0;
}