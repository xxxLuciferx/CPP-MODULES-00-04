/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 05:24:59 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/21 06:15:08 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"

int main() 
{
    Ice ice;
    Cure cure;

    std::cout << "Ice type: " << ice.getType() << std::endl;
    std::cout << "Cure type: " << cure.getType() << std::endl;

    return 0;
}

