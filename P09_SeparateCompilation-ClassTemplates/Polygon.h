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
    bool get_vertex(int n, Point p);
    Polygon add_vertex(int n, Point p);
    void set_perimeter(Polygon p); // calculate
    void set_total_number_of_vertices(Polygon p); // calculate
    void show() const;

private:
    vector<Point> polygon;
    double perimeter;
    int total_number_of_vertices;
};


#endif //POLYGON_H
