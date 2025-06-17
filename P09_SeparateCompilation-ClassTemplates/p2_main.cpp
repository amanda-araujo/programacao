//
// Created by Amanda on 14/06/2025.
//

#include <iostream>
#include "Date.h"
#include "Person.h"
#include <vector>
using namespace std;

/* Write a C++ function that takes as input parameters a list of Person
 * objects stored into a vector and a Date object, and shows on the screen
 * the name and birthdate of all the persons that were born before the
 * given date.*/

void born_before(const vector<Person>& persons, const Date& date) {
    // list of Persons (name_, birth_date_)

    //int flag = 0; // prints only if there is at least one person
    // Prints always the date:
    date.show();
    cout << ":";

    for (Person p : persons) {
        if (p.get_birth_date().is_before(date)) {
            // if (flag == 0) {
            //     date.show();
            //     cout  << ": ";
            //     flag = 1;
            // }
            cout << " ";
            p.show();
            //cout << " ";
        }
    }
}

int main () {
    //born_before({ {"Pedro",{2000,11,7}} }, {2001,1,1});
    born_before({ {"Ana",{2000,4,5}}, {"Rui",{1999,5,11}}, {"Susana",{1999,5,13}}, {"Pedro",{2010,2,10}} }, {1000,1,1});
    //born_before({ {"Rui",{2009,4,9}}, {"Susana",{1997,6,19}}, {"Pedro",{2018,3,10}} }, {2019,12,31});
    //born_before({ {"Ana",{1999,5,12}}, {"Rui",{1960,3,21}}, {"Susana",{1999,7,25}}, {"Pedro",{1999,7,31}} }, {1970,1,1});
    // born_before({ {"Ana",{2001,7,15}}, {"Susana",{2019,8,12}}, {"Pedro",{2000,5,8}} }, {2001,1,1});

    return  0;
}