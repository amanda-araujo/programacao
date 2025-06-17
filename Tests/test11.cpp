//
// Created by Amanda on 16/06/2025.
//

#include <iostream>
#include <vector>
#include <string>
#include<deque>
#include <list>
using namespace std;

int main() {
    // Q1
    vector<string> a {"C", "Java", "Python", "CPP"};
    vector<int> b;
    cout << a.size() << endl;
    for (int i = a.size() - 1; i >= 0; i--) {
        b.push_back(a[i].length());
    }
    for (int v : b) cout << v;

    // Q2
    deque<string> d {"C", "Java", "Py", "C++"};
    d.push_back(d.front());
    d.pop_front();
    d.push_front("Rust");
    d.push_back("Javascr");
    d.push_front(d.back());
    d.pop_back();
    cout << d.front() << " " << d.back() << endl;

    // Q3
    list<string> lst {"C", "Java", "Python", "C++"};
    for (auto itr = lst.rbegin(); itr != lst.rend(); itr++) {
        if ((*itr).size() > 3) cout << *itr;
    }
    cout << endl;

    // Q4
    vector<int> v {10, 20, 30, 40, 50, 60};
    v.erase(v.begin());
    v.insert(v.begin() + 1, 99);
    v.erase(v.end() - 2);
    v.insert(v.end() - 1, 99);
    for (int x : v) cout << x << ' ';
    return 0;
}
