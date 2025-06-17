//
// Created by Amanda on 17/06/2025.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

// Q1
bool func(int a, int b) {
    if (a % 3 == b % 3) return a < b;
    else return a % 3 <  b % 3;
};

int main () {
    // Q1
    vector<int> v {6, 8, 2, 3, 7, 0, 5, 1, 0};
    sort(v.begin() + 2, v.end() - 1, func);
    for (int x : v) cout << x;
    cout << endl;

    // Q3
    // set: ordem automática! e sem elem repetidos!!
    set<int> s1 = {5, 4, 3, 2, 1, 2, 3, 5}; // >> 1 2 3 4 5
    set<int> s2 = {1, 5, 3, 5}; // >> 1 3 5

    set<int>::iterator it = s1.begin();
    while (it != s1.end()) {
        if (s2.find(*it) != s2.end())
            it = s1.erase(it);
        else
            ++it;
    }
    for (int e : s1) cout << e;

    // Q4: map
    map<char, int> m = { {'C', 2}, {'B', 2}, {'A', 5}};
    for (auto e : m) cout << e.first << '.' << e.second << '|';
    auto iter = m.find('B');
    if (iter != m.end()) cout << iter->second;
    else cout << "not found";
    cout << endl;

    // Q5: multimap >> ordem de inserção
    multimap<char, int> x = { {'X', 1}, {'A', 3}, {'X', 2}, {'B', 4}, {'X', 0}};
    for (auto p : x) cout << p.first << '/' << p.second << '|';
    cout << endl;

    // Q8: set
    vector<int> vc = {4, 1, 5, 3, 1, 2, 3}; // vector!!
    int a[] = {1, 2, 3, 2, 1};
    set<int> s; // 1 3 4 5
    multiset<int> ms;

    s.insert(vc.begin(), vc.begin() + 5); // para no 2 que fica de fora
    ms.insert(a, a + 4);

    for (int e : s) cout << e;
    for (int e : ms) cout << e;
    cout << endl;

    // Q7: remove_if

    return 0;
}
