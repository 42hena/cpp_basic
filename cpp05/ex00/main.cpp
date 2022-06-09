#include <iostream>

#include "Bureaucrat.hpp"
#include "RangeException.hpp"

int main(void)
{
    try
    {
        Bureaucrat test("hi", 151);
    }
    catch(RangeException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(int expn)
    {
        std::cerr << "test";
    }
}
