#ifndef MATHS_MINOTAUR
#define MATHS_MINOTAUR

#include <iostream>
#include "Random.h"

using namespace std;

class MathsMinotaur : public Monster
{

public:
    void giveMultTable() // Random generator of a multiplication quesiton
    {

        int x = Random::get(1, 12);
        int y = Random::get(1, 12);

        int correctAnswer = x * y;

        cout << "What is " << x << " * " << y << "? ";

        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == correctAnswer)
        {
            cout << "CORRECT !! " << endl;
        }
        else
        {
            cout << " INCORRECT, the correct answer is !! " << correctAnswer << "." << endl;
        }
    }

    void giveDivisonQuestion() // random generator of a division quesiton
    {
        int dividend = Random::get(1, 100);
        int divisor = Random::get(1, 10);

        dividend = dividend - (dividend % divisor);

        int correctAnswer = dividend / divisor;
        cout << "What is " << dividend << " divided by " << divisor << "? ";

        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == correctAnswer)
        {
            cout << "CORRECT !! " << endl;
        }
        else
        {
            cout << "INCORRECT !! The correct answer is " << correctAnswer << "." << endl;
        }
    }

    void additionQuestion()
    {

        int x = Random::get(1, 100);
        int y = Random::get(1, 100);

        int answerC = x + y;

        cout << "What is " << x << " divided by " << y << "? ";

        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == answerC)
        {
            cout << "CORRECT !! " << endl;
        }
        else
        {
            cout << "INCORRECT !! The correct answer is " << answerC << "." << endl;
        }
    }

    void subtractionQuestion()
    {

        int x = Random::get(1, 100);
        int y = Random::get(1, 100);

        int answerC = x - y;

        cout << "What is " << x << " subtracted by " << y << "? ";

        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == answerC)
        {
            cout << "CORRECT !! " << endl;
        }
        else
        {
            cout << "INCORRECT !! The correct answer is " << answerC << "." << endl;
        }
    }

    void runRandomMathQuestion()
    {
        int randomFunction = Random::get(1, 4); // Generate a random number between 1 and 4

        switch (randomFunction)
        {
        case 1:
            giveMultTable();
            break;
        case 2:
            giveDivisonQuestion();
            break;
        case 3:
            additionQuestion();
            break;
        case 4:
            subtractionQuestion();
            break;
        default:
            cout << "Invalid selection" << endl;
            break;
        }
    }
};

#endif
