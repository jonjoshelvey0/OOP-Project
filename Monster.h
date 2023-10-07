#ifndef MONSTER
#define MONSTER

#include <iostream>

using namespace std;

class Monster : public Npc
{
public:
    int damage;

    Monster(string type) : Npc{type} 
    {
        damage = 30;
    }

    void onceDefeated()
    {
        
    }


};

#endif