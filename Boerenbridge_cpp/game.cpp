// Game.cpp
#include "humanplayer.h"
#include "computerplayer.h"
#include "game.h"
#include "card.h"
#include <algorithm>
#include <iostream>
using namespace GameNamespace;
Game::Game() : currentPlayerIndex(0), totalRounds(0) {
    createPlayers();
}

void Game::createPlayers() { // object composition, player en card worden gebruikt voor de logica van het spel
    int amountOfHumanPlayers = 0;
    int amountOfComputerPlayers = 0;


    std::cout << " the max amount of humanplayers is 4, minimum is 1" << std::endl;
    std::cout << " the max amount of AI players is 4, minimum is 1" << std::endl;
    std::cout << " the minimum amount of players required to play the game is 3 players" << std::endl;
    while(amountOfHumanPlayers<=0 || amountOfHumanPlayers>=5){
    std::cout << "Enter the amount of humanplayers you want to play with: ";
    std::cin >> amountOfHumanPlayers;  // Ask for integer input

    if (std::cin.fail()) {             // Check if the input was successful
        std::cerr << "Error: Invalid input. Please enter an number." << std::endl;
    }}

    while(amountOfHumanPlayers+amountOfComputerPlayers>=7 || amountOfComputerPlayers >=5 || amountOfComputerPlayers <=0){
    std::cout << "Enter the amount of AI players you want to play with: ";
    std::cin >> amountOfComputerPlayers;

    if (std::cin.fail()) {             // Check if the input was successful
        std::cerr << "Error: Invalid input. Please enter an number." << std::endl;

    }}
    for (int i = 0; i < amountOfHumanPlayers; ++i) {
    std::cout << "enter a name for humanplayer ";
        std::cout << i;
    std::cout << ": " << std::endl;
        std::string name;
    std::cin >> name;
        players.push_back(new HumanPlayer(name));     // Maak menselijke spelers en voeg ze toe aan de vector
    }
    for (int i = 0; i < amountOfComputerPlayers; ++i) {
        std::cout << "enter a name for AI player ";
        std::cout << i;
        std::cout << ": " << std::endl;
        std::string name;
        std::cin >> name;
        players.push_back(new ComputerPlayer(name));  // Maak ai gestuurde spelers en voeg ze toe aan de vector
    }
}

void Game::createDeck() { //deck opstellen
    for (int suit = Card::HEARTS; suit <= Card::SPADES; ++suit) {
        for (int rank = Card::ACE; rank <= Card::KING; ++rank) {
            deck.push_back(Card(static_cast<Card::Suit>(suit), static_cast<Card::Rank>(rank)));
        }
    }
}



void Game::dealCards() {
    int numPlayers = players.size();
    int cardsPerPlayer = 10;

    for (int i = 0; i < numPlayers; ++i) {
        for (int j = 0; j < cardsPerPlayer; ++j) {
            players[i]->addCardToHand(deck.back());
            deck.pop_back();
        }
    }
}

void Game::startGame() {
    std::cout << "the players of this game are: " << std::endl;
    for (const Player* player : players) {
        std::cout << "Player Name: " << player->getName() << std::endl;
        // Add more print statements or access other player information as needed
    }
    createDeck();
    dealCards();

        // Ask players how many rounds they want to win
        for (Player* player : players) {
            int roundsToWin = 0;
        std::cout << player->getName() << ", how many rounds do you want to win? ";
            std::cin >> roundsToWin;
        player->setRoundsToWin(roundsToWin);
            totalRounds = 8;
        }

        // Start the rounds
        for (int round = 1; round <= totalRounds; ++round) {
            std::cout << "----- Round " << round << " -----" << std::endl;
            std::cout <<" "<<std::endl;

            // Each player makes a move (plays a card)
            for (Player* player : players) {

            player->makeMove();
            }

            // Determine the winner of the round
            Player& roundWinner = determineRoundWinner();
            roundWinner.incrementRoundsWon();

            // Display the scoreboard
            displayScoreboard();
        }

        // Display the final scoreboard
        std::cout << "======================== FINAL SCOREBOARD ========================" << std::endl;
        displayScoreboard();
    }

    Player& Game::determineRoundWinner() {
        Player* roundWinner = players[0];  // Initialize with the first player
        for (int i = 1; i < players.size(); ++i) {
            if (GameNamespace::compareCards( *roundWinner->getPlayedCard(), *players[i]->getPlayedCard())) {
            roundWinner = players[i];  // Update the roundWinner pointer
            }
        }
        return *roundWinner;  // Dereference to return the actual winner
    }


void Game::displayScoreboard() {
        std::cout <<" "<<std::endl;
        std::cout << "--------------------------------------------------Scoreboard:------------------------------------------------------------" << std::endl;
        std::cout <<" "<<std::endl;
        for (Player* player : players) {
            std::cout << player->getName() << ": " << player->getRoundsWon() << " won rounds" << std::endl;
        }
        std::cout <<" "<<std::endl;
        std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout <<" "<<std::endl;
}

void Game::shuffleDeck(){
        std::vector<Card> deck1;
        std::vector<Card> deck2;
        for(int i=3;i>=0; i--){
            int randomIndex = rand() % deck.size();
            for (int y = randomIndex; y>=0; y--){
            deck1[y] = deck[y];
            deck1.push_back(deck[y]);
            }
            for(int z = randomIndex+1; z <= deck.size(); z++){
            deck2[z] = deck[z];
            }

        }}

void Game::shuffleDeck2(){
        std::vector<Card> newDeck;
        std::vector<Card> underCut;
        std::vector<Card> middleCut;
        std::vector<Card> upperCut;
        int underIndex = 5;
        int middleIndex = 5;
        int upperIndex = 5;
        while(middleIndex >=2){
        underIndex = rand() % deck.size();
        middleIndex = rand() % (deck.size()-underIndex);
        upperIndex = (deck.size()-(underIndex + middleIndex));



        }
}
