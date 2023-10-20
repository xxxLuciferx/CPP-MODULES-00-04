/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:25:54 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/20 20:16:53 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() 
{
    Value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) 
{
    this->Value = fixed.Value;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const Valeur_int) 
{
    this->Value = Valeur_int << Bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const Valeur_float) 
{
    this->Value = roundf(Valeur_float * (1 << Bits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const 
{
    return static_cast<float>(Value) / static_cast<float>(1 << Bits);
}

int Fixed::toInt() const 
{
    return Value >> Bits;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

void Fixed::setRawBits(int const raw) 
{
    Value = raw;
}

int Fixed::getRawBits() const 
{
    return Value;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "copy Assignation operator called" << std::endl;
    this->Value = fixed.getRawBits();
    return (*this);
}