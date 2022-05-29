#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
class Zombie
{
private:

public:
    std::string name;
    Zombie();
    Zombie(std::string name);

    ~Zombie();
    void announce(void);

};
Zombie* zombieHorde(int N, std::string name);
#endif