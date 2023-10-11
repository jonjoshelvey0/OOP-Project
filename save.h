#ifndef SAVE
#define SAVE

#include <iostream>
#include <fstream>
#include "Player.h"

using namespace std;

void saveGame(Player &player)
{
    ofstream Myfile("_SavedGame.txt");
    Myfile << player.getScore() << "\n"
           << player.getHealth();
    Myfile.close();
}

bool loadSavedGame(Player &player) // returns if successful or not
{
    ifstream myFile;
    myFile.open("_SavedGame.txt");

    string data;
    getline(myFile, data);

    if (data == "") // no saved game
        return false;

    player.score = stoi(data);

    getline(myFile, data);
    player.health = stoi(data);
    myFile.close();

    return true;
}

#endif