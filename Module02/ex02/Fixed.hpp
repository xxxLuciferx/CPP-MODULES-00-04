/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:35:23 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/01 15:26:51 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed 
{
    private:
        int Value;
        static const int Bits = 8;
    public:
        Fixed(); //OLD
        Fixed(const Fixed &fixed); //OLD

        Fixed &operator=(const Fixed &fixed); //OLD


        Fixed(int const Valeur_int); //NEW
        Fixed(float const Valeur_float);//NEW

        float toFloat() const; //NEW
        int toInt() const; //NEW

        
        void setRawBits(int const raw); //OLD
        int getRawBits() const; //OLD
        
        ~Fixed(); //OLD

        bool operator>(const Fixed &second);
        bool operator<(const Fixed &second) const;
        bool operator>=(const Fixed &second) const;
        bool operator<=(const Fixed &second) const;
        bool operator==(const Fixed &second) const;
        bool operator!=(const Fixed &second) const;

        Fixed operator+(const Fixed &second) const;
        Fixed operator-(const Fixed &second) const;
        Fixed operator*(const Fixed &second) const;
        Fixed operator/(const Fixed &second) const;

        Fixed& operator++();  
        Fixed operator++(int);
        Fixed& operator--();  
        Fixed operator--(int);

        static Fixed& min(Fixed &a, Fixed &b);                         // Takes two references on fixed-point numbers
        static const Fixed& min(const Fixed &a, const Fixed &b);       // Takes two references to constant fixed-point numbers
        static Fixed& max(Fixed &a, Fixed &b);                         // Takes two references on fixed-point numbers
        static const Fixed& max(const Fixed &a, const Fixed &b);

};
std::ostream& operator<<(std::ostream &out, const Fixed &fixed); //overload

#endif