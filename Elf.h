#ifndef ELF
#define ELF

#include <iostream>

using namespace std;

class Elf : public Npc
{
    int blessing = Random::get(15, 20);

public:
    Elf() : Npc{"Elf"} {}
    
    void actionOnceDefeated(Player& player)
    {
         player.recieveDamage(-blessing);
        cout << "\n" << name << " blessed you with " << blessing << "additional health.\n";
    }

    void actionWhenIncorrect(Player& player)
    {
        
        cout << "The elf has fleed, you have lost your opportunity :( \n";
    }

    bool giveQuestion()
    {
        // get random num from 0 to size of question array, to make sure that the number will be in bounds
        int index = Random::get(0, QuestionBank::elfQuestions.size() - 1);
        
        cout << QuestionBank::elfQuestions[index][0] << "\n\n";

        vector<bool> questionUsed(5, false);
        string ans;

        for (int a = 1; a < 5; ++a) // randomises the order of multiple choice questions
        {
            int randIndex;

            while (true)
            {
                randIndex = Random::get(1, 4);

                if (!questionUsed[randIndex])
                    break;
            }

            if (randIndex == 1) // the answer to the question
                ans = to_string(a);

            cout << "[" << a << "] " << QuestionBank::elfQuestions[index][randIndex] << "\n";
            questionUsed[randIndex] = true;
        }


        cout << "\nEnter selection: ";
        string userSelection;
        cin >> userSelection;

        if (userSelection == ans)
        {
            cout << "CORRECT !!\n";
            return true;
        }

        cout << "INCORRECT, the correct answer is " << QuestionBank::elfQuestions[index][1] << ".\n";
        return false;
    }

};

#endif