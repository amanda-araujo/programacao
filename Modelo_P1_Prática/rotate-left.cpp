//
// Created by Amanda on 17/03/2025.
//

#include <iostream>
#include "print_array.h"
using namespace std;

void rotate_left(int a[], int n, int k) {
    // arra-y, n elements, + k positions
    if (n <= 1) return;
    if (k <= 0) return;

    for (int j = 0; j < k; j++) {
        // walking one position <<
        int a0 = a[0];
        for (int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = a0;
    }
}

int main() {
    int a[] = { 1, 2, 3, 4, 5};
    int n = 5;
    rotate_left(a, n, 2
    );
    print_array(a, n);
    return 0;

}