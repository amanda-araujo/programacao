//
// Created by Amanda on 14/06/2025.
//

#include "Person.h"

/*class Person {
public:
  Person();  // "NO_NAME", default date
  Person(const std::string& name, const Date& birth_date);
  std::string get_name() const;
  Date get_birth_date() const;
  void show() const { std::cout << name_ << "-"; birth_date_.show(); }
private:
  std::string name_;
  Date birth_date_;
};*/

// Implementation Member Functions
Person::Person() : name_("NO_NAME") {}  // "NO_NAME", default date
Person::Person(const std::string& name, const Date& birth_date) : name_(name), birth_date_(birth_date) {}
std::string Person::get_name() const { return name_; }
Date Person::get_birth_date() const { return birth_date_; }