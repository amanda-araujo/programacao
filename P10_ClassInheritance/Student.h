//
// Created by Amanda on 16/06/2025.
//

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

/*class Person {
public:
  Person(int id, const std::string& name);
  virtual ~Person();
  int id() const;
  const std::string& name() const;
  virtual std::string to_string() const;
private:
  int id_;
  std::string name_;
};*/

class Student : public Person {
public:
    Student(int id, const string& name, const string& course); //the constructor
    const string& course() const; // accessor function for the course information
    string to_string() const override;
private:
    string course_;
};



#endif //STUDENT_H
