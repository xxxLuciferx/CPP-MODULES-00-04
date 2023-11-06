/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/06 16:50:23 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap 
{
    protected:
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;

    public :
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);

        ClapTrap& operator=(const ClapTrap& other);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ~ClapTrap();
};

#endif