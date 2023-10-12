/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:43:02 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/12 18:08:19 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club;
        club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        // std::cout << club.getType() << std::endl;
        // std::cout << c << std::endl;
        // club.setType("some other type of club");
        // bob.attack();
    }
    // {
    // Weapon club = Weapon("crude spiked club");
    // HumanB jim("Jim");
    // jim.setWeapon(club);
    // jim.attack();
    // club.setType("some other type of club");
    // jim.attack();
    // }
    return 0;
}