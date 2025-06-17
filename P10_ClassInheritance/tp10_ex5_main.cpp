//
// Created by Amanda on 16/06/2025.
//

#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main () {
  // Circle c({1.0, 2.0}, 1.0);
  // const point& p = c.get_center();
  // std::cout << std::fixed << std::setprecision(2)
  //      << '(' << p.x << ',' << p.y << ')' << ' '
  //      << c.area() << ' ' << c.perimeter() << '\n';

    // Rectangle r({3.4, 4.5}, 1, 2);
    // const point& p = r.get_center();
    // std::cout << std::fixed << std::setprecision(2)
    //      << '(' << p.x << ',' << p.y << ')' << ' '
    //      << r.area() << ' ' << r.perimeter() << '\n';
    //
    // const Shape& s1 = Circle({1, 2}, 3);
    // const Shape& s2 = Rectangle({4, 5}, 6, 7);
    // std::cout << std::fixed << std::setprecision(2) << std::boolalpha
    //      << s1.area() << ' ' << s1.perimeter() << ' '
    //      << s1.contains({1, 2}) << ' ' << s1.contains({ 4, 5 }) << ' '
    //      << s2.area() << ' ' << s2.perimeter() <<  ' '
    //      << s2.contains({1, 2}) << ' ' << s2.contains({ 4, 5 }) << '\n';
    //
    // Circle c({1, 2}, 3);
    // point a [] {
    //     { -2.1,  2.0 }, { -1.9,  2.0 }, { 4.1,  2.0 }, { 3.9,  2.0 },
    //     {  1.0,  4.9 }, {  1.0, -0.9 }, { 1.0,  5.1 }, { 1.0, -1.1 },
    //     {  1.2, -0.3 }, {  5.2,  5.1 }, { 2.1, -0.5 }, { 3.2,  5.5 } };
    // std::cout << std::fixed << std::setprecision(2);
    // for (point& p : a)
    //     if (c.contains(p))
    //         std::cout << '(' << p.x << ',' << p.y << ')';
    // std::cout << '\n';

    Rectangle r({1, 2}, 6, 8);
    point a [] {
        { -2.1,  2.0 }, { -1.9,  2.0 }, { 4.1,  2.0 }, { 3.9,  2.0 },
        {  1.0,  4.9 }, {  1.0, -0.9 }, { 1.0,  5.1 }, { 1.0, -1.1 },
        {  1.2, -0.3 }, {  5.2,  5.1 }, { 2.1, -0.5 }, { 3.2,  5.5 } };
    std::cout << std::fixed << std::setprecision(1);
    for (point& p : a)
        if (r.contains(p))
            std::cout << '(' << p.x << ',' << p.y << ')';
    std::cout << '\n';

    return 0;
}