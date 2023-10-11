#ifndef GEOGRAPHY_GIANT
#define GEOGRAPHY_GIANT

#include <iostream>

using namespace std;

class GeographyGiant : public Monster
{

public:
    GeographyGiant() : Monster{"Geography Giant"} {}

    bool giveQuestion()
    {
        // get random num from 0 to size of question array, to make sure that the number will be in bounds
        int index = Random::get(0, QuestionBank::geographyQuestions.size() - 1);

        string selection;

        while (true)
        {
            cout << QuestionBank::geographyQuestions[index][0] << ' ';
            getline(cin, selection);

            bool flag = true;

            for (int a = selection.size() - 1; a >= 0; --a) // checks for trailing whitespaces
            {
                if (selection[a] != ' ')
                    break;
                else
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                break;

            cout << "\x1b[1A" // Move cursor up one
                 << "\x1b[2K" // Delete the entire line
                 << "\r"
                 << "\x1b[1A"; // Move cursor up one
        }

        if (QuestionBank::geographyQuestions[index][1] == selection)
        {
            cout << "\n\u001b[32mCORRECT!!\u001b[0m\n";
            return true;
        }

        cout << "\n\u001b[31mINCORRECT\u001b[0m, the correct answer is " << QuestionBank::geographyQuestions[index][1] << ".\n";
        return false;
    }
};

#endif