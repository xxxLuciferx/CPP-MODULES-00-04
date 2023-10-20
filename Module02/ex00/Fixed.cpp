/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:36:21 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/19 13:10:58 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->Value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "copy Assignation operator called" << std::endl;
    this->Value = fixed.getRawBits();
    return (*this);
}

void    Fixed::setRawBits(int const raw)
{
    this->Value = raw;
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->Value);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}