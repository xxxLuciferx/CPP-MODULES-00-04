/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 03:59:50 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/21 06:04:24 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string  type;
    public :
        AMateria();
        AMateria(const std::string& name);
        AMateria(const AMateria& name);
        AMateria& operator=(const AMateria& src);

        
        virtual ~AMateria();

        virtual const std::string& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        
};


#endif