#ifndef MONSTER
#define MONSTER

#include <iostream>

using namespace std;

class Monster : public Npc
{
    int damage;

public:
    Monster(string name, string type) : Npc{name, type} 
    {
        
    }

    void onceDefeated()
    {

    }
};

#endif