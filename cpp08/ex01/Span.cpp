#include "Span.hpp"

Span::Span(void)
{
	// private이므로 사용 불가
}

Span::Span(unsigned int n)
{
	this->length = n;
	this->nowsize = 0;
}

Span::~Span(void)
{}

void    Span::addNumber(int N)
{
	if (nowsize == length)
		throw FullException();
	std::vector<int> &v = getSpan();
	for (unsigned int i = 0 ; i < v.size() ; ++i)
	{
		if (N == v[i]) // 동일한 값이 존재하니? 
			throw DuplicateException();
	}
	v.push_back(N);
	nowsize++;
}

void    Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	std::vector<int> &v = getSpan();
	for (std::vector<int>::iterator iter = start ; iter != end ; iter++)
	{
		if (nowsize + 1 > length)
			throw FullException();
		int nowValue = *iter;
		for (unsigned int i = 0 ; i < nowsize ; ++i)
		{
			if (v[i] == nowValue)
				throw DuplicateException();
		}
		v.push_back(nowValue);
		nowsize++;
	}
}

unsigned int Span::shortestSpan(void)
{
	unsigned int minValue = 4294967295;
	if (v.size() <= 2)
		throw TooLowCountException();
	std::sort(v.begin(), v.end());
	for (unsigned int i = 0 ; i < v.size() - 1 ; ++i)
	{
		if (minValue > static_cast<unsigned int>(v[i + 1] - v[i]))
			minValue = v[i + 1] - v[i];
	}
	return minValue;
}

unsigned int Span::longestSpan(void)
{
	unsigned int maxValue = 0;
	if (v.size() <= 2)
		throw TooLowCountException();
	std::sort(v.begin(), v.end());
	maxValue = *(v.end() - 1) - *v.begin();
	return maxValue;
}


unsigned int Span::size(void)
{
	return this->nowsize;
}

unsigned int	Span::getValue(unsigned int index)
{
	if (index >= nowsize)
		throw OutBoundException();
	return v[index];
}

std::vector<int>& Span::getSpan(void)
{
	return this->v;
}