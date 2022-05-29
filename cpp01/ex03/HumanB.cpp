#include "HumanB.hpp"
#include <iostream>
HumanB::HumanB(std::string name)
    : weapon(NULL), name(name)
{
    std::cout << "HumanB Constructor" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroy" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    std::string tmp;

    tmp = weapon->getType();
    if (tmp == "")
        std::cout << name << "attacks with their" << weapon->getType() << std::endl;
    else
        std::cout << "empty" << std::endl;
}
