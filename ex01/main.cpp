/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:59:47 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/11 01:09:28 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

void newContact(Phonebook *phonebook)
{
    Contact contact;
    std::string line;

    std::cout << "> First name: " << std::endl;
    std::getline(std::cin, line);
    if (line.empty())
	{
        std::cout << "First name cannot be empty, Please retry :" << std::endl;
        return;
    }
    contact.setFirstName(line);

    std::cout << "> Last name: " << std::endl;
    std::getline(std::cin, line);
    if (line.empty()) {
        std::cout << "Last name cannot be empty, Please retry :" << std::endl;
        return;
    }
    contact.setLastName(line);

    std::cout << "> Nickname: " << std::endl;
    std::getline(std::cin, line);
    if (line.empty()) {
        std::cout << "Nickname cannot be empty, Please retry :" << std::endl;
        return;
    }
    contact.setNickName(line);

    std::cout << "> Phone number: " << std::endl;
    std::getline(std::cin, line);
    if (line.empty()) {
        std::cout << "Phone number cannot be empty, Please retry :" << std::endl;
        return;
    }
    contact.setPhoneNumber(line);

    std::cout << "> Darkest secret: " << std::endl;
    std::getline(std::cin, line);
    if (line.empty()) {
        std::cout << "Darkest secret cannot be empty, Please retry :" << std::endl;
        return;
    }
    contact.setSecret(line);

    phonebook->setContact(contact);
}


std::string cut(std::string str)
{
	if (str.size() > 9)
		return (str.substr(0, 9) + ".");
	return (str);
}

void searchContact(Phonebook *phonebook)
{
	int index;
	int count;
	int	i = 0;

	count = phonebook->getCounter();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "└──────────|──────────|──────────|──────────┘" << std::endl;
	while (i < count)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << cut(contact.getFirstName());
		std::cout << "|" << std::setw(10) << cut(contact.getLastName());
		std::cout << "|" << std::setw(10) << cut(contact.getNickName()) << "|" << std::endl;
		i++;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	if (count > 0)
	{
		std::cout << "Please enter an index for relevant information: ";
		while (!(std::cin >> index) || index > count || index < 1)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //SOULD BE FIXEEED
			std::cout << "Invalid input, Please enter an index between 1 and " << count << ": ";
		}
		index--;
		Contact tmp;
		tmp = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First name : " << tmp.getFirstName() << std::endl;
		std::cout << "Last name : " << tmp.getLastName() << std::endl;
		std::cout << "Nickname : " << tmp.getNickName() << std::endl;
		std::cout << "Phone number : " << tmp.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << tmp.getSecret() << std::endl;
	}
	else
	{
		std::cout << "Your table is empty." << std::endl;
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
		else if (input == "EXIT" || std::cin.eof())
		{
			break;
		}

	}
}