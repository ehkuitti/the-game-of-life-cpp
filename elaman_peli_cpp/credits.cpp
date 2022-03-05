#include <iostream>
#include <fstream>

using std::string;

void gameOver(std::ostream& output)
{
    std::ifstream credits("credits.txt");

    // Prints the contents of the file
    output << credits.rdbuf() << std::endl << std::endl;

    exit(0);
}
