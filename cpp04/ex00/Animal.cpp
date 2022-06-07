#include <iostream>

#include "Animal.hpp"

// default 생성자
Animal::Animal(void)
	: type("Animal")
{
	// std::cout << "type : [" << type << "]" << std::endl;
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(std::string type)
	: type(type)
{
	std::cout << "Animal Constructor" << std::endl;
}

// default 소멸자
Animal::~Animal(void)
{
	std::cout << "Animal Default Destructor" << std::endl;
}

// 복사 생성자
Animal::Animal(const Animal &animal)
{
	*this = animal;
}

// 복사 대입 연산자
Animal &Animal::operator=(const Animal &animal)
{
	this->type = animal.getType();

	return *this;
}

// getter
std::string Animal::getType(void) const
{
	return type;
}

// setter
void Animal::setType(std::string type)
{
	this->type = type;
}

// 멤버 함수
void Animal::makeSound(void) const
{
	std::cout << "동물의 소리란 무엇인가..." << std::endl;
}