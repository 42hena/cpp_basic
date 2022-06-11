#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm(void);

public:
	// 생성자
	PresidentialPardonForm(std::string &target);

	// 소멸자
	~PresidentialPardonForm(void);

	// 복사 생성자
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);

	// 복사 대입 연산자
	PresidentialPardonForm& operator=(const PresidentialPardonForm &presidentialPardonForm);

	// 멤버 함수
	void execute(const Bureaucrat& bureaucrat) const;
};

#endif
