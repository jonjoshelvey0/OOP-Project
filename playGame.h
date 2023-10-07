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

Npc* getNPC();
void endGameAssesment(Player& player);

void saveGame(Player& player)
{

}

void showLeaderboard()
{

}

void playGame(QuestionBank& questionBank)
{
    Player player;

    while (false)
    {
        Npc* npc = getNPC();

        //npc -> giveQuestion(player);
        MathsMinotaur m;

        m.giveDivisonQuestion();

        if (player.getHealth() < 1)
        {
            endGameAssesment(player);
            break;
        }
        else
            saveGame(player);
        
        delete npc;
    }
}

#endif