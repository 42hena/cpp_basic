#include <iostream>

#include "Intern.hpp"

int main()
{
	Intern intern;

	Form *form = intern.makeForm("RobotomyRequest", "Bender");

	std::cout << *form << std::endl;
	
	delete form;

	try
	{
		form = intern.makeForm("no match name", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	form = intern.makeForm("ShrubberyCreation", "Bender");
	delete form;

	try
	{
		form = intern.makeForm("no match name", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}