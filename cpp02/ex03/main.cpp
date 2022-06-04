#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point A(11.1, 0);
	Point B(0, 11.1);
	Point C(0.0, 0.0);
	Point tmp(2.5, 2.5);

	if (bsp(A, B, C, tmp))
		std::cout << "IN";
	else
		std::cout << "OUT";
	return 0;
}