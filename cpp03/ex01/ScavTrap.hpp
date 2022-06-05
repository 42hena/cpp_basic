#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	// 생성자
	ScavTrap(void);
	ScavTrap(std::string name);

	// 소멸자
	~ScavTrap(void);

	// 복사 생성자
	ScavTrap(const ScavTrap& copy);

	// 복사 대입 연산자
	ScavTrap&	operator=(const ScavTrap &copy);

	// 멤버 함수
	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif