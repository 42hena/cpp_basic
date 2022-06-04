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
	Fixed(const int);
	Fixed(const float);

	// 소멸자
	~Fixed(void);

	// 복사 생성자
	Fixed(const Fixed &copy);

	// 복사 대입 연산자
	Fixed& operator=(const Fixed &copy);

	// getter, setter
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat(void) const;
	int	toInt(void) const;
};
#include <iostream>
std::ostream& operator<<(std::ostream& outputStream, const Fixed& A);

#endif
