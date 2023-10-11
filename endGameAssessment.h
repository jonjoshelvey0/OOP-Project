#ifndef ENDGAMEASSESSMENT
#define ENDGAMEASSESSMENT

#include <iostream>

#include "Player.h"

using namespace std;

void endGameAssesment(Player &player)
{
    cout << "\n\nYou defeated " << player.getScore() / 30 << ((player.getScore() / 30 == 1) ? " monster!" : " monsters!");

    cout << "\n\nTotal score: " << player.getScore();;
    
    cout << "\n\n\n\n(Press Enter to go to main menu) ";
    std::cin.clear();                                                   // put us back in 'normal' operation mode
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
}

#endif