#include <iostream>

#include "Dog.hpp"

Dog::Dog(void)
    : Animal("dog")
{
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog Default Destructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
    this->type = getType();
    return *this;
}

void	Dog::makeSound(void) const
{
    std::cout << "멍 멍" << std::endl;   
}