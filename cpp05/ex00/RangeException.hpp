#ifndef RANGEEXCEPTION_HPP
#define RANGEEXCEPTION_HPP

#include <exception>

class RangeException : public std::exception
{
public:
    const char* what(void) const throw()
    {
        return ("not in range(1 ~ 150)");
    }
};

#endif
