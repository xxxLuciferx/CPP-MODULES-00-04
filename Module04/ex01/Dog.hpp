/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:31 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 05:56:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        std::string type;
    public:
        Dog();
        Dog(const std::string& type);
        Dog(const Dog& name);
        Dog& operator=(const Dog& other);
        ~Dog();

        void    makeSound(void) const;
};


#endif