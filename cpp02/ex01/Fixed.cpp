#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionalBit = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = 0;
}


Fixed::Fixed(const Fixed &copy)
    : fixedPoint(copy.fixedPoint)
{
    // this->fixedPoint = copy.fixedPoint;
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy)
{   
    // fractionalBit = copy.fractionalBit;
//    this->fractionalBit = copy.fractionalBit;
   std::cout << "Copy assignment operator called" << std::endl; 

    fixedPoint = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPoint;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

// std::ostream& operator<<(std::ostream& outputStream, const Fixed& A)
// {
//     std::cout << "(" << A.() << ", " << A.getY() << ")";
//     return outputStream;
// }

