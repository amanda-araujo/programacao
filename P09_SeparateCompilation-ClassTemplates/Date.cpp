//
// Created by Amanda on 14/06/2025.
//

#include "Date.h"

/*class Date {
public:
  Date();  // 1/1/1
  Date(int year, int month, int day);
  bool is_before(const Date& date) const;
  void show() const { std::cout << year_ << '/' << month_ << '/' << day_; }
private:
  int year_, month_, day_;
};*/

// Implementation Member Functions
Date::Date() : year_(1), month_(1), day_(1) {}  // 1/1/1
Date::Date(int year, int month, int day) : year_(year), month_(month), day_(day) {}
bool Date::is_before(const Date& date) const {
    // a.is_before(b)
    if (year_ < date.year_) { return true; }
    else if (month_ < date.month_) { return true; }
    else if (day_ < date.day_) { return true; }
    else { return false; }
}