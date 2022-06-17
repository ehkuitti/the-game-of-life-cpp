#include <iostream>
#include <string>

void generateRandomWelcomeMessage(std::string& playerName, int& switchOperator)
{

    switch(switchOperator)
        {
            case 0:
                std::cout << "I love the name " << playerName << "!"
                          << std::endl;
                break;
            case 1:
                std::cout << playerName << " is a nice name!" << std::endl;
                break;
            case 2:
                std::cout << playerName << " is the nicest name I have ever "
                                           "heard!"
                       << std::endl;
                break;
            case 3:
                std::cout << playerName << " is a fine name if you ask me!"
                          << std::endl;
                break;
            case 4:
                std::cout << playerName << " has to be the coolest name in "
                                           "existence!"
                       << std::endl;
                break;
            case 5:
                std::cout << playerName << ", I've never heard of your name!"
                          << std::endl;
                break;
            case 6:
                std::cout << "Wow, is it really the " << playerName
                       << " playing this game? I'm honored!" << std::endl;
                break;
            case 7:
                std::cout << "Wow, it's the " << playerName << "!" << std::endl;
                break;
            case 8:
                std::cout << "I never knew you liked this game, "
                       << playerName << "!" << std::endl;
                break;
            case 9:
                std::cout << "It's really you, " << playerName << ". Wow! "
                          << std::endl;
                break;
            case 10:
                std::cout << "You can't imagine how lucky you, " << playerName
                       << ", are playing this rare gem!" << std::endl;
                break;
            default:
                std::cout << "Something went wrong. Please restart the game"
                       << std::endl;
                exit(1);
        }

}
