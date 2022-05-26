#ifndef __RECTANGLE_HPP_
#define __RECTANGLE_HPP_

#include "Point.hpp"

class Rectangle
{
private:
    Point upLeft;
    Point lowRight;

public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};

#endif