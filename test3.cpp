#include "NPC.h"
#include "playGame.h"
#include "Monster.h"
#include "GeographyGiant.h"
#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include "Random.h"

using namespace std;

// testing the output of the geography giant, specifically the questions and answers from the text file

int main(){
    QuestionBank::fillGeographyQuestions();
    QuestionBank::fillScienceQuestions();
    QuestionBank::fillElfQuestions();
    QuestionBank::fillNames();

    GeographyGiant m;
    

    m.giveQuestion();

}
