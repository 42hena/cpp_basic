#include <iostream>

#include "WrongAnimal.hpp"

// default 생성자
WrongAnimal::WrongAnimal(void)
	: type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: type(type)
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

// default 소멸자
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Default Destructor" << std::endl;
}

// 복사 생성자
WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
}

// 복사 대입 연산자
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	this->type = animal.getType();

	return *this;
}

// getter
std::string WrongAnimal::getType(void) const
{
	return type;
}

// setter
void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

// 멤버 함수
void WrongAnimal::makeSound(void) const
{
	std::cout << "동물의 소리란 무엇인가..." << std::endl;
}