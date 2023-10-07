#ifndef GEOGRAPHY_GIANT
#define GEOGRAPHY_GIANT

#include <iostream>

using namespace std;

class GeographyGiant : public Monster
{

public:

    GeographyGiant(string name, string type) : Monster{name, type} {}

};

#endif