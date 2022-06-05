#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap teacher("donghyki");
    ClapTrap student("hena");

    teacher.attack("hena");
    student.takeDamage(teacher.getAttackDamage());
}