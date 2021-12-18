#include <iostream>
#include <fstream>

using std::string;

void firstQuestions (string name, string placeOfBirth, std::ostream& output)
{
    output << "What's your name?: ";
    std::getline(std::cin, name);
    output << "\n" << name << " is a nice name!" << std::endl;

    output << "Select your place of birth: " << "\n" << std::endl
              << "1: Helsinki" << std::endl
              << "2: Tampere" << std::endl
              << "3: Turku" << std::endl;
    std::getline(std::cin, placeOfBirth);
}

int main()
{
    //VARIABLES

    std::ostream& output = std::cout;
    std::ifstream instructions("instructions.txt");

    //STRINGS
    string job1;
    string job2;
    string job_bachelorOfBusinessIT;
    string job_socialWork;
    string name;
    string placeOfBirth;
    string primarySchool;
    string secondarySchool;
    string studies;

    if (instructions.is_open())
    {
        output << instructions.rdbuf() // Prints the contents of the file
               << std::endl
               << std::endl;
    }

    firstQuestions(name, placeOfBirth, output);

    return 0;
}















//    output << "Welcome to Tomte™ "
//              "Corperation's®\n\n\t\tGAME_OF_LIFE©    :)\n"
//           << std::endl
//           << "Instructions: First of all, please maximize the console view in "
//              "your IDE. This makes it much easier to play. "
//              "After this click the space after \"What's your name?\""
//              "\nUse numbers or words to answer the question and press enter to"
//              "submit your answer.  "
//              "Have fun and best regards from Korporate Staff!\n"
//           << std::endl;
