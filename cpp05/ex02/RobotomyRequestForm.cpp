#include <iostream>

#include "RobotomyRequestForm.hpp"

// 생성자
RobotomyRequestForm::RobotomyRequestForm(void)
{ }

RobotomyRequestForm::RobotomyRequestForm(std::string &target)
	: Form(target, false, 72, 45)
{

}

// 소멸자
RobotomyRequestForm::~RobotomyRequestForm()
{

}

// 복사 생성자
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm)
{

}

// 복사 대입 연산자
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
{

}

// 멤버 함수
void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
	if (this->getIsSigned() && bureaucrat.getGrade() <= this->getExecuteGrade())
	{
		std::cout << "ziiiiiiiiing~~~~~~~~~~~~~~~~!" << std::endl;
		srand(time(NULL));
		if (rand() % 2 == 1)
			std::cout << this->getName() << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->getName() << " informs that the robotomy failed." << std::endl;
	}
	else if (!this->getIsSigned())
		throw Form::NoSignException();
	else
		throw Form::GradeTooLowException();
}
