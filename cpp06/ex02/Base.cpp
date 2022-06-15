#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Base::Base(void)
// {
// 	std::cout << "Base 생성자입니다. :)" << std::endl;
// }

Base::~Base(void)
{
	std::cout << "Base 소멸자입니다. :)" << std::endl;
}

Base*	generate(void)
{
	srand(time(NULL));
	int num = rand() % 3;

	Base * ret = NULL;
	switch (num)
	{
	case 0:
		ret = new A();
		break;
	case 1:
		ret = new B();
		break;
	case 2:
		ret = new C();
		break;
	default:
		break;
	}
	return ret;
}

void    identify(Base* p)
{
	if (!p)
		std::cout << "NULL :((((((" << std::endl;
	else if (A *a = dynamic_cast<A *>(p))
		std::cout << "A class 입니다 :)" << std::endl;
	else if (B *b = dynamic_cast<B *>(p))
		std::cout << "B class 입니다 :)" << std::endl;
	else if (C *c = dynamic_cast<C *>(p))
		std::cout << "C class 입니다 :)" << std::endl;
	else
		std::cout << "A, B, C 클래스가 아닙니다. :(" << std::endl;
}

#include <signal.h>

void	sighandler(int signum)
{
	std::cout << signum << std::endl;
	throw (std::exception());
	signal(signum, SIG_DFL);
}

void    identify(Base& p)
{
	int errCount = 0;
	signal(SIGSEGV, sighandler);
	try
	{
		A &a = dynamic_cast<A &>(p);
		static_cast<void>(a);
		std::cout << "A class 입니다 :)" << std::endl;
	}
	catch(const std::exception& e)
	{
		++errCount;
		std::cerr << e.what() << '\n';
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		static_cast<void>(b);
		std::cout << "B class 입니다 :)" << std::endl;
	}
	catch(const std::exception& e)
	{
		++errCount;
		std::cerr << e.what() << '\n';
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		static_cast<void>(c);
		std::cout << "C class 입니다 :)" << std::endl;
	}
	catch(const std::exception& e)
	{
		++errCount;
		std::cerr << e.what() << '\n';
	}
	if (errCount >= 3)
		std::cout << "A, B, C 클래스가 아닙니다. :(" << std::endl;
}
