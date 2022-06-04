#include "Point.hpp"

// default 생성자
Point::Point(void) : x(0), y(0)
{ }

// 생성자
Point::Point(const float num1, const float num2)
    : x(num1), y(num2)
{ }

// 복사 생성자
Point::Point(const Point &copy)
    : x(copy.x),  y(copy.y)
{ }

// 복사 대입 연산자
Point &Point::operator=(const Point &copy)
{
    const_cast<Fixed&>(x) = copy.getPointValueX();
    const_cast<Fixed&>(y) = copy.getPointValueY();
    return *this;
}

Point::~Point()
{ }

Fixed Point::getPointValueX(void) const
{
    return x;
}

Fixed Point::getPointValueY(void) const
{
    return y;
}