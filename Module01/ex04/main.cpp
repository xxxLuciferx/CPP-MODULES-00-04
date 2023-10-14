#include <iostream>
#include <fstream>
#include <string>


int main(int ac, char **av)
{
    std::string document;
    std::string line;

    if (ac == 4)
    {
         filter();
    }
    else
        std::cout << "Invalid Arguments." << std::endl;
    return 0;
}