#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
    : ClapTrap("hena")
{
    std::cout << "ScavTrap Class Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap Class Default Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Class Default Destructor" << std::endl;    
}

void ScavTrap::guardGate(void)
{
    if (hitPoint)
		std::cout << "ScavTrap " << name << " gate guard mode." << std::endl;
	else
		std::cout << "ScavTrap " << name << " cannot gate guard mode. because already dead." << std::endl;
}