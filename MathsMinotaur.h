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

        if (verifyOutput(x, '*', y, x * y))
            return true;
        else
            return false;
    }

    bool giveDivisonQuestion() // random generator of a division quesiton
    {
        int x = Random::get(1, 12);
        int y = Random::get(1, 12);

        if (verifyOutput(x * y, '/', x, y))
            return true;
        else
            return false;
    }

    bool additionQuestion()
    {
        int x = Random::get(1, 100);
        int y = Random::get(1, 100);

        if (verifyOutput(x, '+', y, x + y))
            return true;
        else
            return false;
    }

    bool subtractionQuestion()
    {
        int x = Random::get(1, 100);
        int y = Random::get(1, 100);

        if (verifyOutput(x, '-', y, x - y))
            return true;
        else
            return false;
    }

    bool verifyOutput(int leftOperand, char symbol, int rightOperand, int answer)
    {
        string userAnswer;

        while (true)
        {
            cout << "What is " << leftOperand << ' ' << symbol << ' ' << rightOperand << "? ";
            getline(cin, userAnswer);

            bool flag = true;
            for (int a = 0; a < static_cast<int>(userAnswer.size()); ++a)
            {
                if (userAnswer[a] == ' ' || userAnswer[a] < '0' || userAnswer[a] > '9' || userAnswer.size() > 6)
                    flag = false;
            }

            if (flag) // correct input
                break;

            cout << "\x1b[1A" // Move cursor up one
                 << "\x1b[2K" // Delete the entire line
                 << "\r";
        }

        if (stoi(userAnswer) == answer)
        {
            cout << "\n\u001b[32mCORRECT!!\u001b[0m\n";
            return true;
        }

        cout << "\n\u001b[31mINCORRECT\u001b[0m, the correct answer is " << answer << ".\n";
        return false;
    }
};

#endif
