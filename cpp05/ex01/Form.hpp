#include <string>

#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string	name;
    bool				isSigned;
	const int			signGrade;
	const int			excuteGrade;
public:
	// 생성자
    Form(std::string name = "Default Form", bool isSigned = false, const int signGrade = 150, const int excuteGrade = 150);

	// 소멸자
    ~Form(void);

	// 예외 클래스
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what(void) const throw()
		{
			return ("not in range(1 ~ 150), GradeTooHigh :(");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what(void) const throw()
		{
			return ("not in range(1 ~ 150), GradeTooLow :(");
		}
	};

	// 멤버 함수
	void	beSigned(Bureaucrat &bureaucrat);
	void	signForm(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, Form const &bureaucrat);