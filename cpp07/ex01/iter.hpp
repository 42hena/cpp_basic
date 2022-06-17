#include <iostream>

template <typename T>
void    iter(const T *addr, std::size_t length, void (*f)(const T&))
{
    for (std::size_t i = 0 ; i < length ; ++i)
        f(addr[i]);
    std::cout << std::endl;
}

template <typename T>
void print(const T &arg)
{
    std::cout << static_cast<T>(arg) << " ";
}
