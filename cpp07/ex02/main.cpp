#include "Array.hpp"

int main(void)
{
	Array<char> character(10);

	for (int i = 0 ; i < 10 ; ++i)
		character[i] = 48 + i;

	for (int i = 0 ; i < 10 ; ++i)
		std::cout << character[i] << ' ';
	const int test = 1;
	std::cout << character[test];
	std::cout << std::endl;
	try
	{
		std::cout << character[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int> integer(10);

	for (int i = 0 ; i < 10 ; ++i)
		integer[i] = i;

	for (int i = 0 ; i < 10 ; ++i)
		std::cout << integer[i] << ' ';
	std::cout << std::endl;
	try
	{
		std::cout << integer[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Array<float> _float(10);

	for (int i = 0 ; i < 10 ; ++i)
		_float[i] = 1.1f + i;

	for (int i = 0 ; i < 10 ; ++i)
		std::cout << _float[i] << ' ';
	std::cout << std::endl;
	try
	{
		std::cout << _float[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<double> _double(10);

	for (int i = 0 ; i < 10 ; ++i)
		_double[i] = 1.1 + i;

	for (int i = 0 ; i < 10 ; ++i)
		std::cout << _double[i] << ' ';
	std::cout << std::endl;
	try
	{
		std::cout << _double[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	
	return 0;
}