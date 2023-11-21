/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:56:24 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/20 00:05:31 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() 
{
    std::cout << "Brain constructed called" << std::endl;
}

Brain::Brain(const std::string& name)
{
    std::cout << "Brain Parameterized constructor called" << std::endl;
    for (int i = 0; i < 100; ++i) 
        ideas[i] = name[i];
}

Brain::Brain(const Brain& other) 
{
    *this = other;
    std::cout << "Brain copy constructed called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) 
{
    if (this != &other) 
    {
        for (int i = 0; i < 100; ++i) 
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain() 
{
    std::cout << "Brain destroyed called" << std::endl;
}
