#include <iostream>
#include "Gameplay.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "Card.h"

using namespace std;

// TODO - Constructor
HumanPlayer::HumanPlayer(){
    
}

// TODO - Destructor
HumanPlayer::~HumanPlayer(){
    
}

// TODO - Prompt command from AI
void HumanPlayer::PromptCommand(){
    
}

// TODO - Print current hand
void HumanPlayer::PrintHand(){
    
}

// TODO - Print Legal moves in hand
void HumanPlayer::PrintLegal(){
    
}

// Set Rage Quit flag to true
HumanPlayer* HumanPlayer::RageQuit(){
    mRageQuit = true;
}

// Is Human: yes
bool HumanPlayer::IsHuman(){
    return true;
}