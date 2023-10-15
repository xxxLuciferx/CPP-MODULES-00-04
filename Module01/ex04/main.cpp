/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 08:54:56 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/15 08:54:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filter.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
        filter(av);
    else
        std::cout << "Invalid Arguments." << std::endl;
    return 0;
}