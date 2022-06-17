#include <iostream>

void generateRandomValue(int& switchOperator)
{
    switchOperator = (rand() % 10) + 1;
}
