#include <iostream>
#include <fstream>

#include "ShrubberyCreationForm.hpp"

// 생성자
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form(target, false, 145, 137)
{ 
    std::cout << "ShrubberyCreationForm 생성자" << std::endl;
}

// 소멸자
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{ 
    std::cout << "ShrubberyCreationForm 소멸자" << std::endl;
}

// 복사 생성자
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm)
    : Form(shrubberyCreationForm.getName(), shrubberyCreationForm.getIsSigned(), shrubberyCreationForm.getSignGrade(), shrubberyCreationForm.getExecuteGrade())
{
    std::cout << "ShrubberyCreationForm 복사 생성자" << std::endl;
}

// 복사 대입 연산자
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberyCreationForm)
{
	if (this != &shrubberyCreationForm)
	{
		this->setIsSigned(shrubberyCreationForm.getIsSigned());
	}
	return *this;
}


void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
	if (this->getIsSigned() && bureaucrat.getGrade() <= this->getExecuteGrade())
	{
		std::ofstream out(this->getName() + "_shrubbery");
		std::string tree =	"     ccee88oo\n"
							"  C8O8O8Q8PoOb o8oo\n"
							" dOB69QO8PdUOpugoO9bD\n"
							"CgggbU8OU qOp qOdoUOdcb\n"
							"    6OuU  /p u gcoUodpP\n"
							"      \\\\//  /douUP\n"
							"        \\\\////\n"
							"         |||/\\\n"
							"         |||\\/\n"
							"         |||||\n"
							"  .....//||||\\....\n";
		out << tree;
		out.close();
	}
	else if (!this->getIsSigned())
		throw Form::NoSignException();
	else
		throw Form::GradeTooLowException();
}
