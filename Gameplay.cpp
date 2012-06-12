#include <iostream>
#include "Gameplay.h"

#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Card.h"

#include "shuffle.cpp"
using namespace std;

// Constructor
Gameplay::Gameplay(){
    // shuffle deck
    shuffle(mCardsArray);
    
    // create players either human or computer
    for(int i = 0; i < 4; i++){
        cout << "Is player " << i + 1 << " a human(h) or a computer(c)?" << endl;
        char player_type;
        cin >> player_type;
        if(player_type == 'h'){
            mPlayers[i] = new HumanPlayer();
        } else if(player_type == 'c'){
            mPlayers[i] = new ComputerPlayer();
        }
             
    }
}

// TODO - Destructor 
Gameplay::~Gameplay(){
    
}

// TODO - Actual Gameplay
void Gameplay::Update(){
    
}

// TODO - Assign cards to players
void Gameplay::GiveOutCards(){
    
}

// TODO - Print cards on table
void Gameplay::PrintCardsOnTable(){
    
}