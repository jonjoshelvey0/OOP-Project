#ifndef QUESTIONBANK
#define QUESTIONBANK

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// forward declarations
class QuestionBank;
void getScienceQuestions(QuestionBank* qb);
void getGrammarQuestions(QuestionBank* qb);
void getGeographyQuestions(QuestionBank* qb);
void getNames(QuestionBank* qb);;

class QuestionBank
{
public:
    vector<vector<string>> geographyQuestions;
    //vector<vector<string>> grammarQuestions;
    vector<vector<string>> scienceQuestions;
    vector<string> names;

    QuestionBank()
    {
        getGeographyQuestions(this);
        //getGrammarQuestions(this);
        getScienceQuestions(this);
        getNames(this);
    }
};

void getScienceQuestions(QuestionBank* qb)
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
        qb -> scienceQuestions.push_back(vector<string>()); // creates new vector for question and answer set

        qb -> scienceQuestions[qb -> scienceQuestions.size() - 1].push_back(question); // pushes back question

        getline(myFile, question); // reads next line, will be the answer
        qb -> scienceQuestions[qb -> scienceQuestions.size() - 1].push_back(question); // pushes back answer

        int x = 4;
        while (x--)
        {
            getline(myFile, question); // reads next line, will be the wrong answer
            qb -> scienceQuestions[qb -> scienceQuestions.size() - 1].push_back(question); // pushes back wrong answer
        }

        getline(myFile, question);
    }
    
    myFile.close();
}

void getGrammarQuestions(QuestionBank* qb)
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
        qb -> geographyQuestions.push_back(vector<string>()); // creates new vector for question and answer set

        qb -> geographyQuestions[qb -> geographyQuestions.size() - 1].push_back(question); // pushes back question

        getline(myFile, question); // reads next line, will be the answer

        qb -> geographyQuestions[qb -> geographyQuestions.size() - 1].push_back(question); // pushes back answer

        getline(myFile, question); // reads the empty new line (does nothing with it - for layour purposes in txt file)
    }
    
    myFile.close();
}

void getGeographyQuestions(QuestionBank* qb)
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
        qb -> geographyQuestions.push_back(vector<string>()); // creates new vector for question and answer set

        qb -> geographyQuestions[qb -> geographyQuestions.size() - 1].push_back(question); // pushes back question

        getline(myFile, question); // reads next line, will be the answer

        qb -> geographyQuestions[qb -> geographyQuestions.size() - 1].push_back(question); // pushes back answer

        getline(myFile, question); // reads the empty new line (does nothing with it - for layour purposes in txt file)
    }
    
    myFile.close();
}

void getNames(QuestionBank* qb)
{
    ifstream myFile;
    myFile.open("NPC Names.txt");

    string question;

    if (myFile.is_open()) // test
        cout << "myFile is open\n";
    else
        cout << "not open\n";

    while (getline(myFile, question))
        qb -> names.push_back(question);
    
    myFile.close();
}

#endif