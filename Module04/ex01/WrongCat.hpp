/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:41:48 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/12 21:51:23 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        std::string type;
    public:
        WrongCat();
        WrongCat(const std::string& type);
        WrongCat(const WrongCat& name);
        WrongCat& operator=(const WrongCat& other);

        void    makeSound(void ) const;
        
        ~WrongCat();
};

#endif