#include <string>
#include <sstream>

// Uses stringstream to convert a string number to an integer
int convertStringToInt(std::string& strPlaceOfBirth)
{
    int intPlaceOfBirth = 0;
    std::stringstream toIntConverter;

    toIntConverter << strPlaceOfBirth;
    toIntConverter >> intPlaceOfBirth;

    return intPlaceOfBirth;
}
