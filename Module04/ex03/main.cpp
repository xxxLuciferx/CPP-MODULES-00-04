/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 05:24:59 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/23 04:39:52 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void    fun(void)
{
    Character player("Player");
    Character *s = new Character;
    AMateria* icee = new Ice();
    AMateria* curee = new Cure();
    std::cout << icee->getType() << std::endl;
    player.equip(icee);
    player.equip(curee);
    player.unequip(0);
    player.unequip(1);
    s->equip(icee);
    std::cout << s->getName() << std::endl;
    delete icee;
    delete curee;
    delete s;
}
int main() 
{
    // fun();
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}
