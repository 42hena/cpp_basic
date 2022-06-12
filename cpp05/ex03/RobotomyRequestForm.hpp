#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm(void);

public:
    // 생성자
    RobotomyRequestForm(std::string target);

    // 소멸자
    ~RobotomyRequestForm();

    // 복사 생성자
    RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);

    // 복사 대입 연산자
    RobotomyRequestForm& operator=(const RobotomyRequestForm &robotomyRequestForm);

    // 멤버 함수
    void execute(const Bureaucrat& bureaucrat) const;
};
