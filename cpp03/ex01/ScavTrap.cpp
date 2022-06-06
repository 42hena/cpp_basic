#include <iostream>

#include "ScavTrap.hpp"

// default 생성자
ScavTrap::ScavTrap(void)
    : ClapTrap("hena")
{
    std::cout << "ScavTrap Class "<< name << " Default Constructor" << std::endl;
}

// 생성자
ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
	std::cout << "ScavTrap Class "<< name << " Constructor" << std::endl;
}

// default 소멸자
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Class " << name << " Default Destructor" << std::endl;    
}

// 복사 생성자
ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
}

// 복사 대입 연산자
ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	name = copy.getName();
	return *this;
}

// 멤버 함수
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