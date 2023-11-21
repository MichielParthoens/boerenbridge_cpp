// HumanPlayer.h

#ifndef HUMAN_PLAYER_H
#define HUMAN_PLAYER_H

#include "Player.h"

class HumanPlayer : public Player {
public:
    void makeMove() override;
    // ... (andere functionaliteiten voor een menselijke speler)
};

#endif // HUMAN_PLAYER_H
