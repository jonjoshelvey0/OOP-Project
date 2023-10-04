#ifndef QUESTIONBANK
#define QUESTIONBANK

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class QuestionBank
{
    vector<string> mathsQ;

public:
    QuestionBank()
    {
        cout << "test";
        ifstream file;
        file.open("MathsQuestions.txt");

        string question;
        cout << "test";

        if (file.is_open())
            cout << "file is open";
        else
            cout << "not open";

        while (file)
        {
            getline(file, question);
            mathsQ.push_back(question);
        }

        for (auto& i : mathsQ)
            cout << i;
        
        cout << mathsQ[0];

        file.close();
    }

};

#endif