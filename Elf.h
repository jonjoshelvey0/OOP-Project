#ifndef ELF
#define ELF

#include <iostream>

using namespace std;

class Elf : public Npc
{

public:
    Elf() : Npc{"Elf"} {}
    
    void onceDefeated()
    {

    }

    void giveQuestion(Player& player)
    {
        
    }

};

#endif