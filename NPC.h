#ifndef NPC
#define NPC

#include <iostream>

using namespace std;

class Npc
{
    string name;
    string type;

public:
    Npc(string type) : type{type}
    {
        // name = getName();
    }

    virtual void giveQuestion()
    {

    }
    virtual void actionOnceDefeated()
    {

    }

    string_view getName()
    {
        return name;
    }

    string_view getType()
    {
        return type;
    }
};

#endif