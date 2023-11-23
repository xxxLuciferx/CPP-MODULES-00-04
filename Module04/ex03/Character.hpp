/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:27:18 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/23 01:53:20 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

typedef struct s_list
{
    AMateria* ptr;
    s_list* next;
} t_list;

class Character : public ICharacter 
{
    private:
        std::string name;
        AMateria* inventory[4];
        t_list* list;
    public:
        Character();
        Character(std::string const &name);
        Character(const Character &src);

        Character &operator=(const Character &src);
        virtual ~Character();

        std::string const &getName() const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        



        void    add_back(AMateria* m);
        
};

#endif

