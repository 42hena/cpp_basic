#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name)
    : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
    std::cout << "FragTrap Class Default Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " has been destroyed." << std::endl;
}

FragTrap&	FragTrap::operator=( FragTrap const& frag) {
	ClapTrap::operator=(frag);
	std::cout << "FragTrap " << this->Name << " operator= is called" << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	if(this->energy)
		std::cout << "FragTrap " << this->Name << " asks for a positive high-five" << std::endl;
	else
		std::cout << "FragTrap " << this->Name << " can't ask for a positive high-five because " << this->Name << " is dead" << std::endl;

}