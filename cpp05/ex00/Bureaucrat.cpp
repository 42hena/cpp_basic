#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

// 생성자
Bureaucrat::Bureaucrat(void)
	: name("default", 150)
{
	std::cout << "Bureaucrat " << name << " 생성자 입니다:)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name), grade(grade)
{ 
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	std::cout << "Bureaucrat " << name << " 생성자 입니다:)" << std::endl;
}

// 소멸자
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << name << " 소멸자 입니다:)" << std::endl;
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

	if (nowGrade <= 1)
		throw(GradeTooHighException());
	else
		setGrade(--nowGrade);
}

void		Bureaucrat::decrement(void)
{
	int nowGrade = this->getGrade();

	if (nowGrade >= 150)
		throw(GradeTooLowException());
	else
		setGrade(++nowGrade);
}

// 예외 클래스
const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("[Bureaucrat] GradeTooHigh :(");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("[Bureaucrat] GradeTooLow :(");
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "[Bureaucrat] name: [" << bureaucrat.getName() << "], bureaucrat grade: [" << bureaucrat.getGrade() << "]";

	return (os);
}
