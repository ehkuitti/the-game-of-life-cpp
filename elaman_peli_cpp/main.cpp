/*

GENERAL GUIDELINES

Formatting

- Please use camelCase instead of under_scoring in function names. This is,
in my opinion, easier to read.
- Please make sure character counts, *including comments*, don't exceed 80
characters per line. If you're using Qt Creator, you can go to:
Tools -> Options -> Text Editor -> Display -> Check "Display column margin at"
-> set the value to 80 -> Apply -> OK .
- Please put the opening curly bracket "{" on the following line in if, for, and
similar statements.

Git

- Please always commit when there's a major change in the code. This makes it
possible to go back if something brakes in the future.
- Please set the title of a non-functioning code to "BROKEN: <message>". This
way we know when the code broke.
*/

#include "valueChecks.cpp"
#include "stringToIntConversion.cpp"
#include "start.cpp"
#include "credits.cpp"
#include "cityChoices.cpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>

// Please don't add "using namespace std;" here,
// since this may cause problems with function names.
// Use std:: in front of the class / function / template instead.

// Makes it possible to use string without typing std:: in the beginning
using std::string;

// Method stubs for functions further down the program
void collegeStudyYearPrinter(int& studyYear, std::ostream& output);
void routeHighSchool (std::ostream& output);
void routeVocationalSchool (std::ostream& output);
void routeRat (std::ostream& output);

void whileInCollege (std::ostream& output)
{
    int studyYear = 0;
    bool isStudying = true;

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

void collegeFieldWelcomer (string& field, std::ostream& output)
{
    if (field == "IT")
    {
        output << "\nCorrect!\n" << std::endl;
    }

    else if (field == "social")
    {
        output << "\nThis is also an important field!\n" << std::endl;
    }

    else
    {
        output << "\nYou've got to be kidding me...\n" << std::endl;
    }
}

void collegeStudyYearPrinter (int& studyYear, std::ostream& output)
{
    output << "And so went your study year " << studyYear << " in college.";
}

void vandalism (std::ostream& output)
{
    output << "\nWould you like to participate in vandalism?" << std::endl
           << "1) Yes" << std::endl
           << "2) No" << std::endl;
}

void economicsStudies (std::ostream& output)
{
    string field = "economics";
    collegeFieldWelcomer(field, output);
    gameOver(output);
}

void socialStudies (std::ostream& output)
{
    string field = "social";
    collegeFieldWelcomer(field, output);
    whileInCollege(output);

}

void itStudies (std::ostream& output)
{
    string field = "IT";
    collegeFieldWelcomer(field, output);
    whileInCollege(output);
}

void uniColManager (std::ostream& output)
{
    string uniCol;
    int oper = 0;

    while (true)
    {
        output << "\n\nGreat choice! Studies await.\n" << std::endl
               << "What'd you like to study?" << std::endl
               << "1) Information Technology" << std::endl
               << "2) Social Sciences" << std::endl
               << "3) Economics" << std::endl;
        std::getline(std::cin, uniCol);

        bool isValueValid = isInputValid(uniCol);
        if (!isValueValid)
        {
            output << "" << std::endl;
            continue;
        }

        oper = stringToInt(uniCol, oper);

        if (oper <= 0 || oper >= 4)
        {
            errorInputSelection(output);
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
        output << "\n\nGreat choice! Studies await." << std::endl
               << "What'd you like to study?" << std::endl
               << "1) Information Technology" << std::endl
               << "2) Social Sciences" << std::endl
               << "3) Economics" << std::endl;
        std::getline(std::cin, uOAS);

        bool isValueValid = isInputValid(uOAS);
        if (!isValueValid)
        {
            output << "" << std::endl;
            continue;
        }

        oper = stringToInt(uOAS, oper);

        if (oper <= 0 || oper >= 4)
        {
            errorInputSelection(output);
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
        output << "Where would you like to apply to? " << std::endl
               << "1: University (College)" << std::endl
               << "2: University of Applied Sciences" << std::endl
               << "3: Rat" << std::endl;
        std::getline(std::cin, college);

        bool isValueValid = isInputValid(college);
        if (!isValueValid)
        {
            output << "" << std::endl;
            continue;
        }

        oper = stringToInt(college, oper);

        if (oper <= 0 || oper >= 4)
        {
            errorInputSelection(output);
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
        output << "\nYou tuned your moped to go 100 km/h" << std::endl
               << "\nYou popped a wheelie and lost control of your moped"
               << std::endl
               << "\nYou fall and get damaged\n" << std::endl;
        gameOver(output);
    }

}

void examVocationalSchool (std::ostream& output)
{
    int answer, score = 0;

    output  << "When was the first computer invented?" << std::endl
            << "1) 1929-1931" << std::endl
            << "2) 1936-1938" << std::endl
            << "3) 1941-1943" << std::endl;
    std::cin >> answer;

    if (answer == 2)
    {
        output << "\nCorrect! That was easy, wasn't it? :]\n" << std::endl;
        score++;
    }
    else
    {
        output << "\nIncorrect! I thought this was general knowledge... "
               << "¯\\_(ツ)_/¯\n" << std::endl;
    }


    output  << "Where is the world's oldest surviving tree?" << std::endl
            << "1) The United States of America" << std::endl
            << "2) Canada" << std::endl
            << "3) Germany" << std::endl;
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! The tree is called Methuselah and it's located "
               << "in California\n" << std::endl;
        score++;
    }
    else
    {
        output << "\nIncorrect! Time to update your tree knowledge! =) "
               << std::endl;
    }


    output << "Don't use a calculator: How much is 34% of 426?" << std::endl
           << "1) 144.84" << std::endl
           << "2) 152.61" << std::endl
           << "3) 159.87" << std::endl;
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! It seems you manage math as well!\n" << std::endl;
        score++;
    }
    else
    {
        output << "\nIncorrect! I don't think it was really that hard...?\n"
               << std::endl;
    }


    output << "Geography: What is the capital of the Australia?" << std::endl
           << "1) Wellington" << std::endl
           << "2) Sydney" << std::endl
           << "3) Canberra" << std::endl;
    std::cin >> answer;

    if (answer == 3)
    {
        output << "\nCorrect! This one was difficult!\n" << std::endl;
        score++;
    }
    else
    {
        output << "\nNoppers! Wellington is the capital of New Zealand."
               << std::endl
               << "Sydney is the largest city but not the capital.\n"
               << std::endl;
    }


    output << "Which cocktail is made of rum, coconut cream, & pineapple juice?"
           << "1) White Russian" << std::endl
           << "2) Bellini" << std::endl
           << "3) Pina Colada" << std::endl;
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
               << "you bookworm!" << std::endl;
    }

    else if (score > 1 && score < 5)
    {
        output << "Your score is " << score << "/5. "
               << "You're a perfectly decent person!" << std::endl;
    }

    else
    {
        output << "Your score is " << score << "/5. "
               << "You could've at least tried..." << std::endl;
    }


}

void routeVocationalSchool (std::ostream& output)
{
    output << "\nGood choice! Now you'll have an exam. "
           << std::endl << std::endl
           << "INPUTTING A VALUE NOT ON THE LIST IS CONSIDERED "
           << "AN INCORRECT ANSWER."
           << std::endl << std::endl
           << "Good luck! \n" << std::endl;
    examVocationalSchool(output);
}

void examHighSchool (std::ostream& output)
{
    int answer, score = 0;

    output  << "How many species of elephant are there?" << std::endl
            << "1) 2" << std::endl
            << "2) 3" << std::endl
            << "3) 5" << std::endl;
    std::cin >> answer;

    if (answer == 2)
    {
        output << "\nCorrect! That was easy :]\n" << std::endl;
        score++;
    }
    else
    {
        output << "\nIncorrect! I thought this was general knowledge... "
               << "¯\\_(ツ)_/¯\n" << std::endl;
    }


    output  << "Which of the Disney princesses is seen the least in the movies?"
            << std::endl
            << "1) Sleeping Beauty" << std::endl
            << "2) Jasmine" << std::endl
            << "3) Snow White" << std::endl;
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! You've done your homework!\n" << std::endl;
        score++;
    }
    else
    {
        output << "\nIncorrect! Time to watch more cartoons! =)\n" << std::endl;
    }


    output << "Don't use a calculator: How much is 30% of 546?" << std::endl
           << "1) 163.8" << std::endl
           << "2) 166.6" << std::endl
           << "3) 173.95" << std::endl;
    std::cin >> answer;

    if (answer == 1)
    {
        output << "\nCorrect! It seems you can handle math as well!\n"
               << std::endl;
        score++;
    }
    else
    {
        output << "\nIncorrect! Was it really that hard?\n"
               << std::endl;
    }


    output << "Geography: What is the formal name of the capital of the USA?\n"
           << "1) Washington" << std::endl
           << "2) Washinton, D.C." << std::endl
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

void fileInstructionsError (std::ostream& output)
{
    output << "PLEASE MAXIMIZE THIS WINDOW" << "\n\n"
           << "PLEASE MAKE SURE YOU'RE USING QT CREATOR AS YOUR IDE "
           << "AS OTHER IDE'S AREN'T SUPPORTED.\n\n\n"
           << "INSTALL INSTRUCTIONS \n\n"
           << "Right click main.cpp on the left hand side "
           << "and click Show Containing Folder. "
           << "Copy instructions.txt and credits.txt." << std::endl
           << "Go up a directory and open the folder Build... "
           << "Paste the files there, then restart the game. " << std::endl
           << "If this message shows up again on the next run, "
           << "you haven't copied the files successfully. "
           << "Please try again." << std::endl
           << "PLEASE MAKE SURE YOU DON'T RENAME THE FILES. "
           << "THE GAME RELIES ON THE DEFAULT NAMES "
           << "AND WON'T WORK WITH DIFFERENT FILE NAMES." << "\n\n"
           << "I hope you enjoy the game! Have fun." << std::endl << std::endl;
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
    output << "\nYou rat! You'll not survive in life like this!\n" << std::endl;
    gameOver(output);
}

void highSchoolManager (std::ostream& output)
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

        oper = stringToInt(highSchool, oper);

        if (oper <= 0 || oper >= 4)
        {
            errorInputSelection(output);
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
            errorInputInteger(output);
            continue;
        }

        oper = stringToInt(placeOfBirth, oper);

        if (oper <= 0 || oper >= 4)
        {
            errorInputSelection(output);
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
            choiceHelsinki(output);
            break;
        case 2:
            choiceTampere(output);
            break;
        case 3:
            choiceTurku(output);
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
    highSchoolManager(output);
    roulette1(output);
    collegeManager(output);
    vandalism(output);

    return 0;
}
