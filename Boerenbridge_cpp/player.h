
#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>

class Player {
public:
    Player(std::string name); // Constructor
    virtual void makeMove() = 0; // Pure virtual function
    void addCardToHand(const Card& card);
    const std::string& getName() const;
    void setName(std::string newName);
    int getRoundsWon() const;
    void setRoundsToWin(int rounds);
    void incrementRoundsWon();
    const Card* getPlayedCard();
    void setPlayedCard(const Card* card);

protected:
    std::vector<Card> hand;

private:
    std::string name;
    int roundsToWin;
    int roundsWon;
    const Card* playedCard = nullptr; // member for the played card
};

#endif // PLAYER_H
