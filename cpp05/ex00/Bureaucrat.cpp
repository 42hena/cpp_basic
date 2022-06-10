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
/*
case 1 : 기존에 생성된 객체를 이용해 새로운 객체를 초기화하는 경우(위의 경우)
case 2 : Call-by-value 방식의 함수 호출 과정에서 객체를 인자로 전달하는 경우
case 3 : 객체를 반환하되, 참조형으로 반환하지 않는 경우
예외 처리 필요 x
*/
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

// 예외 클래스
const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("[Bureaucrat] GradeTooHigh :(");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("[Bureaucrat] GradeTooLow :(");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "name: [" << bureaucrat.getName() << "], bureaucrat grade: [" << bureaucrat.getGrade() << "]";

	return (os);
}
