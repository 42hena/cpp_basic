#include <iostream>

#include "B.hpp"

B::B(void)
{
	std::cout << "B 생성자입니다. :)" << std::endl;
}

B::~B(void)
{
	std::cout << "B 소멸자입니다. :)" << std::endl;
}
