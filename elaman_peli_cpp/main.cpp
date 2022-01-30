#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>

using std::string;

void examHighSchool (std::ostream& output)
{
    int answer, score = 0;

    output  << "How many species of elephant are there?" << "\n"
            << "1) 2" << "\n"
            << "2) 3" << "\n"
            << "3) 5" << std::endl;
    std::cin >> answer;

    if (answer == 2)
    {
        output << "\nCorrect! That was easy :]\n\n";
        score++;
    }
    else
    {
        output << "\nIncorrect! I thought this was general knowledge... "
               << "¯\\_(ツ)_/¯\n\n";
    }


    output  << "Which of the Disney princesses is seen the least in the movies?"
            << "\n"
            << "1) Sleeping Beauty" << "\n"
            << "2) Jasmine" << "\n"
            << "3) Snow White" << std::endl;
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! You've done your homework!\n\n";
        score++;
    }
    else
    {
        output << "\nIncorrect! Time to watch more cartoons! =)\n\n";
    }


    output << "Don't use a calculator: How much is 30% of 546?\n"
           << "1) 163.8" << "\n"
           << "2) 166.6" << "\n"
           << "3) 173.95" << std::endl;
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! It seems you can handle math as well!\n\n";
        score++;
    }
    else
    {
        output << "\nIncorrect! Was it really that hard?\n\n";
    }


    output << "Geography: What is the formal name of the capital of the USA?\n"
           << "1) Washington" << "\n"
           << "2) Washinton, D.C." << "\n"
           << "3) Disctrict of Columbia" << std::endl;
    std::cin >> answer;

    if (answer == 3)
    {
        output << "\nCorrect! This one was hard!\n\n";
        score++;
    }
    else
    {
        output << "\nNope! Washington is a state in the US West Coast.\n"
               << "Washington, D.C. is official, *unformal* name.\n\n";
    }


    output << "Which of the following ingredient DOESN'T belong in the "
           << "Boulevier cocktail?\n"
           << "1) Whiskey\n"
           << "2) Campari\n"
           << "3) Rum" << std::endl;
    std::cin >> answer;

    if (answer == 3)
    {
        output << "\nCorrect! Seems like you drink a lot, eh?";
        score++;
    }
    else
    {
        output << "\nIncorrect! Don't you drink alcohol?";
    }


    if (score == 5)
    {
        output << "\nYour score is " << score << "/5, "
               << "you bookworm!";
    }

    else if (score > 1 && score < 5)
    {
        output << "\nYour score is " << score << "/5. "
               << "You're a perfectly decent person!";
    }

    else
    {
        output << "\nYour score is " << score << "/5. "
               << "You could've at least tried...";
    }


}

int welcomeSwitch (int& oper, std::ostream& output, string& name)
{
    switch(oper)
    {
        case 0:
            output << "I love the name " << name << "!" << std::endl;
            break;
        case 1:
            output << name << " is a nice name!" << std::endl;
            break;
        case 2:
            output << name << " is the nicest name I have ever heard!"
                   << std::endl;
            break;
        case 3:
            output << name << " is a fine name if you ask me!" << std::endl;
            break;
        case 4:
            output << name << " has to be the coolest name in existence!"
                   << std::endl;
            break;
        case 5:
            output << name << ", I've never heard of your name!" << std::endl;
            break;
        case 6:
            output << "Wow, is it really the " << name
                   << " playing this game? I'm honored!" << std::endl;
            break;
        case 7:
            output << "Wow, it's the " << name << "!" << std::endl;
            break;
        case 8:
            output << "I never knew you liked this game, "
                   << name << "!" << std::endl;
            break;
        case 9:
            output << "It's really you, " << name << ". Wow! " << std::endl;
            break;
        case 10:
            output << "You can't imagine how lucky you, " << name
                   << ", are playing this rare gem!" << std::endl;
            break;
        default:
            output << "Something went wrong. Please restart the game"
                   << std::endl;
            exit(0);
    }

    return oper;
}

int randomRangeGenerator()
{
    return (rand() % 10) + 1;
}

bool isInputValid (string& placeOfBirth)
{
    for (unsigned i = 0; i < placeOfBirth.length(); i++)
    {
        if (!isdigit(placeOfBirth[i]))
        {
            return false;
        }
    }

    return true;
}

void fileInstructionsError (std::ostream& output)
{
    output << "PLEASE MAXIMIZE THIS WINDOW" << "\n\n"
           << "PLEASE MAKE SURE YOU'RE USING QT CREATOR AS YOUR IDE "
           << "AS OTHER IDE'S AREN'T SUPPORTED.\n\n\n"
           << "INSTALL INSTRUCTIONS \n\n"
           << "Right click main.cpp on the left hand side "
           << "and click Show Containing Folder. "
           << "Copy instructions.txt and credits.txt." << "\n"
           << "Go up a directory and open the folder Build... "
           << "Paste the files there, then restart the game. " << "\n"
           << "If this message shows up again on the next run, "
           << "you haven't copied the files successfully. "
           << "Please try again." << "\n"
           << "PLEASE MAKE SURE YOU DON'T RENAME THE FILES. "
           << "THE GAME RELIES ON THE DEFAULT NAMES "
           << "AND WON'T WORK WITH DIFFERENT FILE NAMES." << "\n\n"
           << "I hope you enjoy the game! Have fun." << "\n" << std::endl;
}

void inputIntegerError (std::ostream& output)
{
    output << "ERROR: YOU DIDN'T INPUT AN INTEGER. PLEASE TYPE A NEW VALUE."
           << std::endl;
}

void inputSelectionError (std::ostream& output)
{
    output << "ERROR: THE INPUT VALUE HAS TO BE 1-3. PLEASE INPUT A NEW VALUE."
           << std::endl;
}

void gameOver(std::ostream& output)
{
    std::ifstream credits("credits.txt");

    // Prints the contents of the file
    output << credits.rdbuf() << "\n" << std::endl;

    exit(0);
}

void routeHighSchool (std::ostream& output)
{
    output << "\nGood choice! Now you'll have an exam. Good luck! \n\n";
    examHighSchool(output);
}

void routeRat (std::ostream& output)
{
    output << "\nYou rat! You'll not survive in life like this!\n" << std::endl;
    gameOver(output);
}

void askHighSchool (std::ostream& output)
{
    string highSchool;
    int oper = 0;

    while (true)
    {
        output << "\nWhere would you like to apply to? " << std::endl
                  << "1: High School" << std::endl
                  << "2: Vocational School" << std::endl
                  << "3: Rat" << std::endl;
        std::getline(std::cin, highSchool);

        bool isValueValid = isInputValid(highSchool);
        if (!isValueValid)
        {
            output << "" << std::endl;
            continue;
        }

//        oper = std::stoi(highSchool);

        std::stringstream stringToInt;
        stringToInt << highSchool;
        stringToInt >> oper;

        if (oper <= 0 || oper >= 4)
        {
            inputSelectionError(output);
            continue;
        }

        else
        {
            break;
        }
    }

    switch (oper)
    {
        case 1:
            routeHighSchool(output);
            break;
        case 2:
            break;
        case 3:
            routeRat(output);
            break;
    }

}

void askName (std::ostream& output)
{
    string name;
    output << "What's your name? ";
    std::getline(std::cin, name);
    int oper = 0;

    oper = randomRangeGenerator();

//    std::cout << "Oper: " << oper << std::endl;
    welcomeSwitch(oper, output, name);
//    output << name << " is a nice name!" << std::endl;
}

void childhood(std::ostream& output)
{
    output << "\n" << "Your childhood goes by..." << std::endl;

    for (unsigned i = 0; i <= 15; i += 5)
    {
        output << "You're now " << i << " years old" << std::endl;
    }
    output << "\nNext you'll decide where you'd apply to after finishing "
           << "secondary school!" << std::endl;
}

void routeHelsinki(std::ostream& output)
{
    output << "\nWelcome to Helsinki!" << std::endl;
    childhood(output);
}

void routeTampere(std::ostream& output)
{
    childhood(output);
}

void routeTurku(std::ostream& output)
{
    output << "\nAre you nuts? Nobody in their right mind would like to be "
           << "born in Turku...\n" << std::endl;
    gameOver(output);
}

void askPlaceOfBirth (std::ostream& output)
{
    string placeOfBirth;
    int oper = 0;

    while (true)
    {
        output << "\nSelect your place of birth: " << std::endl
                  << "1: Helsinki" << std::endl
                  << "2: Tampere" << std::endl
                  << "3: Turku" << std::endl;
        std::getline(std::cin, placeOfBirth);

        bool isValueValid = isInputValid(placeOfBirth);
        if (!isValueValid)
        {
            inputIntegerError(output);
            continue;
        }

        std::stringstream stringToInt;
        stringToInt << placeOfBirth;
        stringToInt >> oper;

//        oper = std::stoi(placeOfBirth);
        if (oper <= 0 || oper >= 4)
        {
            inputSelectionError(output);
            continue;
        }

        else
        {
            break;
        }
    }


    switch (oper)
    {
        case 1:
            routeHelsinki(output);
            break;
        case 2:
            routeTampere(output);
            break;
        case 3:
            routeTurku(output);
            break;
    }

}
int main()
{
    //Tekee randomeista randomeita
    srand(time(NULL));
    //STRINGS
    string job1;
    string job2;
    string job_bachelorOfBusinessIT;
    string job_socialWork;
    string college;
    string studies;

    //OTHER VARIABLES

    std::ostream& output = std::cout;
    std::ifstream instructions("instructions.txt");
    std::ifstream credits("credits.txt");

    if (instructions.is_open() && credits.is_open())
    {
        // Prints the contents of the file
        output << instructions.rdbuf() << std::endl;
    }

    else
    {
        fileInstructionsError(output);
        return EXIT_FAILURE;
    }

    //DIFFERENT QUESTIONS ARE SEPARATED INTO SEPARATE FUNCTIONS
    askName(output);
    askPlaceOfBirth(output);
    askHighSchool(output);

    return 0;
}
