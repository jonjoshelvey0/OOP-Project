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
    // show rules
}

// TO DO:
// implement grammargoblin
// implement elf
// do rules page
// fix division with maths minotaur
// lookover functions in all the monsters
// // do input checking everywhere and try to break the game to find bugs
// implement saving game and loading in saved game
// a makefile?
// unit testing for ollie burkin 
// put in questions in the text files
//

int main()
{
    QuestionBank::fillGeographyQuestions();
    QuestionBank::fillScienceQuestions();
    QuestionBank::fillGrammarQuestions();
    QuestionBank::fillNames();

    while (true)
    {
        cout << "\033[2J\033[1;1H";  // clears screen
        cout << "Welcome to Quest4Knowledge!\n\n";
        cout << "[1] New Game\n[2] Saved Game\n[3] Rules\n[4] Show Leaderboards\n[5] Quit\n\n";

        cout << "Enter selection: ";
        string selection;
        cin >> selection;

        std::cin.clear(); // put us back in 'normal' operation mode
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input

        if (selection == "1")
        {
            cout << "newgame selected ...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            playGame();
        }
        else if (selection == "2")
        {
            cout << "not implemented yet ...\n";
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