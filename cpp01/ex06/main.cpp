#include <iostream>

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	std::string message;

	if (argc != 2)
		std::cout << "I think Error." << std::endl;
	else
	{
		message = static_cast<std::string>(argv[1]);
		harl.complain(message);
	}
	return 0;
}