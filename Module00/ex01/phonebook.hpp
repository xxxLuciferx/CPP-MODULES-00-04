#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

class Phonebook
{
public:
	Phonebook();
	~Phonebook();
	Contact getContact(int index);
	int		getCounter();
	void setContact(Contact contact);

private:
	Contact contacts[8];
	static int		count;
	int		index;
};

#endif