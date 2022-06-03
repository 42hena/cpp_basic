#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	int				attackDamage;
public:
	// 생성자
	ClapTrap(void);
	ClapTrap(std::string name);

	// 소멸자
	~ClapTrap(void);

	// 복사 생성자
	ClapTrap(const ClapTrap& copy);

	// 복사 대입 연산자
	ClapTrap&	operator=(ClapTrap const& copy);

	// 멤버 함수
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif