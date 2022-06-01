#include <iostream>

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

// default 생성자
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = integer * (1 << this->fractionalBit);
}

Fixed::Fixed(const float floatPoint)
{
	std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = floatPoint * (1 << this->fractionalBit);
}

// copy 생성자
Fixed::Fixed(const Fixed &copy)
    // : fixedPoint(copy.fixedPoint)
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
std::ostream& operator<<(std::ostream& outputStream, const Fixed& A)
{
    std::cout << (float)A.getRawBits() / (1 << 8);
    return outputStream;
}