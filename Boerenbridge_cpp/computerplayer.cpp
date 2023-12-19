// ComputerPlayer.cpp

#include "computerplayer.h"

void ComputerPlayer::makeMove() {
    if (hand.empty()) {
        std::cout << getName() << " has no cards to play." << std::endl;
        return;
    }

    // Select a random index from the player's hand
    int randomIndex = rand() % hand.size();

    // Play the randomly selected card (you can modify this part based on your game logic)
    const Card* selectedCard = &hand[randomIndex];
    std::cout << getName() << " plays: " << selectedCard->toString() << std::endl;
    //std::cout << "lengte vector hand"<< hand.size() << std::endl; test voor vector lengte te zien
    Player::setPlayedCard(selectedCard);

    // Remove the played card from the player's hand
    hand.erase(hand.begin() + randomIndex);
}
