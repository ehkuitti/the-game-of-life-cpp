/*
 *
 * GENERAL GUIDELINES
 *
 * Git
 *
 * - Please always commit when there's a major change in the code. This makes it
 * possible to go back if something brakes in the future.
 * - Please set the title of a non-functioning code to "BROKEN: <message>". This
 * way we know when the code broke.
 *
 * Formatting
 *
 * - Please use camelCase instead of under_scoring in function names. This is,
 * in my opinion, easier to read.
 * - Please make sure character counts, *including comments*, don't exceed 80
 * characters per line. If you're using Qt Creator, you can go to:
 * Tools -> Options -> Text Editor -> Display
 * -> Check "Display column margin at" -> set the value to 80 -> Apply -> OK .
 * - Please put the opening curly bracket "{" on the following line in if, for,
 * and similar statements.
 *
 * Funtionality
 *
 * - Please don't enable using namespace std. This is to avoid confusion between
 * own functions and functions within std namespace, e.g. std::max and max.
 */

// Includes for my own files
#include "askPlayerName.cpp"
#include "askPlayerPlaceOfBirth.cpp"
#include "fileReadingErrors.cpp"
#include "generateRandomValues.cpp"
#include "generateWelcomeMessage.cpp"
#include "valueChecks.cpp"

// Includes for std
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

/*
 * The main function is intended to run the rest of the functions in the
 * program. At the start it checks if the game instructions are open and
 * crashes the game intentionally if not. After this, the game hands over the
 * function planning to separate files.
 */
int main()
{

    // -------------------- VARIABLE INITIALIZATIONS ---------------------------


    // Booleans
    bool isNameEmpty = true;
    bool isPlaceOfBirthValid = false;

    // Integers
    int switchOperator = 0;

    // Standard template library ifstreams
    std::ifstream gameInstructions("instructions.txt");
    std::ifstream gameCredits("credits.txt");

    // Standard template library strings
    std::string playerName = "";
    std::string placeOfBirth = "";


    // -------------------------- CODE START -----------------------------------


    // Uses time to generate random numbers
    srand(time(NULL));

    // The game won't launch if it can't open the instruction and credit files
    // from the working directory (dir location on drive is OS dependent)
    if (!(gameInstructions.is_open()) || !(gameCredits.is_open()))
    {
        errorFileInstructions();
        return EXIT_FAILURE;
    }

     // The game starts by asking for the player's name and checking wheter it
     // is empty, i.e. the player didn't input anything
    while (isNameEmpty)
    {
        if (!askName(playerName))
        {
            errorNoInput();
        }
        else
        {
            isNameEmpty = false;
        }
    }

    // Once the player has inputted a name, the game prints a welcome message
    // by generating a random number and using it as a switch operator
    generateRandomValue(switchOperator);
    generateRandomWelcomeMessage(playerName, switchOperator);

    // The game asks for the player's place of birth and checks whether the
    // input contains numbers to produce an error in such a case.
    while (!isPlaceOfBirthValid)
    {
        askPlaceOfBirth(placeOfBirth);
        isPlaceOfBirthValid = checkNumberAndRange(placeOfBirth);
    }


    // The game ends.
    return EXIT_SUCCESS;

}
