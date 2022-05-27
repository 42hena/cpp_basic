#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
class PhoneBook
{
private:
    Contact phonebook[8];
public:
    void	ADD(Contact contact, int &count);
    void    output(std::string str);
	void	SEARCH(int &count);
	void	EXIT();
};

#endif