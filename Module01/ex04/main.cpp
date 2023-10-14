#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream inputFile("c.txt");
    if (!inputFile.is_open()) 
    {
        std::cout << "File not found or couldn't be opened." << std::endl;
        return 1;
    }
    std::string content;
    std::string line;
    while (std::getline(inputFile, line)) 
    {
        line.find
        content += line + "\n";
    }
    std::cout << content << std::endl;
}