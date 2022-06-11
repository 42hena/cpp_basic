#include <iostream>

#include "Form.hpp"

void	FormRangeTest(void)
{
	try
	{
		Form	range("range", false, 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form	range("range", false, 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	range("range", false, 150, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form	range("range", false, 151, 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	FormSignTets(void)
{
	Bureaucrat	hena("hena", 1);
	Bureaucrat	juhur("juhur", 2);
	Bureaucrat	alee("alee", 3);

	Form		Form1("form1", false, 2, 3);
	Form		Form2("form2", false, 2, 3);
	Form		Form3("form3", false, 2, 3);

	std::cout << std::endl << std::endl;

	try
	{
		hena.signForm(Form1);
		juhur.signForm(Form2);
		alee.signForm(Form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
}


int main(void)
{
	// Form TEST
	FormRangeTest();	

	std::cout << std::endl << std::endl;

	// SignTest
	FormSignTets();
}