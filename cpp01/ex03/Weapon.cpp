#include "Weapon.hpp"
#include <iostream>
Weapon::Weapon(const std::string& type) 
    : type(type)
{ 
    std::cout << "Weapon constructor" << std::endl;
}

Weapon::~Weapon(void)
{ 
    std::cout << "Weapon destroy" << std::endl;
}

const std::string&	Weapon::getType(void) const
{
    return this->type;
}

void        Weapon::setType(const std::string &type)
{
    this->type = type;
}