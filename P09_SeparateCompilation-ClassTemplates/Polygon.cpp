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

Polygon::Polygon() { polygon = {}; perimeter_ = 0.0; total_number_of_vertices = 0; } // no points
Polygon::Polygon(vector<Point> points) {
    polygon = points;
    total_number_of_vertices = points.size();
    perimeter_ = 0.0;
    set_perimeter(); // perimeter
}

// bool Polygon::get_vertex(int n, Point p) {
//     if (n >= 1 && n < total_number_of_vertices) {
//         if (polygon[n - 1].get_x() == p.get_x() && polygon[n - 1].get_y() == p.get_y()) { return true; }
//     }
//     else return false;
// }
bool Polygon::get_vertex(int n, Point& p) {
    if (n >= 1 && n <= total_number_of_vertices) {
        p = polygon[n - 1]; // retorna o ponto por referência
        return true;
    }
    return false;
}

void Polygon::add_vertex(int n, const Point &p) {
    // library vector!! vector.insert
    // 1 - (totalnumber = polygon size)
    if (n >= 1 && n < total_number_of_vertices + 1) {
        polygon.insert(polygon.begin() + (n - 1), p);
        total_number_of_vertices++;
        set_perimeter();
    }

}

void Polygon::set_perimeter() {
    if (total_number_of_vertices == 0) { perimeter_ = 0.0; }
    else {
        double perim = 0.0;
        for (int i = 1; i < total_number_of_vertices; i++) {
            perim += polygon[i].distance(polygon[i - 1]);
        }
        perim += polygon[0].distance(polygon[total_number_of_vertices - 1]);
        perimeter_ = perim;
    }
} // calculate double

void Polygon::show() const {
    cout << "{";
    for (Point point : polygon) {
        point.show();
    }
    cout << "}";
}

double Polygon::perimeter() const { return perimeter_; } // exemplo 3