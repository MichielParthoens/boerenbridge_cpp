
#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>

class Player {
    friend class Game;
public:
    Player(std::string name);                    // parameterized Constructor
    virtual ~Player(){}                         // destructor
    virtual void makeMove() = 0;                // Pure virtual function
    void addCardToHand(const Card& card);
    const std::string& getName() const;         // useful getters and setters for member variables
    int getRoundsWon() const;
    void setRoundsToWin(int rounds=0);          // default value
    void incrementRoundsWon();                  // usefull member functions
    const Card* getPlayedCard();
    void setPlayedCard(const Card* card);

protected:
    std::vector<Card> hand;

private:
    std::string name;
    int roundsToWin;                            // usefull variables
    int roundsWon;
    const Card* playedCard = nullptr;           // member for the played card + usefull nullptr,This can be beneficial for checking conditions later in the code to determine if a card has been played by the player.
};

#endif // PLAYER_H
