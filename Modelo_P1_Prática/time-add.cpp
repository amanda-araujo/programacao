//
// Created by Amanda on 17/03/2025.
//

#include <iostream>
using namespace std;

struct times {
    int h;
    int m;
};

int main () {
    int h, m, delta; // hours, minutes, minutes
    cin >> h >> m >> delta;

    // hh:mm + delta >> time updated
    times t = {h, m};

    t.h += (int) delta / 60;
    t.m += delta % 60;

    if (t.m >= 60) {
        t.h++;
        t.m %= 60;
    }

    if (t.h >= 24) t.h %= 24;

    cout << t.h << " " << t.m << endl;
    return 0;
}