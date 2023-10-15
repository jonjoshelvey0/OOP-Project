#include "getNPC.h"
#include "Random.h"
#include "QuestionBank.h"
#include "Player.h"
#include "NPC.h"
#include "Monster.h"
#include "Elf.h"
#include "GeographyGiant.h"
#include "MathsMinotaur.h"
#include "ScienceSphynx.h"

// testing the player header file to ensure it can intake information and the score/health works correctly

int main() {
    // Create a player
    Player player;
    player.setName("John Doe");  // Set player's name
    player.addScore(50);         // Increase player's score

    // Display player's information
    cout << "Player Name: " << player.getName() << endl;
    cout << "Player Score: " << player.getScore() << endl;
    cout << "Player Health: " << player.getHealth() << endl;

    // Simulate the player receiving damage
    int damage = 20;
    player.recieveDamage(damage);

    // Display updated player information after receiving damage
    cout << "\nPlayer received " << damage << " damage." << endl;
    cout << "Updated Player Health: " << player.getHealth() << endl;

    return 0;
}