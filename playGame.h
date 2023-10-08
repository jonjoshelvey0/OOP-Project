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
#include "GrammarGoblin.h"
#include "ScienceSphynx.h"
#include "QuestionBank.h"

using namespace std;

Npc* getNPC()
{

    // if (Random::get(1, 10) == 1) // return an elf instead of a monster, 1 in 10 chance
    //     return new Elf{};
    
return new ScienceSphynx{};

    switch (Random::get(1, 4))
    {
        case 1:
            return new ScienceSphynx{};
        case 2:
            return new MathsMinotaur{};
        case 3:
            return new GeographyGiant{};
        case 4:
            return new ScienceSphynx{};
            //return new GrammarGoblin{};
    }

    return NULL;
}

void endGameAssesment(Player& player)
{

}

void saveGame(Player& player)
{

}

void showLeaderboard()
{

}

void playGame()
{
    cout << "\033[2J\033[1;1H";

    Player player;

    while (true)
    {
        Npc* npc = getNPC();

        cout << "Health: " <<player.getHealth() << "\n" << "Score: " << player.getScore() << "\n\n";
        cout << "You have encountered " << npc -> getName() << " the " << npc -> getType() << "!\n\n";

        if (npc -> giveQuestion())                  // answered correct
            npc -> actionOnceDefeated(player);
        else                                        // incorrect
            npc -> actionWhenIncorrect(player);
        
        std::cin.clear(); // put us back in 'normal' operation mode
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
        
        cout << "\n(Press Enter to Continue) ";
        cin.ignore();

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
}

#endif