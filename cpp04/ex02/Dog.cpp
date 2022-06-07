#include <iostream>

#include "Dog.hpp"

// default 생성자
Dog::Dog(void)
    : Animal("dog")
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->brain = new Brain();
}

// default 소멸자
Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog Default Destructor" << std::endl;
}

// 복사 생성자
Dog::Dog(const Dog &dog)
    : Animal("dog")
{
    Brain * brainPTR = dog.getBrainPTR();
    brain = new Brain();
    for (int i = 0 ; i < 100 ; ++i)
        this->brain[i].setIdea(dog.getBrainString(brainPTR, i), i);
}

// 복사 대입 연산자
Dog& Dog::operator=(const Dog &dog)
{
    this->type = dog.getType();
    Brain *tmpBrain = dog.getBrainPTR();
    for (int i = 0 ; i < 100 ; ++i)
        this->brain->getIdea(i) = tmpBrain->getIdea(i);
    return *this;
}

// getter
std::string Dog::getType(void) const
{
    return this->type;
}

Brain*      Dog::getBrainPTR(void) const
{
    return this->brain;
}

std::string	Dog::getBrainString(const Brain *ptr, int i) const
{
    return ptr->getIdea(i);
}

void        Dog::showAllType(void)
{
    Brain *tmpPtr = getBrainPTR();
    for (int i = 0 ; i < 100 ; ++i)
    {
        std::cout << getBrainString(tmpPtr, i) << std::endl;
    }
}

// setter
void	Dog::setType(std::string type)
{
    this->type = type;
}

void	Dog::makeSound(void) const
{
    std::cout << "멍 멍" << std::endl;   
}