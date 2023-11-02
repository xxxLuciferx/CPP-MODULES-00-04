/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:43 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/02 18:49:50 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Test constructors
    ClapTrap clap1("Clap1");
    ClapTrap clap2("Clap2");

    // Test copy constructor
    ClapTrap clap3(clap1);
    std::cout << "-----------" << std::endl;

    // Test assignment operator
    clap2 = clap1;
    std::cout << "-----------" << std::endl;

    // Test self-assignment (this should be gracefully handled without duplicating actions)
    // clap1 = clap1;
    // std::cout << "-----------" << std::endl;

    // Test attack, takeDamage, and beRepaired functions
    clap1.attack("Enemy");
    clap1.takeDamage(5);
    clap1.beRepaired(3);
    std::cout << "-----------" << std::endl;

    // Destructor calls will be printed when the objects go out of scope at the end of the main function

    return 0;
}
