#ifndef RULESPAGE
#define RULESPAGE

#include <iostream>
#include <string>

using namespace std;

void rulesPage()
{
    while (true)
    {
        cout << "\033[2J\033[1;1H";
        cout << "Welcome to Quest4Knowledge, once started you will start the game with a 100 health points. \n";
        cout << "\nYour task is to defeat the monsters you encounter by answering the quesitons they give you correctly. \n";
        cout << "\nIf you answer correctly you will be awarded point to your score, but if you gusses incorrectly you will lose health. \n";
        cout << "\nOnce you run out of health its game over and you are awarded a game score. \n";
        cout << "\nTo help you along the way you will have to opportunity to answer an elves question, getting it right give you health, and getting it wrong comes with no punishment.\n";
        cout << "\nOnce you are done your score will be saved to the leader board to keep things competetive \n";
        cout << "\nGOODLUCK AND HAVE FUN !!! \n";
        cout << "\n------------------------------------------------------------------------------------------------------------------------------------------\n\n";

        cout << " \nEnter 1 to exit back to main menu : ";
        string selection;
        getline(cin, selection);

        if (selection.size() != 1) // invalid output
            continue;

        if (selection == "1")
            return;
    }
}

#endif