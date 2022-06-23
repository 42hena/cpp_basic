#include <algorithm>

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator
		iterator;
	typedef typename std::stack<T>::container_type::const_iterator
		const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator
		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator
		const_reverse_iterator;

	iterator begin(void)
	{
		return this->c.begin();
	}

	iterator end(void)
	{
		return this->c.end();
	}

	const_iterator cbegin(void) const
	{
		return this->c.cbegin();
	}

	const_iterator cend(void) const
	{
		return this->c.cend();
	}

	reverse_iterator rbegin(void)
	{
		return this->c.rbegin();
	}

	reverse_iterator rend(void)
	{
		return this->c.rend();
	}

	const_reverse_iterator crbegin(void) const
	{
		return this->c.crbegin();
	}

	const_reverse_iterator crend(void) const
	{
		return this->c.crend();
	}
	
	// 생성자
	MutantStack(void) {}

	// 소멸자
	~MutantStack(void) {}

	// 복사 생성자
	MutantStack(const MutantStack &mutant) { *this = mutant; }

	// 복사 대입 연산자
	MutantStack &operator=(const MutantStack &mutant)
	{
		if (this != &mutant)
		{
			std::stack<T>::operator=(mutant);
		}
		return *this;
	}
};
