#ifndef PLAYGAME
#define PLAYGAME

#include <iostream>
#include <string>
#include <thread>

#include "Random.h"
#include "Player.h"
#include "NPC.h"
#include "Monster.h"
#include "Elf.h"
#include "GeographyGiant.h"
#include "MathsMinotaur.h"
#include "GrammarGoblin.h"
#include "ScienceSphynx.h"
#include "QuestionBank.h"

using namespace std;

Npc* getNPC()
{

    if (Random::get(1, 1) == 1) // return an elf instead of a monster, 1 in 10 chance
        return new Elf{};

    switch (Random::get(1, 3))
    {
        case 1:
            return new ScienceSphynx{};
        case 2:
            return new MathsMinotaur{};
        case 3:
            return new GeographyGiant{};
        
    }

    return NULL;
}

void endGameAssesment(Player& player)
{

}

void saveGame(Player& player)
{
    ofstream Myfile("SavedGame.txt");
    Myfile << player.getName() << "\n" << player.getScore() << "\n" << player.getHealth();
    Myfile.close();
}

void showLeaderboard()
{

}

bool loadSavedGame(Player& player) // returns if successful or not
{
    ifstream myFile;
    myFile.open("SavedGame.txt");

    string data;
    getline(myFile, data);

    if (data == "") // no saved game
        return false;
    
    player.name = data;

    getline(myFile, data);
    player.score = stoi(data);

    getline(myFile, data);
    player.health = stoi(data);

    return true;
}

void playGame(bool savedGame)
{
    cout << "\033[2J\033[1;1H";

    Player player;

    if (savedGame)
    {
        if (loadSavedGame(player))
        {
            cout << "loading saved game...\n";

            std::this_thread::sleep_for(std::chrono::seconds(1));
            cout << "\033[2J\033[1;1H";
        }
        else // if not successful, return to main menu
        {
            cout << "no saved game...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            return;
        }
    }
    else
    {
        string name;
        cout << "Enter your name: "; // have to implement input checking 
        cin >> name;
        player.setName(name);
    }

    while (true)
    {
        Npc* npc = getNPC();

        cout << "Health: " <<player.getHealth() << "\n" << "Score: " << player.getScore() << "\n\n";
        cout << "You have encountered " << npc -> getName() << " the " << npc -> getType() << "!\n\n";

        if (npc -> giveQuestion())                  // answered correct
            npc -> actionOnceDefeated(player);
        else                                        // incorrect
            npc -> actionWhenIncorrect(player);
        
         std::cin.clear(); // put us back in 'normal' operation mode
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
        
        cout << "\n(Press Enter to Continue) ";
        cin.ignore();

        cout << "\033[2J\033[1;1H";
        
        if (player.getHealth() < 1)
        {
            cout << "game over.\n\n";
            endGameAssesment(player);
            std::this_thread::sleep_for(std::chrono::seconds(2));
            break;
        }
        else
            saveGame(player);
        
        delete npc;
    }

    ofstream MyFile("SavedGame.txt");
    MyFile.close();
}

#endif