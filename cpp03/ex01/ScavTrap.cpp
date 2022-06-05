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
    std::cout << "ScavTrap Class " << name << " Default Destructor" << std::endl;    
}

void ScavTrap::attack(const std::string &target)
{
	if (!hitPoint)
		std::cout << "ScavTrap " << name << " can't attacks " << target << ", because no hitPoint." << std::endl;
	else if (!energyPoint)
		std::cout << "ScavTrap " << name << " can't attacks " << target << ", because no energyPoint." << std::endl;
	else
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		--energyPoint;
	}
}


void ScavTrap::guardGate(void)
{
    if (hitPoint)
		std::cout << "ScavTrap " << name << " gate guard mode." << std::endl;
	else
		std::cout << "ScavTrap " << name << " cannot gate guard mode. because already dead." << std::endl;
}