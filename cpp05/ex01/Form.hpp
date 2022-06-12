#ifndef FORM_HPP
#define FORM_HPP

#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	// 멤버 변수
    const std::string	name;
    bool				isSigned;
	const int			signGrade;
	const int			executeGrade;

	// default 생성자
	Form(void);

public:
	// 생성자
    Form(std::string name, bool isSigned, const int signGrade, const int executeGrade);

	// 소멸자
    ~Form(void);

	// 복사 생성자
	Form(const Form &form);

	// 복사 대입 연산자
	Form& operator=(const Form &form);

	//getter, setter
	std::string		getName(void)			const;
	bool			getIsSigned(void)		const;
	void			setIsSigned(bool sign);
	int				getSignGrade(void)		const;
	int				getExecuteGrade(void)	const;

	// 멤버 함수
	void			beSigned(Bureaucrat &bureaucrat);

	// 예외 클래스
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif
