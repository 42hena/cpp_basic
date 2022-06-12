#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    // 생성자
	Intern(void);

    // 소멸자
    ~Intern(void);

    // 복사 생성자
	Intern(const Intern& intern);
	
    // 복사 대입 연산자
	Intern& operator=(const Intern& intern);

    // 포인터
	Form* CreatePresidentialPardonForm(std::string &target);
	Form* CreateRobotomyRequestForm(std::string &target);
	Form* CreateShrubberyCreationForm(std::string &target);
	Form* makeForm(std::string name, std::string target);
	class NoNameException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif