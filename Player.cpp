#include "Player.h"
Player::Player(int id){
    this->id = id;  
}

int Player::get_id(){
    return id;
}

std::vector<Card> Player::get_cards(){
    return cards;
}
void Player::add_card(Card c){
    cards.push_back(c);
}

