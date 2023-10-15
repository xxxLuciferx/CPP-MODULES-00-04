#ifndef HARL_HPP
# define HARL_HPP



# include <iostream>
#include <functional>
#include <string>
#include <map>

class Harl 
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);

    private:
        void debug();
        void info();
        void warning();
        void error();
};
#endif