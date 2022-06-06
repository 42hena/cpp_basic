#include <iostream>

#include "ClapTrap.hpp"


// default 생성자
ClapTrap::ClapTrap(void)
	: name("NoName"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap Class " << name << " Default Constructor" << std::endl;
}

// 생성자 오버로딩
ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap Class " << name << " Constructor" << std::endl;
}

// default 소멸자
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Class " << name << " Default Destructor" << std::endl;
}

// 복사 생성자
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

// 복사 대입 연산자
ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	name = copy.getName();
	hitPoint = copy.getHitPoint();
	energyPoint = copy.getEnergyPoint();
	attackDamage = copy.getAttackDamage();

	return *this;
}

// getter setter
std::string	ClapTrap::getName(void) const
{
	return this->name;
}

unsigned	ClapTrap::getHitPoint(void) const
{
	return this->hitPoint;
}

unsigned	ClapTrap::getEnergyPoint(void) const
{
	return this->energyPoint;
}

int		ClapTrap::getAttackDamage(void) const
{
	return this->attackDamage;
}

// 멤버 함수
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
	}
	else
	{
		std::cout << "ClapTrap " << name << " is already dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!hitPoint)
	{
		std::cout << "ClapTrap " << name << " died. So can't repaired" << std::endl;
	}
	else if (!energyPoint)
	{
		std::cout << "ClapTrap " << name << " can't repair oneself, because no energyPoint." << std::endl;
	}
	else
	{
		hitPoint += amount;
		std::cout << "ClapTrap " << name << " has been repaired of " << amount << " hit points. It has now " << energyPoint << " energy points, and " << hitPoint << " hit points." << std::endl;
		--energyPoint;
	}
}