// Game.h

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Card.h"
#include "Player.h"

class Game {
public:
    Game(); // Constructor
    void runGame();
    void startGame();

protected:


private:
    std::vector<Player*> players;
    std::vector<Card> deck;
    int currentPlayerIndex;
    int totalRounds;
    Player& determineRoundWinner();

    void displayScoreboard();
    void createPlayers();
    void createDeck();
    void dealCards();
    void playGame();
    int askHits();
};


#endif // GAME_H
