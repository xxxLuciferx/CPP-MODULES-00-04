/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:41 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/06 16:49:25 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(""), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "Creation : Default ClapTrap constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : Hit_points(10), Energy_points(10), Attack_damage(0)
{
    this->Name = name;
    std::cout << "ClapTrap " << Name << " constructed is called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original) 
{
    this->Name = original.Name;
    this->Hit_points = original.Hit_points;
    this->Energy_points = original.Energy_points;
    this->Attack_damage = original.Attack_damage;
    std::cout << "ClapTrap " << this->Name << "copy constructed is called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original) 
{
    if (this != &original) 
    {
        Name = original.Name;
        Hit_points = original.Hit_points;
        Energy_points = original.Energy_points;
        Attack_damage = original.Attack_damage;
        std::cout << "ClapTrap assignment operator was called!" << std::endl;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& amount)
{
    if (Hit_points <= 0 || Energy_points <= 0)
        return;
    std::cout << "ClapTrap "<< Name << " attacks " << amount << " causing " << Attack_damage << " points of damage!" << std::endl;
    Energy_points--;
}

void    ClapTrap::takeDamage(unsigned int amount) 
{
    if (Hit_points <= 0 || Energy_points <= 0)
        return;
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
    Hit_points -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) 
{
    if (Hit_points <= 0 || Energy_points <= 0) 
        return;
    else
    {
        Hit_points += amount;
        Energy_points--;    
        std::cout << "ClapTrap " << Name << " is repaired by " << amount << " points!" << std::endl;
    }
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << Name << " is destroyed!" << std::endl;
}