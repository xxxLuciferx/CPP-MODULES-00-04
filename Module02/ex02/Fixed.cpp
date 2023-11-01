/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:35:20 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/01 15:35:39 by khaimer          ###   ########.fr       */
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
    return (float)(Value) / (1 << Bits);
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
    return this->Value;
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

bool Fixed::operator>(const Fixed &second)
{
    return this->Value > second.Value;
}

bool Fixed::operator<(const Fixed &second) const 
{
    return Value < second.Value;
}

bool Fixed::operator>=(const Fixed &second) const 
{
    return Value >= second.Value;
}

bool Fixed::operator<=(const Fixed &second) const 
{
    return Value <= second.Value;
}

bool Fixed::operator==(const Fixed &second) const 
{
    return Value == second.Value;
}

bool Fixed::operator!=(const Fixed &second) const 
{
    return Value != second.Value;
}

Fixed Fixed::operator+(const Fixed &second) const 
{
    return Fixed(this->toFloat() + second.toFloat());
}

Fixed Fixed::operator-(const Fixed &second) const 
{
    return Fixed(this->toFloat() - second.toFloat());
}

Fixed Fixed::operator*(const Fixed &second) const 
{
    return Fixed(this->toFloat() * second.toFloat());
}

Fixed Fixed::operator/(const Fixed &second) const 
{
    if (second.toFloat() != 0.0f) 
    {
        return Fixed(this->toFloat() / second.toFloat());
    }
    else 
    {
        return Fixed(0);
    }
}

Fixed& Fixed::operator++() 
{
    Value++;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed tmp(*this);
    Value++;
    return tmp;
}

Fixed& Fixed::operator--() 
{
    Value--;
    return *this;
}

Fixed Fixed::operator--(int) 
{
    Fixed tmp(*this);
    Value--;
    return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

// For const references, min returns a reference to the smallest value.
const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

// For non-const references, max returns a reference to the greatest value.
Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

// For const references, max returns a reference to the greatest value.
const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}