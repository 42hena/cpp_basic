#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define end std::cout << std::endl;

int main()
{
    end;
    const Animal *meta = new Animal();
    end;

    end;
    const Animal *i = new Cat();    
    end;

    end;
    
    const Animal *j = new Dog();
    end;

    end;
    std::cout << meta->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    
    end;

    end;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    end;
    
    end;
    delete i;
    end;

    end;
    delete j;
    end;

    end;
    delete meta;
    end;

    end;
    const Cat *cat = new Cat();
    cat->getType();
    cat->makeSound();
    delete cat;
    end;

    end;
    const Dog *dog = new Dog();
    dog->getType();
    dog->makeSound();
    delete dog;
    end;

    // wrong Cat
}