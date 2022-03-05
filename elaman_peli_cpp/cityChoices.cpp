#include "childhood.cpp"
#include <iostream>
#include <fstream>

using std::string;

void gameOverTurku(std::ostream& output);

void choiceHelsinki(std::ostream& output)
{
    output << "\nWelcome to Helsinki!" << std::endl;
    childhoodPrinter(output);
}

void choiceTampere(std::ostream& output)
{
    childhoodPrinter(output);
}

void choiceTurku(std::ostream& output)
{
    output << "\nAre you nuts? Nobody in their right mind would like to be "
           << "born in Turku...\n" << std::endl;
    gameOverTurku(output);
}

void gameOverTurku(std::ostream& output)
{
    std::ifstream credits("credits.txt");

    // Prints the contents of the file
    output << credits.rdbuf() << std::endl << std::endl;

    exit(0);
}

