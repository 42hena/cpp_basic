#include <iostream>

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

// default 생성자
DiamondTrap::DiamondTrap(void)
    : ClapTrap("_clap_name")
{
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "DiamondTrap Class " << name << " Default Constructor" << std::endl;
}

// 생성자
DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name")
{
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 30;
    std::cout << "DiamondTrap Class " << name << " Constructor" << std::endl;
}

// default 소멸자
DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Class " << name << " Default Destructor" << std::endl;
}

// 복사 생성자
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    *this = copy;
}

// 대입 연산 오퍼레이터
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    name = copy.name;
    return *this;
}