#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm(void);

public:
    // 생성자
    ShrubberyCreationForm(std::string target);

    // 소멸자
    ~ShrubberyCreationForm(void);

    // 복사 생성자
    ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);

    // 복사 대입 연산자
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &shrubberyCreationForm);

    //멤버 함수
    void execute(const Bureaucrat& bureaucrat) const;
};
