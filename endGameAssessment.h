#ifndef ENDGAMEASSESSMENT
#define ENDGAMEASSESSMENT

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

void endGameAssesment(Player &player)
{
    player.getHealth();
}

#endif