#include <iostream>

#include "ClapTrap.hpp"

int main(void)
{
    std::string dealer = "alee";
    std::string tanker = "hena";


    ClapTrap A(dealer);
    ClapTrap B(tanker);
    
    std::cout << std::endl;
    A.attack(tanker);
    B.takeDamage(A.getAttackDamage());
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;

    std::cout << std::endl;
    B.beRepaired(4);
    std::cout << std::endl;
}