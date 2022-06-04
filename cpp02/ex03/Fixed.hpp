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

	// 복사 생성자
	Fixed(const Fixed &copy);

	// 복사 대입 연산자
	Fixed& operator=(const Fixed &copy);

	// 소멸자
	~Fixed(void);

	// getter, setter
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat(void) const;
	int	toInt(void) const;

	// operator overloading
	bool operator>(const Fixed &ref);
	bool operator<(const Fixed &ref);
	bool operator>=(const Fixed &ref);
	bool operator<=(const Fixed &ref);
	bool operator==(const Fixed &ref);
	bool operator!=(const Fixed &ref);

	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);

	Fixed& operator++();
	const Fixed operator++(int);
	Fixed& operator--();
	const Fixed operator--(int);

	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(Fixed const &a, Fixed const &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(Fixed const &a, Fixed const &b);
	Fixed abs(Fixed value);
};
#include <iostream>
std::ostream& operator<<(std::ostream& outputStream, const Fixed& A);

#endif
