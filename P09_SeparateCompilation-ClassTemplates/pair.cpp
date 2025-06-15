//
// Created by Amanda on 15/06/2025.
//

#include <iostream>
using namespace std;

// Class Template Pair: store 2 heterogeneous objects
// 2 data members: first_ second_

// Example Class Template
/* template<typename T>
class Pair {
public:
    Pair(T a, T b) : first_(a), second_(b) {}
    T first() const { return first_; }
    T second() const { return second_; }

private:
    T first_;
    T second_;
}; */

template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 a, T2 b) : first_(a), second_(b) {}; // constructor with parameters
    T1 get_first() { return first_; };
    T2 get_second() {return second_; };
    void show() const {
        cout << "{" << get_first() << "," << get_second() << "}" << '\n';
    };
private:
    T1 first_;
    T2 second_;
};

// store a set of pairs into a vector<Pair<string,int>>
// for example the name and age of a set of persons

