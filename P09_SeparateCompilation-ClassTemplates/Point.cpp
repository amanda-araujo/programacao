//
// Created by Amanda on 14/06/2025.
//

#include "Point.h"

#include <cmath>
#include <math.h>
using namespace std;

#include <iostream>
#include <ostream>

/*class Point {
public:
    Point(); // Constructor default (0, 0)
    Point(int x, int y); // Constructor
    void show() const; // (x,y)
    double distance(Point b)
    int get_x() const;
    int get_y() const;
private:
    int x_;
    int y_;
};*/

// Implementation
Point::Point() : x_(0), y_(0) {} // Constructor default (0, 0)
Point::Point(int x, int y) : x_(x), y_(y) {} // Constructor
void Point::show() const {
    cout << "(" << x_ << "," << y_ << ")";
} // (x,y)
double Point::distance(Point b) {
    double dist = sqrt(pow(b.x_ - x_, 2) + pow(b.y_ - y_, 2));
    return dist;
}
int Point::get_x() const { return x_; }
int Point::get_y() const { return y_; }
