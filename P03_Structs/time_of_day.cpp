//
// Created by up202411286 on 07-03-2025.
//

/*Write a C++ function
* time_of_day tick(time_of_day t)
* such that the result of tick(t) represents the elapse of one minute
* over a given t. */

#include <iostream>
#include "time_of_day.h"

// struct time_of_day {
//     unsigned char h; // Hours [0,23]
//     unsigned char m; // Minutes [0,59]
// }; //ALREADY INCLUDED IN THE FILE!

time_of_day tick(time_of_day t) {
    // Input: time | Output: time + 1 minute
    t.m++;
    if (t.m > 59) {
        t.m = t.m % 60;
        t.h++;
        if (t.h > 23) t.h = t.h % 24;
    }
    return t;
}

int main() {
    time_of_day time = {23, 59};
    std::cout << tick(time) << "\n";
    return 0;
}