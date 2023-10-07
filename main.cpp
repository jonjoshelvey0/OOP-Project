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

Npc* getNpc()
{
    
    int x = Random::get(1, 10);

    

    return nullptr;
}

void saveGame(Player player)
{

}

int main()
{
    QuestionBank questionBank;

    while (true)
    {
        cout << "\033[2J\033[1;1H";  // clears screen
        cout << "Welcome to Quest4Knowledge!\n\n";
        cout << "[1] New Game\n[2] Saved Game\n[3] Rules\n[4] Show Leaderboards\n[5] Quit\n\n";

        cout << "Enter selection: ";
        string selection;
        cin >> selection;

        if (selection == "1")
        {
            cout << "newgame selected ...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if ()
        {

        }
        else if (selection == "5")
            return 0;
        else
        {
            cout << "\033[2J\033[1;1H"; // clears screen
            continue;
        }

        while (false)
        {
            Npc* npc = getNpc();

            npc -> giveQuestion(player);

            if (player.getHealth() < 1)
                break;
            else
                saveGame(player);


        }

        // print score
    }

    return 0;
}