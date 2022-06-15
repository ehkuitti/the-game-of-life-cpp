#include <iostream>
#include <string>

void askName(std::string& playerName)
{
    std::cout << "What's your name? ";
    std::getline(std::cin, playerName);
}

void askPlaceOfBirth(std::string& placeOfBirth)
{
    std::cout << "Select your place of birth: " << std::endl
              << "1: Helsinki" << std::endl
              << "2: Tampere" << std::endl
              << "3: Turku" << std::endl;
    std::getline(std::cin, placeOfBirth);
}
