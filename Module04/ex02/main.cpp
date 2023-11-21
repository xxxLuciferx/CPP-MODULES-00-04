/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:26:09 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/21 03:48:28 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{


    Dog dog("Buddy");
    Cat cat("Whiskers");
    Animal* ptrDog = &dog;
    Animal* ptrCat = &cat;

    ptrDog->makeSound();
    ptrCat->makeSound();

    return 0;
}

