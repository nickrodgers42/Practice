#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include "Person.h"
#include "Student.h"

template <typename T>
T getmax(T a, T b)
{
    return(a>b?a:b);
}

int main() {

    std::cout << "Playing with pointer casting" << std::endl << std::endl;

    Person p1("Joe");
    Student s1("Mike", "USU");

    std::cout << p1.getName() << std::endl;
    std::cout << s1.getName() << std::endl;

    Person* p2 = new Student("Carl", "UCSD");

    std::cout << p2->getName() << std::endl;

    Student* s2 = static_cast<Student*>(p2);

    std::cout << s2->getName() << std::endl;

    std::cout << getmax<int>(82, 4) << std::endl;

    Student s3("Joe", "Cornell");

    std::cout << std::endl;




    try
    {
       std::cout << s3.throwExceptionIfOdd(4) << std::endl;
    }
    catch (std::string exception)
    {
        std::cout << exception << std::endl;
    }

    try
    {
        std::cout << s3.throwStandardException(6) << std::endl;
        std::cout << s3.throwStandardException(4) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "Filling Stack" << std::endl;

    std::stack<int> stack1;
    for (int i = 1; i <= 5; ++i)
    {
        stack1.push(i);
        std::cout << i << std::endl;
    }

    std::cout << "Emptying Stack" << std::endl;
    while (!stack1.empty())
    {
        std::cout << stack1.top() << std::endl;
        stack1.pop();
    }

    std::queue<int> queue1;

    std::cout << "Filling Queue" << std::endl;
    for (int i = 1; i <= 5; ++i)
    {
        queue1.push(i);
        std::cout << i << std::endl;
    }

    std::cout << "Emptying Queue" << std::endl;
    while(!queue1.empty())
    {
        std::cout << queue1.front() << std::endl;
        queue1.pop();
    }

    std::deque<int> deque1;
    std::cout << "Filling Deque" << std::endl;
    for (int i = 1; i <= 5; ++i)
    {
        deque1.push_back(i);
        std::cout << i << std::endl;
    }

    std::cout << "Emptying Deque From back" << std::endl;
    while (!deque1.empty())
    {
        std::cout << deque1.back() << std::endl;
        deque1.pop_back();
    }

    return 0;
}