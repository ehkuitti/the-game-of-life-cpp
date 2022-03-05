#include <iostream>

using std::string;

void childhoodPrinter(std::ostream& output)
{
    output << std::endl << "Your childhood goes by..." << std::endl;

    for (unsigned i = 0; i <= 15; i += 5)
    {
        output << "You're now " << i << " years old" << std::endl;
    }
    output << "\nNext you'll decide where you'd apply to after finishing "
           << "secondary school!" << std::endl;
}
