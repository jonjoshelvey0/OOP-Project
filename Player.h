#ifndef PLAYER
#define PLAYER

#include <iostream>

using namespace std;

class Player
{
    int score = 0;
    int health = 100; // starting health

public:
    Player() {}

    int getScore()
    {
        return score;
    }

    void addScore(int s)
    {
        score += s;
    }

    int getHealth()
    {
        return health;
    }

    void recieveDamage(int damage)
    {
        health -= damage;
    }

    friend bool loadSavedGame(Player& player);
};

#endif