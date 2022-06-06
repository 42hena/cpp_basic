#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	// 생성자
	FragTrap();
	FragTrap(std::string name);

	// 소멸자
	~FragTrap();

	// 복사 생성자
	FragTrap(const FragTrap& copy);

	// 복사 대입 연산자
	FragTrap &operator=(FragTrap const &copy);

	// 멤버 함수
	void highFivesGuys(void);
};

#endif