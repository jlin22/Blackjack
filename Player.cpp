#include "Player.h"
Player::Player(const int id){
    this->id = id;  
    this->stay = false;
}

int Player::get_id(){
    return id;
}

void Player::add_card(const Card c){
    cards.push_back(c);
}

std::string Player::get_cards(){
    std::string d = "Player ";
    d.append(std::to_string(id));
    d.append(": \t");
    d.append(display_cards(cards));
    return d;
}



