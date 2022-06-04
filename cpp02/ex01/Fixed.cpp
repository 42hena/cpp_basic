#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

// default 생성자
Fixed::Fixed(void)
    : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// 생성자
Fixed::Fixed(const int integer)
    : fixedPoint(integer * (1 << this->fractionalBit))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatPoint)
    : fixedPoint(roundf(floatPoint * (1 << this->fractionalBit)))
{
	std::cout << "Float constructor called" << std::endl;
}

// 복사 생성자
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// 복사 대입 생성자
Fixed& Fixed::operator=(const Fixed &copy)
{	
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = copy.getRawBits();

    return *this;
}

// 소멸자
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

// getter setter
int Fixed::getRawBits(void) const
{
	return this->fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

// 멤버 함수
float Fixed::toFloat(void) const
{
    return  ((float)this->getRawBits()) / (1 << this->fractionalBit);
}

int Fixed::toInt(void) const
{
    return  this->getRawBits() / (1 << this->fractionalBit);
}

// << 오버로딩
std::ostream& operator<<(std::ostream& outputStream, const Fixed& fixed)
{
    std::cout << fixed.toFloat();
    return outputStream;
}