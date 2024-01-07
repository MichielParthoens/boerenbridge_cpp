// ComputerPlayer.h

#ifndef COMPUTER_PLAYER_H
#define COMPUTER_PLAYER_H

#include "Player.h"
namespace GameNamespace {
class ComputerPlayer : public Player {
public:
    ComputerPlayer(std::string name) : Player(name){} //constructor forwarding
    void makeMove() override; //override voor polymorphistische functie makemove

protected:

};
}
#endif // COMPUTER_PLAYER_H
