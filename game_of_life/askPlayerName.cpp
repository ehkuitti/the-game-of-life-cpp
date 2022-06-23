// This file is for asking for player's personal details. All the functions can
// be called via main.


#include <iostream>
#include <string>


// main.cpp runs this function to ask the player's name. Uses reference to refer
// to similarly named variable in main
bool askName(std::string& playerName)
{
    std::cout << "What's your name? ";
    std::getline(std::cin, playerName);

    if (playerName.length() < 1)
    {
        return false;
    }

    else
    {
        return true;
    }
}
