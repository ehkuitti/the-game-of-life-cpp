#include <iostream>
#include <string>

void askName(std::string& playerName)
{
    std::cout << "What's your name? ";
    std::getline(std::cin, playerName);
}
