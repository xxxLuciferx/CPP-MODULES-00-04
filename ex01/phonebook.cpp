/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:00:02 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/06 15:11:47 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
: _index(0)
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

Contact Phonebook::getContact(int index) const
{
	return this->_contacts[index];
}

int	Phonebook::getCount() const
{
	return this->_count;
}

void Phonebook::setContact(Contact contact)
{
    this->_contacts[this->_index] = contact;
    if (_count < 8) {
        _count++;
    } else {
        _count = 8; // Ensure _count doesn't exceed 8
    }
    this->_index = (this->_index + 1) % 8;
}

int Phonebook::_count = 0;