#include "NPC.h"
#include "playGame.h"
#include "Monster.h"
#include "MathsMinotaur.h"
#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include "Random.h"

using namespace std;

// testing the output of the maths minotaur, specifically the division questions however can be changed to test all questions

int main()
{
    QuestionBank::fillGeographyQuestions();
    QuestionBank::fillScienceQuestions();
    QuestionBank::fillElfQuestions();
    QuestionBank::fillNames();

    MathsMinotaur m;
    

    m.giveDivisonQuestion();

}