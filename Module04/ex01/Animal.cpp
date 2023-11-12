/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:27:30 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 05:57:18 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


void    Animal::makeSound(void) const
{
    std::cout << "Animal Sound" << std::endl;
}


Animal::Animal() : type("Unknow")
{
    std::cout << "Default constructor: An Animal has been created. (" << this->type << ")" << std::endl;
}

Animal::Animal(const std::string& type)
{
    this->type = type;
    std::cout << "Parameterized constructor: An Animal has been created. (" << this->type << ")" << std::endl;
}

Animal::Animal(const Animal& name)
{
    this->type = name.type;
    std::cout << "Copy constructor: An Animal has been copied. (" << this->type << ")" << std::endl;
    
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
    {
        type = other.type;
        std::cout << "Copy assignment operator: An Animal of type has been assigned." << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Default destructor: An Animal " << this->type << " has died.. (" << this->type << ")" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;   
}