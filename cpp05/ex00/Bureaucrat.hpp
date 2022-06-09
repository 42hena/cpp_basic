#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	// 생성자
	Bureaucrat(std::string name = "default", int grade = 150);

	// 소멸자
	~Bureaucrat(void);

	// getter setter
	std::string getName(void);
	int			getGrade(void);
	void		setGrade(void);
	
	// 멤버 함수
	void		increment(Bureaucrat &bureaucrat);
	void		decrement(Bureaucrat &bureaucrat);
};

#endif
