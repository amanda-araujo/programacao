//
// Created by Amanda on 17/03/2025.
//

#include <iostream>

namespace a {
    namespace b {
        int f(int x, int y=1) { return x + y; }
    }
    int f(int x) { return x > 1 ? x + 1 : a::b::f(x - 1); }
}

int g(int x) {
    return x % 3 == 0? a::b::f(x, 3) : a::f(x);
}

int main() {
    std::cout << "x = 1 " << g(1) << std::endl;
    std::cout << "x = 2 " << g(2) << std::endl;
    std::cout << "x = 3 " << g(3) << std::endl;
    return 0;
}
