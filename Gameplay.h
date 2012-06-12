#ifndef _GAMEPLAY_
#define _GAMEPLAY_

#include <ostream>
#include <istream>
#include <map>

#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Card.h"

#include "shuffle.cpp"

Class Gameplay {
public:
    Gameplay();         // want an array of pointers to cards;
    ~Gameplay();
    
    void Update();                      // The game happens in here. 
    void GiveOutCards();                // assigns cards to players
    void PrintCardsOnTable();           // prints cards that are on the table
    void AddCardToTable(
    
private:
    static int   CARD_COUNT = 52;
    Player*     mPlayers[4];
    Card*       mCardsArray[52];        // Shuffled pointers
    Card*       mActualCards;           // a linked list of cards
    map<bool>   mCardsOnTable[52];      // arranged in order Clubs, Diamonds, Hearts, Spades, from Ace to King
};

#endif