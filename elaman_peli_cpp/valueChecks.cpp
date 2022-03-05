#include <iostream>

using std::string;

void errorInputInteger (std::ostream& output)
{
    output << "ERROR: YOU DIDN'T INPUT AN INTEGER. PLEASE TYPE A NEW VALUE."
           << std::endl;
}

void errorInputSelection (std::ostream& output)
{
    output << "\nERROR: THE INPUT VALUE HAS TO BE 1-3. "
           << "PLEASE INPUT A NEW VALUE.\n"
           << std::endl;
}

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

