#include <iostream>

#include "Intern.hpp"

// 생성자
Intern::Intern(void)
{ }

// 소멸자
Intern::~Intern(void)
{ }

// 복사 생성자
Intern::Intern(const Intern& intern)
{ }

// 복사 대입 연산자
Intern& Intern::operator=(const Intern& intern)
{
	return *this;
}

Form* Intern::CreateShrubberyCreationForm(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::CreateRobotomyRequestForm(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::CreatePresidentialPardonForm(std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string names[3] =
	{
		"ShrubberyCreation",
		"RobotomyRequest",
		"PresidentialPardon",
	};

	Form *(Intern:: *forms[3])(std::string &target) = {
		&Intern::CreateShrubberyCreationForm,
		&Intern::CreateRobotomyRequestForm,
		&Intern::CreatePresidentialPardonForm,
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
		{
			std::cout << "Intern creates " << names[i] << std::endl;
			return ((this->*(forms[i]))(target));
		}
	}
	throw Intern::NoNameException();
	return (NULL);
}

const char* Intern::NoNameException::what() const throw()
{
	return "This is not right name";
}
