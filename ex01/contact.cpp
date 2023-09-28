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

#include<iostream>

#include "contact.hpp"


#include <iostream>
#include <string>

int	Contact::SetFirstName()
{
	std::string str;
	std::cout<< "enter first name"<< std::endl;
	std::cin >>FirstName;
	if(!FirstName.length())
		return(1);


		return(0);
}
int	Contact::SetLastName()
{
	std::string str;
	std::cout<< "enter last name"<< std::endl;
	std::cin >>LastName;
	if(!LastName.length())
		return(1);


		return(0);
}
int	Contact::SetNickName()
{
	std::string str;
	std::cout<< "enter Nickname"<< std::endl;
	std::cin >>NickName;
	if(!NickName.length())
		return(1);
	return(0);
}
int	Contact::SetDarkestSecret()
{
	std::string str;
	std::cout<< "enter DarkestSecret"<< std::endl;
	std::cin >>DarkestSecret;
	if(!DarkestSecret.length())
		return(1);
	return(0);
}
int	Contact::SetPhoneNumber()
{
	std::string str;
	std::cout<< "enter Phone number"<< std::endl;
	std::cin >>PhoneNumber;
	if(!PhoneNumber.length())
		return(1);
	std::cout<<"*********************"<<std::endl;
	std::cout<<"first name :" <<FirstName<<std::endl;
	std::cout<<"last name :" <<LastName<<std::endl;
	std::cout<<"Nick name :" <<NickName<<std::endl;
	std::cout<<"DarkestSecret :" <<DarkestSecret<<std::endl;
	std::cout<<"Phone number :" <<PhoneNumber<<std::endl;
	return(0);
}


 void    PhoneBook::SetContact(Contact obj)
{
	static int i;
	Contacts[i++] = obj;
	if(i == 8)
		i = 0;
}


int main() 
{
    Contact myContact;
	int			check;
	PhoneBook	myPhoneBook;
	std::cout <<"there Will be 3 Choices"<< std::endl;
	std::cout <<"	     - ADD      -SEARCH	      -EXIT."<< std::endl;
	std::string str;
	while(1)
	{
		std::cout <<"Your choice :";
		std::cin >> str;
		if(str == "ADD")
		{
			check = 0;
			check = myContact.SetFirstName();
			check = myContact.SetLastName();
			check = myContact.SetNickName();
			check = myContact.SetDarkestSecret();
			check = myContact.SetPhoneNumber();
			if(check == 0)
				myPhoneBook.SetContact(myContact);
			continue;	
		}
	}
    return 0;
}





