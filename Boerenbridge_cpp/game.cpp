// Game.cpp
#include "humanplayer.h"
#include "computerplayer.h"
#include "game.h"
#include <algorithm>
#include <iostream>

void Game::createPlayers() { // object composition, player en card worden gebruikt voor de logica van het spel
    int amountOfHumanPlayers = 0;
    int amountOfComputerPlayers = 0;


    std::cout << " the max amount of humanplayers is 4";
    std::cout << " the max amount of AI players is 4";
    std::cout << " the minimum amount of players required to play the game is 3 players";
    while(amountOfHumanPlayers<=0 || amountOfHumanPlayers>=5){
    std::cout << "Enter the amount of humanplayers you want to play with: ";
    std::cin >> amountOfHumanPlayers;  // Ask for integer input
    // Check if the input was successful
    if (std::cin.fail()) {
        std::cerr << "Error: Invalid input. Please enter an number." << std::endl;
        // Handle the error as needed
    }}
    while(amountOfHumanPlayers+amountOfComputerPlayers<=2 || amountOfComputerPlayers >=5 || amountOfComputerPlayers <0){
    std::cout << "Enter the amount of AI players you want to play with: ";
    std::cin >> amountOfComputerPlayers;
    // Check if the input was successful
    if (std::cin.fail()) {
        std::cerr << "Error: Invalid input. Please enter an number." << std::endl;
        // Handle the error as needed

    }}
    // Aannemen dat numPlayers geldig is (bijvoorbeeld tussen 2 en 4)
    // Maak spelers en voeg ze toe aan de vector
    for (int i = 0; i < amountOfHumanPlayers; ++i) {
        players.push_back(new HumanPlayer("Michiel"));
    }
    for (int i = 0; i < amountOfComputerPlayers; ++i) {
        players.push_back(new ComputerPlayer("Michiel"));
    }
}

void Game::createDeck() {
    for (int suit = Card::HEARTS; suit <= Card::SPADES; ++suit) {
        for (int rank = Card::ACE; rank <= Card::KING; ++rank) {
            deck.push_back(Card(static_cast<Card::Suit>(suit), static_cast<Card::Rank>(rank)));
        }
    }
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

    std::cout << "Implementeer de logica van het spel hier." << std::endl;
}

void Game::startGame() {
    createPlayers();
    createDeck();
    dealCards();
    playGame();
}
