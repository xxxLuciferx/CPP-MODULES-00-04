/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:35:23 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/31 21:35:52 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
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

        friend std::ostream& operator<<(std::ostream &out, const Fixed &fixed); //overload
        
        void setRawBits(int const raw); //OLD
        int getRawBits() const; //OLD
        
        ~Fixed(); //OLD
};

#endif