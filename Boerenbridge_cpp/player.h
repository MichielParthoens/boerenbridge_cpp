// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>

class Player { //abstracte base class
public:
    Player(std::string name) : Name(name){}
    virtual void makeMove() = 0; //virtual function + polymorfisme
    void addCardToHand(const Card& card);


    // ... (andere basisfunctionaliteiten voor een speler)

protected:
    const std::string Name;
    std::vector<Card> hand; //encapsulation
};

#endif // PLAYER_H
