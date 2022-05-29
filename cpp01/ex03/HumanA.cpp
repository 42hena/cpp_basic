#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
    : weapon(weapon), name(name)
{
    std::cout << "HumanA Constructor" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destroy " << std::endl;
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
