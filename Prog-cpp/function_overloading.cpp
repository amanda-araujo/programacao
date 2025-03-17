//
// Created by Amanda on 17/03/2025.
//
#include <iostream>
using namespace std;

bool f(int x, double y); // f original

// Teste de function overload
bool f(double x, int y, long z=3); // 1
bool f(bool x, double y);        // 2
//long f(int x, double y);         // error
bool f(double x, int y);         // 3
long f(int x);                   // 4

// Passagem de parâmetro por referência vs. por valor
void f(int& x, int& y) { // REF, REF
    if (x > y) {
        int t = x; // t presa aqui dentro
        x = y;
        y = t;
    }
}

void f(int& x, int y, int& z) { // REF, Valor, REF
    f(x, y); // REF, REF
    f(y, z);
    f(x, z);
}

int main () {
    // int x = 5, y = 10;
    // bool a = true;
    // double n = 2.2;
    // long z = 100;
    // cout << f(x, n) << endl; // original
    // cout << f(n, x, z) << endl; // 1
    // cout << f(a, n) << endl; // 2
    // //cout << f(n, y) << endl; // 3
    // cout << f(x) << endl; // 4

    int x = 10;
    int& xRef = x;
    cout << "x: " << x << " xRef: " << xRef << endl;
    cout << ++x << " - "; // diferente de x++
    cout << xRef++ << " - ";
    cout << x << " - " << (x == xRef) << endl;

    x = 3;
    int y = 1, z = 2;
    f(x, y, z); // REF, Valor, REF
    cout << x << " - " << y << " - " << z << endl;
    return 0;
}

