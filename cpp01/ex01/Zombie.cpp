#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "<" << name << "> create..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << name << "> died..." << std::endl;
}