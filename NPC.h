#ifndef NPC
#define NPC

#include <iostream>

using namespace std;

class Npc
{
    string name;
    vector<string> questionBank;

public:
    Npc(string& n) : name{n} {}

    void saveGame()
    {

    }

    void recieveAttack()
    {

    }
};

#endif