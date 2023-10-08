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
        
        cout << QuestionBank::geographyQuestions[index][0] << ' ';

        string ans;
        cin >> ans;

        if (QuestionBank::geographyQuestions[index][1] == ans)
        {
            cout << "CORRECT !!\n";
            return true;
        }

        cout << "INCORRECT, the correct answer is " << QuestionBank::geographyQuestions[index][1] << ".\n";
        return false;
    }

};
#endif