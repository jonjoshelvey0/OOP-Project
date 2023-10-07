#ifndef NPC
#define NPC

#include <iostream>

using namespace std;

class Npc
{
    string name;
    string type;

public:
    Npc(string name, string type) {}

    virtual void giveQuestion()
    {

    }
    virtual void actionOnceDefeated()
    {

    }
};

#endif