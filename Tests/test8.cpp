//
// Created by Amanda on 14/06/2025.
//

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(const string& name="", int age=0) {name_ = name; age_ = age; }
    void show() const { cout << name_ << '-' << age_ << endl; }
private:
    string name_;
    int age_;
};

int main () {

    // Q2
    // Person p1 = Person();
    // p1.show();

    // Person p1("Ana");
    // p1.show();

    // Person p1;
    // p1.show();

    // Person p1(); // TEM CARA DE FUNÇÃO, não de objeto
    // p1.show();

    // Q3 | Q5
    class X {
    public:
        X(int v) : v(v) { }
        //static void f(int x) { v = x; }
        void g(int x) { v = x; }
    private:
        int v;
    };

    // Q8
    class C1 {
    public:
        C1(char c = 'X') : c_(c) { cout << "c(" << c_ << ")"; }
        void set_c(char c) { c_ = c; }
        ~C1() {cout << "d(" << c_ << ")"; }
    private:
        char c_;
    };

    C1 c;
    for (char c = 'A'; c < 'C'; c++) { C1 x(c); }
    c.set_c('Y');

    return 0;
}
