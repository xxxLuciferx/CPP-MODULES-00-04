/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/20 04:19:35 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
    std::cout << "Dog constructed called" << std::endl;
}

Dog::Dog(const std::string& Name) : Animal("Dog"), brain(new Brain()) 
{
    std::cout << "Parameterized constructor: Dog constructed with name - " << Name << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) 
{
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other) 
{
    if (this != &other) 
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof!" << std::endl;
}
