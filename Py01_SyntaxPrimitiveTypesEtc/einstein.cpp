//
// Created by up202411286 on 21/02/2025.
// Amanda Araujp Silva
//

#include <iostream>

const float C = 3.0e8; // Error: int >> float

int main() {

    //float C = 3E8; // Error: int >> float

    int m;
    std::cin >> m;

    std::cout << m * C * C << std::endl;

    return 0;
}