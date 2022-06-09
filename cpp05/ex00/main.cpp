#include <iostream>

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat test("overflow", 151);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat test("underflow", 0);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat test("highest", 1);
        test.increment();
        std::cout << test.getGrade();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat test("lowest", 150);
        test.decrement();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
