#include "askPlayerPlaceOfBirth.cpp"
#include "valueConversions.cpp"
#include "valueErrors.cpp"

#include <string>


/* The function of the function is to check wheter the string input
contains a number. If it does, it will return a boolean accordingly.*/
bool isInputANumber(std::string& myString)
{

    // If the letter in index 0 isn't a number, return "isn't a number"
    if(!isdigit(myString[0]))
    {
        return false;
    }

    // If user didn't input anything, return "isn't a number". For example, the
    // "lenght" of a single press of enter is zero
    else if (myString.length() < 1)
    {
        return false;
    }

    // Is a number
    else
    {
        return true;
    }

}

// In regular quesions, the legal answers are 1, 2, 3. Any value outside these
// is considered an illegal answer.
bool isAnswerWithinRange(int& answer)
{
    if (answer < 1 || answer > 3)
    {
        return false;
    }

    else
    {
        return true;
    }
}

void checkNumberAndRange ()
{
    bool isAnswerValid = false;
    bool isPlaceOfBirthANumber = false;
    std::string strPlaceOfBirth = "";
    int intPlaceOfBirth = 0;

    while (!isAnswerValid)
    {
        askPlaceOfBirth(strPlaceOfBirth);
        isPlaceOfBirthANumber = isInputANumber(strPlaceOfBirth);
        if (!isPlaceOfBirthANumber)
        {
            errorNotANumber();
        }
        else
        {
            intPlaceOfBirth = convertStringToInt(strPlaceOfBirth);
            if(!isAnswerWithinRange(intPlaceOfBirth))
            {
                errorAnswerOutsideRange();
            }
            else
            {
                isAnswerValid = true;
            }
        }
    }
}
