#include <iostream>

using std::string;

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
            exit(1);
    }

    return oper;
}

// Funktio palauttaa kokonaisluvun arvolla 0-10
int welcomeValueGenerator()
{
    return (rand() % 10) + 1;
}

void askName (std::ostream& output)
{
    string name;
    output << "What's your name? ";
    std::getline(std::cin, name);

    int oper = 0;
    oper = welcomeValueGenerator();
    welcomeSwitch(oper, output, name);
}


