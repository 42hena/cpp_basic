#include <iostream>

#include "Zombie.hpp"

int main(void)
{
    // stack 영역
    Zombie stack("stack");
    stack.announce();

    // heap 영역
    Zombie *heap = newZombie("heap");
    heap->announce();
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