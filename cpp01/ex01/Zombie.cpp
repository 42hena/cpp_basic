#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::setName(std::string &name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << ": died..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
