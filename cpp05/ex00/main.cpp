#include <iostream>

#include "Bureaucrat.hpp"

int main(void)
{
    // range test
    std::cout << "RANGE START" << std::endl;
    try
    {
        Bureaucrat test("overflow", 151);
        // 에러 이므로 아래가 출력되지 않음
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat test("underflow", 0);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "RANGE END" << std::endl << std::endl;

    // highest TEST
    std::cout << "high TEST START" << std::endl;
    Bureaucrat high("highest", 1);
    try
    {
        std::cout << high << std::endl;
        high.increment();
        // 출력 안됨
        std::cout << high << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << high << std::endl;
        high.decrement();
        std::cout << high << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "high TEST END" << std::endl << std::endl;

    // lowest TEST
    std::cout << "low TEST START" << std::endl;
    Bureaucrat low("lowest", 150);
    try
    {
        std::cout << low << std::endl;
        low.decrement();
        std::cout << low << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << low << std::endl;
        low.increment();
        std::cout << low << std::endl;        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "low TEST END" << std::endl << std::endl;

    // destructor ERROR TEST
    std::cout << "destructor START" << std::endl;
    try
    {
        Bureaucrat destructor("destructor", 1);
        std::cout << destructor << std::endl;
        destructor.increment();
        // 출력 안됨
        std::cout << destructor << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "destructor TEST END" << std::endl << std::endl;

    // destructor ERROR // LEAK 
    std::cout << "destructor START" << std::endl;
    try
    {
        Bureaucrat *destructor = new Bureaucrat();
        std::cout << *destructor << std::endl;
        destructor->decrement();
        // 출력 안됨
        std::cout << *destructor << std::endl;
    }
    catch(std::exception &e)
    {
        // delete destro
        std::cerr << e.what() << '\n';
    }
    std::cout << "destructor TEST END" << std::endl << std::endl;
}
