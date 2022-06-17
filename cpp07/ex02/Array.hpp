#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int length;
	T *array;

public:
	// 생성자
	Array(void)
		: length(0), array(NULL)
	{ }
	Array(unsigned int n)
		: length(n)
	{
		array = new T[n];
	}

	// 소멸자
	~Array(void)
	{
		delete[] array;
	}

	// 복사 생성자
	Array(const Array &a)
		: length(a.size())
	{
		this->array = new T[this->length];
		for (unsigned int i = 0; i < this->length; ++i)
			this->array[i] = a.array[i];
	}

	// 복사 대입 연산자
	Array &operator=(const Array &array)
	{
		if (this != &array)
		{
			if (length)
			{
				delete[] this->array;
				this->array = NULL;
				length = 0;
			}
			length = array.size();
			if (length)
				this->array = new T[length];
			for (unsigned int i = 0 ; i < length ; ++i)
				this->array[i] = array[i];
		}
		return *this;
	}

	size_t size(void) const
	{
		return this->length;
	}

	T &operator[](unsigned int i)
	{
		if (i >= length)
			throw OutOfRangeException();
		return array[i];
	}

	const T &operator[](const unsigned int i) const
	{
		if (i >= length)
			throw OutOfRangeException();
		return array[i];
	}

	// 예외 클래스
	class OutOfRangeException : public std::exception
	{
	public:
		const char *what(void) const throw()
		{
			return "Out of Range Exception";
		}
	};
};
