/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:56 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/12 18:05:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &a)
{
    this->name = name;
    this->WeaponA = &a;
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->WeaponA->getType() <<  std::endl;
}
