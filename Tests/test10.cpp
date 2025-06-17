//
// Created by Amanda on 16/06/2025.
//

#include <iostream>
#include <ostream>
using namespace std;

int main () {

    // Q4
    class A {
    public:
        A(int x) : x_(x) {}
        void f1() { x_ ++; }
        virtual int f2() { return x_; }
    private:
        int x_;
    };
    class B : public A {
    public:
        B(int x, int y) : A(x), y_(y) {}
        void f1() { y_ ++; }
        int f2() { return A::f2() - y_; }
    private:
        int y_;
    };

    B b(1, 2);
    A* pa = &b;
    pa->f1();
    cout << pa->f2() << '\n';

    return 0;
}
