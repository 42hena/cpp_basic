#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon      *weapon;
	std::string name;
public:
	// 생성자
	HumanB(std::string name);

	// 소멸자
	~HumanB();

	// 멤버 함수
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif