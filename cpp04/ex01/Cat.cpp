#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"

// default 생성자
Cat::Cat(void)
    : Animal("cat")
{ 
    std::cout << "Cat Default Constructor" << std::endl;
    this->brain = new Brain();
}

// default 소멸자
Cat::~Cat(void)
{ 
    delete brain;
    std::cout << "Cat Default Destructor" << std::endl;
}

// 복사 생성자
Cat::Cat(const Cat &cat)
    : Animal("cat")
{
    Brain * brainPTR = cat.getBrainPTR();
    brain = new Brain();
    for (int i = 0 ; i < 100 ; ++i)
        this->brain[i].setIdea = cat.getBrainString(brainPTR, i);
}

// 복사 대입 연산자
Cat& Cat::operator=(const Cat &cat)
{ 
    std::cout << "hi1" << std::endl;
    this->type = cat.getType();
    Brain *tmpBrain = cat.getBrainPTR();
    for (int i = 0 ; i < 100 ; ++i)
        this->brain->getIdea(i) = tmpBrain->getIdea(i);
    return *this;
}

// getter
std::string Cat::getType(void) const
{
    return this->type;
}

Brain*      Cat::getBrainPTR(void) const
{
    return this->brain;
}

std::string	Cat::getBrainString(const Brain *ptr, int i) const
{
    return ptr->getIdea(i);
}

void        Cat::showAllType(void)
{
    Brain *tmpPtr = getBrainPTR();
    for (int i = 0 ; i < 100 ; ++i)
    {
        std::cout << getBrainString(tmpPtr, i) << std::endl;
    }
}

// setter
void	Cat::setType(std::string type)
{
    this->type = type;
}

// 멤버 함수
void    Cat::makeSound(void) const
{
    std::cout << "미야옹 미야옹" << std::endl;    
}