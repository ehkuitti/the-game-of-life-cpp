#include <iostream>
#include <sstream>

using std::string;

int stringToInt (string& selection, int& oper)
{
    std::stringstream valueToInt;
    valueToInt << selection;
    valueToInt >> oper;

    return oper;
}
