#include <iostream>
#include "Zombie.hpp"
int main(void)
{
    Zombie *heapArray = zombieHorde(10, "hena");
    delete[] heapArray;

}