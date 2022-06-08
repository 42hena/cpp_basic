#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define end std::cout << std::endl;

int main()
{
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
    
    // cat
    end;
    delete i;
    end;

    // dog
    end;
    delete j;
    end;

    // animal
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

    // wrong Cat version
    std::cout << "Wrong version" << std::endl;
    end;
    const WrongAnimal *wrongmeta = new WrongAnimal();
    end;

    end;
    const WrongAnimal *wrongi = new WrongCat();    
    end;


    end;
    std::cout << wrongmeta->getType() << std::endl;
    std::cout << wrongi->getType() << std::endl;
    end;

    end;
    wrongmeta->makeSound();
    wrongi->makeSound();
    end;
    
    end;
    delete wrongi;
    end;

    end;
    delete wrongmeta;
    end;

    end;
    const WrongCat *wrongcat = new WrongCat();
    wrongcat->getType();
    wrongcat->makeSound();
    delete wrongcat;
    end;
}