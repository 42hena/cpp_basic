#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define end std::cout << std::endl;

int main()
{
    std::cout << "Animal TEST" << std::endl;
    const Animal *i = new Animal();

    std::cout << "TYPE [" << i->getType() << "]" << std::endl;
    i->makeSound();
    end;

    std::cout << "Cat TEST" << std::endl;
    const Animal *j = new Cat();
    std::cout << "TYPE [" << j->getType() << "]" << std::endl;
    j->makeSound();
    end;
    
    std::cout << "Dog TEST" << std::endl;
    const Animal *k = new Dog();
    std::cout << "TYPE [" << k->getType() << "]" << std::endl;
    end;

    std::cout << "FREE TEST" << std::endl;
    std::cout << "ANIMAL FREE" << std::endl;
    delete i;
    end;
    std::cout << "CAT FREE" << std::endl;
    delete j;
    end;
    std::cout << "DOG FREE" << std::endl;
    delete k;
    end;

    std::cout << "Let's start CAT AND DOG TEST" << std::endl;
    std::cout << std::endl;
    Cat *testCat = new Cat();
    testCat->showAllType();
    delete testCat;
    end;

    std::cout << std::endl;
    Dog *testDog = new Dog();
    testDog->showAllType();
    delete testDog;
    end;

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