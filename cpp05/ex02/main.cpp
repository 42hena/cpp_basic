#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    ShrubberyTEST(void)
{
    {
        Bureaucrat hena1("hena Shrubbery1", 145);
        Bureaucrat hena2("hena Shrubbery2", 146);
        ShrubberyCreationForm SForm("home");
        hena1.signForm(SForm);
        hena2.signForm(SForm);
    }
    std::cout << std::endl;
    {
        Bureaucrat hena3("hena Shrubbery1", 137);
        Bureaucrat hena4("hena Shrubbery2", 138);
        ShrubberyCreationForm SForm("home");
        hena3.signForm(SForm);
        
        hena3.excuteForm(SForm);
        hena4.excuteForm(SForm);
    }
    std::cout << std::endl << std::endl;
    {
        Bureaucrat hena1("hena Roboto1", 72);
        Bureaucrat hena2("hena Roboto2", 73);
        RobotomyRequestForm SForm("RequestForm");
        hena1.signForm(SForm);
        hena2.signForm(SForm);
    }
    std::cout << std::endl;
    {
        Bureaucrat hena3("hena Roboto1", 45);
        Bureaucrat hena4("hena Roboto2", 46);
        RobotomyRequestForm SForm("home");
        hena3.signForm(SForm);
        
        hena3.excuteForm(SForm);
        hena4.excuteForm(SForm);
    }

    std::cout << std::endl << std::endl;

    {
        Bureaucrat hena1("hena Shrubbery1", 25);
        Bureaucrat hena2("hena Shrubbery2", 26);
        PresidentialPardonForm SForm("home");
        hena1.signForm(SForm);
        hena2.signForm(SForm);
    }
    std::cout << std::endl;
    {
        Bureaucrat hena3("hena Shrubbery1", 5);
        Bureaucrat hena4("hena Shrubbery2", 6);
        PresidentialPardonForm SForm("home");
        hena3.signForm(SForm);
        
        hena3.excuteForm(SForm);
        hena4.excuteForm(SForm);
    }
}


int main(void)
{
	// Form TEST
	ShrubberyTEST();

	std::cout << std::endl << std::endl;

	// SignTest
}