//
// Created by Amanda on 16/06/2025.
//

#include "ErasmusStudent.h"

//the constructor
ErasmusStudent::ErasmusStudent(int id, const string& name, const string& course, const string& country) :
Student(id, name, course), country_(country) {}

// accessor function for the country information;
const string& ErasmusStudent::country() const { return country_; }


string ErasmusStudent::to_string() const {
    ostringstream out;
    out << id() << '/' << name() << '/' << course() << '/' << country();
    return out.str();
}