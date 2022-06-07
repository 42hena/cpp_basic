#include <iostream>

#include "DiamondTrap.hpp"

#define line std::cout << std::endl;
int main(void)
{
    DiamondTrap dia("dia");

    dia.attack("another");
    dia.beRepaired(1);
    dia.takeDamage(1);
    dia.showState();

    dia.guardGate();
    dia.highFivesGuys();
    line;

    line;
    ClapTrap clap("clap");

    clap.attack("another");
    clap.beRepaired(1);
    clap.takeDamage(1);
    clap.showState();
    line;

    line;
    ScavTrap scav("scav");

    scav.attack("another");
    scav.beRepaired(1);
    scav.takeDamage(1);
    scav.showState();
    line;

    line;
    FragTrap frag("frag");

    frag.attack("another");
    frag.beRepaired(1);
    frag.takeDamage(1);
    frag.showState();
    line;
}