#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int Value;
        static const int Bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);

        Fixed &operator=(const Fixed &fixed);
        
        void setRawBits(int const raw);
        int getRawBits(void) const;

        ~Fixed();
};

#endif