#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	// 생성자
	Bureaucrat(std::string name = "default", int grade = 150);

	// 소멸자
	~Bureaucrat(void);

	// getter setter
	std::string getName(void);
	int getGrade(void);
	void setGrade(const int num);

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
	void increment();
	void decrement();
};

#endif
