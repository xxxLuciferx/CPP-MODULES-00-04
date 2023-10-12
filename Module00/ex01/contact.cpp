/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:59:34 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/06 15:21:39 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirstName()
{
	return this->C_firstName;
}

std::string Contact::getLastName()
{
	return this->C_lastName;
}

std::string Contact::getNickName()
{
	return this->C_nickName;
}

std::string Contact::getPhoneNumber()
{
	return this->C_phoneNumber;
}

std::string Contact::getSecret()
{
	return this->C_secret;
}

void Contact::setFirstName(std::string Fname)
{
	this->C_firstName = Fname;
	return;
}

void Contact::setLastName(std::string Lname)
{
	this->C_lastName = Lname;
	return;
}

void Contact::setNickName(std::string Nname)
{
	this->C_nickName = Nname;
	return;
}

void Contact::setPhoneNumber(std::string number)
{
	this->C_phoneNumber = number;
	return;
}

void Contact::setSecret(std::string secret)
{
	this->C_secret = secret;
	return;
}