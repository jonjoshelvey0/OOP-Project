#ifndef SCIENCE_SPHYNX
#define SCIENCE_SPHYNX

#include <iostream>

using namespace std;

class ScienceSphynx : public Monster
{

public:

    ScienceSphynx() : Monster{"Science Sphynx"} {}

   void giveQuestion(Player& player)
   {
    
   }

};

#endif