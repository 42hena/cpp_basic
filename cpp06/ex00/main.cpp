#include <iostream>
#include <iomanip>

#include "Convert.hpp"

void    convert(Convert &convertBefore)
{

}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "error" << std::endl;
	else
	{
		Convert convertValue(static_cast<std::string>(argv[1]));
		try
		{
			std::cout << convertValue.toChar() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			std::cout << convertValue.toInt() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << std::fixed <<std::setprecision(1) <<convertValue.toFloat() << "f" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			std::cout << convertValue.toDouble() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}
