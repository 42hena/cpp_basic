#include <iostream>
#include <string>
#include <deque>
#include <list>
#include <vector>
#include <set>
#include <map>
#include "easyfind.hpp"

int main(void)
{
	std::deque<int> d;
	std::list<int> l;
	std::vector<int> v;
	std::set<int> s;
	// std::map<int, int> m;

	for (int i = 0; i < 10; ++i)
	{
		d.push_back(i);
		l.push_back(i);
		v.push_back(i);
		s.insert(i);
	}

	// deque
	try
	{
		std::deque<int>::iterator iter = easyfind(d, 3);
		std::cout << "Value " << *iter << " found on Index " << std::distance(d.begin(), iter) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::list<int>::iterator iter = easyfind(l, 4);
		std::cout << "Value " << *iter << " found on Index " << std::distance(l.begin(), iter) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator iter = easyfind(v, 5);
		std::cout << "Value " << *iter << " found on Index " << std::distance(v.begin(), iter) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::set<int>::iterator iter = easyfind(s, 11);
		std::cout << "Value " << *iter << " found on Index " << std::distance(s.begin(), iter) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// fail
	// try
	// {
	// 	std::map<int, int>::iterator iter = easyfind(m, 10);
	// 	std::cout << "Value " << iter->first << " found on Index " << std::distance(m.begin(), iter) << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	return 0;
}
