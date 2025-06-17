//
// Created by Amanda on 16/06/2025.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(point center, double radius);
    double area() const;
    double perimeter() const;
    bool contains(const point& p) const;
private:
    double radius_;
};



#endif //CIRCLE_H
