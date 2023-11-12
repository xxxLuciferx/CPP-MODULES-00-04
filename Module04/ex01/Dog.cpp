/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 05:57:57 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Dog();
Dog::Dog() : type("Dog")
{
    std::cout << "Default constructor Dog was called" << std::endl; 
}

//        Dog(const std::string& type);
Dog::Dog(const std::string& type)
{
    this->type = type;
    std::cout << "Parameterized constructor Dog was called" << std::endl; 
}


// Dog::Dog(const Dog& type);
Dog::Dog(const Dog& name)
{
    this->type = name.type;
    std::cout << "Copy constructor Dog was called" << std::endl;
}

// Dog& operator=(const Animal& other);
Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Copy assignment Dog operator was called" << std::endl;

    }
    return *this;
}

// ~Dog();
Dog::~Dog()
{
    std::cout << "Default destructor Dog was called" << std::endl;

}

void    Dog::makeSound(void) const
{
    std::cout << "Dog Sound" << std::endl;
}