#include <iostream>
#include <string>

void errorAnswerOutsideRange()
{
    std::cout << "Please input a number in the range of 1-3" << std::endl;
}

void errorNoInput()
{
    std::cout << "You didn't input anything, please input a name. " << std::endl
              << std::endl;
}

void errorNotANumber()
{
    std::cout << "Please input a number!" << std::endl;
}
