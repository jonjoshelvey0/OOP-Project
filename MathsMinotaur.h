#ifndef MATHS_MINOTAUR
#define MATHS_MINOTAUR

#include <iostream>
#include "Random.h"

using namespace std;

class MathsMinotaur : public Monster
{
public:
    MathsMinotaur() : Monster{"Maths Minotaur"} {}

    bool giveQuestion()
    {

        return giveDivisonQuestion();

        switch (Random::get(1, 4))
        {
        case 1:
            return giveMultTable();
        case 2:
            return giveDivisonQuestion();
        case 3:
            return additionQuestion();
        case 4:
            return subtractionQuestion();
        }
    }

    bool giveMultTable() // Random generator of a multiplication quesiton
    {
        int x = Random::get(1, 12);
        int y = Random::get(1, 12);
        int userAnswer;
        int correctAnswer = x * y;

        cout << "What is " << x << " * " << y << "? ";
        cin >> userAnswer;

        if (userAnswer == correctAnswer)
        {
            cout << "CORRECT !!\n";
            return true;
        }

        cout << "INCORRECT, the correct answer is !! " << correctAnswer << ".\n";
        return false;
    }

    bool giveDivisonQuestion() // random generator of a division quesiton
    {
        int x = Random::get(1, 12);
        int y = Random::get(1, 12);
        int userAnswer;

        cout << "\n";

        cout << x << " " << y << " " << x * y << "\n";

        int correctAnswer = (x*y)/x;

        cout << "What is " << x * y << " / " << x << "? ";
        cin >> userAnswer;

        if (userAnswer == correctAnswer)
        {
            cout << "CORRECT !! \n";
            return true;
        }

        cout << "INCORRECT !! The correct answer is " << correctAnswer << ".\n";
        return false;
    }

    bool additionQuestion()
    {
        int x = Random::get(1, 100);
        int y = Random::get(1, 100);
        int answerC = x + y;
        int userAnswer;

        cout << "What is " << x << " +  " << y << "? ";
        cin >> userAnswer;

        if (userAnswer == answerC)
        {
            cout << "CORRECT !! \n";
            return true;
        }

        cout << "INCORRECT !! The correct answer is " << answerC << ".\n";
        return false;
    }

    bool subtractionQuestion()
    {
        int x = Random::get(1, 100);
        int y = Random::get(1, 100);
        int answerC = x - y;
        int userAnswer;

        cout << "What is " << x << " -  " << y << "? ";
        cin >> userAnswer;

        if (userAnswer == answerC)
        {
            cout << "CORRECT !! " << endl;
            return true;
        }

        cout << "INCORRECT !! The correct answer is " << answerC << ".\n";
        return false;
    }
};

#endif
