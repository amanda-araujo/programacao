//
// Created by Amanda on 16/06/2025.
//

#ifndef ERASMUSSTUDENT_H
#define ERASMUSSTUDENT_H
#include "Student.h"


class ErasmusStudent : public Student {
public:
    ErasmusStudent(int id, const string& name, const string& course, const string& country); //the constructor
    const string& country() const; // accessor function for the country information;
    string to_string() const override;
private:
    string country_;
};



#endif //ERASMUSSTUDENT_H
