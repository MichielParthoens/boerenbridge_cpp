// ComputerPlayer.h

#ifndef COMPUTER_PLAYER_H
#define COMPUTER_PLAYER_H

#include "Player.h"

class ComputerPlayer : public Player {
public:
    ComputerPlayer(std::string name) : Player(name){} //constructor forwarding
    void makeMove() override;
    // ... (andere functionaliteiten voor een computergestuurde speler)
protected:

};

#endif // COMPUTER_PLAYER_H
