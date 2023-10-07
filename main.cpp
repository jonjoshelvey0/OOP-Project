#include <iostream>
#include <string>
#include <thread>

#include "Random.h"
#include "Player.h"
#include "NPC.h"
#include "Monster.h"
#include "Elf.h"
#include "GeographyGiant.h"
#include "MathsMinotaur.h"
#include "GrammarGoblin.h"
#include "ScienceSphynx.h"
#include "QuestionBank.h"
#include "playGame.h"

using namespace std;

int main()
{
    QuestionBank questionBank;

    // cout << questionBank.geographyQuestions[0][0] << " " << questionBank.geographyQuestions[0][1];
    // cout << questionBank.scienceQuestions[0][0] << " " << questionBank.scienceQuestions[0][1] <<
    //  " " << questionBank.scienceQuestions[0][2] << " " << questionBank.scienceQuestions[0][3];

    MathsMinotaur m;
    
    m.giveDivisonQuestion();
    
    while (false)
    {
        cout << "\033[2J\033[1;1H";  // clears screen
        cout << "Welcome to Quest4Knowledge!\n\n";
        cout << "[1] New Game\n[2] Saved Game\n[3] Rules\n[4] Show Leaderboards\n[5] Quit\n\n";

        cout << "Enter selection: ";
        string selection;
        cin >> selection;

        if (selection == "1")
        {
            cout << "newgame selected ...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            playGame(questionBank);
        }
        else if (selection == "2")
        {
            cout << "not implemented yet ...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (selection == "3")
        {
            cout << "not implemented yet ...\n";
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