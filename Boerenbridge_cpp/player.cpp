// Player.cpp

#include "Player.h"

Player::Player(std::string name) : name(name), roundsToWin(0), roundsWon(0) {}

void Player::addCardToHand(const Card& card) {
    hand.push_back(card);
}

const std::string& Player::getName() const {
    return name;
}

void Player::setName(std::string newName) {
    name = newName;
}

int Player::getRoundsWon() const {
    return roundsWon;
}

void Player::setRoundsToWin(int rounds) {
    roundsToWin = rounds;
}

void Player::incrementRoundsWon() {
    roundsWon++;
}

// Getter function to retrieve the played card
const Card* Player::getPlayedCard()   {
    return playedCard;
}

// Setter function to set the played card
void Player::setPlayedCard(const Card* card) {
    playedCard = card;
}
