//
// Created by Amanda on 16/06/2025.
//

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "ErasmusStudent.h"

int main() {
  // const Person& p = Student(123, "Manuel Dias", "LEIC");
  // std::cout << p.id() << ' ' << p.name() << '\n';
  //
  // // const Student& s = ErasmusStudent(124, "John Zorn", "LXPTO", "United States");
  // // std::cout << s.id() << ' ' << s.name() << ' ' << s.course() << '\n';
  //
  // Student s(123, "Manuel Dias", "LEIC");
  // std::cout << s.id() << ' ' << s.name() << ' '  << s.course() << '\n';
  //
  // ErasmusStudent es(124, "John Zorn", "LXPTO", "United States");
  // std::cout << es.id() << ' ' << es.name() << ' ' << es.course() << ' ' << es.country() << '\n';

  Person p(125, "Marie Curie");
  Student s(126, "Ada Lovelace", "LEIC");
  ErasmusStudent es(127, "Grace Hopper", "LXPTO", "United States");
  std::cout << p.to_string() << ' ' << s.to_string() << ' ' << es.to_string() << '\n';

  return 0;
}