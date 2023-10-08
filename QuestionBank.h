#ifndef QUESTIONBANK
#define QUESTIONBANK

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace QuestionBank
{
    vector<vector<string>> geographyQuestions;
    vector<vector<string>> scienceQuestions;
    //static vector<vector<string>> grammarQuestions;   NOT DONE
    vector<string> names;

void fillScienceQuestions()
{
    ifstream myFile;
    myFile.open("Science Questions.txt");

    string question;

    if (myFile.is_open()) // test
        cout << "myFile is open\n";
    else
        cout << "not open\n";

    while (getline(myFile, question)) // reads first line, puts it into 'question' variable (will be the question)
    {
        QuestionBank::scienceQuestions.push_back(vector<string>()); // creates new vector for question and answer set

        QuestionBank::scienceQuestions[QuestionBank::scienceQuestions.size() - 1].push_back(question); // pushes back question

        getline(myFile, question); // reads next line, will be the answer
        QuestionBank::scienceQuestions[QuestionBank::scienceQuestions.size() - 1].push_back(question); // pushes back answer

        int x = 3;
        while (x--) // read next 3 lines as wrong answers
        {
            getline(myFile, question); // reads next line, will be the wrong answer
            QuestionBank::scienceQuestions[QuestionBank::scienceQuestions.size() - 1].push_back(question); // pushes back wrong answer
        }

        getline(myFile, question);
    }
    
    myFile.close();
}

void fillGrammarQuestions()
{
    ifstream myFile;
    myFile.open("Grammar Questions.txt");

    string question;

    if (myFile.is_open()) // test
        cout << "myFile is open\n";
    else
        cout << "not open\n";

    while (getline(myFile, question)) // reads first line, puts it into 'question' variable (will be the question)
    {
        QuestionBank::geographyQuestions.push_back(vector<string>()); // creates new vector for question and answer set

        QuestionBank::geographyQuestions[QuestionBank::geographyQuestions.size() - 1].push_back(question); // pushes back question

        getline(myFile, question); // reads next line, will be the answer

        QuestionBank::geographyQuestions[QuestionBank::geographyQuestions.size() - 1].push_back(question); // pushes back answer

        getline(myFile, question); // reads the empty new line (does nothing with it - for layour purposes in txt file)
    }
    
    myFile.close();
}

void fillGeographyQuestions()
{
    ifstream myFile;
    myFile.open("Geography Questions.txt");

    string question;

    if (myFile.is_open()) // test
        cout << "myFile is open\n";
    else
        cout << "not open\n";

    while (getline(myFile, question)) // reads first line, puts it into 'question' variable (will be the question)
    {
        QuestionBank::geographyQuestions.push_back(vector<string>()); // creates new vector for question and answer set

        QuestionBank::geographyQuestions[QuestionBank::geographyQuestions.size() - 1].push_back(question); // pushes back question

        getline(myFile, question); // reads next line, will be the answer

        QuestionBank::geographyQuestions[QuestionBank::geographyQuestions.size() - 1].push_back(question); // pushes back answer

        getline(myFile, question); // reads the empty new line (does nothing with it - for layour purposes in txt file)
    }
    
    myFile.close();
}

void fillNames()
{
    ifstream myFile;
    myFile.open("NPC Names.txt");

    string question;

    if (myFile.is_open()) // test
        cout << "myFile is open\n";
    else
        cout << "not open\n";

    while (getline(myFile, question))
        QuestionBank::names.push_back(question);
    
    myFile.close();
}
}

#endif