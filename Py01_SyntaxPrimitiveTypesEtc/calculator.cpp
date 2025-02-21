//
// Created by up202411286 on 21/02/2025.
// Amanda Araujo Silva
//

#include <iostream>

int main() {
    int a, b;
    char op;
    std::cin >> a >> op >> b;

    switch (op) {
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        case '/':
            if (b == 0) {
                std::cout << "invalid operand: divisor cannot be 0" << std::endl;
                break;
            }
            else {
                std::cout << (float) a / b << std::endl;
                break;
            }
        default:
            std::cout << "invalid operation" << std::endl;
            break;
    }
    return 0;
}
