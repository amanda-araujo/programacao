//
// Created by up202411286 on 11-04-2025.
//
#include <iostream>
#include "Date2.h"
#include <iomanip>
using namespace std;
/*
* class Date {
  public:
    // constructors
    Date();
    Date(int year, int month, int day);
    Date(const std::string& year_month_day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // other methods
    bool is_valid() const; // tests date validity
    void write() const;    // writes the date as "yyyy/mm/dd"
  private:
    // attributes
    int year;
    int month;
    int day;
    // compute the number of days of month
    static int num_days(int year, int month);
}; */

// Write the not yet implemented functions of the class Date
// Constructors
Date::Date() {
    // default constructor must build the date 1/1/1;
    day = 1;
    month = 1;
    year = 1;
}
Date::Date(int year, int month, int day) {
    // checks validity
    if (is_valid()) { // true: valid
        Date::day = day;
        Date::month = month;
        Date::year = year;
    }
    else { // invalid date
        Date::day = 0;
        Date::month = 0;
        Date::year = 0;
    }
    // // Creates the date
    // Date::day = day;
    // Date::month = month;
    // Date::year = year;
    //
    // // Check its validity
    // if (!is_valid()) { // invalid
    //     Date::day = 0;
    //     Date::month = 0;
    //     Date::year = 0;
    // }
}
Date::Date(const std::string &year_month_day) {
    // Reads a string with the info
    // HInt: istringstream object to decompose the string year_month_day
    // The separator must always be the character '/';
    // istringstream breaks by TYPE!
    istringstream inputss (year_month_day);

    // variables to store different values of the string
    // string: y s1 m s2 d
    int y, m, d;
    char s1, s2;

    if (inputss >> y >> s1 >> m >> s2 >> d && s1 == '/' && s2 == '/');
    // checks if valid

}
// Accessors (getter methods)
int Date::get_day() const { return day; }
int Date::get_month() const { return month; }
int Date::get_year() const { return year; }

// Methods
int Date::num_days(int year, int month) {
    // 1 3 5 7 8 10 12 >> 31
    // 4 6 9 11 >> 30
    // ano bissexto: 2 >> 28 | 29
    int ndays;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ndays = 31; // days in the month
            break;
        case 4: case 6: case 9: case 11:
            ndays = 30; // days in the month
            break;
        case 2:
            // check ano bissexto
            if ((year % 4 == 0 and year % 100 != 0 ) or (year % 400 == 0)) ndays = 29;
            ndays = 28;
            break;
        default:
            ndays = 0;
    }
    return ndays;
}

bool Date::is_valid() const {
    // date is valid if the month is between 1 and 12,
    // the day is between 1 and Date::num_days,
    // and the year is between 1 and 9999
    // num_days(int year, int month);

    // Check year
    if (get_year() >= 1 and get_year() <= 9999) {
        // Check month
        if (get_month() >= 1 and get_month() <= 12) {
            // Check day
            if (get_day() >= 1 and get_day() <= num_days(get_year(), get_month())) {
                return true;
            }
        }
    }
    return false;
}


int main () {
    Date d1; d1.write(); std::cout << (d1.is_valid() ? "" : "-invalid") << endl;
    Date d2(2022, 4, 31); d2.write(); std::cout << (d2.is_valid() ? "" : "-invalid") << endl;
    Date d3("2ooo/2/28"); d3.write(); std::cout << (d3.is_valid() ? "" : "-invalid") << endl;
    return 0;
}
