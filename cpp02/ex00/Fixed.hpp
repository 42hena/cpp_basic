#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int 				fixedPoint;
	static const int	fractionalBit;

public:
	// 생성자
	Fixed(void);

	// 복사 생성자
	Fixed(const Fixed &copy);

	// 복사 대입 연산자
	Fixed& operator=(const Fixed &copy);

	// 소멸자
	~Fixed(void);

	// getter, setter
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif