#include "Random.h"
#include "QuestionBank.h"
#include "Player.h"
#include "NPC.h"
#include "Monster.h"
#include "Elf.h"
#include "GeographyGiant.h"
#include "MathsMinotaur.h"
#include "ScienceSphynx.h"
#include "getNPC.h"

// testing getNPC to see if the expected output gives randomised monsters each time 

int main() {

    QuestionBank::fillGeographyQuestions();
    QuestionBank::fillScienceQuestions();
    QuestionBank::fillElfQuestions();
    QuestionBank::fillNames();

    Npc* npc = getNPC();

    if (npc != nullptr) {
        string npcType; 

        if (dynamic_cast<Elf*>(npc) != nullptr) {
            npcType = "Elf";
        } else if (dynamic_cast<ScienceSphynx*>(npc) != nullptr) {
            npcType = "ScienceSphynx";
        } else if (dynamic_cast<MathsMinotaur*>(npc) != nullptr) {
            npcType = "MathsMinotaur";
        } else if (dynamic_cast<GeographyGiant*>(npc) != nullptr) {
            npcType = "GeographyGiant";
        } else {
            npcType = "Unknown"; 
        }

        cout << "Created NPC of type: " << npcType << endl;
        delete npc;
    } else {
        cout << "Failed to create NPC." << endl;
    }

    return 0;
}
