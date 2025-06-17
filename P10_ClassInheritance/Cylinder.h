//
// Created by Amanda on 16/06/2025.
//

#ifndef CYLINDER_H
#define CYLINDER_H

#define _USE_MATH_DEFINES
#include <cmath>
#include "Solid.h"

class Cylinder : public Solid {
public:
    Cylinder(point center, double radius, double height); // constructor
    double radius() const;
    double height() const;
    double area() const;

private:
    double radius_;
    double height_;
};


#endif //CYLINDER_H
