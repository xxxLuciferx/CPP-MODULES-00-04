/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:24:44 by khaimer           #+#    #+#             */
/*   Updated: 2023/09/27 17:24:45 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string DarkestSecret;
	std::string PhoneNumber;

    public:
        int    SetFirstName();
        int    SetLastName();
        int    SetNickName();
        int    SetDarkestSecret();
        int    SetPhoneNumber();
};

class   PhoneBook{
    Contact Contacts[8];
    public:
        void    SetContact(Contact obj);
};




#endif