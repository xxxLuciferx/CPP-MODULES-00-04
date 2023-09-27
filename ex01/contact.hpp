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

class contact
{
    private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    
    public:
    contact();
    ~contact();
    void    addContact();
    std::string FirstName();
    std::string LastName();
    std::string NickName();
    std::string PhoneNumber();
    std::string DarkestSecret();
    
};

#endif