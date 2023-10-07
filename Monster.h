#ifndef MONSTER
#define MONSTER

#include <iostream>

using namespace std;

class Monster : public Npc
{
   

public:
    Monster(string type) : Npc{type} 
    {
        
    }

    void onceDefeated()
    {

    }

 int damage;


};

#endif