#include "NPC.h"
#include "playGame.h"
#include "Monster.h"
#include "ScienceSphynx.h"
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

    ScienceSphynx m;
    

    m.giveQuestion();

}
