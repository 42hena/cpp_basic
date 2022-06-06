#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	// 생성자
	DiamondTrap(void);
	DiamondTrap(std::string name);

	// 소멸자
	~DiamondTrap(void);

	// 복사 생성자
	DiamondTrap(const DiamondTrap& copy);

	// 복사 대입 연산자
	DiamondTrap&	operator=(const DiamondTrap &copy);
};

#endif