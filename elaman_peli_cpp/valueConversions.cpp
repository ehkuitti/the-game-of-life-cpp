#include <string>
#include <sstream>

void convertStringToInt(int& answer,
                        std::string& placeOfBirth,
                        std::stringstream& toIntConverter)
{
    toIntConverter << placeOfBirth;
    toIntConverter >> answer;
}
