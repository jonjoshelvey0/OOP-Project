#ifndef GETNPC
#define GETNPC

#include "Random.h"
#include "QuestionBank.h"
#include "Player.h"
#include "NPC.h"
#include "Monster.h"
#include "Elf.h"
#include "GeographyGiant.h"
#include "MathsMinotaur.h"
#include "ScienceSphynx.h"

using namespace std;

Npc *getNPC()
{
    if (Random::get(1, 10) == 1) // return an elf instead of a monster, 1 in 10 chance
        return new Elf{};

    int x = Random::get(1, 3);
    //x = (x == 4 ? 2 : x); // basically making the maths minotaur pop up more because its more fun

    switch (x)
    {
    case 1:
        return new ScienceSphynx{};
    case 2:
        return new MathsMinotaur{};
    case 3:
        return new GeographyGiant{};
    }

    return NULL;
}

#endif