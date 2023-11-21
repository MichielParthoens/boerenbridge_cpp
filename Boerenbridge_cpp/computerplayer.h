// ComputerPlayer.h

#ifndef COMPUTER_PLAYER_H
#define COMPUTER_PLAYER_H

#include "Player.h"

class ComputerPlayer : public Player {
public:
    void makeMove() override;
    // ... (andere functionaliteiten voor een computergestuurde speler)
};

#endif // COMPUTER_PLAYER_H
