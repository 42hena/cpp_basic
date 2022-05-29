#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    std::string value;
    
    for (int i = 0 ; i < N ; ++i)
    {
        horde[i].name = name;
        char number = i + '0';
        horde[i].name.push_back(number);
    }
    for (int i = 0 ; i < N ; ++i)
    {
        horde[i].announce();
    }
    return (horde);
}