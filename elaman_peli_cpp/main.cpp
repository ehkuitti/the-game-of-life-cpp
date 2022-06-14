/*

 * GENERAL GUIDELINES

 * Formatting

 * - Please use camelCase instead of under_scoring in function names. This is,
 * in my opinion, easier to read.
 * - Please make sure character counts, *including comments*, don't exceed 80
 * characters per line. If you're using Qt Creator, you can go to:
 * Tools -> Options -> Text Editor -> Display
 * -> Check "Display column margin at" -> set the value to 80 -> Apply -> OK .
 * - Please put the opening curly bracket "{" on the following line in if, for,
 * and similar statements.
 *
 * Git

 * - Please always commit when there's a major change in the code. This makes it
 * possible to go back if something brakes in the future.
 * - Please set the title of a non-functioning code to "BROKEN: <message>". This
 * way we know when the code broke.
 */

#include "askPlayerName.cpp"
#include "errors.cpp"

#include <fstream>
#include <iostream>

/*
 * The main function is intended to run the rest of the functions in the
 * program. At the start it checks if the game instructions are open and
 * crashes the game intentionally if not. After this, the game hands over the
 * function planning to separate files.
 */
int main()
{
    // VARIABLE INITIALIZATIONS ORDERED BY TYPE ALPHABETICALLY

    // Standard template library class objects
    std::ifstream gameInstructions("instructions.cpp");
    std::ifstream gameCredits("credits.txt");

    // Standard strings
    std::string name = "";

    if (!(gameInstructions.is_open()) && !(gameCredits.is_open()))
    {
        errorFileInstructions();
        return EXIT_FAILURE;
    }

    askName(name);
    return EXIT_SUCCESS;

}
