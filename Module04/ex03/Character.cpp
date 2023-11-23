/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:27:21 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/23 01:53:11 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default")
{
    list = nullptr;
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}

Character::Character(std::string const &name) : name(name) 
{
    list = nullptr;
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}

Character::Character(const Character &src) : name(src.name)
{
    this->list = src.list;
    for (int i = 0; i < 4; ++i) 
    {
        if (src.inventory[i] != nullptr)
            this->inventory[i] = src.inventory[i]->clone();
        else
            this->inventory[i] = nullptr;
    }
}


Character &Character::operator=(const Character &src) 
{
    if (this != &src) 
    {
        for (int i = 0; i < 4; ++i)
            delete inventory[i];
        name = src.name;
        for (int i = 0; i < 4; ++i) 
        {
            if (src.inventory[i] != nullptr) 
                inventory[i] = src.inventory[i]->clone();
            else
                inventory[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character() 
{
    for (int i = 0; i < 4; ++i)
    {
        if(inventory[i] != nullptr)
            delete inventory[i];
    }
    t_list* curr = list;
    while (curr != nullptr)
    {
        t_list* next = curr->next;
        delete curr->ptr;
        delete curr;
        curr = next;
    }
}

std::string const &Character::getName() const 
{
    return this->name;
}

void Character::equip(AMateria* m) 
{
    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m->clone();
            return;
        }
    }
}

void Character::add_back(AMateria* m)
{
    t_list *curr;
    if (this->list == nullptr)
    {
        this->list = new t_list;
        curr = this->list;
    }
    else
    {
        curr = this->list;
        while (curr->next != nullptr)
            curr = curr->next;
        curr->next = new t_list;
        curr = curr->next;
    }
    curr->ptr = m;
    curr->next = nullptr;
}

void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
    {
        add_back(inventory[idx]);
        inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
    {
        inventory[idx]->use(target);
    }
}
