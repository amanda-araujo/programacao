//
// Created by up202411286 on 11-04-2025.
//
#include <iostream>
#include "Point2d.h"
#include <iomanip>
#include <cmath>
using namespace std;
/*
* class Point2d {
  public:
    Point2d();                   // default constructor (builds origin)
    Point2d(const Point2d& p);   // copy constructor
    Point2d(double x, double y); // constructor using supplied coordinates
    double get_x() const;  // accessor for X coordinate
    double get_y() const;  // accessor for Y coordinate
    void set_x(double x);  // mutator for X coordinate
    void set_y(double y);  // mutator for Y coordinate
    void translate(const Point2d& t);           // translate coordinates
    double distance_to(const Point2d& p) const; // get distance to given point
  private:
    double x;  // X coordinate
    double y;  // Y coordinate
};
 */

// Member functions
void Point2d::translate(const Point2d &t) {
    // a.translate(t): changes a with translation by coordinates t
    double xt = t.get_x();
    double yt = t.get_y();
    set_x(get_x() + xt);
    set_y(get_y() + yt);
}

double Point2d::distance_to(const Point2d &p) const {
    //a.distance_to(b): return euclidian distance between a and b
    double dist = pow(pow(get_x() - p.get_x(), 2.0) + pow(get_y() - p.get_y(), 2.0), 0.5);
    return dist;
}

int main () {
    // Point2d a { 1.0, 2.1 };
    // a.translate({ -0.3, 0.5 });
    // std::cout << std::fixed << std::setprecision(2)
    //      << a.get_x() << ' ' << a.get_y() << '\n';

    Point2d a { 1.0, 2.1 };
    Point2d b { 2.0, 3.1 };
    std::cout << std::fixed << std::setprecision(2)
         << a.distance_to(b) << '\n';
    return 0;
}