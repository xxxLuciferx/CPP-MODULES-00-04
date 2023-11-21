/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 05:11:11 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/21 06:13:20 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure : public AMateria 
{
    public:
        Cure();
        Cure(const Cure& type);
        Cure& operator=(const Cure& type);
        
        ~Cure();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};


#endif