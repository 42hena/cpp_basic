#include <iostream>

#include "Form.hpp"

// 생성자
Form::Form(std::string name, bool isSigned, const int signGrade, const int executeGrade)
	: name(name), isSigned(isSigned), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
		throw(GradeTooLowException());
	if (signGrade < 0 || executeGrade < 0)
		throw(GradeTooHighException());
	std::cout << "Form 생성자 입니다:)" << std::endl;
}

// 소멸자
Form::~Form(void)
{
	std::cout << "Form 소멸자 입니다:)" << std::endl;
}

// 복사 생성자
Form::Form(const Form &form)
	: name(form.name), isSigned(form.isSigned), signGrade(form.signGrade), executeGrade(form.executeGrade)
{ }

// 복사 대입 연산자
Form& Form::operator=(const Form &form)
{
	if (this != &form)
		this->isSigned = form.isSigned;
	return *this;
}

// getter
std::string		Form::getName(void) const
{
	return this->name;
}

bool			Form::getIsSigned(void) const
{
	return this->isSigned;
}

int				Form::getSignGrade(void) const
{
	return this->signGrade;
}

int				Form::getExecuteGrade(void) const
{
	return this->executeGrade;
}

// setter
void			Form::setIsSigned(bool sign)
{
	this->isSigned = sign;
}

// 멤버 함수
void    Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw (GradeTooLowException());
}

void	Form::execute(Bureaucrat const &bureaucrat)
{
	if (this->isSigned && bureaucrat.getGrade() <= this->executeGrade)
	{
		std::cout << "만들어야 함" << std::endl;
	}
	else if (!this->isSigned)
		throw (NoSignException());
	else
		throw (GradeTooLowException());	
}

// 예외 클래스
const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("[Form] GradeTooHigh :(");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("[Form] GradeTooLow :(");
}

const char* Form::NoSignException::what(void) const throw()
{
	return ("[Form] NoSign :(");
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Name: [" << form.getName() << "], isSigned: [" << form.getIsSigned() << "], signGrade: [" << form.getSignGrade() << "], executeGrade :[" << form.getExecuteGrade() << "]";

	return os;
}
