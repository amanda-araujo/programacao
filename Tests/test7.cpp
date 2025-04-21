//
// Created by Amanda on 21/04/2025.
//
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main () {
    // Ex. 1
    string s = "Butterfly";
    for (char& c : s) {
        if (c >= 'a' && c <= 'l') {
            c = toupper(c);
        }
    }
    for (char c : s) cout << c;
    cout << '\n';

    // Ex. 2
    vector<int> v;
    v = {1, 2, 3};
    for (int c : v) cout << c << ' ';
    int u[10] {10, 20, 30};
    for (int c : u) cout << c << ' ';
    cout << v[0] << u[0] << '\n';

    // Ex. 4
    istringstream in(" Curiosity   killed   the cat");
    string ss;
    cout << "\"";
    while (in >> ss) cout << ss;
    cout << "\"\n";

    // Ex. 5
    istringstream in2("1 there is a 23 45 cat in the house6");
    int n = 0;
    while (!in.eof()) {
        int x;
        if (in >> x) {
            n++;
        } else {
            in.clear();
            in.ignore(1);
        }
    }
    cout << n << '\n';

    // Ex. 6
    vector<string> a {"Portugal", "Spain", "France", "England"};
    vector<string> b;
    for (string& s : a) {
        if (s.length() > 6) {
            b.push_back(s);
            s = "-";
        }
    }
    for (string s : a) cout << s;
    cout << '\n';
    for (string s : b) cout << s;
    cout << '\n';

    return 0;
}