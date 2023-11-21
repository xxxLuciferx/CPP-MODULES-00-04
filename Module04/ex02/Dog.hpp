/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:31 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/20 03:21:53 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const std::string& Name);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
    
        void makeSound() const ;
};

#endif