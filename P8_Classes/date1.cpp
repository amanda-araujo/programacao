//
// Created by up202411286 on 11-04-2025.
//
#include <iostream>
#include "Date1.h"
#include <iomanip>
#include <cmath>
using namespace std;
/* // A simple class Date definition
class Date {
  public:
    Date();                             // Default constructor
    Date(int year, int month, int day); // Constructor with parameters
    int get_year() const;               // Year accessor
    int get_month() const;              // Month accessor
    int get_day() const;                // Day accessor
    void write() const;                 // Writes the date as "yyyy/mm/dd"
  private:
    int year;   // Private attribute year
    int month;  // Private attribute month
    int day;    // Private attribute day
}; */

// Write the C++ code for all member functions not yet implemented
// Constructors
Date::Date() {
    // default constructor must build the date 1/1/1;
    day = 1;
    month = 1;
    year = 1;
}

Date::Date(int year, int month, int day) {
    Date::day = day;
    Date::month = month;
    Date::year = year;
}

// Methods: getter methods
int Date::get_day() const {
    return day;
}

int Date::get_month() const {
    return month;
}

int Date::get_year() const {
    return year;
}

bool is_before(const Date& date1, const Date& date2) {
    // true if date1 before than date2
    if (date1.get_year() < date2.get_year()) return true;
    else if (date1.get_year() == date2.get_year()) {
        if (date1.get_month() < date2.get_month()) return true;
        else if (date1.get_month() == date2.get_month()) {
            if (date1.get_day() == date2.get_day()) return true;
        }
    }
    return false;
}


int main () {
    Date d1; d1.write(); std::cout << '\n';
    Date d2(2020, 2, 29); d2.write(); std::cout << '\n';
    Date d3(1925, 4, 30); d3.write(); std::cout << '\n';
    Date d4, d5(2022,4,29); d4.write(); std::cout << '-' << boolalpha << is_before(d4, d5) << '\n';
    Date d6(2023,10,31), d7(2022, 4, 29); d6.write(); std::cout << '-' << boolalpha << is_before(d6, d7) << '\n';
    return 0;
}


