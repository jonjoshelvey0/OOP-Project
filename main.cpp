#include <iostream>
#include <string>
#include <thread>

#include "Random.h"
#include "QuestionBank.h"
#include "Player.h"
#include "NPC.h"
#include "Monster.h"
#include "Elf.h"
#include "GeographyGiant.h"
#include "MathsMinotaur.h"
#include "GrammarGoblin.h"
#include "ScienceSphynx.h"
#include "playGame.h"

using namespace std;

void rulesPage()
{
    while (true)
    {

        cout << "\033[2J\033[1;1H";
        cout << " Welcome to Quest4Knowledge, once started you will start the game with a 100 health points. \n";
        cout << " \n Your task is to defeat the monsters you encounter by answering the quesitons they give you correctly. \n";
        cout << " \n If you answer correctly you will be awarded point to your score, but if you gusses incorrectly you will lose health. \n";
        cout << " \n Once you run out of health its game over and you are awarded a game score. \n";
        cout << " \n To help you along the way you will have to opportunity to answer an elves question, getting it right give you health, and getting it wrong comes with no punishment. \n";
        cout << " \n Once you are done your score will be saved to the leader board to keep things competetive \n";
        cout << " \n GOODLUCK AND HAVE FUN !!! \n";
        cout << " \n ------------------------------------------------------------------------------------------------------------------------------------------ \n\n";

        cout << " \n Enter 1 to exit back to main menu : ";
        string selection;
        cin >> selection;

        std::cin.clear();                                                   // put us back in 'normal' operation mode
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input

        if (selection == "1")
        {

            return;
        }
    }
}

// TO DO:
// implement elf
// lookover functions in all the monsters
// do input checking everywhere and try to break the game to find bugs
// a makefile?
// unit testing for ollie burkin
// put in questions in the text files
//

int main()
{
    QuestionBank::fillGeographyQuestions();
    QuestionBank::fillScienceQuestions();
    QuestionBank::fillElfQuestions();
    QuestionBank::fillNames();

    while (true)
    {
        cout << "\033[2J\033[1;1H"; // clears screen
        cout << "Welcome to Quest4Knowledge!\n\n";
        cout << "[1] New Game\n[2] Saved Game\n[3] Rules\n[4] Show Leaderboards\n[5] Quit\n\n";

        cout << "Enter selection: ";
        string selection;
        cin >> selection;

        std::cin.clear();                                                   // put us back in 'normal' operation mode
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input

        if (selection == "1")
        {
            cout << "newgame selected ...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            playGame();
        }
        else if (selection == "2")
        {
            playGame(true);
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (selection == "3")
        {
            rulesPage();
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (selection == "4")
        {
            cout << "not implemented yet ...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (selection == "5")
            return 0;
        else
            cout << "\033[2J\033[1;1H"; // clears screen
    }

    return 0;
}