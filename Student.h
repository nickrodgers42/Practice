//
// Created by nick on 5/1/2017.
//

#ifndef FINALPRACTICECS2_STUDENT_H
#define FINALPRACTICECS2_STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    std::string m_university;
    std::string m_name;
public:
    Student();
    Student(std::string name, std::string university);
    std::string getName();
};


#endif //FINALPRACTICECS2_STUDENT_H
