#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define end std::cout << std::endl;

int main()
{
    // 순수 가상 함수이므로 인스턴스(객체화)를 시키지 못함
    // Animal fail;
    
    // Animal *animal; -> Cat이나 Dog로 사용 가능

    // 불가
    //animal = new Animal();

    // 나머진 전이랑 동일
    std::cout << "Let's start Animal Array TEST" << std::endl;
    Animal *object[10];

    for (int i = 0; i < 10; ++i)
    {
        if (i & 1)
            object[i] = new Cat();
        else
            object[i] = new Dog();
        std::cout << std::endl;
    }

    std::cout << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        std::cout << object[i]->getType() << std::endl;
    }
    for (int i = 0; i < 10; ++i)
    {
        delete object[i];
        std::cout << std::endl;
    }
}