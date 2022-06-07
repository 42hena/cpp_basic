#include <iostream>

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// default 생성자
WrongCat::WrongCat(void)
    : WrongAnimal("cat")
{ 
    std::cout << "WrongCat Default Constructor" << std::endl;
}

// default 소멸자
WrongCat::~WrongCat(void)
{ 
    std::cout << "WrongCat Default Destructor" << std::endl;
}

// 복사 생성자
WrongCat::WrongCat(const WrongCat &cat)
{
    *this = cat;
}

// 복사 대입 연산자
WrongCat& WrongCat::operator=(const WrongCat &cat)
{ 
    this->type = cat.getType();
    return *this;
}

// getter
std::string WrongCat::getType(void) const
{
    return this->type;
}

// setter
void	WrongCat::setType(std::string type)
{
    this->type = type;
}

// 멤버 함수
void    WrongCat::makeSound(void) const
{
    std::cout << "미야옹 미야옹" << std::endl;    
}