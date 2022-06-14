#include <iostream>

#include "A.hpp"

A::A(void)
{
	std::cout << "A 생성자입니다. :)" << std::endl;
}

A::~A(void)
{
	std::cout << "A 소멸자입니다. :)" << std::endl;
}
