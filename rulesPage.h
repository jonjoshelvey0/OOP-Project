#ifndef RULESPAGE
#define RULESPAGE

#include <iostream>
#include <string>

using namespace std;

void rulesPage()
{
    cout << "\033[2J\033[1;1H";
    cout << "Welcome to Quest4Knowledge, once started you will start the game with a 100 health points. \n";
    cout << "\nYour task is to defeat the monsters you encounter by answering the questions they give you correctly. \n";
    cout << "\nIf you answer correctly you will be awarded points to your score, but if you guess incorrectly you will lose health. \n";
    cout << "\nOnce you run out of health, its game over and you are awarded a game score. \n";
    cout << "\nTo help you along the way you will have to opportunity to answer an Elves question, getting it right give you health, and getting it wrong comes with no punishment.\n";
    cout << "\nGOODLUCK AND HAVE FUN !!! \n";
    cout << "\n------------------------------------------------------------------------------------------------------------------------------------------\n\n";

    cout << "\n\n\n(Press Enter to go back to main menu) ";

    std::cin.clear();                                                   // put us back in 'normal' operation mode
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
}

#endif