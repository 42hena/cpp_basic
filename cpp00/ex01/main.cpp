#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    Contact contact;
	PhoneBook phonebook;
    std::string tmpString;
	int count = 0;

    while (true)
    {
        std::cout << "Enter command in [ADD, SEARCH, EXIT]" << std::endl;
        getline(std::cin, command);
        if (std::cin.bad() || std::cin.eof())
        {
            break ;
        }

            
        if (command == "ADD")
        {
            std::cout << std::setw(40) << std::setfill('=');
            std::cout << "=" << std::endl;

            std::cout << "\'ADD\' command" << std::endl;
			std::cout << "Input your firstName" << std::endl;
			getline(std::cin, tmpString);
            if (std::cin.eof())
                break ;
            else    
                contact.setFirstName(tmpString);

			std::cout << "Input your lastName" << std::endl;
			getline(std::cin, tmpString);
            if (std::cin.eof())
                break ;
            else
                contact.setLastName(tmpString);

			std::cout << "Input your nickName" << std::endl;
			getline(std::cin, tmpString);
            if (std::cin.eof())
                break ; 
            else
                contact.setNickName(tmpString);

			std::cout << "Input your phoneNumber" << std::endl;
			getline(std::cin, tmpString);
            if (std::cin.eof())
                break ; 
            else
                contact.setPhoneNumber(tmpString);

			std::cout << "Input your darkestSecret" << std::endl;
			getline(std::cin, tmpString);
            if (std::cin.eof())
                break ; 
            else
                contact.setDarkestSecret(tmpString);

			std::cout << "ENTER LIST" << std::endl << "FIRST NAME: " << contact.getFirstName() << std::endl << "LAST NAME: " << contact.getLastName() << std::endl << "NICK NAME: " << contact.getNickName() << '\n' << "PHONE NUMBER: " << contact.getPhoneNumber() << std::endl << "DARKEST SECRET: " <<  contact.getDarkestSecret() << std::endl;
			phonebook.ADD(contact, count);
            std::cout << std::setw(40) << std::setfill('=');
            std::cout << "=" << std::endl;
        }
        else if (command == "SEARCH")
        {
            std::cout << "\'SEARCH\' command" << std::endl;
            phonebook.SEARCH(count);
        }
        else if (command == "EXIT")
        {
            std::cout << "\'EXIT\' command" << std::endl;
            phonebook.EXIT();
        }
        else
        {
            std::cout << "\'" << command << "\'" << std::endl;
            continue ;
        }
    }

    return (0);
}