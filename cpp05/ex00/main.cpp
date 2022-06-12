#include <iostream>

#include "Bureaucrat.hpp"

int main(void)
{
    // range test
    std::cout << "RANGE START" << std::endl;
    try
    {
        Bureaucrat test("overflow", 151);
        std::cout << "No print." << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat test("underflow", 0);
        std::cout << "No print." << std::endl;
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
        std::cout << "No print." << std::endl;
        std::cout << high << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        high.decrement();
        std::cout << high << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "high TEST END" << std::endl << std::endl;

    
    // lowest TEST
    std::cout << "low TEST START" << std::endl;
    Bureaucrat low("lowest", 150);
    try
    {
        std::cout << low << std::endl;
        low.decrement();
        std::cout << "No print." << std::endl;
        std::cout << low << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
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

        std::cout << "No print." << std::endl;
        std::cout << destructor << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "destructor TEST END" << std::endl << std::endl;

    // destructor ERROR // LEAK
    std::cout << "destructor ERROR START" << std::endl;
    try
    {
        Bureaucrat *destructor = new Bureaucrat();
        std::cout << *destructor << std::endl;
        destructor->decrement();
        std::cout << "No print." << std::endl;
        std::cout << *destructor << std::endl;
    }
    catch (std::exception &e)
    {
        // delete destructor;
        std::cerr << e.what() << std::endl;
    }
    std::cout << "destructor ERROR END" << std::endl
              << std::endl;
}
