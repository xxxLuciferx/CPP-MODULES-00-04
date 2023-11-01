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
};
std::ostream& operator<<(std::ostream &out, const Fixed &fixed); //overload

#endif