#include <iostream>
#include "Gameplay.h"
#include "Card.h"
using namespace std;

// TODO - Constructor 
Player::Player(Gameplay* gameplay) : mGameplay(gameplay) {

}

// TODO - Copy Constructor
Player::Player(const Player& player){
    
}

// TODO - Destructor
Player::~Player(){
    
}

// TODO - give cards to respecting players
void Player::RecieveCards(){
    
}

// TODO - Discards first card 
void Player::DiscardCards(){
    
}

// Returns the current score
void Player::GetScore(){
    return mScore;
}

void Player::AddToScore(int score){
    mScore += score;
}