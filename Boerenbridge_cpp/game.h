// Game.h

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Card.h"
#include "Player.h"

class Game {
public:
    Game(int numPlayers);
    void startGame();

private:
    std::vector<Player*> players;
    std::vector<Card> deck;

    void createDeck();
    void shuffleDeck();
    void dealCards();
    void playGame();
};

#endif // GAME_H
