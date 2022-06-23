#include <iostream>
#include <string>

void errorEmptyName()
{
    std::cout << "The name can't be empty" << std::endl
              << std::endl;
}

void errorNotANumber()
{
    std::cout << "Please input a number!" << std::endl;
}

void errorAnswerOutsideRange()
{
    std::cout << "Please input a number in the range of 1-3" << std::endl;
}
