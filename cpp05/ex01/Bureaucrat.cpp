#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"


/*********************
배운 점: 여기선 선언부 쓰면 터짐 ^^
ex) Bureaucrat::Bureaucrat(std::string name = "default", int grade = 150)
*********************/

// 생성자
Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name), grade(grade)
{ 
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	std::cout << "Bureaucrat 생성자 입니다:)" << std::endl;
}

// 소멸자
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat 소멸자 입니다:)" << std::endl;
}

// 복사 생성자
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

// 복사 대입 연산자
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat)
		this->grade = bureaucrat.getGrade();
	return *this;
}

// getter
std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int			Bureaucrat::getGrade(void) const
{
	return this->grade;
}

// setter
void		Bureaucrat::setGrade(const int num)
{
	if(num < 1)
		throw(GradeTooHighException());	
	if (num > 150)
		throw(GradeTooLowException());
	this->grade = num;
}

void		Bureaucrat::increment(void)
{
	int nowGrade = this->getGrade();

	if (nowGrade == 1)
		throw(GradeTooHighException());
	else
		setGrade(--nowGrade);
}

void		Bureaucrat::decrement(void)
{
	int nowGrade = this->getGrade();

	if (nowGrade == 150)
		throw(GradeTooLowException());
	else
		setGrade(++nowGrade);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "name: [" << bureaucrat.getName() << "], bureaucrat grade: [" << bureaucrat.getGrade() << "]";

	return (os);
}
