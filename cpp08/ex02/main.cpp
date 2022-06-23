#include "MutantStack.hpp"

void    pdfTest()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); 
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void    myTest()
{
	MutantStack<int> mstack;
	if (!mstack.empty())
		mstack.pop();
	for (int i = 0 ; i < 100 ; ++i)
		mstack.push(i);
	std::cout << "now size: [" << mstack.size() << "]" << '\n';
	std::cout << "top value: [" << mstack.top() << "]" << '\n';
}

int main()
{
	pdfTest();
	myTest();
	
	return 0;
}