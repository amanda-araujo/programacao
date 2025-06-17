//
// Created by Amanda on 16/06/2025.
//

#include "Cylinder.h"

int main () {
    const Cylinder c({0, 0, 0}, 1, 1);
    std::cout << c.center() << ' '
              << c.radius() << ' '
              << c.height() << ' '
              << c.area() << std::endl;

    const Solid& s = Cylinder({-1.2, -3.4, -5.6}, 1.2, 0.34);
    std::cout << s.center() << ' ' << s.area() << std::endl;

    return 0;
}