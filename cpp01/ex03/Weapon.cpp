#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon() 
    : type("")
{ 
    std::cout << "Weapon constructor1" << std::endl;
}
Weapon::Weapon(const std::string& type) 
    : type(type)
{ 
    std::cout << "Weapon constructor2" << std::endl;
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