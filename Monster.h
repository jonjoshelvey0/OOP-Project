#ifndef MONSTER
#define MONSTER

#include <iostream>

using namespace std;

class Monster : public Npc
{
    int damage;

public:
    Monster(string type) : Npc{type} 
    {
        
    }

    void onceDefeated()
    {

    }
};

#endif