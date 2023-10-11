#ifndef PLAYGAME
#define PLAYGAME

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
#include "ScienceSphynx.h"
#include "QuestionBank.h"

#include "save.h"
#include "getNPC.h"
#include "endGameAssessment.h"

using namespace std;

void playGame(bool savedGame)
{
    cout << "\033[2J\033[1;1H";

    Player player;

    if (savedGame)
    {
        if (!loadSavedGame(player)) // if not successful, return to main menu
        {
            cout << "\nno saved game...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            return;
        }
    }
    // else
    // {
    //     string name;
    //     cout << "Enter your name: "; // have to implement input checking
    //     cin >> name;
    //     player.setName(name);
    // }

    while (true)
    {
        Npc *npc = getNPC();

        cout << "Health: " << player.getHealth() << "\n"
             << "Score: " << player.getScore() << "\n\n";
        cout << "You have encountered " << npc->getName() << " the " << npc->getType() << "!\n\n";

        if (npc->giveQuestion()) // answered correct
            npc->actionOnceDefeated(player);
        else // incorrect
            npc->actionWhenIncorrect(player);

        cout << "\n(Press Enter to Continue) ";
        std::cin.clear();                                                   // put us back in 'normal' operation mode
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input

        cout << "\033[2J\033[1;1H";

        if (player.getHealth() < 1)
        {
            cout << "game over.\n\n";
            endGameAssesment(player);
            std::this_thread::sleep_for(std::chrono::seconds(2));
            break;
        }
        else
            saveGame(player);

        delete npc;
    }

    ofstream MyFile("SavedGame.txt"); // clear saved game
    MyFile.close();
}

#endif