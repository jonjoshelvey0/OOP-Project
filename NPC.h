#ifndef NPC
#define NPC

#include <iostream>

using namespace std;

class Npc
{
    string name;

public:
    Npc(string_view n) : name{n} {}

    void saveGame()
    {
        
    }

    void recieveAttack()
    {

    }
};

#endif