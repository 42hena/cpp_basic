#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    // 생성자
    Brain(void);

    // 소멸자
    ~Brain(void);

    // 복사 생성자
	Brain(const Brain& brain);

    // 복사 대입 연산자
	Brain& operator=(const Brain &brain);

    // getter, setter
    std::string		getIdea(int index) const;
    void			setIdea(std::string idea, int index);
};

#endif