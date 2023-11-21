// Card.h

#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card {
public:
    enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };
    enum Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };

    Card(Suit suit, Rank rank);

    // Getter-functies voor de kaartinformatie
    Suit getSuit() const;
    Rank getRank() const;

    // Functie om de kaart te tonen (bijv. "HEARTS ACE")
    std::string toString() const;

private:
    Suit suit;
    Rank rank;
};

#endif // CARD_H
