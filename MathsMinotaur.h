#ifndef MATHS_MINOTAUR
#define MATHS_MINOTAUR

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

class MathsMinotaur
{

public:

int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void giveMultTable()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    
    int x = getRandomNumber(1, 12);
    int y = getRandomNumber(1, 12);

    
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


};
   


#endif