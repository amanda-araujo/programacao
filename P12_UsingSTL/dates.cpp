//
// Created by Amanda on 17/06/2025.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include "Date.h"
using namespace std;
/*class Date {
public:
  Date(int year = 1, int month = 1, int day = 1)
     : year_(year), month_(month), day_(day) {}
  int getYear() const { return year_; }
  int getMonth() const { return month_; }
  int getDay() const { return day_; }
private:
  int year_, month_, day_;
};*/
/*Overload the implementation of the operators necessary for sorting and
 *showing on the screen the contents of a vector<Date> dates, using the
 *following statements:*/

/*sort(dates.begin(), dates.end()) {
    // iterators pelo vetor de Date
    // vector<Date> dates
    // sorting: ascending order pela data: older dates first
} >>>>>> Por DEFAULT usa operador < para comparar os elemnetos*/

// Operator overload: operator<
bool operator<(const Date& a, const Date& b) {
    // comparison less than < for a Date
    if (a.getYear() != b.getYear()) return a.getYear() < b.getYear(); // T/F
    if (a.getMonth() != b.getMonth()) return a.getMonth() < b.getMonth();
    return a.getDay() < b.getDay();
}

// Operator overload: operator <<
ostream& operator<<(ostream& os, const Date& d) {
    // guarantees the format
    os << setw(4) << setfill('0') << d.getYear() << '/' <<
          setw(2) << setfill('0') << d.getMonth() << '/' <<
              setw(2) << setfill('0') << d.getDay();
    return os;
}

int main() {
    vector<Date> dates = { {2023,11,15}, {2021,12,8}, {2023,11,14} };
    sort(dates.begin(), dates.end());
    for (const auto& d : dates) std::cout << d << " ";
    std::cout << '\n';
    return 0;
}
