#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&weapon;
	std::string	name;

public:
	// 생성자
	HumanA(std::string name, Weapon &weapon);
	// 소멸자
	~HumanA();

	//멤버 함수
	void attack(void);
};

#endif