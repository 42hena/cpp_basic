#include <string>

#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string	name;
    bool				isSigned;
	const int			signGrade;
	const int			executeGrade;

public:
	// 생성자
    Form(std::string name = "Default Form", bool isSigned = false, const int signGrade = 150, const int executeGrade = 150);

	// 소멸자
    ~Form(void);

	// 복사 생성자
	Form(const Form &form);

	// 복사 대입 연산자
	Form& operator=(const Form &form);

	//getter, setter
	std::string		getName(void) const;
	bool			getIsSigned(void) const;
	void			setIsSigned(void);
	int				getSignGrade(void) const;
	int				getExecuteGrade(void) const; 

	// 멤버 함수
	void	beSigned(Bureaucrat &bureaucrat);
	void	signForm(const Bureaucrat &bureaucrat);

	virtual void execute(Bureaucrat const & executor) const = 0;

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

	class NoSignException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Form const &form);
