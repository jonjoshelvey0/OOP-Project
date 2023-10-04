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
    // Random::get(1, 10);

    return nullptr;
}

int main()
{
    //Player player;
    QuestionBank questionBank;

    while (false)
    {
        Monster* monster = getMonster();


    }


    //            NPC                                               
    //          /     \ 
    //        elf    monster          
    //                /     \
    //             maths    geography

    // the elf is the good one that regenerates health, all monsters are bad
    // NPC class would have attributes like name, giveQuestion(), actionOnceDefeated(), type etc.
    // 

    // should have a question bank class that we query, instead of copying-in the question bank for each new monster or elf



    return 0;
}