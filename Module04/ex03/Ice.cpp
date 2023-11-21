/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 05:15:07 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/21 05:24:41 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") 
{
    
}

Ice::Ice(const Ice& src) : AMateria(src) 
{
    
}

Ice& Ice::operator=(const Ice& src) 
{
    if (this != &src) 
    {
        AMateria::operator=(src);
    }
    return *this;
}

Ice::~Ice() 
{
    
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}