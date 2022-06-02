#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string name;

public:
	// 생성자
	Zombie(std::string name);

	// 소멸자
	~Zombie(void);

	// 멤버 함수
	void announce(void);
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif