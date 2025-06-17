//
// Created by Amanda on 16/06/2025.
//

#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

Circle::Circle(point center, double radius) : Shape(center), radius_(radius) {}

double Circle::area() const { return M_PI * radius_ * radius_; }
double Circle::perimeter() const { return 2 * M_PI * radius_; }

bool Circle::contains(const point& p) const {
    double dist = std::sqrt( pow(get_center().x - p.x,2) + pow(get_center().y - p.y,2));
    if (dist > radius_) return false;
    else return true;
}
