#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: name("hena"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap Class Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap Class One Parameter(string) Constructor" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Class Default Destructor" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (!hitPoint)
		std::cout << "ClapTrap " << name << " can't attacks " << target << ", because no hitPoint." << std::endl;
	else if (!energyPoint)
		std::cout << "ClapTrap " << name << " can't attacks " << target << ", because no energyPoint." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		--energyPoint;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoint)
	{
		std::cout << "ClapTrap " << name << " has taken " << amount << " points of damage" << std::endl;
		if (amount >= hitPoint)
		{
			hitPoint = 0;
			std::cout << "ClapTrap " << name << " died" << std::endl;
		}
		else
		{
			hitPoint -= amount;
			std::cout << "ClapTrap " << name << "'s hit points is now " << hitPoint << std::endl;
		}
		--energyPoint;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is already dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoint && hitPoint)
	{
		hitPoint += amount;
		std::cout << "ClapTrap " << name << " has been repaired of " << amount << " hit points. It has now " << energyPoint << " energy points, and " << hitPoint << " hit points." << std::endl;
		--energyPoint;
	}
	else if (!hitPoint)
	{
		std::cout << "ClapTrap " << name << " died" << std::endl;		
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " can't repair myself, because no energyPoint." << std::endl;
	}
	
}