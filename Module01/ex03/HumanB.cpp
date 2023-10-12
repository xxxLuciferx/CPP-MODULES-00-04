/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:59 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/12 15:19:42 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weaponB.getType() << std::endl;
}