#include <iostream>
#include <string>

void askName(std::string& name)
{
    std::cout << "What's your name? ";
    std::getline(std::cin, name);
}
