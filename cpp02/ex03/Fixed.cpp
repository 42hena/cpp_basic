#include <iostream>

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

// default 생성자
Fixed::Fixed(void)
{
    this->fixedPoint = 0;
}

Fixed::Fixed(const int integer)
{
    this->fixedPoint = integer << this->fractionalBit;
}

Fixed::Fixed(const float floatPoint)
{
    this->fixedPoint = roundf(floatPoint * (1 << this->fractionalBit));
}

// copy 생성자
Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

// 복사 대입 생성자
Fixed& Fixed::operator=(const Fixed &copy)
{
    this->fixedPoint = copy.getRawBits();

    return *this;
}

// 소멸자
Fixed::~Fixed(void)
{
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

// << 출력 오버로딩
std::ostream& operator<<(std::ostream& outputStream, const Fixed& A)
{
    std::cout << A.toFloat();
    return outputStream;
}


bool Fixed::operator>(const Fixed &ref)
{
    return getRawBits() > ref.getRawBits();
}

bool Fixed::operator<(const Fixed &ref)
{
    return getRawBits() < ref.getRawBits();
}

bool Fixed::operator>=(const Fixed &ref)
{
    return getRawBits() >= ref.getRawBits();
}

bool Fixed::operator<=(const Fixed &ref)
{
    return getRawBits() <= ref.getRawBits();
}

bool Fixed::operator==(const Fixed &ref)
{
    return getRawBits() == ref.getRawBits();
}

bool Fixed::operator!=(const Fixed &ref)
{
    return getRawBits() != ref.getRawBits();
}

Fixed Fixed::operator+(const Fixed &ref)
{
    Fixed temp(this->toFloat() + ref.toFloat());
    return temp;
}

Fixed Fixed::operator-(const Fixed &ref)
{
    Fixed temp(this->toFloat() - ref.toFloat());
    return temp;
}

Fixed Fixed::operator*(const Fixed &ref)
{
    Fixed temp(this->toFloat() * ref.toFloat());
    return temp;
}

Fixed Fixed::operator/(const Fixed &ref)
{
    Fixed temp(this->toFloat() / ref.toFloat());
    return temp;
}

Fixed& Fixed::operator++()
{
    ++(this->fixedPoint);
    return *this;
}

const Fixed Fixed::operator++(int)
{
    const Fixed retobj(*this);
    ++(this->fixedPoint);
    return retobj;
}

Fixed& Fixed::operator--()
{
    this->fixedPoint--;
    return *this;
}

const Fixed Fixed::operator--(int)
{
    const Fixed retobj(*this);
    --(this->fixedPoint);
    return retobj;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

Fixed Fixed::abs(Fixed value)
{
    if (value.getRawBits() < 0)
        return -value.getRawBits();
    return value.getRawBits();
}