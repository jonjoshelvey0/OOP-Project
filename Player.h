#ifndef PLAYER
#define PLAYER

#include <iostream>

using namespace std;

class Player
{
    string name;
    int score = 0;
    int health = 100; // out of 100, cant go above

public:
    Player()
    {
        //cout << "Enter your name: "; // have to implement input checking 
        //cin >> name;
    }

    int getScore()
    {
        return score;
    }

    int getHealth()
    {
        return health;
    }

    void recieveDamage(int damage)
    {
           health -= damage;
    }
};

#endif