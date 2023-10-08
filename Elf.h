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

    bool giveQuestion()
    {
        
    }

};

#endif