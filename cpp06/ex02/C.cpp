#include <iostream>

#include "C.hpp"

C::C(void)
{
	std::cout << "C 생성자입니다. :)" << std::endl;
}

C::~C(void)
{
	std::cout << "C 소멸자입니다. :)" << std::endl;
}
