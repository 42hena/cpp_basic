#include "Point.hpp"
#include "Fixed.hpp"
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed abpoint = ((a.getPointValueX() * b.getPointValueY() + b.getPointValueX() * point.getPointValueY() + point.getPointValueX() * a.getPointValueY())
    - (a.getPointValueY() * b.getPointValueX() + b.getPointValueY() * point.getPointValueX() + point.getPointValueY() * a.getPointValueX()));
    Fixed acpoint = ((a.getPointValueX() * c.getPointValueY() + c.getPointValueX() * point.getPointValueY() + point.getPointValueX() * a.getPointValueY())
    - (a.getPointValueY() * c.getPointValueX() + c.getPointValueY() * point.getPointValueX() + point.getPointValueY() * a.getPointValueX()));
    Fixed bcpoint = ((b.getPointValueX() * c.getPointValueY() + c.getPointValueX() * point.getPointValueY() + point.getPointValueX() * b.getPointValueY())
    - (b.getPointValueY() * c.getPointValueX() + c.getPointValueY() * point.getPointValueX() + point.getPointValueY() * b.getPointValueX()));
    
    Fixed abc = ((a.getPointValueX() * b.getPointValueY() + b.getPointValueX() * c.getPointValueY() + c.getPointValueX() * a.getPointValueY())
    - (a.getPointValueY() * b.getPointValueX() + b.getPointValueY() * c.getPointValueX() + a.getPointValueY() * a.getPointValueX()));
    
    std::cout << abpoint << ' ' << acpoint << ' ' << bcpoint << ' ' << abc << '\n';
    std::cout << abc.abs(abc) << ' ' << abpoint.abs(abpoint) + acpoint.abs(acpoint) + bcpoint.abs(bcpoint) << std::endl;
    if (abc.abs(abc) == (abpoint.abs(abpoint) + acpoint.abs(acpoint) + bcpoint.abs(bcpoint)))
        return 1;
    return 0;
}