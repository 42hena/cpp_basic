#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
    Base*   random = NULL;
    
    
    random = generate();
    // 예외 케이스 1
    // 그냥 넣기
    identify(random);
    // Base    ref;

    Base&   randomRef = *random;
    // // 예외 케이스 2
    // // Base&   randomRef = ref;
    if (random)
        identify(randomRef);
    delete random;
}