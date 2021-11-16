#include <iostream>

int main()
{
    //MUUTTUJAMÄÄRITTELYT

    //Stringit
    std::string syntymapaikka;
    std::string nimi;
    std::string ekaAste;
    std::string tokaAste;
    std::string opinnot;
    std::string tyo1;
    std::string tikoTyo;
    std::string tyo2;
    std::string sosiaaliTyo;

    std::cout << "Tervetuloa pelaamaan Tomte™ "
                 "Corperationin®\n\n\t\tELÄMÄN_PELIÄ©    :)\n" << std::endl
              << "Ohjeet: Vedä aluksi console IDE:ssäsi "
                 "niin isoksi kuin mahdollista. Tämä helpottaa pelaamista "
                 "huomattavasti. Tämän jälkeen klikkaa \"Anna nimesi\" -rivin "
                 "lopusta tyhjältä alueelta.\nVastaa pelissä kirjoittamalla "
                 "numero tai sana pyydetyn mukaisesti ja painamalla sitten "
                 "enteriä. Hyviä pelihetkiä toivottaa Tomten väki!\n"
              << std::endl;

    std::cout << "Syötä nimesi: ";
    std::getline(std::cin, nimi);
    std::cout << "\n" << nimi << " on hieno nimi!" << "\n" << std::endl;

    std::cout << "Valitse syntymäpaikkasi: " << "\n" << std::endl
              << "1: Vantaa" << std::endl
              << "2: Oulu" << std::endl
              << "3: Turku" << std::endl;
    std::getline(std::cin, syntymapaikka);

    return 0;
}
