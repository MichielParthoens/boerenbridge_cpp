// ComputerPlayer.cpp

#include "computerplayer.h"

void ComputerPlayer::makeMove() {
    if (hand.empty()) {
        std::cout << getName() << " has no cards to play." << std::endl;
        return;
    }
    const Card* selectedCard = &hand[1];                                  // Play the random card
    std::cout << getName() << " plays: " << selectedCard->toString() << std::endl;
    Player::setPlayedCard(selectedCard);
    hand.erase(hand.begin() + 1);                                         // Remove the played card from the player's hand
}
