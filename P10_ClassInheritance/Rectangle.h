//
// Created by Amanda on 16/06/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle : public Shape {
public:
    Rectangle(point center, double width, double height);
    double area() const;
    double perimeter() const;
    bool contains(const point& p) const;
private:
    double width_;
    double height_;
};



#endif //RECTANGLE_H
