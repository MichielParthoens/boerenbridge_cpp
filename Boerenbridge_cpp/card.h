// Card.h

#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
namespace GameNamespace {
class Card {
public:
    enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };
    enum Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
    Card(Suit suit, Rank rank); // parameterized constructor
    Card(const Card& otherCard) : suit(otherCard.suit), rank(otherCard.rank){}; // copy constructor
    ~Card(){}	//destructor											{}
    bool operator < ( const Card & other ) const		{ return( rank < other.rank ); } // call by reference
    bool operator < ( const Card * const other ) const	{ return( rank < other->rank ); } // call by pointer
    bool operator <= ( const Card & other ) const		{ return( rank <= other.rank ); } // call by reference
    bool operator <= ( const Card * const other ) const	{ return( rank <= other->rank ); }// call by pointer
    bool operator > ( const Card & other ) const		{ return( rank > other.rank ); } // call by reference
    bool operator > ( const Card * const other ) const	{ return( rank > other->rank ); } // call by pointer
    bool operator >= ( const Card & other ) const		{ return( rank >= other.rank ); } // call by reference
    bool operator >= ( const Card * const other ) const	{ return( rank >= other->rank ); } // call by pointer
    bool operator == ( const Card & other ) const		{ return( ( rank == other.rank ) && ( suit == other.suit ) ); }//not for pointers, normally a card should be unique !
    bool operator == ( const Card * const other ) const	{ return( ( rank == other->rank ) && ( suit == other->suit ) ); }
    bool operator != ( const Card & other ) const		{ return( ( rank != other.rank ) || ( suit != other.suit ) ); }//not for pointers, normally a card should be unique !
    bool operator != ( const Card * const other ) const	{ return( ( rank != other->rank ) || ( suit != other->suit ) ); }
    // Getter-functies voor de kaartinformatie
    Suit getSuit() const; //getter functions
    Rank getRank() const;

    // Functie om de kaart te tonen (bijv. "HEARTS ACE")
    std::string toString() const; // usefull string class usage
    friend bool compareCards(const Card& card1, const Card& card2); // Declaration of the friend function

private:
    Suit suit;
    Rank rank;
};

bool compareCards(const Card& card1, const Card& card2); // Declaration of the friend function
}

#endif // CARD_H
