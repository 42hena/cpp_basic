#include <iostream>

#include "FragTrap.hpp"

// 기본 생성자
FragTrap::FragTrap(void)
	: ClapTrap("NoName")
{
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "FragTrap Class "<< name << " Default Constructor" << std::endl;
}

// 생성자
FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "FragTrap Class "<< name << " Constructor" << std::endl;
}

// 소멸자
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Class " << name << " Default Destructor" << std::endl;    
}

// 복사 생성자
FragTrap::FragTrap(const FragTrap& copy)
{
	
}

// 복사 대입 연산자
FragTrap &FragTrap::operator=(FragTrap const &frag)
{
	
}



void FragTrap::highFivesGuys(void)
{
	if (!hitPoint)
		std::cout << "FragTrap " << name << " asks for a positive high-five" << std::endl;
	else
		std::cout << "FragTrap " << name << " can't ask for a positive high-five because " << name << " is dead" << std::endl;
}