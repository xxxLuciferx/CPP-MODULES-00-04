/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichiba <yichiba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:28:37 by yichiba           #+#    #+#             */
/*   Updated: 2023/09/29 15:02:24 by yichiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string DarkestSecret;
	std::string PhoneNumber;

    public:
        int             SetFirstName();
        int             SetLastName();
        int             SetNickName();
        int             SetDarkestSecret();
        int             SetPhoneNumber();
        std::string     getFirstName();
        std::string     getLastName();
        std::string     getNickName();
        std::string     getDarkestSecret();
        std::string     getPhoneNumber();
};

class   PhoneBook{
    Contact Contacts[8];
    public:
        void    SetContact(Contact obj, int i);
        Contact getContacts(int i);
};




#endif