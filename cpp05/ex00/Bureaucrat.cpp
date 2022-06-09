#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "RangeException.hpp"

// 여기선 선언부 쓰면 터짐 ^^
//Bureaucrat::Bureaucrat(std::string name = "default", int grade = 150)
Bureaucrat::Bureaucrat(std::string name, int grade)
    : name(name), grade(grade)
{ 
    if (grade < 1 || grade > 150)
        throw (RangeException());
    std::cout << "생성자 입니다:)" << std::endl;
    std::cout << name << ' ' << grade << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "소멸자 입니다:)" << std::endl;
}

std::string Bureaucrat::getName(void)
{
    return this->name;
}

int			Bureaucrat::getGrade(void)
{
    return this->grade;
}

void		Bureaucrat::setGrade(const int num)
{
    this->grade = num;
}

void		Bureaucrat::increment(Bureaucrat &bureaucrat)
{
    int nowGrade = bureaucrat.getGrade();

    if (nowGrade == 1)
        throw(RangeException());
    else
        setGrade(--nowGrade);
}

void		Bureaucrat::decrement(Bureaucrat &bureaucrat)
{
    int nowGrade = bureaucrat.getGrade();

    if (nowGrade == 150)
        throw(RangeException());
    else
        setGrade(++nowGrade);
}