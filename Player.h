#ifndef _PLAYER_
#define _PLAYER_

#include <ostream>
#include <istream>
#include "Gameplay.h"
#include "Card.h"

Class Player {
public:
    Player(Gameplay*);
    Player(const Player&);
    virtual ~Player();
    virtual void PromptCommand() = 0;
    virtual bool IsHuman() = 0;
    
    void RecieveCards();
    void DiscardCards();
    int  GetScore();
    void AddToScore(int);
    
protected:
    Card*       mHand;
    Card*       mDiscard;
    Gameplay*   mGameplay;
    int         mScore;
};

#endif