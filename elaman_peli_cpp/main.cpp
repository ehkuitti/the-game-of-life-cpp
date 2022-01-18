#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>

using std::string;

bool isInputValid (string& placeOfBirth)
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

void fileCreditsError (std::ostream& output)
{
    output << "ERROR: ERROR LOADING CREDITS. PLEASE MAKE SURE THAT THE CREDITS FILE IS PLACED IN THE BUILD DIRECTORY.\n" << std::endl;
    exit(1);
}

void fileInstructionsError (std::ostream& output)
{
    output << "ERROR: ERROR OPENING THE INSTRUCTIONS FILE. PLEASE MAKE SURE THE INSTRUCTIONS FILE IS PLACED IN THE BUILD DIRECTORY." << std::endl;
}

void inputIntegerError (std::ostream& output)
{
    output << "ERROR: YOU DIDN'T INPUT AN INTEGER. PLEASE TYPE A NEW VALUE." << std::endl;
}

void inputSelectionError (std::ostream& output)
{
    output << "ERROR: THE INPUT VALUE HAS TO BE 1-3. PLEASE INPUT A NEW VALUE." << std::endl;
}

void gameOver(std::ostream& output)
{
    std::ifstream credits("credits.txt");

    if (credits.is_open())
    {
        output << credits.rdbuf() << "\n" << std::endl; // Prints the contents of the file
        exit(0);
    }

    else
    {
        fileCreditsError(output);
        return;
    }
}

void routeHighSchool (std::ostream& output)
{
    output << "\nGood choice! Now you'll have an exam. Good luck! ";
}

void routeRat (std::ostream& output)
{
    output << "\nYou rat! You'll not survive in life like this!\n" << std::endl;
    gameOver(output);
}

void askHighSchool (std::ostream& output)
{
    string highSchool;
    int oper = 0;

    while (true)
    {
        output << "\nWhere would you like to apply to? " << std::endl
                  << "1: High School" << std::endl
                  << "2: Vocational School" << std::endl
                  << "3: Rat" << std::endl;
        std::getline(std::cin, highSchool);

        bool isValueValid = isInputValid(highSchool);
        if (!isValueValid)
        {
            output << "" << std::endl;
            continue;
        }

//        oper = std::stoi(highSchool);

        std::stringstream stringToInt;
        stringToInt << highSchool;
        stringToInt >> oper;

        if (oper <= 0 || oper >= 4)
        {
            inputSelectionError(output);
            continue;
        }

        else
        {
            break;
        }
    }

    switch (oper)
    {
        case 1:
            routeHighSchool(output);
            break;
        case 2:
            break;
        case 3:
            routeRat(output);
            break;
    }

}

void askName (std::ostream& output)
{
    string name;
    output << "What's your name? ";
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
    output << "\nNext you'll decide where you'd apply to after finishing secondary school!" << std::endl;
}

void routeHelsinki(std::ostream& output)
{
    output << "\nWelcome to Helsinki!" << std::endl;
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

void askPlaceOfBirth (std::ostream& output)
{
    string placeOfBirth;
    int oper = 0;

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
            inputIntegerError(output);
            continue;
        }

        std::stringstream stringToInt;
        stringToInt << placeOfBirth;
        stringToInt >> oper;

//        oper = std::stoi(placeOfBirth);
        if (oper <= 0 || oper >= 4)
        {
            inputSelectionError(output);
            continue;
        }

        else
        {
            break;
        }
    }


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
    string college;
    string studies;

    //OTHER VARIABLES

    std::ostream& output = std::cout;
    std::ifstream instructions("instructions.txt");
    std::ifstream credits("credits.txt");

    if (instructions.is_open() && credits.is_open())
    {
        output << instructions.rdbuf() << std::endl; // Prints the contents of the file
    }

    else
    {
        fileInstructionsError(output);
        fileCreditsError(output);
        return EXIT_FAILURE;
    }

    //DIFFERENT QUESTIONS ARE SEPARATED INTO SEPARATE FUNCTIONS
    askName(output);
    askPlaceOfBirth(output);
    askHighSchool(output);

    return 0;
}
