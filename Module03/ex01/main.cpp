/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:43 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/02 20:08:49 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // Test constructors
    ClapTrap clap1("Clap1");
    ClapTrap clap2("Clap2");

    // Test copy constructor
    ClapTrap clap3(clap1);
    std::cout << "-----------" << std::endl;

    // Test assignment operator
    clap2 = clap1;
    std::cout << "-----------" << std::endl;

    // Test attack, takeDamage, and beRepaired functions
    clap1.attack("Enemy");
    clap1.takeDamage(5);
    clap1.beRepaired(3);
    std::cout << "-----------" << std::endl;

    return 0;
}
