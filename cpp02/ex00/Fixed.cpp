#include <iostream>

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

// default 생성자
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
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

// getter
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return this->fixedPoint;
}

// setter
void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}