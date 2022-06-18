#include <string>
#include <sstream>

int convertStringToInt(std::string& strPlaceOfBirth)
{
    int intPlaceOfBirth = 0;
    std::stringstream toIntConverter;

    toIntConverter << strPlaceOfBirth;
    toIntConverter >> intPlaceOfBirth;

    return intPlaceOfBirth;
}
