#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string type;

public:
	// 생성자
	Weapon(const std::string &type);
	// 소멸자
	~Weapon(void);

	// 멤버 함수
	const std::string&	getType(void) const;
	void				setType(const std::string &type);
};

#endif