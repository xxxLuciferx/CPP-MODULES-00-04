/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/02 18:49:13 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap 
{
    private:
        std::string Name;
        unsigned int Hit_points;
        unsigned int Energy_points;
        unsigned int Attack_damage;

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