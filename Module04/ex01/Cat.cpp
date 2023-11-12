/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:34 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 05:57:33 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Cat();
Cat::Cat() : type("Cat")
{
    std::cout << "Default constructor Cat was called" << std::endl; 
}

//        Cat(const std::string& type);
Cat::Cat(const std::string& type)
{
    this->type = type;
    std::cout << "Parameterized constructor Cat was called" << std::endl; 
}


// Cat::Cat(const Cat& type);
Cat::Cat(const Cat& name)
{
    this->type = name.type;
    std::cout << "Copy constructor Cat was called" << std::endl;
}

// Cat& operator=(const Cat& other);
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Copy assignment Cat operator was called" << std::endl;

    }
    return *this;
}

// ~Cat();
Cat::~Cat()
{
    std::cout << "Default destructor Cat was called" << std::endl;

}

void    Cat::makeSound(void) const
{
    std::cout << "Cat Sound" << std::endl;
}