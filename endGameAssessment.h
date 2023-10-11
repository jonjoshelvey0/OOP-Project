#ifndef ENDGAMEASSESSMENT
#define ENDGAMEASSESSMENT

#include <iostream>

#include "Player.h"

using namespace std;

void endGameAssesment(Player &player)
{
    cout << "\n\n\u001b[38;5;128mYou defeated " << player.getScore() / 15 << ((player.getScore() / 15 == 1) ? " monster!" : " monsters!");

    cout << "\n\nTotal score: " << player.getScore() << "\u001b[0m";
    
    cout << "\n\n\n(Press Enter to go to main menu) ";
    std::cin.clear();                                                   // put us back in 'normal' operation mode
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
}

#endif