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
    if (Random::get(1, 10) == 1) // return an elf instead of a monster, 1 in 10 chance
        return new Elf{};
    
    switch (Random::get(1, 4))
    {
        case 1:
            return new ScienceSphynx{};
        case 2:
            return new MathsMinotaur{};
        case 3:
            return new GeographyGiant{};
        case 4:
            return new GrammarGoblin{};
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

void playGame(QuestionBank& questionBank)
{
    Player player;

    while (true)
    {
        Npc* npc = getNPC();

        //npc -> giveQuestion(player);
        MathsMinotaur m;

        m.giveQuestion(player);

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