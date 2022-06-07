#include <iostream>

#include "Animal.hpp"

// default 생성자
Animal::Animal(void)
	: type("Animal")
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const std::string &type)
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
Animal&	Animal::operator=(const Animal &animal)
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