// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>

class Player {
public:
    virtual void makeMove() = 0;
    void addCardToHand(const Card& card);

    // ... (andere basisfunctionaliteiten voor een speler)

protected:
    std::vector<Card> hand;
};

#endif // PLAYER_H
