//
// Created by nick on 5/1/2017.
//

#include "Student.h"

Student::Student()
{
    m_university = "Default University";
    m_name = "Default Student";
}

Student::Student(std::string name, std::string university) : Person(name)
{
    m_name = name;
    m_university = university;
}

std::string Student::getName()
{
    return m_name + " goes to " + m_university;
}