#include "Game.h"
using namespace std;

//Deck already intialized
Game::Game(){
}

int Game::get_turn(){
    return turn;
}

//Players = 2;
int next_turn(){
    turn = (turn + 1) % 2;    
}

std::string declare_turn(){
    return "It is currently Player " + 
}
