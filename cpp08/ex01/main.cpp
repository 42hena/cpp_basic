#include <iostream>
#include <algorithm>
#include "Span.hpp"

int main()
{

	std::vector<int> a(10000);

	Span test(4);
	srand(time(NULL));
	try
	{
		test.addNumber(1000);
		test.addNumber(100000);
		test.addNumber(10000);
		test.addNumber(10);
		test.addNumber(1); // error 발생
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "[" << test.longestSpan() << ' ' << test.shortestSpan() << "]\n";

	Span hundredThousand(10000);
	generate(a.begin(), a.end(), rand);
	try
	{
		hundredThousand.addNumbers(a.begin(), a.end());
		std::cout << "[" << hundredThousand.longestSpan() << ' ' << hundredThousand.shortestSpan() << "]\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
