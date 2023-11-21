/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 06:08:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/20 03:21:47 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain  
{
        std::string ideas[100];
    public :
        Brain();
        Brain(const std::string& name);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
};


#endif