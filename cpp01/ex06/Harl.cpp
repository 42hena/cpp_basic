#include "Harl.hpp"
#include <iostream>

void Harl::nomating()
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl; 
    std::cout << "I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl; 
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "\"ERROR\"" << std::endl;
    std::cout << "This is unacceptable!" << std::endl;
    std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*f[])(void) = {
        &Harl::nomating,
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string message[] = {
        "NOMATING",
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    int index = 0;
    for (int i = 1 ; i < 5 ; ++i)
    {
        if (level == message[i])
		{
            index = i;
			break ;
		}
        
    }
    switch(index)
    {
    case 0:
        (this->*(f[0]))();
        break;
    case 1:
        (this->*(f[1]))();
    case 2:
		(this->*(f[2]))();
    case 3:
        (this->*(f[3]))();
    case 4:
        (this->*(f[4]))();
        break;
    }
}