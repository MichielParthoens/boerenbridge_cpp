// ComputerPlayer.cpp

#include "computerplayer.h"

void ComputerPlayer::makeMove() {
    if (hand.empty()) {
        std::cout << getName() << " has no cards to play." << std::endl;
        return;
    }
    int randomIndex = rand() % hand.size();                                         // Select a random index from the player's hand
    const Card* selectedCard = &hand[randomIndex];                                  // Play the random card
    std::cout << getName() << " plays: " << selectedCard->toString() << std::endl;
    Player::setPlayedCard(selectedCard);
    hand.erase(hand.begin() + randomIndex);                                         // Remove the played card from the player's hand
}
