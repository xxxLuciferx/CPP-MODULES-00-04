/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:26:09 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/20 16:44:30 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void    call(void)
{
    
    int Size = 6;
    Animal* array[Size];

    for (int i = 0; i < Size; ++i) 
    {
        if (i < Size / 2) 
            array[i] = new Dog("Dog");
        else
            array[i] = new Cat("Cat");
    }
    for (int i = 0; i < Size; ++i) {
        delete array[i];
    }
}
int main() 
{
    call();
    return 0;
}
