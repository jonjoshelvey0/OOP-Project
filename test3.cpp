#include "NPC.h"
#include "playgame.h"
#include "Monster.h"
#include "GeographyGiant.h"
#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include "Random.h"

using namespace std;

int main(){
    QuestionBank::fillGeographyQuestions();
    QuestionBank::fillScienceQuestions();
    QuestionBank::fillElfQuestions();
    QuestionBank::fillNames();

    GeographyGiant m;
    

    m.giveQuestion();

}
