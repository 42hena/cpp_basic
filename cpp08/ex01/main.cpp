#include <iostream>
#include <algorithm>
#include "Span.hpp"

int main()
{

	std::vector<int> a(10000);
	
	Span test(4);
	srand(time(NULL));
	// std::iterator iter = 
	test.addNumber(5);
	test.addNumber(4);
	test.addNumber(3);
	test.addNumber(2);

	// a = new std::vector<int>(10000);
	generate(a.begin(), a.end(), rand);
	for (int i = 0 ; i < a.size() ; ++i)
	{
		std::cout << a[i] << ' ';
	}
	test.addNumbers(a.begin(), a.end());
	for (int i = 0 ; i < test.size() ; ++i)
	{
		std::cout << test.getValue(i) << ' ';
	}
}