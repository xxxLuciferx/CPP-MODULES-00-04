/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 06:08:46 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/23 00:54:11 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") 
{
    
}

Cure::Cure(const std::string& name) : AMateria("cure")
{
    std::cout << "parametrized Constructed a " << this->getType() << " named " << name << std::endl;
}

Cure::Cure(const Cure &type) : AMateria(type) 
{
    
}

Cure &Cure::operator=(const Cure &type) 
{
    if (this != &type)
        AMateria::operator=(type);
    return *this;
}

Cure::~Cure() 
{
    
}

AMateria* Cure::clone() const 
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
