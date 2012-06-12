#ifndef _HUMANPLAYER_
#define _HUMANPLAYER_

#include <ostream>
#include <istream>
#include "Player.h"
#include "Card.h"

Class Player : public Player {
public:
    Player(char);
    virtual ~Player();
    void PromptCommand();
    void PrintHand();
    void PrintLegal();
    void RageQuit();
    bool IsHuman();
private: 
    bool mRageQuit;
};

#endif