/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 03:27:15 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/23 04:33:01 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count(0)
{
    for (int i = 0; i < 4; ++i)
        materia[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &src) : count(src.count)
{
    for (int i = 0; i < count; ++i)
        materia[i] = src.materia[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    if (this != &src)
    {
        for (int i = 0; i < count; ++i)
            delete materia[i];
        count = src.count;
        for (int i = 0; i < count; ++i)
            materia[i] = src.materia[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < count; ++i)
        delete materia[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (count < 4)
    {
        materia[count++] = m->clone();
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < count; ++i)
    {
        if (materia[i]->getType() == type)
        {
            return materia[i]->clone();
        }
    }
    return nullptr;
}
