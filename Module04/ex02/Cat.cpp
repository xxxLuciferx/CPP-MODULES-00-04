/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:14:11 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/20 04:16:30 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), brain(new Brain()) 
{
    std::cout << "Cat constructed called" << std::endl;
}

Cat::Cat(const std::string& Name) : Animal("Cat"), brain(new Brain()) 
{
    std::cout << "Parameterized constructor called with name - " << Name << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) 
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructed called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) 
{
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meow!" << std::endl;
}
