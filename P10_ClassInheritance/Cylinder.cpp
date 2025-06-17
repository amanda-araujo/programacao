//
// Created by Amanda on 16/06/2025.
//

#include "Cylinder.h"
/*class Cylinder : public Solid {
public:
    Cylinder(point center, double radius, double height); // constructor
    const double radius();
    const double height();
    double area() const;

private:
    double radius_;
    double height_;
};
*/

// Constructor
Cylinder::Cylinder(point center, double radius, double height) : Solid(center), radius_(radius), height_(height) {}

// Accessors/getters
double Cylinder::radius() const { return radius_;}
double Cylinder::height() const { return height_;}

// Area cylinder
double Cylinder::area() const {
    return 2.0 * M_PI * radius_ * (radius_ + height_);
}