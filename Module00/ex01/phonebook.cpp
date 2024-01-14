/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:00:02 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/14 13:07:01 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
	std::cout << "| Welcome to phonebook!|" << std::endl ;
	std::cout << "└----------------------┘" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "|Phonebook closed|" << std::endl;
	std::cout << "└----------------┘" << std::endl;
	return;
}

Contact Phonebook::getContact(int index)
{
	return this->contacts[index];
}

int	Phonebook::getCounter()
{
	return this->count;
}

void Phonebook::setContact(Contact contact)
{
    this->contacts[this->index] = contact;
    if (count < 8)
        count++;
    this->index = (this->index + 1) % 8;
}

int Phonebook::count = 0;