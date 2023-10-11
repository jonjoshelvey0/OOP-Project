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

    string_view getName()
    {
        return name;
    }

    void setName(string n)
    {
        name = n;
    }

    friend bool loadSavedGame(Player& player);
};

#endif