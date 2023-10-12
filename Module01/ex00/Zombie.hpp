#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>



class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        void    announce(void);
        void    setName(std::string name);
        ~Zombie();
};


Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif