#include <string>
#include <iostream>

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
