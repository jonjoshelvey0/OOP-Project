#ifndef MATHS_MINOTAUR
#define MATHS_MINOTAUR

#include <iostream>
#include "Random.h"

using namespace std;

class MathsMinotaur: public Monster
{

public:


void giveMultTable()
{
   
    int x = Random::get(1, 12);
    int y = Random::get(1, 12);

    
    int correctAnswer = x * y;


    cout << "What is " << x << " * " << y << "? ";

    
    int userAnswer;
    cin >> userAnswer;

    
    if (userAnswer == correctAnswer) {
        cout << "CORRECT !! " << endl;
    } else {
        cout << " INCORRECT !! " << correctAnswer << "." << endl;
    }
}

void giveDivisonQuestion()
{
    int dividend = Random::get(1, 100);
    int divisor =   Random::get(1, 10); 
  
    dividend = dividend - (dividend % divisor);
    
    int correctAnswer = dividend / divisor;
    cout << "What is " << dividend << " divided by " << divisor << "? ";

    int userAnswer;
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "CORRECT !! " << endl;
    } else {
        cout << "INCORRECT !! The correct answer is " << correctAnswer << "." << endl;
    }
}





};
   









#endif