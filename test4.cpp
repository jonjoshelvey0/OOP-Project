#include "NPC.h"
#include "playgame.h"
#include "Monster.h"
#include "QuestionBank.h"
#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <vector>
#include "Random.h"

using namespace std;

// checking the question banks for each subject output correctly 

int main(){
    QuestionBank::fillGeographyQuestions();
    QuestionBank::fillScienceQuestions();
    QuestionBank::fillElfQuestions();
    QuestionBank::fillNames();

    cout << QuestionBank::scienceQuestions[0][0] << endl;
    cout << QuestionBank::scienceQuestions[0][1] << endl;
    cout << QuestionBank::scienceQuestions[0][2] << endl;
    cout << QuestionBank::scienceQuestions[0][3] << endl;
    cout << QuestionBank::scienceQuestions[0][4] << endl;
    cout << endl;


   cout << QuestionBank::geographyQuestions[0][0] << endl;
   cout << QuestionBank::geographyQuestions[0][1] << endl;
   cout << endl;

   cout << QuestionBank::elfQuestions[0][0] << endl;
   cout << QuestionBank::elfQuestions[0][1] << endl;
   cout << QuestionBank::elfQuestions[0][2] << endl;
   cout << QuestionBank::elfQuestions[0][3] << endl;
   cout << QuestionBank::elfQuestions[0][4] << endl;


}