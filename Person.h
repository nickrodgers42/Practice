//
// Created by nick on 5/1/2017.
//

#ifndef FINALPRACTICECS2_PERSON_H
#define FINALPRACTICECS2_PERSON_H

#include <string>
#include <exception>


class Person {
    std::string m_name;
public:
    Person();
    Person(std::string name);
    std::string getName();
    std::string throwExceptionIfOdd(int n);
    std::string throwStandardException(int n);
};


#endif //FINALPRACTICECS2_PERSON_H
