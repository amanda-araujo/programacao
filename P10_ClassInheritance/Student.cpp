//
// Created by Amanda on 16/06/2025.
//

#include "Student.h"

//the constructor
Student::Student(int id, const string& name, const string& course) :
Person(id, name), course_(course) {}

// accessor function for the course information
const string& Student::course() const { return course_; }

// overrides Person::to_string(), and returns a string in which the
// course information is appended to the person information
string Student::to_string() const {
    ostringstream out;
    out << id() << '/' << name() << '/' << course();
    return out.str();
}
