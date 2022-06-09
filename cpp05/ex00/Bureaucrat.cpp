#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

// 여기선 선언부 쓰면 터짐 ^^
//Bureaucrat::Bureaucrat(std::string name = "default", int grade = 150)
Bureaucrat::Bureaucrat(std::string name, int grade)
    : name(name), grade(grade)
{ 
    if (grade < 1)
        throw (GradeTooHighException());
    else if (grade > 150)
        throw (GradeTooLowException());
    std::cout << "생성자 입니다:)" << std::endl;
    std::cout << name << ' ' << grade << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "소멸자 입니다:)" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int			Bureaucrat::getGrade(void) const
{
    return this->grade;
}

void		Bureaucrat::setGrade(const int num)
{
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