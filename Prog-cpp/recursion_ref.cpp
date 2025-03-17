//
// Created by Amanda on 17/03/2025.
//

#include <iostream>
#include <ostream>

int f(int x, int& c) {
    c++;
    if (x <= 1) return x;
    else return f(x - 1, c) + f(x - 2, c);
}
int f(int n) {
    int c = 0;
    int r = f(n, c);
    return r + c;
}

// Outro output teste
void f(int& x, int& y, int z) {
    if (x > y) x = z;
    else y = z;
}

int main() {
    std::cout << f(3) << std::endl;

    int a = 1, b = 2, c = 3;
    f(a, b, c);
    f(a, c, b);
    std::cout << a << " - " << b << " - " << c << std::endl;
    return 0;
}
