/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:22:41 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/23 00:36:08 by khaimer          ###   ########.fr       */
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

void AMateria::use(ICharacter& target) 
{
    std::cout << "AMateria " << type << " used on " << target.getName() << std::endl;
}

