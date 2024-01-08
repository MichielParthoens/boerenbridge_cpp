// Player.cpp

#include "Player.h"
using namespace GameNamespace;
Player::Player(std::string name) : name(name), roundsToWin(0), roundsWon(0) {} // member initialization
void Player::addCardToHand(const Card& card) {
    this->hand.push_back(card);
}

const std::string& Player::getName() const {
    return this->name;
}

//void Player::setName(std::string newName) {
//name = newName;
//}

int Player::getRoundsWon() const {
    return this->roundsWon;
}

void Player::setRoundsToWin(int rounds) {
    this->roundsToWin = rounds;
}

void Player::incrementRoundsWon() {
    this->roundsWon++;
}

// Getter function to retrieve the played card
const Card* Player::getPlayedCard()   {
    return this->playedCard;
}

// Setter function to set the played card
void Player::setPlayedCard(const Card* card) {
    this->playedCard = new Card(*card);
}
