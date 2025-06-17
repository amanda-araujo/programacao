//
// Created by Amanda on 16/06/2025.
//

#include "Rectangle.h"

#include <cmath>
using namespace std;

Rectangle::Rectangle(point center, double width, double height) :
Shape(center), width_(width), height_(height) {}

double Rectangle::area() const { return width_ * height_; }
double Rectangle::perimeter() const { return 2 * (width_ + height_); }

bool Rectangle::contains(const point& p) const {
    if ( abs(get_center().x - p.x) <= width_/2 && abs(get_center().y - p.y) <= height_/2 ) {
        return true;
    }
    return false;
}

