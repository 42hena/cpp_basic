#include <iostream>

#include "Brain.hpp"

// default 생성자
Brain::Brain(void)
{
	std::cout << "Brain default Constructor" << std::endl;
	std::string tmp = "hena's Brain T.T";
	for (int i = 0 ; i < 100 ; ++i)
	{
		setIdea(tmp, i);
	}
}

// default 소멸자
Brain::~Brain(void)
{
	std::cout << "Brain default Destructor" << std::endl;
}

// 복사 생성자
Brain::Brain(const Brain& brain)
{
	*this = brain;
}

// 복사 대입 연산자
Brain& Brain::operator=(const Brain &brain)
{
	for (int i = 0 ; i < 100 ; ++i)
	{
		this->ideas[i] = brain.getIdea(i);
	}

	return *this;
}

// getter
std::string Brain::getIdea(int index) const
{
    return ideas[index];
}

// setter
void		Brain::setIdea(std::string idea, int index)
{
	this->ideas[index] = idea;
}