//
// Created by Amanda on 17/03/2025.
//

#include <iostream>
#include "interval.h"
using namespace std;

// struct time_of_day {
//     unsigned char h; // Hours [0,23]
//     unsigned char m; // Minutes [0,59]
// };
// struct interval {
//     time_of_day start; // Start time
//     time_of_day end;   // End time
// };

// interval: [ , )

int duration(const interval it) {
    // aritmethics with time hh:mm
    // Transform all to minutes!
    int start = it.start.h * 60 + it.start.m;
    int end = it.end.h * 60 + it.end.m;
    return end - start;
}

interval largest(const interval a[], int n) {
    // arr-ay de intervals
    // all intervals: different durations
    interval itmax;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (duration(a[i]) > max) { max = duration(a[i]); itmax = a[i]; }
    }
    return itmax;
}

int main () {
    const int n = 1;
    interval a[n] = {  { { 12, 30 }, { 12, 55 } }  };
    std::cout << largest(a, n) << '\n';
    return 0;
}