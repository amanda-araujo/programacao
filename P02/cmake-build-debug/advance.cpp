//
// Created by up202411286 on 28-02-2025.
//
// Objective: update date (by d days)
#include <iostream>

// Ano bissexto
bool is_leap_year(int y) {
    return (y % 4 == 0 &&
    y % 100 != 0) ||
    y % 400 == 0;
}

int days_in_month(int m, int y) {
    int d;
    switch (m) {
        case 2: // February
            d = is_leap_year(y) ? 29 : 28; break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: // 31 days
        d = 31; break;
        default: // All other months have 30 days
            d = 30; break;
    }
    return d;
}

void advanceOnce(int& dd, int& mm, int& yy) {
    dd++;
    if (dd > days_in_month(mm, yy)){
        mm++;
        dd = 1;
        if (mm > 12) {
            mm = 1;
            yy++;
        }
    }
}

void advance(int delta, int& d, int& m, int& y) {
    // Call-by-references d, m, y
    for (int i = 0; i < delta; i++) advanceOnce(d, m, y);
}

// Recursive version
void advanceRec(int delta, int& d, int& m, int& y) {
    // Call-by-references d, m, y
    if (delta > 0){
        advanceOnce(d, m, y);
        advanceRec(delta - 1, d, m, y);
    }
}


int main(){
    int d = 28, m = 2, y = 2026;
    std::cout << d << '/' << m << '/' << y << '\n';
    advance(5, d, m, y);
    std::cout << d << '/' << m << '/' << y << '\n';


    d = 31, m = 12, y = 2026;
    std::cout << d << '/' << m << '/' << y << '\n';
    advance(5, d, m, y);
    std::cout << d << '/' << m << '/' << y << '\n';
    return 0;
}
