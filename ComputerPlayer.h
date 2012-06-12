#ifndef _COMPUTERPLAYER_
#define _COMPUTERPLAYER_

#include <ostream>
#include <istream>
#include "Player.h"
#include "Card.h"

Class ComputerPlayer : public Player{
public:
    ComputerPlayer();
    virtual ~ComputerPlayer();
    void PromptCommand();
    bool IsHuman();
};

#endif