#include <iostream>

#include "RobotomyRequestForm.hpp"

// 생성자
RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form(target, false, 72, 45)
{
	std::cout << "RobotomyRequestForm 생성자" << std::endl;
}

// 소멸자
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm 소멸자" << std::endl;
}

// 복사 생성자
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm)
	: Form(robotomyRequestForm.getName(), robotomyRequestForm.getIsSigned(), robotomyRequestForm.getSignGrade(), robotomyRequestForm.getExecuteGrade())
{
	std::cout << "RobotomyRequestForm 복사 생성자" << std::endl;
}

// 복사 대입 연산자
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
{
	if (this != &robotomyRequestForm)
	{
		this->setIsSigned(robotomyRequestForm.getIsSigned());
	}
	return *this;
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
