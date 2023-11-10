/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:27:41 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/09 22:45:21 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& name);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif

