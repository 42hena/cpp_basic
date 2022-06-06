#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap student("hena");
    ScavTrap teacher("donghyki");
    
    std::cout << std::endl;
    student.attack("donghyki");
    teacher.takeDamage(student.getAttackDamage());
    std::cout << std::endl;

    std::cout << std::endl;
    teacher.guardGate();
    // student.guardGate();
    std::cout << std::endl;

    std::cout << std::endl;
    teacher.attack("hena");
    student.takeDamage(teacher.getAttackDamage());
    std::cout << std::endl;
}