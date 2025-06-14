//
// Created by Amanda on 14/06/2025.
//

#include "Date3.h"
#include <sstream>
#include <iomanip>
using namespace std;
/*#include <iostream>
#include <string>

class Date {
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
    bool is_valid() const;
    void write() const;

  private:
    // compute the number of days of month
    static int num_days(int year, int month);
    // attribute
    std::string yyyymmdd;
};*/

// Rewrite the member functions of the class Date of problem 3, keeping their signature.

// constructors
Date::Date() {
    // default constructor must build the date 1/1/1;
    yyyymmdd = "00010101";
}

Date::Date(int year, int month, int day) {
    // Constructor: parameters year, month, day
    // Attribution
    // yyyymmdd = "00000000"; substr NÃO altera!
    // yyyymmdd.substr(6, 2) = to_string(day);
    // yyyymmdd.substr(4, 2) = to_string(month);
    // yyyymmdd.substr(0, 4) = to_string(year);

    // "na mão, garantindo a quantidade de casas (formatação)"
    // string yyyy = to_string(10000 + year).substr(1);
    // string mm = to_string(100 + month).substr(1);
    // string dd = to_string(100 + day).substr(1);
    // yyyymmdd = yyyy + mm + dd;

    ostringstream oss;
    oss << setw(4) << setfill('0') << year
        << setw(2) << setfill('0') << month
        << setw(2) << setfill('0') << day;
    yyyymmdd = oss.str();

    // checks validity
    if (!is_valid()) { // invalid date
        yyyymmdd = "00000000";
    }
}

Date::Date(const std::string& year_month_day) {
    // Constructor: parameter string - INPUT
    istringstream iss(year_month_day);
    int y, m, d;
    char s1, s2;

    if (iss >> y >> s1 >> m >> s2 >> d && s1 == '/' && s2 == '/') {
        // attribution
        ostringstream oss;
        oss << setw(4) << setfill('0') << y
            << setw(2) << setfill('0') << m
            << setw(2) << setfill('0') << d;
        yyyymmdd = oss.str();

        // checks validity
        if (!is_valid()) { // invalid date
            yyyymmdd = "00000000";
        }

    } else {
        yyyymmdd = "00000000"; // invalid input format
    }
}

// accessors (getter methods)
int Date::get_year() const { return stoi(yyyymmdd.substr(0, 4)); }
int Date::get_month() const { return stoi(yyyymmdd.substr(4, 2));}
int Date::get_day() const { return stoi(yyyymmdd.substr(6, 2));}

// other methods
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
                else ndays = 28;
        break;
        default:
            ndays = 0;
    }
    return ndays;
}

bool Date::is_valid() const {
    // num_days(int year, int month);

    // Check year: between 1 and 9999
    if (get_year() >= 1 and get_year() <= 9999) {
        // Check month: between 1 and 12
        if (get_month() >= 1 and get_month() <= 12) {
            // Check day: between 1 and Date::num_days
            if (get_day() >= 1 and get_day() <= num_days(get_year(), get_month())) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    Date d1; d1.write(); std::cout << (d1.is_valid() ? "" : "-invalid") << endl;
    //Date d2(2022, 4, 31); d2.write(); std::cout << (d2.is_valid() ? "" : "-invalid") << endl;
    Date d2(2022, 4, 30); d2.write(); std::cout << (d2.is_valid() ? "" : "-invalid") << endl;
    Date d3("2ooo/2/28"); d3.write(); std::cout << (d3.is_valid() ? "" : "-invalid") << endl;
    Date d4("1900/1/1"); d4.write(); std::cout << (d4.is_valid() ? "" : "-invalid") << endl;
    Date d5("2022#12#31"); d5.write(); std::cout << (d5.is_valid() ? "" : "-invalid") << endl;
    return 0;
}

