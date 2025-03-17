//
// Created by Amanda on 17/03/2025.
//

#include <iostream>
//using namespace std;

struct data { int x; int y; };

struct data1 {
    double x;
    double y;
};
struct data2 {
    data1 a;
    data1 b;
    data1 c;
};

void g(const data& a, data& b) {
    //b.x = a.x = 0; // assignment of member ‘data::x’ in read-only object
    //a.y *= b.x - a.y; // assignment of member ‘data::y’ in read-only object
    //y.b = x.a; //‘y’ was not declared in this scope
    b.y *= a.x - b.y;
}

int main () {
    data a {1, 2}, b {3, 4};
    a.x += b.y;
    b.y *= a.x;
    std::cout << a.x << a.y << b.x << b.y << std::endl;

    data2 v;
    v.c.y = 1;

    std::cout << sizeof(data1) << " " << sizeof(data2) << std::endl;

    int ss = 2, qq = 30, rr = 10;
    ss *= qq - ss;
    std::cout << ss << std::endl;
    return 0;
}
