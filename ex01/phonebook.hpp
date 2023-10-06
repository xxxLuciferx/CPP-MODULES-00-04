#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

class Phonebook
{
public:
	Phonebook();
	~Phonebook();
	Contact getContact(int index) const;
	int		getCount() const;
	void setContact(Contact contact);

private:
	static int		_count;
	Contact _contacts[8];
	int		_index;
};

#endif