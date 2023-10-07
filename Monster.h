#ifndef MONSTER
#define MONSTER

#include <iostream>
#include "Player.h"

using namespace std;

class Monster : public Npc
{
public:
    int damage;

    Monster(string type) : Npc{type} 
    {
        damage = 30;
    }

    void actionOnceDefeated(Player& player)
    {
        player.addScore(15);
        //cout << "Congratulations, you have defeated " << name << "\n";
    }

    void actionWhenIncorrect(Player& player)
    {
        player.recieveDamage(damage);
        cout << "\n" << name << " attacked you for -" << damage << ".\n";
    }
};

#endif