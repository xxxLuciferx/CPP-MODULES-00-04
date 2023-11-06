/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:28:30 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/06 17:52:53 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Name = "";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap default constructor was called!" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap parameter " << name << " constructor was called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
    *this = other;
    std::cout << "FragTrap copy constructor named " << other.Name << "was called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (&other != this)
    {
       this->Name = other.Name;
       this->Hit_points = other.Attack_damage;
       this->Energy_points = other.Energy_points;
       this->Attack_damage = other.Attack_damage;
       std::cout << "FragTrap copy assignemet named " << Name << " was called!" << std::endl;
    }
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap Says : High five guys!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "ScavTrap destructor called from " << Name << "!" << std::endl;
}