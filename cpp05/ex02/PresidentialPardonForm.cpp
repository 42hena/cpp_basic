#include <iostream>

#include "PresidentialPardonForm.hpp"

// 생성자
PresidentialPardonForm::PresidentialPardonForm(void)
{ }

PresidentialPardonForm::PresidentialPardonForm(std::string &target)
    : Form(target, false, 25, 5)
{
    std::cout << "PresidentialPardonForm 생성자" << std::endl;
}

// 소멸자
PresidentialPardonForm::~PresidentialPardonForm(void)
{ 
    std::cout << "PresidentialPardonForm 소멸자" << std::endl;
}

// 복사 생성자
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm)
    : Form(presidentialPardonForm.getName(), presidentialPardonForm.getIsSigned(), presidentialPardonForm.getSignGrade(), presidentialPardonForm.getExecuteGrade())
{
    std::cout << "PresidentialPardonForm 복사 생성자" << std::endl;
}

// 복사 대입 연산자
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialPardonForm)
{
	if (this != &presidentialPardonForm)
	{
		this->setIsSigned(presidentialPardonForm.getIsSigned());
	}
	return *this;
}


void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
    if (this->getIsSigned() && bureaucrat.getGrade() <= this->getExecuteGrade())
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else if (!this->getIsSigned())
		throw NoSignException();
	else
		throw GradeTooHighException();	
}
