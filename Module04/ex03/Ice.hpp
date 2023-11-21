/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 05:14:37 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/21 05:17:20 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria 
{
    public:
        Ice();
        Ice(const Ice& src);
        Ice& operator=(const Ice& src);

        ~Ice();
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif