#include "Player.h"
Player::Player(int id){
    this->id = id;  
}

int Player::get_id(){
    return id;
}

void Player::add_card(Card c){
    cards.push_back(c);
}

std::string Player::get_cards(){
    return display_cards(cards);
}



