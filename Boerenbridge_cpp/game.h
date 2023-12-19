// Game.h

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Card.h"
#include "Player.h"

class Game {
public:

    void runGame();
    void startGame();

protected:


private:
    std::vector<Player*> players;
    std::vector<Card> deck;


    void createPlayers();
    void createDeck();
    void dealCards();
    void playGame();
};

#endif // GAME_H
