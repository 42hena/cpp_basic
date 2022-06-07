#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define end std::cout << std::endl;

int main()
{
    // 순수 가상 함수이므로 인스턴스(객체화)를 시키지 못함
    // Animal fail;
    
    Animal *animal;
    //animal = new Animal();
}