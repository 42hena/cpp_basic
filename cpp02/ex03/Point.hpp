#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    // 생성자
    Point(void);
    Point(const float num1, const float num2);

	// 복사 생성자
	Point(const Point &copy);

    // 복사 대입 연산자
	Point& operator=(const Point &copy);
	// 소멸자
    ~Point();

	// getter setter
	Fixed getPointValueX(void) const;
    Fixed getPointValueY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif