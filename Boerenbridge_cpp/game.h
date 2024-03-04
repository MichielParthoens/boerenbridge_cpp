// Game.h

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "card.h"
#include "Player.h"
namespace GameNamespace {
class Game {
public:
    Game(); // default Constructor
    void runGame();
    void startGame();

protected:


private:
    std::vector<Player*> players; // usefull container class to store pointers to players
    std::vector<Card> deck;
    unsigned char currentPlayerIndex; // 0 .. 255
    unsigned char totalRounds = 8; // 0 .. 255
    Player& determineRoundWinner();

    void displayScoreboard();
    void createPlayers();
    void createDeck();
    void dealCards();
    void shuffleDeck();
    void shuffleDeck2();
};
}

#endif // GAME_H
