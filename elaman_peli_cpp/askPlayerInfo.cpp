// This file is for asking for player's personal details. All the functions can
// be called via main.


#include <iostream>
#include <string>


// main.cpp runs this function to ask the player's name. Uses reference to refer
// to similarly named variable in main
void askName(std::string& playerName)
{
    std::cout << "What's your name? ";
    std::getline(std::cin, playerName);
}

// main.cpp runs this function to ask the player's place of birth. Uses
// reference to refer to similarly named variable in main
void askPlaceOfBirth(std::string& placeOfBirth)
{
    std::cout << " " << std::endl;
    std::cout << "Select your place of birth: " << std::endl
              << "1: Helsinki" << std::endl
              << "2: Tampere" << std::endl
              << "3: Turku" << std::endl;
    std::getline(std::cin, placeOfBirth);
}
