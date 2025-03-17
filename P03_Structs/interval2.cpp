//
// Created by up202411286 on 07-03-2025.
//

#include <iostream>
#include "interval.h" //Types declaration (structs)

bool less_then(time_of_day a, time_of_day b);

interval intersection (interval a, interval b) {
    if (less_then(b.start, a.start)) {
        interval temp = a;
        a = b;
        b = temp;
    }

    if (less_then(b.start, a.end)) return {{0, 0}, {0, 0}};

    time_of_day end = less_then(a.end, b.end)? a.end : b.end;
    return {b.start, end};
}