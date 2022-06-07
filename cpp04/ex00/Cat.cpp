#include <iostream>

#include "Cat.hpp"

// default 생성자
Cat::Cat(void)
    : Animal("cat")
{ 
    std::cout << "Cat Default Constructor" << std::endl;
}

// default 소멸자
Cat::~Cat(void)
{ 
    std::cout << "Cat Default Destructor" << std::endl;
}

// 복사 생성자
Cat::Cat(const Cat &cat)
{
    *this = cat;
}

// 복사 대입 연산자
Cat& Cat::operator=(const Cat &cat)
{ 
    this->type = cat.getType();

    return *this;
}

// getter
std::string Cat::getType(void) const
{
    return this->type;
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