// Card.cpp

#include "card.h"
using namespace GameNamespace;
Card::Card(Suit suit, Rank rank) : suit(suit), rank(rank) {}

Card::Suit Card::getSuit() const {
    return suit;
}                                   //getter functions

Card::Rank Card::getRank() const {
    return rank;
}

std::string Card::toString() const {//cases voor de string te returnen
    std::string suitStr;
    switch (suit) {
    case HEARTS:
        suitStr = "HEARTS";
        break;
    case DIAMONDS:
        suitStr = "DIAMONDS";
        break;
    case CLUBS:
        suitStr = "CLUBS";
        break;
    case SPADES:
        suitStr = "SPADES";
        break;
    }

    std::string rankStr;
    switch (rank) {
    case ACE:
        rankStr = "ACE";
        break;
    case JACK:
        rankStr = "JACK";
        break;
    case QUEEN:
        rankStr = "QUEEN";
        break;
    case KING:
        rankStr = "KING";
        break;
    default:
        rankStr = std::to_string(rank);
        break;
    }

    return suitStr + " " + rankStr;
}
bool GameNamespace::compareCards(const Card& card1, const Card& card2) { // const reference to card1 and card2 because we don't need a copy and we don't change the object (faster and less memory usage because no copying)
    return card1.rank < card2.rank;
}

