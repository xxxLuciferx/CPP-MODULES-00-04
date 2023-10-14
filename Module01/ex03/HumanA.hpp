#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon *WeaponA;
    public:
        HumanA(std::string name, Weapon& a);
        ~HumanA();
        void    attack();
};




#endif

