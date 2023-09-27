/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:13:13 by khaimer           #+#    #+#             */
/*   Updated: 2023/09/27 17:24:50 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
std::string	Contact::getFirstName(){
	return (this->FirstName);
}
std::string	Contact::getLastName(){
	return (this->LastName);
}
std::string	Contact::getNickname(){
	return (this->Nickname);
}
std::string	Contact::getPhoneNumber(){
	return (this->PhoneNumber);
}
std::string	Contact::getDarkestSecret(){
	return (this->DarkestSecret);
}

void	Contact::addContact(){
	std::cout << "Enter first name: ";
	std::cin >> this->FirstName;
	std::cout << "Enter last name: ";
	std::cin >> this->LastName;
	std::cout << "Enter nickname: ";
	std::cin >> this->Nickname;
	std::cout << "Enter phone number: ";
	std::cin >> this->PhoneNumber;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->DarkestSecret;
}%