#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
private:
	// 멤버 변수
	const std::string	name;
	int					grade;

public:
	// 생성자
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);

	// 소멸자
	~Bureaucrat(void);

	// 복사 생성자
	Bureaucrat(const Bureaucrat &bureaucrat);

	// 복사 대입 연산자
	Bureaucrat& operator=(const Bureaucrat &bureaucrat);

	// getter setter
	std::string		getName(void)				const;
	int				getGrade(void)				const;
	void			setGrade(const int num);

	// 멤버 함수
	void			increment();
	void			decrement();

	// 예외 클래스
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif
