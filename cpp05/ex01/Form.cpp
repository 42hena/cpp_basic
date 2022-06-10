#include <iostream>

#include "Form.hpp"

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() >= this->signGrade)
        this->isSigned = true;
    else
        throw (Form::GradeTooLowException());
}

void	Form::signForm(Bureaucrat &bureaucrat)
{
    if (this->isSigned)
    {
        std::cout << "bureaucrat " << bureaucrat.getName() << " signed " << this->name << " form" << std::endl;
    }
    else
    {
        std::cout << "bureaucrat " << bureaucrat.getName() << " couldn’t sign " << this->name << " form because grade is not valid" << std::endl;
    }
}