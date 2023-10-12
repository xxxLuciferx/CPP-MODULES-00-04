#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std:string name;
        
        Weapon weaponA;
    public:
        HumanA();
        ~HumanA();
        void    attack();
};

#endif

