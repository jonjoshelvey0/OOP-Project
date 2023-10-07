#ifndef NPC
#define NPC

#include <iostream>
#include "Player.h"
#include "QuestionBank.h"

using namespace std;

class Npc
{
protected:
    string type;
    string name;

public:
    Npc(string t) : type{t}, name{QuestionBank::names[Random::get(0, QuestionBank::names.size() - 1)]} {}

    virtual bool giveQuestion() = 0;
    virtual void actionOnceDefeated(Player& player) = 0;
    virtual void actionWhenIncorrect(Player& player) = 0;

    string_view getName()
    {
        return name;
    }

    string_view getType()
    {
        return type;
    }

    virtual ~Npc() {}
};

#endif