#ifndef MONSTER
#define MONSTER

#include <iostream>

using namespace std;

class Monster : public Npc
{
    int damage;

public:
    Monster(string name, string type) : Npc{name, type} 
    {
        
    }

    void onceDefeated()
    {

    }
<<<<<<< HEAD

    void giveQuestion(Player& abc)
    {

        // if (type == "grammar")
        // {

        // }
        // else if ()

        // verifyInput();

        // abc.getHealth();
        

        // if (wrong)
        //     attackPlayer();
    }



=======
>>>>>>> a93f6961f560eb258a0e4c6ddab2e0d1f4ec71fb
};

#endif