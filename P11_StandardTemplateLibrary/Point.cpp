//
// Created by Amanda on 16/06/2025.
//

#include "Point.h"
#include <iostream>

// Implementation member functions
Point::Point() : x_(0), y_(0) {} // builds (0,0)
Point::Point(int x, int y) : x_(x), y_(y) {} // builds (x,y)
Point::Point(const Point& p) { x_ = p.get_x(); y_ = p.get_y(); } // copy constructor
int Point::get_x() const { return x_; } // get x coordinate
int Point::get_y() const { return y_; } // get y coordinate

Point& Point::operator=(const Point& p) {
    x_ = p.get_x();
    y_ = p.get_y();
    return *this; // referencia próprio objeto!
} // assignment operator

Point Point::operator+(const Point& p) const {
    int sumx, sumy;
    sumx = x_ + p.get_x();
    sumy = y_ + p.get_y();
    return Point(sumx, sumy);
} // sum

Point& Point::operator+=(const Point& p) {
    x_ += p.get_x();
    y_ += p.get_y();
    return *this; // referencia próprio objeto!
} // composed assignment and sum

Point Point::operator*(int v) const {
    return Point(x_ * v, y_ * v);
} // "right" multiplication by scalar

Point operator*(int x, const Point& p) {
    return Point(x * p.get_x(), x * p.get_y());
} // "left" multiplication by scalar

/*output to os the coordinates x and y of a with the format (x,y)
 *and (as usual) return os as a result (for chained calls using the
 *<< operator).*/
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.get_x() << "," << p.get_y() << ")";
    return os;
}