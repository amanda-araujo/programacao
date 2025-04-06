//
// Created by Amanda on 06/04/2025.
//

#include <iostream>

int main () {

    // Q1
    int a[] = {1, 3, 5, 7};
    int* p = &a[2];
    *p = p[-1] + p[1];
    std::cout << *p << std::endl;

    // Q2
    int* pp = &a[0]; // * p: cannot declare it twice!
    int* q = pp;
    q++;
    std::cout << *q << ' ' << (*q - *pp) << ' ' << (q - pp) << std::endl;

    // Q3
    char s[] = "C/C++";
    char* ppp = &s[3];
    *ppp = 0;
    ppp--;
    ppp[0] = '0';
    ppp[-2] = 'A';
    std::cout << s << std::endl;

    // Q4: Memory Anomaly
    // int* b = new int[3] {3, 2, 1}; // Warning: allocated memory is leaked
    // int* po = b;
    // while (*po != 0) po++; // OPAA! Out-of-bound read >> non allocated memory access
    // std::cout << *po << std::endl; // >>> buffer overflow
    // delete [] b;
    /*When you write new T() you're creating an object of type T with
     *dynamic storage duration. It won't get cleaned up automatically.
     * >>> delete [] a; OK
     */

    // Q5: Memory Anomaly
    // int* c = new int[3] {2, 1, 0};
    // int* pon = c;
    // while (*pon != 0) pon++; // until finds 0; stops in c[2]
    // if (*pon != 0) delete [] c; // FALSE >> don't delete
    // // >>> Memory leak: new memory never deallocated

    // Q6: Memory Anomaly
    // int* c = new int[3] {2, 1, 0};
    // int* pon = c;
    // int* qon = c;
    // while (*pon != 0) pon++; // until finds 0; stops in c[2]
    // if (*pon == 0) delete [] c; // FALSE >> don't delete
    // *qon = 1; // Points to deallocated memory >> Use-after-free

    // Q7
    int x = 0, y = 1, z = 2;
    int* parr[] {&z, &y, &x, nullptr, &x};
    for (int* p : parr) if (p != nullptr) ++*p;
    std::cout << x << y << z << std::endl;

    // Q8
    int d[4] = {0, 1, 2, 3};
    int* e = new int[4] {3, 2, 1, 0};
    int i; // Memory leak: i = 2
    std::cin >> i;
    if (--e[d[i]] != 0) delete [] e;

    return 0;
}
