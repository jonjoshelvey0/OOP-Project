#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include "Random.h"
#include "Player.h"
#include "Monster.h"
#include "Elf.h"
#include "GeographyGiant.h"
#include "MathsMinotaur.h"
#include "GrammarGoblin.h"
#include "ScienceSphynx.h"
#include "QuestionBank.h"

using namespace std;

Monster* getMonster()
{
    Random::get(1, 10);

    return nullptr;
}


int main()
{
    QuestionBank questionBank;



    while (true)
    {
        cout << "Welcome to Quest4Knowledge!\n\n";
        cout << "[1] New Game\n[2] Saved Game\n[3] Rules\n[4] Show Leaderboards\n[5] Quit\n\n";

        cout << "Enter selection: ";
        string selection;
        cin >> selection;

        if (selection == "1")
            cout << "newgame selected ...";
        else if (selection == "5")
            return 0;
        else
        {
            cout << "\033[2J\033[1;1H"; // clears screen
            continue;
        }



        //playGame();

        // (1) New Game
        // (2) Saved Game
        // [3] Rules
        // [4] Show Leaderboards
        // [5] Quit

        // switch (mainMenu())
        // {
        //     case 1: // newgame
        //         Player player;
        //         break;
        //     case 2: // saved game
        //         //Player player{a, b, c};
        //         break;
        // }

        while (false)
        {
            Monster* monster = getMonster();

            // monster.giveQuestion(player);


            // if (player.getHealth() < 1)
            //     break;
            
            // GrammarGoblin gob;

            // gob.giveQuestion();

            //saveGame();
        }

        // print score
    }

    return 0;
}