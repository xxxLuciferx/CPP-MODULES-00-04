/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:46:12 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/06 17:23:40 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Name = "Player";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap named constructor called for " << this->Name << "!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
    *this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	if (&other != this)
	{
		std::cout << "ScavTrap assignation operator called"<<std::endl;
		Name = other.Name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		Attack_damage = other.Attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap destructor called!"<<std::endl;
}

void		ScavTrap::attack(std::string const & target)
{
	if(Hit_points <= 0 || Energy_points <= 0)
		return ;
	Energy_points -= 1;
	std::cout<<"ScavTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!"<<std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " has entered in Gate keeper mode" << std::endl;
}