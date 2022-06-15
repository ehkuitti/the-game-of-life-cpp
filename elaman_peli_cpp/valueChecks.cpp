#include <string>

/* The function of the function is to check wheter the string input
contains a number. If it does, it will return a boolean accordingly.*/
int doesStringContainNumbers(std::string& myString)
{
    for (unsigned i = 0; i < myString.length(); i++)
    {
        if(!isdigit(myString[i]))
        {
            return false;
        }
    }

    return true;
}
