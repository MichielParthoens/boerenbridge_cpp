// Game.cpp

#include "game.h"
#include <algorithm>
#include <iostream>

Game::Game(int numPlayers) {
    // Aannemen dat numPlayers geldig is (bijvoorbeeld tussen 2 en 4)
    // Maak spelers en voeg ze toe aan de vector
    for (int i = 0; i < numPlayers; ++i) {
        players.push_back(new Player());
    }
}

void Game::createDeck() {
    for (int suit = Card::HEARTS; suit <= Card::SPADES; ++suit) {
        for (int rank = Card::ACE; rank <= Card::KING; ++rank) {
            deck.push_back(Card(static_cast<Card::Suit>(suit), static_cast<Card::Rank>(rank)));
        }
    }
}

void Game::shuffleDeck() {
    std::random_shuffle(deck.begin(), deck.end());
}

void Game::dealCards() {
    int numPlayers = players.size();
    int cardsPerPlayer = deck.size() / numPlayers;

    for (int i = 0; i < numPlayers; ++i) {
        for (int j = 0; j < cardsPerPlayer; ++j) {
            players[i]->addCardToHand(deck.back());
            deck.pop_back();
        }
    }
}

void Game::playGame() {
    // Implementeer de hoofdlogica van het spel hier
    // Bijvoorbeeld: beurtvolgorde, speleracties, enzovoort.
    std::cout << "Implementeer de logica van het spel hier." << std::endl;
}

void Game::startGame() {
    createDeck();
    shuffleDeck();
    dealCards();
    playGame();
}
