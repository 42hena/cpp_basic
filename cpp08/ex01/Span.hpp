#include <vector>
#include <exception>

class Span
{
private:
	std::vector<int>	v;
	unsigned int		length;
	unsigned int		nowsize;

	//생성자
	Span(void);

public:
	// 생성자
	Span(unsigned int n);

	// 소멸자
	~Span(void);

	// 복사 생성자
	Span(const Span &span);

	// 복사 대입 연산자
	Span &operator=(const Span &span);

	// getter
	unsigned int size(void);
	unsigned int	getValue(unsigned int index);
	std::vector<int>& getSpan(void);

	// 멤버 함수
	void	addNumber(int N);
	void	addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);

	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);

	// 예외 클래스
	class TooLowCountException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "TooLowCountException";
		}
	};

	class DuplicateException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "DuplicateException";
		}
	};

	class FullException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "FullException";
		}
	};

	class OutBoundException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "OutBoundException";
		}
	};
};
