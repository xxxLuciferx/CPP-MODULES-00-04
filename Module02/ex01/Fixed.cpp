// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   Fixed.cpp                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/10/18 15:25:54 by khaimer           #+#    #+#             */
// /*   Updated: 2023/10/20 18:46:40 by khaimer          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// Fixed::Fixed()
// {
//     std::cout << "Default constructor called" << std::endl;
//     this->Value = 0;
// }

// Fixed::Fixed(const Fixed &fixed)
// {
//     std::cout << "Copy constructor called" << std::endl;
//     *this = fixed;
// }

// Fixed &Fixed::operator=(const Fixed &fixed)
// {
//     std::cout << "copy Assignation operator called" << std::endl;
//     this->Value = fixed.getRawBits();
//     return (*this);
// }

// void    Fixed::setRawBits(int const raw)
// {
//     this->Value = raw;
// }

// int    Fixed::getRawBits(void) const
// {
//     std::cout << "getRawBits member function called" << std::endl;
//     return (this->Value);
// }

// Fixed::~Fixed()
// {
//     std::cout << "Destructor called" << std::endl;
// }

// Fixed::Fixed(int const Valeur_int)
// {
//     std::cout << "Int constructor called" << std::endl;
//     this->Value = Valeur_int;
// }

// Fixed::Fixed(float const Valeur_float)
// {
//     std::cout << "Float constructor called" << std::endl;
//     this->Value = roundf(Valeur_float * (1 << this->Bits));
// }

// int Fixed::toInt(void) const
// {
//     return (this->Value / (1 << this->Bits));
// }

// float Fixed::toFloat(void) const
// {
//     return ((float)this->Value / (float)(1 << this->Bits));
// }

//  Fixed &Fixed::operator<<(int const shift)
//  {
//      return (Fixed(this->Value << shift));
//  }

// Fixed.cpp

// Fixed.cpp
#include "Fixed.hpp"
//-------------------------------------------------
// Fixed::Fixed() : Value(0) {
//     std::cout << "Default constructor called" << std::endl;
// }

// Fixed::Fixed(const Fixed &fixed) : Value(fixed.Value) {
//     std::cout << "Copy constructor called" << std::endl;
// }

// Fixed::Fixed(int const Valeur_int) : Value(Valeur_int << Bits) {
//     std::cout << "Int constructor called" << std::endl;
// }

// Fixed::Fixed(float const Valeur_float) : Value(roundf(Valeur_float * (1 << Bits))) {
//     std::cout << "Float constructor called" << std::endl;
// }

// float Fixed::toFloat() const {
//     return static_cast<float>(Value) / static_cast<float>(1 << Bits);
// }

// int Fixed::toInt() const {
//     return Value >> Bits;
// }

// std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
//     out << fixed.toFloat();
//     return out;
// }

// void Fixed::setRawBits(int const raw) {
//     Value = raw;
// }

// int Fixed::getRawBits() const {
//     return Value;
// }

// Fixed::~Fixed() {
//     std::cout << "Destructor called" << std::endl;
// }
//-------------------------------------------------

// Fixed.cpp
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() 
{
    Value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) 
{
    Value = fixed.Value;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const Valeur_int) 
{
    Value = Valeur_int << Bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const Valeur_float) 
{
    Value = roundf(Valeur_float * (1 << Bits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const 
{
    return static_cast<float>(Value) / static_cast<float>(1 << Bits);
}

int Fixed::toInt() const {
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
