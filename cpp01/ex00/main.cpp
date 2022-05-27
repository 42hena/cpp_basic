#include <iostream>
#include "Zombie.hpp"
int main(void)
{
    Zombie stack("stack");
    Zombie *heap = newZombie("heap");
    delete(heap);

    const std::string NAME[] = 
    {
        "1", "2", "3", "4"
    };
    for (int i = 0 ; i < 4 ; ++i)
    {
        randomChump(NAME[i]);
    }
}