#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include "Random.h"
#include "Player.h"
#include "Monster.h"
#include "GoodMonster.h"
#include "BadMonster.h"
#include "BadMathsMonster.h"

using namespace std;

Monster* getMonster()
{
    // Random::get(1, 10);

    return nullptr;
}

int main()
{
    Player player;

    for (int a = 0; a < 10; ++a)
        cout << Random::get(0, 1) << ' '; // returns a number between 0 to 1 (inclusive)

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