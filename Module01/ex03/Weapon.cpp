/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:40 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/12 17:32:07 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string name)
{
    this->type = name;
    // std::cout << this->type << std::endl;
    // std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
    
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string&   Weapon::getType()
{
    std::string const &ref = this->type;
    return (ref);
}