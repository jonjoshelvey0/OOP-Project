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
#include "ScienceSphynx.h"
#include "playGame.h"
#include "rulesPage.h"

using namespace std;

// error message
// realtionships between classes - UML

// TO DO:
// lookover functions in all the monsterss
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
        cout << "Welcome to " << "\u001b[36m" << "Quest4Knowledge" << "\u001b[0m" << "!\n\n";
        cout << "[1] New Game\n[2] Saved Game\n[3] Rules\n[4] Show Leaderboards\n[5] Quit\n\n";
        
        cout << "Enter selection: ";
        string selection;
        getline(cin, selection);

        if (selection.size() != 1) // invalid output
            continue;

        if (selection == "1")
        {
            cout << "\nnew game selected...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            playGame(false);
        }
        else if (selection == "2")
        {
            cout << "\nsaved game selected...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            playGame(true);
        }
        else if (selection == "3")
        {
            rulesPage();
        }
        else if (selection == "4")
        {
            cout << "not implemented yet ...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (selection == "5")
            return 0;
        
        // std::cin.clear();                                                   // put us back in 'normal' operation mode
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
    }

    return 0;
}