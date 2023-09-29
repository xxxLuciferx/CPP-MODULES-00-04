/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichiba <yichiba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:29:19 by yichiba           #+#    #+#             */
/*   Updated: 2023/09/29 18:44:34 by yichiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>
#include <unistd.h>

int	Contact::SetFirstName()
{
	std::string str;
	std::cout<< "enter first name"<< std::endl;
	std::getline(std::cin, FirstName);
	if(FirstName.empty())
		return(1);
	return(0);
}
int	Contact::SetLastName()
{
	std::string str;
	std::cout<< "enter last name"<< std::endl;
	std::getline(std::cin, LastName);
	if(LastName.empty())
		return(1);
	return(0);
}
int	Contact::SetNickName()
{
	std::string str;
	std::cout<< "enter Nickname"<< std::endl;
	std::getline(std::cin, NickName);
	if(NickName.empty())
		return(1);
	return(0);
}
int	Contact::SetDarkestSecret()
{
	std::string str;
	std::cout<< "enter DarkestSecret"<< std::endl;
	std::getline(std::cin, DarkestSecret);
	if(DarkestSecret.empty())
		return(1);
	return(0);
}
int	Contact::SetPhoneNumber()
{
	std::string str;
	std::cout<< "enter Phone number"<< std::endl;
	std::getline(std::cin, PhoneNumber);
	if(PhoneNumber.empty())
		return(1);
	return(0);
}

void    PhoneBook::SetContact(Contact obj, int i)
{
	i = i % 8;
	Contacts[i] = obj;
}
Contact    PhoneBook::getContacts(int i)
{
	return(Contacts[29]);
}

std::string		Contact::getFirstName()
{
	return(FirstName);
}
std::string		Contact::getLastName()
{
	return(LastName);
}
std::string		Contact::getNickName()
{
	return(NickName);
}
std::string		Contact::getDarkestSecret()
{
	return(DarkestSecret);
}
std::string		Contact::getPhoneNumber()
{
	return(PhoneNumber);
}

void printColumn(const std::string& text, int width) {
    int len = text.length();
    if (len >= width)
    	std::cout << std::setw(width) << text.substr(0, 9) + "."<< std::right;
    else if (len < width) {
        int padding = (width - len) / 2;
        	std::cout << std::string(padding, ' ') << text << std::right;
        std::cout << std::string(width - len - padding, ' ');
    }
}

void	PrintPhoneBook(int i, PhoneBook myPhoneBook, int last)
{
	Contact myContact;
	int check ;
	std::cout<<"|";
    printColumn("Index", 10);
	std::cout<<"|";
    printColumn("FirstName", 10);
	std::cout<<"|";
    printColumn("LastName", 10);
	std::cout<<"|";
    printColumn("Nickname", 10);
	std::cout<<"|";
	check== 0;
	if(last == i)
	{
		printColumn("Darkest Secret", 20);
		std::cout<<"|";
		printColumn("Phone Number", 12);
		std::cout<<"|";
		std::cout << std::endl;
		std::cout << "-------------------------------------------------------------------"<<std::endl;

	}
	else
	{
		std::cout << std::endl;
		std::cout << "---------------------------------------------"<<std::endl;
	}
	while(i <= last)
	{
		myContact = myPhoneBook.getContacts(i++);
		std::cout<<"|";
		std::cout<< std::setw(10)<< i;
		std::cout<<"|";
		printColumn(myContact.getFirstName(), 10);
		std::cout<<"|";
		printColumn(myContact.getLastName(), 10);
		std::cout<<"|";
		printColumn(myContact.getNickName(), 10);
		std::cout<<"|";
		if(check++ == 0 && last == i)
		{
			printColumn(myContact.getDarkestSecret(), 20);
			std::cout<<"|";
			printColumn(myContact.getPhoneNumber(), 12);
			std::cout<<"|";
		}
		std::cout<< std::endl;
		std::cout << "--------------------------------------------"<<std::endl;
	
	}
}


int main() 
{
    Contact myContact;
	int first,last,nick,secret,number;
	int			i = 0;
	int 		size = 0;
	PhoneBook	myPhoneBook;
	std::cout <<"there Will be 3 Choices"<< std::endl;
	std::cout <<"	     - ADD      -SEARCH	      -EXIT."<< std::endl;
	std::string str;
	while(1)
	{
		std::cout <<"Your choice :";
		std::getline(std::cin, str);
		if(str == "ADD")
		{
			first = myContact.SetFirstName();
			last = myContact.SetLastName();
			nick = myContact.SetNickName();
			secret =  myContact.SetDarkestSecret();
			number =  myContact.SetPhoneNumber();
			if(first == 0 && last == 0 && nick == 0 && secret == 0 && number == 0)
				{
					myPhoneBook.SetContact(myContact, i++);
					if(size < 8)
						size = i;
				}
		}
		int		index = 0;
		if(str == "SEARCH" && size <= 1)
			PrintPhoneBook(0, myPhoneBook , size-1);
		while(str == "SEARCH" && size > 1)
			{
				PrintPhoneBook(0, myPhoneBook , size-1);
				std::cout <<"ENTER INDEX "<<std::endl;
				std::cin >> index;
				if(index > 0 && index <= size)
					PrintPhoneBook(index-1, myPhoneBook , index-1);
				else
					{
						std::cout <<"terminate called after throwing an instance of 'std::bad_alloc'"<<std::endl;
						std::cout <<"  what():  std::bad_alloc"<<std::endl;
						std::cout <<" Aborted (core dumped)"<<std::endl;
						sleep(35);
						continue;
					}
				break;
			}

		if(str == "EXIT")
			exit(0);
	}
    return 0;
}

