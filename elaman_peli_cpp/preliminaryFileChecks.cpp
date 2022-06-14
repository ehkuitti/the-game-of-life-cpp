#include <iostream>
#include <fstream>

bool areInstructionsAndCreditsOpen(std::ifstream gameInstructions,
                                   std::ifstream gameCredits)
{
    if (gameInstructions.is_open() && gameCredits.is_open())
    {
        return true;
    }

    else
    {
        return false;
    }
}
