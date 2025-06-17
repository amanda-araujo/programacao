//
// Created by Amanda on 15/06/2025.
//

#include <iostream>
#include <vector>
#include <algorithm>
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
    T1 get_first() const { return first_; };
    T2 get_second() const { return second_; };
    void show() const {
        cout << "{" << get_first() << "," << get_second() << "}";
    };
private:
    T1 first_;
    T2 second_;
};

// store a set of pairs into a vector<Pair<string,int>>
// for example the name and age of a set of persons
// manipulation: ref&; non-descending order
// Template functions:  two functions, external to class Pair, sort_by_first() and sort_by_second()
template<typename T1, typename T2>
bool compare_first(Pair<T1, T2>& a, Pair<T1, T2>& b) {
    // Compare Pairs
    return a.get_first() < b.get_first();
}

template<typename T1, typename T2>
void sort_by_first(vector<Pair<T1, T2>>& vec) {
    sort(vec.begin(), vec.end(), compare_first<T1, T2>);
}

template<typename T1, typename T2>
bool compare_second(Pair<T1, T2>& a, Pair<T1, T2>& b) {
    // Compare Pairs
    return a.get_second() < b.get_second();
}

template<typename T1, typename T2>
void sort_by_second(vector<Pair<T1, T2>>& vec) {
    sort(vec.begin(), vec.end(), compare_second<T1, T2>);
}

//  Template function: show(), external to class Pair, that shows on the screen
//  the contents of a vector<Pair<string,int>>
// void show() const { //qualifier const only allowed on non-static member functions
template<typename T1, typename T2>
void show(vector<Pair<T1, T2>>& vec) { //qualifier const only allowed on non-static member functions
    cout << "{";
    for (const auto& p : vec) {
        p.show();
    }
    cout << "}";
}

int main() {
    // vector<Pair<string, int>> persons = { {"Maria",17},{"Ana",21},{"Pedro",19} };
    // sort_by_first(persons);
    // show(persons); std::cout << '\n';

    // vector<Pair<string, int>> persons = { {"Ana",19},{"Rui",16} };
    // sort_by_second(persons);
    // show(persons); std::cout << '\n';

    vector<Pair<string, int>> teams = { {"Porto",91},{"Benfica",74},{"Sporting",85} };
    sort_by_first(teams);
    show(teams); std::cout << '\n';
    sort_by_second(teams);
    show(teams); std::cout << '\n';

    vector<Pair<string, int>> calories = { {"orange",37},{"egg",146},{"apple",56},{"yogurt",51} };
    sort_by_second(calories);
    show(calories); std::cout << '\n';
    return 0;
}