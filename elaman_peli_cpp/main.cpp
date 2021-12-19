#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>

using std::string;

void gameOver(std::ostream& output)
{
    std::ifstream credits("credits.txt");

    if (credits.is_open())
    {
        output << credits.rdbuf() << "\n" << std::endl; // Prints the contents of the file
    }

    else
    {
        output << "\nERROR: ERROR LOADING CREDITS. PLEASE MAKE SURE THAT THE CREDITS FILE IS PLACED IN THE BUILD DIRECTORY.\n" << std::endl;
        return;
    }
}

bool isInputValid (string placeOfBirth)
{
    for (unsigned i = 0; i < placeOfBirth.length(); i++)
    {
        if (!isdigit(placeOfBirth[i]))
        {
            return false;
        }
    }

    return true;
}

void askName (string& name, std::ostream& output)
{
    output << "What's your name?: ";
    std::getline(std::cin, name);

    output << name << " is a nice name!" << std::endl;
}

void childhood(std::ostream& output)
{
    output << "\n" << "Your childhood goes by..." << std::endl;

    for (unsigned i = 0; i <= 15; i += 5)
    {
        output << "You're now " << i << " years old" << std::endl;
    }

    output << std::endl;
}

void routeHelsinki(std::ostream& output)
{
    childhood(output);
}

void routeTampere(std::ostream& output)
{
    childhood(output);
}

void routeTurku(std::ostream& output)
{
    output << "\nAre you nuts? Nobody in their right mind would like to be born in Turku...\n" << std::endl;
    gameOver(output);
}

void askPlaceOfBirth (string placeOfBirth, std::ostream& output)
{
    while (true)
    {
        output << "\nSelect your place of birth: " << std::endl
                  << "1: Helsinki" << std::endl
                  << "2: Tampere" << std::endl
                  << "3: Turku" << std::endl;
        std::getline(std::cin, placeOfBirth);

        bool isValueValid = isInputValid(placeOfBirth);
        if (!isValueValid)
        {
            output << "\nERROR: YOU DIDN'T INPUT AN INTEGER. PLEASE TYPE A NEW VALUE." << std::endl;
            continue;
        }

        else
        {
            break;
        }
    }

    int oper = 0;
    oper = std::stoi(placeOfBirth);

//    std::stringstream stringToInt;
//    stringToInt << placeOfBirth;
//    stringToInt >> oper;

    switch (oper)
    {
        case 1:
            routeHelsinki(output);
            break;
        case 2:
            routeTampere(output);
            break;
        case 3:
            routeTurku(output);
            break;
    }
}

int main()
{
    //STRINGS
    string job1;
    string job2;
    string job_bachelorOfBusinessIT;
    string job_socialWork;
    string name;
    string placeOfBirth;
    string primarySchool;
    string secondarySchool;
    string studies;

    //OTHER VARIABLES

    std::ostream& output = std::cout;
    std::ifstream instructions("instructions.txt");

    if (instructions.is_open())
    {
        output << instructions.rdbuf() << std::endl; // Prints the contents of the file
    }

    else
    {
        output << "ERROR: ERROR OPENING THE INSTRUCTIONS FILE. PLEASE MAKE SURE THE INSTRUCTIONS FILE IS PLACED IN THE BUILD DIRECTORY." << std::endl;
        return EXIT_FAILURE;
    }

    askName(name, output);
    askPlaceOfBirth(placeOfBirth, output);

    return 0;
}















//    output << "Welcome to Tomte™ "
//              "Corperation's®\n\n\t\tGAME_OF_LIFE©    :)\n"
//           << std::endl
//           << "Instructions: First of all, please maximize the console view in "
//              "your IDE. This makes it much easier to play. "
//              "After this click the space after \"What's your name?\""
//              "\nUse numbers or words to answer the question and press enter to"
//              "submit your answer.  "
//              "Have fun and best regards from Korporate Staff!\n"
//           << std::endl;
