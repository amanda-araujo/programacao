//
// Created by Amanda on 14/06/2025.
//

#ifndef POLYGON_H
#define POLYGON_H

/* represents the set of vertices of the polygon
 * as a vector of objects of type Point*/

#include "Point.h"
#include <vector>
using namespace std;

class Polygon {
public:
    Polygon();
    Polygon(vector<Point> points);
    bool get_vertex(int n, Point &p);
    void add_vertex(int n, const Point &p);
    void set_perimeter(); // calculate
    void show() const;
    double perimeter() const;

private:
    vector<Point> polygon;
    double perimeter_;
    int total_number_of_vertices;
};


#endif //POLYGON_H
