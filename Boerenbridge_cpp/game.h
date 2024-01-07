// Game.h

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Card.h"
#include "Player.h"
namespace GameNamespace {
class Game {
public:
    Game(); // Constructor
    void runGame();
    void startGame();

protected:


private:
    std::vector<Player*> players; // usefull container class to store pointers to players
    std::vector<Card> deck;
    int currentPlayerIndex;
    int totalRounds = 8;
    Player& determineRoundWinner();

    void displayScoreboard();
    void createPlayers();
    void createDeck();
    void dealCards();
};
}

#endif // GAME_H
