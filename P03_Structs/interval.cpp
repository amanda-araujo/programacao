//
// Created by up202411286 on 07-03-2025.
//

/*Consider types time_of_day and interval to represent the time of day with a precision
 * of minutes, and time intervals defined by start and end times
 *
* Write a C++ function
* interval intersection(interval a, interval b)
* to compute the intersection of intervals. When the intersection is empty, the function should
* return the interval with the start time and the end time both equal to { 0, 0 }.

Ps: <> bib do sistema; " " ficheiro pessoal
*/

#include <iostream>
#include "interval.h" //Types declaration (structs)

// Prototypes
bool smaller(time_of_day x, time_of_day y); // 0: False, 1: True
interval intersection(interval a, interval b);

// MAIN
int main() {
    interval il1 = {{12, 30}, {14, 31}};
    interval il2 = {{14, 30}, {18, 30}};
    std::cout << smaller(il1.end, il2.start) << "\n";
    std::cout << smaller(il1.start, il2.end) << "\n";
    std::cout << intersection(il1, il2) << "\n";
    return 0;
}

// Functions
bool smaller(time_of_day x, time_of_day y) {
    // Check if x < y
    if (x.h < y.h) {
        return true;
    }
    else if (x.h == y.h) {
        if (x.m < y.m) return true;
        else return false;
    }
    return false;
}

bool equal(time_of_day x, time_of_day y) {
    if (x.h == y.h and x.m == y.m) return true;
    return false;
}

interval intersection(interval a, interval b) {
    // Input: 2 intervals
    // Output: interval given by the intersection
    interval intersection = {0, 0};

    // Guarantees A begins before B
    if (smaller(b.start, a.start)) { // b starts before: SWAP
        interval temp;
        temp.start = a.start;
        temp.end = a.end;
        a.start = b.start;
        a.end = b.end;
        b.start = temp.start;
        b.end = temp.end;
    }

    if (smaller(a.end, b.start)) return intersection; // empty

    // Computes intersection
    intersection.start = b.start;
    if (smaller(b.end, a.end)) intersection.end = b.end;
    else intersection.end = a.end;

    // Final check
    if (equal(intersection.start, intersection.end)) { // also empty
        intersection = {0, 0};
    }

    return intersection;
}
