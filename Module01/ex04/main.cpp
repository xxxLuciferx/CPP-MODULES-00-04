
#include "filter.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        filter(av);
         
    }
    else
        std::cout << "Invalid Arguments." << std::endl;
    return 0;
}