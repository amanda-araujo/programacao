//
// Created by Amanda on 14/06/2025.
//

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(); // Constructor default (0, 0)
    Point(int x, int y); // Constructor
    void show() const; // (x,y)
    double distance(Point b);
    int get_x() const;
    int get_y() const;

private:
    int x_;
    int y_;
};

#endif //POINT_H
