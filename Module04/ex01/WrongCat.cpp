/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:42:46 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 21:43:54 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//WrongCat();
WrongCat::WrongCat() : type("WrongCat")
{
    std::cout << "Default constructor WrongCat was called" << std::endl; 
}

//        WrongCat(const std::string& type);
WrongCat::WrongCat(const std::string& type)
{
    this->type = type;
    std::cout << "Parameterized constructor WrongCat was called" << std::endl; 
}


// WrongCat::WrongCat(const WrongCat& type);
WrongCat::WrongCat(const WrongCat& name)
{
    this->type = name.type;
    std::cout << "Copy constructor WrongCat was called" << std::endl;
}

// WrongCat& operator=(const WrongCat& other);
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Copy assignment WrongCat operator was called" << std::endl;

    }
    return *this;
}

// ~WrongCat();
WrongCat::~WrongCat()
{
    std::cout << "Default destructor WrongCat was called" << std::endl;

}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Sound" << std::endl;
}