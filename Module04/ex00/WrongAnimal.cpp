/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:42:43 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 21:44:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}


WrongAnimal::WrongAnimal() : type("Unknow")
{
    std::cout << "Default constructor: An WrongAnimal has been created. (" << this->type << ")" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
    this->type = type;
    std::cout << "Parameterized constructor: An WrongAnimal has been created. (" << this->type << ")" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& name)
{
    this->type = name.type;
    std::cout << "Copy constructor: An WrongAnimal has been copied. (" << this->type << ")" << std::endl;
    
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this != &other)
    {
        type = other.type;
        std::cout << "Copy assignment operator: An WrongAnimal of type has been assigned." << std::endl;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default destructor: An WrongAnimal " << this->type << " has died.. (" << this->type << ")" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;   
}