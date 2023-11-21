/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:22:41 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/21 06:04:30 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    this->type = "";
}

AMateria::AMateria(const std::string& type) 
{
    this->type = type;
}

AMateria::AMateria(const AMateria& src) : type(src.type) 
{
    
}

AMateria& AMateria::operator=(const AMateria& src) 
{
    if (this != &src) 
        type = src.type;
    return *this;
}

AMateria::~AMateria()
{
    
}

const std::string& AMateria::getType() const 
{
    return this->type;
}

AMateria* AMateria::clone() const 
{
    return nullptr; // Implementation is required in derived classes
}

void AMateria::use(ICharacter& target) 
{
    std::cout << "AMateria " << type << " used on " << target.getName() << std::endl;
    // Default implementation, can be overridden in derived classes
}

