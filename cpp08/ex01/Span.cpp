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
	std::vector<int> &v = getSpan();
	if (nowsize == length)
		throw FullException();

	for (int i = 0 ; i < v.size() ; ++i)
	{
		if (N == v[i]) // 동일한 값이 존재하니? 
			throw DuplicateException();
	}
	v.push_back(N);
	nowsize++;
}

template <typename T>
void    Span::addNumbers(T start, T end)
{
	std::vector<int> &v = getSpan();
	for (typename T::iteraotr iter = start ; iter != end ; iter++)
	{
		if (nowsize + 1 == length)
			throw FullException();
		int nowValue = *iter;
		for (int i = 0 ; i < nowsize ; ++i)
		{
			if (v[i] == nowValue)
				throw DuplicateException();
		}
		v.push_back(nowValue);
	}
}

unsigned int Span::shortestSpan(void)
{
	unsigned int minValue = 4294967295;
	if (v.size() <= 2)
		throw TooLowCountException();
	std::sort(v.begin(), v.end());
	for (int i = 0 ; i < v.size() - 1 ; ++i)
		if (minValue > v[i + 1] - v[i])
			minValue = v[i + 1] - v[i];
	return minValue;
}

unsigned int Span::longestSpan(void)
{
	unsigned int maxValue = 0;
	if (v.size() <= 2)
		throw TooLowCountException();
	std::sort(v.begin(), v.end());
	for (int i = 0 ; i < v.size() - 1 ; ++i)
		if (maxValue < v[i + 1] - v[i])
			maxValue = v[i + 1] - v[i];
	return maxValue;
}


unsigned int Span::size(void)
{
	return this->nowsize;
}

int	Span::getValue(int index)
{
	if (index >= nowsize)
		throw OutBoundException();
	return v[index];
}

std::vector<int>& Span::getSpan(void)
{
	return this->v;
}