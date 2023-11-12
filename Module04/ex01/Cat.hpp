/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:37 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 05:57:47 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        std::string type;
    public:
        Cat();
        Cat(const std::string& type);
        Cat(const Cat& name);
        Cat& operator=(const Cat& other);

        void    makeSound(void ) const;
        
        ~Cat();
};

#endif