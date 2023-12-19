// HumanPlayer.h

#ifndef HUMAN_PLAYER_H
#define HUMAN_PLAYER_H

#include "Player.h"

class HumanPlayer : public Player {
public:
    HumanPlayer(std::string name) : Player(name){}

    void makeMove() override;
    // ... (andere functionaliteiten voor een menselijke speler)

protected:

};

#endif // HUMAN_PLAYER_H
