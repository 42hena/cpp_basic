#include <iostream>

#include "Data.hpp"

int main(void)
{
    Data* origin = new Data();

    std::cout << *origin << std::endl;

    uintptr_t change = serialize(origin);

    std::cout << change << std::endl;

    Data * tmp = deserialize(change);

    std::cout << tmp << ' ' << *tmp << std::endl;
}