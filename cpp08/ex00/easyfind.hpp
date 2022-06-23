#include <algorithm>

class NoSearchException : public std::exception
{
public:
    const char * what() const throw()
    {
        return "NoSearchException";
    }
};

template <typename T>
typename T::iterator easyfind(T& type, const int& findValue)
{
    typename T::iterator iter = std::find(type.begin(), type.end(), findValue);

    if (iter == type.end())
        throw NoSearchException();
    return iter;
}

// fail
// template <typename T1, typename T2>
// typename std::map<T1, T2>::iterator easyfind(std::map<T1, T2>& type, const int& findValue)
// {
//     std::map<T1, T2>::iterator iter = std::find(type.begin(), type.end(), findValue);

//     if (iter == type.end())
//         throw NoSearchException();
//     return iter;
// }
