//
// Created by Amanda on 14/06/2025.
//

#include "Polygon.h"
#include "Point.h"
#include <iostream>
using namespace std;
/*class Polygon {
public:
    Polygon();
    Polygon(vector<Point> points);
    Point get_vertex(int n, Point p);
    Polygon add_vertex(int n, Point p);
    double set_perimeter(Polygon p); // calculate
    int set_total_number_of_vertices(Polygon p); // calculate
    void show() const;

private:
    vector<Point> polygon;
    int perimeter;
    int total_number_of_vertices;
};*/

Polygon::Polygon() { polygon = {}; } // no points
Polygon::Polygon(vector<Point> points) { polygon = points; }

bool Polygon::get_vertex(int n, Point p) {
    if (polygon[n - 1].get_x() == p.get_x() && polygon[n - 1].get_y() == p.get_y()) { return true; }
    else return false;
}

Polygon Polygon::add_vertex(int n, Point p) {}

void Polygon::set_perimeter(Polygon p) {
    if (total_number_of_vertices == 0) { perimeter = 0.0; }
    else {
        double perim = 0.0;
        for (int i = 1; i < total_number_of_vertices - 1; i++) {
            perim += polygon[i].distance(polygon[i - 1]);
        }
        perim += polygon[0].distance(polygon[total_number_of_vertices - 1]);
        perimeter = perim;
    }
} // calculate double

void Polygon::set_total_number_of_vertices(Polygon p) {
    int count = 0;
    for (Point p : polygon) {
        count++;
    }
    total_number_of_vertices = count;
} // calculate int

void Polygon::show() const {
    cout << "{";
    for (Point point : polygon) {
        point.show();
    }
    cout << "}";
}