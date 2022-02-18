#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>

using std::string;

//Method stubs for functions further down the program
void gameOver(std::ostream& output);
bool isInputValid (string& placeOfBirth);
void inputSelectionError (std::ostream& output);
void routeHighSchool (std::ostream& output);
void routeVocationalSchool (std::ostream& output);
void routeRat (std::ostream& output);

void collegeFieldWelcomer (string field, std::ostream& output)
{
    if (field == "IT")
    {
        output << "\nCorrect!\n\n";
    }

    else if (field == "social")
    {
        output << "\nThis is also an important field!\n\n";
    }

    else
    {
        output << "\nYou've got to be kidding me...\n\n";
    }
}

void collegeStudyYearPrinter (int& studyYear, std::ostream& output)
{
    output << "And so went your study year " << studyYear << " in college.";
}

int stringToInt (string& selection, int& oper)
{
    std::stringstream valueToInt;
    valueToInt << selection;
    valueToInt >> oper;

    return oper;
}

void vandalism (std::ostream& output)
{
    output << "\nWould you like to participate in vandalism?\n"
           << "1) Yes\n"
           << "2) No\n";
}

void economicsStudies (std::ostream& output)
{
    string field = "economics";
    collegeFieldWelcomer(field, output);
    gameOver(output);
}

void socialStudies (std::ostream& output)
{
    bool isStudying = true;
    int studyYear = 0;
    string field = "social";

    collegeFieldWelcomer(field, output);

    while (isStudying)
    {
        if (studyYear == 5)
        {
            isStudying = false;
        }

        else
        {
            studyYear++;
            collegeStudyYearPrinter(studyYear, output);
        }
    }
}

void itStudies (std::ostream& output)
{
    bool isStudying = true;
    int studyYear = 0;
    string field = "IT";

    collegeFieldWelcomer(field, output);

    while (isStudying)
    {
        if (studyYear == 5)
        {
            isStudying = false;
        }

        else
        {
            studyYear++;
            collegeStudyYearPrinter(studyYear, output);
        }
    }
}

void uniColManager (std::ostream& output)
{
    string uniCol;
    int oper = 0;

    while (true)
    {
        output << "\n\nGreat choice! Studies await.\n\n"
               << "What'd you like to study?\n"
               << "1) Information Technology\n"
               << "2) Social Sciences\n"
               << "3) Economics\n";
        std::getline(std::cin, uniCol);

        bool isValueValid = isInputValid(uniCol);
        if (!isValueValid)
        {
            output << "" << "\n";
            continue;
        }

        oper = stringToInt(uniCol, oper);

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
            itStudies(output);
            break;
        case 2:
            socialStudies(output);
            break;
        case 3:
            economicsStudies(output);
            break;
    }
}

void uoasManager (std::ostream& output)
{
    string uOAS;
    int oper = 0;

    while (true)
    {
        output << "\n\nGreat choice! Studies await.\n\n"
               << "What'd you like to study?\n"
               << "1) Information Technology\n"
               << "2) Social Sciences\n"
               << "3) Economics\n";
        std::getline(std::cin, uOAS);

        bool isValueValid = isInputValid(uOAS);
        if (!isValueValid)
        {
            output << "" << "\n";
            continue;
        }

        oper = stringToInt(uOAS, oper);

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
            itStudies(output);
            break;
        case 2:
            socialStudies(output);
            break;
        case 3:
            economicsStudies(output);
            break;
    }

}

void collegeManager (std::ostream& output)
{
    string college;
    int oper = 0;

    while (true)
    {
        output << "Where would you like to apply to? " << "\n"
               << "1: University (College)" << "\n"
               << "2: University of Applied Sciences" << "\n"
               << "3: Rat" << "\n";
        std::getline(std::cin, college);

        bool isValueValid = isInputValid(college);
        if (!isValueValid)
        {
            output << "" << "\n";
            continue;
        }

        oper = stringToInt(college, oper);

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
            uniColManager(output); //University (College)
            break;
        case 2:
            uoasManager(output); //University of Applied Sciences
            break;
        case 3:
            routeRat(output);
            break;
    }
}

int rouletteValueGenerator ()
{
    return (rand() % 4) + 1;
}

void roulette1 (std::ostream& output)
{
    int lethalValue = 0;

    lethalValue = rouletteValueGenerator();

    if (lethalValue == 3)
    {
        output << "\nYou tuned your moped to go 100 km/h\n"
               << "\nYou popped a wheelie and lost control of your moped\n"
               << "\nYou fall and get damaged\n\n";
        gameOver(output);
    }

}

void examVocationalSchool (std::ostream& output)
{
    int answer, score = 0;

    output  << "When was the first computer invented?" << "\n"
            << "1) 1929-1931" << "\n"
            << "2) 1936-1938" << "\n"
            << "3) 1941-1943" << "\n";
    std::cin >> answer;

    if (answer == 2)
    {
        output << "\nCorrect! That was easy, wasn't it? :]\n\n";
        score++;
    }
    else
    {
        output << "\nIncorrect! I thought this was general knowledge... "
               << "¯\\_(ツ)_/¯\n\n";
    }


    output  << "Where is the world's oldest surviving tree?" << "\n"
            << "1) The United States of America" << "\n"
            << "2) Canada" << "\n"
            << "3) Germany" << "\n";
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! The tree is called Methuselah and it's located "
               << "in California\n\n";
        score++;
    }
    else
    {
        output << "\nIncorrect! Time to update your tree knowledge! =)\n\n";
    }


    output << "Don't use a calculator: How much is 34% of 426?\n"
           << "1) 144.84" << "\n"
           << "2) 152.61" << "\n"
           << "3) 159.87" << "\n";
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! It seems you manage math as well!\n\n";
        score++;
    }
    else
    {
        output << "\nIncorrect! I don't think it was really that hard...?\n\n";
    }


    output << "Geography: What is the capital of the Australia?\n"
           << "1) Wellington" << "\n"
           << "2) Sydney" << "\n"
           << "3) Canberra" << "\n";
    std::cin >> answer;

    if (answer == 3)
    {
        output << "\nCorrect! This one was difficult!\n\n";
        score++;
    }
    else
    {
        output << "\nNoppers! Wellington is the capital of New Zealand.\n"
               << "Sydney is the largest city but not the capital.\n\n";
    }


    output << "Which cocktail is made of rum, coconut cream, & pineapple juice?"
           << "1) White Russian\n"
           << "2) Bellini\n"
           << "3) Pina Colada" << "\n";
    std::cin >> answer;

    if (answer == 3)
    {
        output << "\nCorrect! Very good taste you have over there!";
        score++;
    }
    else
    {
        output << "\nIncorrect! No alcohol for you I suppose.";
    }


    if (score == 5)
    {
        output << "Your score is " << score << "/5, "
               << "you bookworm!\n";
    }

    else if (score > 1 && score < 5)
    {
        output << "Your score is " << score << "/5. "
               << "You're a perfectly decent person!\n";
    }

    else
    {
        output << "Your score is " << score << "/5. "
               << "You could've at least tried...\n";
    }


}

void routeVocationalSchool (std::ostream& output)
{
    output << "\nGood choice! Now you'll have an exam. "
           << "\n\n"
           << "INPUTTING A VALUE NOT ON THE LIST IS CONSIDERED "
           << "AN INCORRECT ANSWER."
           << "\n\n"
           << "Good luck! \n\n";
    examVocationalSchool(output);
}

void examHighSchool (std::ostream& output)
{
    int answer, score = 0;

    output  << "How many species of elephant are there?" << "\n"
            << "1) 2" << "\n"
            << "2) 3" << "\n"
            << "3) 5" << "\n";
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
            << "3) Snow White" << "\n";
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
           << "3) 173.95" << "\n";
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
           << "3) Disctrict of Columbia" << "\n";
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
           << "3) Rum" << "\n";
    std::cin >> answer;

    if (answer == 3)
    {
        output << "\nCorrect! Seems like you drink a lot, eh?\n\n";
        score++;
    }
    else
    {
        output << "\nIncorrect! Don't you drink alcohol?\n\n";
    }


    if (score == 5)
    {
        output << "Your score is " << score << "/5, "
               << "you bookworm!";
    }

    else if (score > 1 && score < 5)
    {
        output << "Your score is " << score << "/5. "
               << "You're a perfectly decent person!";
    }

    else
    {
        output << "\nYour score is " << score << "/5. "
               << "You could've at least tried...";
    }

    output << "\n\nYou graduated from High School and "
           << "arranged a huge party!\n\n";

}

int welcomeSwitch (int& oper, std::ostream& output, string& name)
{
    switch(oper)
    {
        case 0:
            output << "I love the name " << name << "!" << "\n";
            break;
        case 1:
            output << name << " is a nice name!" << "\n";
            break;
        case 2:
            output << name << " is the nicest name I have ever heard!"
                   << "\n";
            break;
        case 3:
            output << name << " is a fine name if you ask me!" << "\n";
            break;
        case 4:
            output << name << " has to be the coolest name in existence!"
                   << "\n";
            break;
        case 5:
            output << name << ", I've never heard of your name!" << "\n";
            break;
        case 6:
            output << "Wow, is it really the " << name
                   << " playing this game? I'm honored!" << "\n";
            break;
        case 7:
            output << "Wow, it's the " << name << "!" << "\n";
            break;
        case 8:
            output << "I never knew you liked this game, "
                   << name << "!" << "\n";
            break;
        case 9:
            output << "It's really you, " << name << ". Wow! " << "\n";
            break;
        case 10:
            output << "You can't imagine how lucky you, " << name
                   << ", are playing this rare gem!" << "\n";
            break;
        default:
            output << "Something went wrong. Please restart the game"
                   << "\n";
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
           << "I hope you enjoy the game! Have fun." << "\n" << "\n";
}

void inputIntegerError (std::ostream& output)
{
    output << "ERROR: YOU DIDN'T INPUT AN INTEGER. PLEASE TYPE A NEW VALUE."
           << "\n";
}

void inputSelectionError (std::ostream& output)
{
    output << "\nERROR: THE INPUT VALUE HAS TO BE 1-3. "
           << "PLEASE INPUT A NEW VALUE.\n"
           << "\n";
}

void gameOver(std::ostream& output)
{
    std::ifstream credits("credits.txt");

    // Prints the contents of the file
    output << credits.rdbuf() << "\n" << "\n";

    exit(0);
}

void routeHighSchool (std::ostream& output)
{
    output << "\nGood choice! Now you'll have an exam. "
           << "\n\n"
           << "INPUTTING A VALUE NOT ON THE LIST IS CONSIDERED "
           << "AN INCORRECT ANSWER. "
           << "\n\n"
           << "Good luck! \n\n";
    examHighSchool(output);
}

void routeRat (std::ostream& output)
{
    output << "\nYou rat! You'll not survive in life like this!\n" << "\n";
    gameOver(output);
}

void highSchoolManager (std::ostream& output)
{
    string highSchool;
    int oper = 0;

    while (true)
    {
        output << "\nWhere would you like to apply to? " << "\n"
                  << "1: High School" << "\n"
                  << "2: Vocational School" << "\n"
                  << "3: Rat" << "\n";
        std::getline(std::cin, highSchool);

        bool isValueValid = isInputValid(highSchool);
        if (!isValueValid)
        {
            output << "" << "\n";
            continue;
        }

        oper = stringToInt(highSchool, oper);

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
            routeVocationalSchool(output);
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

//    std::cout << "Oper: " << oper << "\n";
    welcomeSwitch(oper, output, name);
//    output << name << " is a nice name!" << "\n";
}

void childhood(std::ostream& output)
{
    output << "\n" << "Your childhood goes by..." << "\n";

    for (unsigned i = 0; i <= 15; i += 5)
    {
        output << "You're now " << i << " years old" << "\n";
    }
    output << "\nNext you'll decide where you'd apply to after finishing "
           << "secondary school!" << "\n";
}

void routeHelsinki(std::ostream& output)
{
    output << "\nWelcome to Helsinki!" << "\n";
    childhood(output);
}

void routeTampere(std::ostream& output)
{
    childhood(output);
}

void routeTurku(std::ostream& output)
{
    output << "\nAre you nuts? Nobody in their right mind would like to be "
           << "born in Turku...\n" << "\n";
    gameOver(output);
}

void askPlaceOfBirth (std::ostream& output)
{
    string placeOfBirth;
    int oper = 0;

    while (true)
    {
        output << "\nSelect your place of birth: " << "\n"
                  << "1: Helsinki" << "\n"
                  << "2: Tampere" << "\n"
                  << "3: Turku" << "\n";
        std::getline(std::cin, placeOfBirth);

        bool isValueValid = isInputValid(placeOfBirth);
        if (!isValueValid)
        {
            inputIntegerError(output);
            continue;
        }

        oper = stringToInt(placeOfBirth, oper);

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

    //OTHER VARIABLES

    std::ostream& output = std::cout;
    std::ifstream instructions("instructions.txt");
    std::ifstream credits("credits.txt");

    if (instructions.is_open() && credits.is_open())
    {
        // Prints the contents of the file
        output << instructions.rdbuf() << "\n";
    }

    else
    {
        fileInstructionsError(output);
        return EXIT_FAILURE;
    }

    //DIFFERENT QUESTIONS ARE SEPARATED INTO SEPARATE FUNCTIONS
    askName(output);
    askPlaceOfBirth(output);
    highSchoolManager(output);
    roulette1(output);
    collegeManager(output);
    vandalism(output);


    return 0;
}
