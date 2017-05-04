//
// Created by nick on 5/1/2017.
//

#include <stdexcept>
#include "Person.h"

Person::Person()
{
    m_name = "Default Person";
}
Person::Person(std::string name)
{
    m_name = name;
}

std::string Person::getName()
{
    return m_name;
}

std::string Person::throwExceptionIfOdd(int n)
{
    if(n%2 != 0)
    {
        throw std::string("Thats an odd number");
    }
    else
    {
        return "That's an even number";
    }
}

std::string Person::throwStandardException(int n)
{
    if (n > 5)
    {
        throw std::out_of_range("Out of Range");
    }
    else
    {
        return "Within Range";
    }
}