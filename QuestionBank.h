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
        ifstream myFile;
        myFile.open("MathsQuestions.txt");

        string question;

        if (myFile.is_open()) // test
            cout << "myFile is open\n";
        else
            cout << "not open\n";

        while (getline(myFile, question))
        {
            if (question == "")
                continue;

            mathsQ.push_back(question);
        }

        for (auto& i : mathsQ) // iterates through mathsQ and prints each question - for testing
            cout << i << "\n";
        

        myFile.close();
    }

};

#endif