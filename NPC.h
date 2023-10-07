#ifndef NPC
#define NPC

#include <iostream>
#include "QuestionBank.h"

using namespace std;

class Npc
{
    string name;
    string type;

public:
    Npc(string t) : type{t}, name{QuestionBank::names[Random::get(0, QuestionBank::names.size() - 1)]} {}

    virtual void giveQuestion(Player& player) = 0;
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