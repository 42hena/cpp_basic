#include <iostream>

#include "Form.hpp"

int main(void)
{
    Bureaucrat people("hena", 1);
    Form form1("form1", false);

    try
    {
        form1.beSigned(people);
        form1.signForm(people);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
}