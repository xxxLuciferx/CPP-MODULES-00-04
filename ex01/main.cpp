/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:59:47 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/06 12:50:28 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

void newContact(Phonebook *phonebook)
{
	Contact 	contact;
	std::string line;

	std::cout << "> First name: ";
	std::getline(std::cin, line);
	contact.setFirstName(line);
	std::cout << "> Last name: ";
	std::getline(std::cin, line);
	contact.setLastName(line);
	std::cout << "> Nickname: ";
	std::getline(std::cin, line);
	contact.setNickName(line);
	std::cout << "> Phone number: ";
	std::getline(std::cin, line);
	contact.setPhoneNumber(line);
	std::cout << "> Darkest secret: ";
	std::getline(std::cin, line);
	contact.setSecret(line);
	phonebook->setContact(contact);
}

std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void searchContact(Phonebook *phonebook)
{
	int index;
	int count;

	count = phonebook->getCount();
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i = 0; i < phonebook->getCount(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contact.getFirstName());
		std::cout << "|" << std::setw(10) << truncate(contact.getLastName());
		std::cout << "|" << std::setw(10) << truncate(contact.getNickName()) << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	if (count > 0)
	{
		std::cout << "Please enter an index for relevant information: ";
		while (!(std::cin >> index) || index > count || index < 1)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
		}
		index--;
		Contact tmp;
		tmp = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First name - " << tmp.getFirstName() << std::endl;
		std::cout << "Last name - " << tmp.getLastName() << std::endl;
		std::cout << "Nickname - " << tmp.getNickName() << std::endl;
		std::cout << "Phone number - " << tmp.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret - " << tmp.getSecret() << std::endl;
	}
	else
	{
		std::cout << "Table is empty!" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
	Phonebook phonebook;

	std::cout << std::endl << "Available Commands: " << std::endl;
	std::cout << " * ADD: add a contact to your phonebook" << std::endl;
	std::cout << " * SEARCH: search for a contact in your phonebook" << std::endl;
	std::cout << " * EXIT: leave the program" << std::endl;
	while (1)
	{
		std::string input;
		std::cout << std::endl << "Enter a command: " << std::endl << ">  ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			newContact(&phonebook);
		}
		else if (input == "SEARCH")
		{
			searchContact(&phonebook);
		}
		else if (input == "EXIT")
		{
			break;
		}
	}
}