#include <string>
#include <sstream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"
void	PhoneBook::ADD(Contact contact, int &count)
{
    if (count == 8)
    {
        for (int i = 0 ; i < 7 ; ++i)
        {
            phonebook[i] = phonebook[i + 1];
        }
        count--;
    }
    phonebook[count].setFirstName(contact.getFirstName());
    phonebook[count].setLastName(contact.getLastName());
    phonebook[count].setNickName(contact.getNickName());
    phonebook[count].setPhoneNumber(contact.getPhoneNumber());
    phonebook[count].setDarkestSecret(contact.getDarkestSecret());
    count++;
}

void    PhoneBook::output(std::string str)
{
    std::cout << std::setw(10) << std::setfill(' ');
    std::string tmp = "";
    if (str.size() > 10)
    {
        tmp = str.substr(0, 9);
        tmp += ".";
        std::cout << tmp;
    }
    else
        std::cout << str;
}

void	PhoneBook::SEARCH(int &count)
{
    std::cout << "___________________________________________" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 0 ; i < count ; ++i)
    {
        std::cout << std::setw(10) << std::setfill(' ');
        std::cout << i + 1 << '|';
        output(phonebook[i].getFirstName());
        std::cout << '|';
        output(phonebook[i].getLastName());
        std::cout << '|';
        output(phonebook[i].getNickName());
        std::cout << std::endl;
    }

    if (count < 1)
        return ;

    std::cout << "Choose index [1, " << count << "]: ";
    int select_index;
    std::string input_index;
    std::stringstream ss;
    
    std::getline(std::cin, input_index);
    for (size_t i = 0 ; i < input_index.size() ; ++i)
    {
        if (!std::isdigit(input_index[i]))
        {
            std::cout << "index error" <<std::endl;
            return ;
        }
    }
    
    if (std::cin.eof())
        return ;
    ss << input_index;
    ss >> select_index;
    if (select_index < count + 1 && select_index > 0)
    {
        std::cout << "FirstName: " << phonebook[select_index - 1].getFirstName() << std::endl;
        std::cout << "LastName: " << phonebook[select_index - 1].getLastName() << std::endl;
        std::cout << "NickName: " << phonebook[select_index - 1].getNickName() << std::endl;
        std::cout << "PhoneNumber: " << phonebook[select_index - 1].getPhoneNumber() << std::endl;
        std::cout << "DarkestSecret: " << phonebook[select_index - 1].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}

void	PhoneBook::EXIT()
{
    exit(0);
}