//
// Created by Amanda on 14/06/2025.
//

#include <iomanip>
#include <iostream>
#include "Point.h"
#include "Polygon.h"

int main() {
    // Point p1, p2(0, 1);
    // p1.show(); p2.show(); std::cout << '\n';

    // Polygon poly1;
    // Point p1, p2(0, 1), p3(1, 0);
    // Polygon poly2(vector<Point>{ p1, p2, p3 });
    // poly1.show(); std::cout << " "; poly2.show(); std::cout << '\n';

    // Point p1, p2(0, 1), p3(1, 0);
    // Polygon poly1(vector<Point>{ p1, p2, p3 });
    // std::cout << std::fixed << std::setprecision(3) << poly1.perimeter() << std::setprecision(0) << '\n';

    // Point p1, p2(0, 1), p3(1, 0);
    // Polygon poly1(vector<Point>{ p1, p2, p3 });
    // Point p;
    // if (poly1.get_vertex(2, p)) { p.show(); std::cout << ' '; }
    // else std::cout << "vertex not found! ";
    // if (poly1.get_vertex(0, p)) { p.show(); std::cout << ' '; }
    // else std::cout << "vertex not found! ";
    // std::cout << '\n';

    Point p1, p2(0, 1), p3(1, 0), p4(1, 1);
    Polygon poly1 = vector<Point>{ p1, p2, p3 };
    poly1.add_vertex(3, p4);
    poly1.show();
    std::cout << ' ' << std::fixed << std::setprecision(3) << poly1.perimeter() << std::setprecision(0) << '\n';

    return 0;
}