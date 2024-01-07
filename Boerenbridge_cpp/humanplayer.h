// HumanPlayer.h

#ifndef HUMAN_PLAYER_H
#define HUMAN_PLAYER_H

#include "Player.h"
namespace GameNamespace {
class HumanPlayer : public Player {
public:
    HumanPlayer(std::string name) : Player(name){} // constructor forwarding, forwarding to the constructor from the base class player
    void makeMove() override;

protected:

};
}
#endif // HUMAN_PLAYER_H

